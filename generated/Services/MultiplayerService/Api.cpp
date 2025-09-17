

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::multiplayerservice
{


AnalyticsApi::AnalyticsApi(csp::web::WebClient* InWebClient) : IAnalyticsApiBase(InWebClient)
{
}

AnalyticsApi::~AnalyticsApi()
{
}



void AnalyticsApi::analyticsBulkPost([[maybe_unused]] const analyticsBulkPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/bulk").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStreamPost([[maybe_unused]] const analyticsStreamPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AnalyticsApi::analyticsStream_urlPost([[maybe_unused]] const analyticsStream_urlPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/analytics/stream-url").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



AreaOfInterestApi::AreaOfInterestApi(csp::web::WebClient* InWebClient) : IAreaOfInterestApiBase(InWebClient)
{
}

AreaOfInterestApi::~AreaOfInterestApi()
{
}



void AreaOfInterestApi::area_of_interestUserIdResetPut([[maybe_unused]] const area_of_interestUserIdResetPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/area-of-interest/{userId}/reset")
			.c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AreaOfInterestApi::area_of_interestUserIdGet([[maybe_unused]] const area_of_interestUserIdGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/area-of-interest/{userId}").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ClientConnectionApi::ClientConnectionApi(csp::web::WebClient* InWebClient) : IClientConnectionApiBase(InWebClient)
{
}

ClientConnectionApi::~ClientConnectionApi()
{
}



void ClientConnectionApi::client_connectionsGet([[maybe_unused]] const client_connectionsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/client-connections").c_str(),
		{});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", Params.ScopeIds.value());
	}


	if (Params.Scopes.has_value())
	{
		Uri.AddQueryParams("Scopes", Params.Scopes.value());
	}


	if (Params.ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", Params.ScopeReferenceIds.value());
	}


	if (Params.ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", Params.ScopeReferenceType.value());
	}


	if (Params.ConnectionStatus.has_value())
	{
		Uri.AddQueryParams("ConnectionStatus", Params.ConnectionStatus.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ClientConnectionApi::client_connectionsRequest_to_disconnectPost(
	[[maybe_unused]] const client_connectionsRequest_to_disconnectPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/client-connections/request-to-disconnect")
						  .c_str(),
					  {});


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", Params.ScopeIds.value());
	}


	if (Params.Scopes.has_value())
	{
		Uri.AddQueryParams("Scopes", Params.Scopes.value());
	}


	if (Params.ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", Params.ScopeReferenceIds.value());
	}


	if (Params.ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", Params.ScopeReferenceType.value());
	}


	if (Params.ConnectionStatus.has_value())
	{
		Uri.AddQueryParams("ConnectionStatus", Params.ConnectionStatus.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : IConfigurationApiBase(InWebClient)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet([[maybe_unused]] const appsettingsGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost([[maybe_unused]] const appsettingsReloadPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet([[maybe_unused]] const featureflagsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



EventMessageApi::EventMessageApi(csp::web::WebClient* InWebClient) : IEventMessageApiBase(InWebClient)
{
}

EventMessageApi::~EventMessageApi()
{
}



void EventMessageApi::eventsPost([[maybe_unused]] const eventsPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/events").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : INtpApiBase(InWebClient)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet([[maybe_unused]] const datetimeGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ObjectMessageApi::ObjectMessageApi(csp::web::WebClient* InWebClient) : IObjectMessageApiBase(InWebClient)
{
}

ObjectMessageApi::~ObjectMessageApi()
{
}



void ObjectMessageApi::objectsPost([[maybe_unused]] const objectsPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void ObjectMessageApi::objectsGet([[maybe_unused]] const objectsGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects").c_str(), {});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.ObjectMessageDocumentIds.has_value())
	{
		Uri.AddQueryParams("ObjectMessageDocumentIds", Params.ObjectMessageDocumentIds.value());
	}


	if (Params.ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", Params.ScopeIds.value());
	}


	if (Params.ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", Params.ScopeReferenceIds.value());
	}


	if (Params.ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", Params.ScopeReferenceType.value());
	}


	if (Params.ExcludeScopes.has_value())
	{
		Uri.AddQueryParams("ExcludeScopes", Params.ExcludeScopes.value());
	}


	if (Params.OwnerUserIds.has_value())
	{
		Uri.AddQueryParams("OwnerUserIds", Params.OwnerUserIds.value());
	}


	if (Params.ExcludeOwnerUserIds.has_value())
	{
		Uri.AddQueryParams("ExcludeOwnerUserIds", Params.ExcludeOwnerUserIds.value());
	}


	if (Params.PrefabId.has_value())
	{
		Uri.AddQueryParams("PrefabId", Params.PrefabId.value());
	}


	if (Params.IsPersistent.has_value())
	{
		Uri.AddQueryParams("IsPersistent", Params.IsPersistent.value());
	}


	if (Params.IncludeClientOwnedPersistentObjects.has_value())
	{
		Uri.AddQueryParams("IncludeClientOwnedPersistentObjects", Params.IncludeClientOwnedPersistentObjects.value());
	}


	if (Params.RootParentIds.has_value())
	{
		Uri.AddQueryParams("RootParentIds", Params.RootParentIds.value());
	}


	if (Params.RootObjectDocumentIdsAndChildren.has_value())
	{
		Uri.AddQueryParams("RootObjectDocumentIdsAndChildren", Params.RootObjectDocumentIdsAndChildren.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ObjectMessageApi::objectsDelete([[maybe_unused]] const objectsDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects").c_str(), {});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsBatchPost([[maybe_unused]] const objectsBatchPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/batch").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsOwnersUserIdBatchPost([[maybe_unused]] const objectsOwnersUserIdBatchPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/owners/{userId}/batch").c_str(),
		{Params.userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::object_documentsGet([[maybe_unused]] const object_documentsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/object-documents").c_str(),
					  {});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.ObjectMessageDocumentIds.has_value())
	{
		Uri.AddQueryParams("ObjectMessageDocumentIds", Params.ObjectMessageDocumentIds.value());
	}


	if (Params.ScopeIds.has_value())
	{
		Uri.AddQueryParams("ScopeIds", Params.ScopeIds.value());
	}


	if (Params.ScopeReferenceIds.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceIds", Params.ScopeReferenceIds.value());
	}


	if (Params.ScopeReferenceType.has_value())
	{
		Uri.AddQueryParams("ScopeReferenceType", Params.ScopeReferenceType.value());
	}


	if (Params.ExcludeScopes.has_value())
	{
		Uri.AddQueryParams("ExcludeScopes", Params.ExcludeScopes.value());
	}


	if (Params.OwnerUserIds.has_value())
	{
		Uri.AddQueryParams("OwnerUserIds", Params.OwnerUserIds.value());
	}


	if (Params.ExcludeOwnerUserIds.has_value())
	{
		Uri.AddQueryParams("ExcludeOwnerUserIds", Params.ExcludeOwnerUserIds.value());
	}


	if (Params.PrefabId.has_value())
	{
		Uri.AddQueryParams("PrefabId", Params.PrefabId.value());
	}


	if (Params.IsPersistent.has_value())
	{
		Uri.AddQueryParams("IsPersistent", Params.IsPersistent.value());
	}


	if (Params.IncludeClientOwnedPersistentObjects.has_value())
	{
		Uri.AddQueryParams("IncludeClientOwnedPersistentObjects", Params.IncludeClientOwnedPersistentObjects.value());
	}


	if (Params.RootParentIds.has_value())
	{
		Uri.AddQueryParams("RootParentIds", Params.RootParentIds.value());
	}


	if (Params.RootObjectDocumentIdsAndChildren.has_value())
	{
		Uri.AddQueryParams("RootObjectDocumentIdsAndChildren", Params.RootObjectDocumentIdsAndChildren.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsImportExportIdPost([[maybe_unused]] const objectsImportExportIdPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/import/{exportId}").c_str(),
		{Params.exportId});


	if (Params.ownerId.has_value())
	{
		Uri.AddQueryParams("ownerId", Params.ownerId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsIdGet([[maybe_unused]] const objectsIdGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(Params.id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ObjectMessageApi::objectsIdPut([[maybe_unused]] const objectsIdPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(Params.id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ObjectMessageApi::objectsIdDelete([[maybe_unused]] const objectsIdDeleteParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/{id}").c_str(),
					  {std::to_string(Params.id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ObjectMessageApi::objectsIdPartial_updatePut([[maybe_unused]] const objectsIdPartial_updatePutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/objects/{id}/partial-update").c_str(),
		{std::to_string(Params.id).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : IPingApiBase(InWebClient)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet([[maybe_unused]] const pingGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopeLeaderApi::ScopeLeaderApi(csp::web::WebClient* InWebClient) : IScopeLeaderApiBase(InWebClient)
{
}

ScopeLeaderApi::~ScopeLeaderApi()
{
}



void ScopeLeaderApi::scopesScopeIdLeaderGet([[maybe_unused]] const scopesScopeIdLeaderGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes/{scopeId}/leader").c_str(),
		{Params.scopeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopeLeaderApi::scopesScopeIdLeader_electionPost([[maybe_unused]] const scopesScopeIdLeader_electionPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes/{scopeId}/leader-election")
			.c_str(),
		{Params.scopeId});


	if (Params.userIdsToExclude.has_value())
	{
		Uri.AddQueryParams("userIdsToExclude", Params.userIdsToExclude.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ScopesApi::ScopesApi(csp::web::WebClient* InWebClient) : IScopesApiBase(InWebClient)
{
}

ScopesApi::~ScopesApi()
{
}



void ScopesApi::scopesPost([[maybe_unused]] const scopesPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void ScopesApi::scopesPut([[maybe_unused]] const scopesPutParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ScopesApi::scopesGet([[maybe_unused]] const scopesGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes").c_str(), {});


	if (Params.Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Params.Ids.value());
	}


	if (Params.ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", Params.ReferenceIds.value());
	}


	if (Params.ReferenceType.has_value())
	{
		Uri.AddQueryParams("ReferenceType", Params.ReferenceType.value());
	}


	if (Params.PubSubModel.has_value())
	{
		Uri.AddQueryParams("PubSubModel", Params.PubSubModel.value());
	}


	if (Params.Names.has_value())
	{
		Uri.AddQueryParams("Names", Params.Names.value());
	}


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopesApi::scopesIdGet([[maybe_unused]] const scopesIdGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ScopesApi::scopesIdDelete([[maybe_unused]] const scopesIdDeleteParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void ScopesApi::scopesIdPut([[maybe_unused]] const scopesIdPutParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/scopes/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ScopesApi::scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGet(
	[[maybe_unused]] const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/scopes/referenceType/{referenceType}/referenceId/{referenceId}")
						  .c_str(),
					  {Params.referenceId, Params.referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ScopesApi::scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDelete(
	[[maybe_unused]] const scopesReferenceTypeReferenceTypeReferenceIdReferenceIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/scopes/referenceType/{referenceType}/referenceId/{referenceId}")
						  .c_str(),
					  {Params.referenceId, Params.referenceType});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



VersionsApi::VersionsApi(csp::web::WebClient* InWebClient) : IVersionsApiBase(InWebClient)
{
}

VersionsApi::~VersionsApi()
{
}



void VersionsApi::rsionsGet([[maybe_unused]] const rsionsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "rsions").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::multiplayerservice