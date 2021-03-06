#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef NEARBEE_SWIFT_H
#define NEARBEE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NearBee",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_PROTOCOL("_TtP7NearBee10Attachment_")
@protocol Attachment
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_PROTOCOL("_TtP7NearBee16BeaconAttachment_") SWIFT_AVAILABILITY(ios,deprecated=2.0.0,message="'BeaconAttachment' has been renamed to '_TtP7NearBee10Attachment_'")
@protocol BeaconAttachment
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("GeoFenceAttachment")
@interface GeoFenceAttachment : NSObject <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Nearby
/// Class that handles all the tasks
SWIFT_CLASS("_TtC7NearBee7NearBee")
@interface NearBee : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum NearBeeState : NSInteger;
@protocol NearBeeDelegate;
@class UNNotification;
@class NearBeeAttachment;

@interface NearBee (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) enum NearBeeState state;
@property (nonatomic, weak) id <NearBeeDelegate> _Nullable delegate;
@property (nonatomic) UNNotificationSoundName _Nonnull notificationSound;
@property (nonatomic) NSTimeInterval geoFenceNotificationThreshold;
@property (nonatomic) BOOL debugMode;
+ (NearBee * _Nullable)initNearBee SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getLogFilePath SWIFT_WARN_UNUSED_RESULT;
/// Start scanning for beacons
- (void)startScanning;
/// Stop all activities
- (void)stopScanning;
/// Do everything again ignoring local cache
- (void)clearNotificationCache;
- (void)resetProximityBeacons;
/// Show notification in background
- (void)enableBackgroundNotification:(BOOL)enable;
- (void)startMonitoringGeoFenceRegions;
- (void)stopMonitoringGeoFenceRegions;
- (BOOL)checkAndProcessNearbyNotification:(UNNotification * _Nonnull)notification queryParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)queryParameters SWIFT_WARN_UNUSED_RESULT;
- (void)displayContentOf:(NSString * _Nonnull)eddystoneUrl queryParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)queryParameters;
- (void)displayUrl:(NSString * _Nonnull)urlString;
- (void)fetchAllSavedAttachments:(SWIFT_NOESCAPE void (^ _Nonnull)(NSArray<NearBeeAttachment *> * _Nullable))completion;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("NearBeeAttachment")
@interface NearBeeAttachment : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeeAttachment (SWIFT_EXTENSION(NearBee))
- (void)toggleSave;
- (void)display:(NSString * _Nonnull)url;
@end

@class NearBeeBusiness;
@class NearBeePhysicalWeb;
@class NSSet;

@interface NearBeeAttachment (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) BOOL isSaved;
@property (nonatomic, readonly, strong) NearBeeBusiness * _Nullable business;
@property (nonatomic, readonly, strong) NearBeePhysicalWeb * _Nullable physicalWeb;
@property (nonatomic, readonly, strong) NSSet * _Nullable proximityAttachment;
@end


SWIFT_CLASS_NAMED("NearBeeBeacon")
@interface NearBeeBeacon : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeeBeacon (SWIFT_EXTENSION(NearBee))
- (id <Attachment> _Nullable)getAttachmentForCurrentDeviceLanguage SWIFT_WARN_UNUSED_RESULT;
- (id <Attachment> _Nullable)getBestAvailableAttachment SWIFT_WARN_UNUSED_RESULT;
- (float)getRSSI SWIFT_WARN_UNUSED_RESULT;
@end


@interface NearBeeBeacon (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable eddystoneUID;
@property (nonatomic, readonly, copy) NSString * _Nullable eddystoneURL SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly) BOOL physicalWebActive SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebDescription SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebEddystoneURL SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebIcon SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebTitle SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSDate * _Nullable physicalWebUpdated SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, strong) NearBeeAttachment * _Nullable attachment;
@property (nonatomic, readonly, strong) NearBeeBusiness * _Nullable business;
@end


SWIFT_CLASS_NAMED("NearBeeBusiness")
@interface NearBeeBusiness : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end





@interface NearBeeBusiness (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable color;
@property (nonatomic, readonly, copy) NSString * _Nullable coverURL;
@property (nonatomic, readonly, copy) NSString * _Nullable googlePlaceID;
@property (nonatomic, readonly, copy) NSString * _Nullable iconURL;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@end

@class NearBeeGeoFence;

SWIFT_PROTOCOL("_TtP7NearBee15NearBeeDelegate_")
@protocol NearBeeDelegate
@optional
- (void)onBeaconsFound:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsFound' has been renamed to 'didFindBeacons:'");
- (void)onBeaconsUpdated:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsUpdated' has been renamed to 'didLoseBeacons:'");
- (void)onBeaconsLost:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsLost' has been renamed to 'didUpdateBeacons:'");
- (void)onError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,unavailable,message="'onError' has been renamed to 'didThrowError:'");
- (void)onEnteredGeofence:(NearBeeGeoFence * _Nonnull)geofence :(GeoFenceAttachment * _Nonnull)attachment SWIFT_AVAILABILITY(ios,unavailable,message="'onEnteredGeofence' has been renamed to 'didEnterGeofence::'");
@required
- (void)didFindBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didUpdateBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didLoseBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didUpdateState:(enum NearBeeState)state;
- (void)didThrowError:(NSError * _Nonnull)error;
- (void)didEnterGeofence:(NearBeeGeoFence * _Nonnull)geofence :(GeoFenceAttachment * _Nonnull)attachment;
@end


