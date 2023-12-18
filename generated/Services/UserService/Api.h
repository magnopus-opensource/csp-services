

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Services/ApiBase/ApiBase.h"
#include "Web/HttpPayload.h"
#include "Dto.h"

#include <optional>


namespace csp::services::generated::userservice
{


    class ApplicationSettingsApi final : public csp::services::ApiBase
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
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsContextPut(
                    const utility::string_t& applicationName,const utility::string_t& context,const std::shared_ptr<ApplicationSettingsDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Gets the settings for an application by context.  If keys are provided
                    /// then only values for those keys will be returned, otherwise all key/value pairs are returned.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/applications/{applicationName}/settings/{context}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsContextGet(
                    const utility::string_t& applicationName,const utility::string_t& context,const std::optional<std::vector<utility::string_t>>&
                keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes all application settings related to a context.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/applications/{applicationName}/settings/{context}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsContextDelete(
                    const utility::string_t& applicationName,const utility::string_t& context,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets all the contexts for which the application has settings
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/applications/{applicationName}/settings
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsGet(
                    const utility::string_t& applicationName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes all settings related to a context.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/applications/{applicationName}/settings
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsDelete(
                    const utility::string_t& applicationName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Deletes keyname setting at a context.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/applications/{applicationName}/settings/{context}/{keyname}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1ApplicationsApplicationNameSettingsContextKeynameDelete(
                    const utility::string_t& applicationName,const utility::string_t& context,const utility::string_t& keyname,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class AuthenticationApi final : public csp::services::ApiBase
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
                void apiV1UsersLoginPost(
                    const std::shared_ptr<LoginRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Provides ability to login with a social authentication provider's token (such as Google).
                    /// Also dynamically creates a new user profile when
                    /// an account is not found by the email address from the social authentication provider.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/login-social
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersLoginSocialPost(
                    const std::shared_ptr<LoginSocialRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Looks up the basic info required by a client to perform oauth2 flow
                    /// with a social authentication provider by the provider's name.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/social-providers/{provider}
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1SocialProvidersProviderGet(
                    const utility::string_t& provider,const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Provides registered accounts with the ability to logout with username/pw.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/logout
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersLogoutPost(
                    const std::shared_ptr<LogoutRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Provides ability to refresh the authentication tokens (access token and refresh token)
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/refresh
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersRefreshPost(
                    const std::shared_ptr<RefreshRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Provides a onetime key that can be exchanged for MGS token
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/onetimekey
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersOnetimekeyPost(
                    const std::shared_ptr<OneTimeKeyRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Provides ability to exchange one time key for authentication tokens (access token and refresh token)
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/keyexchange
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersKeyexchangePost(
                    const std::shared_ptr<ExchangeKeyRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class AvatarsApi final : public csp::services::ApiBase
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
                void apiV1UsersUserIdAvatarsPost(
                    const utility::string_t& userId,const std::shared_ptr<AvatarManifestDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds avatar manifest by its unique identifier
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/avatars/{avatarId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdAvatarsAvatarIdGet(
                    const utility::string_t& userId,const utility::string_t& avatarId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates avatar manifest by its unique identifier avatarId
                    /// and updates the writable fields of that avatar manifest with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/avatars/{avatarId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdAvatarsAvatarIdPut(
                    const utility::string_t& userId,const utility::string_t& avatarId,const std::shared_ptr<AvatarManifestDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the avatar manifest by its ID avatarId
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/avatars/{avatarId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdAvatarsAvatarIdDelete(
                    const utility::string_t& userId,const utility::string_t& avatarId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds whether an avatar manifest exists by its unique identifier
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/avatars/{avatarId}/exists
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdAvatarsAvatarIdExistsGet(
                    const utility::string_t& userId,const utility::string_t& avatarId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
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
                void appsettingsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// POST /appsettings/reload
                /// Authorization: magnopus-admin
                /// </remarks>
                void appsettingsReloadPost(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                /// <remarks>
                /// GET /featureflags
                /// Authorization: magnopus-admin
                /// </remarks>
                void featureflagsGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class GroupApi final : public csp::services::ApiBase
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
                void apiV1GroupsPost(
                    const std::shared_ptr<GroupDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates groups by a provided list of ids
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGet(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to join a user group.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/group-codes/{groupCode}/users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupCodesGroupCodeUsersUserIdPut(
                    const utility::string_t& groupCode,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to create new group code and remove old group code.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/groups/{groupId}/group-code-reset
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdGroupCodeResetPost(
                    const utility::string_t& groupId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds a user by userId and bans the user from the group.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/groups/{groupId}/banned-users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdBannedUsersUserIdPut(
                    const utility::string_t& groupId,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Finds a user by userId and removes the user from banned list for group
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/groups/{groupId}/banned-users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdBannedUsersUserIdDelete(
                    const utility::string_t& groupId,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the user group by its ID groupId
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/groups/{groupId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdDelete(
                    const utility::string_t& groupId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates a group by the group's unique identifier groupId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/{groupId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdGet(
                    const utility::string_t& groupId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates all groups for the user with unique identifier userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/groups
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdGroupsGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds a user by userId and removes the user from the group
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/groups/{groupId}/users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdUsersUserIdDelete(
                    const utility::string_t& groupId,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds group summary by group code
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups-summaries
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsSummariesGet(
                    const std::optional<utility::string_t>&
                groupCode,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sends email with a link to accept request to join a group with existing account or signup and join
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/groups/{groupId}/email-invite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdEmailInvitePost(
                    const utility::string_t& groupId,const std::optional<bool>&
                resendInvite,const std::shared_ptr<GroupInviteDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sends email with a link to accept request to join a group with existing account or signup and join
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/groups/{groupId}/email-invites
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdEmailInvitesPost(
                    const utility::string_t& groupId,const std::optional<bool>&
                resendInvite,const std::optional<utility::string_t>&
                emailLinkUrl,const std::optional<utility::string_t>&
                signupUrl,const std::shared_ptr<GroupInviteDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Finds all outstanding invites to a group for group owners
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/{groupId}/email-invites
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdEmailInvitesGet(
                    const utility::string_t& groupId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sends email with a link to many people to accept request to join a group with existing account or signup and join
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/groups/{groupId}/email-invites/bulk
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdEmailInvitesBulkPost(
                    const utility::string_t& groupId,const std::optional<bool>&
                resendInvite,const std::optional<utility::string_t>&
                emailLinkUrl,const std::optional<utility::string_t>&
                signupUrl,const std::vector<std::shared_ptr<GroupInviteDto>>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates a group by its unique identifier and updates the updateable fields
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/groups/{groupId}/lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdLitePut(
                    const utility::string_t& groupId,const std::shared_ptr<GroupLiteDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the simplified group by its unique identifier
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/{groupId}/lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdLiteGet(
                    const utility::string_t& groupId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to reassign new owner to the group
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/groups/{groupId}/owner/{newGroupOwnerId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdOwnerNewGroupOwnerIdPut(
                    const utility::string_t& groupId,const utility::string_t& newGroupOwnerId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds the specified invite for a group and removes it
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/groups/{groupId}/email-invites/{emailInviteId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdEmailInvitesEmailInviteIdDelete(
                    const utility::string_t& groupId,const utility::string_t& emailInviteId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to add moderator to a group.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/groups/{groupId}/moderators/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdModeratorsUserIdPut(
                    const utility::string_t& groupId,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Removes a user as moderator of the group
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/groups/{groupId}/moderators/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdModeratorsUserIdDelete(
                    const utility::string_t& groupId,const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all the groups for those that match the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsLiteGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                GroupTypes,const std::optional<std::vector<utility::string_t>>&
                Names,const std::optional<utility::string_t>&
                PartialName,const std::optional<std::vector<utility::string_t>>&
                GroupOwnerIds,const std::optional<std::vector<utility::string_t>>&
                ExcludeGroupOwnerIds,const std::optional<std::vector<utility::string_t>>&
                Users,const std::optional<bool>&
                Discoverable,const std::optional<bool>&
                AutoModerator,const std::optional<bool>&
                RequiresInvite,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Finds all outstanding invites for user
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/groups/users/{userId}/email-invites
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsUsersUserIdEmailInvitesGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Accepts an email invite to join a group for a user
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/groups/{groupId}/users/{userId}/email-invites/{emailInviteId}/accept
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1GroupsGroupIdUsersUserIdEmailInvitesEmailInviteIdAcceptPost(
                    const utility::string_t& groupId,const utility::string_t& userId,const utility::string_t& emailInviteId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class InventoryApi final : public csp::services::ApiBase
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
                void apiV1UsersUserIdInventoryItemsGet(
                    const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<bool>&
                Exchangeable,const std::optional<bool>&
                IsGift,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::map<utility::string_t, utility::string_t>>&
                State,const std::optional<std::vector<utility::string_t>>&
                ItemTypes,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<utility::string_t>&
                CreatedBefore,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Adds new item to user inventory items
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/inventory-items
                /// Authorization: external-service,magnopus-admin,admin,support,internal-service,tester
                /// </remarks>
                void apiV1UsersUserIdInventoryItemsPost(
                    const utility::string_t& userId,const std::optional<bool>&
                notify,const std::shared_ptr<InventoryItemDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the inventory for those that match the search criteria
                    /// and return a distinct list of only the Magnopus.Service.User.Dtos.InventoryItemDto.PrototypeId for each match.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/inventory-ids
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdInventoryIdsGet(
                    const utility::string_t& userId,const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<bool>&
                Exchangeable,const std::optional<bool>&
                IsGift,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::map<utility::string_t, utility::string_t>>&
                State,const std::optional<std::vector<utility::string_t>>&
                ItemTypes,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<utility::string_t>&
                CreatedBefore,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Search across all of the item ids for those that match the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/inventory-items/owners
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersInventoryItemsOwnersGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<bool>&
                Exchangeable,const std::optional<bool>&
                IsGift,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::map<utility::string_t, utility::string_t>>&
                State,const std::optional<std::vector<utility::string_t>>&
                ItemTypes,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<utility::string_t>&
                CreatedBefore,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Count across all of the inventory for those that match the search criteria
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/inventory-count
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersInventoryCountGet(
                    const std::optional<std::vector<utility::string_t>>&
                Ids,const std::optional<std::vector<utility::string_t>>&
                PrototypeIds,const std::optional<bool>&
                Exchangeable,const std::optional<bool>&
                IsGift,const std::optional<std::vector<utility::string_t>>&
                Tags,const std::optional<bool>&
                TagsAll,const std::optional<std::vector<utility::string_t>>&
                UserIds,const std::optional<std::map<utility::string_t, utility::string_t>>&
                State,const std::optional<std::vector<utility::string_t>>&
                ItemTypes,const std::optional<utility::string_t>&
                CreatedAfter,const std::optional<utility::string_t>&
                CreatedBefore,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the inventory items by its instance's unique identifier id
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/inventory-items/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdInventoryItemsIdGet(
                    const utility::string_t& userId,const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the inventory item by its user's unique identifier userId
                    /// and item unique identifier id
                    /// and removes it from the user's inventory items.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/inventory-items/{id}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdInventoryItemsIdDelete(
                    const utility::string_t& userId,const utility::string_t& id,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the inventory item instance by its unique identifier id
                    /// and updates the fields of that item with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/inventory-items/{id}
                /// Authorization: external-service,magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdInventoryItemsIdPut(
                    const utility::string_t& userId,const utility::string_t& id,const std::shared_ptr<InventoryItemDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Equip or UnEquip an inventory item based on a particular user
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/inventory-items/{id}/equip
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdInventoryItemsIdEquipPut(
                    const utility::string_t& userId,const utility::string_t& id,const std::shared_ptr<EquipItemDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
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
                void datetimeGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class OrganizationApi final : public csp::services::ApiBase
    {
    public:
        OrganizationApi(csp::web::WebClient* InWebClient);
        virtual ~OrganizationApi();

        
            
                
                    /// <summary>
                    /// Creates a new organization
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/organizations
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1OrganizationsPost(
                    const std::shared_ptr<OrganizationDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the organization by its unique identifier organizationId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/organizations/{organizationId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1OrganizationsOrganizationIdGet(
                    const utility::string_t& organizationId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the organization by its unique identifier organizationId
                    /// and updates the writable fields of that organization with the new values from the request body.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/organizations/{organizationId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1OrganizationsOrganizationIdPut(
                    const utility::string_t& organizationId,const std::shared_ptr<OrganizationDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the organization by its unique identifier organizationId
                    /// and deletes it from the data store.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/organizations/{organizationId}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1OrganizationsOrganizationIdDelete(
                    const utility::string_t& organizationId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
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
                void pingGet(
                    csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class ProfileApi final : public csp::services::ApiBase
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
                void apiV1UsersPost(
                    const std::shared_ptr<CreateUserRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Search across all the Users for those that match the search criteria
                    /// or an empty list if none found
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users
                /// Authorization: magnopus-admin,admin,support,internal-service,account-manager
                /// </remarks>
                void apiV1UsersGet(
                    const std::optional<utility::string_t>&
                GuestDeviceId,const std::optional<utility::string_t>&
                Email,const std::optional<utility::string_t>&
                UserName,const std::optional<utility::string_t>&
                LastDeviceId,const std::optional<bool>&
                SearchPartialEmails,const std::optional<std::vector<utility::string_t>>&
                GuestDeviceIds,const std::optional<std::vector<utility::string_t>>&
                EmailAddresses,const std::optional<std::vector<utility::string_t>>&
                UserNames,const std::optional<std::vector<utility::string_t>>&
                LastDeviceIds,const std::optional<int32_t>&
                Skip,const std::optional<int32_t>&
                Limit,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to Create a User Profile using a token from a social authentication provider.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/create-social
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersCreateSocialPost(
                    const std::shared_ptr<CreateUserSocialRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to upgrade a guest user into an registered User Profile.  This profile will not be email-verified
                    /// unless the token included in the request is verified - implying that only tokens from partner systems
                    /// where the user is already verified will end up verified in MGS.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/upgrade-guest
                /// Authorization: enduser,admin,support,account-manager,internal-service
                /// </remarks>
                void apiV1UsersUserIdUpgradeGuestPost(
                    const utility::string_t& userId,const std::shared_ptr<UpgradeGuestRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Used to upgrade a guest user into an registered User Profile using a token from a social authentication provider.
                    /// This profile will be email-verified.
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/upgrade-guest-social
                /// Authorization: enduser,admin,support,account-manager,internal-service
                /// </remarks>
                void apiV1UsersUserIdUpgradeGuestSocialPost(
                    const utility::string_t& userId,const std::shared_ptr<UpgradeGuestSocialRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the user profile by its ID userId
                    /// and deletes it.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdDelete(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the user profile by its unique identifier userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Use email-provided token to change password
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/token-change-password
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersUserIdTokenChangePasswordPost(
                    const utility::string_t& userId,const std::shared_ptr<TokenResetPasswordRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Send email to user with a link to reset user password
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/reset-password
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersUserIdResetPasswordPost(
                    const utility::string_t& userId,const std::optional<utility::string_t>&
                tenant,const std::optional<utility::string_t>&
                redirect,const std::optional<utility::string_t>&
                emailLinkUrl,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Send email to user with a link to reset user password
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/forgot-password
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersForgotPasswordPost(
                    const std::optional<utility::string_t>&
                redirect,const std::optional<bool>&
                useTokenChangePasswordUrl,const std::optional<utility::string_t>&
                emailLinkUrl,const std::shared_ptr<ForgotPasswordRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sends email with a confirmation link to verify email address
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/{userId}/confirm-email
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdConfirmEmailPost(
                    const utility::string_t& userId,const std::optional<utility::string_t>&
                redirect,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Resends email with a confirmation link to verify email address
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/users/emails/{email}/confirm-email/re-send
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1UsersEmailsEmailConfirmEmailReSendPost(
                    const utility::string_t& email,const std::optional<utility::string_t>&
                tenant,const std::optional<utility::string_t>&
                redirect,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the user metagame progress by its ID userId
                    /// and updates the data based on the update to apply.
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/metagame
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service
                /// </remarks>
                void apiV1UsersUserIdMetagamePut(
                    const utility::string_t& userId,const std::shared_ptr<MetagameUpdate>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the user metagame progress by its unique identifier userId
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/metagame
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdMetagameGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Set the user profile's first name
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/first-name/{firstName}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdFirstNameFirstNamePut(
                    const utility::string_t& userId,const utility::string_t& firstName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Set the user profile's display name
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/display-name
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdDisplayNamePut(
                    const utility::string_t& userId,const utility::string_t& displayName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Locates the simplified user profile by its unique identifier
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdLiteGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Get the user profile's personality type and/or personality values type />
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/lite
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersLiteGet(
                    const std::optional<std::vector<utility::string_t>>&
                ids,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sets the Users account to Locked
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/lock-account
                /// Authorization: account-manager,magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdLockAccountPut(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Sets the Users account to unlocked
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/unlock-account
                /// Authorization: account-manager,magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersUserIdUnlockAccountPut(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class SettingsApi final : public csp::services::ApiBase
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
                void apiV1UsersUserIdSettingsContextPut(
                    const utility::string_t& userId,const utility::string_t& context,const std::shared_ptr<SettingsDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Gets the settings for a user by context.  If keys are provided
                    /// then only values for those keys will be returned, otherwise all key/value pairs are returned
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/settings/{context}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSettingsContextGet(
                    const utility::string_t& userId,const utility::string_t& context,const std::optional<std::vector<utility::string_t>>&
                keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Deletes all settings related to a context.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/settings/{context}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSettingsContextDelete(
                    const utility::string_t& userId,const utility::string_t& context,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets the settings for one or more users by context.  If keys are provided
                    /// then only values for those keys will be returned, otherwise all key/value pairs are returned.
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/settings/{context}
                /// Authorization: magnopus-admin,admin,support,internal-service
                /// </remarks>
                void apiV1UsersSettingsContextGet(
                    const utility::string_t& context,const std::optional<std::vector<utility::string_t>>&
                userIds,const std::optional<std::vector<utility::string_t>>&
                keys,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Gets all the contexts for which the user has settings
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/users/{userId}/settings
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSettingsGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Deletes keyname setting at a context.
                    /// </summary>
                /// <remarks>
                /// DELETE /api/v1/users/{userId}/settings/{context}/{keyname}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1UsersUserIdSettingsContextKeynameDelete(
                    const utility::string_t& userId,const utility::string_t& context,const utility::string_t& keyname,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class StripeApi final : public csp::services::ApiBase
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
                void apiV1VendorsStripeWebhookPost(
                    const std::optional<utility::string_t>&
                tenant,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Here to handle checkout session creation
                    /// </summary>
                /// <remarks>
                /// POST /api/v1/vendors/stripe/checkout-sessions
                /// Authorization: Anonymous
                /// </remarks>
                void apiV1VendorsStripeCheckoutSessionsPost(
                    const std::shared_ptr<StripeCheckoutRequest>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Here to handle checkout session creation
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/stripe/customers/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsStripeCustomersUserIdGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
            
                
                    /// <summary>
                    /// Here to provide link to customer portal
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/vendors/stripe/customer-portals/{userId}
                /// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
                /// </remarks>
                void apiV1VendorsStripeCustomerPortalsUserIdGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class TenantApi final : public csp::services::ApiBase
    {
    public:
        TenantApi(csp::web::WebClient* InWebClient);
        virtual ~TenantApi();

        
            
                
                    /// <summary>
                    /// Creates tenant settings or updates existing tenant settings
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/tenants/names/{tenantName}
                /// Authorization: magnopus-admin
                /// </remarks>
                void apiV1TenantsNamesTenantNamePut(
                    const utility::string_t& tenantName,const std::shared_ptr<TenantDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Locates the tenant by its unique tenantName
                    /// </summary>
                /// <remarks>
                /// GET /api/v1/tenants/names/{tenantName}
                /// Authorization: magnopus-admin
                /// </remarks>
                void apiV1TenantsNamesTenantNameGet(
                    const utility::string_t& tenantName,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    
    class UserRolesApi final : public csp::services::ApiBase
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
                void apiV1UsersUserIdRolesGet(
                    const utility::string_t& userId,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
                
                    /// <summary>
                    /// Updates the user's authorization roles by the userId to the roles provided
                    /// </summary>
                /// <remarks>
                /// PUT /api/v1/users/{userId}/roles
                /// Authorization: magnopus-admin,admin,support,internal-service,account-manager
                /// </remarks>
                void apiV1UsersUserIdRolesPut(
                    const utility::string_t& userId,const std::shared_ptr<UserRolesDto>& RequestBody,csp::services::ApiResponseHandlerBase* ResponseHandler,
    csp::common::CancellationToken& CancellationToken= csp::common::CancellationToken::Dummy()
                ) const;
            
        
    };
    

} // namespace csp::services::userservice