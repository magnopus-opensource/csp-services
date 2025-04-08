

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Web/HttpAuth.h"
#include "Web/HttpPayload.h"


namespace csp::services::generated::multiplayerservice
{


AreaOfInterestApi::AreaOfInterestApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

AreaOfInterestApi::~AreaOfInterestApi()
{
}



void AreaOfInterestApi::apiV1AreaOfInterestUserIdResetPut(const utility::string_t& userId,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/area-of-interest/{userId}/reset", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AreaOfInterestApi::apiV1AreaOfInterestUserIdGet(const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/area-of-interest/{userId}", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ClientConnectionApi::ClientConnectionApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

ClientConnectionApi::~ClientConnectionApi()
{
}



void ClientConnectionApi::apiV1ClientConnectionsGet(const std::optional<std::vector<utility::string_t>>& UserIds,
													const std::optional<std::vector<utility::string_t>>& ScopeIds,
													const std::optional<std::vector<utility::string_t>>& Scopes,
													const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
													const std::optional<utility::string_t>& ScopeReferenceType,
													const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus,
													const std::optional<int32_t>& Skip,
													const std::optional<int32_t>& Limit,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/client-connections", {});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", ScopeIds.value());
	}


	if (Scopes.has_value())
	{
		Uri.AddQueryParams("Scopes", Scopes.value());
	}


	if (ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", ScopeReferenceIds.value());
	}


	if (ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", ScopeReferenceType.value());
	}


