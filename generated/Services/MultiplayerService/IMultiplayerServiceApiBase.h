

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::multiplayerservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct analyticsBulkPostParams
	{
		analyticsBulkPostParams() = default;

		const std::vector<std::shared_ptr<AnalyticsRecord>>& RequestBody;
	};


	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsBulkPost(const analyticsBulkPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStreamPostParams
	{
		analyticsStreamPostParams() = default;
	};


	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStreamPost(const analyticsStreamPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStream_urlPostParams
	{
		analyticsStream_urlPostParams() = default;
	};


	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAnalyticsApiBase() = default;
};

class IAreaOfInterestApiBase : public csp::services::ApiBase
{
public:
	IAreaOfInterestApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct area_of_interestUserIdResetPutParams
	{
		area_of_interestUserIdResetPutParams() = default;

		const utility::string_t& userId;
	};


	/// <summary>
	/// Resets an area of interest for a user id
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/area-of-interest/{userId}/reset
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void area_of_interestUserIdResetPut(const area_of_interestUserIdResetPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct area_of_interestUserIdGetParams
	{
		area_of_interestUserIdGetParams() = default;

		const utility::string_t& userId;
	};


	/// <summary>
	/// Returns the area of interest for a user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/area-of-interest/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void area_of_interestUserIdGet(const area_of_interestUserIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAreaOfInterestApiBase() = default;
};

class IClientConnectionApiBase : public csp::services::ApiBase
{
public:
	IClientConnectionApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct client_connectionsGetParams
	{
		client_connectionsGetParams() = default;

		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::vector<utility::string_t>>& ScopeIds;
		const std::optional<std::vector<utility::string_t>>& Scopes;
		const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds;
		const std::optional<utility::string_t>& ScopeReferenceType;
		const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Locates the client connection objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/client-connections
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void client_connectionsGet(const client_connectionsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct client_connectionsRequest_to_disconnectPostParams
	{
		client_connectionsRequest_to_disconnectPostParams() = default;

		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::vector<utility::string_t>>& ScopeIds;
		const std::optional<std::vector<utility::string_t>>& Scopes;
		const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds;
		const std::optional<utility::string_t>& ScopeReferenceType;
		const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus;
	};


	/// <summary>
	/// Sends requests to disconnect to the requested client connections
	/// </summary>
	/// <remarks>
	/// POST /api/v1/client-connections/request-to-disconnect
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void client_connectionsRequest_to_disconnectPost(const client_connectionsRequest_to_disconnectPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IClientConnectionApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct appsettingsGetParams
	{
		appsettingsGetParams() = default;
	};

	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsGet(const appsettingsGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct appsettingsReloadPostParams
	{
		appsettingsReloadPostParams() = default;
	};

	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct featureflagsGetParams
	{
		featureflagsGetParams() = default;
	};

	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void featureflagsGet(const featureflagsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigurationApiBase() = default;
};

class IEventMessageApiBase : public csp::services::ApiBase
{
public:
	IEventMessageApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct eventsPostParams
	{
		eventsPostParams() = default;

		const std::shared_ptr<EventMessageDto>& RequestBody;
	};


	/// <summary>
	/// Sends a multiplayer event
	/// </summary>
	/// <remarks>
	/// POST /api/v1/events
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void eventsPost(const eventsPostParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEventMessageApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct datetimeGetParams
	{
		datetimeGetParams() = default;
	};

	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	virtual void datetimeGet(const datetimeGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~INtpApiBase() = default;
};

class IObjectMessageApiBase : public csp::services::ApiBase
{
public:
	IObjectMessageApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct objectsPostParams
	{
		objectsPostParams() = default;

		const std::shared_ptr<ObjectMessageDto>& RequestBody;
	};


	/// <summary>
	/// Creates a multiplayer object
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	virtual void objectsPost(const objectsPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct objectsGetParams
	{
		objectsGetParams() = default;

		const std::optional<std::vector<int32_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& ObjectMessageDocumentIds;
		const std::optional<std::vector<utility::string_t>>& ScopeIds;
		const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds;
		const std::optional<utility::string_t>& ScopeReferenceType;
		const std::optional<std::vector<utility::string_t>>& ExcludeScopes;
		const std::optional<std::vector<utility::string_t>>& OwnerUserIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeOwnerUserIds;
		const std::optional<int32_t>& PrefabId;
		const std::optional<bool>& IsPersistent;
		const std::optional<bool>& IncludeClientOwnedPersistentObjects;
		const std::optional<std::vector<utility::string_t>>& RootParentIds;
		const std::optional<std::vector<utility::string_t>>& RootObjectDocumentIdsAndChildren;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Locates the multiplayer objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void objectsGet(const objectsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct objectsDeleteParams
	{
		objectsDeleteParams() = default;

		const std::optional<std::vector<int32_t>>& ids;
	};


	/// <summary>
	/// Deletes all multiplayer objects that match the search ids
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	virtual void objectsDelete(const objectsDeleteParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct objectsBatchPostParams
	{
		objectsBatchPostParams() = default;

		const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody;
	};


	/// <summary>
	/// Creates many multiplayer objects
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/batch
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	virtual void objectsBatchPost(const objectsBatchPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct objectsOwnersUserIdBatchPostParams
	{
		objectsOwnersUserIdBatchPostParams() = default;

		const utility::string_t& userId;
		const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody;
	};


	/// <summary>
	/// Creates many multiplayer objects for a single owner but does not notify the space.
	/// This method is optimized for creating a large number of objects in a Scope that has not been joined yet.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/owners/{userId}/batch
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void objectsOwnersUserIdBatchPost(const objectsOwnersUserIdBatchPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct object_documentsGetParams
	{
		object_documentsGetParams() = default;

		const std::optional<std::vector<int32_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& ObjectMessageDocumentIds;
		const std::optional<std::vector<utility::string_t>>& ScopeIds;
		const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds;
		const std::optional<utility::string_t>& ScopeReferenceType;
		const std::optional<std::vector<utility::string_t>>& ExcludeScopes;
		const std::optional<std::vector<utility::string_t>>& OwnerUserIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeOwnerUserIds;
		const std::optional<int32_t>& PrefabId;
		const std::optional<bool>& IsPersistent;
		const std::optional<bool>& IncludeClientOwnedPersistentObjects;
		const std::optional<std::vector<utility::string_t>>& RootParentIds;
		const std::optional<std::vector<utility::string_t>>& RootObjectDocumentIdsAndChildren;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Locates the multiplayer objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/object-documents
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void object_documentsGet(const object_documentsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct objectsImportExportIdPostParams
	{
		objectsImportExportIdPostParams() = default;

		const utility::string_t& exportId;
		const std::optional<utility::string_t>& ownerId;
	};


	/// <summary>
	/// Imports object messages into a space from an archival backup
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/import/{exportId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void objectsImportExportIdPost(const objectsImportExportIdPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct objectsIdGetParams
	{
		objectsIdGetParams() = default;

		const int32_t& id;
	};


	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void objectsIdGet(const objectsIdGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct objectsIdPutParams
	{
		objectsIdPutParams() = default;

		const int32_t& id;
		const std::shared_ptr<ObjectMessageDto>& RequestBody;
	};


	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// and updates the writable values
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/objects/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	virtual void objectsIdPut(const objectsIdPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct objectsIdDeleteParams
	{
		objectsIdDeleteParams() = default;

		const int32_t& id;
	};


	/// <summary>
	/// Deletes the multiplayer object by its unique identifier id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	virtual void objectsIdDelete(const objectsIdDeleteParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct objectsIdPartial_updatePutParams
	{
		objectsIdPartial_updatePutParams() = default;

		const int32_t& id;
		const std::shared_ptr<ObjectMessagePatchDto>& RequestBody;
	};


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
	virtual void objectsIdPartial_updatePut(const objectsIdPartial_updatePutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IObjectMessageApiBase() = default;
};

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct pingGetParams
	{
		pingGetParams() = default;
	};

	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	virtual void pingGet(const pingGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPingApiBase() = default;
};

class IScopeLeaderApiBase : public csp::services::ApiBase
{
public:
	IScopeLeaderApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct scopesScopeIdLeaderGetParams
	{
		scopesScopeIdLeaderGetParams() = default;

		const utility::string_t& scopeId;
	};


	/// <summary>
	/// Get's related scope leader information for a scope
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/{scopeId}/leader
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesScopeIdLeaderGet(const scopesScopeIdLeaderGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct scopesScopeIdLeader_electionPostParams
	{
		scopesScopeIdLeader_electionPostParams() = default;

		const utility::string_t& scopeId;
		const std::optional<std::vector<utility::string_t>>& userIdsToExclude;
	};


	/// <summary>
	/// Kicks off a leader election in the specified scope if the scope is
	/// configured to require managed leaders.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/scopes/{scopeId}/leader-election
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesScopeIdLeader_electionPost(const scopesScopeIdLeader_electionPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IScopeLeaderApiBase() = default;
};

class IScopesApiBase : public csp::services::ApiBase
{
public:
	IScopesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct scopesPostParams
	{
		scopesPostParams() = default;

		const std::shared_ptr<ScopeDto>& RequestBody;
	};


	/// <summary>
	/// Creates a definition for a new scope
	/// </summary>
	/// <remarks>
	/// POST /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesPost(const scopesPostParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct scopesPutParams
	{
		scopesPutParams() = default;

		const std::shared_ptr<ScopeDto>& RequestBody;
	};


	/// <summary>
	/// Upserts a definition for a new/existing scope
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesPut(const scopesPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct scopesGetParams
	{
		scopesGetParams() = default;

		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& ReferenceIds;
		const std::optional<utility::string_t>& ReferenceType;
		const std::optional<std::shared_ptr<PubSubModel>>& PubSubModel;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the scopes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesGet(const scopesGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct scopesIdGetParams
	{
		scopesIdGetParams() = default;

		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the scope document by it's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesIdGet(const scopesIdGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct scopesIdDeleteParams
	{
		scopesIdDeleteParams() = default;

		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesIdDelete(const scopesIdDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct scopesIdPutParams
	{
		scopesIdPutParams() = default;

		const utility::string_t& id;
		const std::shared_ptr<ScopeDto>& RequestBody;
	};


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and updates the writable fields of that scope with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void scopesIdPut(const scopesIdPutParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams
	{
		scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams() = default;

		const utility::string_t& referenceId;
		const utility::string_t& referenceType;
	};


	/// <summary>
	/// Locates the scope(s) based on their shared referenceId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void
		scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams
	{
		scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams() = default;

		const utility::string_t& referenceId;
		const utility::string_t& referenceType;
	};


	/// <summary>
	/// Locates the scope(s) by its parents unique identifier referenceId
	/// and deletes the parent and all its children.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void
		scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IScopesApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().MultiplayerService)
	{
	}



	struct rsionsGetParams
	{
		rsionsGetParams() = default;
	};


	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	virtual void rsionsGet(const rsionsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IVersionsApiBase() = default;
};


} // namespace csp::services::generated::multiplayerservice