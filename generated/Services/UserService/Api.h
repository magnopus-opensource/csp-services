

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "IUserServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::userservice
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

class ApplicationSecretsApi final : public IApplicationSecretsApiBase
{
public:
	ApplicationSecretsApi(csp::web::WebClient* InWebClient);
	virtual ~ApplicationSecretsApi();



	/// <summary>
	/// List all secret definitions for an application.
	/// Any authenticated user can read definitions (they need to know what keys exist).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/{applicationName}
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	void application_secretsApplicationNameGet(const application_secretsApplicationNameGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Create a new secret definition for an application.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/application-secrets/{applicationName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void application_secretsApplicationNamePost(const application_secretsApplicationNamePostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Update an existing secret definition.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/application-secrets/{applicationName}/{envVarName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void application_secretsApplicationNameEnvVarNamePut(const application_secretsApplicationNameEnvVarNamePutParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken
														 = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Delete a secret definition.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/application-secrets/{applicationName}/{envVarName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void application_secretsApplicationNameEnvVarNameDelete(const application_secretsApplicationNameEnvVarNameDeleteParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// List distinct application names that have secret definitions.
	/// Magnopus-admin only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/application-secrets/applications
	/// Authorization: magnopus-admin
	/// </remarks>
	void application_secretsApplicationsGet(const application_secretsApplicationsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;
};

class ApplicationSettingsApi final : public IApplicationSettingsApiBase
{
public:
	ApplicationSettingsApi(csp::web::WebClient* InWebClient);
	virtual ~ApplicationSettingsApi();



	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void applicationsApplicationNameSettingsContextPut(const applicationsApplicationNameSettingsContextPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets the settings for an application by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void applicationsApplicationNameSettingsContextGet(const applicationsApplicationNameSettingsContextGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all application settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void applicationsApplicationNameSettingsContextDelete(const applicationsApplicationNameSettingsContextDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken
														  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Anonymously gets the settings for an application by context. If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenant}/applications/{applicationName}/settings/{context}
	/// Authorization: Anonymous
	/// </remarks>
	void tenantsTenantApplicationsApplicationNameSettingsContextGet(const tenantsTenantApplicationsApplicationNameSettingsContextGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken
																	= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets all the contexts for which the application has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void applicationsApplicationNameSettingsGet(const applicationsApplicationNameSettingsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void applicationsApplicationNameSettingsDelete(const applicationsApplicationNameSettingsDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void applicationsApplicationNameSettingsContextKeynameDelete(const applicationsApplicationNameSettingsContextKeynameDeleteParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken
																 = csp::common::CancellationToken::Dummy()) const override;
};

class AuthenticationApi final : public IAuthenticationApiBase
{
public:
	AuthenticationApi(csp::web::WebClient* InWebClient);
	virtual ~AuthenticationApi();



	/// <summary>
	/// Provides ability to login with username/pw or auto-register/login by unique identifier.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login
	/// Authorization: Anonymous
	/// </remarks>
	void usersLoginPost(const usersLoginPostParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Provides ability to login auto-register/login by unique identifier. The behavior on this endpoint is very specific.
	/// This endpoint should and can only be used in certain circumstances.  In fact, it's protected by a feature flag that
	/// is off for most environments.  The impact of this endpoint is to defer the creation of the user's profile if this
	/// is the users' first login.  This means that while the response will contain a UserId - that UserId may not be valid
	/// for several minutes until a bulk write process is triggered and completes. Any other endpoints that requires a userId
	/// should not be expected to be capable of returning valid results about this login session for an undetermined amount
	/// of time after using this method. If your application requires those endpoints, you should use the full login.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login-guest
	/// Authorization: Anonymous
	/// </remarks>
	void usersLogin_guestPost(const usersLogin_guestPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Provides ability to login with a social authentication provider's token (such as Google).
	/// Also dynamically creates a new user profile when
	/// an account is not found by the email address from the social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login-social
	/// Authorization: Anonymous
	/// </remarks>
	void usersLogin_socialPost(const usersLogin_socialPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Looks up the basic info required by a client to perform oauth2 flow
	/// with a social authentication provider by the provider's name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/social-providers/{provider}
	/// Authorization: Anonymous
	/// </remarks>
	void social_providersProviderGet(const social_providersProviderGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Provides registered accounts with the ability to logout with username/pw.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/logout
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersLogoutPost(const usersLogoutPostParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Provides ability to refresh the authentication tokens (access token and refresh token)
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/refresh
	/// Authorization: Anonymous
	/// </remarks>
	void usersRefreshPost(const usersRefreshPostParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Exchanges a valid refresh token for new auth tokens in a different tenant.
	/// The caller's identity is proved via the refresh token in the body (not the bearer header).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/exchange-tenancy
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersExchange_tenancyPost(const usersExchange_tenancyPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class AvatarsApi final : public IAvatarsApiBase
{
public:
	AvatarsApi(csp::web::WebClient* InWebClient);
	virtual ~AvatarsApi();



	/// <summary>
	/// Creates a new avatar manifest
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/avatars
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdAvatarsPost(const usersUserIdAvatarsPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds avatar manifest by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdAvatarsAvatarIdGet(const usersUserIdAvatarsAvatarIdGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates avatar manifest by its unique identifier avatarId
	/// and updates the writable fields of that avatar manifest with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdAvatarsAvatarIdPut(const usersUserIdAvatarsAvatarIdPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the avatar manifest by its ID avatarId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdAvatarsAvatarIdDelete(const usersUserIdAvatarsAvatarIdDeleteParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds whether an avatar manifest exists by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}/exists
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdAvatarsAvatarIdExistsGet(const usersUserIdAvatarsAvatarIdExistsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;
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

class CrossTenantSettingsApi final : public ICrossTenantSettingsApiBase
{
public:
	CrossTenantSettingsApi(csp::web::WebClient* InWebClient);
	virtual ~CrossTenantSettingsApi();



	/// <summary>
	/// Creates or updates cross-tenant settings for the authenticated user at the given context.
	/// Any previously existing settings stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersMeCross_tenant_settingsContextPut(const usersMeCross_tenant_settingsContextPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets the cross-tenant settings for the authenticated user by context.
	/// If keys are provided then only values for those keys will be returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersMeCross_tenant_settingsContextGet(const usersMeCross_tenant_settingsContextGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all cross-tenant settings related to a context for the authenticated user.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/me/cross-tenant-settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersMeCross_tenant_settingsContextDelete(const usersMeCross_tenant_settingsContextDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets all the contexts for which the authenticated user has cross-tenant settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/me/cross-tenant-settings
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersMeCross_tenant_settingsGet(const usersMeCross_tenant_settingsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes a specific key from cross-tenant settings at a context for the authenticated user.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/me/cross-tenant-settings/{context}/{keyname}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersMeCross_tenant_settingsContextKeynameDelete(const usersMeCross_tenant_settingsContextKeynameDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken
														  = csp::common::CancellationToken::Dummy()) const override;
};

class EncryptedValueApi final : public IEncryptedValueApiBase
{
public:
	EncryptedValueApi(csp::web::WebClient* InWebClient);
	virtual ~EncryptedValueApi();



	/// <summary>
	/// Bulk retrieve tenant-owned encrypted values by key names.
	/// Returns decrypted values for authorized callers.
	/// Optionally includes user overrides where user keys take precedence over tenant keys.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant
	/// Authorization: tenant-secrets,admin,magnopus-admin
	/// </remarks>
	void encrypted_valuesTenantGet(const encrypted_valuesTenantGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns all key names for tenant-owned encrypted values, without decrypted values.
	/// Useful for populating a key management UI.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant/key-names
	/// Authorization: tenant-secrets,admin,magnopus-admin
	/// </remarks>
	void encrypted_valuesTenantKey_namesGet(const encrypted_valuesTenantKey_namesGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Create or update a tenant-owned encrypted value.
	/// If the key already exists, it will be updated; otherwise, a new key will be created.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/encrypted-values/tenant/{keyName}
	/// Authorization: admin,magnopus-admin
	/// </remarks>
	void encrypted_valuesTenantKeyNamePut(const encrypted_valuesTenantKeyNamePutParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Delete a tenant-owned encrypted value by key name.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/encrypted-values/tenant/{keyName}
	/// Authorization: admin,magnopus-admin
	/// </remarks>
	void encrypted_valuesTenantKeyNameDelete(const encrypted_valuesTenantKeyNameDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;
};

class GroupApi final : public IGroupApiBase
{
public:
	GroupApi(csp::web::WebClient* InWebClient);
	virtual ~GroupApi();



	/// <summary>
	/// Creates a new user group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsPost(const groupsPostParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates or updates a user group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void groupsPut(const groupsPutParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the user groups by their ID groupIds
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsDelete(const groupsDeleteParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates groups by a provided list of ids
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGet(const groupsGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to join a user group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/group-codes/{groupCode}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void group_codesGroupCodeUsersUserIdPut(const group_codesGroupCodeUsersUserIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to create new group code and remove old group code.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/group-code-reset
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdGroup_code_resetPost(const groupsGroupIdGroup_code_resetPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds a user by userId and bans the user from the group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdBanned_usersUserIdPut(const groupsGroupIdBanned_usersUserIdPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Finds a user by userId and removes the user from banned list for group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdBanned_usersUserIdDelete(const groupsGroupIdBanned_usersUserIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the user group by its ID groupId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdDelete(const groupsGroupIdDeleteParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates a group by the group's unique identifier groupId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdGet(const groupsGroupIdGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates all groups for the user with unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdGroupsGet(const usersUserIdGroupsGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds a user by userId and removes the user from the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdUsersUserIdDelete(const groupsGroupIdUsersUserIdDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds group summary by group code
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups-summaries
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groups_summariesGet(const groups_summariesGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends email with a link to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdEmail_invitesPost(const groupsGroupIdEmail_invitesPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Finds all outstanding invites to a group for group owners
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdEmail_invitesGet(const groupsGroupIdEmail_invitesGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends email with a link to many people to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdEmail_invitesBulkPost(const groupsGroupIdEmail_invitesBulkPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates a group by its unique identifier and updates the updateable fields
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdLitePut(const groupsGroupIdLitePutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the simplified group by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdLiteGet(const groupsGroupIdLiteGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to reassign new owner to the group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/owner/{newGroupOwnerId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdOwnerNewGroupOwnerIdPut(const groupsGroupIdOwnerNewGroupOwnerIdPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds all accepted invites to a group
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites/accepted
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdEmail_invitesAcceptedGet(const groupsGroupIdEmail_invitesAcceptedGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds the specified invite for a group and removes it
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/email-invites/{emailInviteId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdEmail_invitesEmailInviteIdDelete(const groupsGroupIdEmail_invitesEmailInviteIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to add moderator to a group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdModeratorsUserIdPut(const groupsGroupIdModeratorsUserIdPutParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Removes a user as moderator of the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdModeratorsUserIdDelete(const groupsGroupIdModeratorsUserIdDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsLiteGet(const groupsLiteGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsLitePost(const groupsLitePostParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds all outstanding invites for user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/users/{userId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsUsersUserIdEmail_invitesGet(const groupsUsersUserIdEmail_invitesGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Accepts an email invite to join a group for a user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void
		groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPost(const groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken
																	 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to set whether a Group is archived or not. Archived Groups
	/// cannot be modified, and they cannot be viewed by anyone but their owner.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/archived
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsArchivedPut(const groupsArchivedPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class InventoryApi final : public IInventoryApiBase
{
public:
	InventoryApi(csp::web::WebClient* InWebClient);
	virtual ~InventoryApi();



	/// <summary>
	/// Search across all of the user's inventory for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdInventory_itemsGet(const usersUserIdInventory_itemsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Adds new item to user inventory items
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/inventory-items
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service,tester
	/// </remarks>
	void usersUserIdInventory_itemsPost(const usersUserIdInventory_itemsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the inventory for those that match the search criteria
	/// and return a distinct list of only the Magnopus.Service.User.Dtos.InventoryItemDto.PrototypeId for each match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-ids
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdInventory_idsGet(const usersUserIdInventory_idsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the item ids for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-items/owners
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersInventory_itemsOwnersGet(const usersInventory_itemsOwnersGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Count across all of the inventory for those that match the search criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-count
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersInventory_countGet(const usersInventory_countGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the inventory items by its instance's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdInventory_itemsIdGet(const usersUserIdInventory_itemsIdGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the inventory item by its user's unique identifier userId
	/// and item unique identifier id
	/// and removes it from the user's inventory items.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdInventory_itemsIdDelete(const usersUserIdInventory_itemsIdDeleteParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the inventory item instance by its unique identifier id
	/// and updates the fields of that item with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdInventory_itemsIdPut(const usersUserIdInventory_itemsIdPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Equip or UnEquip an inventory item based on a particular user
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}/equip
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdInventory_itemsIdEquipPut(const usersUserIdInventory_itemsIdEquipPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;
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

class OrganizationApi final : public IOrganizationApiBase
{
public:
	OrganizationApi(csp::web::WebClient* InWebClient);
	virtual ~OrganizationApi();



	/// <summary>
	/// Creates a new organization
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void organizationsPost(const organizationsPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdGet(const organizationsOrganizationIdGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// and updates the writable fields of that organization with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdPut(const organizationsOrganizationIdPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdDelete(const organizationsOrganizationIdDeleteParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends email with a link to accept request to join an organization
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/membership-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdMembership_invitesPost(const organizationsOrganizationIdMembership_invitesPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken
														   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Finds all pending membership invites to the organization
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/membership-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdMembership_invitesGet(const organizationsOrganizationIdMembership_invitesGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken
														  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends email with a link to many users to join an organization with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/membership-invites/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdMembership_invitesBulkPost(const organizationsOrganizationIdMembership_invitesBulkPostParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken
															   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds a user by userId and removes the user from the organization
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/organizations/{organizationId}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdUsersUserIdDelete(const organizationsOrganizationIdUsersUserIdDeleteParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken
													  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the roles of the members in the organization by their unique identifier userIds
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdRolesGet(const organizationsOrganizationIdRolesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the roles of user in the organization by its unique identifier organizationId
	/// and updates the user roles with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/organizations/{organizationId}/users/{userId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void organizationsOrganizationIdUsersUserIdRolesPut(const organizationsOrganizationIdUsersUserIdRolesPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;
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

class ProfileApi final : public IProfileApiBase
{
public:
	ProfileApi(csp::web::WebClient* InWebClient);
	virtual ~ProfileApi();



	/// <summary>
	/// Used to Create a User Profile.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users
	/// Authorization: Anonymous
	/// </remarks>
	void usersPost(const usersPostParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Search across all the Users for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	void usersGet(const usersGetParams& Params,
				  csp::services::ApiResponseHandlerBase* ResponseHandler,
				  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to Create a User Profile using a token from a social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/create-social
	/// Authorization: Anonymous
	/// </remarks>
	void usersCreate_socialPost(const usersCreate_socialPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile.  This profile will not be email-verified
	/// unless the token included in the request is verified - implying that only tokens from partner systems
	/// where the user is already verified will end up verified in MGS.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	void usersUserIdUpgrade_guestPost(const usersUserIdUpgrade_guestPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile using a token from a social authentication provider.
	/// This profile will be email-verified.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest-social
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	void usersUserIdUpgrade_guest_socialPost(const usersUserIdUpgrade_guest_socialPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the user profile by its ID userId
	/// and anonymizes the user data, and deletes supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdDelete(const usersUserIdDeleteParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the user profile by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdGet(const usersUserIdGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the user profile by its ID userId
	/// and delete the profile as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	void usersUserIdHard_deleteDelete(const usersUserIdHard_deleteDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the user profiles by their IDs ids
	/// and delete the profiles as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	void usersHard_deleteDelete(const usersHard_deleteDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns all tenants where the specified user's email has a profile.
	/// The caller must be the same user or a super-admin.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/tenancies
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdTenanciesGet(const usersUserIdTenanciesGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/profile-ids
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersProfile_idsPost(const usersProfile_idsPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/tenants/{tenant}/profile-ids
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void usersTenantsTenantProfile_idsPost(const usersTenantsTenantProfile_idsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Use email-provided token to change password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/token-change-password
	/// Authorization: Anonymous
	/// </remarks>
	void usersUserIdToken_change_passwordPost(const usersUserIdToken_change_passwordPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Send email to user with a link to reset user password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/forgot-password
	/// Authorization: Anonymous
	/// </remarks>
	void usersForgot_passwordPost(const usersForgot_passwordPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/confirm-email
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdConfirm_emailPost(const usersUserIdConfirm_emailPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Resends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/emails/{email}/confirm-email/re-send
	/// Authorization: Anonymous
	/// </remarks>
	void usersEmailsEmailConfirm_emailRe_sendPost(const usersEmailsEmailConfirm_emailRe_sendPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the user metagame progress by its ID userId
	/// and updates the data based on the update to apply.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,external-service
	/// </remarks>
	void usersUserIdMetagamePut(const usersUserIdMetagamePutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the user metagame progress by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdMetagameGet(const usersUserIdMetagameGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Set the user profile's first name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/first-name/{firstName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdFirst_nameFirstNamePut(const usersUserIdFirst_nameFirstNamePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Set the user profile's display name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/display-name
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdDisplay_namePut(const usersUserIdDisplay_namePutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the simplified user profile by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdLiteGet(const usersUserIdLiteGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Get the user profile's personality type and/or personality values type />
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersLiteGet(const usersLiteGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sets the Users account to Locked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/lock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdLock_accountPut(const usersUserIdLock_accountPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sets the Users account to unlocked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/unlock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdUnlock_accountPut(const usersUserIdUnlock_accountPutParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SettingsApi final : public ISettingsApiBase
{
public:
	SettingsApi(csp::web::WebClient* InWebClient);
	virtual ~SettingsApi();



	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSettingsContextPut(const usersUserIdSettingsContextPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets the settings for a user by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSettingsContextGet(const usersUserIdSettingsContextGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSettingsContextDelete(const usersUserIdSettingsContextDeleteParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the settings for one or more users by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersSettingsContextGet(const usersSettingsContextGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets all the contexts for which the user has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSettingsGet(const usersUserIdSettingsGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSettingsContextKeynameDelete(const usersUserIdSettingsContextKeynameDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken
												 = csp::common::CancellationToken::Dummy()) const override;
};

class StripeApi final : public IStripeApiBase
{
public:
	StripeApi(csp::web::WebClient* InWebClient);
	virtual ~StripeApi();



	/// <summary>
	/// Here to handle webhooks
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/webhook
	/// Authorization: Anonymous
	/// </remarks>
	void vendorsStripeWebhookPost(const vendorsStripeWebhookPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/checkout-sessions
	/// Authorization: Anonymous
	/// </remarks>
	void vendorsStripeCheckout_sessionsPost(const vendorsStripeCheckout_sessionsPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customers/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void vendorsStripeCustomersUserIdGet(const vendorsStripeCustomersUserIdGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Here to provide link to customer portal
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customer-portals/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void vendorsStripeCustomer_portalsUserIdGet(const vendorsStripeCustomer_portalsUserIdGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;
};

class SuperAdminTenantApi final : public ISuperAdminTenantApiBase
{
public:
	SuperAdminTenantApi(csp::web::WebClient* InWebClient);
	virtual ~SuperAdminTenantApi();



	/// <summary>
	/// Lists all tenants with optional filtering and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsGet(const super_adminTenantsGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets a single tenant by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameGet(const super_adminTenantsTenantNameGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Lists users for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/users
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameUsersGet(const super_adminTenantsTenantNameUsersGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locks a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/lock-account
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameUsersUserIdLock_accountPut(const super_adminTenantsTenantNameUsersUserIdLock_accountPutParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken
																= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Unlocks a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/unlock-account
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameUsersUserIdUnlock_accountPut(const super_adminTenantsTenantNameUsersUserIdUnlock_accountPutParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken
																  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Soft-deletes (anonymizes) a user account in the specified tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/users/{userId}
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameUsersUserIdDelete(const super_adminTenantsTenantNameUsersUserIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates roles for a user in the specified tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/users/{userId}/roles
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameUsersUserIdRolesPut(const super_adminTenantsTenantNameUsersUserIdRolesPutParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken
														 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets email settings (including allow-list) for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/email-settings
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameEmail_settingsGet(const super_adminTenantsTenantNameEmail_settingsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates email settings (including allow-list) for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/email-settings
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameEmail_settingsPut(const super_adminTenantsTenantNameEmail_settingsPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets all secret key names for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/secrets/key-names
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameSecretsKey_namesGet(const super_adminTenantsTenantNameSecretsKey_namesGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken
														 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets decrypted secret values for a specific tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/secrets
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameSecretsGet(const super_adminTenantsTenantNameSecretsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sets a secret value for a specific tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/super-admin/tenants/{tenantName}/secrets/{keyName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameSecretsKeyNamePut(const super_adminTenantsTenantNameSecretsKeyNamePutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken
													   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a secret for a specific tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/secrets/{keyName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameSecretsKeyNameDelete(const super_adminTenantsTenantNameSecretsKeyNameDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken
														  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns DNS configuration for the hostname management UI.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/dns-settings
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminDns_settingsGet(const super_adminDns_settingsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates a CNAME hostname record for a tenant.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/super-admin/tenants/{tenantName}/hostnames
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameHostnamesPost(const super_adminTenantsTenantNameHostnamesPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes a hostname CNAME record for a tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/super-admin/tenants/{tenantName}/hostnames/{hostname}
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameHostnamesHostnameDelete(const super_adminTenantsTenantNameHostnamesHostnameDeleteParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken
															 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Checks DNS propagation and resolution status for a hostname.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/super-admin/tenants/{tenantName}/hostnames/{hostname}/dns-status
	/// Authorization: magnopus-admin
	/// </remarks>
	void super_adminTenantsTenantNameHostnamesHostnameDns_statusGet(const super_adminTenantsTenantNameHostnamesHostnameDns_statusGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken
																	= csp::common::CancellationToken::Dummy()) const override;
};

class TenantApi final : public ITenantApiBase
{
public:
	TenantApi(csp::web::WebClient* InWebClient);
	virtual ~TenantApi();



	/// <summary>
	/// Returns the current user's tenant data, scoped to fields relevant for the admin portal.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/self
	/// Authorization: admin,magnopus-admin
	/// </remarks>
	void tenantsSelfGet(const tenantsSelfGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns the inferred tenant name based on the request Origin/Referer headers.
	/// Allows clients to discover their tenant before authentication.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/inferred-name
	/// Authorization: Anonymous
	/// </remarks>
	void tenantsInferred_nameGet(const tenantsInferred_nameGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates only the email allow-list fields on the current tenant.
	/// Restricted to AllowedEmailAddresses and AllowedEmailDomains.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/self/email-settings
	/// Authorization: admin,magnopus-admin
	/// </remarks>
	void tenantsSelfEmail_settingsPut(const tenantsSelfEmail_settingsPutParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates tenant settings or updates existing tenant settings
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void tenantsNamesTenantNamePut(const tenantsNamesTenantNamePutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the tenant by its unique tenantName
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin
	/// </remarks>
	void tenantsNamesTenantNameGet(const tenantsNamesTenantNameGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes all tenants still pending after a certain age tenantAgeInDays
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/pending
	/// Authorization: magnopus-admin
	/// </remarks>
	void tenantsPendingDelete(const tenantsPendingDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes a tenant and all the tenant data that match the
	/// name
	/// Deletion happens asynchronously, so you will receive a response before the call is completed.
	/// Completing the call may take upwards of a few minutes depending on the size of the tenant and the data
	/// there within
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/names/{name}
	/// Authorization: magnopus-admin
	/// </remarks>
	void tenantsNamesNameDelete(const tenantsNamesNameDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class TenantAdminApi final : public ITenantAdminApiBase
{
public:
	TenantAdminApi(csp::web::WebClient* InWebClient);
	virtual ~TenantAdminApi();



	/// <summary>
	/// Gets the caller's own tenant details.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/tenant
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminTenantGet(const tenant_adminTenantGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates the four tenant-admin-editable fields on the caller's own tenant:
	/// AllowedEmailAddresses, AllowedEmailDomains, CompanyName, DisplayName.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/tenant
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminTenantPut(const tenant_adminTenantPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Lists users in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/users
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminUsersGet(const tenant_adminUsersGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locks a user account in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/lock-account
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminUsersUserIdLock_accountPut(const tenant_adminUsersUserIdLock_accountPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Unlocks a user account in the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/unlock-account
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminUsersUserIdUnlock_accountPut(const tenant_adminUsersUserIdUnlock_accountPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates roles for a user in the caller's own tenant.
	/// Role escalation guard: cannot grant magnopus-admin or magnopus-support.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/users/{userId}/roles
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminUsersUserIdRolesPut(const tenant_adminUsersUserIdRolesPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets email settings for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/email-settings
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminEmail_settingsGet(const tenant_adminEmail_settingsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates email settings for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/email-settings
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminEmail_settingsPut(const tenant_adminEmail_settingsPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets all secret key names for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/secrets/key-names
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminSecretsKey_namesGet(const tenant_adminSecretsKey_namesGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets decrypted secret values for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenant-admin/secrets
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminSecretsGet(const tenant_adminSecretsGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Sets a secret value for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenant-admin/secrets/{keyName}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminSecretsKeyNamePut(const tenant_adminSecretsKeyNamePutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a secret for the caller's own tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenant-admin/secrets/{keyName}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void tenant_adminSecretsKeyNameDelete(const tenant_adminSecretsKeyNameDeleteParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class UserRolesApi final : public IUserRolesApiBase
{
public:
	UserRolesApi(csp::web::WebClient* InWebClient);
	virtual ~UserRolesApi();



	/// <summary>
	/// Gets the user's authorization roles by the user's userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdRolesGet(const usersUserIdRolesGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates the user's authorization roles by the userId to the roles provided
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	void usersUserIdRolesPut(const usersUserIdRolesPutParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
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


} // namespace csp::services::generated::userservice