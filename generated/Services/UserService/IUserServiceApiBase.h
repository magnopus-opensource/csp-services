

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::userservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct analyticsBulkPostParams
	{
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

class IApplicationSettingsApiBase : public csp::services::ApiBase
{
public:
	IApplicationSettingsApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct applicationsApplicationNameSettingsContextPutParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::shared_ptr<ApplicationSettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextPut(const applicationsApplicationNameSettingsContextPutParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsContextGetParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for an application by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextGet(const applicationsApplicationNameSettingsContextGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsContextDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all application settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextDelete(const applicationsApplicationNameSettingsContextDeleteParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantApplicationsApplicationNameSettingsContextGetParams
	{
		const utility::string_t& tenant;
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Anonymously gets the settings for an application by context. If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenant}/applications/{applicationName}/settings/{context}
	/// Authorization: Anonymous
	/// </remarks>
	virtual void
		tenantsTenantApplicationsApplicationNameSettingsContextGet(const tenantsTenantApplicationsApplicationNameSettingsContextGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct applicationsApplicationNameSettingsGetParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Gets all the contexts for which the application has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsGet(const applicationsApplicationNameSettingsGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct applicationsApplicationNameSettingsDeleteParams
	{
		const utility::string_t& applicationName;
	};


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsDelete(const applicationsApplicationNameSettingsDeleteParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct applicationsApplicationNameSettingsContextKeynameDeleteParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/applications/{applicationName}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void applicationsApplicationNameSettingsContextKeynameDelete(const applicationsApplicationNameSettingsContextKeynameDeleteParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IApplicationSettingsApiBase() = default;
};

class IAuthenticationApiBase : public csp::services::ApiBase
{
public:
	IAuthenticationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersLoginPostParams
	{
		const std::shared_ptr<LoginRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to login with username/pw or auto-register/login by unique identifier.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersLoginPost(const usersLoginPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogin_guestPostParams
	{
		const std::shared_ptr<LoginGuestRequest>& RequestBody;
	};


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
	virtual void usersLogin_guestPost(const usersLogin_guestPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogin_socialPostParams
	{
		const std::shared_ptr<LoginSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to login with a social authentication provider's token (such as Google).
	/// Also dynamically creates a new user profile when
	/// an account is not found by the email address from the social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/login-social
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersLogin_socialPost(const usersLogin_socialPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct social_providersProviderGetParams
	{
		const utility::string_t& provider;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& client;
	};


	/// <summary>
	/// Looks up the basic info required by a client to perform oauth2 flow
	/// with a social authentication provider by the provider's name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/social-providers/{provider}
	/// Authorization: Anonymous
	/// </remarks>
	virtual void social_providersProviderGet(const social_providersProviderGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLogoutPostParams
	{
		const std::shared_ptr<LogoutRequest>& RequestBody;
	};


	/// <summary>
	/// Provides registered accounts with the ability to logout with username/pw.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/logout
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersLogoutPost(const usersLogoutPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersRefreshPostParams
	{
		const std::shared_ptr<RefreshRequest>& RequestBody;
	};


	/// <summary>
	/// Provides ability to refresh the authentication tokens (access token and refresh token)
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/refresh
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersRefreshPost(const usersRefreshPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAuthenticationApiBase() = default;
};

class IAvatarsApiBase : public csp::services::ApiBase
{
public:
	IAvatarsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersUserIdAvatarsPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<AvatarManifestDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new avatar manifest
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/avatars
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsPost(const usersUserIdAvatarsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdAvatarsAvatarIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Finds avatar manifest by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdGet(const usersUserIdAvatarsAvatarIdGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdAvatarsAvatarIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
		const std::shared_ptr<AvatarManifestDto>& RequestBody;
	};


	/// <summary>
	/// Locates avatar manifest by its unique identifier avatarId
	/// and updates the writable fields of that avatar manifest with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdPut(const usersUserIdAvatarsAvatarIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdAvatarsAvatarIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Locates the avatar manifest by its ID avatarId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/avatars/{avatarId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdDelete(const usersUserIdAvatarsAvatarIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdAvatarsAvatarIdExistsGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& avatarId;
	};


	/// <summary>
	/// Finds whether an avatar manifest exists by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/avatars/{avatarId}/exists
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdAvatarsAvatarIdExistsGet(const usersUserIdAvatarsAvatarIdExistsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAvatarsApiBase() = default;
};

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct cache_keysGetParams
	{
		const std::optional<utility::string_t>& pattern;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysGet(const cache_keysGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct cache_keysDeleteParams
	{
		const std::optional<utility::string_t>& pattern;
	};


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysDelete(const cache_keysDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICacheApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct appsettingsGetParams
	{
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

class IEncryptedValueApiBase : public csp::services::ApiBase
{
public:
	IEncryptedValueApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct encrypted_valuesTenantGetParams
	{
		const std::vector<utility::string_t>& keys;
		const std::optional<bool>& withUserOverrides;
	};


	/// <summary>
	/// Bulk retrieve tenant-owned encrypted values by key names.
	/// Returns decrypted values for authorized callers.
	/// Optionally includes user overrides where user keys take precedence over tenant keys.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/encrypted-values/tenant
	/// Authorization: tenant-secrets,admin,magnopus-admin
	/// </remarks>
	virtual void encrypted_valuesTenantGet(const encrypted_valuesTenantGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct encrypted_valuesTenantKeyNamePutParams
	{
		const utility::string_t& keyName;
		const std::shared_ptr<SetEncryptedValueRequest>& RequestBody;
	};


	/// <summary>
	/// Create or update a tenant-owned encrypted value.
	/// If the key already exists, it will be updated; otherwise, a new key will be created.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/encrypted-values/tenant/{keyName}
	/// Authorization: admin,magnopus-admin
	/// </remarks>
	virtual void encrypted_valuesTenantKeyNamePut(const encrypted_valuesTenantKeyNamePutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEncryptedValueApiBase() = default;
};

class IGroupApiBase : public csp::services::ApiBase
{
public:
	IGroupApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct groupsPostParams
	{
		const std::shared_ptr<GroupDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new user group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsPost(const groupsPostParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsPutParams
	{
		const std::shared_ptr<GroupDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a user group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void groupsPut(const groupsPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& groupIds;
	};


	/// <summary>
	/// Locates the user groups by their ID groupIds
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsDelete(const groupsDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates groups by a provided list of ids
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGet(const groupsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct group_codesGroupCodeUsersUserIdPutParams
	{
		const utility::string_t& groupCode;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Used to join a user group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/group-codes/{groupCode}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void group_codesGroupCodeUsersUserIdPut(const group_codesGroupCodeUsersUserIdPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdGroup_code_resetPostParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Used to create new group code and remove old group code.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/group-code-reset
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdGroup_code_resetPost(const groupsGroupIdGroup_code_resetPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdBanned_usersUserIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and bans the user from the group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdBanned_usersUserIdPut(const groupsGroupIdBanned_usersUserIdPutParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdBanned_usersUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and removes the user from banned list for group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/banned-users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdBanned_usersUserIdDelete(const groupsGroupIdBanned_usersUserIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdDeleteParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates the user group by its ID groupId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdDelete(const groupsGroupIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates a group by the group's unique identifier groupId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdGet(const groupsGroupIdGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdGroupsGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates all groups for the user with unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/groups
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGroupsGet(const usersUserIdGroupsGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdUsersUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and removes the user from the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdUsersUserIdDelete(const groupsGroupIdUsersUserIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groups_summariesGetParams
	{
		const std::optional<utility::string_t>& groupCode;
	};


	/// <summary>
	/// Finds group summary by group code
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups-summaries
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groups_summariesGet(const groups_summariesGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesPostParams
	{
		const utility::string_t& groupId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::shared_ptr<GroupInviteDto>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesPost(const groupsGroupIdEmail_invitesPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdEmail_invitesGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Finds all outstanding invites to a group for group owners
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesGet(const groupsGroupIdEmail_invitesGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesBulkPostParams
	{
		const utility::string_t& groupId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::vector<std::shared_ptr<GroupInviteDto>>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to many people to accept request to join a group with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/email-invites/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesBulkPost(const groupsGroupIdEmail_invitesBulkPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdLitePutParams
	{
		const utility::string_t& groupId;
		const std::shared_ptr<GroupLiteDto>& RequestBody;
	};


	/// <summary>
	/// Locates a group by its unique identifier and updates the updateable fields
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdLitePut(const groupsGroupIdLitePutParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdLiteGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Locates the simplified group by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdLiteGet(const groupsGroupIdLiteGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdOwnerNewGroupOwnerIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& newGroupOwnerId;
	};


	/// <summary>
	/// Used to reassign new owner to the group
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/owner/{newGroupOwnerId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdOwnerNewGroupOwnerIdPut(const groupsGroupIdOwnerNewGroupOwnerIdPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesAcceptedGetParams
	{
		const utility::string_t& groupId;
	};


	/// <summary>
	/// Finds all accepted invites to a group
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/email-invites/accepted
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesAcceptedGet(const groupsGroupIdEmail_invitesAcceptedGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdEmail_invitesEmailInviteIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& emailInviteId;
	};


	/// <summary>
	/// Finds the specified invite for a group and removes it
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/email-invites/{emailInviteId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdEmail_invitesEmailInviteIdDelete(const groupsGroupIdEmail_invitesEmailInviteIdDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdModeratorsUserIdPutParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Used to add moderator to a group.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdModeratorsUserIdPut(const groupsGroupIdModeratorsUserIdPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsGroupIdModeratorsUserIdDeleteParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Removes a user as moderator of the group
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/groups/{groupId}/moderators/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdModeratorsUserIdDelete(const groupsGroupIdModeratorsUserIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsLiteGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& GroupTypes;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& PartialName;
		const std::optional<std::vector<utility::string_t>>& GroupOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeGroupOwnerIds;
		const std::optional<std::vector<utility::string_t>>& ExcludeIds;
		const std::optional<std::vector<utility::string_t>>& Users;
		const std::optional<bool>& Discoverable;
		const std::optional<bool>& AutoModerator;
		const std::optional<bool>& RequiresInvite;
		const std::optional<bool>& Archived;
		const std::optional<std::vector<utility::string_t>>& OrganizationIds;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<std::vector<utility::string_t>>& ExcludedTags;
		const std::optional<bool>& TagsAll;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsLiteGet(const groupsLiteGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct groupsLitePostParams
	{
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<GroupFilters>& RequestBody;
	};


	/// <summary>
	/// Search across all the groups for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsLitePost(const groupsLitePostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsUsersUserIdEmail_invitesGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds all outstanding invites for user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/users/{userId}/email-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsUsersUserIdEmail_invitesGet(const groupsUsersUserIdEmail_invitesGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams
	{
		const utility::string_t& groupId;
		const utility::string_t& userId;
		const utility::string_t& emailInviteId;
	};


	/// <summary>
	/// Accepts an email invite to join a group for a user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void
		groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPost(const groupsGroupIdUsersUserIdEmail_invitesEmailInviteIdAcceptPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsArchivedPutParams
	{
		const utility::string_t& groupOwnerId;
		const std::optional<std::vector<utility::string_t>>& groupIds;
		const bool& archived;
	};


	/// <summary>
	/// Used to set whether a Group is archived or not. Archived Groups
	/// cannot be modified, and they cannot be viewed by anyone but their owner.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/groups/archived
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsArchivedPut(const groupsArchivedPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IGroupApiBase() = default;
};

class IInventoryApiBase : public csp::services::ApiBase
{
public:
	IInventoryApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersUserIdInventory_itemsGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the user's inventory for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsGet(const usersUserIdInventory_itemsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsPostParams
	{
		const utility::string_t& userId;
		const std::optional<bool>& notify;
		const std::shared_ptr<InventoryItemDto>& RequestBody;
	};


	/// <summary>
	/// Adds new item to user inventory items
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/inventory-items
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service,tester
	/// </remarks>
	virtual void usersUserIdInventory_itemsPost(const usersUserIdInventory_itemsPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_idsGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Search across all of the inventory for those that match the search criteria
	/// and return a distinct list of only the Magnopus.Service.User.Dtos.InventoryItemDto.PrototypeId for each match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-ids
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_idsGet(const usersUserIdInventory_idsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersInventory_itemsOwnersGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Search across all of the item ids for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-items/owners
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersInventory_itemsOwnersGet(const usersInventory_itemsOwnersGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersInventory_countGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<bool>& Exchangeable;
		const std::optional<bool>& IsGift;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::map<utility::string_t, utility::string_t>>& State;
		const std::optional<std::vector<utility::string_t>>& ItemTypes;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
	};


	/// <summary>
	/// Count across all of the inventory for those that match the search criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/inventory-count
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersInventory_countGet(const usersInventory_countGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_itemsIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the inventory items by its instance's unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdGet(const usersUserIdInventory_itemsIdGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the inventory item by its user's unique identifier userId
	/// and item unique identifier id
	/// and removes it from the user's inventory items.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdDelete(const usersUserIdInventory_itemsIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdInventory_itemsIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
		const std::shared_ptr<InventoryItemDto>& RequestBody;
	};


	/// <summary>
	/// Locates the inventory item instance by its unique identifier id
	/// and updates the fields of that item with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}
	/// Authorization: external-service,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdPut(const usersUserIdInventory_itemsIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdInventory_itemsIdEquipPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
		const std::shared_ptr<EquipItemDto>& RequestBody;
	};


	/// <summary>
	/// Equip or UnEquip an inventory item based on a particular user
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/inventory-items/{id}/equip
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdInventory_itemsIdEquipPut(const usersUserIdInventory_itemsIdEquipPutParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInventoryApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct datetimeGetParams
	{
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

class IOrganizationApiBase : public csp::services::ApiBase
{
public:
	IOrganizationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct organizationsPostParams
	{
		const std::shared_ptr<OrganizationDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new organization
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void organizationsPost(const organizationsPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdGetParams
	{
		const utility::string_t& organizationId;
	};


	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdGet(const organizationsOrganizationIdGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct organizationsOrganizationIdPutParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<OrganizationDto>& RequestBody;
	};


	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// and updates the writable fields of that organization with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdPut(const organizationsOrganizationIdPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct organizationsOrganizationIdDeleteParams
	{
		const utility::string_t& organizationId;
	};


	/// <summary>
	/// Locates the organization by its unique identifier organizationId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/organizations/{organizationId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdDelete(const organizationsOrganizationIdDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdMembership_invitesPostParams
	{
		const utility::string_t& organizationId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::shared_ptr<OrganizationInviteDto>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to accept request to join an organization
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/membership-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdMembership_invitesPost(const organizationsOrganizationIdMembership_invitesPostParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct organizationsOrganizationIdMembership_invitesGetParams
	{
		const utility::string_t& organizationId;
	};


	/// <summary>
	/// Finds all pending membership invites to the organization
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/membership-invites
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdMembership_invitesGet(const organizationsOrganizationIdMembership_invitesGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdMembership_invitesBulkPostParams
	{
		const utility::string_t& organizationId;
		const std::optional<bool>& resendInvite;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::optional<utility::string_t>& signupUrl;
		const std::vector<std::shared_ptr<OrganizationInviteDto>>& RequestBody;
	};


	/// <summary>
	/// Sends email with a link to many users to join an organization with existing account or signup and join
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/membership-invites/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdMembership_invitesBulkPost(const organizationsOrganizationIdMembership_invitesBulkPostParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdUsersUserIdDeleteParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& userId;
	};


	/// <summary>
	/// Finds a user by userId and removes the user from the organization
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/organizations/{organizationId}/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdUsersUserIdDelete(const organizationsOrganizationIdUsersUserIdDeleteParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdRolesGetParams
	{
		const utility::string_t& organizationId;
		const std::optional<std::vector<utility::string_t>>& userIds;
	};


	/// <summary>
	/// Locates the roles of the members in the organization by their unique identifier userIds
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdRolesGet(const organizationsOrganizationIdRolesGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdUsersUserIdRolesPutParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& userId;
		const std::vector<utility::string_t>& RequestBody;
	};


	/// <summary>
	/// Locates the roles of user in the organization by its unique identifier organizationId
	/// and updates the user roles with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/organizations/{organizationId}/users/{userId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void organizationsOrganizationIdUsersUserIdRolesPut(const organizationsOrganizationIdUsersUserIdRolesPutParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IOrganizationApiBase() = default;
};

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct pingGetParams
	{
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

class IProfileApiBase : public csp::services::ApiBase
{
public:
	IProfileApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersPostParams
	{
		const std::shared_ptr<CreateUserRequest>& RequestBody;
	};


	/// <summary>
	/// Used to Create a User Profile.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersPost(const usersPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersGetParams
	{
		const std::optional<utility::string_t>& GuestDeviceId;
		const std::optional<utility::string_t>& PartialGuestDeviceId;
		const std::optional<utility::string_t>& Email;
		const std::optional<utility::string_t>& UserName;
		const std::optional<utility::string_t>& LastDeviceId;
		const std::optional<bool>& SearchPartialEmails;
		const std::optional<std::vector<utility::string_t>>& GuestDeviceIds;
		const std::optional<std::vector<utility::string_t>>& EmailAddresses;
		const std::optional<std::vector<utility::string_t>>& UserNames;
		const std::optional<std::vector<utility::string_t>>& LastDeviceIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	virtual void usersGet(const usersGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersCreate_socialPostParams
	{
		const std::shared_ptr<CreateUserSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Used to Create a User Profile using a token from a social authentication provider.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/create-social
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersCreate_socialPost(const usersCreate_socialPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUpgrade_guestPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UpgradeGuestRequest>& RequestBody;
	};


	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile.  This profile will not be email-verified
	/// unless the token included in the request is verified - implying that only tokens from partner systems
	/// where the user is already verified will end up verified in MGS.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	virtual void usersUserIdUpgrade_guestPost(const usersUserIdUpgrade_guestPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUpgrade_guest_socialPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UpgradeGuestSocialRequest>& RequestBody;
	};


	/// <summary>
	/// Used to upgrade a guest user into an registered User Profile using a token from a social authentication provider.
	/// This profile will be email-verified.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/upgrade-guest-social
	/// Authorization: enduser,admin,support,account-manager,internal-service
	/// </remarks>
	virtual void usersUserIdUpgrade_guest_socialPost(const usersUserIdUpgrade_guest_socialPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its ID userId
	/// and anonymizes the user data, and deletes supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdDelete(const usersUserIdDeleteParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGet(const usersUserIdGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdHard_deleteDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user profile by its ID userId
	/// and delete the profile as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void usersUserIdHard_deleteDelete(const usersUserIdHard_deleteDeleteParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersHard_deleteDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates the user profiles by their IDs ids
	/// and delete the profiles as well as any supporting data.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/hard-delete
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void usersHard_deleteDelete(const usersHard_deleteDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersProfile_idsPostParams
	{
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<UserQuery>& RequestBody;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/profile-ids
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersProfile_idsPost(const usersProfile_idsPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersTenantsTenantProfile_idsPostParams
	{
		const utility::string_t& tenant;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::shared_ptr<UserQuery>& RequestBody;
	};


	/// <summary>
	/// Search across all the Users for those that match the search criteria and returns a list of profile id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/tenants/{tenant}/profile-ids
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersTenantsTenantProfile_idsPost(const usersTenantsTenantProfile_idsPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdToken_change_passwordPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<TokenResetPasswordRequest>& RequestBody;
	};


	/// <summary>
	/// Use email-provided token to change password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/token-change-password
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersUserIdToken_change_passwordPost(const usersUserIdToken_change_passwordPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersForgot_passwordPostParams
	{
		const std::optional<utility::string_t>& redirect;
		const std::optional<bool>& useTokenChangePasswordUrl;
		const std::optional<utility::string_t>& emailLinkUrl;
		const std::shared_ptr<ForgotPasswordRequest>& RequestBody;
	};


	/// <summary>
	/// Send email to user with a link to reset user password
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/forgot-password
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersForgot_passwordPost(const usersForgot_passwordPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdConfirm_emailPostParams
	{
		const utility::string_t& userId;
		const std::optional<utility::string_t>& redirect;
	};


	/// <summary>
	/// Sends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/confirm-email
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdConfirm_emailPost(const usersUserIdConfirm_emailPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersEmailsEmailConfirm_emailRe_sendPostParams
	{
		const utility::string_t& email;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& redirect;
	};


	/// <summary>
	/// Resends email with a confirmation link to verify email address
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/emails/{email}/confirm-email/re-send
	/// Authorization: Anonymous
	/// </remarks>
	virtual void usersEmailsEmailConfirm_emailRe_sendPost(const usersEmailsEmailConfirm_emailRe_sendPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdMetagamePutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<MetagameUpdate>& RequestBody;
	};


	/// <summary>
	/// Locates the user metagame progress by its ID userId
	/// and updates the data based on the update to apply.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,external-service
	/// </remarks>
	virtual void usersUserIdMetagamePut(const usersUserIdMetagamePutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdMetagameGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the user metagame progress by its unique identifier userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/metagame
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdMetagameGet(const usersUserIdMetagameGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdFirst_nameFirstNamePutParams
	{
		const utility::string_t& userId;
		const utility::string_t& firstName;
	};


	/// <summary>
	/// Set the user profile's first name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/first-name/{firstName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdFirst_nameFirstNamePut(const usersUserIdFirst_nameFirstNamePutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdDisplay_namePutParams
	{
		const utility::string_t& userId;
		const utility::string_t& displayName;
	};


	/// <summary>
	/// Set the user profile's display name
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/display-name
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdDisplay_namePut(const usersUserIdDisplay_namePutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdLiteGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Locates the simplified user profile by its unique identifier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdLiteGet(const usersUserIdLiteGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersLiteGetParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Get the user profile's personality type and/or personality values type />
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersLiteGet(const usersLiteGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdLock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Sets the Users account to Locked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/lock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdLock_accountPut(const usersUserIdLock_accountPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdUnlock_accountPutParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Sets the Users account to unlocked
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/unlock-account
	/// Authorization: account-manager,magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdUnlock_accountPut(const usersUserIdUnlock_accountPutParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IProfileApiBase() = default;
};

class ISettingsApiBase : public csp::services::ApiBase
{
public:
	ISettingsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersUserIdSettingsContextPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const std::shared_ptr<SettingsDto>& RequestBody;
	};


	/// <summary>
	/// Creates context settings or updates existing settings - any previously existing settings
	/// stored in the context not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextPut(const usersUserIdSettingsContextPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSettingsContextGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for a user by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextGet(const usersUserIdSettingsContextGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSettingsContextDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
	};


	/// <summary>
	/// Deletes all settings related to a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextDelete(const usersUserIdSettingsContextDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersSettingsContextGetParams
	{
		const utility::string_t& context;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<std::vector<utility::string_t>>& keys;
	};


	/// <summary>
	/// Gets the settings for one or more users by context.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/settings/{context}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersSettingsContextGet(const usersSettingsContextGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdSettingsGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets all the contexts for which the user has settings
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/settings
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsGet(const usersUserIdSettingsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdSettingsContextKeynameDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& context;
		const utility::string_t& keyname;
	};


	/// <summary>
	/// Deletes keyname setting at a context.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/settings/{context}/{keyname}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSettingsContextKeynameDelete(const usersUserIdSettingsContextKeynameDeleteParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISettingsApiBase() = default;
};

class IStripeApiBase : public csp::services::ApiBase
{
public:
	IStripeApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct vendorsStripeWebhookPostParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& environmentAlias;
	};


	/// <summary>
	/// Here to handle webhooks
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/webhook
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsStripeWebhookPost(const vendorsStripeWebhookPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCheckout_sessionsPostParams
	{
		const std::shared_ptr<StripeCheckoutRequest>& RequestBody;
	};


	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// POST /api/v1/vendors/stripe/checkout-sessions
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsStripeCheckout_sessionsPost(const vendorsStripeCheckout_sessionsPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCustomersUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Here to handle checkout session creation
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customers/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsStripeCustomersUserIdGet(const vendorsStripeCustomersUserIdGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsStripeCustomer_portalsUserIdGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Here to provide link to customer portal
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/stripe/customer-portals/{userId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsStripeCustomer_portalsUserIdGet(const vendorsStripeCustomer_portalsUserIdGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IStripeApiBase() = default;
};

class ITenantApiBase : public csp::services::ApiBase
{
public:
	ITenantApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct tenantsNamesTenantNamePutParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<TenantDto>& RequestBody;
	};


	/// <summary>
	/// Creates tenant settings or updates existing tenant settings
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tenantsNamesTenantNamePut(const tenantsNamesTenantNamePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsNamesTenantNameGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Locates the tenant by its unique tenantName
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/names/{tenantName}
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tenantsNamesTenantNameGet(const tenantsNamesTenantNameGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsPendingDeleteParams
	{
		const int32_t& tenantAgeInDays;
	};


	/// <summary>
	/// Deletes all tenants still pending after a certain age tenantAgeInDays
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/pending
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void tenantsPendingDelete(const tenantsPendingDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsNamesNameDeleteParams
	{
		const utility::string_t& name;
		const std::shared_ptr<TenantCleanupFilters>& RequestBody;
	};


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
	virtual void tenantsNamesNameDelete(const tenantsNamesNameDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITenantApiBase() = default;
};

class IUserRolesApiBase : public csp::services::ApiBase
{
public:
	IUserRolesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct usersUserIdRolesGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the user's authorization roles by the user's userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdRolesGet(const usersUserIdRolesGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdRolesPutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<UserRolesDto>& RequestBody;
	};


	/// <summary>
	/// Updates the user's authorization roles by the userId to the roles provided
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/roles
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,account-manager
	/// </remarks>
	virtual void usersUserIdRolesPut(const usersUserIdRolesPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IUserRolesApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().UserService)
	{
	}



	struct rsionsGetParams
	{
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


} // namespace csp::services::generated::userservice