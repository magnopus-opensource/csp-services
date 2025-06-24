

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Common/Web/HttpAuth.h"
#include "Common/Web/HttpPayload.h"

#include <fmt/format.h>
#include <string>


namespace csp::services::generated::userservice
{


ApplicationSettingsApi::ApplicationSettingsApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

ApplicationSettingsApi::~ApplicationSettingsApi()
{
}



void ApplicationSettingsApi::applicationsApplicationNameSettingsContextPut(const utility::string_t& applicationName,
																		   const utility::string_t& context,
																		   const std::shared_ptr<ApplicationSettingsDto>& RequestBody,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/applications/{applicationName}/settings/{context}")
						  .c_str(),
					  {applicationName, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ApplicationSettingsApi::applicationsApplicationNameSettingsContextGet(const utility::string_t& applicationName,
																		   const utility::string_t& context,
																		   const std::optional<std::vector<utility::string_t>>& keys,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/applications/{applicationName}/settings/{context}")
						  .c_str(),
					  {applicationName, context});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ApplicationSettingsApi::applicationsApplicationNameSettingsContextDelete(const utility::string_t& applicationName,
																			  const utility::string_t& context,
																			  csp::services::ApiResponseHandlerBase* ResponseHandler,
																			  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/applications/{applicationName}/settings/{context}")
						  .c_str(),
					  {applicationName, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ApplicationSettingsApi::tenantsTenantApplicationsApplicationNameSettingsContextGet(const utility::string_t& tenant,
																						const utility::string_t& applicationName,
																						const utility::string_t& context,
																						const std::optional<std::vector<utility::string_t>>& keys,
																						csp::services::ApiResponseHandlerBase* ResponseHandler,
																						csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/tenants/{tenant}/applications/{applicationName}/settings/{context}")
						  .c_str(),
					  {tenant, applicationName, context});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ApplicationSettingsApi::applicationsApplicationNameSettingsGet(const utility::string_t& applicationName,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/applications/{applicationName}/settings")
			.c_str(),
		{applicationName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void ApplicationSettingsApi::applicationsApplicationNameSettingsDelete(const utility::string_t& applicationName,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/applications/{applicationName}/settings")
			.c_str(),
		{applicationName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ApplicationSettingsApi::applicationsApplicationNameSettingsContextKeynameDelete(const utility::string_t& applicationName,
																					 const utility::string_t& context,
																					 const utility::string_t& keyname,
																					 csp::services::ApiResponseHandlerBase* ResponseHandler,
																					 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/applications/{applicationName}/settings/{context}/{keyname}")
						  .c_str(),
					  {applicationName, context, keyname});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



AuthenticationApi::AuthenticationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

AuthenticationApi::~AuthenticationApi()
{
}



void AuthenticationApi::usersLoginPost(const std::shared_ptr<LoginRequest>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/login").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::usersLoginSocialPost(const std::shared_ptr<LoginSocialRequest>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/login-social").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::socialProvidersProviderGet(const utility::string_t& provider,
												   const std::optional<utility::string_t>& tenant,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/social-providers/{provider}").c_str(),
		{provider});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::usersLogoutPost(const std::shared_ptr<LogoutRequest>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/logout").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::usersRefreshPost(const std::shared_ptr<RefreshRequest>& RequestBody,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/refresh").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



AvatarsApi::AvatarsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

AvatarsApi::~AvatarsApi()
{
}



void AvatarsApi::usersUserIdAvatarsPost(const utility::string_t& userId,
										const std::shared_ptr<AvatarManifestDto>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/avatars").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AvatarsApi::usersUserIdAvatarsAvatarIdGet(const utility::string_t& userId,
											   const utility::string_t& avatarId,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/avatars/{avatarId}")
			.c_str(),
		{userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void AvatarsApi::usersUserIdAvatarsAvatarIdPut(const utility::string_t& userId,
											   const utility::string_t& avatarId,
											   const std::shared_ptr<AvatarManifestDto>& RequestBody,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/avatars/{avatarId}")
			.c_str(),
		{userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void AvatarsApi::usersUserIdAvatarsAvatarIdDelete(const utility::string_t& userId,
												  const utility::string_t& avatarId,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/avatars/{avatarId}")
			.c_str(),
		{userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AvatarsApi::usersUserIdAvatarsAvatarIdExistsGet(const utility::string_t& userId,
													 const utility::string_t& avatarId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/users/{userId}/avatars/{avatarId}/exists")
						  .c_str(),
					  {userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

ConfigurationApi::~ConfigurationApi()
{
}



void ConfigurationApi::appsettingsGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::appsettingsReloadPost(csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/appsettings/reload").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ConfigurationApi::featureflagsGet(csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/featureflags").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



GroupApi::GroupApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

GroupApi::~GroupApi()
{
}



void GroupApi::groupsPost(const std::shared_ptr<GroupDto>& RequestBody,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsPut(const std::shared_ptr<GroupDto>& RequestBody,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsDelete(const std::optional<std::vector<utility::string_t>>& groupIds,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups").c_str(), {});


	if (groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", groupIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGet(const std::optional<std::vector<utility::string_t>>& ids,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups").c_str(), {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupCodesGroupCodeUsersUserIdPut(const utility::string_t& groupCode,
												 const utility::string_t& userId,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/group-codes/{groupCode}/users/{userId}")
			.c_str(),
		{groupCode, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdGroupCodeResetPost(const utility::string_t& groupId,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/group-code-reset")
			.c_str(),
		{groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdBannedUsersUserIdPut(const utility::string_t& groupId,
												 const utility::string_t& userId,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/banned-users/{userId}")
			.c_str(),
		{groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGroupIdBannedUsersUserIdDelete(const utility::string_t& groupId,
													const utility::string_t& userId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/banned-users/{userId}")
			.c_str(),
		{groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdDelete(const utility::string_t& groupId,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}").c_str(),
					  {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGroupIdGet(const utility::string_t& groupId,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}").c_str(),
					  {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::usersUserIdGroupsGet(const utility::string_t& userId,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/groups").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdUsersUserIdDelete(const utility::string_t& groupId,
											  const utility::string_t& userId,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/users/{userId}")
			.c_str(),
		{groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsSummariesGet(const std::optional<utility::string_t>& groupCode,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups-summaries").c_str(),
					  {});


	if (groupCode.has_value())
	{
		Uri.AddQueryParams("groupCode", groupCode.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdEmailInvitesPost(const utility::string_t& groupId,
											 const std::optional<bool>& resendInvite,
											 const std::optional<utility::string_t>& emailLinkUrl,
											 const std::optional<utility::string_t>& signupUrl,
											 const std::shared_ptr<GroupInviteDto>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/email-invites").c_str(),
		{groupId});


	if (resendInvite.has_value())
	{
		Uri.AddQueryParams("resendInvite", resendInvite.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}


	if (signupUrl.has_value())
	{
		Uri.AddQueryParams("signupUrl", signupUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGroupIdEmailInvitesGet(const utility::string_t& groupId,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/email-invites").c_str(),
		{groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdEmailInvitesBulkPost(const utility::string_t& groupId,
												 const std::optional<bool>& resendInvite,
												 const std::optional<utility::string_t>& emailLinkUrl,
												 const std::optional<utility::string_t>& signupUrl,
												 const std::vector<std::shared_ptr<GroupInviteDto>>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/email-invites/bulk")
			.c_str(),
		{groupId});


	if (resendInvite.has_value())
	{
		Uri.AddQueryParams("resendInvite", resendInvite.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}


	if (signupUrl.has_value())
	{
		Uri.AddQueryParams("signupUrl", signupUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdLitePut(const utility::string_t& groupId,
									const std::shared_ptr<GroupLiteDto>& RequestBody,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/lite").c_str(),
		{groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGroupIdLiteGet(const utility::string_t& groupId,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/lite").c_str(),
		{groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdOwnerNewGroupOwnerIdPut(const utility::string_t& groupId,
													const utility::string_t& newGroupOwnerId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/groups/{groupId}/owner/{newGroupOwnerId}")
						  .c_str(),
					  {groupId, newGroupOwnerId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdEmailInvitesAcceptedGet(const utility::string_t& groupId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/email-invites/accepted")
			.c_str(),
		{groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdEmailInvitesEmailInviteIdDelete(const utility::string_t& groupId,
															const utility::string_t& emailInviteId,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/groups/{groupId}/email-invites/{emailInviteId}")
						  .c_str(),
					  {groupId, emailInviteId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdModeratorsUserIdPut(const utility::string_t& groupId,
												const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/moderators/{userId}")
			.c_str(),
		{groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void GroupApi::groupsGroupIdModeratorsUserIdDelete(const utility::string_t& groupId,
												   const utility::string_t& userId,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/{groupId}/moderators/{userId}")
			.c_str(),
		{groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsLiteGet(const std::optional<std::vector<utility::string_t>>& Ids,
							 const std::optional<std::vector<utility::string_t>>& GroupTypes,
							 const std::optional<std::vector<utility::string_t>>& Names,
							 const std::optional<utility::string_t>& PartialName,
							 const std::optional<std::vector<utility::string_t>>& GroupOwnerIds,
							 const std::optional<std::vector<utility::string_t>>& ExcludeGroupOwnerIds,
							 const std::optional<std::vector<utility::string_t>>& ExcludeIds,
							 const std::optional<std::vector<utility::string_t>>& Users,
							 const std::optional<bool>& Discoverable,
							 const std::optional<bool>& AutoModerator,
							 const std::optional<bool>& RequiresInvite,
							 const std::optional<bool>& Archived,
							 const std::optional<std::vector<utility::string_t>>& OrganizationIds,
							 const std::optional<std::vector<utility::string_t>>& Tags,
							 const std::optional<std::vector<utility::string_t>>& ExcludedTags,
							 const std::optional<bool>& TagsAll,
							 const std::optional<int32_t>& Skip,
							 const std::optional<int32_t>& Limit,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/lite").c_str(), {});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (GroupTypes.has_value())
	{
		Uri.AddQueryParams("GroupTypes", GroupTypes.value());
	}


	if (Names.has_value())
	{
		Uri.AddQueryParams("Names", Names.value());
	}


	if (PartialName.has_value())
	{
		Uri.AddQueryParams("PartialName", PartialName.value());
	}


	if (GroupOwnerIds.has_value())
	{
		Uri.AddQueryParams("GroupOwnerIds", GroupOwnerIds.value());
	}


	if (ExcludeGroupOwnerIds.has_value())
	{
		Uri.AddQueryParams("ExcludeGroupOwnerIds", ExcludeGroupOwnerIds.value());
	}


	if (ExcludeIds.has_value())
	{
		Uri.AddQueryParams("ExcludeIds", ExcludeIds.value());
	}


	if (Users.has_value())
	{
		Uri.AddQueryParams("Users", Users.value());
	}


	if (Discoverable.has_value())
	{
		Uri.AddQueryParams("Discoverable", Discoverable.value());
	}


	if (AutoModerator.has_value())
	{
		Uri.AddQueryParams("AutoModerator", AutoModerator.value());
	}


	if (RequiresInvite.has_value())
	{
		Uri.AddQueryParams("RequiresInvite", RequiresInvite.value());
	}


	if (Archived.has_value())
	{
		Uri.AddQueryParams("Archived", Archived.value());
	}


	if (OrganizationIds.has_value())
	{
		Uri.AddQueryParams("OrganizationIds", OrganizationIds.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (ExcludedTags.has_value())
	{
		Uri.AddQueryParams("ExcludedTags", ExcludedTags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
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


void GroupApi::groupsLitePost(const std::optional<int32_t>& Skip,
							  const std::optional<int32_t>& Limit,
							  const std::shared_ptr<GroupFilters>& RequestBody,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/lite").c_str(), {});


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
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsUsersUserIdEmailInvitesGet(const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/users/{userId}/email-invites")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsGroupIdUsersUserIdEmailInvitesEmailInviteIdAcceptPost(const utility::string_t& groupId,
																		   const utility::string_t& userId,
																		   const utility::string_t& emailInviteId,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept")
						  .c_str(),
					  {groupId, userId, emailInviteId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::groupsArchivedPut(const utility::string_t& groupOwnerId,
								 const std::optional<std::vector<utility::string_t>>& groupIds,
								 const bool& archived,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/groups/archived").c_str(),
					  {});


	Uri.AddQueryParams("groupOwnerId", groupOwnerId);


	if (groupIds.has_value())
	{
		Uri.AddQueryParams("groupIds", groupIds.value());
	}


	Uri.AddQueryParams("archived", archived);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



InventoryApi::InventoryApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

InventoryApi::~InventoryApi()
{
}



void InventoryApi::usersUserIdInventoryItemsGet(const utility::string_t& userId,
												const std::optional<std::vector<utility::string_t>>& Ids,
												const std::optional<std::vector<utility::string_t>>& PrototypeIds,
												const std::optional<bool>& Exchangeable,
												const std::optional<bool>& IsGift,
												const std::optional<std::vector<utility::string_t>>& Tags,
												const std::optional<bool>& TagsAll,
												const std::optional<std::vector<utility::string_t>>& UserIds,
												const std::optional<std::map<utility::string_t, utility::string_t>>& State,
												const std::optional<std::vector<utility::string_t>>& ItemTypes,
												const std::optional<utility::string_t>& CreatedAfter,
												const std::optional<utility::string_t>& CreatedBefore,
												const std::optional<int32_t>& Skip,
												const std::optional<int32_t>& Limit,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-items").c_str(),
		{userId});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (Exchangeable.has_value())
	{
		Uri.AddQueryParams("Exchangeable", Exchangeable.value());
	}


	if (IsGift.has_value())
	{
		Uri.AddQueryParams("IsGift", IsGift.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (State.has_value())
	{
		Uri.AddQueryParams("State", State.value());
	}


	if (ItemTypes.has_value())
	{
		Uri.AddQueryParams("ItemTypes", ItemTypes.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (CreatedBefore.has_value())
	{
		Uri.AddQueryParams("CreatedBefore", CreatedBefore.value());
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


void InventoryApi::usersUserIdInventoryItemsPost(const utility::string_t& userId,
												 const std::optional<bool>& notify,
												 const std::shared_ptr<InventoryItemDto>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-items").c_str(),
		{userId});


	if (notify.has_value())
	{
		Uri.AddQueryParams("notify", notify.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::usersUserIdInventoryIdsGet(const utility::string_t& userId,
											  const std::optional<std::vector<utility::string_t>>& Ids,
											  const std::optional<std::vector<utility::string_t>>& PrototypeIds,
											  const std::optional<bool>& Exchangeable,
											  const std::optional<bool>& IsGift,
											  const std::optional<std::vector<utility::string_t>>& Tags,
											  const std::optional<bool>& TagsAll,
											  const std::optional<std::vector<utility::string_t>>& UserIds,
											  const std::optional<std::map<utility::string_t, utility::string_t>>& State,
											  const std::optional<std::vector<utility::string_t>>& ItemTypes,
											  const std::optional<utility::string_t>& CreatedAfter,
											  const std::optional<utility::string_t>& CreatedBefore,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-ids").c_str(),
		{userId});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (Exchangeable.has_value())
	{
		Uri.AddQueryParams("Exchangeable", Exchangeable.value());
	}


	if (IsGift.has_value())
	{
		Uri.AddQueryParams("IsGift", IsGift.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (State.has_value())
	{
		Uri.AddQueryParams("State", State.value());
	}


	if (ItemTypes.has_value())
	{
		Uri.AddQueryParams("ItemTypes", ItemTypes.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (CreatedBefore.has_value())
	{
		Uri.AddQueryParams("CreatedBefore", CreatedBefore.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::usersInventoryItemsOwnersGet(const std::optional<std::vector<utility::string_t>>& Ids,
												const std::optional<std::vector<utility::string_t>>& PrototypeIds,
												const std::optional<bool>& Exchangeable,
												const std::optional<bool>& IsGift,
												const std::optional<std::vector<utility::string_t>>& Tags,
												const std::optional<bool>& TagsAll,
												const std::optional<std::vector<utility::string_t>>& UserIds,
												const std::optional<std::map<utility::string_t, utility::string_t>>& State,
												const std::optional<std::vector<utility::string_t>>& ItemTypes,
												const std::optional<utility::string_t>& CreatedAfter,
												const std::optional<utility::string_t>& CreatedBefore,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/inventory-items/owners").c_str(),
		{});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (Exchangeable.has_value())
	{
		Uri.AddQueryParams("Exchangeable", Exchangeable.value());
	}


	if (IsGift.has_value())
	{
		Uri.AddQueryParams("IsGift", IsGift.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (State.has_value())
	{
		Uri.AddQueryParams("State", State.value());
	}


	if (ItemTypes.has_value())
	{
		Uri.AddQueryParams("ItemTypes", ItemTypes.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (CreatedBefore.has_value())
	{
		Uri.AddQueryParams("CreatedBefore", CreatedBefore.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::usersInventoryCountGet(const std::optional<std::vector<utility::string_t>>& Ids,
										  const std::optional<std::vector<utility::string_t>>& PrototypeIds,
										  const std::optional<bool>& Exchangeable,
										  const std::optional<bool>& IsGift,
										  const std::optional<std::vector<utility::string_t>>& Tags,
										  const std::optional<bool>& TagsAll,
										  const std::optional<std::vector<utility::string_t>>& UserIds,
										  const std::optional<std::map<utility::string_t, utility::string_t>>& State,
										  const std::optional<std::vector<utility::string_t>>& ItemTypes,
										  const std::optional<utility::string_t>& CreatedAfter,
										  const std::optional<utility::string_t>& CreatedBefore,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/inventory-count").c_str(),
		{});


	if (Ids.has_value())
	{
		Uri.AddQueryParams("Ids", Ids.value());
	}


	if (PrototypeIds.has_value())
	{
		Uri.AddQueryParams("PrototypeIds", PrototypeIds.value());
	}


	if (Exchangeable.has_value())
	{
		Uri.AddQueryParams("Exchangeable", Exchangeable.value());
	}


	if (IsGift.has_value())
	{
		Uri.AddQueryParams("IsGift", IsGift.value());
	}


	if (Tags.has_value())
	{
		Uri.AddQueryParams("Tags", Tags.value());
	}


	if (TagsAll.has_value())
	{
		Uri.AddQueryParams("TagsAll", TagsAll.value());
	}


	if (UserIds.has_value())
	{
		Uri.AddQueryParams("UserIds", UserIds.value());
	}


	if (State.has_value())
	{
		Uri.AddQueryParams("State", State.value());
	}


	if (ItemTypes.has_value())
	{
		Uri.AddQueryParams("ItemTypes", ItemTypes.value());
	}


	if (CreatedAfter.has_value())
	{
		Uri.AddQueryParams("CreatedAfter", CreatedAfter.value());
	}


	if (CreatedBefore.has_value())
	{
		Uri.AddQueryParams("CreatedBefore", CreatedBefore.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::usersUserIdInventoryItemsIdGet(const utility::string_t& userId,
												  const utility::string_t& id,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-items/{id}")
			.c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void InventoryApi::usersUserIdInventoryItemsIdDelete(const utility::string_t& userId,
													 const utility::string_t& id,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-items/{id}")
			.c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void InventoryApi::usersUserIdInventoryItemsIdPut(const utility::string_t& userId,
												  const utility::string_t& id,
												  const std::shared_ptr<InventoryItemDto>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/inventory-items/{id}")
			.c_str(),
		{userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::usersUserIdInventoryItemsIdEquipPut(const utility::string_t& userId,
													   const utility::string_t& id,
													   const std::shared_ptr<EquipItemDto>& RequestBody,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/users/{userId}/inventory-items/{id}/equip")
						  .c_str(),
					  {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

NtpApi::~NtpApi()
{
}



void NtpApi::datetimeGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/datetime").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



OrganizationApi::OrganizationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

OrganizationApi::~OrganizationApi()
{
}



void OrganizationApi::organizationsPost(const std::shared_ptr<OrganizationDto>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/organizations").c_str(),
					  {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdGet(const utility::string_t& organizationId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/organizations/{organizationId}").c_str(),
		{organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void OrganizationApi::organizationsOrganizationIdPut(const utility::string_t& organizationId,
													 const std::shared_ptr<OrganizationDto>& RequestBody,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/organizations/{organizationId}").c_str(),
		{organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void OrganizationApi::organizationsOrganizationIdDelete(const utility::string_t& organizationId,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/organizations/{organizationId}").c_str(),
		{organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdMembershipInvitesPost(const utility::string_t& organizationId,
																	   const std::optional<bool>& resendInvite,
																	   const std::optional<utility::string_t>& emailLinkUrl,
																	   const std::optional<utility::string_t>& signupUrl,
																	   const std::shared_ptr<OrganizationInviteDto>& RequestBody,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/membership-invites")
						  .c_str(),
					  {organizationId});


	if (resendInvite.has_value())
	{
		Uri.AddQueryParams("resendInvite", resendInvite.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}


	if (signupUrl.has_value())
	{
		Uri.AddQueryParams("signupUrl", signupUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void OrganizationApi::organizationsOrganizationIdMembershipInvitesGet(const utility::string_t& organizationId,
																	  csp::services::ApiResponseHandlerBase* ResponseHandler,
																	  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/membership-invites")
						  .c_str(),
					  {organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdMembershipInvitesBulkPost(const utility::string_t& organizationId,
																		   const std::optional<bool>& resendInvite,
																		   const std::optional<utility::string_t>& emailLinkUrl,
																		   const std::optional<utility::string_t>& signupUrl,
																		   const std::vector<std::shared_ptr<OrganizationInviteDto>>& RequestBody,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/membership-invites/bulk")
						  .c_str(),
					  {organizationId});


	if (resendInvite.has_value())
	{
		Uri.AddQueryParams("resendInvite", resendInvite.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}


	if (signupUrl.has_value())
	{
		Uri.AddQueryParams("signupUrl", signupUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdUsersUserIdDelete(const utility::string_t& organizationId,
																   const utility::string_t& userId,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/users/{userId}")
						  .c_str(),
					  {organizationId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdRolesGet(const utility::string_t& organizationId,
														  const std::optional<std::vector<utility::string_t>>& userIds,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/organizations/{organizationId}/roles")
			.c_str(),
		{organizationId});


	if (userIds.has_value())
	{
		Uri.AddQueryParams("userIds", userIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::organizationsOrganizationIdUsersUserIdRolesPut(const utility::string_t& organizationId,
																	 const utility::string_t& userId,
																	 const std::vector<utility::string_t>& RequestBody,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/organizations/{organizationId}/users/{userId}/roles")
						  .c_str(),
					  {organizationId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

PingApi::~PingApi()
{
}



void PingApi::pingGet(csp::services::ApiResponseHandlerBase* ResponseHandler, csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}{1}", ServiceDefinition.GetURI().c_str(), "/ping").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ProfileApi::ProfileApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

ProfileApi::~ProfileApi()
{
}



void ProfileApi::usersPost(const std::shared_ptr<CreateUserRequest>& RequestBody,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users").c_str(), {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProfileApi::usersGet(const std::optional<utility::string_t>& GuestDeviceId,
						  const std::optional<utility::string_t>& PartialGuestDeviceId,
						  const std::optional<utility::string_t>& Email,
						  const std::optional<utility::string_t>& UserName,
						  const std::optional<utility::string_t>& LastDeviceId,
						  const std::optional<bool>& SearchPartialEmails,
						  const std::optional<std::vector<utility::string_t>>& GuestDeviceIds,
						  const std::optional<std::vector<utility::string_t>>& EmailAddresses,
						  const std::optional<std::vector<utility::string_t>>& UserNames,
						  const std::optional<std::vector<utility::string_t>>& LastDeviceIds,
						  const std::optional<int32_t>& Skip,
						  const std::optional<int32_t>& Limit,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users").c_str(), {});


	if (GuestDeviceId.has_value())
	{
		Uri.AddQueryParams("GuestDeviceId", GuestDeviceId.value());
	}


	if (PartialGuestDeviceId.has_value())
	{
		Uri.AddQueryParams("PartialGuestDeviceId", PartialGuestDeviceId.value());
	}


	if (Email.has_value())
	{
		Uri.AddQueryParams("Email", Email.value());
	}


	if (UserName.has_value())
	{
		Uri.AddQueryParams("UserName", UserName.value());
	}


	if (LastDeviceId.has_value())
	{
		Uri.AddQueryParams("LastDeviceId", LastDeviceId.value());
	}


	if (SearchPartialEmails.has_value())
	{
		Uri.AddQueryParams("SearchPartialEmails", SearchPartialEmails.value());
	}


	if (GuestDeviceIds.has_value())
	{
		Uri.AddQueryParams("GuestDeviceIds", GuestDeviceIds.value());
	}


	if (EmailAddresses.has_value())
	{
		Uri.AddQueryParams("EmailAddresses", EmailAddresses.value());
	}


	if (UserNames.has_value())
	{
		Uri.AddQueryParams("UserNames", UserNames.value());
	}


	if (LastDeviceIds.has_value())
	{
		Uri.AddQueryParams("LastDeviceIds", LastDeviceIds.value());
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



void ProfileApi::usersCreateSocialPost(const std::shared_ptr<CreateUserSocialRequest>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/create-social").c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdUpgradeGuestPost(const utility::string_t& userId,
											 const std::shared_ptr<UpgradeGuestRequest>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/upgrade-guest").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdUpgradeGuestSocialPost(const utility::string_t& userId,
												   const std::shared_ptr<UpgradeGuestSocialRequest>& RequestBody,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/upgrade-guest-social")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdDelete(const utility::string_t& userId,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}").c_str(),
					  {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProfileApi::usersUserIdGet(const utility::string_t& userId,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}").c_str(),
					  {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdHardDeleteDelete(const utility::string_t& userId,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/hard-delete").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersHardDeleteDelete(const std::optional<std::vector<utility::string_t>>& ids,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/hard-delete").c_str(),
		{});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersProfileIdsPost(const std::optional<int32_t>& Skip,
									 const std::optional<int32_t>& Limit,
									 const std::shared_ptr<UserQuery>& RequestBody,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/profile-ids").c_str(),
		{});


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
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersTenantsTenantProfileIdsPost(const utility::string_t& tenant,
												  const std::optional<int32_t>& Skip,
												  const std::optional<int32_t>& Limit,
												  const std::shared_ptr<UserQuery>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/tenants/{tenant}/profile-ids")
			.c_str(),
		{tenant});


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
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdTokenChangePasswordPost(const utility::string_t& userId,
													const std::shared_ptr<TokenResetPasswordRequest>& RequestBody,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/token-change-password")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersForgotPasswordPost(const std::optional<utility::string_t>& redirect,
										 const std::optional<bool>& useTokenChangePasswordUrl,
										 const std::optional<utility::string_t>& emailLinkUrl,
										 const std::shared_ptr<ForgotPasswordRequest>& RequestBody,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/forgot-password").c_str(),
		{});


	if (redirect.has_value())
	{
		Uri.AddQueryParams("redirect", redirect.value());
	}


	if (useTokenChangePasswordUrl.has_value())
	{
		Uri.AddQueryParams("useTokenChangePasswordUrl", useTokenChangePasswordUrl.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdConfirmEmailPost(const utility::string_t& userId,
											 const std::optional<utility::string_t>& redirect,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/confirm-email").c_str(),
		{userId});


	if (redirect.has_value())
	{
		Uri.AddQueryParams("redirect", redirect.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersEmailsEmailConfirmEmailReSendPost(const utility::string_t& email,
														const std::optional<utility::string_t>& tenant,
														const std::optional<utility::string_t>& redirect,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/users/emails/{email}/confirm-email/re-send")
						  .c_str(),
					  {email});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}


	if (redirect.has_value())
	{
		Uri.AddQueryParams("redirect", redirect.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdMetagamePut(const utility::string_t& userId,
										const std::shared_ptr<MetagameUpdate>& RequestBody,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/metagame").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void ProfileApi::usersUserIdMetagameGet(const utility::string_t& userId,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/metagame").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdFirstNameFirstNamePut(const utility::string_t& userId,
												  const utility::string_t& firstName,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/first-name/{firstName}")
			.c_str(),
		{userId, firstName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdDisplayNamePut(const utility::string_t& userId,
										   const utility::string_t& displayName,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/display-name").c_str(),
		{userId});


	Uri.AddQueryParams("displayName", displayName);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdLiteGet(const utility::string_t& userId,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/lite").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersLiteGet(const std::optional<std::vector<utility::string_t>>& ids,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/lite").c_str(), {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdLockAccountPut(const utility::string_t& userId,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/lock-account").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::usersUserIdUnlockAccountPut(const utility::string_t& userId,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/unlock-account").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



SettingsApi::SettingsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

SettingsApi::~SettingsApi()
{
}



void SettingsApi::usersUserIdSettingsContextPut(const utility::string_t& userId,
												const utility::string_t& context,
												const std::shared_ptr<SettingsDto>& RequestBody,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/settings/{context}")
			.c_str(),
		{userId, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void SettingsApi::usersUserIdSettingsContextGet(const utility::string_t& userId,
												const utility::string_t& context,
												const std::optional<std::vector<utility::string_t>>& keys,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/settings/{context}")
			.c_str(),
		{userId, context});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void SettingsApi::usersUserIdSettingsContextDelete(const utility::string_t& userId,
												   const utility::string_t& context,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/settings/{context}")
			.c_str(),
		{userId, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SettingsApi::usersSettingsContextGet(const utility::string_t& context,
										  const std::optional<std::vector<utility::string_t>>& userIds,
										  const std::optional<std::vector<utility::string_t>>& keys,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/settings/{context}").c_str(),
		{context});


	if (userIds.has_value())
	{
		Uri.AddQueryParams("userIds", userIds.value());
	}


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void SettingsApi::usersUserIdSettingsGet(const utility::string_t& userId,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/settings").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void SettingsApi::usersUserIdSettingsContextKeynameDelete(const utility::string_t& userId,
														  const utility::string_t& context,
														  const utility::string_t& keyname,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/users/{userId}/settings/{context}/{keyname}")
						  .c_str(),
					  {userId, context, keyname});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



StripeApi::StripeApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

StripeApi::~StripeApi()
{
}



void StripeApi::vendorsStripeWebhookPost(const std::optional<utility::string_t>& tenant,
										 const std::optional<utility::string_t>& environmentAlias,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/stripe/webhook").c_str(),
		{});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}


	if (environmentAlias.has_value())
	{
		Uri.AddQueryParams("environmentAlias", environmentAlias.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::vendorsStripeCheckoutSessionsPost(const std::shared_ptr<StripeCheckoutRequest>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/stripe/checkout-sessions")
			.c_str(),
		{});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::vendorsStripeCustomersUserIdGet(const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/vendors/stripe/customers/{userId}")
			.c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::vendorsStripeCustomerPortalsUserIdGet(const utility::string_t& userId,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}",
								  ServiceDefinition.GetURI().c_str(),
								  ServiceDefinition.GetVersion(),
								  "/vendors/stripe/customer-portals/{userId}")
						  .c_str(),
					  {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



TenantApi::TenantApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

TenantApi::~TenantApi()
{
}



void TenantApi::tenantsNamesTenantNamePut(const utility::string_t& tenantName,
										  const std::shared_ptr<TenantDto>& RequestBody,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/names/{tenantName}").c_str(),
		{tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}


void TenantApi::tenantsNamesTenantNameGet(const utility::string_t& tenantName,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/names/{tenantName}").c_str(),
		{tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void TenantApi::tenantsPendingDelete(const int32_t& tenantAgeInDays,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/pending").c_str(),
					  {});


	Uri.AddQueryParams("tenantAgeInDays", tenantAgeInDays);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void TenantApi::tenantsNamesNameDelete(const utility::string_t& name,
									   const std::shared_ptr<TenantCleanupFilters>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/tenants/names/{name}").c_str(),
		{name});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



UserRolesApi::UserRolesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
{
}

UserRolesApi::~UserRolesApi()
{
}



void UserRolesApi::usersUserIdRolesGet(const utility::string_t& userId,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/roles").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}


void UserRolesApi::usersUserIdRolesPut(const utility::string_t& userId,
									   const std::shared_ptr<UserRolesDto>& RequestBody,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(
		fmt::format("{0}/api/v{1}{2}", ServiceDefinition.GetURI().c_str(), ServiceDefinition.GetVersion(), "/users/{userId}/roles").c_str(),
		{userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::userservice