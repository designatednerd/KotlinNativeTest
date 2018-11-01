#import <Foundation/Foundation.h>

@class SharedCodeDayOfWeek, SharedCodeKotlinEnum, SharedCodeDayOfWeekCompanion, SharedCodeKotlinArray, SharedCodeHourType, SharedCodeHours, SharedCodeHoursOfOperation, SharedCodeHoursOfOperationCompanion, SharedCodeHoursOfOperationAlways, SharedCodeHoursOfOperationWeekdays, SharedCodeHoursOfOperationWeekends, SharedCodeHoursOfOperationVariable, SharedCodeHttpBinClient, SharedCodeNetworkClient, SharedCodeRequestMethod, SharedCodeKotlinUnit, SharedCodeNetworkResult, SharedCodeRequestMethodGet, SharedCodeRequestMethodPut, SharedCodeRequestMethodPost, SharedCodeRequestMethodDelete, SharedCodeRequestMethodPatch, SharedCodeNetworkResultSuccess, SharedCodeNetworkResultError, SharedCodeColor, SharedCodeFont, SharedCodeFontSize, SharedCodeButtonStyle, SharedCodeCornerRadius, SharedCodeDimension, SharedCodeButtonStyleCallToAction, SharedCodeButtonStyleDestructive, SharedCodeEditableTextStyle, SharedCodeEditableTextStyleRequiredEditableText, SharedCodeEditableTextStyleOptionalEditableText, SharedCodeSize, SharedCodeCornerRadiusNone, SharedCodeCornerRadiusSmall, SharedCodeCornerRadiusMedium, SharedCodeCornerRadiusLarge, SharedCodeDimensionButtonHeight, SharedCodeMargin, SharedCodeMarginCompanion, SharedCodeMarginX1, SharedCodeMarginX1_5, SharedCodeMarginX2, SharedCodeStaticTextStyle, SharedCodeStaticTextStyleHeadline, SharedCodeStaticTextStyleHeadlineSecondary, SharedCodeStaticTextStyleTextPrimary, SharedCodeStaticTextStyleTextSecondary, SharedCodeStaticTextStyleTextCaption, SharedCodeStaticTextStyleTextIconLabel, UIColor, UIFont, NSString;

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
__attribute__((swift_name("HoursOfOperation.Companion")))
@interface SharedCodeHoursOfOperationCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSString *)dayHeaderTitle __attribute__((swift_name("dayHeaderTitle()")));
- (NSString *)openingHeaderTitle __attribute__((swift_name("openingHeaderTitle()")));
- (NSString *)closingHeaderTitle __attribute__((swift_name("closingHeaderTitle()")));
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

__attribute__((swift_name("NetworkClient")))
@interface SharedCodeNetworkClient : KotlinBase
- (instancetype)initWithRootURLString:(NSString *)rootURLString __attribute__((swift_name("init(rootURLString:)"))) __attribute__((objc_designated_initializer));
- (void)executeRequestMethod:(SharedCodeRequestMethod *)method path:(NSString *)path callback:(SharedCodeKotlinUnit *(^)(SharedCodeNetworkResult *))callback __attribute__((swift_name("executeRequest(method:path:callback:)")));
@property (readonly) NSString *rootURLString;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBinClient")))
@interface SharedCodeHttpBinClient : SharedCodeNetworkClient
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithRootURLString:(NSString *)rootURLString __attribute__((swift_name("init(rootURLString:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)runGet __attribute__((swift_name("runGet()")));
- (void)runPostBody:(NSString *)body __attribute__((swift_name("runPost(body:)")));
@end;

__attribute__((swift_name("RequestMethod")))
@interface SharedCodeRequestMethod : KotlinBase
@property (readonly) NSString *stringValue;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod.Get")))
@interface SharedCodeRequestMethodGet : SharedCodeRequestMethod
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod.Put")))
@interface SharedCodeRequestMethodPut : SharedCodeRequestMethod
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod.Post")))
@interface SharedCodeRequestMethodPost : SharedCodeRequestMethod
- (instancetype)initWithBody:(NSString *)body __attribute__((swift_name("init(body:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *body;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod.Delete")))
@interface SharedCodeRequestMethodDelete : SharedCodeRequestMethod
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod.Patch")))
@interface SharedCodeRequestMethodPatch : SharedCodeRequestMethod
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("NetworkResult")))
@interface SharedCodeNetworkResult : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult.Success")))
@interface SharedCodeNetworkResultSuccess : SharedCodeNetworkResult
- (instancetype)initWithItem:(id _Nullable)item __attribute__((swift_name("init(item:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id _Nullable item;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkResult.Error")))
@interface SharedCodeNetworkResultError : SharedCodeNetworkResult
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *message;
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
@property (class, readonly) SharedCodeColor *darkgray;
@property (class, readonly) SharedCodeColor *lightgray;
@property (class, readonly) SharedCodeColor *white;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedCodeColor *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) double alphaComponent;
@property (readonly) double redComponent;
@property (readonly) double greenComponent;
@property (readonly) double blueComponent;
@property (readonly) NSString *hexString;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Font")))
@interface SharedCodeFont : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedCodeFont *regular;
@property (class, readonly) SharedCodeFont *bold;
@property (class, readonly) SharedCodeFont *italic;
@property (class, readonly) SharedCodeFont *fancy;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedCodeFont *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FontSize")))
@interface SharedCodeFontSize : SharedCodeKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SharedCodeFontSize *textprimary;
@property (class, readonly) SharedCodeFontSize *textsecondary;
@property (class, readonly) SharedCodeFontSize *texticonlabel;
@property (class, readonly) SharedCodeFontSize *textcaption;
@property (class, readonly) SharedCodeFontSize *headlineprimary;
@property (class, readonly) SharedCodeFontSize *headlinesecondary;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SharedCodeFontSize *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) double unscaledPixels;
@end;

