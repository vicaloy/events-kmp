#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedApollo_apiCompiledField, SharedApollo_apiCustomScalarAdapters, SharedGetAllUsersQueryCompanion, SharedGetAllUsersQueryData, SharedQueryBuilder, SharedGetAllUsersQueryGetAllUser, SharedGetAllUsersQuery_ResponseAdapter, SharedGetAllUsersQuery_ResponseAdapterData, SharedGetAllUsersQuery_ResponseAdapterGetAllUser, SharedCommonDi, SharedApollo_runtimeApolloClient, SharedUserNetworkRepository, SharedPlace, SharedUser, SharedKotlinEnumCompanion, SharedKotlinEnum<E>, SharedEventType, SharedKotlinArray<T>, SharedEvent, SharedUserFragment, SharedUserFragmentImpl_ResponseAdapter, SharedUserFragmentImpl_ResponseAdapterUserFragment, SharedUserFragmentSelections, SharedApollo_apiCompiledSelection, Shared__Schema, SharedApollo_apiObjectType, SharedApollo_apiCompiledNamedType, SharedGetAllUsersQuerySelections, SharedGraphQLBooleanCompanion, SharedApollo_apiCustomScalarType, SharedGraphQLFloatCompanion, SharedGraphQLIDCompanion, SharedGraphQLIntCompanion, SharedGraphQLStringCompanion, SharedQueryCompanion, SharedApollo_apiObjectBuilder<__covariant T>, SharedUserDTOCompanion, SharedUserDTOBuilder, SharedApollo_normalized_cache_apiNormalizedCacheFactory, SharedKotlinThrowable, SharedKotlinException, SharedApollo_apiOptional<__covariant V>, SharedApollo_apiExecutableVariables, SharedApollo_apiCompiledArgument, SharedApollo_apiCompiledFieldBuilder, SharedApollo_apiCompiledCondition, SharedApollo_apiCompiledType, SharedApollo_apiJsonNumber, SharedApollo_apiCustomScalarAdaptersKey, SharedApollo_apiError, SharedApollo_apiCustomScalarAdaptersBuilder, SharedApollo_apiDeferredFragmentIdentifier, SharedApollo_apiFakeResolverContext, SharedKotlinNothing, SharedApollo_apiJsonReaderToken, SharedApollo_apiHttpHeader, SharedApollo_apiHttpMethod, SharedApollo_runtimeApolloClientCompanion, SharedApollo_apiApolloRequest<D>, SharedApollo_runtimeApolloCall<D>, SharedApollo_runtimeApolloClientBuilder, SharedKotlinRuntimeException, SharedKotlinIllegalStateException, SharedApollo_apiObjectTypeBuilder, SharedApollo_apiInterfaceType, SharedApollo_normalized_cache_apiNormalizedCache, SharedApollo_apiOptionalCompanion, SharedApollo_apiCompiledArgumentDefinition, SharedApollo_apiErrorLocation, SharedApollo_apiApolloRequestBuilder<D>, SharedUuidUuid, SharedApollo_apiApolloResponse<D>, SharedKotlinx_coroutines_coreCoroutineDispatcher, SharedApollo_apiInterfaceTypeBuilder, SharedApollo_normalized_cache_apiCacheHeaders, SharedApollo_normalized_cache_apiNormalizedCacheCompanion, SharedApollo_normalized_cache_apiCacheKey, SharedApollo_apiOptionalAbsent, SharedApollo_apiOptionalPresent<V>, SharedApollo_apiCompiledArgumentDefinitionBuilder, SharedKotlinByteArray, SharedOkioByteString, SharedOkioBuffer, SharedOkioTimeout, SharedApollo_apiApolloResponseBuilder<D>, SharedApollo_apiApolloException, SharedApollo_apiHttpRequest, SharedApollo_apiHttpResponse, SharedKotlinAbstractCoroutineContextElement, SharedKotlinx_coroutines_coreCoroutineDispatcherKey, SharedApollo_runtimeWsProtocol, SharedApollo_normalized_cache_apiCacheHeadersCompanion, SharedApollo_normalized_cache_apiCacheHeadersBuilder, SharedKotlinRegex, SharedApollo_normalized_cache_apiCacheKeyCompanion, SharedKotlinByteIterator, SharedOkioByteStringCompanion, SharedOkioBufferUnsafeCursor, SharedOkioTimeoutCompanion, SharedApollo_apiHttpRequestBuilder, SharedApollo_apiHttpResponseBuilder, SharedKotlinAbstractCoroutineContextKey<B, E>, SharedApollo_runtimeWsFrameType, SharedKotlinRegexOption, SharedKotlinRegexCompanion, NSData, SharedKotlinMatchResultDestructured, SharedKotlinIntRange, SharedKotlinMatchGroup, SharedKotlinIntProgressionCompanion, SharedKotlinIntIterator, SharedKotlinIntProgression, SharedKotlinIntRangeCompanion;

@protocol SharedApollo_apiAdapter, SharedApollo_apiJsonWriter, SharedApollo_apiExecutable, SharedApollo_apiOperation, SharedApollo_apiQuery, SharedApollo_apiFakeResolver, SharedApollo_apiExecutableData, SharedApollo_apiOperationData, SharedApollo_apiQueryData, SharedApollo_apiJsonReader, SharedKotlinComparable, SharedKotlinx_coroutines_coreFlow, SharedApollo_apiFragmentData, SharedUserRepository, SharedApollo_apiBuilderFactory, SharedApollo_apiBuilderScope, SharedApollo_apiUpload, SharedOkioCloseable, SharedApollo_apiExecutionContextKey, SharedApollo_apiExecutionContextElement, SharedApollo_apiExecutionContext, SharedApollo_apiExecutionOptions, SharedApollo_apiMutationData, SharedApollo_apiMutation, SharedApollo_apiSubscriptionData, SharedApollo_apiSubscription, SharedApollo_runtimeApolloInterceptor, SharedApollo_runtimeNetworkTransport, SharedKotlinIterator, SharedKotlinx_coroutines_coreFlowCollector, SharedOkioBufferedSink, SharedApollo_apiMutableExecutionOptions, SharedApollo_runtimeHttpInterceptor, SharedApollo_runtimeApolloClientListener, SharedApollo_runtimeHttpEngine, SharedApollo_runtimeNetworkMonitor, SharedApollo_runtimeWebSocketEngine, SharedKotlinSuspendFunction2, SharedKotlinSuspendFunction0, SharedApollo_runtimeWsProtocolFactory, SharedApollo_runtimeApolloInterceptorChain, SharedKotlinKClass, SharedApollo_normalized_cache_apiReadOnlyNormalizedCache, SharedOkioSource, SharedOkioSink, SharedApollo_runtimeHttpInterceptorChain, SharedKotlinCoroutineContextKey, SharedKotlinCoroutineContextElement, SharedKotlinCoroutineContext, SharedKotlinContinuation, SharedKotlinContinuationInterceptor, SharedKotlinx_coroutines_coreRunnable, SharedApollo_runtimeWebSocketConnection, SharedKotlinFunction, SharedApollo_runtimeWsProtocolListener, SharedKotlinx_coroutines_coreCoroutineScope, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier, SharedOkioBufferedSource, SharedApollo_apiHttpBody, SharedKotlinMatchResult, SharedKotlinSequence, SharedKotlinMatchGroupCollection, SharedKotlinIterable, SharedKotlinCollection, SharedKotlinClosedRange, SharedKotlinOpenEndRange;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Apollo_apiExecutable")))
@protocol SharedApollo_apiExecutable
@required
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters withDefaultValues:(BOOL)withDefaultValues error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:withDefaultValues:)")));
@property (readonly) BOOL ignoreErrors __attribute__((swift_name("ignoreErrors")));
@end