	if (ConnectionStatus.has_value())
	{
		Uri.AddQueryParams("ConnectionStatus", ConnectionStatus.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ClientConnectionApi::apiV1ClientConnectionsRequestToDisconnectPost(
	const std::optional<std::vector<utility::string_t>>& UserIds,
	const std::optional<std::vector<utility::string_t>>& ScopeIds,
	const std::optional<std::vector<utility::string_t>>& Scopes,
	const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
	const std::optional<utility::string_t>& ScopeReferenceType,
	const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/client-connections/request-to-disconnect", {});


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", ScopeIds.value());
	}


	if (Scopes.has_value())
	{
		Uri.AddQueryParams("Scopes", Scopes.value());
	}


	if (ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", ScopeReferenceIds.value());
	}


	if (ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", ScopeReferenceType.value());
	}


	if (ConnectionStatus.has_value())
	{
		Uri.AddQueryParams("ConnectionStatus", ConnectionStatus.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/appsettings/reload", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/featureflags", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



EventMessageApi::EventMessageApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

EventMessageApi::~EventMessageApi()
{
}



void EventMessageApi::apiV1EventsPost(const std::shared_ptr<EventMessageDto>& RequestBody,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/events", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/datetime", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ObjectMessageApi::ObjectMessageApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

ObjectMessageApi::~ObjectMessageApi()
{
}



void ObjectMessageApi::apiV1ObjectsPost(const std::shared_ptr<ObjectMessageDto>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::apiV1ObjectsGet(const std::optional<std::vector<int32_t>>& Ids,
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
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects", {});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (ObjectMessageDocumentIds.has_value())
	{
		Uri.AddQueryParams("ObjectMessageDocumentIds", ObjectMessageDocumentIds.value());
	}


	if (ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", ScopeIds.value());
	}


	if (ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", ScopeReferenceIds.value());
	}


	if (ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", ScopeReferenceType.value());
	}


	if (ExcludeScopes.has_value())
	{
		Uri.AddQueryParams("ExcludeScopes", ExcludeScopes.value());
	}


	if (OwnerUserIds.has_value())
	{
		Uri.AddQueryParams("OwnerUserIds", OwnerUserIds.value());
	}


	if (ExcludeOwnerUserIds.has_value())
	{
		Uri.AddQueryParams("ExcludeOwnerUserIds", ExcludeOwnerUserIds.value());
	}


	if (PrefabId.has_value())
	{
		Uri.AddQueryParams("PrefabId", PrefabId.value());
	}


	if (IsPersistent.has_value())
	{
		Uri.AddQueryParams("IsPersistent", IsPersistent.value());
	}


	if (IncludeClientOwnedPersistentObjects.has_value())
	{
		Uri.AddQueryParams("IncludeClientOwnedPersistentObjects", IncludeClientOwnedPersistentObjects.value());
	}


	if (RootParentIds.has_value())
	{
		Uri.AddQueryParams("RootParentIds", RootParentIds.value());
	}


	if (RootObjectDocumentIdsAndChildren.has_value())
	{
		Uri.AddQueryParams("RootObjectDocumentIdsAndChildren", RootObjectDocumentIdsAndChildren.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::apiV1ObjectsDelete(const std::optional<std::vector<int32_t>>& ids,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::apiV1ObjectsBatchPost(const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/batch", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::apiV1ObjectsOwnersUserIdBatchPost(const utility::string_t& userId,
														 const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/owners/{userId}/batch", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::apiV1ObjectsIdGet(const int32_t& id,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/{id}", {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::apiV1ObjectsIdPut(const int32_t& id,
										 const std::shared_ptr<ObjectMessageDto>& RequestBody,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/{id}", {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::apiV1ObjectsIdDelete(const int32_t& id,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/{id}", {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::apiV1ObjectsIdPartialUpdatePut(const int32_t& id,
													  const std::shared_ptr<ObjectMessagePatchDto>& RequestBody,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/objects/{id}/partial-update", {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/ping", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopeLeaderApi::ScopeLeaderApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

ScopeLeaderApi::~ScopeLeaderApi()
{
}



void ScopeLeaderApi::apiV1ScopesScopeIdLeaderGet(const utility::string_t& scopeId,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/{scopeId}/leader", {scopeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopeLeaderApi::apiV1ScopesScopeIdLeaderElectionPost(const utility::string_t& scopeId,
														  const std::optional<std::vector<utility::string_t>>& userIdsToExclude,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/{scopeId}/leader-election", {scopeId});


	if (userIdsToExclude.has_value())
	{
		Uri.AddQueryParams("userIdsToExclude", userIdsToExclude.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopesApi::ScopesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerServiceURI)
{
}

ScopesApi::~ScopesApi()
{
}



void ScopesApi::apiV1ScopesPost(const std::shared_ptr<ScopeDto>& RequestBody,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::apiV1ScopesGet(const std::optional<std::vector<utility::string_t>>& Ids,
							   const std::optional<std::vector<utility::string_t>>& ReferenceIds,
							   const std::optional<utility::string_t>& ReferenceType,
							   const std::optional<std::shared_ptr<PubSubModel>>& PubSubModel,
							   const std::optional<std::vector<utility::string_t>>& Names,
							   const std::optional<int32_t>& Skip,
							   const std::optional<int32_t>& Limit,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes", {});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", ReferenceIds.value());
	}


	if (ReferenceType.has_value())
	{
		Uri.AddQueryParams("ReferenceType", ReferenceType.value());
	}


	if (PubSubModel.has_value())
	{
		Uri.AddQueryParams("PubSubModel", PubSubModel.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Skip.value());
	}


	if (Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopesApi::apiV1ScopesIdGet(const utility::string_t& id,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::apiV1ScopesIdDelete(const utility::string_t& id,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::apiV1ScopesIdPut(const utility::string_t& id,
								 const std::shared_ptr<ScopeDto>& RequestBody,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopesApi::apiV1ScopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(const utility::string_t& referenceId,
																			   const utility::string_t& referenceType,
																			   csp::services::ApiResponseHandlerBase* ResponseHandler,
																			   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}", {referenceId, referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::apiV1ScopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(const utility::string_t& referenceId,
																				  const utility::string_t& referenceType,
																				  csp::services::ApiResponseHandlerBase* ResponseHandler,
																				  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/scopes/referenceType/{referenceType}/referenceId/{referenceId}", {referenceId, referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::multiplayerservice