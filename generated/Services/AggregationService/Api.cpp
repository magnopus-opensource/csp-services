

#include "Api.h"

#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::aggregationservice
{


AloMovesApi::AloMovesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IAloMovesApiBase(InWebClient, InServiceDefinition)
{
}

AloMovesApi::~AloMovesApi()
{
}



void AloMovesApi::aloHarmonizePost([[maybe_unused]] const aloHarmonizePostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/harmonize").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloVersions_matrixPost([[maybe_unused]] const aloVersions_matrixPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/versions-matrix").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloUserIdClassesClassDefinitionIdCompletedPost([[maybe_unused]] const aloUserIdClassesClassDefinitionIdCompletedPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/alo/{userId}/classes/{classDefinitionId}/completed")
						  .c_str(),
					  {Params.userId, Params.classDefinitionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloQaUserIdBadge_expressionsPost([[maybe_unused]] const aloQaUserIdBadge_expressionsPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/{userId}/badge-expressions")
			.c_str(),
		{Params.userId});


	if (Params.classDefinitionId.has_value())
	{
		Uri.AddQueryParams("classDefinitionId", Params.classDefinitionId.value());
	}


	if (Params.expression.has_value())
	{
		Uri.AddQueryParams("expression", Params.expression.value());
	}


	if (Params.createFinalClass.has_value())
	{
		Uri.AddQueryParams("createFinalClass", Params.createFinalClass.value());
	}


	if (Params.deletePreviousData.has_value())
	{
		Uri.AddQueryParams("deletePreviousData", Params.deletePreviousData.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloUserIdClassesRecommendationsGet([[maybe_unused]] const aloUserIdClassesRecommendationsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/{userId}/classes/recommendations")
			.c_str(),
		{Params.userId});


	if (Params.Skip.has_value())
	{
		Uri.AddQueryParams("Skip", Params.Skip.value());
	}


	if (Params.Limit.has_value())
	{
		Uri.AddQueryParams("Limit", Params.Limit.value());
	}


	if (Params.isSeries.has_value())
	{
		Uri.AddQueryParams("isSeries", Params.isSeries.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloQaSyncClass_dataPut([[maybe_unused]] const aloQaSyncClass_dataPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/qa/sync/class-data").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AloMovesApi::aloClassesMost_visitedGet([[maybe_unused]] const aloClassesMost_visitedGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/alo/classes/most-visited").c_str(),
		{});


	if (Params.maxResults.has_value())
	{
		Uri.AddQueryParams("maxResults", Params.maxResults.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



AnalyticsApi::AnalyticsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IAnalyticsApiBase(InWebClient, InServiceDefinition)
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



AssignmentsApi::AssignmentsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IAssignmentsApiBase(InWebClient, InServiceDefinition)
{
}

AssignmentsApi::~AssignmentsApi()
{
}



void AssignmentsApi::productionrosterAssignmentsGet([[maybe_unused]] const productionrosterAssignmentsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments").c_str(),
		{});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.personId.has_value())
	{
		Uri.AddQueryParams("personId", Params.personId.value());
	}


	if (Params.projectId.has_value())
	{
		Uri.AddQueryParams("projectId", Params.projectId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AssignmentsApi::productionrosterAssignmentsPut([[maybe_unused]] const productionrosterAssignmentsPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssignmentsApi::productionrosterAssignmentsIdDelete([[maybe_unused]] const productionrosterAssignmentsIdDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AssignmentsApi::productionrosterAssignmentsBulkPost([[maybe_unused]] const productionrosterAssignmentsBulkPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/assignments/bulk")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



BillingCadenceDevApi::BillingCadenceDevApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IBillingCadenceDevApiBase(InWebClient, InServiceDefinition)
{
}

BillingCadenceDevApi::~BillingCadenceDevApi()
{
}



void BillingCadenceDevApi::billingDevCadence_triggerPost([[maybe_unused]] const billingDevCadence_triggerPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/billing/dev/cadence-trigger").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



CacheApi::CacheApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ICacheApiBase(InWebClient, InServiceDefinition)
{
}

CacheApi::~CacheApi()
{
}



void CacheApi::cache_keysGet([[maybe_unused]] const cache_keysGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
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


void CacheApi::cache_keysDelete([[maybe_unused]] const cache_keysDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/cache-keys").c_str(), {});


	if (Params.pattern.has_value())
	{
		Uri.AddQueryParams("pattern", Params.pattern.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



CoalescenceApi::CoalescenceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ICoalescenceApiBase(InWebClient, InServiceDefinition)
{
}

CoalescenceApi::~CoalescenceApi()
{
}



void CoalescenceApi::coalescenceIdPost([[maybe_unused]] const coalescenceIdPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/coalescence/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigApi::ConfigApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IConfigApiBase(InWebClient, InServiceDefinition)
{
}

ConfigApi::~ConfigApi()
{
}



void ConfigApi::productionrosterConfigGet([[maybe_unused]] const productionrosterConfigGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigApi::productionrosterConfigGroupPost([[maybe_unused]] const productionrosterConfigGroupPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config/group").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigApi::productionrosterConfigGroupGroupIdPut([[maybe_unused]] const productionrosterConfigGroupGroupIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/config/group/{groupId}")
			.c_str(),
		{Params.groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IConfigurationApiBase(InWebClient, InServiceDefinition)
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



DaigramsApi::DaigramsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IDaigramsApiBase(InWebClient, InServiceDefinition)
{
}

DaigramsApi::~DaigramsApi()
{
}



void DaigramsApi::daigramsPost([[maybe_unused]] const daigramsPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsGet([[maybe_unused]] const daigramsGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void DaigramsApi::daigramsIdGet([[maybe_unused]] const daigramsIdGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsIdPut([[maybe_unused]] const daigramsIdPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void DaigramsApi::daigramsIdDelete([[maybe_unused]] const daigramsIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}").c_str(),
					  {Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void DaigramsApi::daigramsIdThumbnailPut([[maybe_unused]] const daigramsIdThumbnailPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/daigrams/{id}/thumbnail").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



DepartmentsApi::DepartmentsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IDepartmentsApiBase(InWebClient, InServiceDefinition)
{
}

DepartmentsApi::~DepartmentsApi()
{
}



void DepartmentsApi::productionrosterDepartmentsGet([[maybe_unused]] const productionrosterDepartmentsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void DepartmentsApi::productionrosterDepartmentsPost([[maybe_unused]] const productionrosterDepartmentsPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void DepartmentsApi::productionrosterDepartmentsIdPut([[maybe_unused]] const productionrosterDepartmentsIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void DepartmentsApi::productionrosterDepartmentsIdDelete([[maybe_unused]] const productionrosterDepartmentsIdDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/departments/{id}")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



EffortResourcesApi::EffortResourcesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IEffortResourcesApiBase(InWebClient, InServiceDefinition)
{
}

EffortResourcesApi::~EffortResourcesApi()
{
}



void EffortResourcesApi::watchtowerEffortBulk_upsertPost([[maybe_unused]] const watchtowerEffortBulk_upsertPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-upsert").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortBulk_removePost([[maybe_unused]] const watchtowerEffortBulk_removePostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-remove").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortBulk_getPost([[maybe_unused]] const watchtowerEffortBulk_getPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/bulk-get").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void EffortResourcesApi::watchtowerEffortSearchPost([[maybe_unused]] const watchtowerEffortSearchPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/effort/search").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



ExternalServiceProxyApi::ExternalServiceProxyApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IExternalServiceProxyApiBase(InWebClient, InServiceDefinition)
{
}

ExternalServiceProxyApi::~ExternalServiceProxyApi()
{
}



void ExternalServiceProxyApi::service_proxyPost([[maybe_unused]] const service_proxyPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/service-proxy").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



GroupRolesApi::GroupRolesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IGroupRolesApiBase(InWebClient, InServiceDefinition)
{
}

GroupRolesApi::~GroupRolesApi()
{
}



void GroupRolesApi::usersUserIdGroupsGroupIdRolesPut([[maybe_unused]] const usersUserIdGroupsGroupIdRolesPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/groups/{groupId}/roles")
			.c_str(),
		{Params.userId, Params.groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorApi::InspectorApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorApiBase(InWebClient, InServiceDefinition)
{
}

InspectorApi::~InspectorApi()
{
}



void InspectorApi::inspectorExecutionsGet([[maybe_unused]] const inspectorExecutionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions").c_str(),
		{});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.graphHash.has_value())
	{
		Uri.AddQueryParams("graphHash", Params.graphHash.value());
	}


	if (Params.graphName.has_value())
	{
		Uri.AddQueryParams("graphName", Params.graphName.value());
	}


	if (Params.createdAfter.has_value())
	{
		Uri.AddQueryParams("createdAfter", Params.createdAfter.value());
	}


	if (Params.createdBefore.has_value())
	{
		Uri.AddQueryParams("createdBefore", Params.createdBefore.value());
	}


	if (Params.minDurationMs.has_value())
	{
		Uri.AddQueryParams("minDurationMs", Params.minDurationMs.value());
	}


	if (Params.maxDurationMs.has_value())
	{
		Uri.AddQueryParams("maxDurationMs", Params.maxDurationMs.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsFailed_nodesCsvGet([[maybe_unused]] const inspectorExecutionsFailed_nodesCsvGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/failed-nodes.csv")
			.c_str(),
		{});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.graphHash.has_value())
	{
		Uri.AddQueryParams("graphHash", Params.graphHash.value());
	}


	if (Params.graphName.has_value())
	{
		Uri.AddQueryParams("graphName", Params.graphName.value());
	}


	if (Params.createdAfter.has_value())
	{
		Uri.AddQueryParams("createdAfter", Params.createdAfter.value());
	}


	if (Params.createdBefore.has_value())
	{
		Uri.AddQueryParams("createdBefore", Params.createdBefore.value());
	}


	if (Params.minDurationMs.has_value())
	{
		Uri.AddQueryParams("minDurationMs", Params.minDurationMs.value());
	}


	if (Params.maxDurationMs.has_value())
	{
		Uri.AddQueryParams("maxDurationMs", Params.maxDurationMs.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.uiBaseUrl.has_value())
	{
		Uri.AddQueryParams("uiBaseUrl", Params.uiBaseUrl.value());
	}


	if (Params.maxExecutions.has_value())
	{
		Uri.AddQueryParams("maxExecutions", Params.maxExecutions.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdGet([[maybe_unused]] const inspectorExecutionsExecutionIdGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/{executionId}")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdStateGet([[maybe_unused]] const inspectorExecutionsExecutionIdStateGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/executions/{executionId}/state")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdGraphGet([[maybe_unused]] const inspectorExecutionsExecutionIdGraphGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/executions/{executionId}/graph")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsExecutionIdLogsGet([[maybe_unused]] const inspectorExecutionsExecutionIdLogsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/{executionId}/logs")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorStatsGet([[maybe_unused]] const inspectorStatsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/stats").c_str(),
					  {});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.sinceDays.has_value())
	{
		Uri.AddQueryParams("sinceDays", Params.sinceDays.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorExecutionsRunningGet([[maybe_unused]] const inspectorExecutionsRunningGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/running").c_str(),
		{});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorObserveExecutionIdPost([[maybe_unused]] const inspectorObserveExecutionIdPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/observe/{executionId}")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthGet([[maybe_unused]] const inspectorQueue_healthGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/queue-health").c_str(),
		{});


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqPurgePost([[maybe_unused]] const inspectorQueue_healthQueueNameDlqPurgePostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/purge")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedrivePost([[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedrivePostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedrive_tasksGet(
	[[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive-tasks")
						  .c_str(),
					  {Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPost(
	[[maybe_unused]] const inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-health/{queueName}/dlq/redrive/{taskHandle}/cancel")
						  .c_str(),
					  {Params.queueName, Params.taskHandle});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosQueueNameActivatePost([[maybe_unused]] const inspectorChaosQueueNameActivatePostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos/{queueName}/activate")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosQueueNameDeactivatePost([[maybe_unused]] const inspectorChaosQueueNameDeactivatePostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos/{queueName}/deactivate")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorChaosGet([[maybe_unused]] const inspectorChaosGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/chaos").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageExecutions_per_dayGet([[maybe_unused]] const inspectorUsageExecutions_per_dayGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/executions-per-day")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageQueues_per_dayGet([[maybe_unused]] const inspectorUsageQueues_per_dayGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/queues-per-day").c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageNode_types_per_dayGet([[maybe_unused]] const inspectorUsageNode_types_per_dayGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/node-types-per-day")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageKey_usage_per_dayGet([[maybe_unused]] const inspectorUsageKey_usage_per_dayGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/key-usage-per-day")
			.c_str(),
		{});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageTop_users_per_keyGet([[maybe_unused]] const inspectorUsageTop_users_per_keyGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/top-users-per-key")
			.c_str(),
		{});


	if (Params.secretKey.has_value())
	{
		Uri.AddQueryParams("secretKey", Params.secretKey.value());
	}


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.topN.has_value())
	{
		Uri.AddQueryParams("topN", Params.topN.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageNode_type_keysGet([[maybe_unused]] const inspectorUsageNode_type_keysGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/node-type-keys").c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageProcessing_timeGet([[maybe_unused]] const inspectorUsageProcessing_timeGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/processing-time")
			.c_str(),
		{});


	if (Params.groupBy.has_value())
	{
		Uri.AddQueryParams("groupBy", Params.groupBy.value());
	}


	if (Params.metric.has_value())
	{
		Uri.AddQueryParams("metric", Params.metric.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageQueue_wait_summaryGet([[maybe_unused]] const inspectorUsageQueue_wait_summaryGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/queue-wait-summary")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageUser_sparklinesGet([[maybe_unused]] const inspectorUsageUser_sparklinesGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage/user-sparklines")
			.c_str(),
		{});


	if (Params.userIds.has_value())
	{
		Uri.AddQueryParams("userIds", Params.userIds.value());
	}


	if (Params.days.has_value())
	{
		Uri.AddQueryParams("days", Params.days.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageSustained_activity_per_dayGet([[maybe_unused]] const inspectorUsageSustained_activity_per_dayGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/usage/sustained-activity-per-day")
						  .c_str(),
					  {});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tz.has_value())
	{
		Uri.AddQueryParams("tz", Params.tz.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorUsageTenant_activity_sparklinesGet([[maybe_unused]] const inspectorUsageTenant_activity_sparklinesGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/usage/tenant-activity-sparklines")
						  .c_str(),
					  {});


	if (Params.tenantNames.has_value())
	{
		Uri.AddQueryParams("tenantNames", Params.tenantNames.value());
	}


	if (Params.days.has_value())
	{
		Uri.AddQueryParams("days", Params.days.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorValidate_gacPost([[maybe_unused]] const inspectorValidate_gacPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/validate-gac").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSave_validated_gacPost([[maybe_unused]] const inspectorSave_validated_gacPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/save-validated-gac").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorGac_validation_metadataGet([[maybe_unused]] const inspectorGac_validation_metadataGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/gac-validation-metadata")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorValidate_secretPost([[maybe_unused]] const inspectorValidate_secretPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/validate-secret").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSave_validated_secretPost([[maybe_unused]] const inspectorSave_validated_secretPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/save-validated-secret")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSecret_validation_metadataGet([[maybe_unused]] const inspectorSecret_validation_metadataGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/secret-validation-metadata")
			.c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorPlus_addressingAllowed_providersGet([[maybe_unused]] const inspectorPlus_addressingAllowed_providersGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/plus-addressing/allowed-providers")
						  .c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorMigration_statusGet([[maybe_unused]] const inspectorMigration_statusGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/migration-status").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorTenant_hostnamesGet([[maybe_unused]] const inspectorTenant_hostnamesGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/tenant-hostnames").c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSecret_definitionsApplicationNamePost([[maybe_unused]] const inspectorSecret_definitionsApplicationNamePostParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/secret-definitions/{applicationName}")
						  .c_str(),
					  {Params.applicationName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorApi::inspectorSecret_definitionsApplicationNameEnvVarNamePut(
	[[maybe_unused]] const inspectorSecret_definitionsApplicationNameEnvVarNamePutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/secret-definitions/{applicationName}/{envVarName}")
						  .c_str(),
					  {Params.applicationName, Params.envVarName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorAuditTrailApi::InspectorAuditTrailApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorAuditTrailApiBase(InWebClient, InServiceDefinition)
{
}

InspectorAuditTrailApi::~InspectorAuditTrailApi()
{
}



void InspectorAuditTrailApi::inspectorAudit_trailGet([[maybe_unused]] const inspectorAudit_trailGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/audit-trail").c_str(),
		{});


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.eventType.has_value())
	{
		Uri.AddQueryParams("eventType", Params.eventType.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.userEmail.has_value())
	{
		Uri.AddQueryParams("userEmail", Params.userEmail.value());
	}


	if (Params.controller.has_value())
	{
		Uri.AddQueryParams("controller", Params.controller.value());
	}


	if (Params.action.has_value())
	{
		Uri.AddQueryParams("action", Params.action.value());
	}


	if (Params.ipAddress.has_value())
	{
		Uri.AddQueryParams("ipAddress", Params.ipAddress.value());
	}


	if (Params.statusCode.has_value())
	{
		Uri.AddQueryParams("statusCode", Params.statusCode.value());
	}


	if (Params.tags.has_value())
	{
		Uri.AddQueryParams("tags", Params.tags.value());
	}


	if (Params.tagsAll.has_value())
	{
		Uri.AddQueryParams("tagsAll", Params.tagsAll.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.sortBy.has_value())
	{
		Uri.AddQueryParams("sortBy", Params.sortBy.value());
	}


	if (Params.sortDirection.has_value())
	{
		Uri.AddQueryParams("sortDirection", Params.sortDirection.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorAuditTrailApi::inspectorAudit_trailFilter_optionsGet([[maybe_unused]] const inspectorAudit_trailFilter_optionsGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/audit-trail/filter-options")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorBackfillApi::InspectorBackfillApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorBackfillApiBase(InWebClient, InServiceDefinition)
{
}

InspectorBackfillApi::~InspectorBackfillApi()
{
}



void InspectorBackfillApi::inspectorBackfillExecutionsPost([[maybe_unused]] const inspectorBackfillExecutionsPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/backfill/executions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBackfillApi::inspectorBackfillExecutionsExecutionIdGet([[maybe_unused]] const inspectorBackfillExecutionsExecutionIdGetParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/backfill/executions/{executionId}")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorBackfillApi::inspectorBackfillExecutionsExecutionIdDelete(
	[[maybe_unused]] const inspectorBackfillExecutionsExecutionIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/backfill/executions/{executionId}")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorBugReportApi::InspectorBugReportApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorBugReportApiBase(InWebClient, InServiceDefinition)
{
}

InspectorBugReportApi::~InspectorBugReportApi()
{
}



void InspectorBugReportApi::inspectorBug_reportsPost([[maybe_unused]] const inspectorBug_reportsPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorBugReportApi::inspectorBug_reportsGet([[maybe_unused]] const inspectorBug_reportsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports").c_str(),
		{});


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.assignedTo.has_value())
	{
		Uri.AddQueryParams("assignedTo", Params.assignedTo.value());
	}


	if (Params.unassigned.has_value())
	{
		Uri.AddQueryParams("unassigned", Params.unassigned.value());
	}


	if (Params.type.has_value())
	{
		Uri.AddQueryParams("type", Params.type.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdGet([[maybe_unused]] const inspectorBug_reportsIdGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdStatusPatch([[maybe_unused]] const inspectorBug_reportsIdStatusPatchParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/status")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdAssignmentPatch([[maybe_unused]] const inspectorBug_reportsIdAssignmentPatchParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/assignment")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorBugReportApi::inspectorBug_reportsIdScreenshotGet([[maybe_unused]] const inspectorBug_reportsIdScreenshotGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/bug-reports/{id}/screenshot")
			.c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorExecutionsApi::InspectorExecutionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorExecutionsApiBase(InWebClient, InServiceDefinition)
{
}

InspectorExecutionsApi::~InspectorExecutionsApi()
{
}



void InspectorExecutionsApi::inspectorExecutionsSelf_reportPost([[maybe_unused]] const inspectorExecutionsSelf_reportPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/executions/self-report")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorMarketplaceApi::InspectorMarketplaceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorMarketplaceApiBase(InWebClient, InServiceDefinition)
{
}

InspectorMarketplaceApi::~InspectorMarketplaceApi()
{
}



void InspectorMarketplaceApi::inspectorMarketplaceCustomersGet([[maybe_unused]] const inspectorMarketplaceCustomersGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/marketplace/customers")
			.c_str(),
		{});


	if (Params.state.has_value())
	{
		Uri.AddQueryParams("state", Params.state.value());
	}


	if (Params.entitlementState.has_value())
	{
		Uri.AddQueryParams("entitlementState", Params.entitlementState.value());
	}


	if (Params.billingAccountId.has_value())
	{
		Uri.AddQueryParams("billingAccountId", Params.billingAccountId.value());
	}


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorMarketplaceApi::inspectorMarketplaceCustomersCustomerIdGet(
	[[maybe_unused]] const inspectorMarketplaceCustomersCustomerIdGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/marketplace/customers/{customerId}")
						  .c_str(),
					  {Params.customerId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorMarketplaceApi::inspectorMarketplaceStatsGet([[maybe_unused]] const inspectorMarketplaceStatsGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/marketplace/stats").c_str(),
		{});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.timezone.has_value())
	{
		Uri.AddQueryParams("timezone", Params.timezone.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorNodeDefinitionApi::InspectorNodeDefinitionApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorNodeDefinitionApiBase(InWebClient, InServiceDefinition)
{
}

InspectorNodeDefinitionApi::~InspectorNodeDefinitionApi()
{
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsGet([[maybe_unused]] const inspectorNode_definitionsGetParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions").c_str(),
		{});


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.category.has_value())
	{
		Uri.AddQueryParams("category", Params.category.value());
	}


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.runtimeId.has_value())
	{
		Uri.AddQueryParams("runtimeId", Params.runtimeId.value());
	}


	if (Params.provider.has_value())
	{
		Uri.AddQueryParams("provider", Params.provider.value());
	}


	if (Params.tag.has_value())
	{
		Uri.AddQueryParams("tag", Params.tag.value());
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


void InspectorNodeDefinitionApi::inspectorNode_definitionsPost([[maybe_unused]] const inspectorNode_definitionsPostParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdGet([[maybe_unused]] const inspectorNode_definitionsNodeTypeIdGetParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions/{nodeTypeId}")
			.c_str(),
		{Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdPut([[maybe_unused]] const inspectorNode_definitionsNodeTypeIdPutParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/node-definitions/{nodeTypeId}")
			.c_str(),
		{Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdStatusPatch(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdStatusPatchParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/status")
						  .c_str(),
					  {Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PATCH, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdHistoryGet(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdHistoryGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/history")
						  .c_str(),
					  {Params.nodeTypeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdHistoryVerGet(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdHistoryVerGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/history/{ver}")
						  .c_str(),
					  {Params.nodeTypeId, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorNodeDefinitionApi::inspectorNode_definitionsNodeTypeIdRestoreVerPost(
	[[maybe_unused]] const inspectorNode_definitionsNodeTypeIdRestoreVerPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/node-definitions/{nodeTypeId}/restore/{ver}")
						  .c_str(),
					  {Params.nodeTypeId, std::to_string(Params.ver).c_str()});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorOrganizationApi::InspectorOrganizationApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorOrganizationApiBase(InWebClient, InServiceDefinition)
{
}

InspectorOrganizationApi::~InspectorOrganizationApi()
{
}



void InspectorOrganizationApi::inspectorOrganizationsGet([[maybe_unused]] const inspectorOrganizationsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/organizations").c_str(),
		{});


	if (Params.search.has_value())
	{
		Uri.AddQueryParams("search", Params.search.value());
	}


	if (Params.modifiedSince.has_value())
	{
		Uri.AddQueryParams("modifiedSince", Params.modifiedSince.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorOrganizationApi::inspectorOrganizationsPost([[maybe_unused]] const inspectorOrganizationsPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/organizations").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdGet([[maybe_unused]] const inspectorOrganizationsOrganizationIdGetParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdPut([[maybe_unused]] const inspectorOrganizationsOrganizationIdPutParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdTenantsPost(
	[[maybe_unused]] const inspectorOrganizationsOrganizationIdTenantsPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}/tenants")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdTenantsTenantNameDelete(
	[[maybe_unused]] const inspectorOrganizationsOrganizationIdTenantsTenantNameDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}/tenants/{tenantName}")
						  .c_str(),
					  {Params.organizationId, Params.tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdAdministrative_tenantPut(
	[[maybe_unused]] const inspectorOrganizationsOrganizationIdAdministrative_tenantPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}/administrative-tenant")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorOrganizationApi::inspectorOrganizationsOrganizationIdOwnerPut(
	[[maybe_unused]] const inspectorOrganizationsOrganizationIdOwnerPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/organizations/{organizationId}/owner")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorQueueOverrideApi::InspectorQueueOverrideApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorQueueOverrideApiBase(InWebClient, InServiceDefinition)
{
}

InspectorQueueOverrideApi::~InspectorQueueOverrideApi()
{
}



void InspectorQueueOverrideApi::inspectorQueue_overridesGet([[maybe_unused]] const inspectorQueue_overridesGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/queue-overrides").c_str(),
		{});


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorQueueOverrideApi::inspectorQueue_overridesPost([[maybe_unused]] const inspectorQueue_overridesPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/queue-overrides").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void InspectorQueueOverrideApi::inspectorQueue_overridesDelete([[maybe_unused]] const inspectorQueue_overridesDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/queue-overrides").c_str(),
		{});


	if (Params.nodeTypeId.has_value())
	{
		Uri.AddQueryParams("nodeTypeId", Params.nodeTypeId.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorQueueOverrideApi::inspectorQueue_overridesCandidate_nodesGet(
	[[maybe_unused]] const inspectorQueue_overridesCandidate_nodesGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/queue-overrides/candidate-nodes")
						  .c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorUsageLedgerApi::InspectorUsageLedgerApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorUsageLedgerApiBase(InWebClient, InServiceDefinition)
{
}

InspectorUsageLedgerApi::~InspectorUsageLedgerApi()
{
}



void InspectorUsageLedgerApi::inspectorUsage_ledgerRowsGet([[maybe_unused]] const inspectorUsage_ledgerRowsGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-ledger/rows").c_str(),
		{});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.source.has_value())
	{
		Uri.AddQueryParams("source", Params.source.value());
	}


	if (Params.targetMetric.has_value())
	{
		Uri.AddQueryParams("targetMetric", Params.targetMetric.value());
	}


	if (Params.metricBaseType.has_value())
	{
		Uri.AddQueryParams("metricBaseType", Params.metricBaseType.value());
	}


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.tier.has_value())
	{
		Uri.AddQueryParams("tier", Params.tier.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorUsageLedgerApi::inspectorUsage_ledgerTotalsGet([[maybe_unused]] const inspectorUsage_ledgerTotalsGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-ledger/totals").c_str(),
		{});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.tenantName.has_value())
	{
		Uri.AddQueryParams("tenantName", Params.tenantName.value());
	}


	if (Params.source.has_value())
	{
		Uri.AddQueryParams("source", Params.source.value());
	}


	if (Params.targetMetric.has_value())
	{
		Uri.AddQueryParams("targetMetric", Params.targetMetric.value());
	}


	if (Params.metricBaseType.has_value())
	{
		Uri.AddQueryParams("metricBaseType", Params.metricBaseType.value());
	}


	if (Params.status.has_value())
	{
		Uri.AddQueryParams("status", Params.status.value());
	}


	if (Params.tier.has_value())
	{
		Uri.AddQueryParams("tier", Params.tier.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorUsageReportingApi::InspectorUsageReportingApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorUsageReportingApiBase(InWebClient, InServiceDefinition)
{
}

InspectorUsageReportingApi::~InspectorUsageReportingApi()
{
}



void InspectorUsageReportingApi::inspectorUsage_reportingDry_runGet([[maybe_unused]] const inspectorUsage_reportingDry_runGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-reporting/dry-run")
			.c_str(),
		{});


	if (Params.start.has_value())
	{
		Uri.AddQueryParams("start", Params.start.value());
	}


	if (Params.end.has_value())
	{
		Uri.AddQueryParams("end", Params.end.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorUsageReportingApi::inspectorUsage_reportingRunsGet([[maybe_unused]] const inspectorUsage_reportingRunsGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-reporting/runs").c_str(),
		{});


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorUsageReportingApi::inspectorUsage_reportingRunsRunIdGet([[maybe_unused]] const inspectorUsage_reportingRunsRunIdGetParams& Params,
																	  csp::services::ApiResponseHandlerBase* ResponseHandler,
																	  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-reporting/runs/{runId}")
			.c_str(),
		{Params.runId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorUsageReportingApi::inspectorUsage_reportingTenantsTenantNameBatchesGet(
	[[maybe_unused]] const inspectorUsage_reportingTenantsTenantNameBatchesGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/inspector/usage-reporting/tenants/{tenantName}/batches")
						  .c_str(),
					  {Params.tenantName});


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}


	if (Params.state.has_value())
	{
		Uri.AddQueryParams("state", Params.state.value());
	}


	if (Params.skip.has_value())
	{
		Uri.AddQueryParams("skip", Params.skip.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InspectorUsageReportingApi::inspectorUsage_reportingBackfillPost([[maybe_unused]] const inspectorUsage_reportingBackfillPostParams& Params,
																	  csp::services::ApiResponseHandlerBase* ResponseHandler,
																	  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/usage-reporting/backfill")
			.c_str(),
		{});


	if (Params.start.has_value())
	{
		Uri.AddQueryParams("start", Params.start.value());
	}


	if (Params.end.has_value())
	{
		Uri.AddQueryParams("end", Params.end.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



InspectorWorkerRuntimeApi::InspectorWorkerRuntimeApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IInspectorWorkerRuntimeApiBase(InWebClient, InServiceDefinition)
{
}

InspectorWorkerRuntimeApi::~InspectorWorkerRuntimeApi()
{
}



void InspectorWorkerRuntimeApi::inspectorWorker_runtimesGet([[maybe_unused]] const inspectorWorker_runtimesGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/inspector/worker-runtimes").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



JiraResourcesApi::JiraResourcesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IJiraResourcesApiBase(InWebClient, InServiceDefinition)
{
}

JiraResourcesApi::~JiraResourcesApi()
{
}



void JiraResourcesApi::watchtowerJiraBulk_upsertPost([[maybe_unused]] const watchtowerJiraBulk_upsertPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/bulk-upsert").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraBulk_getPost([[maybe_unused]] const watchtowerJiraBulk_getPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/bulk-get").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraSearchPost([[maybe_unused]] const watchtowerJiraSearchPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/search").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraCreatemetaProjectGet([[maybe_unused]] const watchtowerJiraCreatemetaProjectGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/createmeta/{project}")
			.c_str(),
		{Params.project});


	if (Params.family.has_value())
	{
		Uri.AddQueryParams("family", Params.family.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraCreatemetaUpsertPost([[maybe_unused]] const watchtowerJiraCreatemetaUpsertPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/createmeta/upsert")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraReferenceProjectKindGet([[maybe_unused]] const watchtowerJiraReferenceProjectKindGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/watchtower/jira/reference/{project}/{kind}")
						  .c_str(),
					  {Params.project, Params.kind});


	if (Params.family.has_value())
	{
		Uri.AddQueryParams("family", Params.family.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void JiraResourcesApi::watchtowerJiraReferenceUpsertPost([[maybe_unused]] const watchtowerJiraReferenceUpsertPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/watchtower/jira/reference/upsert")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



MarketplaceApi::MarketplaceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IMarketplaceApiBase(InWebClient, InServiceDefinition)
{
}

MarketplaceApi::~MarketplaceApi()
{
}



void MarketplaceApi::marketplaceSignupGet([[maybe_unused]] const marketplaceSignupGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/signup").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void MarketplaceApi::marketplaceSignupPost([[maybe_unused]] const marketplaceSignupPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/signup").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceOnboardingDetailsPost([[maybe_unused]] const marketplaceOnboardingDetailsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/onboarding/details").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceOnboardingAvailabilityGet([[maybe_unused]] const marketplaceOnboardingAvailabilityGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/onboarding/availability")
			.c_str(),
		{});


	if (Params.company.has_value())
	{
		Uri.AddQueryParams("company", Params.company.value());
	}


	if (Params.project.has_value())
	{
		Uri.AddQueryParams("project", Params.project.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceOnboardingCallbackPost([[maybe_unused]] const marketplaceOnboardingCallbackPostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/onboarding/callback")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceProvisioningPreparePost([[maybe_unused]] const marketplaceProvisioningPreparePostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/provisioning/prepare")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceProvisioningPost([[maybe_unused]] const marketplaceProvisioningPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/provisioning").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceOnboardingStateGet([[maybe_unused]] const marketplaceOnboardingStateGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/onboarding/state").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceApi::marketplaceAppsGet([[maybe_unused]] const marketplaceAppsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/apps").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



MarketplaceAdminApi::MarketplaceAdminApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IMarketplaceAdminApiBase(InWebClient, InServiceDefinition)
{
}

MarketplaceAdminApi::~MarketplaceAdminApi()
{
}



void MarketplaceAdminApi::marketplaceAdminProcurement_checkGet([[maybe_unused]] const marketplaceAdminProcurement_checkGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/admin/procurement-check")
			.c_str(),
		{});


	if (Params.includeMatches.has_value())
	{
		Uri.AddQueryParams("includeMatches", Params.includeMatches.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminAccountsAccountIdProcurement_checkGet(
	[[maybe_unused]] const marketplaceAdminAccountsAccountIdProcurement_checkGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/accounts/{accountId}/procurement-check")
						  .c_str(),
					  {Params.accountId});


	if (Params.includeMatches.has_value())
	{
		Uri.AddQueryParams("includeMatches", Params.includeMatches.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminOrganizationsBackfillPost([[maybe_unused]] const marketplaceAdminOrganizationsBackfillPostParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/organizations/backfill")
						  .c_str(),
					  {});


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminBootstrapPost([[maybe_unused]] const marketplaceAdminBootstrapPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/admin/bootstrap").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminBootstrap_fullPost([[maybe_unused]] const marketplaceAdminBootstrap_fullPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/admin/bootstrap-full")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminInsert_entitlementPost([[maybe_unused]] const marketplaceAdminInsert_entitlementPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/admin/insert-entitlement")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminCustomerCustomerIdDelete([[maybe_unused]] const marketplaceAdminCustomerCustomerIdDeleteParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/marketplace/admin/customer/{customerId}")
			.c_str(),
		{Params.customerId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminAccountsAccountIdResetPost([[maybe_unused]] const marketplaceAdminAccountsAccountIdResetPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/accounts/{accountId}/reset")
						  .c_str(),
					  {Params.accountId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminAccountsAccountIdReset_and_delete_tenantPost(
	[[maybe_unused]] const marketplaceAdminAccountsAccountIdReset_and_delete_tenantPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/accounts/{accountId}/reset-and-delete-tenant")
						  .c_str(),
					  {Params.accountId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminCustomerCustomerIdLockPost([[maybe_unused]] const marketplaceAdminCustomerCustomerIdLockPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/customer/{customerId}/lock")
						  .c_str(),
					  {Params.customerId});


	if (Params.reason.has_value())
	{
		Uri.AddQueryParams("reason", Params.reason.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminCustomerCustomerIdUnlockPost(
	[[maybe_unused]] const marketplaceAdminCustomerCustomerIdUnlockPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/customer/{customerId}/unlock")
						  .c_str(),
					  {Params.customerId});


	if (Params.reason.has_value())
	{
		Uri.AddQueryParams("reason", Params.reason.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminAccountsAccountIdRejectPost(
	[[maybe_unused]] const marketplaceAdminAccountsAccountIdRejectPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/accounts/{accountId}/reject")
						  .c_str(),
					  {Params.accountId});


	if (Params.reason.has_value())
	{
		Uri.AddQueryParams("reason", Params.reason.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MarketplaceAdminApi::marketplaceAdminTenantsTenantNameHostnamesHostnameDelete(
	[[maybe_unused]] const marketplaceAdminTenantsTenantNameHostnamesHostnameDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/marketplace/admin/tenants/{tenantName}/hostnames/{hostname}")
						  .c_str(),
					  {Params.tenantName, Params.hostname});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



McpStateApi::McpStateApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IMcpStateApiBase(InWebClient, InServiceDefinition)
{
}

McpStateApi::~McpStateApi()
{
}



void McpStateApi::mcp_oauthStateCollectionKeyGet([[maybe_unused]] const mcp_oauthStateCollectionKeyGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/mcp-oauth/state/{collection}/{key}")
			.c_str(),
		{Params.collection, Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void McpStateApi::mcp_oauthStateCollectionKeyPut([[maybe_unused]] const mcp_oauthStateCollectionKeyPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/mcp-oauth/state/{collection}/{key}")
			.c_str(),
		{Params.collection, Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void McpStateApi::mcp_oauthStateCollectionKeyDelete([[maybe_unused]] const mcp_oauthStateCollectionKeyDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/mcp-oauth/state/{collection}/{key}")
			.c_str(),
		{Params.collection, Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



MusubiGraphApi::MusubiGraphApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IMusubiGraphApiBase(InWebClient, InServiceDefinition)
{
}

MusubiGraphApi::~MusubiGraphApi()
{
}



void MusubiGraphApi::musubiExecute_graphPost([[maybe_unused]] const musubiExecute_graphPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/musubi/execute-graph").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdStatusGet([[maybe_unused]] const musubiExecute_graphExecutionIdStatusGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/status")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void MusubiGraphApi::musubiExecute_graphExecutionIdStatusPost([[maybe_unused]] const musubiExecute_graphExecutionIdStatusPostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/status")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdGraph_resultGet([[maybe_unused]] const musubiExecute_graphExecutionIdGraph_resultGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/graph-result")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdNode_inputNodeIdGet(
	[[maybe_unused]] const musubiExecute_graphExecutionIdNode_inputNodeIdGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/node-input/{nodeId}")
						  .c_str(),
					  {Params.executionId, Params.nodeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdGraphGet([[maybe_unused]] const musubiExecute_graphExecutionIdGraphGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/graph")
						  .c_str(),
					  {Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdNode_completeNodeIdPost(
	[[maybe_unused]] const musubiExecute_graphExecutionIdNode_completeNodeIdPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/node-complete/{nodeId}")
						  .c_str(),
					  {Params.executionId, Params.nodeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdNode_errorNodeIdPost(
	[[maybe_unused]] const musubiExecute_graphExecutionIdNode_errorNodeIdPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/musubi/execute-graph/{executionId}/node-error/{nodeId}")
						  .c_str(),
					  {Params.executionId, Params.nodeId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiExecute_graphExecutionIdLogsPost([[maybe_unused]] const musubiExecute_graphExecutionIdLogsPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/musubi/execute-graph/{executionId}/logs")
			.c_str(),
		{Params.executionId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void MusubiGraphApi::musubiChaosQueueNameActiveGet([[maybe_unused]] const musubiChaosQueueNameActiveGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/musubi/chaos/{queueName}/active")
			.c_str(),
		{Params.queueName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



MyOrganizationApi::MyOrganizationApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IMyOrganizationApiBase(InWebClient, InServiceDefinition)
{
}

MyOrganizationApi::~MyOrganizationApi()
{
}



void MyOrganizationApi::my_organizationGet([[maybe_unused]] const my_organizationGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/my-organization").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void MyOrganizationApi::my_organizationPut([[maybe_unused]] const my_organizationPutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/my-organization").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



NodeDefinitionApi::NodeDefinitionApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: INodeDefinitionApiBase(InWebClient, InServiceDefinition)
{
}

NodeDefinitionApi::~NodeDefinitionApi()
{
}



void NodeDefinitionApi::node_definitionsFlatGet([[maybe_unused]] const node_definitionsFlatGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/node-definitions/flat").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void NodeDefinitionApi::node_definitionsNestedGet([[maybe_unused]] const node_definitionsNestedGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/node-definitions/nested").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition) : INtpApiBase(InWebClient, InServiceDefinition)
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



OrganizationTenantApi::OrganizationTenantApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IOrganizationTenantApiBase(InWebClient, InServiceDefinition)
{
}

OrganizationTenantApi::~OrganizationTenantApi()
{
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsSpin_upPost(
	[[maybe_unused]] const organizationsOrganizationIdTenantsSpin_upPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/spin-up")
						  .c_str(),
					  {Params.organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsCheck_addressGet(
	[[maybe_unused]] const organizationsOrganizationIdTenantsCheck_addressGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/check-address")
						  .c_str(),
					  {Params.organizationId});


	if (Params.projectUrlFragment.has_value())
	{
		Uri.AddQueryParams("projectUrlFragment", Params.projectUrlFragment.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsTenantIdPreparePost(
	[[maybe_unused]] const organizationsOrganizationIdTenantsTenantIdPreparePostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/{tenantId}/prepare")
						  .c_str(),
					  {Params.organizationId, Params.tenantId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsTenantIdProvisionPost(
	[[maybe_unused]] const organizationsOrganizationIdTenantsTenantIdProvisionPostParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/{tenantId}/provision")
						  .c_str(),
					  {Params.organizationId, Params.tenantId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsTenantIdStatusGet(
	[[maybe_unused]] const organizationsOrganizationIdTenantsTenantIdStatusGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/{tenantId}/status")
						  .c_str(),
					  {Params.organizationId, Params.tenantId});


	if (Params.includeHistory.has_value())
	{
		Uri.AddQueryParams("includeHistory", Params.includeHistory.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationTenantApi::organizationsOrganizationIdTenantsTenantIdDelete(
	[[maybe_unused]] const organizationsOrganizationIdTenantsTenantIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/tenants/{tenantId}")
						  .c_str(),
					  {Params.organizationId, Params.tenantId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PeopleApi::PeopleApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IPeopleApiBase(InWebClient, InServiceDefinition)
{
}

PeopleApi::~PeopleApi()
{
}



void PeopleApi::productionrosterPeopleGet([[maybe_unused]] const productionrosterPeopleGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void PeopleApi::productionrosterPeoplePost([[maybe_unused]] const productionrosterPeoplePostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void PeopleApi::productionrosterPeopleIdPut([[maybe_unused]] const productionrosterPeopleIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void PeopleApi::productionrosterPeopleIdDelete([[maybe_unused]] const productionrosterPeopleIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/people/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition) : IPingApiBase(InWebClient, InServiceDefinition)
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



ProjectsApi::ProjectsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IProjectsApiBase(InWebClient, InServiceDefinition)
{
}

ProjectsApi::~ProjectsApi()
{
}



void ProjectsApi::productionrosterProjectsGet([[maybe_unused]] const productionrosterProjectsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProjectsApi::productionrosterProjectsPost([[maybe_unused]] const productionrosterProjectsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProjectsApi::productionrosterProjectsIdPut([[maybe_unused]] const productionrosterProjectsIdPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProjectsApi::productionrosterProjectsIdDelete([[maybe_unused]] const productionrosterProjectsIdDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/projects/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SequenceApi::SequenceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISequenceApiBase(InWebClient, InServiceDefinition)
{
}

SequenceApi::~SequenceApi()
{
}



void SequenceApi::sequencesGet([[maybe_unused]] const sequencesGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(), {});


	if (Params.Keys.has_value())
	{
		Uri.AddQueryParams("Keys", Params.Keys.value());
	}


	if (Params.KeyLikeRegex.has_value())
	{
		Uri.AddQueryParams("KeyLikeRegex", Params.KeyLikeRegex.value());
	}


	if (Params.ReferenceType.has_value())
	{
		Uri.AddQueryParams("ReferenceType", Params.ReferenceType.value());
	}


	if (Params.ReferenceIds.has_value())
	{
		Uri.AddQueryParams("ReferenceIds", Params.ReferenceIds.value());
	}


	if (Params.Items.has_value())
	{
		Uri.AddQueryParams("Items", Params.Items.value());
	}


	if (Params.Metadata.has_value())
	{
		Uri.AddQueryParams("Metadata", Params.Metadata.value());
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


void SequenceApi::sequencesPut([[maybe_unused]] const sequencesPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences").c_str(), {});


	if (Params.newKey.has_value())
	{
		Uri.AddQueryParams("newKey", Params.newKey.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysKeyGet([[maybe_unused]] const sequencesKeysKeyGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
		{Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SequenceApi::sequencesKeysKeyDelete([[maybe_unused]] const sequencesKeysKeyDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{key}").c_str(),
		{Params.key});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysOldKeyKeyPut([[maybe_unused]] const sequencesKeysOldKeyKeyPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys/{oldKey}/key").c_str(),
		{Params.oldKey});


	Uri.AddQueryParams("newKey", Params.newKey);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesKeysDelete([[maybe_unused]] const sequencesKeysDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/sequences/keys").c_str(),
					  {});


	Uri.AddQueryParams("keys", Params.keys);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SequenceApi::sequencesReference_typeReferenceTypeReference_idReferenceIdDelete(
	[[maybe_unused]] const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/sequences/reference-type/{referenceType}/reference-id/{referenceId}")
						  .c_str(),
					  {Params.referenceType, Params.referenceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



ShopifyApi::ShopifyApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IShopifyApiBase(InWebClient, InServiceDefinition)
{
}

ShopifyApi::~ShopifyApi()
{
}



void ShopifyApi::spacesSpaceIdVendorsShopifyProductsProductIdGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyProductsProductIdGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/products/{productId}")
						  .c_str(),
					  {Params.spaceId, Params.productId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyProductsVariantsGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyProductsVariantsGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/products/variants")
						  .c_str(),
					  {Params.spaceId});


	if (Params.ids.has_value())
	{
		Uri.AddQueryParams("ids", Params.ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyPut([[maybe_unused]] const spacesSpaceIdVendorsShopifyPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify")
			.c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::vendorsShopifyValidatePut([[maybe_unused]] const vendorsShopifyValidatePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/shopify/validate").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::vendorsShopifyUsersUserIdStorefrontsGet([[maybe_unused]] const vendorsShopifyUsersUserIdStorefrontsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/vendors/shopify/users/{userId}/storefronts")
						  .c_str(),
					  {Params.userId});


	if (Params.active.has_value())
	{
		Uri.AddQueryParams("active", Params.active.value());
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



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsPost([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/vendors/shopify/carts")
			.c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdGet([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdPut([[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ShopifyApi::spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet(
	[[maybe_unused]] const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info")
						  .c_str(),
					  {Params.spaceId, Params.cartId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SnapshotApi::SnapshotApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISnapshotApiBase(InWebClient, InServiceDefinition)
{
}

SnapshotApi::~SnapshotApi()
{
}



void SnapshotApi::productionrosterSnapshotGet([[maybe_unused]] const productionrosterSnapshotGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/productionroster/snapshot").c_str(),
		{});


	if (Params.types.has_value())
	{
		Uri.AddQueryParams("types", Params.types.value());
	}


	if (Params.from.has_value())
	{
		Uri.AddQueryParams("from", Params.from.value());
	}


	if (Params.to.has_value())
	{
		Uri.AddQueryParams("to", Params.to.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



SpaceApi::SpaceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISpaceApiBase(InWebClient, InServiceDefinition)
{
}

SpaceApi::~SpaceApi()
{
}



void SpaceApi::spacesSpaceIdDelete([[maybe_unused]] const spacesSpaceIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}").c_str(),
					  {Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesDelete([[maybe_unused]] const spacesDeleteParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces").c_str(), {});


	if (Params.spaceIds.has_value())
	{
		Uri.AddQueryParams("spaceIds", Params.spaceIds.value());
	}


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdMultiplayer_objectsKmlGet([[maybe_unused]] const spacesSpaceIdMultiplayer_objectsKmlGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/multiplayer-objects/kml")
						  .c_str(),
					  {Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdDuplicatePost([[maybe_unused]] const spacesSpaceIdDuplicatePostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/duplicate").c_str(),
		{Params.spaceId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdExportPost([[maybe_unused]] const spacesSpaceIdExportPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/export").c_str(),
		{Params.spaceId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}


	if (Params.includeMusubi.has_value())
	{
		Uri.AddQueryParams("includeMusubi", Params.includeMusubi.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesExportsExportIdImportPost([[maybe_unused]] const spacesExportsExportIdImportPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/exports/{exportId}/import")
			.c_str(),
		{Params.exportId});


	if (Params.asyncCall.has_value())
	{
		Uri.AddQueryParams("asyncCall", Params.asyncCall.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdCheckpointsPost([[maybe_unused]] const spacesSpaceIdCheckpointsPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/checkpoints").c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdSnapshotPost([[maybe_unused]] const spacesSpaceIdSnapshotPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/snapshot").c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdSnapshotsGet([[maybe_unused]] const spacesSpaceIdSnapshotsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/snapshots").c_str(),
		{Params.spaceId});


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



void SpaceApi::spacesSnapshotsGet([[maybe_unused]] const spacesSnapshotsGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/snapshots").c_str(),
					  {});


	if (Params.SpaceId.has_value())
	{
		Uri.AddQueryParams("SpaceId", Params.SpaceId.value());
	}


	if (Params.ExportId.has_value())
	{
		Uri.AddQueryParams("ExportId", Params.ExportId.value());
	}


	if (Params.CoalescenceId.has_value())
	{
		Uri.AddQueryParams("CoalescenceId", Params.CoalescenceId.value());
	}


	if (Params.Status.has_value())
	{
		Uri.AddQueryParams("Status", Params.Status.value());
	}


	if (Params.CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", Params.CreatedAfter.value());
	}


	if (Params.CreatedBefore.has_value())
	{
		Uri.AddQueryParams("CreatedBefore", Params.CreatedBefore.value());
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



void SpaceApi::spacesSpaceIdSnapshotsCancelPost([[maybe_unused]] const spacesSpaceIdSnapshotsCancelPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/snapshots/cancel")
			.c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdSnapshotsSnapshotIdDelete([[maybe_unused]] const spacesSpaceIdSnapshotsSnapshotIdDeleteParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/snapshots/{snapshotId}")
			.c_str(),
		{Params.snapshotId, Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SpaceApi::spacesSpaceIdSnapshotsSnapshotIdApplyPost([[maybe_unused]] const spacesSpaceIdSnapshotsSnapshotIdApplyPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/snapshots/{snapshotId}/apply")
						  .c_str(),
					  {Params.spaceId, Params.snapshotId});


	if (Params.nonDestructive.has_value())
	{
		Uri.AddQueryParams("nonDestructive", Params.nonDestructive.value());
	}


	if (Params.backupInProgress.has_value())
	{
		Uri.AddQueryParams("backupInProgress", Params.backupInProgress.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



SupportApi::SupportApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISupportApiBase(InWebClient, InServiceDefinition)
{
}

SupportApi::~SupportApi()
{
}



void SupportApi::supportIssuesPost([[maybe_unused]] const supportIssuesPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/support/issues").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SupportApi::supportIssuesIssueKeyAttachmentsPost([[maybe_unused]] const supportIssuesIssueKeyAttachmentsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/support/issues/{issueKey}/attachments")
			.c_str(),
		{Params.issueKey});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemClaimApi::SystemClaimApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISystemClaimApiBase(InWebClient, InServiceDefinition)
{
}

SystemClaimApi::~SystemClaimApi()
{
}



void SystemClaimApi::batonSystemsSystemIdClaimPost([[maybe_unused]] const batonSystemsSystemIdClaimPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/claim").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemClaimApi::batonSystemsSystemIdClaimDelete([[maybe_unused]] const batonSystemsSystemIdClaimDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/claim").c_str(),
		{Params.systemId});


	if (Params.force.has_value())
	{
		Uri.AddQueryParams("force", Params.force.value());
	}


	if (Params.note.has_value())
	{
		Uri.AddQueryParams("note", Params.note.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemHistoryApi::SystemHistoryApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISystemHistoryApiBase(InWebClient, InServiceDefinition)
{
}

SystemHistoryApi::~SystemHistoryApi()
{
}



void SystemHistoryApi::batonSystemsSystemIdHistoryGet([[maybe_unused]] const batonSystemsSystemIdHistoryGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/history")
			.c_str(),
		{Params.systemId});


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



SystemQueueApi::SystemQueueApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISystemQueueApiBase(InWebClient, InServiceDefinition)
{
}

SystemQueueApi::~SystemQueueApi()
{
}



void SystemQueueApi::batonSystemsSystemIdQueueGet([[maybe_unused]] const batonSystemsSystemIdQueueGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemQueueApi::batonSystemsSystemIdQueuePost([[maybe_unused]] const batonSystemsSystemIdQueuePostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemQueueApi::batonSystemsSystemIdQueueDelete([[maybe_unused]] const batonSystemsSystemIdQueueDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{systemId}/queue").c_str(),
		{Params.systemId});


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.force.has_value())
	{
		Uri.AddQueryParams("force", Params.force.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemsApi::SystemsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISystemsApiBase(InWebClient, InServiceDefinition)
{
}

SystemsApi::~SystemsApi()
{
}



void SystemsApi::batonSystemsGet([[maybe_unused]] const batonSystemsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems").c_str(),
					  {});


	if (Params.Search.has_value())
	{
		Uri.AddQueryParams("Search", Params.Search.value());
	}


	if (Params.Archived.has_value())
	{
		Uri.AddQueryParams("Archived", Params.Archived.value());
	}


	if (Params.SortBy.has_value())
	{
		Uri.AddQueryParams("SortBy", Params.SortBy.value());
	}


	if (Params.SortDirection.has_value())
	{
		Uri.AddQueryParams("SortDirection", Params.SortDirection.value());
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


void SystemsApi::batonSystemsPost([[maybe_unused]] const batonSystemsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void SystemsApi::batonSystemsIdGet([[maybe_unused]] const batonSystemsIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemsApi::batonSystemsIdPut([[maybe_unused]] const batonSystemsIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void SystemsApi::batonSystemsIdDelete([[maybe_unused]] const batonSystemsIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}").c_str(),
		{Params.id});


	if (Params.confirm.has_value())
	{
		Uri.AddQueryParams("confirm", Params.confirm.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



SystemThumbnailApi::SystemThumbnailApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ISystemThumbnailApiBase(InWebClient, InServiceDefinition)
{
}

SystemThumbnailApi::~SystemThumbnailApi()
{
}



void SystemThumbnailApi::batonSystemsIdThumbnailPut([[maybe_unused]] const batonSystemsIdThumbnailPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/baton/systems/{id}/thumbnail").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



TenantAppUrlApi::TenantAppUrlApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ITenantAppUrlApiBase(InWebClient, InServiceDefinition)
{
}

TenantAppUrlApi::~TenantAppUrlApi()
{
}



void TenantAppUrlApi::tenantsTenantNameApp_urlsProvisionableGet([[maybe_unused]] const tenantsTenantNameApp_urlsProvisionableGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tenants/{tenantName}/app-urls/provisionable")
						  .c_str(),
					  {Params.tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TenantAppUrlApi::tenantsTenantNameApp_urlsAppKeyPost([[maybe_unused]] const tenantsTenantNameApp_urlsAppKeyPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/app-urls/{appKey}")
			.c_str(),
		{Params.tenantName, Params.appKey});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void TenantAppUrlApi::tenantsTenantNameApp_urlsAppKeyGet([[maybe_unused]] const tenantsTenantNameApp_urlsAppKeyGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/{tenantName}/app-urls/{appKey}")
			.c_str(),
		{Params.tenantName, Params.appKey});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



TicketedSpaceApi::TicketedSpaceApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: ITicketedSpaceApiBase(InWebClient, InServiceDefinition)
{
}

TicketedSpaceApi::~TicketedSpaceApi()
{
}



void TicketedSpaceApi::spacesSpaceIdEventsPost([[maybe_unused]] const spacesSpaceIdEventsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events").c_str(),
		{Params.spaceId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesSpaceIdEventsEventIdPut([[maybe_unused]] const spacesSpaceIdEventsEventIdPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/{spaceId}/events/{eventId}")
			.c_str(),
		{Params.spaceId, Params.eventId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesEventsGet([[maybe_unused]] const spacesEventsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/events").c_str(),
					  {});


	if (Params.VendorEventIds.has_value())
	{
		Uri.AddQueryParams("VendorEventIds", Params.VendorEventIds.value());
	}


	if (Params.VendorName.has_value())
	{
		Uri.AddQueryParams("VendorName", Params.VendorName.value());
	}


	if (Params.SpaceIds.has_value())
	{
		Uri.AddQueryParams("SpaceIds", Params.SpaceIds.value());
	}


	if (Params.UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", Params.UserIds.value());
	}


	if (Params.IsTicketingActive.has_value())
	{
		Uri.AddQueryParams("IsTicketingActive", Params.IsTicketingActive.value());
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



void TicketedSpaceApi::spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
	[[maybe_unused]] const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams& Params,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}")
						  .c_str(),
					  {Params.spaceId, Params.vendorName, Params.vendorEventId, Params.vendorTicketId});


	if (Params.onBehalfOfUserId.has_value())
	{
		Uri.AddQueryParams("onBehalfOfUserId", Params.onBehalfOfUserId.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::spacesTicketedGet([[maybe_unused]] const spacesTicketedGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/spaces/ticketed").c_str(),
					  {});


	if (Params.spaceIds.has_value())
	{
		Uri.AddQueryParams("spaceIds", Params.spaceIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::vendorsVendorNameOauthGet([[maybe_unused]] const vendorsVendorNameOauthGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/{vendorName}/oauth").c_str(),
		{Params.vendorName});


	if (Params.code.has_value())
	{
		Uri.AddQueryParams("code", Params.code.value());
	}


	if (Params.userId.has_value())
	{
		Uri.AddQueryParams("userId", Params.userId.value());
	}


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}


	if (Params.error_code.has_value())
	{
		Uri.AddQueryParams("error_code", Params.error_code.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TicketedSpaceApi::vendorsVendorNameUsersUserIdProvider_infoGet([[maybe_unused]] const vendorsVendorNameUsersUserIdProvider_infoGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/vendors/{vendorName}/users/{userId}/provider-info")
						  .c_str(),
					  {Params.vendorName, Params.userId});


	if (Params.tenant.has_value())
	{
		Uri.AddQueryParams("tenant", Params.tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



UsageReporterDevApi::UsageReporterDevApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IUsageReporterDevApiBase(InWebClient, InServiceDefinition)
{
}

UsageReporterDevApi::~UsageReporterDevApi()
{
}



void UsageReporterDevApi::billingDevReport_triggerPost([[maybe_unused]] const billingDevReport_triggerPostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/billing/dev/report-trigger").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



UserSustainedActivityApi::UserSustainedActivityApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IUserSustainedActivityApiBase(InWebClient, InServiceDefinition)
{
}

UserSustainedActivityApi::~UserSustainedActivityApi()
{
}



void UserSustainedActivityApi::usersSustained_activityGet([[maybe_unused]] const usersSustained_activityGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/sustained-activity").c_str(),
		{});


	if (Params.tenants.has_value())
	{
		Uri.AddQueryParams("tenants", Params.tenants.value());
	}


	if (Params.start.has_value())
	{
		Uri.AddQueryParams("start", Params.start.value());
	}


	if (Params.end.has_value())
	{
		Uri.AddQueryParams("end", Params.end.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



VersionsApi::VersionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IVersionsApiBase(InWebClient, InServiceDefinition)
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



VersionsAggregatorApi::VersionsAggregatorApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IVersionsAggregatorApiBase(InWebClient, InServiceDefinition)
{
}

VersionsAggregatorApi::~VersionsAggregatorApi()
{
}



void VersionsAggregatorApi::rsions_aggregatedGet([[maybe_unused]] const rsions_aggregatedGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "rsions-aggregated").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupAgentOverridesApi::WazzupAgentOverridesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IWazzupAgentOverridesApiBase(InWebClient, InServiceDefinition)
{
}

WazzupAgentOverridesApi::~WazzupAgentOverridesApi()
{
}



void WazzupAgentOverridesApi::wazzupAgent_overridesGet([[maybe_unused]] const wazzupAgent_overridesGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupAgentOverridesApi::wazzupAgent_overridesDelete([[maybe_unused]] const wazzupAgent_overridesDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides").c_str(),
		{});


	if (Params.confirm.has_value())
	{
		Uri.AddQueryParams("confirm", Params.confirm.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupAgentOverridesApi::wazzupAgent_overridesAgentIdPut([[maybe_unused]] const wazzupAgent_overridesAgentIdPutParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides/{agentId}")
			.c_str(),
		{Params.agentId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupAgentOverridesApi::wazzupAgent_overridesAgentIdDelete([[maybe_unused]] const wazzupAgent_overridesAgentIdDeleteParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/agent-overrides/{agentId}")
			.c_str(),
		{Params.agentId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupCapabilitiesApi::WazzupCapabilitiesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IWazzupCapabilitiesApiBase(InWebClient, InServiceDefinition)
{
}

WazzupCapabilitiesApi::~WazzupCapabilitiesApi()
{
}



void WazzupCapabilitiesApi::wazzupCapabilitiesGet([[maybe_unused]] const wazzupCapabilitiesGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/capabilities").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupLlmApi::WazzupLlmApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IWazzupLlmApiBase(InWebClient, InServiceDefinition)
{
}

WazzupLlmApi::~WazzupLlmApi()
{
}



void WazzupLlmApi::wazzupLlmProvidersGet([[maybe_unused]] const wazzupLlmProvidersGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/llm/providers").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupLlmApi::wazzupLlmGeneratePost([[maybe_unused]] const wazzupLlmGeneratePostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/llm/generate").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupSessionsApi::WazzupSessionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IWazzupSessionsApiBase(InWebClient, InServiceDefinition)
{
}

WazzupSessionsApi::~WazzupSessionsApi()
{
}



void WazzupSessionsApi::wazzupSessionsGet([[maybe_unused]] const wazzupSessionsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions").c_str(),
					  {});


	if (Params.Search.has_value())
	{
		Uri.AddQueryParams("Search", Params.Search.value());
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


void WazzupSessionsApi::wazzupSessionsPost([[maybe_unused]] const wazzupSessionsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupSessionsApi::wazzupSessionsIdGet([[maybe_unused]] const wazzupSessionsIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupSessionsApi::wazzupSessionsIdPut([[maybe_unused]] const wazzupSessionsIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void WazzupSessionsApi::wazzupSessionsIdDelete([[maybe_unused]] const wazzupSessionsIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/sessions/{id}").c_str(),
		{Params.id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



WazzupStorageApi::WazzupStorageApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
	: IWazzupStorageApiBase(InWebClient, InServiceDefinition)
{
}

WazzupStorageApi::~WazzupStorageApi()
{
}



void WazzupStorageApi::wazzupStorageCdn_fetchPost([[maybe_unused]] const wazzupStorageCdn_fetchPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/cdn-fetch").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(Params.RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupStorageApi::wazzupStorageLegacyTenantObjectsGet([[maybe_unused]] const wazzupStorageLegacyTenantObjectsGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/legacy/{tenant}/objects")
			.c_str(),
		{Params.tenant});


	if (Params.prefix.has_value())
	{
		Uri.AddQueryParams("prefix", Params.prefix.value());
	}


	if (Params.pageToken.has_value())
	{
		Uri.AddQueryParams("pageToken", Params.pageToken.value());
	}


	if (Params.limit.has_value())
	{
		Uri.AddQueryParams("limit", Params.limit.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void WazzupStorageApi::wazzupStorageLegacyTenantObjectGet([[maybe_unused]] const wazzupStorageLegacyTenantObjectGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/wazzup/storage/legacy/{tenant}/object")
			.c_str(),
		{Params.tenant});


	if (Params.key.has_value())
	{
		Uri.AddQueryParams("key", Params.key.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::aggregationservice