

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "IAggregationServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::aggregationservice
{


class AloMovesApi final : public IAloMovesApiBase
{
public:
	AloMovesApi(csp::web::WebClient* InWebClient);
	virtual ~AloMovesApi();



	/// <summary>
	/// Harmonize with Meta
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/harmonize
	/// Authorization: Anonymous
	/// </remarks>
	void aloHarmonizePost(const aloHarmonizePostParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Get min compatible versions
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/versions-matrix
	/// Authorization: Anonymous
	/// </remarks>
	void aloVersions_matrixPost(const aloVersions_matrixPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Class Completed
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/{userId}/classes/{classDefinitionId}/completed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void aloUserIdClassesClassDefinitionIdCompletedPost(const aloUserIdClassesClassDefinitionIdCompletedPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// QA test function to setup the scenario to test a specific badge.  Note Bene!!!: this contract
	/// you are accepting when calling this function is that it will delete all your class and badge data.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/qa/{userId}/badge-expressions
	/// ```markdown
	/// ### Badge Creation DSL Documentation
	///
	/// This guide explains how to use the Badge Creation DSL to simulate class completions and test badge awarding in our application.You’ll use
	/// these expressions in Swagger to automate the creation of class records.
	///
	/// #### DSL Format
	///
	/// The DSL expression follows this format:
	///
	/// ```
	/// [total_classes] [frequency] [interval] [consecutive | flexible][across_year]
	/// ```
	///
	/// - **total_classes**: The number of classes to be completed.
	/// - **frequency**: The time unit for class completions :
	///   - `D` for daily
	///   - `W` for weekly
	///   - `M` for monthly
	///   - `Y` for yearly
	/// - **interval**: The number of days, weeks, months, or years over which the classes are spread.
	/// - **consecutive | flexible** (optional):
	///   - `consecutive`: Classes must occur on consecutive days/weeks/months.
	///   - `flexible`: Classes can be spread out within the interval(default if not specified).
	/// - **across_year** (optional): Use this if the interval crosses from one year into the next.
	///
	/// #### Examples
	///
	/// 1. **7 consecutive days in a row**:
	///    ```
	///    7 D 1 consecutive
	///    ```
	///    - Simulates 7 classes completed on consecutive days.
	///
	/// 2. **5 classes within one week**:
	///    ```
	///    5 W 1 flexible
	///    ```
	///    - Simulates 5 classes spread out within a single week.
	///
	/// 3. **1 class per month for 3 consecutive months**:
	///    ```
	///    1 M 3 consecutive
	///    ```
	///    - Simulates 1 class each month for 3 consecutive months.
	///
	/// 4. **15 classes in one month**:
	///    ```
	///    15 M 1 flexible
	///    ```
	///    - Simulates 15 classes within a single month.
	///
	/// 5. **5 classes across a week that crosses into the next year**:
	///    ```
	///    5 W 1 flexible across_year
	///    ```
	///    - Simulates 5 classes within a week that spans the end of one year and the beginning of the next.
	///
	/// #### How to Use in Swagger
	///
	/// 1. Enter the expression into the designated field in Swagger.
	/// 2. The system will automatically create the necessary class completions according to the rules defined in your DSL expression.
	/// 3. Verify that the appropriate badge is awarded as expected.
	///
	/// #### Tips
	///
	/// - Use `consecutive` when you need classes to be back-to-back.
	/// - Use `flexible` for more relaxed scheduling within the specified interval.
	/// - Use `across_year` if your scenario involves a time period that spans two years.
	///
	/// This DSL simplifies your testing by automating class creation. If you encounter any issues or need help, refer back to this guide or contact
	/// the development team.
	/// ```
	/// </remarks>
	void aloQaUserIdBadge_expressionsPost(const aloQaUserIdBadge_expressionsPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets recommended classes for the user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/alo/{userId}/classes/recommendations
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void aloUserIdClassesRecommendationsGet(const aloUserIdClassesRecommendationsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// QA method for asynchronously syncing class data manually
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/alo/qa/sync/class-data
	/// Authorization: admin
	/// </remarks>
	void aloQaSyncClass_dataPut(const aloQaSyncClass_dataPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class AnalyticsApi final : public IAnalyticsApiBase
{
public:
	AnalyticsApi(csp::web::WebClient* InWebClient);
	virtual ~AnalyticsApi();



	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsBulkPost(const analyticsBulkPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStreamPost(const analyticsStreamPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class CacheApi final : public ICacheApiBase
{
public:
	CacheApi(csp::web::WebClient* InWebClient);
	virtual ~CacheApi();



	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysGet(const cache_keysGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysDelete(const cache_keysDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class CoalescenceApi final : public ICoalescenceApiBase
{
public:
	CoalescenceApi(csp::web::WebClient* InWebClient);
	virtual ~CoalescenceApi();



	/// <summary>
	/// Returns a coalescence object by its id.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/coalescence/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void coalescenceIdPost(const coalescenceIdPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ConfigurationApi final : public IConfigurationApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient);
	virtual ~ConfigurationApi();



	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsGet(const appsettingsGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	void featureflagsGet(const featureflagsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ExternalServiceProxyApi final : public IExternalServiceProxyApiBase
{
public:
	ExternalServiceProxyApi(csp::web::WebClient* InWebClient);
	virtual ~ExternalServiceProxyApi();



	/// <summary>
	/// Used to make a call to an external API
	/// </summary>
	/// <remarks>
	/// POST /service-proxy
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void service_proxyPost(const service_proxyPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class GroupRolesApi final : public IGroupRolesApiBase
{
public:
	GroupRolesApi(csp::web::WebClient* InWebClient);
	virtual ~GroupRolesApi();



	/// <summary>
	/// Set a user's group role in a group they're already a member of.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/groups/{groupId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdGroupsGroupIdRolesPut(const usersUserIdGroupsGroupIdRolesPutParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class NtpApi final : public INtpApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(const datetimeGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PingApi final : public IPingApiBase
{
public:
	PingApi(csp::web::WebClient* InWebClient);
	virtual ~PingApi();



	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	void pingGet(const pingGetParams& Params,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SequenceApi final : public ISequenceApiBase
{
public:
	SequenceApi(csp::web::WebClient* InWebClient);
	virtual ~SequenceApi();



	/// <summary>
	/// Finds all matching sequences.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences
	/// Requests may leverage any of the available search criteria to find sequences. The one
	/// caveat is that if you are searching by reference then you must specify both a `ReferenceType`
	/// (e.g. the literal string "GroupId") and at least one `ReferenceId` (e.g. the Id of the group).
	/// If multiple criteria are supplied (e.g. `KeyLikeRegex`, `Metadata`, and `ReferenceType` +
	/// `ReferenceIds`), this endpoint will return sequences that match ALL specified criteria.
	///
	/// This search is paginated. To page through the search results, call this endpoint multiple
	/// times with the same search criteria and different `Skip` and `Limit` values. If no pagination is
	/// specified, it will default to the first 10 results.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences?Keys=key1&Keys=key2
	///
	///     GET /oly-aggregations/api/v1/sequences?KeyLikeRegEx=key%5Cd%2B
	///
	///     GET /oly-aggregations/api/v1/sequences?ReferenceType=GroupId&ReferenceIds=000000000000000000000000
	///
	///     GET /oly-aggregations/api/v1/sequences?Metadata[key1]=value1&Metadata[key2]=value2
	/// </remarks>
	void sequencesGet(const sequencesGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates or updates a sequence.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences
	/// If a sequence with this key already exists and the current user has permission to modify
	/// the sequence then update the sequence. If the sequence does not exist and the current user
	/// has permission to create the specified sequence then create the sequence. Otherwise, return
	/// 403 Forbidden. See the description of the 403 Forbidden response for more details.
	///
	/// If a sequence is created or updated and the `ReferenceType` is "GroupId" then a multiplayer
	/// message will be sent to clients via the Global scope for the group.
	///
	/// If you include a new key in the query string, and key in the querystring doesn't already exist
	/// on another document, this will update the key for an existing document to the new key.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences?newKey=newKey
	///     {
	///         "key": "key1",
	///         "referenceType": "GroupId",
	///         "referenceId": "000000000000000000000000",
	///         "items": [
	///             "item1",
	///             "item2",
	///             "item3"
	///         ],
	///         "metadata": {
	///             "property1": "value1",
	///             "property2": "value2"
	///         }
	///     }
	/// </remarks>
	void sequencesPut(const sequencesPutParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets a sequence by key.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences/keys/{key}
	/// Returns the sequence with the specified `key`, if it exists. Otherwise, return 404 NotFound.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key1
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key2
	/// </remarks>
	void sequencesKeysKeyGet(const sequencesKeysKeyGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a sequence with the given key.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys/{key}
	/// Returns 204 No Content regardless of whether or not a sequence with the specified `key`
	/// existed or not.
	///
	/// If a sequence is deleted with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/keys/key1
	/// </remarks>
	void sequencesKeysKeyDelete(const sequencesKeysKeyDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Moves a sequence from one key to another.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences/keys/{oldKey}/key
	/// If the a sequence with the `oldKey` exists and a sequence with the `newKey` does not exist
	/// and the current user has permission to modify the sequence then update the key of the
	/// sequence to `newKey`. If no sequence with `oldKey` exists then return 404 NotFound. If a
	/// sequence with `newKey` already exists then return 409 Conflict.
	///
	/// If a sequence is moved with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for the group.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences/keys/key1/key/key2
	/// </remarks>
	[[deprecated("'PUT /api/v1/sequences/keys/{oldKey}/key' is deprecated!")]]
	void sequencesKeysOldKeyKeyPut(const sequencesKeysOldKeyKeyPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes all sequences with the given keys.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `keys`
	/// existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` of "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences?keys=key1&keys=key2
	/// </remarks>
	void sequencesKeysDelete(const sequencesKeysDeleteParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes all sequences with the given reference.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/reference-type/{referenceType}/reference-id/{referenceId}
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `referenceType`
	/// and `referenceId` existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` is "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/reference-type/GroupId/reference-id/000000000000000000000000
	/// </remarks>
	void sequencesReference_typeReferenceTypeReference_idReferenceIdDelete(
		const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ShopifyApi final : public IShopifyApiBase
{
public:
	ShopifyApi(csp::web::WebClient* InWebClient);
	virtual ~ShopifyApi();



	/// <summary>
	/// Find one product and return it and all its variants
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/{productId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyProductsProductIdGet(const spacesSpaceIdVendorsShopifyProductsProductIdGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken
														 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Find one or more products by variant ids and include the variant data too
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/variants
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyProductsVariantsGet(const spacesSpaceIdVendorsShopifyProductsVariantsGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates an record that contains the Shopify integration info
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyPut(const spacesSpaceIdVendorsShopifyPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Tests the provided info against Shopify to verify it's validity
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/vendors/shopify/validate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void vendorsShopifyValidatePut(const vendorsShopifyValidatePutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns all storefronts for the provided user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/shopify/users/{userId}/storefronts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void vendorsShopifyUsersUserIdStorefrontsGet(const vendorsShopifyUsersUserIdStorefrontsGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken
												 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates a Cart at Shopify for the store associated to the provided SpaceId
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/vendors/shopify/carts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyCartsPost(const spacesSpaceIdVendorsShopifyCartsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uses the CartId to reach out to Shopify and get Cart Data.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyCartsCartIdGet(const spacesSpaceIdVendorsShopifyCartsCartIdGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates the Cart
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyCartsCartIdPut(const spacesSpaceIdVendorsShopifyCartsCartIdPutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Get shopify cart checkout info
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet(const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken
																= csp::common::CancellationToken::Dummy()) const override;
};

class SpaceApi final : public ISpaceApiBase
{
public:
	SpaceApi(csp::web::WebClient* InWebClient);
	virtual ~SpaceApi();



	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces/{spaceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdDelete(const spacesSpaceIdDeleteParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the Spaces by their unique groupIds represented here as spaceIds and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesDelete(const spacesDeleteParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and returns those objects as KML style XML for google earth
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/multiplayer-objects/kml
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdMultiplayer_objectsKmlGet(const spacesSpaceIdMultiplayer_objectsKmlGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates a duplicate of a space and assigns it to a specific group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/duplicate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdDuplicatePost(const spacesSpaceIdDuplicatePostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Extracts the quintessence of the referenced Space to be compressed and distilled into a pair of Artifacts
	/// accessible in other places and times.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/export
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void spacesSpaceIdExportPost(const spacesSpaceIdExportPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Takes an exported space, that has been saved in a location accessible to all environments. Translates it, and imports it into an environment
	/// as a new space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void spacesExportsExportIdImportPost(const spacesExportsExportIdImportPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates an export of the space and associated records in a single file for optimized space-load flows
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/checkpoints
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdCheckpointsPost(const spacesSpaceIdCheckpointsPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class TicketedSpaceApi final : public ITicketedSpaceApiBase
{
public:
	TicketedSpaceApi(csp::web::WebClient* InWebClient);
	virtual ~TicketedSpaceApi();



	/// <summary>
	/// Creates an event associated with a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdEventsPost(const spacesSpaceIdEventsPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates an event associated with a space
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/events/{eventId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdEventsEventIdPut(const spacesSpaceIdEventsEventIdPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search space events that matches the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesEventsGet(const spacesEventsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Applies the ticket purchased from 3rd party event ticket vendor to enter a space event
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
		const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns which spaces have active ticketing and which do not
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/ticketed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacesTicketedGet(const spacesTicketedGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// OAuth endpoint for exchanging vendor provider auth code for an API bearer token.
	/// returns a redirect to a client-provided server-approved redirect URL
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/oauth
	/// Authorization: Anonymous
	/// </remarks>
	void vendorsVendorNameOauthGet(const vendorsVendorNameOauthGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns info related to initiating oauth flow with a specific vendor
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/users/{userId}/provider-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void vendorsVendorNameUsersUserIdProvider_infoGet(const vendorsVendorNameUsersUserIdProvider_infoGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken
													  = csp::common::CancellationToken::Dummy()) const override;
};

class UserSustainedActivityApi final : public IUserSustainedActivityApiBase
{
public:
	UserSustainedActivityApi(csp::web::WebClient* InWebClient);
	virtual ~UserSustainedActivityApi();



	/// <summary>
	/// Get the all users' sustained activity of the given tenants within a time range - inclusive of the start time and exclusive of the end time
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/sustained-activity
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void usersSustained_activityGet(const usersSustained_activityGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class VersionsApi final : public IVersionsApiBase
{
public:
	VersionsApi(csp::web::WebClient* InWebClient);
	virtual ~VersionsApi();



	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	void rsionsGet(const rsionsGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class VersionsAggregatorApi final : public IVersionsAggregatorApiBase
{
public:
	VersionsAggregatorApi(csp::web::WebClient* InWebClient);
	virtual ~VersionsAggregatorApi();



	/// <summary>
	/// Aggregate the versions from this and downstream services
	/// </summary>
	/// <remarks>
	/// GET /api/versions-aggregated
	/// Authorization: Anonymous
	/// </remarks>
	void rsions_aggregatedGet(const rsions_aggregatedGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};


} // namespace csp::services::generated::aggregationservice