__attribute__((swift_name("Apollo_apiOperation")))
@protocol SharedApollo_apiOperation <SharedApollo_apiExecutable>
@required
- (NSString *)document __attribute__((swift_name("document()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
@end

__attribute__((swift_name("Apollo_apiQuery")))
@protocol SharedApollo_apiQuery <SharedApollo_apiOperation>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery")))
@interface SharedGetAllUsersQuery : SharedBase <SharedApollo_apiQuery>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGetAllUsersQueryCompanion *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("adapter()")));
- (NSString *)document __attribute__((swift_name("document()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)id __attribute__((swift_name("id()")));
- (NSString *)name __attribute__((swift_name("name()")));
- (SharedApollo_apiCompiledField *)rootField __attribute__((swift_name("rootField()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)serializeVariablesWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters withDefaultValues:(BOOL)withDefaultValues error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("serializeVariables(writer:customScalarAdapters:withDefaultValues:)")));
@property (readonly) BOOL ignoreErrors __attribute__((swift_name("ignoreErrors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery.Companion")))
@interface SharedGetAllUsersQueryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetAllUsersQueryCompanion *shared __attribute__((swift_name("shared")));
- (SharedGetAllUsersQueryData *)DataResolver:(id<SharedApollo_apiFakeResolver>)resolver block:(void (^)(SharedQueryBuilder *))block __attribute__((swift_name("Data(resolver:block:)")));
@property (readonly) NSString *OPERATION_DOCUMENT __attribute__((swift_name("OPERATION_DOCUMENT")));
@property (readonly) NSString *OPERATION_ID __attribute__((swift_name("OPERATION_ID")));
@property (readonly) NSString *OPERATION_NAME __attribute__((swift_name("OPERATION_NAME")));
@end

__attribute__((swift_name("Apollo_apiExecutableData")))
@protocol SharedApollo_apiExecutableData
@required
@end

__attribute__((swift_name("Apollo_apiOperationData")))
@protocol SharedApollo_apiOperationData <SharedApollo_apiExecutableData>
@required
@end

__attribute__((swift_name("Apollo_apiQueryData")))
@protocol SharedApollo_apiQueryData <SharedApollo_apiOperationData>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery.Data")))
@interface SharedGetAllUsersQueryData : SharedBase <SharedApollo_apiQueryData>
- (instancetype)initWithGetAllUsers:(NSArray<SharedGetAllUsersQueryGetAllUser *> *)getAllUsers __attribute__((swift_name("init(getAllUsers:)"))) __attribute__((objc_designated_initializer));
- (SharedGetAllUsersQueryData *)doCopyGetAllUsers:(NSArray<SharedGetAllUsersQueryGetAllUser *> *)getAllUsers __attribute__((swift_name("doCopy(getAllUsers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedGetAllUsersQueryGetAllUser *> *getAllUsers __attribute__((swift_name("getAllUsers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery.GetAllUser")))
@interface SharedGetAllUsersQueryGetAllUser : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("init(id:name:lastname:email:)"))) __attribute__((objc_designated_initializer));
- (SharedGetAllUsersQueryGetAllUser *)doCopyId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("doCopy(id:name:lastname:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *lastname __attribute__((swift_name("lastname"))) __attribute__((deprecated("will be removed in future versions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery_ResponseAdapter")))
@interface SharedGetAllUsersQuery_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getAllUsersQuery_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetAllUsersQuery_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Apollo_apiAdapter")))
@protocol SharedApollo_apiAdapter
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(id _Nullable)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery_ResponseAdapter.Data")))
@interface SharedGetAllUsersQuery_ResponseAdapterData : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)data __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetAllUsersQuery_ResponseAdapterData *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedGetAllUsersQueryData * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedGetAllUsersQueryData *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuery_ResponseAdapter.GetAllUser")))
@interface SharedGetAllUsersQuery_ResponseAdapterGetAllUser : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getAllUser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetAllUsersQuery_ResponseAdapterGetAllUser *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedGetAllUsersQueryGetAllUser * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedGetAllUsersQueryGetAllUser *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonDi")))
@interface SharedCommonDi : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commonDi __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedCommonDi *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_runtimeApolloClient *apolloClient __attribute__((swift_name("apolloClient")));
@property (readonly) SharedUserNetworkRepository *userNetworkRepository __attribute__((swift_name("userNetworkRepository")));
@end

__attribute__((swift_name("Event")))
@interface SharedEvent : SharedBase
- (instancetype)initWithId:(int32_t)id title:(NSString *)title description:(NSString *)description timestamp:(NSString *)timestamp place:(SharedPlace *)place organizer:(SharedUser *)organizer attendees:(NSArray<SharedUser *> *)attendees __attribute__((swift_name("init(id:title:description:timestamp:place:organizer:attendees:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSArray<SharedUser *> *attendees __attribute__((swift_name("attendees")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly, getter=id_) int32_t id __attribute__((swift_name("id")));
@property (readonly) SharedUser *organizer __attribute__((swift_name("organizer")));
@property (readonly) SharedPlace *place __attribute__((swift_name("place")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventType")))
@interface SharedEventType : SharedKotlinEnum<SharedEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedEventType *musical __attribute__((swift_name("musical")));
@property (class, readonly) SharedEventType *politician __attribute__((swift_name("politician")));
@property (class, readonly) SharedEventType *other __attribute__((swift_name("other")));
+ (SharedKotlinArray<SharedEventType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedEventType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MusicalEvent")))
@interface SharedMusicalEvent : SharedEvent
- (instancetype)initWithId:(int32_t)id title:(NSString *)title description:(NSString *)description timestamp:(NSString *)timestamp place:(SharedPlace *)place organizer:(SharedUser *)organizer attendees:(NSArray<SharedUser *> *)attendees artist:(NSString *)artist genre:(NSString *)genre ticketPrice:(double)ticketPrice __attribute__((swift_name("init(id:title:description:timestamp:place:organizer:attendees:artist:genre:ticketPrice:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id title:(NSString *)title description:(NSString *)description timestamp:(NSString *)timestamp place:(SharedPlace *)place organizer:(SharedUser *)organizer attendees:(NSArray<SharedUser *> *)attendees __attribute__((swift_name("init(id:title:description:timestamp:place:organizer:attendees:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *artist __attribute__((swift_name("artist")));
@property (readonly) NSString *genre __attribute__((swift_name("genre")));
@property (readonly) double ticketPrice __attribute__((swift_name("ticketPrice")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Place")))
@interface SharedPlace : SharedBase
- (instancetype)initWithId:(int32_t)id eventId:(int32_t)eventId street:(NSString *)street latitude:(double)latitude longitude:(double)longitude description:(NSString *)description __attribute__((swift_name("init(id:eventId:street:latitude:longitude:description:)"))) __attribute__((objc_designated_initializer));
- (SharedPlace *)doCopyId:(int32_t)id eventId:(int32_t)eventId street:(NSString *)street latitude:(double)latitude longitude:(double)longitude description:(NSString *)description __attribute__((swift_name("doCopy(id:eventId:street:latitude:longitude:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *street __attribute__((swift_name("street")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SportEvent")))
@interface SharedSportEvent : SharedEvent
- (instancetype)initWithId:(int32_t)id title:(NSString *)title description:(NSString *)description timestamp:(NSString *)timestamp place:(SharedPlace *)place organizer:(SharedUser *)organizer attendees:(NSArray<SharedUser *> *)attendees type:(NSString *)type localTeam:(NSString *)localTeam visitingTeam:(NSString *)visitingTeam __attribute__((swift_name("init(id:title:description:timestamp:place:organizer:attendees:type:localTeam:visitingTeam:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(int32_t)id title:(NSString *)title description:(NSString *)description timestamp:(NSString *)timestamp place:(SharedPlace *)place organizer:(SharedUser *)organizer attendees:(NSArray<SharedUser *> *)attendees __attribute__((swift_name("init(id:title:description:timestamp:place:organizer:attendees:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *localTeam __attribute__((swift_name("localTeam")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *visitingTeam __attribute__((swift_name("visitingTeam")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface SharedUser : SharedBase
- (instancetype)initWithId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("init(id:name:lastname:email:)"))) __attribute__((objc_designated_initializer));
- (SharedUser *)doCopyId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("doCopy(id:name:lastname:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *lastname __attribute__((swift_name("lastname")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("EventRepository")))
@protocol SharedEventRepository
@required
- (BOOL)addEvent:(SharedEvent *)event __attribute__((swift_name("add(event:)")));
- (BOOL)deleteEvent:(SharedEvent *)event __attribute__((swift_name("delete(event:)")));
- (NSArray<SharedEvent *> *)filterTitle:(NSString * _Nullable)title description:(NSString * _Nullable)description timestamp:(NSString * _Nullable)timestamp place:(SharedPlace * _Nullable)place organizer:(SharedUser * _Nullable)organizer type:(SharedEventType * _Nullable)type __attribute__((swift_name("filter(title:description:timestamp:place:organizer:type:)")));
- (SharedEvent * _Nullable)findId:(int32_t)id __attribute__((swift_name("find(id:)")));
- (NSArray<SharedEvent *> *)getAll __attribute__((swift_name("getAll()")));
- (BOOL)upsertEvent:(SharedEvent *)event __attribute__((swift_name("upsert(event:)")));
@end

__attribute__((swift_name("UserRepository")))
@protocol SharedUserRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(SharedUser *)user completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));
- (BOOL)deleteUser:(SharedUser *)user __attribute__((swift_name("delete(user:)")));
- (NSArray<SharedUser *> *)filterName:(NSString * _Nullable)name email:(NSString * _Nullable)email __attribute__((swift_name("filter(name:email:)")));
- (SharedUser * _Nullable)findId:(int32_t)id __attribute__((swift_name("find(id:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllWithCompletionHandler:(void (^)(id<SharedKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAll(completionHandler:)")));
- (BOOL)upsertUser:(SharedUser *)user __attribute__((swift_name("upsert(user:)")));
@end

__attribute__((swift_name("Apollo_apiFragmentData")))
@protocol SharedApollo_apiFragmentData <SharedApollo_apiExecutableData>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFragment")))
@interface SharedUserFragment : SharedBase <SharedApollo_apiFragmentData>
- (instancetype)initWithId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("init(id:name:lastname:email:)"))) __attribute__((objc_designated_initializer));
- (SharedUserFragment *)doCopyId:(int32_t)id name:(NSString *)name lastname:(NSString *)lastname email:(NSString *)email __attribute__((swift_name("doCopy(id:name:lastname:email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *lastname __attribute__((swift_name("lastname"))) __attribute__((deprecated("will be removed in future versions")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFragmentImpl_ResponseAdapter")))
@interface SharedUserFragmentImpl_ResponseAdapter : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userFragmentImpl_ResponseAdapter __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserFragmentImpl_ResponseAdapter *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFragmentImpl_ResponseAdapter.UserFragment")))
@interface SharedUserFragmentImpl_ResponseAdapterUserFragment : SharedBase <SharedApollo_apiAdapter>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userFragment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserFragmentImpl_ResponseAdapterUserFragment *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedUserFragment * _Nullable)fromJsonReader:(id<SharedApollo_apiJsonReader>)reader customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("fromJson(reader:customScalarAdapters:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)toJsonWriter:(id<SharedApollo_apiJsonWriter>)writer customScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters value:(SharedUserFragment *)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("toJson(writer:customScalarAdapters:value:)")));
@property (readonly) NSArray<NSString *> *RESPONSE_NAMES __attribute__((swift_name("RESPONSE_NAMES")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFragmentSelections")))
@interface SharedUserFragmentSelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userFragmentSelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserFragmentSelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *__root __attribute__((swift_name("__root")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNetworkRepository")))
@interface SharedUserNetworkRepository : SharedBase <SharedUserRepository>
- (instancetype)initWithApolloClient:(SharedApollo_runtimeApolloClient *)apolloClient __attribute__((swift_name("init(apolloClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(SharedUser *)user completionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));
- (BOOL)deleteUser:(SharedUser *)user __attribute__((swift_name("delete(user:)")));
- (NSArray<SharedUser *> *)filterName:(NSString * _Nullable)name email:(NSString * _Nullable)email __attribute__((swift_name("filter(name:email:)")));
- (SharedUser * _Nullable)findId:(int32_t)id __attribute__((swift_name("find(id:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllWithCompletionHandler:(void (^)(id<SharedKotlinx_coroutines_coreFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAll(completionHandler:)")));
- (BOOL)upsertUser:(SharedUser *)user __attribute__((swift_name("upsert(user:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__Schema")))
@interface Shared__Schema : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)__Schema __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Shared__Schema *shared __attribute__((swift_name("shared")));
- (NSArray<SharedApollo_apiObjectType *> *)possibleTypesType:(SharedApollo_apiCompiledNamedType *)type __attribute__((swift_name("possibleTypes(type:)")));
@property (readonly) NSArray<SharedApollo_apiCompiledNamedType *> *all __attribute__((swift_name("all")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllUsersQuerySelections")))
@interface SharedGetAllUsersQuerySelections : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getAllUsersQuerySelections __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGetAllUsersQuerySelections *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *__root __attribute__((swift_name("__root")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean")))
@interface SharedGraphQLBoolean : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLBooleanCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLBoolean.Companion")))
@interface SharedGraphQLBooleanCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLBooleanCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat")))
@interface SharedGraphQLFloat : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLFloatCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLFloat.Companion")))
@interface SharedGraphQLFloatCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID")))
@interface SharedGraphQLID : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLIDCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLID.Companion")))
@interface SharedGraphQLIDCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLIDCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt")))
@interface SharedGraphQLInt : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLIntCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLInt.Companion")))
@interface SharedGraphQLIntCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString")))
@interface SharedGraphQLString : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedGraphQLStringCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphQLString.Companion")))
@interface SharedGraphQLStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedGraphQLStringCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query")))
@interface SharedQuery : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedQueryCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Apollo_apiBuilderFactory")))
@protocol SharedApollo_apiBuilderFactory
@required
- (id _Nullable)doNewBuilderCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("doNewBuilder(customScalarAdapters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Query.Companion")))
@interface SharedQueryCompanion : SharedBase <SharedApollo_apiBuilderFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedQueryCompanion *shared __attribute__((swift_name("shared")));
- (SharedQueryBuilder *)doNewBuilderCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("doNewBuilder(customScalarAdapters:)")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Apollo_apiBuilderScope")))
@protocol SharedApollo_apiBuilderScope
@required
@property (readonly) SharedApollo_apiCustomScalarAdapters *customScalarAdapters __attribute__((swift_name("customScalarAdapters")));
@end

__attribute__((swift_name("Apollo_apiObjectBuilder")))
@interface SharedApollo_apiObjectBuilder<__covariant T> : SharedBase <SharedApollo_apiBuilderScope>
- (instancetype)initWithCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("init(customScalarAdapters:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
- (void)setKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("set(key:value:)")));
@property (readonly) SharedMutableDictionary<NSString *, id> *__fields __attribute__((swift_name("__fields")));
@property NSString *__typename __attribute__((swift_name("__typename")));
@property (readonly) SharedApollo_apiCustomScalarAdapters *customScalarAdapters __attribute__((swift_name("customScalarAdapters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryBuilder")))
@interface SharedQueryBuilder : SharedApollo_apiObjectBuilder<NSDictionary<NSString *, id> *>
- (instancetype)initWithCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("init(customScalarAdapters:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@property NSArray<NSDictionary<NSString *, id> *> *getAllUsers __attribute__((swift_name("getAllUsers")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("QueryMap")))
@interface SharedQueryMap : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTO")))
@interface SharedUserDTO : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedUserDTOCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTO.Companion")))
@interface SharedUserDTOCompanion : SharedBase <SharedApollo_apiBuilderFactory>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedUserDTOCompanion *shared __attribute__((swift_name("shared")));
- (SharedUserDTOBuilder *)doNewBuilderCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("doNewBuilder(customScalarAdapters:)")));
@property (readonly) SharedApollo_apiObjectType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTOBuilder")))
@interface SharedUserDTOBuilder : SharedApollo_apiObjectBuilder<NSDictionary<NSString *, id> *>
- (instancetype)initWithCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("init(customScalarAdapters:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)build __attribute__((swift_name("build()")));
@property NSString *email __attribute__((swift_name("email")));
@property int32_t id __attribute__((swift_name("id")));
@property NSString *lastname __attribute__((swift_name("lastname")));
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("UserDTOMap")))
@interface SharedUserDTOMap : NSObject
@end

@interface SharedGetAllUsersQueryGetAllUser (Extensions)
- (SharedUser *)toUser __attribute__((swift_name("toUser()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Di_iosKt")))
@interface SharedDi_iosKt : SharedBase
+ (SharedApollo_normalized_cache_apiNormalizedCacheFactory *)platformModule __attribute__((swift_name("platformModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QueryKt")))
@interface SharedQueryKt : SharedBase
+ (NSDictionary<NSString *, id> *)buildQuery:(id<SharedApollo_apiBuilderScope>)receiver block:(void (^)(SharedQueryBuilder *))block __attribute__((swift_name("buildQuery(_:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTOKt")))
@interface SharedUserDTOKt : SharedBase
+ (NSDictionary<NSString *, id> *)buildUserDTO:(id<SharedApollo_apiBuilderScope>)receiver block:(void (^)(SharedUserDTOBuilder *))block __attribute__((swift_name("buildUserDTO(_:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__CustomScalarAdaptersKt")))
@interface Shared__CustomScalarAdaptersKt : SharedBase
@property (class, readonly) SharedApollo_apiCustomScalarAdapters *__CustomScalarAdapters __attribute__((swift_name("__CustomScalarAdapters")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SharedKotlinThrowable : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SharedKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SharedKotlinException : SharedKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("OkioIOException")))
@interface SharedOkioIOException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Apollo_apiCompiledSelection")))
@interface SharedApollo_apiCompiledSelection : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField")))
@interface SharedApollo_apiCompiledField : SharedApollo_apiCompiledSelection
- (SharedApollo_apiOptional<id> *)argumentValueName:(NSString *)name variables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("argumentValue(name:variables:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (NSDictionary<NSString *, id> *)argumentValuesVariables:(SharedApollo_apiExecutableVariables *)variables filter:(SharedBoolean *(^)(SharedApollo_apiCompiledArgument *))filter __attribute__((swift_name("argumentValues(variables:filter:)")));
- (NSString *)nameWithArgumentsVariables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("nameWithArguments(variables:)")));
- (SharedApollo_apiCompiledFieldBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id _Nullable)resolveArgumentName:(NSString *)name variables:(SharedApollo_apiExecutableVariables *)variables __attribute__((swift_name("resolveArgument(name:variables:)"))) __attribute__((deprecated("This function does not distinguish between null and absent arguments. Use argumentValue instead")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<SharedApollo_apiCompiledArgument *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) NSArray<SharedApollo_apiCompiledCondition *> *condition __attribute__((swift_name("condition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *responseName __attribute__((swift_name("responseName")));
@property (readonly) NSArray<SharedApollo_apiCompiledSelection *> *selections __attribute__((swift_name("selections")));
@property (readonly) SharedApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("OkioCloseable")))
@protocol SharedOkioCloseable
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Apollo_apiJsonWriter")))
@protocol SharedApollo_apiJsonWriter <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)nameName:(NSString *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("name(name:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)nullValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nullValue()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(id<SharedApollo_apiUpload>)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(SharedApollo_apiJsonNumber *)value error_:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(BOOL)value error__:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value__:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(double)value error___:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value___:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(int32_t)value error____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value____:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(int64_t)value error_____:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value_____:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonWriter> _Nullable)valueValue:(NSString *)value error______:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(value______:)")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end

__attribute__((swift_name("Apollo_apiExecutionContext")))
@protocol SharedApollo_apiExecutionContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SharedApollo_apiExecutionContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SharedApollo_apiExecutionContextElement> _Nullable)getKey:(id<SharedApollo_apiExecutionContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SharedApollo_apiExecutionContext>)minusKeyKey:(id<SharedApollo_apiExecutionContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SharedApollo_apiExecutionContext>)plusContext:(id<SharedApollo_apiExecutionContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Apollo_apiExecutionContextElement")))
@protocol SharedApollo_apiExecutionContextElement <SharedApollo_apiExecutionContext>
@required
@property (readonly) id<SharedApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters")))
@interface SharedApollo_apiCustomScalarAdapters : SharedBase <SharedApollo_apiExecutionContextElement>
@property (class, readonly, getter=companion) SharedApollo_apiCustomScalarAdaptersKey *companion __attribute__((swift_name("companion")));
- (id<SharedApollo_apiAdapter> _Nullable)adapterForName:(NSString *)name __attribute__((swift_name("adapterFor(name:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiError * _Nullable)firstErrorStartingWithPath:(NSArray<id> *)path __attribute__((swift_name("firstErrorStartingWith(path:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (id<SharedApollo_apiAdapter>)responseAdapterForCustomScalar:(SharedApollo_apiCustomScalarType *)customScalar __attribute__((swift_name("responseAdapterFor(customScalar:)")));
@property (readonly) NSSet<SharedApollo_apiDeferredFragmentIdentifier *> * _Nullable deferredFragmentIdentifiers __attribute__((swift_name("deferredFragmentIdentifiers")));
@property (readonly) NSArray<SharedApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) NSSet<NSString *> * _Nullable falseVariables __attribute__((swift_name("falseVariables")));
@property (readonly) id<SharedApollo_apiExecutionContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Apollo_apiFakeResolver")))
@protocol SharedApollo_apiFakeResolver
@required
- (id)resolveLeafContext:(SharedApollo_apiFakeResolverContext *)context __attribute__((swift_name("resolveLeaf(context:)")));
- (int32_t)resolveListSizeContext:(SharedApollo_apiFakeResolverContext *)context __attribute__((swift_name("resolveListSize(context:)")));
- (BOOL)resolveMaybeNullContext:(SharedApollo_apiFakeResolverContext *)context __attribute__((swift_name("resolveMaybeNull(context:)")));
- (NSString *)resolveTypenameContext:(SharedApollo_apiFakeResolverContext *)context __attribute__((swift_name("resolveTypename(context:)")));
- (NSString * _Nullable)stableIdForObjectObj:(NSDictionary<NSString *, id> *)obj mergedField:(SharedApollo_apiCompiledField *)mergedField __attribute__((swift_name("stableIdForObject(obj:mergedField:)")));
@end

__attribute__((swift_name("Apollo_apiJsonReader")))
@protocol SharedApollo_apiJsonReader <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)beginArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)beginObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("beginObject()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)endArrayAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endArray()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<SharedApollo_apiJsonReader> _Nullable)endObjectAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("endObject()")));
- (NSArray<id> *)getPath __attribute__((swift_name("getPath()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)hasNextAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("hasNext()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)nextBooleanAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextBoolean()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (double)nextDoubleAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextDouble()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)nextIntAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextInt()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)nextLongAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextLong()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextNameAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextName()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedKotlinNothing * _Nullable)nextNullAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNull()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedApollo_apiJsonNumber * _Nullable)nextNumberAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextNumber()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)nextStringAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("nextString()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (SharedApollo_apiJsonReaderToken * _Nullable)peekAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("peek()")));
- (void)rewind __attribute__((swift_name("rewind()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int32_t)selectNameNames:(NSArray<NSString *> *)names error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("selectName(names:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)skipValueAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("skipValue()")));
@end

__attribute__((swift_name("Apollo_apiExecutionOptions")))
@protocol SharedApollo_apiExecutionOptions
@required
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_runtimeApolloClient")))
@interface SharedApollo_runtimeApolloClient : SharedBase <SharedApollo_apiExecutionOptions, SharedOkioCloseable>
@property (class, readonly, getter=companion) SharedApollo_runtimeApolloClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (void)dispose __attribute__((swift_name("dispose()"))) __attribute__((unavailable("Use close() instead")));
- (id<SharedKotlinx_coroutines_coreFlow>)executeAsFlowApolloRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)apolloRequest __attribute__((swift_name("executeAsFlow(apolloRequest:)")));
- (SharedApollo_runtimeApolloCall<id<SharedApollo_apiMutationData>> *)mutationMutation:(id<SharedApollo_apiMutation>)mutation __attribute__((swift_name("mutation(mutation:)")));
- (SharedApollo_runtimeApolloClientBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (SharedApollo_runtimeApolloCall<id<SharedApollo_apiQueryData>> *)queryQuery:(id<SharedApollo_apiQuery>)query __attribute__((swift_name("query(query:)")));
- (SharedApollo_runtimeApolloCall<id<SharedApollo_apiSubscriptionData>> *)subscriptionSubscription:(id<SharedApollo_apiSubscription>)subscription __attribute__((swift_name("subscription(subscription:)")));
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedApollo_apiCustomScalarAdapters *customScalarAdapters __attribute__((swift_name("customScalarAdapters")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) NSArray<id<SharedApollo_runtimeApolloInterceptor>> *interceptors __attribute__((swift_name("interceptors")));
@property (readonly) id<SharedApollo_runtimeNetworkTransport> networkTransport __attribute__((swift_name("networkTransport")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@property (readonly) id<SharedApollo_runtimeNetworkTransport> subscriptionNetworkTransport __attribute__((swift_name("subscriptionNetworkTransport")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SharedKotlinEnumCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SharedKotlinRuntimeException : SharedKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SharedKotlinIllegalStateException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SharedKotlinCancellationException : SharedKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SharedKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SharedKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Apollo_apiCompiledType")))
@interface SharedApollo_apiCompiledType : SharedBase
- (SharedApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()"))) __attribute__((deprecated("Use rawType instead")));
- (SharedApollo_apiCompiledNamedType *)rawType __attribute__((swift_name("rawType()")));
@end

__attribute__((swift_name("Apollo_apiCompiledNamedType")))
@interface SharedApollo_apiCompiledNamedType : SharedApollo_apiCompiledType
- (SharedApollo_apiCompiledNamedType *)leafType __attribute__((swift_name("leafType()"))) __attribute__((deprecated("Use rawType instead")));
- (SharedApollo_apiCompiledNamedType *)rawType __attribute__((swift_name("rawType()")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType")))
@interface SharedApollo_apiObjectType : SharedApollo_apiCompiledNamedType
- (SharedApollo_apiObjectTypeBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) NSArray<NSString *> *embeddedFields __attribute__((swift_name("embeddedFields")));
@property (readonly) NSArray<SharedApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarType")))
@interface SharedApollo_apiCustomScalarType : SharedApollo_apiCompiledNamedType
- (instancetype)initWithName:(NSString *)name className:(NSString *)className __attribute__((swift_name("init(name:className:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *className __attribute__((swift_name("className")));
@end

__attribute__((swift_name("Apollo_normalized_cache_apiNormalizedCacheFactory")))
@interface SharedApollo_normalized_cache_apiNormalizedCacheFactory : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_normalized_cache_apiNormalizedCacheFactory *)chainFactory:(SharedApollo_normalized_cache_apiNormalizedCacheFactory *)factory __attribute__((swift_name("chain(factory:)")));
- (SharedApollo_normalized_cache_apiNormalizedCache *)create __attribute__((swift_name("create()")));
- (SharedApollo_normalized_cache_apiNormalizedCache *)createChain __attribute__((swift_name("createChain()")));
@end

__attribute__((swift_name("Apollo_apiOptional")))
@interface SharedApollo_apiOptional<__covariant V> : SharedBase
@property (class, readonly, getter=companion) SharedApollo_apiOptionalCompanion *companion __attribute__((swift_name("companion")));
- (V _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (V _Nullable)getOrThrow __attribute__((swift_name("getOrThrow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiExecutableVariables")))
@interface SharedApollo_apiExecutableVariables : SharedBase
- (instancetype)initWithValueMap:(NSDictionary<NSString *, id> *)valueMap __attribute__((swift_name("init(valueMap:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *valueMap __attribute__((swift_name("valueMap")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgument")))
@interface SharedApollo_apiCompiledArgument : SharedBase
@property (readonly) SharedApollo_apiCompiledArgumentDefinition *definition __attribute__((swift_name("definition")));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey"))) __attribute__((deprecated("Use definition.isKey instead")));
@property (readonly) NSString *name __attribute__((swift_name("name"))) __attribute__((deprecated("Use definition.name instead")));
@property (readonly) SharedApollo_apiOptional<id> *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledField.Builder")))
@interface SharedApollo_apiCompiledFieldBuilder : SharedBase
- (instancetype)initWithCompiledField:(SharedApollo_apiCompiledField *)compiledField __attribute__((swift_name("init(compiledField:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name type:(SharedApollo_apiCompiledType *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiCompiledFieldBuilder *)aliasAlias:(NSString * _Nullable)alias __attribute__((swift_name("alias(alias:)")));
- (SharedApollo_apiCompiledFieldBuilder *)argumentsArguments:(NSArray<SharedApollo_apiCompiledArgument *> *)arguments __attribute__((swift_name("arguments(arguments:)")));
- (SharedApollo_apiCompiledField *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiCompiledFieldBuilder *)conditionCondition:(NSArray<SharedApollo_apiCompiledCondition *> *)condition __attribute__((swift_name("condition(condition:)")));
- (SharedApollo_apiCompiledFieldBuilder *)selectionsSelections:(NSArray<SharedApollo_apiCompiledSelection *> *)selections __attribute__((swift_name("selections(selections:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedApollo_apiCompiledType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledCondition")))
@interface SharedApollo_apiCompiledCondition : SharedBase
- (instancetype)initWithName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("init(name:inverted:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiCompiledCondition *)doCopyName:(NSString *)name inverted:(BOOL)inverted __attribute__((swift_name("doCopy(name:inverted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL inverted __attribute__((swift_name("inverted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Apollo_apiUpload")))
@protocol SharedApollo_apiUpload
@required
- (void)writeToSink:(id<SharedOkioBufferedSink>)sink __attribute__((swift_name("writeTo(sink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonNumber")))
@interface SharedApollo_apiJsonNumber : SharedBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Apollo_apiExecutionContextKey")))
@protocol SharedApollo_apiExecutionContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Key")))
@interface SharedApollo_apiCustomScalarAdaptersKey : SharedBase <SharedApollo_apiExecutionContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiCustomScalarAdaptersKey *shared __attribute__((swift_name("shared")));
@property (readonly) SharedApollo_apiCustomScalarAdapters *Empty __attribute__((swift_name("Empty")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedApollo_apiCustomScalarAdapters *PassThrough __attribute__((swift_name("PassThrough")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError")))
@interface SharedApollo_apiError : SharedBase
- (instancetype)initWithMessage:(NSString *)message locations:(NSArray<SharedApollo_apiErrorLocation *> * _Nullable)locations path:(NSArray<id> * _Nullable)path extensions:(NSDictionary<NSString *, id> * _Nullable)extensions nonStandardFields:(NSDictionary<NSString *, id> * _Nullable)nonStandardFields __attribute__((swift_name("init(message:locations:path:extensions:nonStandardFields:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Error.Builder instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable extensions __attribute__((swift_name("extensions")));
@property (readonly) NSArray<SharedApollo_apiErrorLocation *> * _Nullable locations __attribute__((swift_name("locations")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable nonStandardFields __attribute__((swift_name("nonStandardFields")));
@property (readonly) NSArray<id> * _Nullable path __attribute__((swift_name("path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCustomScalarAdapters.Builder")))
@interface SharedApollo_apiCustomScalarAdaptersBuilder : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<SharedApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("add(customScalarType:customScalarAdapter:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addName:(NSString *)name adapter:(id<SharedApollo_apiAdapter>)adapter __attribute__((swift_name("add(name:adapter:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)addAllCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("addAll(customScalarAdapters:)")));
- (SharedApollo_apiCustomScalarAdapters *)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)deferredFragmentIdentifiersDeferredFragmentIdentifiers:(NSSet<SharedApollo_apiDeferredFragmentIdentifier *> * _Nullable)deferredFragmentIdentifiers __attribute__((swift_name("deferredFragmentIdentifiers(deferredFragmentIdentifiers:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)errorsErrors:(NSArray<SharedApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (SharedApollo_apiCustomScalarAdaptersBuilder *)falseVariablesFalseVariables:(NSSet<NSString *> * _Nullable)falseVariables __attribute__((swift_name("falseVariables(falseVariables:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiCustomScalarAdaptersBuilder *)unsafeUnsafe:(BOOL)unsafe __attribute__((swift_name("unsafe(unsafe:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiDeferredFragmentIdentifier")))
@interface SharedApollo_apiDeferredFragmentIdentifier : SharedBase
- (instancetype)initWithPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("init(path:label:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiDeferredFragmentIdentifier *)doCopyPath:(NSArray<id> *)path label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(path:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *path __attribute__((swift_name("path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiFakeResolverContext")))
@interface SharedApollo_apiFakeResolverContext : SharedBase
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedApollo_apiCompiledField *mergedField __attribute__((swift_name("mergedField")));
@property (readonly) NSArray<id> *path __attribute__((swift_name("path")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiJsonReaderToken")))
@interface SharedApollo_apiJsonReaderToken : SharedKotlinEnum<SharedApollo_apiJsonReaderToken *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedApollo_apiJsonReaderToken *beginArray __attribute__((swift_name("beginArray")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endArray __attribute__((swift_name("endArray")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *beginObject __attribute__((swift_name("beginObject")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endObject __attribute__((swift_name("endObject")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *name __attribute__((swift_name("name")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *string __attribute__((swift_name("string")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *number __attribute__((swift_name("number")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *long_ __attribute__((swift_name("long_")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *null __attribute__((swift_name("null")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *endDocument __attribute__((swift_name("endDocument")));
@property (class, readonly) SharedApollo_apiJsonReaderToken *any __attribute__((swift_name("any")));
+ (SharedKotlinArray<SharedApollo_apiJsonReaderToken *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedApollo_apiJsonReaderToken *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpHeader")))
@interface SharedApollo_apiHttpHeader : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiHttpHeader *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpMethod")))
@interface SharedApollo_apiHttpMethod : SharedKotlinEnum<SharedApollo_apiHttpMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedApollo_apiHttpMethod *get __attribute__((swift_name("get")));
@property (class, readonly) SharedApollo_apiHttpMethod *post __attribute__((swift_name("post")));
+ (SharedKotlinArray<SharedApollo_apiHttpMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedApollo_apiHttpMethod *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_runtimeApolloClient.Companion")))
@interface SharedApollo_runtimeApolloClientCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_runtimeApolloClientCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_runtimeApolloClientBuilder *)builder __attribute__((swift_name("builder()"))) __attribute__((unavailable("Used for backward compatibility with 2.x")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloRequest")))
@interface SharedApollo_apiApolloRequest<D> : SharedBase <SharedApollo_apiExecutionOptions>
- (SharedApollo_apiApolloRequestBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiApolloRequestBuilder<id<SharedApollo_apiOperationData>> *)doNewBuilderOperation:(id<SharedApollo_apiOperation>)operation __attribute__((swift_name("doNewBuilder(operation:)")));
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable failFastIfOffline __attribute__((swift_name("failFastIfOffline")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) SharedBoolean * _Nullable ignoreApolloClientHttpHeaders __attribute__((swift_name("ignoreApolloClientHttpHeaders")));
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) SharedUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable retryOnError __attribute__((swift_name("retryOnError")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@end

__attribute__((swift_name("Apollo_apiMutationData")))
@protocol SharedApollo_apiMutationData <SharedApollo_apiOperationData>
@required
@end

__attribute__((swift_name("Apollo_apiMutableExecutionOptions")))
@protocol SharedApollo_apiMutableExecutionOptions <SharedApollo_apiExecutionOptions>
@required
- (id _Nullable)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (id _Nullable)addHttpHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHttpHeader(name:value:)")));
- (id _Nullable)canBeBatchedCanBeBatched:(SharedBoolean * _Nullable)canBeBatched __attribute__((swift_name("canBeBatched(canBeBatched:)")));
- (id _Nullable)enableAutoPersistedQueriesEnableAutoPersistedQueries:(SharedBoolean * _Nullable)enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries(enableAutoPersistedQueries:)")));
- (id _Nullable)httpHeadersHttpHeaders:(NSArray<SharedApollo_apiHttpHeader *> * _Nullable)httpHeaders __attribute__((swift_name("httpHeaders(httpHeaders:)")));
- (id _Nullable)httpMethodHttpMethod:(SharedApollo_apiHttpMethod * _Nullable)httpMethod __attribute__((swift_name("httpMethod(httpMethod:)")));
- (id _Nullable)sendApqExtensionsSendApqExtensions:(SharedBoolean * _Nullable)sendApqExtensions __attribute__((swift_name("sendApqExtensions(sendApqExtensions:)")));
- (id _Nullable)sendDocumentSendDocument:(SharedBoolean * _Nullable)sendDocument __attribute__((swift_name("sendDocument(sendDocument:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_runtimeApolloCall")))
@interface SharedApollo_runtimeApolloCall<D> : SharedBase <SharedApollo_apiMutableExecutionOptions>
- (SharedApollo_runtimeApolloCall<D> *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_runtimeApolloCall<D> *)addHttpHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHttpHeader(name:value:)")));
- (SharedApollo_runtimeApolloCall<D> *)canBeBatchedCanBeBatched:(SharedBoolean * _Nullable)canBeBatched __attribute__((swift_name("canBeBatched(canBeBatched:)")));
- (SharedApollo_runtimeApolloCall<D> *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedApollo_runtimeApolloCall<D> *)enableAutoPersistedQueriesEnableAutoPersistedQueries:(SharedBoolean * _Nullable)enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries(enableAutoPersistedQueries:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(SharedApollo_apiApolloResponse<D> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeV3WithCompletionHandler:(void (^)(SharedApollo_apiApolloResponse<D> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("executeV3(completionHandler:)"))) __attribute__((deprecated("Use execute() and handle ApolloResponse.exception instead")));
- (SharedApollo_runtimeApolloCall<D> *)failFastIfOfflineFailFastIfOffline:(SharedBoolean * _Nullable)failFastIfOffline __attribute__((swift_name("failFastIfOffline(failFastIfOffline:)")));
- (SharedApollo_runtimeApolloCall<D> *)httpHeadersHttpHeaders:(NSArray<SharedApollo_apiHttpHeader *> * _Nullable)httpHeaders __attribute__((swift_name("httpHeaders(httpHeaders:)")));
- (SharedApollo_runtimeApolloCall<D> *)httpMethodHttpMethod:(SharedApollo_apiHttpMethod * _Nullable)httpMethod __attribute__((swift_name("httpMethod(httpMethod:)")));
- (SharedApollo_runtimeApolloCall<D> *)ignoreApolloClientHttpHeadersIgnoreApolloClientHttpHeaders:(SharedBoolean * _Nullable)ignoreApolloClientHttpHeaders __attribute__((swift_name("ignoreApolloClientHttpHeaders(ignoreApolloClientHttpHeaders:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_runtimeApolloCall<D> *)retryOnErrorRetryOnError:(SharedBoolean * _Nullable)retryOnError __attribute__((swift_name("retryOnError(retryOnError:)")));
- (SharedApollo_runtimeApolloCall<D> *)sendApqExtensionsSendApqExtensions:(SharedBoolean * _Nullable)sendApqExtensions __attribute__((swift_name("sendApqExtensions(sendApqExtensions:)")));
- (SharedApollo_runtimeApolloCall<D> *)sendDocumentSendDocument:(SharedBoolean * _Nullable)sendDocument __attribute__((swift_name("sendDocument(sendDocument:)")));
- (id<SharedKotlinx_coroutines_coreFlow>)toFlow __attribute__((swift_name("toFlow()")));
- (id<SharedKotlinx_coroutines_coreFlow>)toFlowV3 __attribute__((swift_name("toFlowV3()"))) __attribute__((deprecated("Use toFlow() and handle ApolloResponse.exception instead")));
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable failFastIfOffline __attribute__((swift_name("failFastIfOffline")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) SharedBoolean * _Nullable ignoreApolloClientHttpHeaders __attribute__((swift_name("ignoreApolloClientHttpHeaders")));
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable retryOnError __attribute__((swift_name("retryOnError")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@end

__attribute__((swift_name("Apollo_apiMutation")))
@protocol SharedApollo_apiMutation <SharedApollo_apiOperation>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_runtimeApolloClient.Builder")))
@interface SharedApollo_runtimeApolloClientBuilder : SharedBase <SharedApollo_apiMutableExecutionOptions>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_runtimeApolloClientBuilder *)addCustomScalarAdapterCustomScalarType:(SharedApollo_apiCustomScalarType *)customScalarType customScalarAdapter:(id<SharedApollo_apiAdapter>)customScalarAdapter __attribute__((swift_name("addCustomScalarAdapter(customScalarType:customScalarAdapter:)")));
- (SharedApollo_runtimeApolloClientBuilder *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_runtimeApolloClientBuilder *)addHttpHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHttpHeader(name:value:)")));
- (SharedApollo_runtimeApolloClientBuilder *)addHttpInterceptorHttpInterceptor:(id<SharedApollo_runtimeHttpInterceptor>)httpInterceptor __attribute__((swift_name("addHttpInterceptor(httpInterceptor:)")));
- (SharedApollo_runtimeApolloClientBuilder *)addInterceptorInterceptor:(id<SharedApollo_runtimeApolloInterceptor>)interceptor __attribute__((swift_name("addInterceptor(interceptor:)")));
- (SharedApollo_runtimeApolloClientBuilder *)addInterceptorsInterceptors:(NSArray<id<SharedApollo_runtimeApolloInterceptor>> *)interceptors __attribute__((swift_name("addInterceptors(interceptors:)"))) __attribute__((deprecated("Use addInterceptor() or interceptors()")));
- (SharedApollo_runtimeApolloClientBuilder *)addListenerListener:(id<SharedApollo_runtimeApolloClientListener>)listener __attribute__((swift_name("addListener(listener:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (SharedApollo_runtimeApolloClientBuilder *)autoPersistedQueriesHttpMethodForHashedQueries:(SharedApollo_apiHttpMethod *)httpMethodForHashedQueries httpMethodForDocumentQueries:(SharedApollo_apiHttpMethod *)httpMethodForDocumentQueries enableByDefault:(BOOL)enableByDefault __attribute__((swift_name("autoPersistedQueries(httpMethodForHashedQueries:httpMethodForDocumentQueries:enableByDefault:)")));
- (SharedApollo_runtimeApolloClient *)build __attribute__((swift_name("build()")));
- (SharedApollo_runtimeApolloClientBuilder *)canBeBatchedCanBeBatched:(SharedBoolean * _Nullable)canBeBatched __attribute__((swift_name("canBeBatched(canBeBatched:)")));
- (SharedApollo_runtimeApolloClientBuilder *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedApollo_runtimeApolloClientBuilder *)customScalarAdaptersCustomScalarAdapters:(SharedApollo_apiCustomScalarAdapters *)customScalarAdapters __attribute__((swift_name("customScalarAdapters(customScalarAdapters:)")));
- (SharedApollo_runtimeApolloClientBuilder *)dispatcherDispatcher:(SharedKotlinx_coroutines_coreCoroutineDispatcher * _Nullable)dispatcher __attribute__((swift_name("dispatcher(dispatcher:)")));
- (SharedApollo_runtimeApolloClientBuilder *)enableAutoPersistedQueriesEnableAutoPersistedQueries:(SharedBoolean * _Nullable)enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries(enableAutoPersistedQueries:)")));
- (SharedApollo_runtimeApolloClientBuilder *)executionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("executionContext(executionContext:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_runtimeApolloClientBuilder *)failFastIfOfflineFailFastIfOffline:(SharedBoolean * _Nullable)failFastIfOffline __attribute__((swift_name("failFastIfOffline(failFastIfOffline:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (SharedApollo_runtimeApolloClientBuilder *)httpBatchingBatchIntervalMillis:(int64_t)batchIntervalMillis maxBatchSize:(int32_t)maxBatchSize enableByDefault:(BOOL)enableByDefault __attribute__((swift_name("httpBatching(batchIntervalMillis:maxBatchSize:enableByDefault:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpEngineHttpEngine:(id<SharedApollo_runtimeHttpEngine> _Nullable)httpEngine __attribute__((swift_name("httpEngine(httpEngine:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpExposeErrorBodyHttpExposeErrorBody:(SharedBoolean * _Nullable)httpExposeErrorBody __attribute__((swift_name("httpExposeErrorBody(httpExposeErrorBody:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpHeadersHttpHeaders:(NSArray<SharedApollo_apiHttpHeader *> * _Nullable)httpHeaders __attribute__((swift_name("httpHeaders(httpHeaders:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpInterceptorsHttpInterceptors:(NSArray<id<SharedApollo_runtimeHttpInterceptor>> *)httpInterceptors __attribute__((swift_name("httpInterceptors(httpInterceptors:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpMethodHttpMethod:(SharedApollo_apiHttpMethod * _Nullable)httpMethod __attribute__((swift_name("httpMethod(httpMethod:)")));
- (SharedApollo_runtimeApolloClientBuilder *)httpServerUrlHttpServerUrl:(NSString * _Nullable)httpServerUrl __attribute__((swift_name("httpServerUrl(httpServerUrl:)")));
- (SharedApollo_runtimeApolloClientBuilder *)interceptorsInterceptors:(NSArray<id<SharedApollo_runtimeApolloInterceptor>> *)interceptors __attribute__((swift_name("interceptors(interceptors:)")));
- (SharedApollo_runtimeApolloClientBuilder *)listenersListeners:(NSArray<id<SharedApollo_runtimeApolloClientListener>> *)listeners __attribute__((swift_name("listeners(listeners:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_runtimeApolloClientBuilder *)networkMonitorNetworkMonitor:(id<SharedApollo_runtimeNetworkMonitor> _Nullable)networkMonitor __attribute__((swift_name("networkMonitor(networkMonitor:)")));
- (SharedApollo_runtimeApolloClientBuilder *)networkTransportNetworkTransport:(id<SharedApollo_runtimeNetworkTransport> _Nullable)networkTransport __attribute__((swift_name("networkTransport(networkTransport:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_runtimeApolloClientBuilder *)retryOnErrorRetryOnError:(SharedBoolean *(^ _Nullable)(SharedApollo_apiApolloRequest<id> *))retryOnError __attribute__((swift_name("retryOnError(retryOnError:)")));
- (SharedApollo_runtimeApolloClientBuilder *)sendApqExtensionsSendApqExtensions:(SharedBoolean * _Nullable)sendApqExtensions __attribute__((swift_name("sendApqExtensions(sendApqExtensions:)")));
- (SharedApollo_runtimeApolloClientBuilder *)sendDocumentSendDocument:(SharedBoolean * _Nullable)sendDocument __attribute__((swift_name("sendDocument(sendDocument:)")));
- (SharedApollo_runtimeApolloClientBuilder *)serverUrlServerUrl:(NSString *)serverUrl __attribute__((swift_name("serverUrl(serverUrl:)")));
- (SharedApollo_runtimeApolloClientBuilder *)subscriptionNetworkTransportSubscriptionNetworkTransport:(id<SharedApollo_runtimeNetworkTransport> _Nullable)subscriptionNetworkTransport __attribute__((swift_name("subscriptionNetworkTransport(subscriptionNetworkTransport:)")));
- (SharedApollo_runtimeApolloClientBuilder *)webSocketEngineWebSocketEngine:(id<SharedApollo_runtimeWebSocketEngine> _Nullable)webSocketEngine __attribute__((swift_name("webSocketEngine(webSocketEngine:)")));
- (SharedApollo_runtimeApolloClientBuilder *)webSocketIdleTimeoutMillisWebSocketIdleTimeoutMillis:(SharedLong * _Nullable)webSocketIdleTimeoutMillis __attribute__((swift_name("webSocketIdleTimeoutMillis(webSocketIdleTimeoutMillis:)")));
- (SharedApollo_runtimeApolloClientBuilder *)webSocketReopenWhenWebSocketReopenWhen:(id<SharedKotlinSuspendFunction2> _Nullable)webSocketReopenWhen __attribute__((swift_name("webSocketReopenWhen(webSocketReopenWhen:)")));
- (SharedApollo_runtimeApolloClientBuilder *)webSocketServerUrlWebSocketServerUrl:(NSString * _Nullable)webSocketServerUrl __attribute__((swift_name("webSocketServerUrl(webSocketServerUrl:)")));
- (SharedApollo_runtimeApolloClientBuilder *)webSocketServerUrlWebSocketServerUrl_:(id<SharedKotlinSuspendFunction0> _Nullable)webSocketServerUrl __attribute__((swift_name("webSocketServerUrl(webSocketServerUrl_:)")));
- (SharedApollo_runtimeApolloClientBuilder *)wsProtocolWsProtocolFactory:(id<SharedApollo_runtimeWsProtocolFactory> _Nullable)wsProtocolFactory __attribute__((swift_name("wsProtocol(wsProtocolFactory:)")));
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedApollo_apiCustomScalarAdapters *customScalarAdapters __attribute__((swift_name("customScalarAdapters")));
@property (readonly) SharedKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable failFastIfOffline __attribute__((swift_name("failFastIfOffline")));
@property (readonly) id<SharedApollo_runtimeHttpEngine> _Nullable httpEngine __attribute__((swift_name("httpEngine")));
@property (readonly) SharedBoolean * _Nullable httpExposeErrorBody __attribute__((swift_name("httpExposeErrorBody")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) NSArray<id<SharedApollo_runtimeHttpInterceptor>> *httpInterceptors __attribute__((swift_name("httpInterceptors")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) NSString * _Nullable httpServerUrl __attribute__((swift_name("httpServerUrl")));
@property (readonly) NSArray<id<SharedApollo_runtimeApolloInterceptor>> *interceptors __attribute__((swift_name("interceptors")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) id<SharedApollo_runtimeNetworkMonitor> _Nullable networkMonitor __attribute__((swift_name("networkMonitor")));
@property (readonly) id<SharedApollo_runtimeNetworkTransport> _Nullable networkTransport __attribute__((swift_name("networkTransport")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean *(^ _Nullable retryOnError)(SharedApollo_apiApolloRequest<id> *) __attribute__((swift_name("retryOnError")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@property (readonly) id<SharedApollo_runtimeNetworkTransport> _Nullable subscriptionNetworkTransport __attribute__((swift_name("subscriptionNetworkTransport")));
@property (readonly) id<SharedApollo_runtimeWebSocketEngine> _Nullable webSocketEngine __attribute__((swift_name("webSocketEngine")));
@property (readonly) SharedLong * _Nullable webSocketIdleTimeoutMillis __attribute__((swift_name("webSocketIdleTimeoutMillis")));
@property (readonly) id<SharedKotlinSuspendFunction0> _Nullable webSocketReopenServerUrl __attribute__((swift_name("webSocketReopenServerUrl")));
@property (readonly) id<SharedKotlinSuspendFunction2> _Nullable webSocketReopenWhen __attribute__((swift_name("webSocketReopenWhen")));
@property (readonly) NSString * _Nullable webSocketServerUrl __attribute__((swift_name("webSocketServerUrl")));
@property (readonly) id<SharedApollo_runtimeWsProtocolFactory> _Nullable wsProtocolFactory __attribute__((swift_name("wsProtocolFactory")));
@end

__attribute__((swift_name("Apollo_apiSubscriptionData")))
@protocol SharedApollo_apiSubscriptionData <SharedApollo_apiOperationData>
@required
@end

__attribute__((swift_name("Apollo_apiSubscription")))
@protocol SharedApollo_apiSubscription <SharedApollo_apiOperation>
@required
@end

__attribute__((swift_name("Apollo_runtimeApolloInterceptor")))
@protocol SharedApollo_runtimeApolloInterceptor
@required
- (id<SharedKotlinx_coroutines_coreFlow>)interceptRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)request chain:(id<SharedApollo_runtimeApolloInterceptorChain>)chain __attribute__((swift_name("intercept(request:chain:)")));
@end

__attribute__((swift_name("Apollo_runtimeNetworkTransport")))
@protocol SharedApollo_runtimeNetworkTransport
@required
- (void)dispose __attribute__((swift_name("dispose()")));
- (id<SharedKotlinx_coroutines_coreFlow>)executeRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)request __attribute__((swift_name("execute(request:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext_()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SharedKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiObjectType.Builder")))
@interface SharedApollo_apiObjectTypeBuilder : SharedBase
- (instancetype)initWithObjectType:(SharedApollo_apiObjectType *)objectType __attribute__((swift_name("init(objectType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiObjectType *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiObjectTypeBuilder *)embeddedFieldsEmbeddedFields:(NSArray<NSString *> *)embeddedFields __attribute__((swift_name("embeddedFields(embeddedFields:)")));
- (SharedApollo_apiObjectTypeBuilder *)interfacesImplements:(NSArray<SharedApollo_apiInterfaceType *> *)implements __attribute__((swift_name("interfaces(implements:)")));
- (SharedApollo_apiObjectTypeBuilder *)keyFieldsKeyFields:(NSArray<NSString *> *)keyFields __attribute__((swift_name("keyFields(keyFields:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType")))
@interface SharedApollo_apiInterfaceType : SharedApollo_apiCompiledNamedType
- (SharedApollo_apiInterfaceTypeBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) NSArray<NSString *> *embeddedFields __attribute__((swift_name("embeddedFields")));
@property (readonly) NSArray<SharedApollo_apiInterfaceType *> *implements __attribute__((swift_name("implements")));
@property (readonly) NSArray<NSString *> *keyFields __attribute__((swift_name("keyFields")));
@end

__attribute__((swift_name("Apollo_normalized_cache_apiReadOnlyNormalizedCache")))
@protocol SharedApollo_normalized_cache_apiReadOnlyNormalizedCache
@required
- (NSDictionary<id<SharedKotlinKClass>, NSDictionary<NSString *, NSDictionary<NSString *, id> *> *> *)dump __attribute__((swift_name("dump()")));
- (NSDictionary<NSString *, id> * _Nullable)loadRecordKey:(NSString *)key cacheHeaders:(SharedApollo_normalized_cache_apiCacheHeaders *)cacheHeaders __attribute__((swift_name("loadRecord(key:cacheHeaders:)")));
- (id)loadRecordsKeys:(id)keys cacheHeaders:(SharedApollo_normalized_cache_apiCacheHeaders *)cacheHeaders __attribute__((swift_name("loadRecords(keys:cacheHeaders:)")));
@end

__attribute__((swift_name("Apollo_normalized_cache_apiNormalizedCache")))
@interface SharedApollo_normalized_cache_apiNormalizedCache : SharedBase <SharedApollo_normalized_cache_apiReadOnlyNormalizedCache>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedApollo_normalized_cache_apiNormalizedCacheCompanion *companion __attribute__((swift_name("companion")));
- (SharedApollo_normalized_cache_apiNormalizedCache *)chainCache:(SharedApollo_normalized_cache_apiNormalizedCache *)cache __attribute__((swift_name("chain(cache:)")));
- (void)clearAll __attribute__((swift_name("clearAll()")));
- (NSSet<NSString *> *)mergeRecord:(NSDictionary<NSString *, id> *)record cacheHeaders:(SharedApollo_normalized_cache_apiCacheHeaders *)cacheHeaders __attribute__((swift_name("merge(record:cacheHeaders:)")));
- (NSSet<NSString *> *)mergeRecords:(id)records cacheHeaders:(SharedApollo_normalized_cache_apiCacheHeaders *)cacheHeaders __attribute__((swift_name("merge(records:cacheHeaders:)")));
- (int32_t)removePattern:(NSString *)pattern __attribute__((swift_name("remove(pattern:)")));
- (BOOL)removeCacheKey:(SharedApollo_normalized_cache_apiCacheKey *)cacheKey cascade:(BOOL)cascade __attribute__((swift_name("remove(cacheKey:cascade:)")));
@property (readonly) SharedApollo_normalized_cache_apiNormalizedCache * _Nullable nextCache __attribute__((swift_name("nextCache")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalCompanion")))
@interface SharedApollo_apiOptionalCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiOptionalCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_apiOptionalAbsent *)absent __attribute__((swift_name("absent()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_apiOptionalPresent<id> *)presentValue:(id _Nullable)value __attribute__((swift_name("present(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_apiOptional<id> *)presentIfNotNullValue:(id _Nullable)value __attribute__((swift_name("presentIfNotNull(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgumentDefinition")))
@interface SharedApollo_apiCompiledArgumentDefinition : SharedBase
- (SharedApollo_apiCompiledArgumentDefinitionBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) BOOL isKey __attribute__((swift_name("isKey")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) BOOL isPagination __attribute__((swift_name("isPagination")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("OkioSink")))
@protocol SharedOkioSink <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
@end

__attribute__((swift_name("OkioBufferedSink")))
@protocol SharedOkioBufferedSink <SharedOkioSink>
@required
- (id<SharedOkioBufferedSink>)emit __attribute__((swift_name("emit()")));
- (id<SharedOkioBufferedSink>)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));
- (id<SharedOkioBufferedSink>)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (id<SharedOkioBufferedSink>)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (id<SharedOkioBufferedSink>)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (id<SharedOkioBufferedSink>)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (id<SharedOkioBufferedSink>)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (id<SharedOkioBufferedSink>)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (id<SharedOkioBufferedSink>)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (id<SharedOkioBufferedSink>)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (id<SharedOkioBufferedSink>)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (id<SharedOkioBufferedSink>)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (id<SharedOkioBufferedSink>)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (id<SharedOkioBufferedSink>)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (id<SharedOkioBufferedSink>)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiError.Location")))
@interface SharedApollo_apiErrorLocation : SharedBase
- (instancetype)initWithLine:(int32_t)line column:(int32_t)column __attribute__((swift_name("init(line:column:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t column __attribute__((swift_name("column")));
@property (readonly) int32_t line __attribute__((swift_name("line")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloRequestBuilder")))
@interface SharedApollo_apiApolloRequestBuilder<D> : SharedBase <SharedApollo_apiMutableExecutionOptions>
- (instancetype)initWithOperation:(id<SharedApollo_apiOperation>)operation __attribute__((swift_name("init(operation:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiApolloRequestBuilder<D> *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)addHttpHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHttpHeader(name:value:)")));
- (SharedApollo_apiApolloRequest<D> *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiApolloRequestBuilder<D> *)canBeBatchedCanBeBatched:(SharedBoolean * _Nullable)canBeBatched __attribute__((swift_name("canBeBatched(canBeBatched:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)enableAutoPersistedQueriesEnableAutoPersistedQueries:(SharedBoolean * _Nullable)enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries(enableAutoPersistedQueries:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)executionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("executionContext(executionContext:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiApolloRequestBuilder<D> *)failFastIfOfflineFailFastIfOffline:(SharedBoolean * _Nullable)failFastIfOffline __attribute__((swift_name("failFastIfOffline(failFastIfOffline:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)httpHeadersHttpHeaders:(NSArray<SharedApollo_apiHttpHeader *> * _Nullable)httpHeaders __attribute__((swift_name("httpHeaders(httpHeaders:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)httpMethodHttpMethod:(SharedApollo_apiHttpMethod * _Nullable)httpMethod __attribute__((swift_name("httpMethod(httpMethod:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)ignoreApolloClientHttpHeadersIgnoreApolloClientHttpHeaders:(SharedBoolean * _Nullable)ignoreApolloClientHttpHeaders __attribute__((swift_name("ignoreApolloClientHttpHeaders(ignoreApolloClientHttpHeaders:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)requestUuidRequestUuid:(SharedUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiApolloRequestBuilder<D> *)retryOnErrorRetryOnError:(SharedBoolean * _Nullable)retryOnError __attribute__((swift_name("retryOnError(retryOnError:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)sendApqExtensionsSendApqExtensions:(SharedBoolean * _Nullable)sendApqExtensions __attribute__((swift_name("sendApqExtensions(sendApqExtensions:)")));
- (SharedApollo_apiApolloRequestBuilder<D> *)sendDocumentSendDocument:(SharedBoolean * _Nullable)sendDocument __attribute__((swift_name("sendDocument(sendDocument:)")));
@property (readonly) SharedBoolean * _Nullable canBeBatched __attribute__((swift_name("canBeBatched")));
@property (readonly) SharedBoolean * _Nullable enableAutoPersistedQueries __attribute__((swift_name("enableAutoPersistedQueries")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable failFastIfOffline __attribute__((swift_name("failFastIfOffline")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> * _Nullable httpHeaders __attribute__((swift_name("httpHeaders")));
@property (readonly) SharedApollo_apiHttpMethod * _Nullable httpMethod __attribute__((swift_name("httpMethod")));
@property (readonly) SharedBoolean * _Nullable ignoreApolloClientHttpHeaders __attribute__((swift_name("ignoreApolloClientHttpHeaders")));
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) SharedUuidUuid * _Nullable requestUuid __attribute__((swift_name("requestUuid")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
@property (readonly) SharedBoolean * _Nullable retryOnError __attribute__((swift_name("retryOnError")));
@property (readonly) SharedBoolean * _Nullable sendApqExtensions __attribute__((swift_name("sendApqExtensions")));
@property (readonly) SharedBoolean * _Nullable sendDocument __attribute__((swift_name("sendDocument")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UuidUuid")))
@interface SharedUuidUuid : SharedBase <SharedKotlinComparable>
- (instancetype)initWithUuidBytes:(SharedKotlinByteArray *)uuidBytes __attribute__((swift_name("init(uuidBytes:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use `uuidOf` instead.")));
- (instancetype)initWithMsb:(int64_t)msb lsb:(int64_t)lsb __attribute__((swift_name("init(msb:lsb:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SharedUuidUuid *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t leastSignificantBits __attribute__((swift_name("leastSignificantBits")));
@property (readonly) int64_t mostSignificantBits __attribute__((swift_name("mostSignificantBits")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponse")))
@interface SharedApollo_apiApolloResponse<D> : SharedBase
- (D)dataOrThrow __attribute__((swift_name("dataOrThrow()")));
- (BOOL)hasErrors __attribute__((swift_name("hasErrors()")));
- (SharedApollo_apiApolloResponseBuilder<D> *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@property (readonly) D dataAssertNoErrors __attribute__((swift_name("dataAssertNoErrors")));
@property (readonly) NSArray<SharedApollo_apiError *> * _Nullable errors __attribute__((swift_name("errors")));
@property (readonly) SharedApollo_apiApolloException * _Nullable exception __attribute__((swift_name("exception")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) BOOL isLast __attribute__((swift_name("isLast")));
@property (readonly) id<SharedApollo_apiOperation> operation __attribute__((swift_name("operation")));
@property (readonly) SharedUuidUuid *requestUuid __attribute__((swift_name("requestUuid")));
@end

__attribute__((swift_name("Apollo_runtimeHttpInterceptor")))
@protocol SharedApollo_runtimeHttpInterceptor
@required
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)interceptRequest:(SharedApollo_apiHttpRequest *)request chain:(id<SharedApollo_runtimeHttpInterceptorChain>)chain completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("intercept(request:chain:completionHandler:)")));
@end

__attribute__((swift_name("Apollo_runtimeApolloClientListener")))
@protocol SharedApollo_runtimeApolloClientListener
@required
- (void)requestCompletedRequest:(SharedApollo_apiApolloRequest<id> *)request __attribute__((swift_name("requestCompleted(request:)")));
- (void)requestStartedRequest:(SharedApollo_apiApolloRequest<id> *)request __attribute__((swift_name("requestStarted(request:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SharedKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation_:(id _Nullable (^)(id _Nullable, id<SharedKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation_:)")));
- (id<SharedKotlinCoroutineContextElement> _Nullable)getKey_:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<SharedKotlinCoroutineContext>)minusKeyKey_:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key_:)")));
- (id<SharedKotlinCoroutineContext>)plusContext_:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("plus(context_:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SharedKotlinCoroutineContextElement <SharedKotlinCoroutineContext>
@required
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SharedKotlinAbstractCoroutineContextElement : SharedBase <SharedKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SharedKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SharedKotlinContinuationInterceptor <SharedKotlinCoroutineContextElement>
@required
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcher : SharedKotlinAbstractCoroutineContextElement <SharedKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SharedKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SharedKotlinCoroutineContext>)context block:(id<SharedKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SharedKotlinContinuation>)interceptContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SharedKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (SharedKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SharedKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SharedKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Apollo_runtimeHttpEngine")))
@protocol SharedApollo_runtimeHttpEngine <SharedOkioCloseable>
@required
- (void)dispose __attribute__((swift_name("dispose()"))) __attribute__((unavailable("Use close")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeRequest:(SharedApollo_apiHttpRequest *)request completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(request:completionHandler:)")));
@end


/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
__attribute__((swift_name("Apollo_runtimeNetworkMonitor")))
@protocol SharedApollo_runtimeNetworkMonitor <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isOnlineWithCompletionHandler:(void (^)(SharedBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isOnline(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)waitForNetworkWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("waitForNetwork(completionHandler:)")));
@end

__attribute__((swift_name("Apollo_runtimeWebSocketEngine")))
@protocol SharedApollo_runtimeWebSocketEngine
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openUrl:(NSString *)url headers:(NSArray<SharedApollo_apiHttpHeader *> *)headers completionHandler:(void (^)(id<SharedApollo_runtimeWebSocketConnection> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("open(url:headers:completionHandler:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SharedKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SharedKotlinSuspendFunction2 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SharedKotlinSuspendFunction0 <SharedKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Apollo_runtimeWsProtocolFactory")))
@protocol SharedApollo_runtimeWsProtocolFactory
@required
- (SharedApollo_runtimeWsProtocol *)createWebSocketConnection:(id<SharedApollo_runtimeWebSocketConnection>)webSocketConnection listener:(id<SharedApollo_runtimeWsProtocolListener>)listener scope:(id<SharedKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("create(webSocketConnection:listener:scope:)")));
@property (readonly, getter=name_) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Apollo_runtimeApolloInterceptorChain")))
@protocol SharedApollo_runtimeApolloInterceptorChain
@required
- (id<SharedKotlinx_coroutines_coreFlow>)proceedRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)request __attribute__((swift_name("proceed(request:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiInterfaceType.Builder")))
@interface SharedApollo_apiInterfaceTypeBuilder : SharedBase
- (instancetype)initWithInterfaceType:(SharedApollo_apiInterfaceType *)interfaceType __attribute__((swift_name("init(interfaceType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiInterfaceType *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiInterfaceTypeBuilder *)embeddedFieldsEmbeddedFields:(NSArray<NSString *> *)embeddedFields __attribute__((swift_name("embeddedFields(embeddedFields:)")));
- (SharedApollo_apiInterfaceTypeBuilder *)interfacesImplements:(NSArray<SharedApollo_apiInterfaceType *> *)implements __attribute__((swift_name("interfaces(implements:)")));
- (SharedApollo_apiInterfaceTypeBuilder *)keyFieldsKeyFields:(NSArray<NSString *> *)keyFields __attribute__((swift_name("keyFields(keyFields:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiCacheHeaders")))
@interface SharedApollo_normalized_cache_apiCacheHeaders : SharedBase
@property (class, readonly, getter=companion) SharedApollo_normalized_cache_apiCacheHeadersCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)hasHeaderHeaderName:(NSString *)headerName __attribute__((swift_name("hasHeader(headerName:)")));
- (NSString * _Nullable)headerValueHeader:(NSString *)header __attribute__((swift_name("headerValue(header:)")));
- (SharedApollo_normalized_cache_apiCacheHeadersBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
- (SharedApollo_normalized_cache_apiCacheHeaders *)plusCacheHeaders:(SharedApollo_normalized_cache_apiCacheHeaders *)cacheHeaders __attribute__((swift_name("plus(cacheHeaders:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiNormalizedCache.Companion")))
@interface SharedApollo_normalized_cache_apiNormalizedCacheCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_normalized_cache_apiNormalizedCacheCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinRegex *)patternToRegexPattern:(NSString *)pattern __attribute__((swift_name("patternToRegex(pattern:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (NSString *)prettifyDumpDump:(NSDictionary<id<SharedKotlinKClass>, NSDictionary<NSString *, NSDictionary<NSString *, id> *> *> *)dump __attribute__((swift_name("prettifyDump(dump:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiCacheKey")))
@interface SharedApollo_normalized_cache_apiCacheKey : SharedBase
- (instancetype)initWithKey:(NSString *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypename:(NSString *)typename_ values:(SharedKotlinArray<NSString *> *)values __attribute__((swift_name("init(typename:values:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTypename:(NSString *)typename_ values_:(NSArray<NSString *> *)values __attribute__((swift_name("init(typename:values_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedApollo_normalized_cache_apiCacheKeyCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalAbsent")))
@interface SharedApollo_apiOptionalAbsent : SharedApollo_apiOptional<SharedKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)absent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_apiOptionalAbsent *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiOptionalPresent")))
@interface SharedApollo_apiOptionalPresent<V> : SharedApollo_apiOptional<V>
- (instancetype)initWithValue:(V _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiOptionalPresent<V> *)doCopyValue:(V _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) V _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiCompiledArgumentDefinition.Builder")))
@interface SharedApollo_apiCompiledArgumentDefinitionBuilder : SharedBase
- (instancetype)initWithArgumentDefinition:(SharedApollo_apiCompiledArgumentDefinition *)argumentDefinition __attribute__((swift_name("init(argumentDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiCompiledArgumentDefinition *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiCompiledArgumentDefinitionBuilder *)isKeyIsKey:(BOOL)isKey __attribute__((swift_name("isKey(isKey:)")));

/**
 * @note annotations
 *   com.apollographql.apollo3.annotations.ApolloExperimental
*/
- (SharedApollo_apiCompiledArgumentDefinitionBuilder *)isPaginationIsPagination:(BOOL)isPagination __attribute__((swift_name("isPagination(isPagination:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SharedKotlinByteArray : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SharedByte *(^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SharedKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioByteString")))
@interface SharedOkioByteString : SharedBase <SharedKotlinComparable>
@property (class, readonly, getter=companion) SharedOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(SharedOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(SharedKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(SharedKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(SharedOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(SharedKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(SharedOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(SharedOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(SharedKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(SharedOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (SharedOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (SharedOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (SharedOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (SharedKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioSource")))
@protocol SharedOkioSource <SharedOkioCloseable>
@required

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
@end

__attribute__((swift_name("OkioBufferedSource")))
@protocol SharedOkioBufferedSource <SharedOkioSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (id _Nullable)selectOptions_:(NSArray<id> *)options __attribute__((swift_name("select(options_:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer")))
@interface SharedOkioBuffer : SharedBase <SharedOkioBufferedSource, SharedOkioBufferedSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)completeSegmentByteCount __attribute__((swift_name("completeSegmentByteCount()")));
- (SharedOkioBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset __attribute__((swift_name("doCopyTo(out:offset:)")));
- (SharedOkioBuffer *)doCopyToOut:(SharedOkioBuffer *)out offset:(int64_t)offset byteCount:(int64_t)byteCount __attribute__((swift_name("doCopyTo(out:offset:byteCount:)")));
- (SharedOkioBuffer *)emit __attribute__((swift_name("emit()")));
- (SharedOkioBuffer *)emitCompleteSegments __attribute__((swift_name("emitCompleteSegments()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)flushAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("flush()")));
- (int8_t)getPos:(int64_t)pos __attribute__((swift_name("get(pos:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SharedOkioByteString *)hmacSha1Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (SharedOkioByteString *)hmacSha256Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (SharedOkioByteString *)hmacSha512Key:(SharedOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int64_t)indexOfB:(int8_t)b __attribute__((swift_name("indexOf(b:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes __attribute__((swift_name("indexOf(bytes:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(b:fromIndex:)")));
- (int64_t)indexOfBytes:(SharedOkioByteString *)bytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOf(bytes:fromIndex:)")));
- (int64_t)indexOfB:(int8_t)b fromIndex:(int64_t)fromIndex toIndex:(int64_t)toIndex __attribute__((swift_name("indexOf(b:fromIndex:toIndex:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes __attribute__((swift_name("indexOfElement(targetBytes:)")));
- (int64_t)indexOfElementTargetBytes:(SharedOkioByteString *)targetBytes fromIndex:(int64_t)fromIndex __attribute__((swift_name("indexOfElement(targetBytes:fromIndex:)")));
- (SharedOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (id<SharedOkioBufferedSource>)peek __attribute__((swift_name("peek_()")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes __attribute__((swift_name("rangeEquals(offset:bytes:)")));
- (BOOL)rangeEqualsOffset:(int64_t)offset bytes:(SharedOkioByteString *)bytes bytesOffset:(int32_t)bytesOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:bytes:bytesOffset:byteCount:)")));
- (int32_t)readSink:(SharedKotlinByteArray *)sink __attribute__((swift_name("read(sink:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (int64_t)readSink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("read(sink:byteCount:)"))) __attribute__((swift_error(nonnull_error)));
- (int32_t)readSink:(SharedKotlinByteArray *)sink offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("read(sink:offset:byteCount:)")));
- (int64_t)readAllSink:(id<SharedOkioSink>)sink __attribute__((swift_name("readAll(sink:)")));
- (SharedOkioBufferUnsafeCursor *)readAndWriteUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readAndWriteUnsafe(unsafeCursor:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (SharedKotlinByteArray *)readByteArray __attribute__((swift_name("readByteArray()")));
- (SharedKotlinByteArray *)readByteArrayByteCount:(int64_t)byteCount __attribute__((swift_name("readByteArray(byteCount:)")));
- (SharedOkioByteString *)readByteString __attribute__((swift_name("readByteString()")));
- (SharedOkioByteString *)readByteStringByteCount:(int64_t)byteCount __attribute__((swift_name("readByteString(byteCount:)")));
- (int64_t)readDecimalLong __attribute__((swift_name("readDecimalLong()")));
- (void)readFullySink:(SharedKotlinByteArray *)sink __attribute__((swift_name("readFully(sink:)")));
- (void)readFullySink:(SharedOkioBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readFully(sink:byteCount:)")));
- (int64_t)readHexadecimalUnsignedLong __attribute__((swift_name("readHexadecimalUnsignedLong()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int32_t)readIntLe __attribute__((swift_name("readIntLe()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int64_t)readLongLe __attribute__((swift_name("readLongLe()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (int16_t)readShortLe __attribute__((swift_name("readShortLe()")));
- (SharedOkioBufferUnsafeCursor *)readUnsafeUnsafeCursor:(SharedOkioBufferUnsafeCursor *)unsafeCursor __attribute__((swift_name("readUnsafe(unsafeCursor:)")));
- (NSString *)readUtf8 __attribute__((swift_name("readUtf8()")));
- (NSString *)readUtf8ByteCount:(int64_t)byteCount __attribute__((swift_name("readUtf8(byteCount:)")));
- (int32_t)readUtf8CodePoint __attribute__((swift_name("readUtf8CodePoint()")));
- (NSString * _Nullable)readUtf8Line __attribute__((swift_name("readUtf8Line()")));
- (NSString *)readUtf8LineStrict __attribute__((swift_name("readUtf8LineStrict()")));
- (NSString *)readUtf8LineStrictLimit:(int64_t)limit __attribute__((swift_name("readUtf8LineStrict(limit:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (int32_t)selectOptions:(NSArray<SharedOkioByteString *> *)options __attribute__((swift_name("select(options:)")));
- (id _Nullable)selectOptions_:(NSArray<id> *)options __attribute__((swift_name("select(options_:)")));
- (SharedOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (SharedOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (SharedOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (SharedOkioByteString *)snapshot __attribute__((swift_name("snapshot()")));
- (SharedOkioByteString *)snapshotByteCount:(int32_t)byteCount __attribute__((swift_name("snapshot(byteCount:)")));
- (SharedOkioTimeout *)timeout __attribute__((swift_name("timeout()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source __attribute__((swift_name("write(source:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString __attribute__((swift_name("write(byteString:)")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)writeSource:(SharedOkioBuffer *)source byteCount:(int64_t)byteCount error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("write(source:byteCount_:)")));
- (SharedOkioBuffer *)writeSource:(id<SharedOkioSource>)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (SharedOkioBuffer *)writeSource:(SharedKotlinByteArray *)source offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(source:offset:byteCount:)")));
- (SharedOkioBuffer *)writeByteString:(SharedOkioByteString *)byteString offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("write(byteString:offset:byteCount:)")));
- (int64_t)writeAllSource:(id<SharedOkioSource>)source __attribute__((swift_name("writeAll(source:)")));
- (SharedOkioBuffer *)writeByteB:(int32_t)b __attribute__((swift_name("writeByte(b:)")));
- (SharedOkioBuffer *)writeDecimalLongV:(int64_t)v __attribute__((swift_name("writeDecimalLong(v:)")));
- (SharedOkioBuffer *)writeHexadecimalUnsignedLongV:(int64_t)v __attribute__((swift_name("writeHexadecimalUnsignedLong(v:)")));
- (SharedOkioBuffer *)writeIntI:(int32_t)i __attribute__((swift_name("writeInt(i:)")));
- (SharedOkioBuffer *)writeIntLeI:(int32_t)i __attribute__((swift_name("writeIntLe(i:)")));
- (SharedOkioBuffer *)writeLongV:(int64_t)v __attribute__((swift_name("writeLong(v:)")));
- (SharedOkioBuffer *)writeLongLeV:(int64_t)v __attribute__((swift_name("writeLongLe(v:)")));
- (SharedOkioBuffer *)writeShortS:(int32_t)s __attribute__((swift_name("writeShort(s:)")));
- (SharedOkioBuffer *)writeShortLeS:(int32_t)s __attribute__((swift_name("writeShortLe(s:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string __attribute__((swift_name("writeUtf8(string:)")));
- (SharedOkioBuffer *)writeUtf8String:(NSString *)string beginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("writeUtf8(string:beginIndex:endIndex:)")));
- (SharedOkioBuffer *)writeUtf8CodePointCodePoint:(int32_t)codePoint __attribute__((swift_name("writeUtf8CodePoint(codePoint:)")));
@property (readonly) SharedOkioBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("OkioTimeout")))
@interface SharedOkioTimeout : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SharedOkioTimeoutCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiApolloResponseBuilder")))
@interface SharedApollo_apiApolloResponseBuilder<D> : SharedBase
- (instancetype)initWithOperation:(id<SharedApollo_apiOperation>)operation requestUuid:(SharedUuidUuid *)requestUuid __attribute__((swift_name("init(operation:requestUuid:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithOperation:(id<SharedApollo_apiOperation>)operation requestUuid:(SharedUuidUuid *)requestUuid data:(D _Nullable)data __attribute__((swift_name("init(operation:requestUuid:data:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use 2 params constructor instead")));
- (SharedApollo_apiApolloResponseBuilder<D> *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_apiApolloResponse<D> *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiApolloResponseBuilder<D> *)dataData:(D _Nullable)data __attribute__((swift_name("data(data:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)errorsErrors:(NSArray<SharedApollo_apiError *> * _Nullable)errors __attribute__((swift_name("errors(errors:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)exceptionException:(SharedApollo_apiApolloException * _Nullable)exception __attribute__((swift_name("exception(exception:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)extensionsExtensions:(NSDictionary<NSString *, id> * _Nullable)extensions __attribute__((swift_name("extensions(extensions:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)isLastIsLast:(BOOL)isLast __attribute__((swift_name("isLast(isLast:)")));
- (SharedApollo_apiApolloResponseBuilder<D> *)requestUuidRequestUuid:(SharedUuidUuid *)requestUuid __attribute__((swift_name("requestUuid(requestUuid:)")));
@end

__attribute__((swift_name("Apollo_apiApolloException")))
@interface SharedApollo_apiApolloException : SharedKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SharedKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest")))
@interface SharedApollo_apiHttpRequest : SharedBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (SharedApollo_apiHttpRequestBuilder *)doNewBuilderMethod:(SharedApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("doNewBuilder(method:url:)")));
@property (readonly) id<SharedApollo_apiHttpBody> _Nullable body __attribute__((swift_name("body")));
@property (readonly) id<SharedApollo_apiExecutionContext> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) SharedApollo_apiHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Apollo_runtimeHttpInterceptorChain")))
@protocol SharedApollo_runtimeHttpInterceptorChain
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)proceedRequest:(SharedApollo_apiHttpRequest *)request completionHandler:(void (^)(SharedApollo_apiHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("proceed(request:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse")))
@interface SharedApollo_apiHttpResponse : SharedBase
- (SharedApollo_apiHttpResponseBuilder *)doNewBuilder __attribute__((swift_name("doNewBuilder()")));
@property (readonly) id<SharedOkioBufferedSource> _Nullable body __attribute__((swift_name("body")));
@property (readonly) NSArray<SharedApollo_apiHttpHeader *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SharedKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SharedKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SharedKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SharedKotlinAbstractCoroutineContextKey<B, E> : SharedBase <SharedKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SharedKotlinx_coroutines_coreCoroutineDispatcherKey : SharedKotlinAbstractCoroutineContextKey<id<SharedKotlinContinuationInterceptor>, SharedKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SharedKotlinCoroutineContextKey>)baseKey safeCast:(id<SharedKotlinCoroutineContextElement> _Nullable (^)(id<SharedKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SharedKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Apollo_runtimeWebSocketConnection")))
@protocol SharedApollo_runtimeWebSocketConnection
@required
- (void)close __attribute__((swift_name("close_()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));
- (void)sendString:(NSString *)string __attribute__((swift_name("send(string:)")));
- (void)sendData:(SharedOkioByteString *)data __attribute__((swift_name("send(data:)")));
@end

__attribute__((swift_name("Apollo_runtimeWsProtocol")))
@interface SharedApollo_runtimeWsProtocol : SharedBase
- (instancetype)initWithWebSocketConnection:(id<SharedApollo_runtimeWebSocketConnection>)webSocketConnection listener:(id<SharedApollo_runtimeWsProtocolListener>)listener __attribute__((swift_name("init(webSocketConnection:listener:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close_()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectionInitWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connectionInit(completionHandler:)")));
- (void)handleServerMessageMessageMap:(NSDictionary<NSString *, id> *)messageMap __attribute__((swift_name("handleServerMessage(messageMap:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)receiveMessageMapWithCompletionHandler:(void (^)(NSDictionary<NSString *, id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveMessageMap(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)runWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("run(completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)sendMessageMapMessageMap:(NSDictionary<NSString *, id> *)messageMap frameType:(SharedApollo_runtimeWsFrameType *)frameType __attribute__((swift_name("sendMessageMap(messageMap:frameType:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)sendMessageMapBinaryMessageMap:(NSDictionary<NSString *, id> *)messageMap __attribute__((swift_name("sendMessageMapBinary(messageMap:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)sendMessageMapTextMessageMap:(NSDictionary<NSString *, id> *)messageMap __attribute__((swift_name("sendMessageMapText(messageMap:)")));
- (void)startOperationRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)request __attribute__((swift_name("startOperation(request:)")));
- (void)stopOperationRequest:(SharedApollo_apiApolloRequest<id<SharedApollo_apiOperationData>> *)request __attribute__((swift_name("stopOperation(request:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (SharedOkioByteString *)toByteString:(NSDictionary<NSString *, id> *)receiver __attribute__((swift_name("toByteString(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<NSString *, id> * _Nullable)toMessageMap:(NSString *)receiver __attribute__((swift_name("toMessageMap(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)toUtf8:(NSDictionary<NSString *, id> *)receiver __attribute__((swift_name("toUtf8(_:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<SharedApollo_runtimeWsProtocolListener> listener __attribute__((swift_name("listener")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<SharedApollo_runtimeWebSocketConnection> webSocketConnection __attribute__((swift_name("webSocketConnection")));
@end

__attribute__((swift_name("Apollo_runtimeWsProtocolListener")))
@protocol SharedApollo_runtimeWsProtocolListener
@required
- (void)generalErrorPayload:(NSDictionary<NSString *, id> * _Nullable)payload __attribute__((swift_name("generalError(payload:)")));
- (void)networkErrorCause:(SharedKotlinThrowable *)cause __attribute__((swift_name("networkError(cause:)")));
- (void)operationCompleteId:(NSString *)id __attribute__((swift_name("operationComplete(id:)")));
- (void)operationErrorId:(NSString *)id payload:(NSDictionary<NSString *, id> * _Nullable)payload __attribute__((swift_name("operationError(id:payload:)")));
- (void)operationResponseId:(NSString *)id payload:(NSDictionary<NSString *, id> *)payload __attribute__((swift_name("operationResponse(id:payload:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SharedKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SharedKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiCacheHeaders.Companion")))
@interface SharedApollo_normalized_cache_apiCacheHeadersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_normalized_cache_apiCacheHeadersCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_normalized_cache_apiCacheHeadersBuilder *)builder __attribute__((swift_name("builder()")));
@property (readonly) SharedApollo_normalized_cache_apiCacheHeaders *NONE __attribute__((swift_name("NONE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiCacheHeaders.Builder")))
@interface SharedApollo_normalized_cache_apiCacheHeadersBuilder : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedApollo_normalized_cache_apiCacheHeadersBuilder *)addHeaderHeaderName:(NSString *)headerName headerValue:(NSString *)headerValue __attribute__((swift_name("addHeader(headerName:headerValue:)")));
- (SharedApollo_normalized_cache_apiCacheHeadersBuilder *)addHeadersHeaderMap:(NSDictionary<NSString *, NSString *> *)headerMap __attribute__((swift_name("addHeaders(headerMap:)")));
- (SharedApollo_normalized_cache_apiCacheHeaders *)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex")))
@interface SharedKotlinRegex : SharedBase
- (instancetype)initWithPattern:(NSString *)pattern __attribute__((swift_name("init(pattern:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern options:(NSSet<SharedKotlinRegexOption *> *)options __attribute__((swift_name("init(pattern:options:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPattern:(NSString *)pattern option:(SharedKotlinRegexOption *)option __attribute__((swift_name("init(pattern:option:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinRegexCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsMatchInInput:(id)input __attribute__((swift_name("containsMatchIn(input:)")));
- (id<SharedKotlinMatchResult> _Nullable)findInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("find(input:startIndex:)")));
- (id<SharedKotlinSequence>)findAllInput:(id)input startIndex:(int32_t)startIndex __attribute__((swift_name("findAll(input:startIndex:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (id<SharedKotlinMatchResult> _Nullable)matchAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchAt(input:index:)")));
- (id<SharedKotlinMatchResult> _Nullable)matchEntireInput:(id)input __attribute__((swift_name("matchEntire(input:)")));
- (BOOL)matchesInput:(id)input __attribute__((swift_name("matches(input:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
*/
- (BOOL)matchesAtInput:(id)input index:(int32_t)index __attribute__((swift_name("matchesAt(input:index:)")));
- (NSString *)replaceInput:(id)input transform:(id (^)(id<SharedKotlinMatchResult>))transform __attribute__((swift_name("replace(input:transform:)")));
- (NSString *)replaceInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replace(input:replacement:)")));
- (NSString *)replaceFirstInput:(id)input replacement:(NSString *)replacement __attribute__((swift_name("replaceFirst(input:replacement:)")));
- (NSArray<NSString *> *)splitInput:(id)input limit:(int32_t)limit __attribute__((swift_name("split(input:limit:)")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
- (id<SharedKotlinSequence>)splitToSequenceInput:(id)input limit:(int32_t)limit __attribute__((swift_name("splitToSequence(input:limit:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<SharedKotlinRegexOption *> *options __attribute__((swift_name("options")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_normalized_cache_apiCacheKey.Companion")))
@interface SharedApollo_normalized_cache_apiCacheKeyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedApollo_normalized_cache_apiCacheKeyCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (BOOL)canDeserializeValue:(NSString *)value __attribute__((swift_name("canDeserialize(value:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_normalized_cache_apiCacheKey *)deserializeSerializedCacheKey:(NSString *)serializedCacheKey __attribute__((swift_name("deserialize(serializedCacheKey:)")));
- (SharedApollo_normalized_cache_apiCacheKey *)fromTypename:(NSString *)typename_ values:(SharedKotlinArray<NSString *> *)values __attribute__((swift_name("from(typename:values:)"))) __attribute__((unavailable("Use the constructor instead")));
- (SharedApollo_normalized_cache_apiCacheKey *)fromTypename:(NSString *)typename_ values_:(NSArray<NSString *> *)values __attribute__((swift_name("from(typename:values_:)"))) __attribute__((unavailable("Use the constructor instead")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SharedApollo_normalized_cache_apiCacheKey *)rootKey __attribute__((swift_name("rootKey()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SharedKotlinByteIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface SharedOkioByteStringCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (SharedOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (SharedOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (SharedOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (SharedOkioByteString *)ofData:(SharedKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (SharedOkioByteString *)toByteString:(NSData *)receiver __attribute__((swift_name("toByteString(_:)")));
- (SharedOkioByteString *)toByteString:(SharedKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) SharedOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioBuffer.UnsafeCursor")))
@interface SharedOkioBufferUnsafeCursor : SharedBase <SharedOkioCloseable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of IOException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)closeAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("close()")));
- (int64_t)expandBufferMinByteCount:(int32_t)minByteCount __attribute__((swift_name("expandBuffer(minByteCount:)")));
- (int32_t)next __attribute__((swift_name("next()")));
- (int64_t)resizeBufferNewSize:(int64_t)newSize __attribute__((swift_name("resizeBuffer(newSize:)")));
- (int32_t)seekOffset:(int64_t)offset __attribute__((swift_name("seek(offset:)")));
@property SharedOkioBuffer * _Nullable buffer __attribute__((swift_name("buffer")));
@property SharedKotlinByteArray * _Nullable data __attribute__((swift_name("data")));
@property int32_t end __attribute__((swift_name("end")));
@property int64_t offset __attribute__((swift_name("offset")));
@property BOOL readWrite __attribute__((swift_name("readWrite")));
@property int32_t start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioTimeout.Companion")))
@interface SharedOkioTimeoutCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedOkioTimeoutCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedOkioTimeout *NONE __attribute__((swift_name("NONE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpRequest.Builder")))
@interface SharedApollo_apiHttpRequestBuilder : SharedBase
- (instancetype)initWithMethod:(SharedApollo_apiHttpMethod *)method url:(NSString *)url __attribute__((swift_name("init(method:url:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiHttpRequestBuilder *)addExecutionContextExecutionContext:(id<SharedApollo_apiExecutionContext>)executionContext __attribute__((swift_name("addExecutionContext(executionContext:)")));
- (SharedApollo_apiHttpRequestBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (SharedApollo_apiHttpRequestBuilder *)addHeadersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (SharedApollo_apiHttpRequestBuilder *)bodyBody:(id<SharedApollo_apiHttpBody>)body __attribute__((swift_name("body(body:)")));
- (SharedApollo_apiHttpRequest *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiHttpRequestBuilder *)headersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@end

__attribute__((swift_name("Apollo_apiHttpBody")))
@protocol SharedApollo_apiHttpBody
@required
- (void)writeToBufferedSink:(id<SharedOkioBufferedSink>)bufferedSink __attribute__((swift_name("writeTo(bufferedSink:)")));
@property (readonly) int64_t contentLength __attribute__((swift_name("contentLength")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_apiHttpResponse.Builder")))
@interface SharedApollo_apiHttpResponseBuilder : SharedBase
- (instancetype)initWithStatusCode:(int32_t)statusCode __attribute__((swift_name("init(statusCode:)"))) __attribute__((objc_designated_initializer));
- (SharedApollo_apiHttpResponseBuilder *)addHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("addHeader(name:value:)")));
- (SharedApollo_apiHttpResponseBuilder *)addHeadersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("addHeaders(headers:)")));
- (SharedApollo_apiHttpResponseBuilder *)bodyBodySource:(id<SharedOkioBufferedSource>)bodySource __attribute__((swift_name("body(bodySource:)")));
- (SharedApollo_apiHttpResponseBuilder *)bodyBodyString:(SharedOkioByteString *)bodyString __attribute__((swift_name("body(bodyString:)"))) __attribute__((deprecated("Use body(BufferedSource) instead")));
- (SharedApollo_apiHttpResponse *)build __attribute__((swift_name("build()")));
- (SharedApollo_apiHttpResponseBuilder *)headersHeaders:(NSArray<SharedApollo_apiHttpHeader *> *)headers __attribute__((swift_name("headers(headers:)")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Apollo_runtimeWsFrameType")))
@interface SharedApollo_runtimeWsFrameType : SharedKotlinEnum<SharedApollo_runtimeWsFrameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedApollo_runtimeWsFrameType *text __attribute__((swift_name("text")));
@property (class, readonly) SharedApollo_runtimeWsFrameType *binary __attribute__((swift_name("binary")));
+ (SharedKotlinArray<SharedApollo_runtimeWsFrameType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedApollo_runtimeWsFrameType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegexOption")))
@interface SharedKotlinRegexOption : SharedKotlinEnum<SharedKotlinRegexOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinRegexOption *ignoreCase __attribute__((swift_name("ignoreCase")));
@property (class, readonly) SharedKotlinRegexOption *multiline __attribute__((swift_name("multiline")));
@property (class, readonly) SharedKotlinRegexOption *literal __attribute__((swift_name("literal")));
@property (class, readonly) SharedKotlinRegexOption *unixLines __attribute__((swift_name("unixLines")));
@property (class, readonly) SharedKotlinRegexOption *comments __attribute__((swift_name("comments")));
@property (class, readonly) SharedKotlinRegexOption *dotMatchesAll __attribute__((swift_name("dotMatchesAll")));
@property (class, readonly) SharedKotlinRegexOption *canonEq __attribute__((swift_name("canonEq")));
+ (SharedKotlinArray<SharedKotlinRegexOption *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SharedKotlinRegexOption *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinRegex.Companion")))
@interface SharedKotlinRegexCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinRegexCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)escapeLiteral:(NSString *)literal __attribute__((swift_name("escape(literal:)")));
- (NSString *)escapeReplacementLiteral:(NSString *)literal __attribute__((swift_name("escapeReplacement(literal:)")));
- (SharedKotlinRegex *)fromLiteralLiteral:(NSString *)literal __attribute__((swift_name("fromLiteral(literal:)")));
@end

__attribute__((swift_name("KotlinMatchResult")))
@protocol SharedKotlinMatchResult
@required
- (id<SharedKotlinMatchResult> _Nullable)next __attribute__((swift_name("next()")));
@property (readonly) SharedKotlinMatchResultDestructured *destructured __attribute__((swift_name("destructured")));
@property (readonly) NSArray<NSString *> *groupValues __attribute__((swift_name("groupValues")));
@property (readonly) id<SharedKotlinMatchGroupCollection> groups __attribute__((swift_name("groups")));
@property (readonly) SharedKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SharedKotlinSequence
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchResultDestructured")))
@interface SharedKotlinMatchResultDestructured : SharedBase
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSArray<NSString *> *)toList __attribute__((swift_name("toList()")));
@property (readonly) id<SharedKotlinMatchResult> match __attribute__((swift_name("match")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol SharedKotlinIterable
@required
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol SharedKotlinCollection <SharedKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinMatchGroupCollection")))
@protocol SharedKotlinMatchGroupCollection <SharedKotlinCollection>
@required
- (SharedKotlinMatchGroup * _Nullable)getIndex_:(int32_t)index __attribute__((swift_name("get(index_:)")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface SharedKotlinIntProgression : SharedBase <SharedKotlinIterable>
@property (class, readonly, getter=companion) SharedKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (SharedKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol SharedKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol SharedKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface SharedKotlinIntRange : SharedKotlinIntProgression <SharedKotlinClosedRange, SharedKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SharedKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(SharedInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(SharedInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) SharedInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) SharedInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) SharedInt *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinMatchGroup")))
@interface SharedKotlinMatchGroup : SharedBase
- (instancetype)initWithValue:(NSString *)value range:(SharedKotlinIntRange *)range __attribute__((swift_name("init(value:range:)"))) __attribute__((objc_designated_initializer));
- (SharedKotlinMatchGroup *)doCopyValue:(NSString *)value range:(SharedKotlinIntRange *)range __attribute__((swift_name("doCopy(value:range:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedKotlinIntRange *range __attribute__((swift_name("range")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface SharedKotlinIntProgressionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (SharedKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface SharedKotlinIntIterator : SharedBase <SharedKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SharedInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface SharedKotlinIntRangeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SharedKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SharedKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
