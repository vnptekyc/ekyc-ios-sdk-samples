// Generated by Apple Swift version 5.2.4 effective-4.2 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
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
@import AVFoundation;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import UIKit;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FinalSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_PROTOCOL("_TtP8FinalSDK14CameraDelegate_")
@protocol CameraDelegate
@optional
- (void)ekycNetworkDidCallApiWithParams:(NSString * _Nonnull)params onSuccess:(void (^ _Nonnull)(NSString * _Nonnull))success onFailure:(void (^ _Nonnull)(NSError * _Nullable, NSDictionary<NSString *, id> * _Nonnull))failure;
@required
- (void)getResult;
@end

@class UIViewController;

SWIFT_CLASS("_TtC8FinalSDK12CameraRouter")
@interface CameraRouter : NSObject
+ (UIViewController * _Nonnull)createModule SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ProgessStep : NSInteger;
enum VersionSdk : NSInteger;
enum TypeDocument : NSInteger;
enum FlowType : NSInteger;
@class UIColor;
@class UITouch;
@class UIEvent;
@class AVCaptureOutput;
@class AVCaptureConnection;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8FinalSDK20CameraViewController")
@interface CameraViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
@property (nonatomic, weak) id <CameraDelegate> _Nullable cameraDelegate;
@property (nonatomic) enum ProgessStep stepNow;
@property (nonatomic) enum VersionSdk isVersion;
@property (nonatomic) enum TypeDocument isType;
@property (nonatomic) enum FlowType flowType;
@property (nonatomic, copy) NSString * _Nonnull languageApplication;
@property (nonatomic) BOOL isShowHelp;
@property (nonatomic) BOOL isShowResult;
@property (nonatomic) BOOL isShowRotateCamera;
@property (nonatomic) BOOL isWantRotateCameraBack;
@property (nonatomic) BOOL isValidatePostcode;
@property (nonatomic) BOOL isCompare;
@property (nonatomic) BOOL isAddFace;
@property (nonatomic) BOOL isShowTrademark;
@property (nonatomic) BOOL isCheckLivenessFace;
@property (nonatomic) BOOL isCheckLivenessCard;
@property (nonatomic) BOOL isCheckMaskFace;
@property (nonatomic) BOOL isCustomize;
@property (nonatomic, copy) NSString * _Nonnull markFrameName;
@property (nonatomic, copy) NSString * _Nonnull logoTrademarkName;
@property (nonatomic, strong) UIColor * _Null_unspecified buttonTitleColor;
@property (nonatomic, strong) UIColor * _Null_unspecified buttonReTakeColor;
@property (nonatomic, strong) UIColor * _Null_unspecified buttonBackgroundColor;
@property (nonatomic, copy) NSString * _Nonnull inputIDVerifyFace;
@property (nonatomic, copy) NSString * _Nonnull challengeCode;
@property (nonatomic, copy) NSString * _Nonnull idTypeVerifyFace;
@property (nonatomic, copy) NSString * _Nonnull unitCustomer;
@property (nonatomic, copy) NSString * _Nonnull resourceCustomer;
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Null_unspecified objectAddFace;
@property (nonatomic, copy) NSString * _Nonnull hashFrontCompareFace;
@property (nonatomic, copy) NSArray * _Null_unspecified arrayItemPostCode;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)captureOutput:(AVCaptureOutput * _Nonnull)output didOutputSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




@interface CameraViewController (SWIFT_EXTENSION(FinalSDK))
- (void)addFaceWithBbox:(NSString * _Nonnull)bbox landmark:(NSString * _Nonnull)landmark challengeCode:(NSString * _Nonnull)challengeCode customerInformation:(NSDictionary<NSString *, id> * _Nonnull)customerInformation hashFace:(NSString * _Nonnull)hashFace unitCustomer:(NSString * _Nonnull)unitCustomer;
@end




SWIFT_CLASS("_TtC8FinalSDK9DKTTModel")
@interface DKTTModel : NSObject
@property (nonatomic, weak) id <CameraDelegate> _Nullable objectDelegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, FlowType, closed) {
  FlowTypeFull = 0,
  FlowTypeOcrFront = 1,
  FlowTypeOcrBack = 2,
  FlowTypeOcrFrontAndBack = 3,
  FlowTypeCompare = 4,
  FlowTypeAddFace = 5,
  FlowTypeVerifyFace = 6,
  FlowTypeSearchFace = 7,
};


SWIFT_CLASS("_TtC8FinalSDK8Localize")
@interface Localize : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



typedef SWIFT_ENUM(NSInteger, PostCodeType, closed) {
  PostCodeTypeBirthPlace = 0,
  PostCodeTypeRecentLocation = 1,
  PostCodeTypeOriginLocation = 2,
  PostCodeTypeIssuePlace = 3,
};

typedef SWIFT_ENUM(NSInteger, ProgessStep, closed) {
  ProgessStepStepFront = 0,
  ProgessStepStepBack = 1,
  ProgessStepStepFace = 2,
};

@class UIImage;

