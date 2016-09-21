//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: joda-time/src/main/java/org/joda/time/chrono/BasicWeekyearDateTimeField.java
//

#include "J2ObjC_header.h"

#pragma push_macro("OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE_ALL")
#ifdef OrgJodaTimeChronoBasicWeekyearDateTimeField_RESTRICT
#define OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE_ALL 0
#else
#define OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE_ALL 1
#endif
#undef OrgJodaTimeChronoBasicWeekyearDateTimeField_RESTRICT

#if !defined (OrgJodaTimeChronoBasicWeekyearDateTimeField_) && (OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE_ALL || defined(OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE))
#define OrgJodaTimeChronoBasicWeekyearDateTimeField_

#define OrgJodaTimeFieldImpreciseDateTimeField_RESTRICT 1
#define OrgJodaTimeFieldImpreciseDateTimeField_INCLUDE 1
#include "org/joda/time/field/ImpreciseDateTimeField.h"

@class OrgJodaTimeChronoBasicChronology;
@class OrgJodaTimeDurationField;

@interface OrgJodaTimeChronoBasicWeekyearDateTimeField : OrgJodaTimeFieldImpreciseDateTimeField

#pragma mark Public

- (jlong)addWithLong:(jlong)instant
             withInt:(jint)years;

- (jlong)addWithLong:(jlong)instant
            withLong:(jlong)value;

- (jlong)addWrapFieldWithLong:(jlong)instant
                      withInt:(jint)years;

- (jint)getWithLong:(jlong)instant;

- (jlong)getDifferenceAsLongWithLong:(jlong)minuendInstant
                            withLong:(jlong)subtrahendInstant;

- (jint)getLeapAmountWithLong:(jlong)instant;

- (OrgJodaTimeDurationField *)getLeapDurationField;

- (jint)getMaximumValue;

- (jint)getMinimumValue;

- (OrgJodaTimeDurationField *)getRangeDurationField;

- (jboolean)isLeapWithLong:(jlong)instant;

- (jboolean)isLenient;

- (jlong)remainderWithLong:(jlong)instant;

- (jlong)roundFloorWithLong:(jlong)instant;

- (jlong)setWithLong:(jlong)instant
             withInt:(jint)year;

#pragma mark Package-Private

- (instancetype)initWithOrgJodaTimeChronoBasicChronology:(OrgJodaTimeChronoBasicChronology *)chronology;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaTimeChronoBasicWeekyearDateTimeField)

FOUNDATION_EXPORT void OrgJodaTimeChronoBasicWeekyearDateTimeField_initWithOrgJodaTimeChronoBasicChronology_(OrgJodaTimeChronoBasicWeekyearDateTimeField *self, OrgJodaTimeChronoBasicChronology *chronology);

FOUNDATION_EXPORT OrgJodaTimeChronoBasicWeekyearDateTimeField *new_OrgJodaTimeChronoBasicWeekyearDateTimeField_initWithOrgJodaTimeChronoBasicChronology_(OrgJodaTimeChronoBasicChronology *chronology) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaTimeChronoBasicWeekyearDateTimeField *create_OrgJodaTimeChronoBasicWeekyearDateTimeField_initWithOrgJodaTimeChronoBasicChronology_(OrgJodaTimeChronoBasicChronology *chronology);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaTimeChronoBasicWeekyearDateTimeField)

#endif

#pragma pop_macro("OrgJodaTimeChronoBasicWeekyearDateTimeField_INCLUDE_ALL")