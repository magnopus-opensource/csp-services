

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"

#include <optional>


namespace csp::services::generated::multiplayerservice
{


class AreaOfInterestApi final : public csp::services::ApiBase
{
public:
	AreaOfInterestApi(csp::web::WebClient* InWebClient);
	virtual ~AreaOfInterestApi();



	/// <summary>
	/// Resets an area of interest for a user id
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/area-of-interest/{userId}/reset
	/// Authorization: magnopus-admin,admin,support,internal-service
	/// </remarks>
	void apiV1AreaOfInterestUserIdResetPut(const utility::string_t& userId,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Returns the area of interest for a user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/area-of-interest/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1AreaOfInterestUserIdGet(const utility::string_t& userId,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class ClientConnectionApi final : public csp::services::ApiBase
{
public:
	ClientConnectionApi(csp::web::WebClient* InWebClient);
	virtual ~ClientConnectionApi();



	/// <summary>
	/// Locates the client connection objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/client-connections
	/// Authorization: magnopus-admin,admin,support,internal-service
	/// </remarks>
	void apiV1ClientConnectionsGet(const std::optional<std::vector<utility::string_t>>& UserIds,
								   const std::optional<std::vector<utility::string_t>>& ScopeIds,
								   const std::optional<std::vector<utility::string_t>>& Scopes,
								   const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
								   const std::optional<utility::string_t>& ScopeReferenceType,
								   const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus,
								   const std::optional<int32_t>& Skip,
								   const std::optional<int32_t>& Limit,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Sends requests to disconnect to the requested client connections
	/// </summary>
	/// <remarks>
	/// POST /api/v1/client-connections/request-to-disconnect
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ClientConnectionsRequestToDisconnectPost(const std::optional<std::vector<utility::string_t>>& UserIds,
													   const std::optional<std::vector<utility::string_t>>& ScopeIds,
													   const std::optional<std::vector<utility::string_t>>& Scopes,
													   const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
													   const std::optional<utility::string_t>& ScopeReferenceType,
													   const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const;
};

class ConfigurationApi final : public csp::services::ApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient);
	virtual ~ConfigurationApi();



	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	void featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class EventMessageApi final : public csp::services::ApiBase
{
public:
	EventMessageApi(csp::web::WebClient* InWebClient);
	virtual ~EventMessageApi();



	/// <summary>
	/// Sends a multiplayer event
	/// </summary>
	/// <remarks>
	/// POST /api/v1/events
	/// Authorization: magnopus-admin,admin,support,internal-service
	/// </remarks>
	void apiV1EventsPost(const std::shared_ptr<EventMessageDto>& RequestBody,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class NtpApi final : public csp::services::ApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class ObjectMessageApi final : public csp::services::ApiBase
{
public:
	ObjectMessageApi(csp::web::WebClient* InWebClient);
	virtual ~ObjectMessageApi();



	/// <summary>
	/// Creates a multiplayer object
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects
	/// Authorization: magnopus-admin,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void apiV1ObjectsPost(const std::shared_ptr<ObjectMessageDto>& RequestBody,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Locates the multiplayer objects by the search filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ObjectsGet(const std::optional<std::vector<int32_t>>& Ids,
						 const std::optional<std::vector<utility::string_t>>& ObjectMessageDocumentIds,
						 const std::optional<std::vector<utility::string_t>>& ScopeIds,
						 const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
						 const std::optional<utility::string_t>& ScopeReferenceType,
						 const std::optional<std::vector<utility::string_t>>& ExcludeScopes,
						 const std::optional<std::vector<utility::string_t>>& OwnerUserIds,
						 const std::optional<std::vector<utility::string_t>>& ExcludeOwnerUserIds,
						 const std::optional<int32_t>& PrefabId,
						 const std::optional<bool>& IsPersistent,
						 const std::optional<bool>& IncludeClientOwnedPersistentObjects,
						 const std::optional<std::vector<utility::string_t>>& RootParentIds,
						 const std::optional<std::vector<utility::string_t>>& RootObjectDocumentIdsAndChildren,
						 const std::optional<int32_t>& Skip,
						 const std::optional<int32_t>& Limit,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Deletes all multiplayer objects that match the search ids
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects
	/// Authorization: magnopus-admin,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void apiV1ObjectsDelete(const std::optional<std::vector<int32_t>>& ids,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Creates many multiplayer objects
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/batch
	/// Authorization: magnopus-admin,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void apiV1ObjectsBatchPost(const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Creates many multiplayer objects for a single owner but does not notify the space.
	/// This method is optimized for creating a large number of objects in a Scope that has not been joined yet.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/objects/owners/{userId}/batch
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ObjectsOwnersUserIdBatchPost(const utility::string_t& userId,
										   const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/objects/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ObjectsIdGet(const int32_t& id,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Locates the multiplayer object data by its unique identifier id
	/// and updates the writable values
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/objects/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void apiV1ObjectsIdPut(const int32_t& id,
						   const std::shared_ptr<ObjectMessageDto>& RequestBody,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Deletes the multiplayer object by its unique identifier id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/objects/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,limited-creator,creator
	/// </remarks>
	void apiV1ObjectsIdDelete(const int32_t& id,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



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
	void apiV1ObjectsIdPartialUpdatePut(const int32_t& id,
										const std::shared_ptr<ObjectMessagePatchDto>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class PingApi final : public csp::services::ApiBase
{
public:
	PingApi(csp::web::WebClient* InWebClient);
	virtual ~PingApi();



	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	void pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class ScopeLeaderApi final : public csp::services::ApiBase
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
	void apiV1ScopesScopeIdLeaderGet(const utility::string_t& scopeId,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Kicks off a leader election in the specified scope if the scope is
	/// configured to require managed leaders.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/scopes/{scopeId}/leader-election
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesScopeIdLeaderElectionPost(const utility::string_t& scopeId,
											  const std::optional<std::vector<utility::string_t>>& userIdsToExclude,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;
};

class ScopesApi final : public csp::services::ApiBase
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
	void apiV1ScopesPost(const std::shared_ptr<ScopeDto>& RequestBody,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Search across all of the scopes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesGet(const std::optional<std::vector<utility::string_t>>& Ids,
						const std::optional<std::vector<utility::string_t>>& ReferenceIds,
						const std::optional<utility::string_t>& ReferenceType,
						const std::optional<std::shared_ptr<PubSubModel>>& PubSubModel,
						const std::optional<std::vector<utility::string_t>>& Names,
						const std::optional<int32_t>& Skip,
						const std::optional<int32_t>& Limit,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Locates the scope document by it's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesIdGet(const utility::string_t& id,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesIdDelete(const utility::string_t& id,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Locates the scope by its unique identifier id
	/// and updates the writable fields of that scope with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/scopes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesIdPut(const utility::string_t& id,
						  const std::shared_ptr<ScopeDto>& RequestBody,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const;



	/// <summary>
	/// Locates the scope(s) based on their shared referenceId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(const utility::string_t& referenceId,
																		const utility::string_t& referenceType,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken
																		= csp::common::CancellationToken::Dummy()) const;


	/// <summary>
	/// Locates the scope(s) by its parents unique identifier referenceId
	/// and deletes the parent and all its children.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void apiV1ScopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(const utility::string_t& referenceId,
																		   const utility::string_t& referenceType,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken
																		   = csp::common::CancellationToken::Dummy()) const;
};


} // namespace csp::services::generated::multiplayerservice