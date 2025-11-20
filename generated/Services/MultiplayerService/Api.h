

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "IMultiplayerServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::multiplayerservice
{


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

class AreaOfInterestApi final : public IAreaOfInterestApiBase
{
public:
	AreaOfInterestApi(csp::web::WebClient* InWebClient);
	virtual ~AreaOfInterestApi();



	/// <summary>
	/// Resets an area of interest for a user id
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/area-of-interest/{userId}/reset
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void area_of_interestUserIdResetPut(const area_of_interestUserIdResetPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns the area of interest for a user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/area-of-interest/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void area_of_interestUserIdGet(const area_of_interestUserIdGetParams& Params,
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
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysGet(const cache_keysGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysDelete(const cache_keysDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ClientConnectionApi final : public IClientConnectionApiBase
{
public:
	ClientConnectionApi(csp::web::WebClient* InWebClient);
	virtual ~ClientConnectionApi();



	/// <summary>
	/// Locates the client connection objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/client-connections
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void client_connectionsGet(const client_connectionsGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends requests to disconnect to the requested client connections
	/// </summary>
	/// <remarks>
	/// POST /api/v1/client-connections/request-to-disconnect
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void client_connectionsRequest_to_disconnectPost(const client_connectionsRequest_to_disconnectPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken
													 = csp::common::CancellationToken::Dummy()) const override;
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

class EventMessageApi final : public IEventMessageApiBase
{
public:
	EventMessageApi(csp::web::WebClient* InWebClient);
	virtual ~EventMessageApi();



	/// <summary>
	/// Sends a multiplayer event
	/// </summary>
	/// <remarks>
	/// POST /api/v1/events
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void eventsPost(const eventsPostParams& Params,
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

class ObjectMessageApi final : public IObjectMessageApiBase
{
public:
	ObjectMessageApi(csp::web::WebClient* InWebClient);
	virtual ~ObjectMessageApi();



	/// <summary>
	/// Creates a multiplayer object
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void objectsPost(const objectsPostParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the multiplayer objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void objectsGet(const objectsGetParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all multiplayer objects that match the search ids
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void objectsDelete(const objectsDeleteParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates many multiplayer objects
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/batch
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void objectsBatchPost(const objectsBatchPostParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates many multiplayer objects for a single owner but does not notify the space.
	/// This method is optimized for creating a large number of objects in a Scope that has not been joined yet.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/owners/{userId}/batch
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void objectsOwnersUserIdBatchPost(const objectsOwnersUserIdBatchPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the multiplayer objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/object-documents
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void object_documentsGet(const object_documentsGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Imports object messages into a space from an archival backup
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/import/{exportId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void objectsImportExportIdPost(const objectsImportExportIdPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void objectsIdGet(const objectsIdGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// and updates the writable values
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/objects/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void objectsIdPut(const objectsIdPutParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the multiplayer object by its unique identifier id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void objectsIdDelete(const objectsIdDeleteParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// and performs a partial update
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/objects/{id}/partial-update
	/// The request can utilize ObjectMessagePatchDto to update the object's:
	/// - OwnerUserId: transfer ownership.
	/// - ParentId: change the parent object.
	/// - Components: add, update or delete component. To delete a component, set the component value to type
	/// Magnopus.Service.Multiplayer.Messages.Components.DeleteComponent in the Components dictionary
	/// </remarks>
	void objectsIdPartial_updatePut(const objectsIdPartial_updatePutParams& Params,
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

class ScopeLeaderApi final : public IScopeLeaderApiBase
{
public:
	ScopeLeaderApi(csp::web::WebClient* InWebClient);
	virtual ~ScopeLeaderApi();



	/// <summary>
	/// Get's related scope leader information for a scope
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/{scopeId}/leader
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesScopeIdLeaderGet(const scopesScopeIdLeaderGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Kicks off a leader election in the specified scope if the scope is
	/// configured to require managed leaders.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/scopes/{scopeId}/leader-election
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesScopeIdLeader_electionPost(const scopesScopeIdLeader_electionPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ScopesApi final : public IScopesApiBase
{
public:
	ScopesApi(csp::web::WebClient* InWebClient);
	virtual ~ScopesApi();



	/// <summary>
	/// Creates a definition for a new scope
	/// </summary>
	/// <remarks>
	/// POST /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesPost(const scopesPostParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Upserts a definition for a new/existing scope
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesPut(const scopesPutParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Search across all of the scopes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesGet(const scopesGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the scope document by it's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesIdGet(const scopesIdGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesIdDelete(const scopesIdDeleteParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and updates the writable fields of that scope with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesIdPut(const scopesIdPutParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the scope(s) based on their shared referenceId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken
																   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the scope(s) by its parents unique identifier referenceId
	/// and deletes the parent and all its children.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void
		scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken
																	 = csp::common::CancellationToken::Dummy()) const override;
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


} // namespace csp::services::generated::multiplayerservice