SWIFT_CLASS_NAMED("NearBeeGeoFence")
@interface NearBeeGeoFence : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface NearBeeGeoFence (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) int64_t id;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) int64_t radius;
@property (nonatomic, readonly) int64_t organization;
@property (nonatomic, readonly, copy) NSString * _Nullable url;
@end


SWIFT_CLASS_NAMED("NearBeePhysicalWeb")
@interface NearBeePhysicalWeb : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeePhysicalWeb (SWIFT_EXTENSION(NearBee)) <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS_NAMED("NearBeeProximityAttachment")
@interface NearBeeProximityAttachment : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end





@interface NearBeeProximityAttachment (SWIFT_EXTENSION(NearBee)) <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end


@interface NearBeeProximityAttachment (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable bannerImageURL;
@property (nonatomic, readonly) int16_t bannerType;
@property (nonatomic, readonly, copy) NSString * _Nullable language;
@end

typedef SWIFT_ENUM(NSInteger, NearBeeState, open) {
  NearBeeStateUnknown = 0,
  NearBeeStateOff = 1,
  NearBeeStateOn = 2,
};


@interface UIColor (SWIFT_EXTENSION(NearBee))
- (nonnull instancetype)initWithHexString:(NSString * _Nonnull)hexString alpha:(CGFloat)alpha;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.3.2 (swiftlang-1200.0.45 clang-1200.0.32.28)
#ifndef NEARBEE_SWIFT_H
#define NEARBEE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import UserNotifications;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="NearBee",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_PROTOCOL("_TtP7NearBee10Attachment_")
@protocol Attachment
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_PROTOCOL("_TtP7NearBee16BeaconAttachment_") SWIFT_AVAILABILITY(ios,deprecated=2.0.0,message="'BeaconAttachment' has been renamed to '_TtP7NearBee10Attachment_'")
@protocol BeaconAttachment
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("GeoFenceAttachment")
@interface GeoFenceAttachment : NSObject <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Nearby
/// Class that handles all the tasks
SWIFT_CLASS("_TtC7NearBee7NearBee")
@interface NearBee : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum NearBeeState : NSInteger;
@protocol NearBeeDelegate;
@class UNNotification;
@class NearBeeAttachment;

@interface NearBee (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) enum NearBeeState state;
@property (nonatomic, weak) id <NearBeeDelegate> _Nullable delegate;
@property (nonatomic) UNNotificationSoundName _Nonnull notificationSound;
@property (nonatomic) NSTimeInterval geoFenceNotificationThreshold;
@property (nonatomic) BOOL debugMode;
+ (NearBee * _Nullable)initNearBee SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getLogFilePath SWIFT_WARN_UNUSED_RESULT;
/// Start scanning for beacons
- (void)startScanning;
/// Stop all activities
- (void)stopScanning;
/// Do everything again ignoring local cache
- (void)clearNotificationCache;
- (void)resetProximityBeacons;
/// Show notification in background
- (void)enableBackgroundNotification:(BOOL)enable;
- (void)startMonitoringGeoFenceRegions;
- (void)stopMonitoringGeoFenceRegions;
- (BOOL)checkAndProcessNearbyNotification:(UNNotification * _Nonnull)notification queryParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)queryParameters SWIFT_WARN_UNUSED_RESULT;
- (void)displayContentOf:(NSString * _Nonnull)eddystoneUrl queryParameters:(NSDictionary<NSString *, NSString *> * _Nonnull)queryParameters;
- (void)displayUrl:(NSString * _Nonnull)urlString;
- (void)fetchAllSavedAttachments:(SWIFT_NOESCAPE void (^ _Nonnull)(NSArray<NearBeeAttachment *> * _Nullable))completion;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("NearBeeAttachment")
@interface NearBeeAttachment : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeeAttachment (SWIFT_EXTENSION(NearBee))
- (void)toggleSave;
- (void)display:(NSString * _Nonnull)url;
@end

@class NearBeeBusiness;
@class NearBeePhysicalWeb;
@class NSSet;

@interface NearBeeAttachment (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) BOOL isSaved;
@property (nonatomic, readonly, strong) NearBeeBusiness * _Nullable business;
@property (nonatomic, readonly, strong) NearBeePhysicalWeb * _Nullable physicalWeb;
@property (nonatomic, readonly, strong) NSSet * _Nullable proximityAttachment;
@end


