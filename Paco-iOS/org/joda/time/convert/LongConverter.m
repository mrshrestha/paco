//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: joda-time/src/main/java/org/joda/time/convert/LongConverter.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "java/lang/Long.h"
#include "org/joda/time/Chronology.h"
#include "org/joda/time/convert/AbstractConverter.h"
#include "org/joda/time/convert/LongConverter.h"

J2OBJC_INITIALIZED_DEFN(OrgJodaTimeConvertLongConverter)

OrgJodaTimeConvertLongConverter *OrgJodaTimeConvertLongConverter_INSTANCE;

@implementation OrgJodaTimeConvertLongConverter

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  OrgJodaTimeConvertLongConverter_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (jlong)getInstantMillisWithId:(id)object
      withOrgJodaTimeChronology:(OrgJodaTimeChronology *)chrono {
  return [((JavaLangLong *) nil_chk(((JavaLangLong *) cast_chk(object, [JavaLangLong class])))) longLongValue];
}

- (jlong)getDurationMillisWithId:(id)object {
  return [((JavaLangLong *) nil_chk(((JavaLangLong *) cast_chk(object, [JavaLangLong class])))) longLongValue];
}

- (IOSClass *)getSupportedType {
  return JavaLangLong_class_();
}

+ (void)initialize {
  if (self == [OrgJodaTimeConvertLongConverter class]) {
    JreStrongAssignAndConsume(&OrgJodaTimeConvertLongConverter_INSTANCE, new_OrgJodaTimeConvertLongConverter_init());
    J2OBJC_SET_INITIALIZED(OrgJodaTimeConvertLongConverter)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "LongConverter", NULL, 0x4, NULL, NULL },
    { "getInstantMillisWithId:withOrgJodaTimeChronology:", "getInstantMillis", "J", 0x1, NULL, NULL },
    { "getDurationMillisWithId:", "getDurationMillis", "J", 0x1, NULL, NULL },
    { "getSupportedType", NULL, "Ljava.lang.Class;", 0x1, NULL, "()Ljava/lang/Class<*>;" },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "INSTANCE", "INSTANCE", 0x18, "Lorg.joda.time.convert.LongConverter;", &OrgJodaTimeConvertLongConverter_INSTANCE, NULL, .constantValue.asLong = 0 },
  };
  static const J2ObjcClassInfo _OrgJodaTimeConvertLongConverter = { 2, "LongConverter", "org.joda.time.convert", NULL, 0x0, 4, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_OrgJodaTimeConvertLongConverter;
}

@end

void OrgJodaTimeConvertLongConverter_init(OrgJodaTimeConvertLongConverter *self) {
  OrgJodaTimeConvertAbstractConverter_init(self);
}

OrgJodaTimeConvertLongConverter *new_OrgJodaTimeConvertLongConverter_init() {
  OrgJodaTimeConvertLongConverter *self = [OrgJodaTimeConvertLongConverter alloc];
  OrgJodaTimeConvertLongConverter_init(self);
  return self;
}

OrgJodaTimeConvertLongConverter *create_OrgJodaTimeConvertLongConverter_init() {
  OrgJodaTimeConvertLongConverter *self = [[OrgJodaTimeConvertLongConverter alloc] autorelease];
  OrgJodaTimeConvertLongConverter_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgJodaTimeConvertLongConverter)