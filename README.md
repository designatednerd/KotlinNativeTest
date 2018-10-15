# KotlinNativeTest
Wee sandbox for playing with Kotlin/Native

## Notes

### Setup

Tutorial for setting up a Multiplatform project: [https://kotlinlang.org/docs/tutorials/native/mpp-ios-android.html](https://kotlinlang.org/docs/tutorials/native/mpp-ios-android.html)

From that, there are a couple places you have to manually add folders if you're using Android Studio (particularly when creating the `SharedCode` folder at the same level as the `app` folder, then adding subfolders to it), but otherwise it's now fairly simple to get set up. 

### Usage

- Make sure to use `List<T>` instead of `Array<T>` in Kotlin if you want things to be `[T]` in Swift - otherwise the type doesn't get converted properly. 

- **Enum Classes** are NOT imported as `enum`s, but as some kind of class which you can't subclass. You can't have an exhaustive `switch` without a `default` case the way you can with Swift `enum`s, but you can still switch using pattern matching:  

    ```swift
    func printForDay(_ day: DayOfWeek) {
        switch day {
        case .monday:
            print("You can fall apart")
        case .tuesday,
             .wednesday:
            print("Break my heart")
        case .thursday:
            print("Doesn't even start")
        case .friday:
            print("I'm in love")
        case .saturday:
            print("Wait")
        case .sunday:
            print("Always comes too late")
        default:
            fatalError("Not a day")
        }
    }
    ```

    If you attempt to create a sublcass, you sort of can, but will get this warning when trying to create an initializer:

    `Cannot override 'init' which has been marked unavailable`
    
    I'm not entirely sure why this is, but it does seem like it's related to the fact that the Konan compiler generates Obj-C code rather than Swift code, and Obj-C doesn't play as nicely with enums as Swift.

- **Sealed Classes** are also imported as a non-enum class. You get the same error if you try to override them as you do with Enum Classes. You can still `switch` on the class type with pattern matching, but again, you will need to add a `default` case for the switch case to be considered exhaustive: 

    ```swift
    func printHoursType(_ hours: HoursOfOperation) {
        switch hours {
        case is HoursOfOperation.Always:
            print("Always")
        case is HoursOfOperation.Variable:
            print("Variable")
        case is HoursOfOperation.Weekdays:
            print("Weekdays")
        case is HoursOfOperation.Weekends:
            print("Weekends")
        default:
            fatalError("Not a recognized subclass")
        }
    }
    ```
    


- From Swift, `companion` objects can be accessed in a manner similar to accessing them in Java - you must instantiate an instance of the companion object then call the companion methods on it:         

    ```swift
    let dow = DayOfWeek.Companion().weekendDays
    ```

- Additionally, free functions in a given file can also be accessed in a manner similar to accessing them in Java, by using `FileNameKt` like a class name and calling it like a `static` instance member: 

    ```swift
    CommonKt.createMessage()
    ```

- Once you've got it all set up, moving things from one folder to another is a total pain in the ass. You have to re-run the entire command to build the framework from scratch, and you have to nuke some combination of a) Derived Data and b) The build folder for your shared K/N project.

