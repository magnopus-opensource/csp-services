

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Web/HttpAuth.h"
#include "Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::multiplayerservice
{


AreaOfInterestApi::AreaOfInterestApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

AreaOfInterestApi::~AreaOfInterestApi()
{
}



void AreaOfInterestApi::areaOfInterestUserIdResetPut(const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/area-of-interest/{userId}/reset")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AreaOfInterestApi::areaOfInterestUserIdGet(const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/area-of-interest/{userId}").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ClientConnectionApi::ClientConnectionApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

ClientConnectionApi::~ClientConnectionApi()
{
}



void ClientConnectionApi::clientConnectionsGet(const std::optional<std::vector<utility::string_t>>& UserIds,
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
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/client-connections").c_str(),
		{});


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



void ClientConnectionApi::clientConnectionsRequestToDisconnectPost(const std::optional<std::vector<utility::string_t>>& UserIds,
																   const std::optional<std::vector<utility::string_t>>& ScopeIds,
																   const std::optional<std::vector<utility::string_t>>& Scopes,
																   const std::optional<std::vector<utility::string_t>>& ScopeReferenceIds,
																   const std::optional<utility::string_t>& ScopeReferenceType,
																   const std::optional<std::shared_ptr<ClientConnectionStatus>>& ConnectionStatus,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition->GetURI().c_str(),
								  ServiceDefinition->GetVersion(),
								  "/client-connections/request-to-disconnect")
						  .c_str(),
					  {});


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



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition->GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition->GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition->GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



EventMessageApi::EventMessageApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

EventMessageApi::~EventMessageApi()
{
}



void EventMessageApi::eventsPost(const std::shared_ptr<EventMessageDto>& RequestBody,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/events").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition->GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ObjectMessageApi::ObjectMessageApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

ObjectMessageApi::~ObjectMessageApi()
{
}



void ObjectMessageApi::objectsPost(const std::shared_ptr<ObjectMessageDto>& RequestBody,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::objectsGet(const std::optional<std::vector<int32_t>>& Ids,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects").c_str(), {});


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

void ObjectMessageApi::objectsDelete(const std::optional<std::vector<int32_t>>& ids,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects").c_str(), {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsBatchPost(const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/batch").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsOwnersUserIdBatchPost(const utility::string_t& userId,
													const std::vector<std::shared_ptr<ObjectMessageDto>>& RequestBody,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/owners/{userId}/batch")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsExportExportIdPost(const utility::string_t& exportId,
												 const std::shared_ptr<ImportObjectMessageRequest>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/export/{exportId}").c_str(),
		{exportId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsImportExportIdPost(const utility::string_t& exportId,
												 const std::optional<utility::string_t>& ownerId,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/import/{exportId}").c_str(),
		{exportId});


	if (ownerId.has_value())
	{
		Uri.AddQueryParams("ownerId", ownerId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsIdGet(const int32_t& id,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::objectsIdPut(const int32_t& id,
									const std::shared_ptr<ObjectMessageDto>& RequestBody,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void ObjectMessageApi::objectsIdDelete(const int32_t& id,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsIdPartialUpdatePut(const int32_t& id,
												 const std::shared_ptr<ObjectMessagePatchDto>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/objects/{id}/partial-update").c_str(),
		{std::to_string(id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition->GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopeLeaderApi::ScopeLeaderApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

ScopeLeaderApi::~ScopeLeaderApi()
{
}



void ScopeLeaderApi::scopesScopeIdLeaderGet(const utility::string_t& scopeId,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes/{scopeId}/leader").c_str(),
		{scopeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopeLeaderApi::scopesScopeIdLeaderElectionPost(const utility::string_t& scopeId,
													 const std::optional<std::vector<utility::string_t>>& userIdsToExclude,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes/{scopeId}/leader-election")
			.c_str(),
		{scopeId});


	if (userIdsToExclude.has_value())
	{
		Uri.AddQueryParams("userIdsToExclude", userIdsToExclude.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopesApi::ScopesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().MultiplayerService)
{
}

ScopesApi::~ScopesApi()
{
}



void ScopesApi::scopesPost(const std::shared_ptr<ScopeDto>& RequestBody,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::scopesPut(const std::shared_ptr<ScopeDto>& RequestBody,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::scopesGet(const std::optional<std::vector<utility::string_t>>& Ids,
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
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes").c_str(), {});


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



void ScopesApi::scopesIdGet(const utility::string_t& id,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::scopesIdDelete(const utility::string_t& id,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::scopesIdPut(const utility::string_t& id,
							const std::shared_ptr<ScopeDto>& RequestBody,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition->GetURI().c_str(), ServiceDefinition->GetVersion(), "/scopes/{id}").c_str(),
					  {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopesApi::scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(const utility::string_t& referenceId,
																		  const utility::string_t& referenceType,
																		  csp::services::ApiResponseHandlerBase* ResponseHandler,
																		  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition->GetURI().c_str(),
								  ServiceDefinition->GetVersion(),
								  "/scopes/referenceType/{referenceType}/referenceId/{referenceId}")
						  .c_str(),
					  {referenceId, referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ScopesApi::scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(const utility::string_t& referenceId,
																			 const utility::string_t& referenceType,
																			 csp::services::ApiResponseHandlerBase* ResponseHandler,
																			 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition->GetURI().c_str(),
								  ServiceDefinition->GetVersion(),
								  "/scopes/referenceType/{referenceType}/referenceId/{referenceId}")
						  .c_str(),
					  {referenceId, referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::multiplayerservice