SWIFT_CLASS("_TtC8FinalSDK8SaveData")
@interface SaveData : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SaveData * _Nonnull shared;)
+ (SaveData * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nonnull languageApplication;
@property (nonatomic, copy) NSString * _Nonnull SDAuthorization;
@property (nonatomic, copy) NSString * _Nonnull SDTokenId;
@property (nonatomic, copy) NSString * _Nonnull SDTokenKey;
@property (nonatomic, copy) NSString * _Nonnull SDMacAddress;
@property (nonatomic, copy) NSString * _Nonnull SDClientSession;
@property (nonatomic, copy) NSString * _Nonnull SDUserName;
@property (nonatomic, copy) NSString * _Nonnull SDPassword;
@property (nonatomic) NSInteger expriseTime;
@property (nonatomic, copy) NSString * _Nonnull UrlUploadImage;
@property (nonatomic, copy) NSString * _Nonnull BaseUrl;
@property (nonatomic, copy) NSString * _Nonnull jsonInfo;
@property (nonatomic, copy) NSString * _Nonnull jsonAPIGetInfo;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyGetInfo;
@property (nonatomic, copy) NSString * _Nonnull jsonCompareFace;
@property (nonatomic, copy) NSString * _Nonnull jsonAPICompareFace;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyCompareFace;
@property (nonatomic, copy) NSString * _Nonnull jsonLivenessFace;
@property (nonatomic, copy) NSString * _Nonnull jsonAPILivenessFace;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyLivenessFace;
@property (nonatomic, copy) NSString * _Nonnull jsonVerifyFace;
@property (nonatomic, copy) NSString * _Nonnull jsonAPIVerifyFace;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyVerifyFace;
@property (nonatomic, copy) NSString * _Nonnull jsonCheckMask;
@property (nonatomic, copy) NSString * _Nonnull jsonAPICheckMask;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyCheckMask;
@property (nonatomic, copy) NSString * _Nonnull jsonCheckLivenessFrontCard;
@property (nonatomic, copy) NSString * _Nonnull jsonAPICheckLivenessFrontCard;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyCheckLivenessFrontCard;
@property (nonatomic, copy) NSString * _Nonnull jsonCheckLivenessBackCard;
@property (nonatomic, copy) NSString * _Nonnull jsonAPICheckLivenessBackCard;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyCheckLivenessBackCard;
@property (nonatomic, copy) NSString * _Nonnull jsonAddFace;
@property (nonatomic, copy) NSString * _Nonnull jsonAPIAddFace;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyAddFace;
@property (nonatomic, copy) NSString * _Nonnull jsonSearchFace;
@property (nonatomic, copy) NSString * _Nonnull jsonAPISearchFace;
@property (nonatomic, copy) NSString * _Nonnull jsonBodySearchFace;
@property (nonatomic, copy) NSString * _Nonnull networkProblem;
@property (nonatomic, copy) NSString * _Nonnull jsonAPIGetPostCode;
@property (nonatomic, copy) NSString * _Nonnull jsonBodyGetPostCode;
@property (nonatomic, copy) NSString * _Nonnull jsonIssuePlace;
@property (nonatomic, copy) NSString * _Nonnull jsonOriginLocation;
@property (nonatomic, copy) NSString * _Nonnull jsonRecentLocation;
@property (nonatomic, copy) NSString * _Nonnull jsonBirthPlace;
@property (nonatomic, strong) UIImage * _Nullable imageFront;
@property (nonatomic, strong) UIImage * _Nullable imageBack;
@property (nonatomic, strong) UIImage * _Nullable imageFace;
@property (nonatomic, strong) UIImage * _Nullable imageFaceLeft;
@property (nonatomic, strong) UIImage * _Nullable imageFaceRight;
@property (nonatomic, copy) NSString * _Nonnull linkUploadImage;
@property (nonatomic, copy) NSString * _Nonnull hashImageFront;
@property (nonatomic, copy) NSString * _Nonnull hashImageBack;
@property (nonatomic, copy) NSString * _Nonnull hashImageFace;
@property (nonatomic, copy) NSString * _Nonnull hashImageFaceLeft;
@property (nonatomic, copy) NSString * _Nonnull hashImageFaceRight;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8FinalSDK5Toast")
@interface Toast : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, TypeDocument, closed) {
  TypeDocumentCmt = 0,
  TypeDocumentHochieu = 1,
  TypeDocumentBanglaixe = 2,
  TypeDocumentCmtquandoi = 3,
  TypeDocumentKhac = 4,
};


@interface UIButton (SWIFT_EXTENSION(FinalSDK))
@property (nonatomic, copy) IBInspectable NSString * _Nullable localizeKey;
@end


















@interface UILabel (SWIFT_EXTENSION(FinalSDK))
@property (nonatomic, copy) IBInspectable NSString * _Nullable localizeKey;
@end


@interface UINavigationItem (SWIFT_EXTENSION(FinalSDK))
@property (nonatomic, copy) IBInspectable NSString * _Nullable localizeKey;
@end






@interface UITextField (SWIFT_EXTENSION(FinalSDK))
@property (nonatomic, copy) IBInspectable NSString * _Nullable localizeKey;
@end


@interface UITextView (SWIFT_EXTENSION(FinalSDK))
@property (nonatomic, copy) IBInspectable NSString * _Nullable localizeKey;
@end











typedef SWIFT_ENUM(NSInteger, VersionSdk, closed) {
  VersionSdkNormal = 0,
  VersionSdkPro = 1,
};

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
