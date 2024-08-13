

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::userservice
{

class ApplicationSettingsDto;
class AuthDto;
class AvatarManifestDto;
class CreateUserRequest;
class CreateUserSocialRequest;
class EquipItemDto;
class ForgotPasswordRequest;
class Gender;
class GroupDto;
class GroupFilters;
class GroupInviteDto;
class GroupLiteDto;
class GroupLiteDtoDataPage;
class GroupSummaryDto;
class InitialSettingsDto;
class InventoryItemDto;
class InventoryItemDtoDataPage;
class LoginRequest;
class LoginSocialRequest;
class LogoutRequest;
class MetagameProgressDto;
class MetagameUpdate;
class OrganizationDto;
class OrganizationInviteDto;
class OrganizationMember;
class ProfileDto;
class ProfileDtoDataPage;
class ProfileLiteDto;
class RefreshRequest;
class SettingsDto;
class SocialProviderInfo;
class StripeCheckoutRequest;
class StripeCheckoutSessionDto;
class StripeCustomerDto;
class StripeCustomerPortalDto;
class TenantAdminAccount;
class TenantDto;
class TenantEmailSettingsDto;
class TenantEmailTemplateSettingsDto;
class TokenResetPasswordRequest;
class UpgradeGuestRequest;
class UpgradeGuestSocialRequest;
class UserRolesDto;



    /// <summary>
        /// Application Settings data transfer object
        /// </summary>
    class ApplicationSettingsDto : public csp::services::DtoBase
        {
        public:
            ApplicationSettingsDto();
            virtual ~ApplicationSettingsDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Name of the application for which these settings apply
                    /// </summary>
                utility::string_t GetApplicationName() const;
                bool HasApplicationName() const;
            
                /// <summary>
                    /// Context of the application settings
                    /// </summary>
                utility::string_t GetContext() const;
                bool HasContext() const;
            
                /// <summary>
                    /// Settings of the application
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetSettings() const;
                void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);bool HasSettings() const;
            

        protected:
            std::optional<utility::string_t> m_ApplicationName;
            std::optional<utility::string_t> m_Context;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
            };

    /// <summary>
        /// DTO for carrying authentication information.
        /// </summary>
    class AuthDto : public csp::services::DtoBase
        {
        public:
            AuthDto();
            virtual ~AuthDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for the user
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// The token for accessing the API
                    /// </summary>
                utility::string_t GetAccessToken() const;
                void SetAccessToken(const utility::string_t& Value);bool HasAccessToken() const;
            
                /// <summary>
                    /// The date and time the access token expires
                    /// </summary>
                utility::string_t GetAccessTokenExpiresAt() const;
                void SetAccessTokenExpiresAt(const utility::string_t& Value);bool HasAccessTokenExpiresAt() const;
            
                /// <summary>
                    /// The refresh token to use to request a new access token
                    /// </summary>
                utility::string_t GetRefreshToken() const;
                void SetRefreshToken(const utility::string_t& Value);bool HasRefreshToken() const;
            
                /// <summary>
                    /// The date and time the refresh token expires
                    /// </summary>
                utility::string_t GetRefreshTokenExpiresAt() const;
                void SetRefreshTokenExpiresAt(const utility::string_t& Value);bool HasRefreshTokenExpiresAt() const;
            
                /// <summary>
                    /// Ids of the user's organizations
                    /// </summary>
                const std::vector<utility::string_t>& GetOrganizationIds() const;
                void SetOrganizationIds(const std::vector<utility::string_t>& Value);bool HasOrganizationIds() const;
            
                /// <summary>
                    /// The ID of the device which has been granted access.
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_AccessToken;
            std::optional<utility::string_t> m_AccessTokenExpiresAt;
            std::optional<utility::string_t> m_RefreshToken;
            std::optional<utility::string_t> m_RefreshTokenExpiresAt;
            std::optional<std::vector<utility::string_t>> m_OrganizationIds;
            std::optional<utility::string_t> m_DeviceId;
            };

    /// <summary>
        /// DTO for avatar manifest data
        /// </summary>
    class AvatarManifestDto : public csp::services::DtoBase
        {
        public:
            AvatarManifestDto();
            virtual ~AvatarManifestDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the Avatar.
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Id of the user to which the Avatar belongs.
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                std::shared_ptr<Gender> GetGender() const;
                void SetGender(const std::shared_ptr<Gender>& Value);bool HasGender() const;
            
                /// <summary>
                    /// The external full URI to the location of the avatar asset
                    /// </summary>
                utility::string_t GetExternalUri() const;
                void SetExternalUri(const utility::string_t& Value);bool HasExternalUri() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_UserId;
            std::optional<std::shared_ptr<Gender>> m_Gender;
            std::optional<utility::string_t> m_ExternalUri;
            };

    /// <summary>
        /// Object containing those properties necessary to create a user.
        /// </summary>
    class CreateUserRequest : public csp::services::DtoBase
        {
        public:
            CreateUserRequest();
            virtual ~CreateUserRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the tenant to associate the new user to
                    /// </summary>
                utility::string_t GetTenant() const;
                void SetTenant(const utility::string_t& Value);bool HasTenant() const;
            
                /// <summary>
                    /// The optional email address of the user.
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            
                /// <summary>
                    /// the optional plaintext password for the user with a minimum length of 8 and maximum length of 50
                    /// </summary>
                utility::string_t GetPassword() const;
                void SetPassword(const utility::string_t& Value);bool HasPassword() const;
            
                /// <summary>
                    /// The optional user name of the user
                    /// </summary>
                utility::string_t GetUserName() const;
                void SetUserName(const utility::string_t& Value);bool HasUserName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                void SetDisplayName(const utility::string_t& Value);bool HasDisplayName() const;
            
                /// <summary>
                    /// Only valid for guest profiles, and only valid if this profile has not Email/Password
                    /// Acts as the unique identifier for guest profiles on the platform
                    /// </summary>
                utility::string_t GetGuestDeviceId() const;
                void SetGuestDeviceId(const utility::string_t& Value);bool HasGuestDeviceId() const;
            
                /// <summary>
                    /// An optional seed ID for the currently active Avatar for the user.
                    /// </summary>
                utility::string_t GetAvatarId() const;
                void SetAvatarId(const utility::string_t& Value);bool HasAvatarId() const;
            
                /// <summary>
                    /// A token provided to the user that can be used to auto-confirm their account
                    /// </summary>
                utility::string_t GetInviteToken() const;
                void SetInviteToken(const utility::string_t& Value);bool HasInviteToken() const;
            
                /// <summary>
                    /// Optional redirect URI to embed in the confirmation email
                    /// </summary>
                utility::string_t GetRedirectUrl() const;
                void SetRedirectUrl(const utility::string_t& Value);bool HasRedirectUrl() const;
            
                /// <summary>
                    /// The user has given appropriate age verification
                    /// </summary>
                bool GetVerifiedAgeEighteen() const;
                void SetVerifiedAgeEighteen(const bool& Value);bool HasVerifiedAgeEighteen() const;
            
                const std::vector<std::shared_ptr<InitialSettingsDto>>& GetInitialSettings() const;
                void SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value);bool HasInitialSettings() const;
            

        protected:
            std::optional<utility::string_t> m_Tenant;
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_Password;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<utility::string_t> m_GuestDeviceId;
            std::optional<utility::string_t> m_AvatarId;
            std::optional<utility::string_t> m_InviteToken;
            std::optional<utility::string_t> m_RedirectUrl;
            std::optional<bool> m_VerifiedAgeEighteen;
            std::optional<std::vector<std::shared_ptr<InitialSettingsDto>>> m_InitialSettings;
            };

    /// <summary>
        /// Object containing those properties necessary to create a user.
        /// </summary>
    class CreateUserSocialRequest : public csp::services::DtoBase
        {
        public:
            CreateUserSocialRequest();
            virtual ~CreateUserSocialRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the tenant to associate the new user to
                    /// </summary>
                utility::string_t GetTenant() const;
                void SetTenant(const utility::string_t& Value);bool HasTenant() const;
            
                /// <summary>
                    /// The name of the social authentication provider
                    /// (e.g. "Google")
                    /// </summary>
                utility::string_t GetProvider() const;
                void SetProvider(const utility::string_t& Value);bool HasProvider() const;
            
                /// <summary>
                    /// The current identity token from the provider
                    /// (must be a valid token that is not expired)
                    /// </summary>
                utility::string_t GetToken() const;
                void SetToken(const utility::string_t& Value);bool HasToken() const;
            
                /// <summary>
                    /// The optional plaintext password for the user with a minimum length of 8 and maximum length of 50
                    /// </summary>
                utility::string_t GetPassword() const;
                void SetPassword(const utility::string_t& Value);bool HasPassword() const;
            
                /// <summary>
                    /// The optional user name of the user
                    /// </summary>
                utility::string_t GetUserName() const;
                void SetUserName(const utility::string_t& Value);bool HasUserName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                void SetDisplayName(const utility::string_t& Value);bool HasDisplayName() const;
            
                /// <summary>
                    /// An optional seed ID for the currently active Avatar for the user.
                    /// </summary>
                utility::string_t GetAvatarId() const;
                void SetAvatarId(const utility::string_t& Value);bool HasAvatarId() const;
            
                /// <summary>
                    /// A token provided to the user that can be used to auto-confirm their account
                    /// </summary>
                utility::string_t GetInviteToken() const;
                void SetInviteToken(const utility::string_t& Value);bool HasInviteToken() const;
            
                /// <summary>
                    /// Optional redirect URI to embed in the confirmation email
                    /// </summary>
                utility::string_t GetRedirectUrl() const;
                void SetRedirectUrl(const utility::string_t& Value);bool HasRedirectUrl() const;
            
                /// <summary>
                    /// Flag to indicate if a user has verified they are of age
                    /// </summary>
                bool GetVerifiedAgeEighteen() const;
                void SetVerifiedAgeEighteen(const bool& Value);bool HasVerifiedAgeEighteen() const;
            
                /// <summary>
                    /// The URI given in the original OAuth request to get the auth token
                    /// </summary>
                utility::string_t GetOAuthRedirectUri() const;
                void SetOAuthRedirectUri(const utility::string_t& Value);bool HasOAuthRedirectUri() const;
            
                /// <summary>
                    /// Optional Id of the User with the Social Provider, when needed for Login
                    /// </summary>
                utility::string_t GetOptionalProviderUserId() const;
                void SetOptionalProviderUserId(const utility::string_t& Value);bool HasOptionalProviderUserId() const;
            
                const std::vector<std::shared_ptr<InitialSettingsDto>>& GetInitialSettings() const;
                void SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value);bool HasInitialSettings() const;
            

        protected:
            std::optional<utility::string_t> m_Tenant;
            std::optional<utility::string_t> m_Provider;
            std::optional<utility::string_t> m_Token;
            std::optional<utility::string_t> m_Password;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<utility::string_t> m_AvatarId;
            std::optional<utility::string_t> m_InviteToken;
            std::optional<utility::string_t> m_RedirectUrl;
            std::optional<bool> m_VerifiedAgeEighteen;
            std::optional<utility::string_t> m_OAuthRedirectUri;
            std::optional<utility::string_t> m_OptionalProviderUserId;
            std::optional<std::vector<std::shared_ptr<InitialSettingsDto>>> m_InitialSettings;
            };

    /// <summary>
        /// Equip item data transform object
        /// </summary>
    class EquipItemDto : public csp::services::DtoBase
        {
        public:
            EquipItemDto();
            virtual ~EquipItemDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Equip or UnEquip an item
                    /// </summary>
                bool GetIsEquipped() const;
                void SetIsEquipped(const bool& Value);bool HasIsEquipped() const;
            

        protected:
            std::optional<bool> m_IsEquipped;
            };

    /// <summary>
        /// Object containing those properties necessary to reset a password via email address.
        /// </summary>
    class ForgotPasswordRequest : public csp::services::DtoBase
        {
        public:
            ForgotPasswordRequest();
            virtual ~ForgotPasswordRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the tenant to associate the new user to
                    /// </summary>
                utility::string_t GetTenant() const;
                void SetTenant(const utility::string_t& Value);bool HasTenant() const;
            
                /// <summary>
                    /// The email address of the user.
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            

        protected:
            std::optional<utility::string_t> m_Tenant;
            std::optional<utility::string_t> m_Email;
            };

    /// <summary>
        /// Possible genders
        /// </summary>
    class Gender : public csp::services::EnumBase
        {
        public:
            Gender();
            virtual ~Gender();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            enum class eGender
            {
                MALE,
                FEMALE,
                NONBINARY
                
            };

            eGender GetValue() const;
            void SetValue(eGender const Value);

        protected:
            eGender Value = {};
        };

    /// <summary>
        /// User groups data transfer object
        /// </summary>
    class GroupDto : public csp::services::DtoBase
        {
        public:
            GroupDto();
            virtual ~GroupDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Creator of group
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The date and time group was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// Leader of group
                    /// </summary>
                utility::string_t GetGroupOwnerId() const;
                void SetGroupOwnerId(const utility::string_t& Value);bool HasGroupOwnerId() const;
            
                /// <summary>
                    /// Unique identifier of group
                    /// </summary>
                utility::string_t GetGroupCode() const;
                bool HasGroupCode() const;
            
                /// <summary>
                    /// Type of group
                    /// </summary>
                utility::string_t GetGroupType() const;
                void SetGroupType(const utility::string_t& Value);bool HasGroupType() const;
            
                /// <summary>
                    /// Name of the group
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// Group description
                    /// </summary>
                utility::string_t GetDescription() const;
                void SetDescription(const utility::string_t& Value);bool HasDescription() const;
            
                /// <summary>
                    /// List of users in the group
                    /// </summary>
                const std::vector<utility::string_t>& GetUsers() const;
                void SetUsers(const std::vector<utility::string_t>& Value);bool HasUsers() const;
            
                /// <summary>
                    /// List of users banned from the group
                    /// </summary>
                const std::vector<utility::string_t>& GetBannedUsers() const;
                void SetBannedUsers(const std::vector<utility::string_t>& Value);bool HasBannedUsers() const;
            
                /// <summary>
                    /// List of moderators of the group
                    /// </summary>
                const std::vector<utility::string_t>& GetModerators() const;
                void SetModerators(const std::vector<utility::string_t>& Value);bool HasModerators() const;
            
                /// <summary>
                    /// Whether the group shows up in searches by non-members or not
                    /// </summary>
                bool GetDiscoverable() const;
                void SetDiscoverable(const bool& Value);bool HasDiscoverable() const;
            
                /// <summary>
                    /// Whether users join as moderators by default or not
                    /// </summary>
                bool GetAutoModerator() const;
                void SetAutoModerator(const bool& Value);bool HasAutoModerator() const;
            
                /// <summary>
                    /// Whether the group join code is public, or is included in searches by non-members
                    /// </summary>
                bool GetRequiresInvite() const;
                void SetRequiresInvite(const bool& Value);bool HasRequiresInvite() const;
            
                /// <summary>
                    /// Whether the group has been archived or not
                    /// </summary>
                bool GetArchived() const;
                bool HasArchived() const;
            
                /// <summary>
                    /// The organizationId that the group belongs to
                    /// </summary>
                utility::string_t GetOrganizationId() const;
                bool HasOrganizationId() const;
            
                /// <summary>
                    /// `true` when the current calling user is the owner of the group; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserOwner() const;
                bool HasIsCurrentUserOwner() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.Users list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserMember() const;
                bool HasIsCurrentUserMember() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.Moderators list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserModerator() const;
                bool HasIsCurrentUserModerator() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.BannedUsers list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserBanned() const;
                bool HasIsCurrentUserBanned() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_GroupOwnerId;
            std::optional<utility::string_t> m_GroupCode;
            std::optional<utility::string_t> m_GroupType;
            std::optional<utility::string_t> m_Name;
            std::optional<utility::string_t> m_Description;
            std::optional<std::vector<utility::string_t>> m_Users;
            std::optional<std::vector<utility::string_t>> m_BannedUsers;
            std::optional<std::vector<utility::string_t>> m_Moderators;
            std::optional<bool> m_Discoverable;
            std::optional<bool> m_AutoModerator;
            std::optional<bool> m_RequiresInvite;
            std::optional<bool> m_Archived;
            std::optional<utility::string_t> m_OrganizationId;
            std::optional<bool> m_IsCurrentUserOwner;
            std::optional<bool> m_IsCurrentUserMember;
            std::optional<bool> m_IsCurrentUserModerator;
            std::optional<bool> m_IsCurrentUserBanned;
            };

    /// <summary>
        /// Object containing properties to filter on groups.
        /// </summary>
    class GroupFilters : public csp::services::DtoBase
        {
        public:
            GroupFilters();
            virtual ~GroupFilters();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique group identifiers
                    /// </summary>
                const std::vector<utility::string_t>& GetIds() const;
                void SetIds(const std::vector<utility::string_t>& Value);bool HasIds() const;
            
                /// <summary>
                    /// Type of group
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupTypes() const;
                void SetGroupTypes(const std::vector<utility::string_t>& Value);bool HasGroupTypes() const;
            
                /// <summary>
                    /// Name of group unique for public group type only
                    /// </summary>
                const std::vector<utility::string_t>& GetNames() const;
                void SetNames(const std::vector<utility::string_t>& Value);bool HasNames() const;
            
                /// <summary>
                    /// Partial name for a group that you have access to search against
                    /// </summary>
                utility::string_t GetPartialName() const;
                void SetPartialName(const utility::string_t& Value);bool HasPartialName() const;
            
                /// <summary>
                    /// Unique identifier of the group owner(s)
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupOwnerIds() const;
                void SetGroupOwnerIds(const std::vector<utility::string_t>& Value);bool HasGroupOwnerIds() const;
            
                /// <summary>
                    /// Unique identifier of the group owner(s) to exclude in the search
                    /// </summary>
                const std::vector<utility::string_t>& GetExcludeGroupOwnerIds() const;
                void SetExcludeGroupOwnerIds(const std::vector<utility::string_t>& Value);bool HasExcludeGroupOwnerIds() const;
            
                /// <summary>
                    /// Unique identifier of the group member(s)
                    /// </summary>
                const std::vector<utility::string_t>& GetUsers() const;
                void SetUsers(const std::vector<utility::string_t>& Value);bool HasUsers() const;
            
                /// <summary>
                    /// Whether the group shows up in searches by non-members or not
                    /// </summary>
                bool GetDiscoverable() const;
                void SetDiscoverable(const bool& Value);bool HasDiscoverable() const;
            
                /// <summary>
                    /// Whether users join as moderators by default or not
                    /// </summary>
                bool GetAutoModerator() const;
                void SetAutoModerator(const bool& Value);bool HasAutoModerator() const;
            
                /// <summary>
                    /// Whether the group join code is public, or is included in searches by non-members
                    /// </summary>
                bool GetRequiresInvite() const;
                void SetRequiresInvite(const bool& Value);bool HasRequiresInvite() const;
            
                /// <summary>
                    /// Whether the group is archived or not
                    /// </summary>
                bool GetArchived() const;
                void SetArchived(const bool& Value);bool HasArchived() const;
            
                /// <summary>
                    /// Unique identifier of the organization group belongs to
                    /// </summary>
                const std::vector<utility::string_t>& GetOrganizationIds() const;
                void SetOrganizationIds(const std::vector<utility::string_t>& Value);bool HasOrganizationIds() const;
            

        protected:
            std::optional<std::vector<utility::string_t>> m_Ids;
            std::optional<std::vector<utility::string_t>> m_GroupTypes;
            std::optional<std::vector<utility::string_t>> m_Names;
            std::optional<utility::string_t> m_PartialName;
            std::optional<std::vector<utility::string_t>> m_GroupOwnerIds;
            std::optional<std::vector<utility::string_t>> m_ExcludeGroupOwnerIds;
            std::optional<std::vector<utility::string_t>> m_Users;
            std::optional<bool> m_Discoverable;
            std::optional<bool> m_AutoModerator;
            std::optional<bool> m_RequiresInvite;
            std::optional<bool> m_Archived;
            std::optional<std::vector<utility::string_t>> m_OrganizationIds;
            };

    /// <summary>
        /// Group Invite data transfer object
        /// </summary>
    class GroupInviteDto : public csp::services::DtoBase
        {
        public:
            GroupInviteDto();
            virtual ~GroupInviteDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Sender of group invite
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The email of user
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            
                /// <summary>
                    /// Group unique identifier
                    /// </summary>
                utility::string_t GetGroupId() const;
                bool HasGroupId() const;
            
                /// <summary>
                    /// Name of the group
                    /// </summary>
                utility::string_t GetName() const;
                bool HasName() const;
            
                /// <summary>
                    /// Whether or not the user is to be invited as a moderator
                    /// </summary>
                bool GetAsModerator() const;
                void SetAsModerator(const bool& Value);bool HasAsModerator() const;
            
                /// <summary>
                    /// The expiry date and time of invite
                    /// </summary>
                utility::string_t GetExpiresAt() const;
                bool HasExpiresAt() const;
            
                /// <summary>
                    /// The date and time group invite was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this entity was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                bool HasUpdatedAt() const;
            
                /// <summary>
                    /// Whether to simply send a deeplink to the Space
                    /// </summary>
                bool GetSendSpaceLink() const;
                void SetSendSpaceLink(const bool& Value);bool HasSendSpaceLink() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_GroupId;
            std::optional<utility::string_t> m_Name;
            std::optional<bool> m_AsModerator;
            std::optional<utility::string_t> m_ExpiresAt;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            std::optional<bool> m_SendSpaceLink;
            };

    /// <summary>
        /// An object used to make group update request
        /// </summary>
    class GroupLiteDto : public csp::services::DtoBase
        {
        public:
            GroupLiteDto();
            virtual ~GroupLiteDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for the group to update
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Name of the group
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// The description of the group
                    /// </summary>
                utility::string_t GetDescription() const;
                void SetDescription(const utility::string_t& Value);bool HasDescription() const;
            
                /// <summary>
                    /// Type of group
                    /// </summary>
                utility::string_t GetGroupType() const;
                bool HasGroupType() const;
            
                /// <summary>
                    /// Owner of group
                    /// </summary>
                utility::string_t GetGroupOwnerId() const;
                bool HasGroupOwnerId() const;
            
                /// <summary>
                    /// The date and time group was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// Whether the group shows up in searches by non-members or not
                    /// </summary>
                bool GetDiscoverable() const;
                void SetDiscoverable(const bool& Value);bool HasDiscoverable() const;
            
                /// <summary>
                    /// Whether users join as moderators by default or not
                    /// </summary>
                bool GetAutoModerator() const;
                void SetAutoModerator(const bool& Value);bool HasAutoModerator() const;
            
                /// <summary>
                    /// Whether the group join code is public, or is included in searches by non-members
                    /// </summary>
                bool GetRequiresInvite() const;
                void SetRequiresInvite(const bool& Value);bool HasRequiresInvite() const;
            
                /// <summary>
                    /// Whether the group has been archived or not
                    /// </summary>
                bool GetArchived() const;
                void SetArchived(const bool& Value);bool HasArchived() const;
            
                /// <summary>
                    /// The organizationId that the group belongs to
                    /// </summary>
                utility::string_t GetOrganizationId() const;
                bool HasOrganizationId() const;
            
                /// <summary>
                    /// `true` when the current calling user is the owner of the group; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserOwner() const;
                bool HasIsCurrentUserOwner() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.Users list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserMember() const;
                bool HasIsCurrentUserMember() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.Moderators list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserModerator() const;
                bool HasIsCurrentUserModerator() const;
            
                /// <summary>
                    /// `true` when the current calling user is a member of the Magnopus.Service.User.Dtos.GroupDto.BannedUsers list; otherwise `false`
                    /// </summary>
                bool GetIsCurrentUserBanned() const;
                bool HasIsCurrentUserBanned() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Name;
            std::optional<utility::string_t> m_Description;
            std::optional<utility::string_t> m_GroupType;
            std::optional<utility::string_t> m_GroupOwnerId;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<bool> m_Discoverable;
            std::optional<bool> m_AutoModerator;
            std::optional<bool> m_RequiresInvite;
            std::optional<bool> m_Archived;
            std::optional<utility::string_t> m_OrganizationId;
            std::optional<bool> m_IsCurrentUserOwner;
            std::optional<bool> m_IsCurrentUserMember;
            std::optional<bool> m_IsCurrentUserModerator;
            std::optional<bool> m_IsCurrentUserBanned;
            };

    class GroupLiteDtoDataPage : public csp::services::DtoBase
        {
        public:
            GroupLiteDtoDataPage();
            virtual ~GroupLiteDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<GroupLiteDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<GroupLiteDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<GroupLiteDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Represents a summary for group
        /// </summary>
    class GroupSummaryDto : public csp::services::DtoBase
        {
        public:
            GroupSummaryDto();
            virtual ~GroupSummaryDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetGroupId() const;
                void SetGroupId(const utility::string_t& Value);bool HasGroupId() const;
            
                /// <summary>
                    /// Group code used to join the group.
                    /// </summary>
                utility::string_t GetGroupCode() const;
                void SetGroupCode(const utility::string_t& Value);bool HasGroupCode() const;
            
                /// <summary>
                    /// Name of the group
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            

        protected:
            std::optional<utility::string_t> m_GroupId;
            std::optional<utility::string_t> m_GroupCode;
            std::optional<utility::string_t> m_Name;
            };

    /// <summary>
        /// Initial User Settings data transform object
        /// </summary>
    class InitialSettingsDto : public csp::services::DtoBase
        {
        public:
            InitialSettingsDto();
            virtual ~InitialSettingsDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Context of the initial settings
                    /// </summary>
                utility::string_t GetContext() const;
                void SetContext(const utility::string_t& Value);bool HasContext() const;
            
                /// <summary>
                    /// Id of the User for whom these settings apply
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Settings of the user
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetSettings() const;
                void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);bool HasSettings() const;
            

        protected:
            std::optional<utility::string_t> m_Context;
            std::optional<utility::string_t> m_UserId;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
            };

    /// <summary>
        /// Inventory item data transform object
        /// </summary>
    class InventoryItemDto : public csp::services::DtoBase
        {
        public:
            InventoryItemDto();
            virtual ~InventoryItemDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier for instance of an item
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Unique identifier for the prototype used to instantiate the item.
                    /// </summary>
                utility::string_t GetPrototypeId() const;
                void SetPrototypeId(const utility::string_t& Value);bool HasPrototypeId() const;
            
                /// <summary>
                    /// Unique identifier of user
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Denotes if the item is giftable/exchangable
                    /// </summary>
                bool GetExchangeable() const;
                void SetExchangeable(const bool& Value);bool HasExchangeable() const;
            
                /// <summary>
                    /// Denotes if the item is a gift or exchanged item
                    /// </summary>
                bool GetIsGift() const;
                void SetIsGift(const bool& Value);bool HasIsGift() const;
            
                /// <summary>
                    /// Tags for the inventory item or an empty list if none
                    /// </summary>
                const std::vector<utility::string_t>& GetTags() const;
                void SetTags(const std::vector<utility::string_t>& Value);bool HasTags() const;
            
                /// <summary>
                    /// Contains unique state for the Inventory Item.
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetState() const;
                void SetState(const std::map<utility::string_t, utility::string_t>& Value);bool HasState() const;
            
                /// <summary>
                    /// Indicates if the item is equippable
                    /// </summary>
                bool GetEquippable() const;
                void SetEquippable(const bool& Value);bool HasEquippable() const;
            
                /// <summary>
                    /// Indicates if the item is currently equipped
                    /// </summary>
                bool GetEquipped() const;
                void SetEquipped(const bool& Value);bool HasEquipped() const;
            
                /// <summary>
                    /// Classification of the item's type
                    /// </summary>
                utility::string_t GetItemType() const;
                void SetItemType(const utility::string_t& Value);bool HasItemType() const;
            
                /// <summary>
                    /// The date an time when this instance was created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which created this instance
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this entity was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                bool HasUpdatedAt() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_PrototypeId;
            std::optional<utility::string_t> m_UserId;
            std::optional<bool> m_Exchangeable;
            std::optional<bool> m_IsGift;
            std::optional<std::vector<utility::string_t>> m_Tags;
            std::optional<std::map<utility::string_t, utility::string_t>> m_State;
            std::optional<bool> m_Equippable;
            std::optional<bool> m_Equipped;
            std::optional<utility::string_t> m_ItemType;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            };

    class InventoryItemDtoDataPage : public csp::services::DtoBase
        {
        public:
            InventoryItemDtoDataPage();
            virtual ~InventoryItemDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<InventoryItemDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<InventoryItemDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<InventoryItemDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// A request object used to wrap the values used to create a Login request.
        /// </summary>
    class LoginRequest : public csp::services::DtoBase
        {
        public:
            LoginRequest();
            virtual ~LoginRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the tenant to login to
                    /// </summary>
                utility::string_t GetTenant() const;
                void SetTenant(const utility::string_t& Value);bool HasTenant() const;
            
                /// <summary>
                    /// To use in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Password
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            
                /// <summary>
                    /// To use in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Password
                    /// </summary>
                utility::string_t GetUserName() const;
                void SetUserName(const utility::string_t& Value);bool HasUserName() const;
            
                /// <summary>
                    /// To be used in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Email for login.
                    /// </summary>
                utility::string_t GetPassword() const;
                void SetPassword(const utility::string_t& Value);bool HasPassword() const;
            
                /// <summary>
                    /// The unique identifier for the device that is making the login request
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            
                /// <summary>
                    /// Required for new guest accounts, or accounts not previously verified
                    /// </summary>
                bool GetVerifiedAgeEighteen() const;
                void SetVerifiedAgeEighteen(const bool& Value);bool HasVerifiedAgeEighteen() const;
            

        protected:
            std::optional<utility::string_t> m_Tenant;
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_Password;
            std::optional<utility::string_t> m_DeviceId;
            std::optional<bool> m_VerifiedAgeEighteen;
            };

    /// <summary>
        /// Fields required to login with a social authentication provider
        /// </summary>
    class LoginSocialRequest : public csp::services::DtoBase
        {
        public:
            LoginSocialRequest();
            virtual ~LoginSocialRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the tenant to login to
                    /// </summary>
                utility::string_t GetTenant() const;
                void SetTenant(const utility::string_t& Value);bool HasTenant() const;
            
                /// <summary>
                    /// The name of the social authentication provider
                    /// (e.g. "Google")
                    /// </summary>
                utility::string_t GetProvider() const;
                void SetProvider(const utility::string_t& Value);bool HasProvider() const;
            
                /// <summary>
                    /// The current identity token from the provider
                    /// (must be a valid token that is not expired)
                    /// </summary>
                utility::string_t GetToken() const;
                void SetToken(const utility::string_t& Value);bool HasToken() const;
            
                /// <summary>
                    /// The unique identifier for the device that is making the login request
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            
                /// <summary>
                    /// The URI given in the original OAuth request to get the auth token
                    /// </summary>
                utility::string_t GetOAuthRedirectUri() const;
                void SetOAuthRedirectUri(const utility::string_t& Value);bool HasOAuthRedirectUri() const;
            
                /// <summary>
                    /// Defines if this social login user has been age verified
                    /// </summary>
                bool GetVerifiedAgeEighteen() const;
                void SetVerifiedAgeEighteen(const bool& Value);bool HasVerifiedAgeEighteen() const;
            
                /// <summary>
                    /// Optional Id of the User with the Social Provider, when needed for Login
                    /// </summary>
                utility::string_t GetOptionalProviderUserId() const;
                void SetOptionalProviderUserId(const utility::string_t& Value);bool HasOptionalProviderUserId() const;
            

        protected:
            std::optional<utility::string_t> m_Tenant;
            std::optional<utility::string_t> m_Provider;
            std::optional<utility::string_t> m_Token;
            std::optional<utility::string_t> m_DeviceId;
            std::optional<utility::string_t> m_OAuthRedirectUri;
            std::optional<bool> m_VerifiedAgeEighteen;
            std::optional<utility::string_t> m_OptionalProviderUserId;
            };

    /// <summary>
        /// A request object used to wrap the values used to create a Logout request.
        /// </summary>
    class LogoutRequest : public csp::services::DtoBase
        {
        public:
            LogoutRequest();
            virtual ~LogoutRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for the user
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// The unique identifier for the user's device.
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_DeviceId;
            };

    /// <summary>
        /// Represents progress in the metagame
        /// </summary>
    class MetagameProgressDto : public csp::services::DtoBase
        {
        public:
            MetagameProgressDto();
            virtual ~MetagameProgressDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// UserId of user to which this progress belongs.
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// Percent toward completion of level.
                    /// </summary>
                float GetPercentTowardsNextSeed() const;
                void SetPercentTowardsNextSeed(float Value);bool HasPercentTowardsNextSeed() const;
            
                /// <summary>
                    /// Level of seeds earned to associate with events associated with get Magnopus.Service.User.Dtos.MetagameProgressDto.PercentTowardsNextSeed to 1.0
                    /// </summary>
                int32_t GetMetagameLevel() const;
                void SetMetagameLevel(int32_t Value);bool HasMetagameLevel() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<float> m_PercentTowardsNextSeed;
            std::optional<int32_t> m_MetagameLevel;
            };

    /// <summary>
        /// Contains data used to update metagame data.
        /// </summary>
    class MetagameUpdate : public csp::services::DtoBase
        {
        public:
            MetagameUpdate();
            virtual ~MetagameUpdate();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// If true, will interpret Magnopus.Service.User.Structures.MetagameUpdate.PercentDelta as the total percentage, rather than a delta.
                    /// </summary>
                bool GetPercentDeltaAsTotal() const;
                void SetPercentDeltaAsTotal(const bool& Value);bool HasPercentDeltaAsTotal() const;
            
                /// <summary>
                    /// Qty of percentage to either add or set to the user's progress.
                    /// </summary>
                double GetPercentDelta() const;
                void SetPercentDelta(double Value);bool HasPercentDelta() const;
            

        protected:
            std::optional<bool> m_PercentDeltaAsTotal;
            std::optional<double> m_PercentDelta;
            };

    /// <summary>
        /// Organization data transfer object
        /// </summary>
    class OrganizationDto : public csp::services::DtoBase
        {
        public:
            OrganizationDto();
            virtual ~OrganizationDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// When created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// Owner of organization
                    /// </summary>
                utility::string_t GetOrganizationOwnerId() const;
                void SetOrganizationOwnerId(const utility::string_t& Value);bool HasOrganizationOwnerId() const;
            
                /// <summary>
                    /// Name of the organization
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// Members of organization
                    /// </summary>
                const std::vector<std::shared_ptr<OrganizationMember>>& GetMembers() const;
                bool HasMembers() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_OrganizationOwnerId;
            std::optional<utility::string_t> m_Name;
            std::optional<std::vector<std::shared_ptr<OrganizationMember>>> m_Members;
            };

    /// <summary>
        /// Organization invite data transfer object
        /// </summary>
    class OrganizationInviteDto : public csp::services::DtoBase
        {
        public:
            OrganizationInviteDto();
            virtual ~OrganizationInviteDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifier
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// Sender of organization invite
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The email of user being invited
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            
                /// <summary>
                    /// Organization unique identifier
                    /// </summary>
                utility::string_t GetOrganizationId() const;
                bool HasOrganizationId() const;
            
                /// <summary>
                    /// The assigned authorization roles for user
                    /// </summary>
                const std::vector<utility::string_t>& GetRoles() const;
                void SetRoles(const std::vector<utility::string_t>& Value);bool HasRoles() const;
            
                /// <summary>
                    /// The expiry date and time of invite
                    /// </summary>
                utility::string_t GetExpiresAt() const;
                bool HasExpiresAt() const;
            
                /// <summary>
                    /// The date and time organization invite was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_OrganizationId;
            std::optional<std::vector<utility::string_t>> m_Roles;
            std::optional<utility::string_t> m_ExpiresAt;
            std::optional<utility::string_t> m_CreatedAt;
            };

    /// <summary>
        /// Organization member object
        /// </summary>
    class OrganizationMember : public csp::services::DtoBase
        {
        public:
            OrganizationMember();
            virtual ~OrganizationMember();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Unique identifer of the user
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// Roles of the user in the organization
                    /// </summary>
                const std::vector<utility::string_t>& GetRoles() const;
                void SetRoles(const std::vector<utility::string_t>& Value);bool HasRoles() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<std::vector<utility::string_t>> m_Roles;
            };

    /// <summary>
        /// DTO for UserProfileDocument records.
        /// </summary>
    class ProfileDto : public csp::services::DtoBase
        {
        public:
            ProfileDto();
            virtual ~ProfileDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this instance
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// The Email.
                    /// </summary>
                utility::string_t GetEmail() const;
                bool HasEmail() const;
            
                /// <summary>
                    /// Only valid for guest profiles, and only valid if this profile has not Email/Password
                    /// Acts as the unique identifier for guest profiles on the platform
                    /// </summary>
                utility::string_t GetGuestDeviceId() const;
                bool HasGuestDeviceId() const;
            
                /// <summary>
                    /// A flag which indicates that the first login from a device has been identified
                    /// (Internal use only)
                    /// </summary>
                bool GetGuestFirstLoginIdentified() const;
                bool HasGuestFirstLoginIdentified() const;
            
                /// <summary>
                    /// The date and time of the last login
                    /// </summary>
                utility::string_t GetLastLoginAt() const;
                bool HasLastLoginAt() const;
            
                /// <summary>
                    /// Token used to distinguish between calls between
                    /// first login vs already logged in
                    /// </summary>
                utility::string_t GetLastLoginNonce() const;
                bool HasLastLoginNonce() const;
            
                /// <summary>
                    /// The last deviceId the given user authenticated with/on
                    /// </summary>
                utility::string_t GetLastDeviceId() const;
                bool HasLastDeviceId() const;
            
                /// <summary>
                    /// An identifier for the platform the most recent login occurred from.
                    /// </summary>
                utility::string_t GetLastPlatform() const;
                bool HasLastPlatform() const;
            
                /// <summary>
                    /// The ID of the currently active Avatar for the user.
                    /// </summary>
                utility::string_t GetAvatarId() const;
                bool HasAvatarId() const;
            
                /// <summary>
                    /// The publicly visible Username of the user.
                    /// </summary>
                utility::string_t GetUserName() const;
                bool HasUserName() const;
            
                /// <summary>
                    /// The publicly visible first name of the user.
                    /// </summary>
                utility::string_t GetFirstName() const;
                bool HasFirstName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                void SetDisplayName(const utility::string_t& Value);bool HasDisplayName() const;
            
                /// <summary>
                    /// Confirmation status of email address
                    /// </summary>
                bool GetIsEmailConfirmed() const;
                bool HasIsEmailConfirmed() const;
            
                /// <summary>
                    /// List of authorization roles assigned to the user.
                    /// </summary>
                const std::vector<utility::string_t>& GetRoles() const;
                bool HasRoles() const;
            
                /// <summary>
                    /// Indicates if an account has been age verified
                    /// </summary>
                bool GetVerifiedAgeEighteen() const;
                void SetVerifiedAgeEighteen(const bool& Value);bool HasVerifiedAgeEighteen() const;
            
                /// <summary>
                    /// List of organizationIds the user is member in
                    /// </summary>
                const std::vector<utility::string_t>& GetOrganizationIds() const;
                bool HasOrganizationIds() const;
            
                /// <summary>
                    /// The user identity which created this instance
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                bool HasCreatedBy() const;
            
                /// <summary>
                    /// The date and time this entity was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this entity was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                bool HasUpdatedAt() const;
            
                /// <summary>
                    /// User account lock status
                    /// </summary>
                bool GetLocked() const;
                bool HasLocked() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_GuestDeviceId;
            std::optional<bool> m_GuestFirstLoginIdentified;
            std::optional<utility::string_t> m_LastLoginAt;
            std::optional<utility::string_t> m_LastLoginNonce;
            std::optional<utility::string_t> m_LastDeviceId;
            std::optional<utility::string_t> m_LastPlatform;
            std::optional<utility::string_t> m_AvatarId;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_FirstName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<bool> m_IsEmailConfirmed;
            std::optional<std::vector<utility::string_t>> m_Roles;
            std::optional<bool> m_VerifiedAgeEighteen;
            std::optional<std::vector<utility::string_t>> m_OrganizationIds;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            std::optional<bool> m_Locked;
            };

    class ProfileDtoDataPage : public csp::services::DtoBase
        {
        public:
            ProfileDtoDataPage();
            virtual ~ProfileDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<ProfileDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<ProfileDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<ProfileDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    /// <summary>
        /// Simplified DTO for UserProfileDocument records.
        /// </summary>
    class ProfileLiteDto : public csp::services::DtoBase
        {
        public:
            ProfileLiteDto();
            virtual ~ProfileLiteDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this instance
                    /// </summary>
                utility::string_t GetId() const;
                bool HasId() const;
            
                /// <summary>
                    /// The ID of the currently active Avatar for the user.
                    /// </summary>
                utility::string_t GetAvatarId() const;
                bool HasAvatarId() const;
            
                /// <summary>
                    /// The publicly visible Username of the user.
                    /// </summary>
                [[deprecated("'userName' has been deprecated!")]]
                utility::string_t GetUserName() const;
                bool HasUserName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                bool HasDisplayName() const;
            
                /// <summary>
                    /// The Platform the user is on.
                    /// </summary>
                utility::string_t GetPlatform() const;
                bool HasPlatform() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_AvatarId;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<utility::string_t> m_Platform;
            };

    /// <summary>
        /// A request object used to wrap the values used to refresh an auth token.
        /// </summary>
    class RefreshRequest : public csp::services::DtoBase
        {
        public:
            RefreshRequest();
            virtual ~RefreshRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for the user
                    /// </summary>
                utility::string_t GetUserId() const;
                void SetUserId(const utility::string_t& Value);bool HasUserId() const;
            
                /// <summary>
                    /// The last issued refresh token
                    /// </summary>
                utility::string_t GetRefreshToken() const;
                void SetRefreshToken(const utility::string_t& Value);bool HasRefreshToken() const;
            
                /// <summary>
                    /// The device id of the device making the request
                    /// </summary>
                utility::string_t GetDeviceId() const;
                void SetDeviceId(const utility::string_t& Value);bool HasDeviceId() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_RefreshToken;
            std::optional<utility::string_t> m_DeviceId;
            };

    /// <summary>
        /// User Settings data transform object
        /// </summary>
    class SettingsDto : public csp::services::DtoBase
        {
        public:
            SettingsDto();
            virtual ~SettingsDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Id of the User for whom these settings apply
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Context of the user settings
                    /// </summary>
                utility::string_t GetContext() const;
                bool HasContext() const;
            
                /// <summary>
                    /// Settings of the user
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetSettings() const;
                void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);bool HasSettings() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_Context;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
            };

    /// <summary>
        /// Info about a social login provider
        /// </summary>
    class SocialProviderInfo : public csp::services::DtoBase
        {
        public:
            SocialProviderInfo();
            virtual ~SocialProviderInfo();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the provider
                    /// </summary>
                utility::string_t GetProviderName() const;
                void SetProviderName(const utility::string_t& Value);bool HasProviderName() const;
            
                /// <summary>
                    /// Application client ID with the social provider
                    /// </summary>
                utility::string_t GetClientId() const;
                void SetClientId(const utility::string_t& Value);bool HasClientId() const;
            
                /// <summary>
                    /// The scopes required to authenticate with this provider
                    /// </summary>
                const std::vector<utility::string_t>& GetScopes() const;
                void SetScopes(const std::vector<utility::string_t>& Value);bool HasScopes() const;
            
                /// <summary>
                    /// Uri of the social provider authorize endpoint
                    /// </summary>
                utility::string_t GetAuthorizeEndpoint() const;
                void SetAuthorizeEndpoint(const utility::string_t& Value);bool HasAuthorizeEndpoint() const;
            

        protected:
            std::optional<utility::string_t> m_ProviderName;
            std::optional<utility::string_t> m_ClientId;
            std::optional<std::vector<utility::string_t>> m_Scopes;
            std::optional<utility::string_t> m_AuthorizeEndpoint;
            };

    /// <summary>
        /// Contains info related to requesting a stripe checkout
        /// </summary>
    class StripeCheckoutRequest : public csp::services::DtoBase
        {
        public:
            StripeCheckoutRequest();
            virtual ~StripeCheckoutRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The lookup of the choosen tier
                    /// </summary>
                utility::string_t GetLookupKey() const;
                void SetLookupKey(const utility::string_t& Value);bool HasLookupKey() const;
            

        protected:
            std::optional<utility::string_t> m_LookupKey;
            };

    /// <summary>
        /// Contains info related to Stripe checkouts
        /// </summary>
    class StripeCheckoutSessionDto : public csp::services::DtoBase
        {
        public:
            StripeCheckoutSessionDto();
            virtual ~StripeCheckoutSessionDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The url of the checkout with Stripe
                    /// </summary>
                utility::string_t GetCheckoutUrl() const;
                bool HasCheckoutUrl() const;
            

        protected:
            std::optional<utility::string_t> m_CheckoutUrl;
            };

    /// <summary>
        /// Contains info associated to the Stripe Account
        /// </summary>
    class StripeCustomerDto : public csp::services::DtoBase
        {
        public:
            StripeCustomerDto();
            virtual ~StripeCustomerDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The id of the customer with Stripe
                    /// </summary>
                utility::string_t GetStripeCustomerId() const;
                bool HasStripeCustomerId() const;
            
                /// <summary>
                    /// Id of the CHS User
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// Name of the customer in Stripe
                    /// </summary>
                utility::string_t GetCustomerName() const;
                bool HasCustomerName() const;
            

        protected:
            std::optional<utility::string_t> m_StripeCustomerId;
            std::optional<utility::string_t> m_UserId;
            std::optional<utility::string_t> m_CustomerName;
            };

    /// <summary>
        /// Contains info related to Stripe customer portal
        /// </summary>
    class StripeCustomerPortalDto : public csp::services::DtoBase
        {
        public:
            StripeCustomerPortalDto();
            virtual ~StripeCustomerPortalDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The url of the customer portal with Stripe
                    /// </summary>
                utility::string_t GetCustomerPortalUrl() const;
                bool HasCustomerPortalUrl() const;
            

        protected:
            std::optional<utility::string_t> m_CustomerPortalUrl;
            };

    /// <summary>
        /// Object containing the admin information for a tenant
        /// </summary>
    class TenantAdminAccount : public csp::services::DtoBase
        {
        public:
            TenantAdminAccount();
            virtual ~TenantAdminAccount();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The administrator email address to access this tenant
                    /// </summary>
                utility::string_t GetEmailAddress() const;
                void SetEmailAddress(const utility::string_t& Value);bool HasEmailAddress() const;
            
                /// <summary>
                    /// The administrator password
                    /// </summary>
                utility::string_t GetPassword() const;
                bool HasPassword() const;
            
                /// <summary>
                    /// The user's assigned authorization roles
                    /// </summary>
                const std::vector<utility::string_t>& GetRoles() const;
                void SetRoles(const std::vector<utility::string_t>& Value);bool HasRoles() const;
            

        protected:
            std::optional<utility::string_t> m_EmailAddress;
            std::optional<utility::string_t> m_Password;
            std::optional<std::vector<utility::string_t>> m_Roles;
            };

    /// <summary>
        /// Tenant data transfer object
        /// </summary>
    class TenantDto : public csp::services::DtoBase
        {
        public:
            TenantDto();
            virtual ~TenantDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Name of the tenant for these settings
                    /// </summary>
                utility::string_t GetName() const;
                bool HasName() const;
            
                /// <summary>
                    /// Whether or not the tenant is locked
                    /// </summary>
                bool GetLocked() const;
                void SetLocked(const bool& Value);bool HasLocked() const;
            
                std::shared_ptr<TenantEmailSettingsDto> GetEmailSettings() const;
                void SetEmailSettings(const std::shared_ptr<TenantEmailSettingsDto>& Value);bool HasEmailSettings() const;
            
                /// <summary>
                    /// Contains all the email templates this tenant has defined
                    /// </summary>
                const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& GetEmailTemplateSettings() const;
                void SetEmailTemplateSettings(const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& Value);bool HasEmailTemplateSettings() const;
            
                /// <summary>
                    /// List of allowed redirect urls
                    /// </summary>
                const std::vector<utility::string_t>& GetEmailRedirectUrlAllowList() const;
                void SetEmailRedirectUrlAllowList(const std::vector<utility::string_t>& Value);bool HasEmailRedirectUrlAllowList() const;
            
                /// <summary>
                    /// The domains allowed to connect to our services
                    /// </summary>
                const std::vector<utility::string_t>& GetCorsAllowedOrigins() const;
                void SetCorsAllowedOrigins(const std::vector<utility::string_t>& Value);bool HasCorsAllowedOrigins() const;
            
                /// <summary>
                    /// The linked account that acts as the tenant admin
                    /// </summary>
                utility::string_t GetAdminUserId() const;
                bool HasAdminUserId() const;
            
                /// <summary>
                    /// Whether to enable Musubi for image processing
                    /// </summary>
                bool GetEnableMusubi() const;
                void SetEnableMusubi(const bool& Value);bool HasEnableMusubi() const;
            
                std::shared_ptr<TenantAdminAccount> GetAdminCredentials() const;
                void SetAdminCredentials(const std::shared_ptr<TenantAdminAccount>& Value);bool HasAdminCredentials() const;
            

        protected:
            std::optional<utility::string_t> m_Name;
            std::optional<bool> m_Locked;
            std::optional<std::shared_ptr<TenantEmailSettingsDto>> m_EmailSettings;
            std::optional<std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>> m_EmailTemplateSettings;
            std::optional<std::vector<utility::string_t>> m_EmailRedirectUrlAllowList;
            std::optional<std::vector<utility::string_t>> m_CorsAllowedOrigins;
            std::optional<utility::string_t> m_AdminUserId;
            std::optional<bool> m_EnableMusubi;
            std::optional<std::shared_ptr<TenantAdminAccount>> m_AdminCredentials;
            };

    /// <summary>
        /// Object containing the settings for a tenants email options
        /// </summary>
    class TenantEmailSettingsDto : public csp::services::DtoBase
        {
        public:
            TenantEmailSettingsDto();
            virtual ~TenantEmailSettingsDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The domains allowed to register for a profile
                    /// </summary>
                const std::vector<utility::string_t>& GetAllowedEmailDomains() const;
                void SetAllowedEmailDomains(const std::vector<utility::string_t>& Value);bool HasAllowedEmailDomains() const;
            
                /// <summary>
                    /// The username suffixes allowed to register for a profile
                    /// </summary>
                const std::vector<utility::string_t>& GetAllowedEmailUserNameSuffixes() const;
                void SetAllowedEmailUserNameSuffixes(const std::vector<utility::string_t>& Value);bool HasAllowedEmailUserNameSuffixes() const;
            
                /// <summary>
                    /// Weather or not to disable sending emails for this tenant
                    /// </summary>
                bool GetDisableEmailSender() const;
                void SetDisableEmailSender(const bool& Value);bool HasDisableEmailSender() const;
            
                /// <summary>
                    /// Weather or not to enable auto-confirmation for accounts for this tenant
                    /// </summary>
                bool GetEnableEmailAutoConfirm() const;
                void SetEnableEmailAutoConfirm(const bool& Value);bool HasEnableEmailAutoConfirm() const;
            

        protected:
            std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
            std::optional<std::vector<utility::string_t>> m_AllowedEmailUserNameSuffixes;
            std::optional<bool> m_DisableEmailSender;
            std::optional<bool> m_EnableEmailAutoConfirm;
            };

    /// <summary>
        /// Object containing the settings for a tenants email template(s)
        /// </summary>
    class TenantEmailTemplateSettingsDto : public csp::services::DtoBase
        {
        public:
            TenantEmailTemplateSettingsDto();
            virtual ~TenantEmailTemplateSettingsDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The type of template this record belongs to (PasswordReset, EmailConfirmation)
                    /// </summary>
                utility::string_t GetType() const;
                void SetType(const utility::string_t& Value);bool HasType() const;
            
                /// <summary>
                    /// The name of the template
                    /// </summary>
                utility::string_t GetTemplateName() const;
                void SetTemplateName(const utility::string_t& Value);bool HasTemplateName() const;
            
                /// <summary>
                    /// The name of the space link template
                    /// </summary>
                utility::string_t GetSpaceLinkTemplateName() const;
                void SetSpaceLinkTemplateName(const utility::string_t& Value);bool HasSpaceLinkTemplateName() const;
            
                /// <summary>
                    /// The Environment Url
                    /// </summary>
                utility::string_t GetEnvironmentUrl() const;
                void SetEnvironmentUrl(const utility::string_t& Value);bool HasEnvironmentUrl() const;
            
                /// <summary>
                    /// For certain templates we require an environmentUrlTemplate
                    /// </summary>
                utility::string_t GetEnvironmentUrlTemplate() const;
                void SetEnvironmentUrlTemplate(const utility::string_t& Value);bool HasEnvironmentUrlTemplate() const;
            
                /// <summary>
                    /// The environment url of the space link template
                    /// </summary>
                utility::string_t GetSpaceLinkUrlTemplate() const;
                void SetSpaceLinkUrlTemplate(const utility::string_t& Value);bool HasSpaceLinkUrlTemplate() const;
            
                /// <summary>
                    /// The Environment Specific URL used to generate tokens for reset passwords
                    /// </summary>
                utility::string_t GetTokenEnvironmentUrl() const;
                void SetTokenEnvironmentUrl(const utility::string_t& Value);bool HasTokenEnvironmentUrl() const;
            
                /// <summary>
                    /// The email address this template is being sent from
                    /// </summary>
                utility::string_t GetSenderEmail() const;
                void SetSenderEmail(const utility::string_t& Value);bool HasSenderEmail() const;
            
                /// <summary>
                    /// The email address this template is being sent to
                    /// </summary>
                utility::string_t GetRecipientEmail() const;
                void SetRecipientEmail(const utility::string_t& Value);bool HasRecipientEmail() const;
            

        protected:
            std::optional<utility::string_t> m_Type;
            std::optional<utility::string_t> m_TemplateName;
            std::optional<utility::string_t> m_SpaceLinkTemplateName;
            std::optional<utility::string_t> m_EnvironmentUrl;
            std::optional<utility::string_t> m_EnvironmentUrlTemplate;
            std::optional<utility::string_t> m_SpaceLinkUrlTemplate;
            std::optional<utility::string_t> m_TokenEnvironmentUrl;
            std::optional<utility::string_t> m_SenderEmail;
            std::optional<utility::string_t> m_RecipientEmail;
            };

    /// <summary>
        /// Contains data required to securely change a User's password
        /// </summary>
    class TokenResetPasswordRequest : public csp::services::DtoBase
        {
        public:
            TokenResetPasswordRequest();
            virtual ~TokenResetPasswordRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Token received through Email
                    /// </summary>
                utility::string_t GetToken() const;
                void SetToken(const utility::string_t& Value);bool HasToken() const;
            
                /// <summary>
                    /// User's desired password
                    /// </summary>
                utility::string_t GetNewPassword() const;
                void SetNewPassword(const utility::string_t& Value);bool HasNewPassword() const;
            

        protected:
            std::optional<utility::string_t> m_Token;
            std::optional<utility::string_t> m_NewPassword;
            };

    /// <summary>
        /// Object containing those properties necessary to merge a guest user into a registered user account.
        /// </summary>
    class UpgradeGuestRequest : public csp::services::DtoBase
        {
        public:
            UpgradeGuestRequest();
            virtual ~UpgradeGuestRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The email address of the user.
                    /// </summary>
                utility::string_t GetEmail() const;
                void SetEmail(const utility::string_t& Value);bool HasEmail() const;
            
                /// <summary>
                    /// Optional username
                    /// </summary>
                utility::string_t GetUserName() const;
                void SetUserName(const utility::string_t& Value);bool HasUserName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                void SetDisplayName(const utility::string_t& Value);bool HasDisplayName() const;
            
                /// <summary>
                    /// The optional password of the user.  If no password is provided, the user cannot actually login via MGS Login,
                    /// but would first have to call the reset-password endpoint.
                    /// </summary>
                utility::string_t GetPassword() const;
                void SetPassword(const utility::string_t& Value);bool HasPassword() const;
            
                /// <summary>
                    /// The deviceId used to create the underlying guest account
                    /// </summary>
                utility::string_t GetGuestDeviceId() const;
                void SetGuestDeviceId(const utility::string_t& Value);bool HasGuestDeviceId() const;
            
                /// <summary>
                    /// Used to suppress the sending of a confirmation email upon upgrading the account.
                    /// </summary>
                bool GetSuppressConfirmationEmail() const;
                void SetSuppressConfirmationEmail(const bool& Value);bool HasSuppressConfirmationEmail() const;
            
                /// <summary>
                    /// Used to automatically confirm the user - only available to administrators
                    /// </summary>
                bool GetAutoConfirm() const;
                void SetAutoConfirm(const bool& Value);bool HasAutoConfirm() const;
            
                /// <summary>
                    /// A token provided to the user that can be used to auto-confirm their account
                    /// </summary>
                utility::string_t GetInviteToken() const;
                void SetInviteToken(const utility::string_t& Value);bool HasInviteToken() const;
            
                /// <summary>
                    /// Optional redirect URI to embed in the confirmation email
                    /// </summary>
                utility::string_t GetRedirectUrl() const;
                void SetRedirectUrl(const utility::string_t& Value);bool HasRedirectUrl() const;
            

        protected:
            std::optional<utility::string_t> m_Email;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<utility::string_t> m_Password;
            std::optional<utility::string_t> m_GuestDeviceId;
            std::optional<bool> m_SuppressConfirmationEmail;
            std::optional<bool> m_AutoConfirm;
            std::optional<utility::string_t> m_InviteToken;
            std::optional<utility::string_t> m_RedirectUrl;
            };

    /// <summary>
        /// Object containing those properties necessary to merge a guest user into a registered user account using a social authentication provider.
        /// </summary>
    class UpgradeGuestSocialRequest : public csp::services::DtoBase
        {
        public:
            UpgradeGuestSocialRequest();
            virtual ~UpgradeGuestSocialRequest();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The name of the social authentication provider
                    /// (e.g. "Google")
                    /// </summary>
                utility::string_t GetProvider() const;
                void SetProvider(const utility::string_t& Value);bool HasProvider() const;
            
                /// <summary>
                    /// The current auth token from the provider
                    /// (must be a valid token)
                    /// </summary>
                utility::string_t GetToken() const;
                void SetToken(const utility::string_t& Value);bool HasToken() const;
            
                /// <summary>
                    /// Optional username
                    /// </summary>
                utility::string_t GetUserName() const;
                void SetUserName(const utility::string_t& Value);bool HasUserName() const;
            
                /// <summary>
                    /// The optional display name of the user
                    /// </summary>
                utility::string_t GetDisplayName() const;
                void SetDisplayName(const utility::string_t& Value);bool HasDisplayName() const;
            
                /// <summary>
                    /// The optional password of the user.  If no password is provided, the user cannot actually login via MGS Login,
                    /// but would first have to call the reset-password endpoint.
                    /// </summary>
                utility::string_t GetPassword() const;
                void SetPassword(const utility::string_t& Value);bool HasPassword() const;
            
                /// <summary>
                    /// The deviceId used to create the underlying guest account
                    /// </summary>
                utility::string_t GetGuestDeviceId() const;
                void SetGuestDeviceId(const utility::string_t& Value);bool HasGuestDeviceId() const;
            
                /// <summary>
                    /// Optional redirect URI to embed in the confirmation email
                    /// </summary>
                utility::string_t GetRedirectUrl() const;
                void SetRedirectUrl(const utility::string_t& Value);bool HasRedirectUrl() const;
            
                /// <summary>
                    /// The URI given in the original OAuth request to get the auth token
                    /// </summary>
                utility::string_t GetOAuthRedirectUri() const;
                void SetOAuthRedirectUri(const utility::string_t& Value);bool HasOAuthRedirectUri() const;
            
                /// <summary>
                    /// Optional Id of the User with the Social Provider, when needed for Login
                    /// </summary>
                utility::string_t GetOptionalProviderUserId() const;
                void SetOptionalProviderUserId(const utility::string_t& Value);bool HasOptionalProviderUserId() const;
            

        protected:
            std::optional<utility::string_t> m_Provider;
            std::optional<utility::string_t> m_Token;
            std::optional<utility::string_t> m_UserName;
            std::optional<utility::string_t> m_DisplayName;
            std::optional<utility::string_t> m_Password;
            std::optional<utility::string_t> m_GuestDeviceId;
            std::optional<utility::string_t> m_RedirectUrl;
            std::optional<utility::string_t> m_OAuthRedirectUri;
            std::optional<utility::string_t> m_OptionalProviderUserId;
            };

    /// <summary>
        /// The data transfer object for user authorization roles
        /// </summary>
    class UserRolesDto : public csp::services::DtoBase
        {
        public:
            UserRolesDto();
            virtual ~UserRolesDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The user's unique identifier
                    /// </summary>
                utility::string_t GetUserId() const;
                bool HasUserId() const;
            
                /// <summary>
                    /// The user's assigned authorization roles
                    /// </summary>
                const std::vector<utility::string_t>& GetRoles() const;
                void SetRoles(const std::vector<utility::string_t>& Value);bool HasRoles() const;
            

        protected:
            std::optional<utility::string_t> m_UserId;
            std::optional<std::vector<utility::string_t>> m_Roles;
            };


}   // namespace csp::services::userservice