__attribute__((swift_name("ButtonStyle")))
@interface SharedCodeButtonStyle : KotlinBase
@property (readonly) SharedCodeColor *textColorActive;
@property (readonly) SharedCodeColor *textColorDisabled;
@property (readonly) SharedCodeColor *textColorInactive;
@property (readonly) SharedCodeColor *backgroundColorActive;
@property (readonly) SharedCodeColor *backgroundColorDisabled;
@property (readonly) SharedCodeColor *backgroundColorInactive;
@property (readonly) SharedCodeFont *font;
@property (readonly) SharedCodeFontSize *fontSize;
@property (readonly) SharedCodeCornerRadius *cornerRadius;
@property (readonly) SharedCodeDimension *defaultHeight;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonStyle.CallToAction")))
@interface SharedCodeButtonStyleCallToAction : SharedCodeButtonStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonStyle.Destructive")))
@interface SharedCodeButtonStyleDestructive : SharedCodeButtonStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("EditableTextStyle")))
@interface SharedCodeEditableTextStyle : KotlinBase
@property (readonly) SharedCodeColor *textColor;
@property (readonly) SharedCodeColor *activeHighlightColor;
@property (readonly) SharedCodeColor *inactiveHighlightColor;
@property (readonly) SharedCodeColor *placeholderColor;
@property (readonly) SharedCodeColor *errorColor;
@property (readonly) SharedCodeFont *font;
@property (readonly) SharedCodeFontSize *fontSize;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditableTextStyle.RequiredEditableText")))
@interface SharedCodeEditableTextStyleRequiredEditableText : SharedCodeEditableTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditableTextStyle.OptionalEditableText")))
@interface SharedCodeEditableTextStyleOptionalEditableText : SharedCodeEditableTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Size")))
@interface SharedCodeSize : KotlinBase
@property (readonly) double value;
@end;

__attribute__((swift_name("CornerRadius")))
@interface SharedCodeCornerRadius : SharedCodeSize
@property (readonly) double radius;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornerRadius.None")))
@interface SharedCodeCornerRadiusNone : SharedCodeCornerRadius
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornerRadius.Small")))
@interface SharedCodeCornerRadiusSmall : SharedCodeCornerRadius
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornerRadius.Medium")))
@interface SharedCodeCornerRadiusMedium : SharedCodeCornerRadius
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornerRadius.Large")))
@interface SharedCodeCornerRadiusLarge : SharedCodeCornerRadius
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Dimension")))
@interface SharedCodeDimension : SharedCodeSize
@property (readonly) double points;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dimension.ButtonHeight")))
@interface SharedCodeDimensionButtonHeight : SharedCodeDimension
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Margin")))
@interface SharedCodeMargin : SharedCodeSize
@property (readonly) double multiplier;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Margin.Companion")))
@interface SharedCodeMarginCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (readonly) double defaultMargin;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Margin.x1")))
@interface SharedCodeMarginX1 : SharedCodeMargin
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Margin.x1_5")))
@interface SharedCodeMarginX1_5 : SharedCodeMargin
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Margin.x2")))
@interface SharedCodeMarginX2 : SharedCodeMargin
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("StaticTextStyle")))
@interface SharedCodeStaticTextStyle : KotlinBase
@property (readonly) SharedCodeFont *font;
@property (readonly) SharedCodeFontSize *fontSize;
@property (readonly) SharedCodeColor *textColor;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.Headline")))
@interface SharedCodeStaticTextStyleHeadline : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.HeadlineSecondary")))
@interface SharedCodeStaticTextStyleHeadlineSecondary : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.TextPrimary")))
@interface SharedCodeStaticTextStyleTextPrimary : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.TextSecondary")))
@interface SharedCodeStaticTextStyleTextSecondary : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.TextCaption")))
@interface SharedCodeStaticTextStyleTextCaption : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextStyle.TextIconLabel")))
@interface SharedCodeStaticTextStyleTextIconLabel : SharedCodeStaticTextStyle
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

@interface SharedCodeColor (Extensions)
- (UIColor *)toUIColor __attribute__((swift_name("toUIColor()")));
@end;

@interface SharedCodeFont (Extensions)
- (UIFont *)toUIFontSize:(double)size __attribute__((swift_name("toUIFont(size:)")));
- (UIFont *)toUIFontSize_:(SharedCodeFontSize *)size __attribute__((swift_name("toUIFont(size_:)")));
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
__attribute__((swift_name("NSString_KotlinKt")))
@interface SharedCodeNSString_KotlinKt : KotlinBase
+ (NSString *)toKotlinString:(NSString *)receiver __attribute__((swift_name("toKotlinString(_:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SharedCodeKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedCodeKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

NS_ASSUME_NONNULL_END
