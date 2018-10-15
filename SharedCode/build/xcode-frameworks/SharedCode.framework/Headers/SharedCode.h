#import <Foundation/Foundation.h>

@class SharedCodeColor, SharedCodeKotlinEnum, SharedCodeDayOfWeek, SharedCodeDayOfWeekCompanion, SharedCodeKotlinArray, SharedCodeHourType, SharedCodeHours, SharedCodeHoursOfOperation, SharedCodeHoursOfOperationAlways, SharedCodeHoursOfOperationWeekdays, SharedCodeHoursOfOperationWeekends, SharedCodeHoursOfOperationVariable, UIColor;

@protocol SharedCodeKotlinComparable, SharedCodeKotlinIterator;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SharedCodeMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedCodeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SharedCodeNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SharedCodeByte : SharedCodeNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SharedCodeUByte : SharedCodeNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SharedCodeShort : SharedCodeNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SharedCodeUShort : SharedCodeNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SharedCodeInt : SharedCodeNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SharedCodeUInt : SharedCodeNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SharedCodeLong : SharedCodeNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SharedCodeULong : SharedCodeNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SharedCodeFloat : SharedCodeNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SharedCodeDouble : SharedCodeNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SharedCodeBoolean : SharedCodeNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedCodeKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedCodeKotlinEnum : KotlinBase <SharedCodeKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedCodeKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Color")))
@interface SharedCodeColor : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedCodeColor *red;
@property (class, readonly) SharedCodeColor *yellow;
@property (class, readonly) SharedCodeColor *green;
@property (class, readonly) SharedCodeColor *blue;
@property (class, readonly) SharedCodeColor *fuchsia;
@property (class, readonly) SharedCodeColor *black;
@property (class, readonly) SharedCodeColor *gray;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedCodeColor *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) double alphaComponent;
@property (readonly) double redComponent;
@property (readonly) double greenComponent;
@property (readonly) double blueComponent;
@property (readonly) NSString *hexString;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DayOfWeek")))
@interface SharedCodeDayOfWeek : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedCodeDayOfWeek *monday;
@property (class, readonly) SharedCodeDayOfWeek *tuesday;
@property (class, readonly) SharedCodeDayOfWeek *wednesday;
@property (class, readonly) SharedCodeDayOfWeek *thursday;
@property (class, readonly) SharedCodeDayOfWeek *friday;
@property (class, readonly) SharedCodeDayOfWeek *saturday;
@property (class, readonly) SharedCodeDayOfWeek *sunday;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedCodeDayOfWeek *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DayOfWeek.Companion")))
@interface SharedCodeDayOfWeekCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) SharedCodeKotlinArray *weekdays;
@property (readonly) SharedCodeKotlinArray *weekendDays;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HourType")))
@interface SharedCodeHourType : KotlinBase
- (instancetype)initWithHour:(int32_t)hour amPm:(NSString *)amPm __attribute__((swift_name("init(hour:amPm:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedCodeHourType *)doCopyHour:(int32_t)hour amPm:(NSString *)amPm __attribute__((swift_name("doCopy(hour:amPm:)")));
@property (readonly) int32_t hour;
@property (readonly) NSString *amPm;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Hours")))
@interface SharedCodeHours : KotlinBase
- (instancetype)initWithForDay:(SharedCodeDayOfWeek *)forDay fromHour:(float)fromHour toHour:(float)toHour __attribute__((swift_name("init(forDay:fromHour:toHour:)"))) __attribute__((objc_designated_initializer));
- (NSString *)hoursString __attribute__((swift_name("hoursString()")));
- (SharedCodeDayOfWeek *)component1 __attribute__((swift_name("component1()")));
- (float)component2 __attribute__((swift_name("component2()")));
- (float)component3 __attribute__((swift_name("component3()")));
- (SharedCodeHours *)doCopyForDay:(SharedCodeDayOfWeek *)forDay fromHour:(float)fromHour toHour:(float)toHour __attribute__((swift_name("doCopy(forDay:fromHour:toHour:)")));
@property (readonly) BOOL isAllDay;
@property (readonly) NSString *dayString;
@property (readonly) NSString *startHourString;
@property (readonly) NSString *endHourString;
@property (readonly) SharedCodeDayOfWeek *forDay;
@property (readonly) float fromHour;
@property (readonly) float toHour;
@end;

__attribute__((swift_name("HoursOfOperation")))
@interface SharedCodeHoursOfOperation : KotlinBase
- (BOOL)isOpenOnDay:(SharedCodeDayOfWeek *)onDay atHour:(float)atHour __attribute__((swift_name("isOpen(onDay:atHour:)")));
- (NSString *)isOpenTextOnDay:(SharedCodeDayOfWeek *)onDay atHour:(float)atHour __attribute__((swift_name("isOpenText(onDay:atHour:)")));
@property (readonly) NSArray<SharedCodeHours *> *hours;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfOperation.Always")))
@interface SharedCodeHoursOfOperationAlways : SharedCodeHoursOfOperation
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfOperation.Weekdays")))
@interface SharedCodeHoursOfOperationWeekdays : SharedCodeHoursOfOperation
- (instancetype)initWithFromHour:(float)fromHour toHour:(float)toHour __attribute__((swift_name("init(fromHour:toHour:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfOperation.Weekends")))
@interface SharedCodeHoursOfOperationWeekends : SharedCodeHoursOfOperation
- (instancetype)initWithFromHour:(float)fromHour toHour:(float)toHour __attribute__((swift_name("init(fromHour:toHour:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfOperation.Variable")))
@interface SharedCodeHoursOfOperationVariable : SharedCodeHoursOfOperation
- (instancetype)initWithHours:(NSArray<SharedCodeHours *> *)hours __attribute__((swift_name("init(hours:)"))) __attribute__((objc_designated_initializer));
@end;

@interface SharedCodeColor (Extensions)
- (UIColor *)toUIColor __attribute__((swift_name("toUIColor()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloatExtensionsKt")))
@interface SharedCodeFloatExtensionsKt : KotlinBase
+ (NSString *)toHourString:(float)receiver __attribute__((swift_name("toHourString(_:)")));
+ (SharedCodeHourType *)hours:(float)receiver __attribute__((swift_name("hours(_:)")));
+ (NSString *)minutes:(float)receiver __attribute__((swift_name("minutes(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActualKt")))
@interface SharedCodeActualKt : KotlinBase
+ (NSString *)platformName __attribute__((swift_name("platformName()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonKt")))
@interface SharedCodeCommonKt : KotlinBase
+ (NSString *)createApplicationScreenMessage __attribute__((swift_name("createApplicationScreenMessage()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedCodeKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SharedCodeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedCodeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedCodeKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
