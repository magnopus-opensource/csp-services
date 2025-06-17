

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"


namespace csp::services::generated::trackingservice
{


ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
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



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
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



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
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



QuotaActivityApi::QuotaActivityApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
{
}

QuotaActivityApi::~QuotaActivityApi()
{
}



void QuotaActivityApi::apiV1UsersUserIdQuotaProgressGet(const utility::string_t& userId,
														const std::optional<std::vector<utility::string_t>>& features,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/quota-progress", {userId});


	if (features.has_value())
	{
		Uri.AddQueryParams("features", features.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaActivityApi::apiV1GroupsGroupIdQuotaProgressGet(const utility::string_t& groupId,
														  const std::optional<std::vector<utility::string_t>>& features,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/quota-progress", {groupId});


	if (features.has_value())
	{
		Uri.AddQueryParams("features", features.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaActivityApi::apiV1UserUserIdQuotaActivityGet(const utility::string_t& userId,
													   const std::optional<std::vector<utility::string_t>>& Features,
													   const std::optional<utility::string_t>& StartDateTime,
													   const std::optional<utility::string_t>& EndDateTime,
													   const std::optional<int32_t>& Skip,
													   const std::optional<int32_t>& Limit,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/user/{userId}/quota-activity", {userId});


	if (Features.has_value())
	{
		Uri.AddQueryParams("Features", Features.value());
	}


	if (StartDateTime.has_value())
	{
		Uri.AddQueryParams("StartDateTime", StartDateTime.value());
	}


	if (EndDateTime.has_value())
	{
		Uri.AddQueryParams("EndDateTime", EndDateTime.value());
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



void QuotaActivityApi::apiV1GroupGroupIdQuotaActivityGet(const utility::string_t& groupId,
														 const std::optional<std::vector<utility::string_t>>& Features,
														 const std::optional<utility::string_t>& StartDateTime,
														 const std::optional<utility::string_t>& EndDateTime,
														 const std::optional<int32_t>& Skip,
														 const std::optional<int32_t>& Limit,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/group/{groupId}/quota-activity", {groupId});


	if (Features.has_value())
	{
		Uri.AddQueryParams("Features", Features.value());
	}


	if (StartDateTime.has_value())
	{
		Uri.AddQueryParams("StartDateTime", StartDateTime.value());
	}


	if (EndDateTime.has_value())
	{
		Uri.AddQueryParams("EndDateTime", EndDateTime.value());
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



QuotaManagementApi::QuotaManagementApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
{
}

QuotaManagementApi::~QuotaManagementApi()
{
}



void QuotaManagementApi::apiV1TiersTierNameQuotasGet(const utility::string_t& tierName,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tiers/{tierName}/quotas", {tierName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaManagementApi::apiV1TiersTierNameFeaturesFeatureNameQuotaGet(const utility::string_t& tierName,
																	   const utility::string_t& featureName,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tiers/{tierName}/features/{featureName}/quota", {tierName, featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaManagementApi::apiV1TiersTierNameFeaturesFeatureNameQuotaPut(const utility::string_t& tierName,
																	   const utility::string_t& featureName,
																	   const std::shared_ptr<QuotaFeatureTierDto>& RequestBody,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tiers/{tierName}/features/{featureName}/quota", {tierName, featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaManagementApi::apiV1TiersTierNameFeaturesFeatureNameQuotaDelete(const utility::string_t& tierName,
																		  const utility::string_t& featureName,
																		  csp::services::ApiResponseHandlerBase* ResponseHandler,
																		  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tiers/{tierName}/features/{featureName}/quota", {tierName, featureName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



QuotaTierAssignmentApi::QuotaTierAssignmentApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().TrackingServiceURI)
{
}

QuotaTierAssignmentApi::~QuotaTierAssignmentApi()
{
}



void QuotaTierAssignmentApi::apiV1TierAssignmentsIdGet(const utility::string_t& id,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tier-assignments/{id}", {id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::apiV1UsersUserIdTierAssignmentGet(const utility::string_t& userId,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/tier-assignment", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaTierAssignmentApi::apiV1UsersUserIdTierAssignmentPut(const utility::string_t& userId,
															   const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/tier-assignment", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaTierAssignmentApi::apiV1UsersUserIdTierAssignmentDelete(const utility::string_t& userId,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/tier-assignment", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::apiV1TenantsTenantNameTierAssignmentGet(const utility::string_t& tenantName,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tenants/{tenantName}/tier-assignment", {tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaTierAssignmentApi::apiV1TenantsTenantNameTierAssignmentPut(const utility::string_t& tenantName,
																	 const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tenants/{tenantName}/tier-assignment", {tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void QuotaTierAssignmentApi::apiV1TenantsTenantNameTierAssignmentDelete(const utility::string_t& tenantName,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tenants/{tenantName}/tier-assignment", {tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void QuotaTierAssignmentApi::apiV1GroupsTierAssignmentsGet(const std::optional<std::vector<utility::string_t>>& groupIds,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/tier-assignments", {});


	if (groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", groupIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::trackingservice