SWIFT_CLASS_NAMED("NearBeeBeacon")
@interface NearBeeBeacon : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeeBeacon (SWIFT_EXTENSION(NearBee))
- (id <Attachment> _Nullable)getAttachmentForCurrentDeviceLanguage SWIFT_WARN_UNUSED_RESULT;
- (id <Attachment> _Nullable)getBestAvailableAttachment SWIFT_WARN_UNUSED_RESULT;
- (float)getRSSI SWIFT_WARN_UNUSED_RESULT;
@end


@interface NearBeeBeacon (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable eddystoneUID;
@property (nonatomic, readonly, copy) NSString * _Nullable eddystoneURL SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly) BOOL physicalWebActive SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebDescription SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebEddystoneURL SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebIcon SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSString * _Nullable physicalWebTitle SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, copy) NSDate * _Nullable physicalWebUpdated SWIFT_AVAILABILITY(ios,deprecated=0.0.1,message="Use NearBeeAttachment's NearBeeProximityAttachment or NearBeePhysicalWeb");
@property (nonatomic, readonly, strong) NearBeeAttachment * _Nullable attachment;
@property (nonatomic, readonly, strong) NearBeeBusiness * _Nullable business;
@end


SWIFT_CLASS_NAMED("NearBeeBusiness")
@interface NearBeeBusiness : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end





@interface NearBeeBusiness (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable color;
@property (nonatomic, readonly, copy) NSString * _Nullable coverURL;
@property (nonatomic, readonly, copy) NSString * _Nullable googlePlaceID;
@property (nonatomic, readonly, copy) NSString * _Nullable iconURL;
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@end

@class NearBeeGeoFence;

SWIFT_PROTOCOL("_TtP7NearBee15NearBeeDelegate_")
@protocol NearBeeDelegate
@optional
- (void)onBeaconsFound:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsFound' has been renamed to 'didFindBeacons:'");
- (void)onBeaconsUpdated:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsUpdated' has been renamed to 'didLoseBeacons:'");
- (void)onBeaconsLost:(NSArray<NearBeeBeacon *> * _Nonnull)beacons SWIFT_AVAILABILITY(ios,unavailable,message="'onBeaconsLost' has been renamed to 'didUpdateBeacons:'");
- (void)onError:(NSError * _Nonnull)error SWIFT_AVAILABILITY(ios,unavailable,message="'onError' has been renamed to 'didThrowError:'");
- (void)onEnteredGeofence:(NearBeeGeoFence * _Nonnull)geofence :(GeoFenceAttachment * _Nonnull)attachment SWIFT_AVAILABILITY(ios,unavailable,message="'onEnteredGeofence' has been renamed to 'didEnterGeofence::'");
@required
- (void)didFindBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didUpdateBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didLoseBeacons:(NSArray<NearBeeBeacon *> * _Nonnull)beacons;
- (void)didUpdateState:(enum NearBeeState)state;
- (void)didThrowError:(NSError * _Nonnull)error;
- (void)didEnterGeofence:(NearBeeGeoFence * _Nonnull)geofence :(GeoFenceAttachment * _Nonnull)attachment;
@end


SWIFT_CLASS_NAMED("NearBeeGeoFence")
@interface NearBeeGeoFence : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface NearBeeGeoFence (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly) int64_t id;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) int64_t radius;
@property (nonatomic, readonly) int64_t organization;
@property (nonatomic, readonly, copy) NSString * _Nullable url;
@end


SWIFT_CLASS_NAMED("NearBeePhysicalWeb")
@interface NearBeePhysicalWeb : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




@interface NearBeePhysicalWeb (SWIFT_EXTENSION(NearBee)) <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS_NAMED("NearBeeProximityAttachment")
@interface NearBeeProximityAttachment : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end





@interface NearBeeProximityAttachment (SWIFT_EXTENSION(NearBee)) <Attachment>
- (NSString * _Nullable)getTitle SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getDescription SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getIconURL SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isActive SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getURL SWIFT_WARN_UNUSED_RESULT;
@end


@interface NearBeeProximityAttachment (SWIFT_EXTENSION(NearBee))
@property (nonatomic, readonly, copy) NSString * _Nullable bannerImageURL;
@property (nonatomic, readonly) int16_t bannerType;
@property (nonatomic, readonly, copy) NSString * _Nullable language;
@end

typedef SWIFT_ENUM(NSInteger, NearBeeState, open) {
  NearBeeStateUnknown = 0,
  NearBeeStateOff = 1,
  NearBeeStateOn = 2,
};


@interface UIColor (SWIFT_EXTENSION(NearBee))
- (nonnull instancetype)initWithHexString:(NSString * _Nonnull)hexString alpha:(CGFloat)alpha;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
