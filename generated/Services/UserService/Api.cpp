

#include "Api.h"

#include "CSP/CSPFoundation.h"
#include "Web/HttpAuth.h"
#include "Web/HttpPayload.h"


namespace csp::services::generated::userservice
{


ApplicationSettingsApi::ApplicationSettingsApi(csp::web::WebClient* InWebClient)
	: ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

ApplicationSettingsApi::~ApplicationSettingsApi()
{
}



void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsContextPut(const utility::string_t& applicationName,
																				const utility::string_t& context,
																				const std::shared_ptr<ApplicationSettingsDto>& RequestBody,
																				csp::services::ApiResponseHandlerBase* ResponseHandler,
																				csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings/{context}", {applicationName, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsContextGet(const utility::string_t& applicationName,
																				const utility::string_t& context,
																				const std::optional<std::vector<utility::string_t>>& keys,
																				csp::services::ApiResponseHandlerBase* ResponseHandler,
																				csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings/{context}", {applicationName, context});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsContextDelete(const utility::string_t& applicationName,
																				   const utility::string_t& context,
																				   csp::services::ApiResponseHandlerBase* ResponseHandler,
																				   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings/{context}", {applicationName, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsGet(const utility::string_t& applicationName,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings", {applicationName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsDelete(const utility::string_t& applicationName,
																			csp::services::ApiResponseHandlerBase* ResponseHandler,
																			csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings", {applicationName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void ApplicationSettingsApi::apiV1ApplicationsApplicationNameSettingsContextKeynameDelete(const utility::string_t& applicationName,
																						  const utility::string_t& context,
																						  const utility::string_t& keyname,
																						  csp::services::ApiResponseHandlerBase* ResponseHandler,
																						  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/applications/{applicationName}/settings/{context}/{keyname}", {applicationName, context, keyname});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



AuthenticationApi::AuthenticationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

AuthenticationApi::~AuthenticationApi()
{
}



void AuthenticationApi::apiV1UsersLoginPost(const std::shared_ptr<LoginRequest>& RequestBody,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/login", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::apiV1UsersLoginSocialPost(const std::shared_ptr<LoginSocialRequest>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/login-social", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::apiV1SocialProvidersProviderGet(const utility::string_t& provider,
														const std::optional<utility::string_t>& tenant,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/social-providers/{provider}", {provider});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::apiV1UsersLogoutPost(const std::shared_ptr<LogoutRequest>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/logout", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AuthenticationApi::apiV1UsersRefreshPost(const std::shared_ptr<RefreshRequest>& RequestBody,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/refresh", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



AvatarsApi::AvatarsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

AvatarsApi::~AvatarsApi()
{
}



void AvatarsApi::apiV1UsersUserIdAvatarsPost(const utility::string_t& userId,
											 const std::shared_ptr<AvatarManifestDto>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/avatars", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void AvatarsApi::apiV1UsersUserIdAvatarsAvatarIdGet(const utility::string_t& userId,
													const utility::string_t& avatarId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/avatars/{avatarId}", {userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void AvatarsApi::apiV1UsersUserIdAvatarsAvatarIdPut(const utility::string_t& userId,
													const utility::string_t& avatarId,
													const std::shared_ptr<AvatarManifestDto>& RequestBody,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/avatars/{avatarId}", {userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void AvatarsApi::apiV1UsersUserIdAvatarsAvatarIdDelete(const utility::string_t& userId,
													   const utility::string_t& avatarId,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/avatars/{avatarId}", {userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void AvatarsApi::apiV1UsersUserIdAvatarsAvatarIdExistsGet(const utility::string_t& userId,
														  const utility::string_t& avatarId,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/avatars/{avatarId}/exists", {userId, avatarId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



ConfigurationApi::ConfigurationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
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



GroupApi::GroupApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

GroupApi::~GroupApi()
{
}



void GroupApi::apiV1GroupsPost(const std::shared_ptr<GroupDto>& RequestBody,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void GroupApi::apiV1GroupsGet(const std::optional<std::vector<utility::string_t>>& ids,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupCodesGroupCodeUsersUserIdPut(const utility::string_t& groupCode,
													  const utility::string_t& userId,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/group-codes/{groupCode}/users/{userId}", {groupCode, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdGroupCodeResetPost(const utility::string_t& groupId,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/group-code-reset", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdBannedUsersUserIdPut(const utility::string_t& groupId,
													  const utility::string_t& userId,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/banned-users/{userId}", {groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void GroupApi::apiV1GroupsGroupIdBannedUsersUserIdDelete(const utility::string_t& groupId,
														 const utility::string_t& userId,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/banned-users/{userId}", {groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdDelete(const utility::string_t& groupId,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void GroupApi::apiV1GroupsGroupIdGet(const utility::string_t& groupId,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1UsersUserIdGroupsGet(const utility::string_t& userId,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/groups", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdUsersUserIdDelete(const utility::string_t& groupId,
												   const utility::string_t& userId,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/users/{userId}", {groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsSummariesGet(const std::optional<utility::string_t>& groupCode,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups-summaries", {});


	if (groupCode.has_value())
	{
		Uri.AddQueryParams("groupCode", groupCode.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdEmailInvitePost(const utility::string_t& groupId,
												 const std::optional<bool>& resendInvite,
												 const std::shared_ptr<GroupInviteDto>& RequestBody,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/email-invite", {groupId});


	if (resendInvite.has_value())
	{
		Uri.AddQueryParams("resendInvite", resendInvite.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdEmailInvitesPost(const utility::string_t& groupId,
												  const std::optional<bool>& resendInvite,
												  const std::optional<utility::string_t>& emailLinkUrl,
												  const std::optional<utility::string_t>& signupUrl,
												  const std::shared_ptr<GroupInviteDto>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/email-invites", {groupId});


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

void GroupApi::apiV1GroupsGroupIdEmailInvitesGet(const utility::string_t& groupId,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/email-invites", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdEmailInvitesBulkPost(const utility::string_t& groupId,
													  const std::optional<bool>& resendInvite,
													  const std::optional<utility::string_t>& emailLinkUrl,
													  const std::optional<utility::string_t>& signupUrl,
													  const std::vector<std::shared_ptr<GroupInviteDto>>& RequestBody,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/email-invites/bulk", {groupId});


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



void GroupApi::apiV1GroupsGroupIdLitePut(const utility::string_t& groupId,
										 const std::shared_ptr<GroupLiteDto>& RequestBody,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/lite", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void GroupApi::apiV1GroupsGroupIdLiteGet(const utility::string_t& groupId,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/lite", {groupId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdOwnerNewGroupOwnerIdPut(const utility::string_t& groupId,
														 const utility::string_t& newGroupOwnerId,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/owner/{newGroupOwnerId}", {groupId, newGroupOwnerId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdEmailInvitesEmailInviteIdDelete(const utility::string_t& groupId,
																 const utility::string_t& emailInviteId,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/email-invites/{emailInviteId}", {groupId, emailInviteId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdModeratorsUserIdPut(const utility::string_t& groupId,
													 const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/moderators/{userId}", {groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void GroupApi::apiV1GroupsGroupIdModeratorsUserIdDelete(const utility::string_t& groupId,
														const utility::string_t& userId,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/moderators/{userId}", {groupId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsLiteGet(const std::optional<std::vector<utility::string_t>>& Ids,
								  const std::optional<std::vector<utility::string_t>>& GroupTypes,
								  const std::optional<std::vector<utility::string_t>>& Names,
								  const std::optional<utility::string_t>& PartialName,
								  const std::optional<std::vector<utility::string_t>>& GroupOwnerIds,
								  const std::optional<std::vector<utility::string_t>>& ExcludeGroupOwnerIds,
								  const std::optional<std::vector<utility::string_t>>& Users,
								  const std::optional<bool>& Discoverable,
								  const std::optional<bool>& AutoModerator,
								  const std::optional<bool>& RequiresInvite,
								  const std::optional<bool>& Archived,
								  const std::optional<std::vector<utility::string_t>>& OrganizationIds,
								  const std::optional<int32_t>& Skip,
								  const std::optional<int32_t>& Limit,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/lite", {});


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



void GroupApi::apiV1GroupsUsersUserIdEmailInvitesGet(const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/users/{userId}/email-invites", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsGroupIdUsersUserIdEmailInvitesEmailInviteIdAcceptPost(const utility::string_t& groupId,
																				const utility::string_t& userId,
																				const utility::string_t& emailInviteId,
																				csp::services::ApiResponseHandlerBase* ResponseHandler,
																				csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept", {groupId, userId, emailInviteId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void GroupApi::apiV1GroupsArchivedPut(const utility::string_t& groupOwnerId,
									  const std::optional<std::vector<utility::string_t>>& groupIds,
									  const bool& archived,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/groups/archived", {});


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



InventoryApi::InventoryApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

InventoryApi::~InventoryApi()
{
}



void InventoryApi::apiV1UsersUserIdInventoryItemsGet(const utility::string_t& userId,
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
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items", {userId});


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

void InventoryApi::apiV1UsersUserIdInventoryItemsPost(const utility::string_t& userId,
													  const std::optional<bool>& notify,
													  const std::shared_ptr<InventoryItemDto>& RequestBody,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items", {userId});


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



void InventoryApi::apiV1UsersUserIdInventoryIdsGet(const utility::string_t& userId,
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
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-ids", {userId});


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



void InventoryApi::apiV1UsersInventoryItemsOwnersGet(const std::optional<std::vector<utility::string_t>>& Ids,
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
	Uri.SetWithParams(*RootUri + "/api/v1/users/inventory-items/owners", {});


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



void InventoryApi::apiV1UsersInventoryCountGet(const std::optional<std::vector<utility::string_t>>& Ids,
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
	Uri.SetWithParams(*RootUri + "/api/v1/users/inventory-count", {});


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



void InventoryApi::apiV1UsersUserIdInventoryItemsIdGet(const utility::string_t& userId,
													   const utility::string_t& id,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void InventoryApi::apiV1UsersUserIdInventoryItemsIdDelete(const utility::string_t& userId,
														  const utility::string_t& id,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void InventoryApi::apiV1UsersUserIdInventoryItemsIdPut(const utility::string_t& userId,
													   const utility::string_t& id,
													   const std::shared_ptr<InventoryItemDto>& RequestBody,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items/{id}", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void InventoryApi::apiV1UsersUserIdInventoryItemsIdEquipPut(const utility::string_t& userId,
															const utility::string_t& id,
															const std::shared_ptr<EquipItemDto>& RequestBody,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/inventory-items/{id}/equip", {userId, id});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



NtpApi::NtpApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
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



OrganizationApi::OrganizationApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

OrganizationApi::~OrganizationApi()
{
}



void OrganizationApi::apiV1OrganizationsPost(const std::shared_ptr<OrganizationDto>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::apiV1OrganizationsOrganizationIdGet(const utility::string_t& organizationId,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}", {organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void OrganizationApi::apiV1OrganizationsOrganizationIdPut(const utility::string_t& organizationId,
														  const std::shared_ptr<OrganizationDto>& RequestBody,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}", {organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void OrganizationApi::apiV1OrganizationsOrganizationIdDelete(const utility::string_t& organizationId,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}", {organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::apiV1OrganizationsOrganizationIdMembershipInvitesPost(const utility::string_t& organizationId,
																			const std::optional<bool>& resendInvite,
																			const std::optional<utility::string_t>& emailLinkUrl,
																			const std::optional<utility::string_t>& signupUrl,
																			const std::shared_ptr<OrganizationInviteDto>& RequestBody,
																			csp::services::ApiResponseHandlerBase* ResponseHandler,
																			csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/membership-invites", {organizationId});


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

void OrganizationApi::apiV1OrganizationsOrganizationIdMembershipInvitesGet(const utility::string_t& organizationId,
																		   csp::services::ApiResponseHandlerBase* ResponseHandler,
																		   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/membership-invites", {organizationId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::apiV1OrganizationsOrganizationIdMembershipInvitesBulkPost(
	const utility::string_t& organizationId,
	const std::optional<bool>& resendInvite,
	const std::optional<utility::string_t>& emailLinkUrl,
	const std::optional<utility::string_t>& signupUrl,
	const std::vector<std::shared_ptr<OrganizationInviteDto>>& RequestBody,
	csp::services::ApiResponseHandlerBase* ResponseHandler,
	csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/membership-invites/bulk", {organizationId});


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



void OrganizationApi::apiV1OrganizationsOrganizationIdUsersUserIdDelete(const utility::string_t& organizationId,
																		const utility::string_t& userId,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/users/{userId}", {organizationId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::apiV1OrganizationsOrganizationIdRolesGet(const utility::string_t& organizationId,
															   const std::optional<std::vector<utility::string_t>>& userIds,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/roles", {organizationId});


	if (userIds.has_value())
	{
		Uri.AddQueryParams("userIds", userIds.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void OrganizationApi::apiV1OrganizationsOrganizationIdUsersUserIdRolesPut(const utility::string_t& organizationId,
																		  const utility::string_t& userId,
																		  const std::vector<utility::string_t>& RequestBody,
																		  csp::services::ApiResponseHandlerBase* ResponseHandler,
																		  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/organizations/{organizationId}/users/{userId}/roles", {organizationId, userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



PingApi::PingApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
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



ProfileApi::ProfileApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

ProfileApi::~ProfileApi()
{
}



void ProfileApi::apiV1UsersPost(const std::shared_ptr<CreateUserRequest>& RequestBody,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}

void ProfileApi::apiV1UsersGet(const std::optional<utility::string_t>& GuestDeviceId,
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
	Uri.SetWithParams(*RootUri + "/api/v1/users", {});


	if (GuestDeviceId.has_value())
	{
		Uri.AddQueryParams("GuestDeviceId", GuestDeviceId.value());
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



void ProfileApi::apiV1UsersCreateSocialPost(const std::shared_ptr<CreateUserSocialRequest>& RequestBody,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/create-social", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdUpgradeGuestPost(const utility::string_t& userId,
												  const std::shared_ptr<UpgradeGuestRequest>& RequestBody,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/upgrade-guest", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdUpgradeGuestSocialPost(const utility::string_t& userId,
														const std::shared_ptr<UpgradeGuestSocialRequest>& RequestBody,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/upgrade-guest-social", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdDelete(const utility::string_t& userId,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}

void ProfileApi::apiV1UsersUserIdGet(const utility::string_t& userId,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdTokenChangePasswordPost(const utility::string_t& userId,
														 const std::shared_ptr<TokenResetPasswordRequest>& RequestBody,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/token-change-password", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdResetPasswordPost(const utility::string_t& userId,
												   const std::optional<utility::string_t>& tenant,
												   const std::optional<utility::string_t>& redirect,
												   const std::optional<utility::string_t>& emailLinkUrl,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/reset-password", {userId});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}


	if (redirect.has_value())
	{
		Uri.AddQueryParams("redirect", redirect.value());
	}


	if (emailLinkUrl.has_value())
	{
		Uri.AddQueryParams("emailLinkUrl", emailLinkUrl.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersForgotPasswordPost(const std::optional<utility::string_t>& redirect,
											  const std::optional<bool>& useTokenChangePasswordUrl,
											  const std::optional<utility::string_t>& emailLinkUrl,
											  const std::shared_ptr<ForgotPasswordRequest>& RequestBody,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/forgot-password", {});


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



void ProfileApi::apiV1UsersUserIdConfirmEmailPost(const utility::string_t& userId,
												  const std::optional<utility::string_t>& redirect,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/confirm-email", {userId});


	if (redirect.has_value())
	{
		Uri.AddQueryParams("redirect", redirect.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersEmailsEmailConfirmEmailReSendPost(const utility::string_t& email,
															 const std::optional<utility::string_t>& tenant,
															 const std::optional<utility::string_t>& redirect,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/emails/{email}/confirm-email/re-send", {email});


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



void ProfileApi::apiV1UsersUserIdMetagamePut(const utility::string_t& userId,
											 const std::shared_ptr<MetagameUpdate>& RequestBody,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/metagame", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void ProfileApi::apiV1UsersUserIdMetagameGet(const utility::string_t& userId,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/metagame", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdFirstNameFirstNamePut(const utility::string_t& userId,
													   const utility::string_t& firstName,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/first-name/{firstName}", {userId, firstName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdDisplayNamePut(const utility::string_t& userId,
												const utility::string_t& displayName,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/display-name", {userId});


	Uri.AddQueryParams("displayName", displayName);

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdLiteGet(const utility::string_t& userId,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/lite", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersLiteGet(const std::optional<std::vector<utility::string_t>>& ids,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/lite", {});


	if (ids.has_value())
	{
		Uri.AddQueryParams("ids", ids.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdLockAccountPut(const utility::string_t& userId,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/lock-account", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



void ProfileApi::apiV1UsersUserIdUnlockAccountPut(const utility::string_t& userId,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/unlock-account", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



SettingsApi::SettingsApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

SettingsApi::~SettingsApi()
{
}



void SettingsApi::apiV1UsersUserIdSettingsContextPut(const utility::string_t& userId,
													 const utility::string_t& context,
													 const std::shared_ptr<SettingsDto>& RequestBody,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/settings/{context}", {userId, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void SettingsApi::apiV1UsersUserIdSettingsContextGet(const utility::string_t& userId,
													 const utility::string_t& context,
													 const std::optional<std::vector<utility::string_t>>& keys,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/settings/{context}", {userId, context});


	if (keys.has_value())
	{
		Uri.AddQueryParams("keys", keys.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void SettingsApi::apiV1UsersUserIdSettingsContextDelete(const utility::string_t& userId,
														const utility::string_t& context,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/settings/{context}", {userId, context});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



void SettingsApi::apiV1UsersSettingsContextGet(const utility::string_t& context,
											   const std::optional<std::vector<utility::string_t>>& userIds,
											   const std::optional<std::vector<utility::string_t>>& keys,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/settings/{context}", {context});


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



void SettingsApi::apiV1UsersUserIdSettingsGet(const utility::string_t& userId,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/settings", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void SettingsApi::apiV1UsersUserIdSettingsContextKeynameDelete(const utility::string_t& userId,
															   const utility::string_t& context,
															   const utility::string_t& keyname,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/settings/{context}/{keyname}", {userId, context, keyname});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::DELETE, Uri, Payload, ResponseHandler, CancellationToken);
}



StripeApi::StripeApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

StripeApi::~StripeApi()
{
}



void StripeApi::apiV1VendorsStripeWebhookPost(const std::optional<utility::string_t>& tenant,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/vendors/stripe/webhook", {});


	if (tenant.has_value())
	{
		Uri.AddQueryParams("tenant", tenant.value());
	}

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::apiV1VendorsStripeCheckoutSessionsPost(const std::shared_ptr<StripeCheckoutRequest>& RequestBody,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/vendors/stripe/checkout-sessions", {});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));

	WebClient->SendRequest(csp::web::ERequestVerb::POST, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::apiV1VendorsStripeCustomersUserIdGet(const utility::string_t& userId,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/vendors/stripe/customers/{userId}", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



void StripeApi::apiV1VendorsStripeCustomerPortalsUserIdGet(const utility::string_t& userId,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/vendors/stripe/customer-portals/{userId}", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



TenantApi::TenantApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

TenantApi::~TenantApi()
{
}



void TenantApi::apiV1TenantsNamesTenantNamePut(const utility::string_t& tenantName,
											   const std::shared_ptr<TenantDto>& RequestBody,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tenants/names/{tenantName}", {tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}

void TenantApi::apiV1TenantsNamesTenantNameGet(const utility::string_t& tenantName,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/tenants/names/{tenantName}", {tenantName});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}



UserRolesApi::UserRolesApi(csp::web::WebClient* InWebClient) : ApiBase(InWebClient, &csp::CSPFoundation::GetEndpoints().UserServiceURI)
{
}

UserRolesApi::~UserRolesApi()
{
}



void UserRolesApi::apiV1UsersUserIdRolesGet(const utility::string_t& userId,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/roles", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::GET, Uri, Payload, ResponseHandler, CancellationToken);
}

void UserRolesApi::apiV1UsersUserIdRolesPut(const utility::string_t& userId,
											const std::shared_ptr<UserRolesDto>& RequestBody,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
{
	csp::web::Uri Uri;
	Uri.SetWithParams(*RootUri + "/api/v1/users/{userId}/roles", {userId});

	csp::web::HttpPayload Payload;
	Payload.AddHeader(CSP_TEXT("Content-Type"), CSP_TEXT("application/json"));
	Payload.AddContent(csp::web::TypeToJsonString(RequestBody));
	Payload.SetBearerToken();

	WebClient->SendRequest(csp::web::ERequestVerb::PUT, Uri, Payload, ResponseHandler, CancellationToken);
}



} // namespace csp::services::generated::userservice