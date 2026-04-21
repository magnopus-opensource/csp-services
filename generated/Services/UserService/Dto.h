

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::userservice
{

class AnalyticsRecord;
class ApiVersion;
class ApplicationSecretDto;
class ApplicationSettingsDto;
class AuthDto;
class AvatarManifestDto;
class BucketPermissionRuleDto;
class ControllerVersions;
class CreateApplicationSecretRequest;
class CreateHostnameRequest;
class CreateLegacyHostnameRequest;
class CreateUserRequest;
class CreateUserSocialRequest;
class CrossTenantSettingsDto;
class DefaultSessionSettingsDto;
class DefaultSettings;
class EncryptedValueDto;
class EquipItemDto;
class ExchangeTenancyRequest;
class ForgotPasswordRequest;
class GacValidationConfigDto;
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
class LoginGuestRequest;
class LoginRequest;
class LoginSocialRequest;
class LogoutRequest;
class MetagameProgressDto;
class MetagameUpdate;
class NamedFunction;
class OrganizationDto;
class OrganizationInviteDto;
class OrganizationMember;
class ProblemDetails;
class ProfileDto;
class ProfileDtoDataPage;
class ProfileLiteDto;
class RefreshRequest;
class ServiceVersionInfo;
class SetEncryptedValueRequest;
class SettingsDto;
class SocialProviderInfo;
class StringDataPage;
class StripeCheckoutRequest;
class StripeCheckoutSessionDto;
class StripeCustomerDto;
class StripeCustomerPortalDto;
class TenancyLiteDto;
class TenantAdminAccount;
class TenantCleanupFilters;
class TenantDto;
class TenantDtoDataPage;
class TenantEmailSettingsDto;
class TenantEmailTemplateSettingsDto;
class TenantSelfDto;
class TokenOptions;
class TokenResetPasswordRequest;
class TypedHostname;
class UpdateApplicationSecretRequest;
class UpdateEmailSettingsRequest;
class UpdateRolesRequest;
class UpdateTenantLiteRequest;
class UpgradeGuestRequest;
class UpgradeGuestSocialRequest;
class UserQuery;
class UserRolesDto;



class AnalyticsRecord : public csp::services::DtoBase
{
public:
	AnalyticsRecord();
	virtual ~AnalyticsRecord();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetId() const;
	bool HasId() const;

	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	utility::string_t GetTimestamp() const;
	void SetTimestamp(const utility::string_t& Value);
	bool HasTimestamp() const;

	utility::string_t GetProductIdentifier() const;
	void SetProductIdentifier(const utility::string_t& Value);
	bool HasProductIdentifier() const;

	utility::string_t GetProductContext() const;
	void SetProductContext(const utility::string_t& Value);
	bool HasProductContext() const;

	utility::string_t GetProductContextSection() const;
	void SetProductContextSection(const utility::string_t& Value);
	bool HasProductContextSection() const;

	const std::vector<utility::string_t>& GetVersionMatrix() const;
	void SetVersionMatrix(const std::vector<utility::string_t>& Value);
	bool HasVersionMatrix() const;

	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	utility::string_t GetUserId() const;
	bool HasUserId() const;

	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	utility::string_t GetSubCategory() const;
	void SetSubCategory(const utility::string_t& Value);
	bool HasSubCategory() const;

	utility::string_t GetInteractionType() const;
	void SetInteractionType(const utility::string_t& Value);
	bool HasInteractionType() const;

	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;

	utility::string_t GetServiceName() const;
	void SetServiceName(const utility::string_t& Value);
	bool HasServiceName() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_Timestamp;
	std::optional<utility::string_t> m_ProductIdentifier;
	std::optional<utility::string_t> m_ProductContext;
	std::optional<utility::string_t> m_ProductContextSection;
	std::optional<std::vector<utility::string_t>> m_VersionMatrix;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_Category;
	std::optional<utility::string_t> m_SubCategory;
	std::optional<utility::string_t> m_InteractionType;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
	std::optional<utility::string_t> m_ServiceName;
};

/// <summary>
/// Version of an API
/// </summary>
class ApiVersion : public csp::services::DtoBase
{
public:
	ApiVersion();
	virtual ~ApiVersion();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the version
	/// </summary>
	utility::string_t GetVersion() const;
	void SetVersion(const utility::string_t& Value);
	bool HasVersion() const;

	/// <summary>
	/// when the version was deprecated, if known
	/// </summary>
	utility::string_t GetDeprecationDatetime() const;
	void SetDeprecationDatetime(const utility::string_t& Value);
	bool HasDeprecationDatetime() const;

	/// <summary>
	/// when the version will no longer be available, if determined
	/// </summary>
	utility::string_t GetEndOfLifeDatetime() const;
	void SetEndOfLifeDatetime(const utility::string_t& Value);
	bool HasEndOfLifeDatetime() const;


protected:
	std::optional<utility::string_t> m_Version;
	std::optional<utility::string_t> m_DeprecationDatetime;
	std::optional<utility::string_t> m_EndOfLifeDatetime;
};

/// <summary>
/// Data transfer object for an application secret definition.
/// </summary>
class ApplicationSecretDto : public csp::services::DtoBase
{
public:
	ApplicationSecretDto();
	virtual ~ApplicationSecretDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier.
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Application name (e.g., "Nodey").
	/// </summary>
	utility::string_t GetApplicationName() const;
	bool HasApplicationName() const;

	/// <summary>
	/// Human-readable name (e.g., "Meshy API Key").
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Environment variable / secret key name (e.g., "MESHY_API_KEY").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	bool HasEnvVarName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac" (GCP Service Account JSON).
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants. Magnopus-admin only.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;

	/// <summary>
	/// When the definition was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// When the definition was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

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
	/// Whether the settings can be retrieved anonymously
	/// </summary>
	bool GetAllowAnonymous() const;
	void SetAllowAnonymous(const bool& Value);
	bool HasAllowAnonymous() const;

	/// <summary>
	/// Settings of the application
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSettings() const;
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


protected:
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<utility::string_t> m_Context;
	std::optional<bool> m_AllowAnonymous;
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
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// The token for accessing the API
	/// </summary>
	utility::string_t GetAccessToken() const;
	void SetAccessToken(const utility::string_t& Value);
	bool HasAccessToken() const;

	/// <summary>
	/// The date and time the access token expires
	/// </summary>
	utility::string_t GetAccessTokenExpiresAt() const;
	void SetAccessTokenExpiresAt(const utility::string_t& Value);
	bool HasAccessTokenExpiresAt() const;

	/// <summary>
	/// The refresh token to use to request a new access token
	/// </summary>
	utility::string_t GetRefreshToken() const;
	void SetRefreshToken(const utility::string_t& Value);
	bool HasRefreshToken() const;

	/// <summary>
	/// The date and time the refresh token expires
	/// </summary>
	utility::string_t GetRefreshTokenExpiresAt() const;
	void SetRefreshTokenExpiresAt(const utility::string_t& Value);
	bool HasRefreshTokenExpiresAt() const;

	/// <summary>
	/// Ids of the user's organizations
	/// </summary>
	const std::vector<utility::string_t>& GetOrganizationIds() const;
	void SetOrganizationIds(const std::vector<utility::string_t>& Value);
	bool HasOrganizationIds() const;

	/// <summary>
	/// The ID of the device which has been granted access.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	std::shared_ptr<DefaultSettings> GetDefaultSettings() const;
	void SetDefaultSettings(const std::shared_ptr<DefaultSettings>& Value);
	bool HasDefaultSettings() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_AccessToken;
	std::optional<utility::string_t> m_AccessTokenExpiresAt;
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_RefreshTokenExpiresAt;
	std::optional<std::vector<utility::string_t>> m_OrganizationIds;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<std::shared_ptr<DefaultSettings>> m_DefaultSettings;
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
	void SetGender(const std::shared_ptr<Gender>& Value);
	bool HasGender() const;

	/// <summary>
	/// The external full URI to the location of the avatar asset
	/// </summary>
	utility::string_t GetExternalUri() const;
	void SetExternalUri(const utility::string_t& Value);
	bool HasExternalUri() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
	std::optional<std::shared_ptr<Gender>> m_Gender;
	std::optional<utility::string_t> m_ExternalUri;
};

/// <summary>
/// DTO for a bucket permission rule.
/// </summary>
class BucketPermissionRuleDto : public csp::services::DtoBase
{
public:
	BucketPermissionRuleDto();
	virtual ~BucketPermissionRuleDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// GCS bucket name. Supports {env} token for environment substitution.
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// Required IAM permissions (e.g., "storage.objects.get").
	/// </summary>
	const std::vector<utility::string_t>& GetPermissions() const;
	void SetPermissions(const std::vector<utility::string_t>& Value);
	bool HasPermissions() const;


protected:
	std::optional<utility::string_t> m_BucketName;
	std::optional<std::vector<utility::string_t>> m_Permissions;
};

/// <summary>
/// Versions of a specific controller
/// </summary>
class ControllerVersions : public csp::services::DtoBase
{
public:
	ControllerVersions();
	virtual ~ControllerVersions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Reverse proxy of the service
	/// </summary>
	utility::string_t GetReverseProxy() const;
	void SetReverseProxy(const utility::string_t& Value);
	bool HasReverseProxy() const;

	/// <summary>
	/// Name of the controller
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// supported versions
	/// </summary>
	const std::vector<std::shared_ptr<ApiVersion>>& GetApiVersions() const;
	void SetApiVersions(const std::vector<std::shared_ptr<ApiVersion>>& Value);
	bool HasApiVersions() const;

	/// <summary>
	/// currently adopted version
	/// </summary>
	utility::string_t GetCurrentApiVersion() const;
	void SetCurrentApiVersion(const utility::string_t& Value);
	bool HasCurrentApiVersion() const;


protected:
	std::optional<utility::string_t> m_ReverseProxy;
	std::optional<utility::string_t> m_Name;
	std::optional<std::vector<std::shared_ptr<ApiVersion>>> m_ApiVersions;
	std::optional<utility::string_t> m_CurrentApiVersion;
};

/// <summary>
/// Request to create a new application secret definition.
/// </summary>
class CreateApplicationSecretRequest : public csp::services::DtoBase
{
public:
	CreateApplicationSecretRequest();
	virtual ~CreateApplicationSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable name (e.g., "Meshy API Key").
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Environment variable / secret key name (e.g., "MESHY_API_KEY").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category (e.g., "Google Cloud", "3D Generation").
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac".
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// If omitted, auto-populated with MusubiKey_{EnvVarName} convention.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
};

/// <summary>
/// Request body for creating a hostname.
/// </summary>
class CreateHostnameRequest : public csp::services::DtoBase
{
public:
	CreateHostnameRequest();
	virtual ~CreateHostnameRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname to create
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The type of service ("nodey" or "oko")
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
};

/// <summary>
/// Request body for creating or updating a legacy hostname.
/// </summary>
class CreateLegacyHostnameRequest : public csp::services::DtoBase
{
public:
	CreateLegacyHostnameRequest();
	virtual ~CreateLegacyHostnameRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;


protected:
	std::optional<utility::string_t> m_Hostname;
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
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// The optional email address of the user.
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// the optional plaintext password for the user with a minimum length of 8 and maximum length of 50
	/// </summary>
	utility::string_t GetPassword() const;
	void SetPassword(const utility::string_t& Value);
	bool HasPassword() const;

	/// <summary>
	/// The optional user name of the user
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// The optional display name of the user
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Only valid for guest profiles, and only valid if this profile has not Email/Password
	/// Acts as the unique identifier for guest profiles on the platform
	/// </summary>
	utility::string_t GetGuestDeviceId() const;
	void SetGuestDeviceId(const utility::string_t& Value);
	bool HasGuestDeviceId() const;

	/// <summary>
	/// An optional seed ID for the currently active Avatar for the user.
	/// </summary>
	utility::string_t GetAvatarId() const;
	void SetAvatarId(const utility::string_t& Value);
	bool HasAvatarId() const;

	/// <summary>
	/// A token provided to the user that can be used to auto-confirm their account
	/// </summary>
	utility::string_t GetInviteToken() const;
	void SetInviteToken(const utility::string_t& Value);
	bool HasInviteToken() const;

	/// <summary>
	/// Optional redirect URI to embed in the confirmation email
	/// </summary>
	utility::string_t GetRedirectUrl() const;
	void SetRedirectUrl(const utility::string_t& Value);
	bool HasRedirectUrl() const;

	/// <summary>
	/// The user has given appropriate age verification
	/// </summary>
	bool GetVerifiedAgeEighteen() const;
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

	const std::vector<std::shared_ptr<InitialSettingsDto>>& GetInitialSettings() const;
	void SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value);
	bool HasInitialSettings() const;


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
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// The name of the social authentication provider
	/// (e.g. "Google")
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// The current identity token from the provider
	/// (must be a valid token that is not expired)
	/// </summary>
	utility::string_t GetToken() const;
	void SetToken(const utility::string_t& Value);
	bool HasToken() const;

	/// <summary>
	/// The optional plaintext password for the user with a minimum length of 8 and maximum length of 50
	/// </summary>
	utility::string_t GetPassword() const;
	void SetPassword(const utility::string_t& Value);
	bool HasPassword() const;

	/// <summary>
	/// The optional user name of the user
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// The optional display name of the user
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// An optional seed ID for the currently active Avatar for the user.
	/// </summary>
	utility::string_t GetAvatarId() const;
	void SetAvatarId(const utility::string_t& Value);
	bool HasAvatarId() const;

	/// <summary>
	/// A token provided to the user that can be used to auto-confirm their account
	/// </summary>
	utility::string_t GetInviteToken() const;
	void SetInviteToken(const utility::string_t& Value);
	bool HasInviteToken() const;

	/// <summary>
	/// Optional full url that is embedded in the confirmation email as the primary link to be redirected to after email confirmation is complete.
	/// If this URL is not provided, the system will use the default configured for the environment/tenant to direct new users.
	/// </summary>
	utility::string_t GetRedirectUrl() const;
	void SetRedirectUrl(const utility::string_t& Value);
	bool HasRedirectUrl() const;

	/// <summary>
	/// Flag to indicate if a user has verified they are of age
	/// </summary>
	bool GetVerifiedAgeEighteen() const;
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

	/// <summary>
	/// The full url provided in the original OAuth flow that represents the final destination of the user after the OAuth flow is complete
	/// </summary>
	utility::string_t GetOAuthRedirectUri() const;
	void SetOAuthRedirectUri(const utility::string_t& Value);
	bool HasOAuthRedirectUri() const;

	/// <summary>
	/// Optional Id of the User with the Social Provider, when needed for Login
	/// </summary>
	utility::string_t GetOptionalProviderUserId() const;
	void SetOptionalProviderUserId(const utility::string_t& Value);
	bool HasOptionalProviderUserId() const;

	const std::vector<std::shared_ptr<InitialSettingsDto>>& GetInitialSettings() const;
	void SetInitialSettings(const std::vector<std::shared_ptr<InitialSettingsDto>>& Value);
	bool HasInitialSettings() const;


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
/// Cross-tenant user settings data transfer object
/// </summary>
class CrossTenantSettingsDto : public csp::services::DtoBase
{
public:
	CrossTenantSettingsDto();
	virtual ~CrossTenantSettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Email address of the user these settings belong to
	/// </summary>
	utility::string_t GetEmail() const;
	bool HasEmail() const;

	/// <summary>
	/// Context namespace of the settings
	/// </summary>
	utility::string_t GetContext() const;
	bool HasContext() const;

	/// <summary>
	/// Key-value settings dictionary
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSettings() const;
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


protected:
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_Context;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
};

/// <summary>
/// Tenant-specific default session settings
/// </summary>
class DefaultSessionSettingsDto : public csp::services::DtoBase
{
public:
	DefaultSessionSettingsDto();
	virtual ~DefaultSessionSettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the application (for application settings)
	/// </summary>
	utility::string_t GetApplicationName() const;
	void SetApplicationName(const utility::string_t& Value);
	bool HasApplicationName() const;

	/// <summary>
	/// Application setting contexts
	/// </summary>
	const std::vector<utility::string_t>& GetApplicationSettingsContexts() const;
	void SetApplicationSettingsContexts(const std::vector<utility::string_t>& Value);
	bool HasApplicationSettingsContexts() const;

	/// <summary>
	/// User setting contexts
	/// </summary>
	const std::vector<utility::string_t>& GetUserSettingsContexts() const;
	void SetUserSettingsContexts(const std::vector<utility::string_t>& Value);
	bool HasUserSettingsContexts() const;


protected:
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<std::vector<utility::string_t>> m_ApplicationSettingsContexts;
	std::optional<std::vector<utility::string_t>> m_UserSettingsContexts;
};

/// <summary>
/// Default settings of the tenant
/// </summary>
class DefaultSettings : public csp::services::DtoBase
{
public:
	DefaultSettings();
	virtual ~DefaultSettings();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Default application settings of the tenant
	/// </summary>
	const std::vector<std::shared_ptr<ApplicationSettingsDto>>& GetDefaultApplicationSettings() const;
	void SetDefaultApplicationSettings(const std::vector<std::shared_ptr<ApplicationSettingsDto>>& Value);
	bool HasDefaultApplicationSettings() const;

	/// <summary>
	/// Default user settings of the tenant
	/// </summary>
	const std::vector<std::shared_ptr<SettingsDto>>& GetDefaultUserSettings() const;
	void SetDefaultUserSettings(const std::vector<std::shared_ptr<SettingsDto>>& Value);
	bool HasDefaultUserSettings() const;


protected:
	std::optional<std::vector<std::shared_ptr<ApplicationSettingsDto>>> m_DefaultApplicationSettings;
	std::optional<std::vector<std::shared_ptr<SettingsDto>>> m_DefaultUserSettings;
};

/// <summary>
/// Data transfer object for an encrypted value (decrypted for authorized callers)
/// </summary>
class EncryptedValueDto : public csp::services::DtoBase
{
public:
	EncryptedValueDto();
	virtual ~EncryptedValueDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The key name (ThirdPartyName)
	/// </summary>
	utility::string_t GetKeyName() const;
	void SetKeyName(const utility::string_t& Value);
	bool HasKeyName() const;

	/// <summary>
	/// The decrypted value
	/// </summary>
	utility::string_t GetValue() const;
	void SetValue(const utility::string_t& Value);
	bool HasValue() const;


protected:
	std::optional<utility::string_t> m_KeyName;
	std::optional<utility::string_t> m_Value;
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
	void SetIsEquipped(const bool& Value);
	bool HasIsEquipped() const;


protected:
	std::optional<bool> m_IsEquipped;
};

/// <summary>
/// Request body for exchanging a refresh token for auth tokens in a different tenant.
/// The server derives the user's email from the refresh token claims — no userId or email is required.
/// </summary>
class ExchangeTenancyRequest : public csp::services::DtoBase
{
public:
	ExchangeTenancyRequest();
	virtual ~ExchangeTenancyRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The current refresh token (proves the caller's identity).
	/// </summary>
	utility::string_t GetRefreshToken() const;
	void SetRefreshToken(const utility::string_t& Value);
	bool HasRefreshToken() const;

	/// <summary>
	/// The tenant to switch to.
	/// </summary>
	utility::string_t GetTargetTenantName() const;
	void SetTargetTenantName(const utility::string_t& Value);
	bool HasTargetTenantName() const;

	/// <summary>
	/// The device identifier (used for session tracking).
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;


protected:
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_TargetTenantName;
	std::optional<utility::string_t> m_DeviceId;
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
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// The email address of the user.
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;


protected:
	std::optional<utility::string_t> m_Tenant;
	std::optional<utility::string_t> m_Email;
};

/// <summary>
/// DTO for GAC validation configuration.
/// </summary>
class GacValidationConfigDto : public csp::services::DtoBase
{
public:
	GacValidationConfigDto();
	virtual ~GacValidationConfigDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether to probe Vertex AI with a lightweight generateContent call.
	/// </summary>
	bool GetCheckVertexAi() const;
	void SetCheckVertexAi(const bool& Value);
	bool HasCheckVertexAi() const;

	/// <summary>
	/// Buckets and required permissions to verify.
	/// </summary>
	const std::vector<std::shared_ptr<BucketPermissionRuleDto>>& GetRequiredBuckets() const;
	void SetRequiredBuckets(const std::vector<std::shared_ptr<BucketPermissionRuleDto>>& Value);
	bool HasRequiredBuckets() const;

	/// <summary>
	/// Project-level IAM permissions to verify.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredProjectPermissions() const;
	void SetRequiredProjectPermissions(const std::vector<utility::string_t>& Value);
	bool HasRequiredProjectPermissions() const;


protected:
	std::optional<bool> m_CheckVertexAi;
	std::optional<std::vector<std::shared_ptr<BucketPermissionRuleDto>>> m_RequiredBuckets;
	std::optional<std::vector<utility::string_t>> m_RequiredProjectPermissions;
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
	void SetGroupOwnerId(const utility::string_t& Value);
	bool HasGroupOwnerId() const;

	/// <summary>
	/// Unique identifier of group
	/// </summary>
	utility::string_t GetGroupCode() const;
	bool HasGroupCode() const;

	/// <summary>
	/// Type of group
	/// </summary>
	utility::string_t GetGroupType() const;
	void SetGroupType(const utility::string_t& Value);
	bool HasGroupType() const;

	/// <summary>
	/// Name of the group
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Group description
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// List of users in the group
	/// </summary>
	const std::vector<utility::string_t>& GetUsers() const;
	void SetUsers(const std::vector<utility::string_t>& Value);
	bool HasUsers() const;

	/// <summary>
	/// List of users banned from the group
	/// </summary>
	const std::vector<utility::string_t>& GetBannedUsers() const;
	void SetBannedUsers(const std::vector<utility::string_t>& Value);
	bool HasBannedUsers() const;

	/// <summary>
	/// List of moderators of the group
	/// </summary>
	const std::vector<utility::string_t>& GetModerators() const;
	void SetModerators(const std::vector<utility::string_t>& Value);
	bool HasModerators() const;

	/// <summary>
	/// Whether the group shows up in searches by non-members or not
	/// </summary>
	bool GetDiscoverable() const;
	void SetDiscoverable(const bool& Value);
	bool HasDiscoverable() const;

	/// <summary>
	/// Whether users join as moderators by default or not
	/// </summary>
	bool GetAutoModerator() const;
	void SetAutoModerator(const bool& Value);
	bool HasAutoModerator() const;

	/// <summary>
	/// Whether the group join code is public, or is included in searches by non-members
	/// </summary>
	bool GetRequiresInvite() const;
	void SetRequiresInvite(const bool& Value);
	bool HasRequiresInvite() const;

	/// <summary>
	/// Whether the group has been archived or not
	/// </summary>
	bool GetArchived() const;
	void SetArchived(const bool& Value);
	bool HasArchived() const;

	/// <summary>
	/// The organizationId that the group belongs to
	/// </summary>
	utility::string_t GetOrganizationId() const;
	void SetOrganizationId(const utility::string_t& Value);
	bool HasOrganizationId() const;

	/// <summary>
	/// Tags for this group
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

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
	std::optional<std::vector<utility::string_t>> m_Tags;
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
	void SetIds(const std::vector<utility::string_t>& Value);
	bool HasIds() const;

	/// <summary>
	/// Type of group
	/// </summary>
	const std::vector<utility::string_t>& GetGroupTypes() const;
	void SetGroupTypes(const std::vector<utility::string_t>& Value);
	bool HasGroupTypes() const;

	/// <summary>
	/// Name of group unique for public group type only
	/// </summary>
	const std::vector<utility::string_t>& GetNames() const;
	void SetNames(const std::vector<utility::string_t>& Value);
	bool HasNames() const;

	/// <summary>
	/// Partial name for a group that you have access to search against
	/// </summary>
	utility::string_t GetPartialName() const;
	void SetPartialName(const utility::string_t& Value);
	bool HasPartialName() const;

	/// <summary>
	/// Unique identifier of the group owner(s)
	/// </summary>
	const std::vector<utility::string_t>& GetGroupOwnerIds() const;
	void SetGroupOwnerIds(const std::vector<utility::string_t>& Value);
	bool HasGroupOwnerIds() const;

	/// <summary>
	/// Unique identifier of the group owner(s) to exclude in the search
	/// </summary>
	const std::vector<utility::string_t>& GetExcludeGroupOwnerIds() const;
	void SetExcludeGroupOwnerIds(const std::vector<utility::string_t>& Value);
	bool HasExcludeGroupOwnerIds() const;

	/// <summary>
	/// Exclude groups with these unique identifiers
	/// </summary>
	const std::vector<utility::string_t>& GetExcludeIds() const;
	void SetExcludeIds(const std::vector<utility::string_t>& Value);
	bool HasExcludeIds() const;

	/// <summary>
	/// Unique identifier of the group member(s)
	/// </summary>
	const std::vector<utility::string_t>& GetUsers() const;
	void SetUsers(const std::vector<utility::string_t>& Value);
	bool HasUsers() const;

	/// <summary>
	/// Whether the group shows up in searches by non-members or not
	/// </summary>
	bool GetDiscoverable() const;
	void SetDiscoverable(const bool& Value);
	bool HasDiscoverable() const;

	/// <summary>
	/// Whether users join as moderators by default or not
	/// </summary>
	bool GetAutoModerator() const;
	void SetAutoModerator(const bool& Value);
	bool HasAutoModerator() const;

	/// <summary>
	/// Whether the group join code is public, or is included in searches by non-members
	/// </summary>
	bool GetRequiresInvite() const;
	void SetRequiresInvite(const bool& Value);
	bool HasRequiresInvite() const;

	/// <summary>
	/// Whether the group is archived or not
	/// </summary>
	bool GetArchived() const;
	void SetArchived(const bool& Value);
	bool HasArchived() const;

	/// <summary>
	/// Unique identifier of the organization group belongs to
	/// </summary>
	const std::vector<utility::string_t>& GetOrganizationIds() const;
	void SetOrganizationIds(const std::vector<utility::string_t>& Value);
	bool HasOrganizationIds() const;

	/// <summary>
	/// The tags the group must contain
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The tags the group must not contain
	/// </summary>
	const std::vector<utility::string_t>& GetExcludedTags() const;
	void SetExcludedTags(const std::vector<utility::string_t>& Value);
	bool HasExcludedTags() const;

	/// <summary>
	/// Each group must contain ALL listed Magnopus.Service.User.Structures.GroupFilters.Tags
	/// (default is false - ANY)
	/// </summary>
	bool GetTagsAll() const;
	void SetTagsAll(const bool& Value);
	bool HasTagsAll() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Ids;
	std::optional<std::vector<utility::string_t>> m_GroupTypes;
	std::optional<std::vector<utility::string_t>> m_Names;
	std::optional<utility::string_t> m_PartialName;
	std::optional<std::vector<utility::string_t>> m_GroupOwnerIds;
	std::optional<std::vector<utility::string_t>> m_ExcludeGroupOwnerIds;
	std::optional<std::vector<utility::string_t>> m_ExcludeIds;
	std::optional<std::vector<utility::string_t>> m_Users;
	std::optional<bool> m_Discoverable;
	std::optional<bool> m_AutoModerator;
	std::optional<bool> m_RequiresInvite;
	std::optional<bool> m_Archived;
	std::optional<std::vector<utility::string_t>> m_OrganizationIds;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<std::vector<utility::string_t>> m_ExcludedTags;
	std::optional<bool> m_TagsAll;
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
	/// Unique identifier of the User
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Sender of group invite
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The email of user
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

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
	void SetAsModerator(const bool& Value);
	bool HasAsModerator() const;

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
	void SetSendSpaceLink(const bool& Value);
	bool HasSendSpaceLink() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
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
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The description of the group
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

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
	void SetDiscoverable(const bool& Value);
	bool HasDiscoverable() const;

	/// <summary>
	/// Whether users join as moderators by default or not
	/// </summary>
	bool GetAutoModerator() const;
	void SetAutoModerator(const bool& Value);
	bool HasAutoModerator() const;

	/// <summary>
	/// Whether the group join code is public, or is included in searches by non-members
	/// </summary>
	bool GetRequiresInvite() const;
	void SetRequiresInvite(const bool& Value);
	bool HasRequiresInvite() const;

	/// <summary>
	/// Whether the group has been archived or not
	/// </summary>
	bool GetArchived() const;
	void SetArchived(const bool& Value);
	bool HasArchived() const;

	/// <summary>
	/// The organizationId that the group belongs to
	/// </summary>
	utility::string_t GetOrganizationId() const;
	bool HasOrganizationId() const;

	/// <summary>
	/// Tags for this group
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

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
	std::optional<std::vector<utility::string_t>> m_Tags;
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
	void SetItems(const std::vector<std::shared_ptr<GroupLiteDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


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
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// Group code used to join the group.
	/// </summary>
	utility::string_t GetGroupCode() const;
	void SetGroupCode(const utility::string_t& Value);
	bool HasGroupCode() const;

	/// <summary>
	/// Name of the group
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


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
	void SetContext(const utility::string_t& Value);
	bool HasContext() const;

	/// <summary>
	/// Id of the User for whom these settings apply
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Settings of the user
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSettings() const;
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


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
	void SetPrototypeId(const utility::string_t& Value);
	bool HasPrototypeId() const;

	/// <summary>
	/// Unique identifier of user
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Denotes if the item is giftable/exchangable
	/// </summary>
	bool GetExchangeable() const;
	void SetExchangeable(const bool& Value);
	bool HasExchangeable() const;

	/// <summary>
	/// Denotes if the item is a gift or exchanged item
	/// </summary>
	bool GetIsGift() const;
	void SetIsGift(const bool& Value);
	bool HasIsGift() const;

	/// <summary>
	/// Tags for the inventory item or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Contains unique state for the Inventory Item.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetState() const;
	void SetState(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasState() const;

	/// <summary>
	/// Indicates if the item is equippable
	/// </summary>
	bool GetEquippable() const;
	void SetEquippable(const bool& Value);
	bool HasEquippable() const;

	/// <summary>
	/// Indicates if the item is currently equipped
	/// </summary>
	bool GetEquipped() const;
	void SetEquipped(const bool& Value);
	bool HasEquipped() const;

	/// <summary>
	/// Classification of the item's type
	/// </summary>
	utility::string_t GetItemType() const;
	void SetItemType(const utility::string_t& Value);
	bool HasItemType() const;

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
	void SetItems(const std::vector<std::shared_ptr<InventoryItemDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<InventoryItemDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// A request object used to wrap the values used to create a Login guest request.
/// </summary>
class LoginGuestRequest : public csp::services::DtoBase
{
public:
	LoginGuestRequest();
	virtual ~LoginGuestRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the tenant to login to
	/// </summary>
	utility::string_t GetTenant() const;
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// The unique identifier for the device that is making the login request
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	/// <summary>
	/// Required for new guest accounts, or accounts not previously verified
	/// </summary>
	bool GetVerifiedAgeEighteen() const;
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

	std::shared_ptr<TokenOptions> GetTokenOptions() const;
	void SetTokenOptions(const std::shared_ptr<TokenOptions>& Value);
	bool HasTokenOptions() const;


protected:
	std::optional<utility::string_t> m_Tenant;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<bool> m_VerifiedAgeEighteen;
	std::optional<std::shared_ptr<TokenOptions>> m_TokenOptions;
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
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// To use in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Password
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// To use in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Password
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// To be used in conjunction with Magnopus.Service.User.Dtos.LoginRequest.Email for login.
	/// </summary>
	utility::string_t GetPassword() const;
	void SetPassword(const utility::string_t& Value);
	bool HasPassword() const;

	/// <summary>
	/// The unique identifier for the device that is making the login request
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	/// <summary>
	/// Required for new guest accounts, or accounts not previously verified
	/// </summary>
	bool GetVerifiedAgeEighteen() const;
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

	std::shared_ptr<TokenOptions> GetTokenOptions() const;
	void SetTokenOptions(const std::shared_ptr<TokenOptions>& Value);
	bool HasTokenOptions() const;


protected:
	std::optional<utility::string_t> m_Tenant;
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_UserName;
	std::optional<utility::string_t> m_Password;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<bool> m_VerifiedAgeEighteen;
	std::optional<std::shared_ptr<TokenOptions>> m_TokenOptions;
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
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;

	/// <summary>
	/// The name of the social authentication provider
	/// (e.g. "Google")
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// The name of the client, if applicable for the provider (e.g. "Unity" or "Unreal" if the provider has different requirements for different
	/// clients)
	/// </summary>
	utility::string_t GetClient() const;
	void SetClient(const utility::string_t& Value);
	bool HasClient() const;

	/// <summary>
	/// The current identity token from the provider
	/// (must be a valid token that is not expired)
	/// </summary>
	utility::string_t GetToken() const;
	void SetToken(const utility::string_t& Value);
	bool HasToken() const;

	/// <summary>
	/// The unique identifier for the device that is making the login request
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	/// <summary>
	/// The full url provided in the original OAuth flow that represents the final destination of the user after the OAuth flow is complete
	/// </summary>
	utility::string_t GetOAuthRedirectUri() const;
	void SetOAuthRedirectUri(const utility::string_t& Value);
	bool HasOAuthRedirectUri() const;

	/// <summary>
	/// Defines if this social login user has been age verified
	/// </summary>
	bool GetVerifiedAgeEighteen() const;
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

	/// <summary>
	/// Optional Id of the User with the Social Provider, when needed for Login
	/// </summary>
	utility::string_t GetOptionalProviderUserId() const;
	void SetOptionalProviderUserId(const utility::string_t& Value);
	bool HasOptionalProviderUserId() const;

	std::shared_ptr<TokenOptions> GetTokenOptions() const;
	void SetTokenOptions(const std::shared_ptr<TokenOptions>& Value);
	bool HasTokenOptions() const;


protected:
	std::optional<utility::string_t> m_Tenant;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Client;
	std::optional<utility::string_t> m_Token;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<utility::string_t> m_OAuthRedirectUri;
	std::optional<bool> m_VerifiedAgeEighteen;
	std::optional<utility::string_t> m_OptionalProviderUserId;
	std::optional<std::shared_ptr<TokenOptions>> m_TokenOptions;
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
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// The unique identifier for the user's device.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;


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
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Percent toward completion of level.
	/// </summary>
	float GetPercentTowardsNextSeed() const;
	void SetPercentTowardsNextSeed(float Value);
	bool HasPercentTowardsNextSeed() const;

	/// <summary>
	/// Level of seeds earned to associate with events associated with get Magnopus.Service.User.Dtos.MetagameProgressDto.PercentTowardsNextSeed
	/// to 1.0
	/// </summary>
	int32_t GetMetagameLevel() const;
	void SetMetagameLevel(int32_t Value);
	bool HasMetagameLevel() const;


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
	void SetPercentDeltaAsTotal(const bool& Value);
	bool HasPercentDeltaAsTotal() const;

	/// <summary>
	/// Qty of percentage to either add or set to the user's progress.
	/// </summary>
	double GetPercentDelta() const;
	void SetPercentDelta(double Value);
	bool HasPercentDelta() const;


protected:
	std::optional<bool> m_PercentDeltaAsTotal;
	std::optional<double> m_PercentDelta;
};

/// <summary>
/// Versioned function by name
/// </summary>
class NamedFunction : public csp::services::DtoBase
{
public:
	NamedFunction();
	virtual ~NamedFunction();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the function that serves as its version
	/// </summary>
	utility::string_t GetFunctionName() const;
	void SetFunctionName(const utility::string_t& Value);
	bool HasFunctionName() const;

	/// <summary>
	/// date of deprecation, if known
	/// </summary>
	utility::string_t GetDeprecationDatetime() const;
	void SetDeprecationDatetime(const utility::string_t& Value);
	bool HasDeprecationDatetime() const;

	/// <summary>
	/// when the version will no longer be available, if determined
	/// </summary>
	utility::string_t GetEndOfLifeDatetime() const;
	void SetEndOfLifeDatetime(const utility::string_t& Value);
	bool HasEndOfLifeDatetime() const;


protected:
	std::optional<utility::string_t> m_FunctionName;
	std::optional<utility::string_t> m_DeprecationDatetime;
	std::optional<utility::string_t> m_EndOfLifeDatetime;
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
	void SetOrganizationOwnerId(const utility::string_t& Value);
	bool HasOrganizationOwnerId() const;

	/// <summary>
	/// Name of the organization
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

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
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// Organization unique identifier
	/// </summary>
	utility::string_t GetOrganizationId() const;
	bool HasOrganizationId() const;

	/// <summary>
	/// The assigned authorization roles for user
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;

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
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Roles of the user in the organization
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<std::vector<utility::string_t>> m_Roles;
};

class ProblemDetails : public csp::services::DtoBase
{
public:
	ProblemDetails();
	virtual ~ProblemDetails();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	int32_t GetStatus() const;
	void SetStatus(int32_t Value);
	bool HasStatus() const;

	utility::string_t GetDetail() const;
	void SetDetail(const utility::string_t& Value);
	bool HasDetail() const;

	utility::string_t GetInstance() const;
	void SetInstance(const utility::string_t& Value);
	bool HasInstance() const;

	const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& GetExtensions() const;
	void SetExtensions(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value);
	bool HasExtensions() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Title;
	std::optional<int32_t> m_Status;
	std::optional<utility::string_t> m_Detail;
	std::optional<utility::string_t> m_Instance;
	std::optional<std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>> m_Extensions;
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
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

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
	void SetVerifiedAgeEighteen(const bool& Value);
	bool HasVerifiedAgeEighteen() const;

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
	void SetItems(const std::vector<std::shared_ptr<ProfileDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


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
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// The last issued refresh token
	/// </summary>
	utility::string_t GetRefreshToken() const;
	void SetRefreshToken(const utility::string_t& Value);
	bool HasRefreshToken() const;

	/// <summary>
	/// The device id of the device making the request
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	std::shared_ptr<TokenOptions> GetTokenOptions() const;
	void SetTokenOptions(const std::shared_ptr<TokenOptions>& Value);
	bool HasTokenOptions() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<std::shared_ptr<TokenOptions>> m_TokenOptions;
};

/// <summary>
/// Wrapper for versioned API in the Service
/// </summary>
class ServiceVersionInfo : public csp::services::DtoBase
{
public:
	ServiceVersionInfo();
	virtual ~ServiceVersionInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Version of the service container
	/// </summary>
	utility::string_t GetContainerVersion() const;
	void SetContainerVersion(const utility::string_t& Value);
	bool HasContainerVersion() const;

	/// <summary>
	/// Name of the service
	/// </summary>
	utility::string_t GetServiceName() const;
	void SetServiceName(const utility::string_t& Value);
	bool HasServiceName() const;

	/// <summary>
	/// The associated reverse proxy for the service
	/// </summary>
	utility::string_t GetReverseProxy() const;
	void SetReverseProxy(const utility::string_t& Value);
	bool HasReverseProxy() const;

	/// <summary>
	/// Services that are versioned (eg ASP.NET Controllers)
	/// </summary>
	const std::vector<std::shared_ptr<ControllerVersions>>& GetVersionedServices() const;
	void SetVersionedServices(const std::vector<std::shared_ptr<ControllerVersions>>& Value);
	bool HasVersionedServices() const;

	/// <summary>
	/// Named Functions that are versioned (eg Multiplayer SignalR Hub)
	/// </summary>
	const std::vector<std::shared_ptr<NamedFunction>>& GetVersionedFunctions() const;
	void SetVersionedFunctions(const std::vector<std::shared_ptr<NamedFunction>>& Value);
	bool HasVersionedFunctions() const;


protected:
	std::optional<utility::string_t> m_ContainerVersion;
	std::optional<utility::string_t> m_ServiceName;
	std::optional<utility::string_t> m_ReverseProxy;
	std::optional<std::vector<std::shared_ptr<ControllerVersions>>> m_VersionedServices;
	std::optional<std::vector<std::shared_ptr<NamedFunction>>> m_VersionedFunctions;
};

/// <summary>
/// Request object for setting an encrypted value
/// </summary>
class SetEncryptedValueRequest : public csp::services::DtoBase
{
public:
	SetEncryptedValueRequest();
	virtual ~SetEncryptedValueRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The value to encrypt and store
	/// </summary>
	utility::string_t GetValue() const;
	void SetValue(const utility::string_t& Value);
	bool HasValue() const;


protected:
	std::optional<utility::string_t> m_Value;
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
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


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
	void SetProviderName(const utility::string_t& Value);
	bool HasProviderName() const;

	/// <summary>
	/// Application client ID with the social provider
	/// </summary>
	utility::string_t GetClientId() const;
	void SetClientId(const utility::string_t& Value);
	bool HasClientId() const;

	/// <summary>
	/// The scopes required to authenticate with this provider
	/// </summary>
	const std::vector<utility::string_t>& GetScopes() const;
	void SetScopes(const std::vector<utility::string_t>& Value);
	bool HasScopes() const;

	/// <summary>
	/// Uri of the social provider authorize endpoint
	/// </summary>
	utility::string_t GetAuthorizeEndpoint() const;
	void SetAuthorizeEndpoint(const utility::string_t& Value);
	bool HasAuthorizeEndpoint() const;

	/// <summary>
	/// A unique state ID to correlate the authorization request and response from the social provider.
	/// This is required to prevent CSRF attacks in the authorization code flow. We generate a new GUID for each request,
	/// but it can be generated by the client as well as long as it's unique for each request.
	/// </summary>
	utility::string_t GetThirdPartyAuthStateId() const;
	void SetThirdPartyAuthStateId(const utility::string_t& Value);
	bool HasThirdPartyAuthStateId() const;

	/// <summary>
	/// Uri of the social provider token endpoint we use to initiate the authorization code flow
	/// </summary>
	utility::string_t GetRedirectUri() const;
	void SetRedirectUri(const utility::string_t& Value);
	bool HasRedirectUri() const;


protected:
	std::optional<utility::string_t> m_ProviderName;
	std::optional<utility::string_t> m_ClientId;
	std::optional<std::vector<utility::string_t>> m_Scopes;
	std::optional<utility::string_t> m_AuthorizeEndpoint;
	std::optional<utility::string_t> m_ThirdPartyAuthStateId;
	std::optional<utility::string_t> m_RedirectUri;
};

class StringDataPage : public csp::services::DtoBase
{
public:
	StringDataPage();
	virtual ~StringDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<utility::string_t>& GetItems() const;
	void SetItems(const std::vector<utility::string_t>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
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
	void SetLookupKey(const utility::string_t& Value);
	bool HasLookupKey() const;


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
/// Lightweight tenancy info for the accounts dropdown.
/// One entry per tenant where the user's email has a profile.
/// </summary>
class TenancyLiteDto : public csp::services::DtoBase
{
public:
	TenancyLiteDto();
	virtual ~TenancyLiteDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant's system name (used for API calls and token exchange).
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Human-friendly tenant display name (shown in the dropdown).
	/// </summary>
	utility::string_t GetTenantDisplayName() const;
	void SetTenantDisplayName(const utility::string_t& Value);
	bool HasTenantDisplayName() const;

	/// <summary>
	/// The user's display name within this tenant.
	/// </summary>
	utility::string_t GetUserDisplayName() const;
	void SetUserDisplayName(const utility::string_t& Value);
	bool HasUserDisplayName() const;

	/// <summary>
	/// Whether the user's email is confirmed in this tenant.
	/// Unconfirmed accounts cannot be switched to.
	/// </summary>
	bool GetIsEmailConfirmed() const;
	void SetIsEmailConfirmed(const bool& Value);
	bool HasIsEmailConfirmed() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_TenantDisplayName;
	std::optional<utility::string_t> m_UserDisplayName;
	std::optional<bool> m_IsEmailConfirmed;
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
	void SetEmailAddress(const utility::string_t& Value);
	bool HasEmailAddress() const;

	/// <summary>
	/// The administrator password
	/// </summary>
	utility::string_t GetPassword() const;
	bool HasPassword() const;

	/// <summary>
	/// The user's assigned authorization roles
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;


protected:
	std::optional<utility::string_t> m_EmailAddress;
	std::optional<utility::string_t> m_Password;
	std::optional<std::vector<utility::string_t>> m_Roles;
};

/// <summary>
/// Contains information used to filter sequences when searching.
/// </summary>
class TenantCleanupFilters : public csp::services::DtoBase
{
public:
	TenantCleanupFilters();
	virtual ~TenantCleanupFilters();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Delete the tenant and all the data under it
	/// </summary>
	bool GetDeleteTenant() const;
	void SetDeleteTenant(const bool& Value);
	bool HasDeleteTenant() const;

	/// <summary>
	/// Delete all the spaces under a tenant
	/// </summary>
	bool GetDeleteAllSpaces() const;
	void SetDeleteAllSpaces(const bool& Value);
	bool HasDeleteAllSpaces() const;

	/// <summary>
	/// Delete all the users under a tenant
	/// </summary>
	bool GetDeleteAllUsers() const;
	void SetDeleteAllUsers(const bool& Value);
	bool HasDeleteAllUsers() const;

	/// <summary>
	/// Delete all the poi data under a tenant
	/// </summary>
	bool GetDeleteAllPois() const;
	void SetDeleteAllPois(const bool& Value);
	bool HasDeleteAllPois() const;

	/// <summary>
	/// Delete all the sequences data under a tenant
	/// </summary>
	bool GetDeleteAllSequences() const;
	void SetDeleteAllSequences(const bool& Value);
	bool HasDeleteAllSequences() const;

	/// <summary>
	/// Delete all the encrypted data under a tenant
	/// </summary>
	bool GetDeleteAllEncryptedDocuments() const;
	void SetDeleteAllEncryptedDocuments(const bool& Value);
	bool HasDeleteAllEncryptedDocuments() const;

	/// <summary>
	/// Delete all the prototypes not associated with spaces
	/// </summary>
	bool GetDeleteAllPrototypes() const;
	void SetDeleteAllPrototypes(const bool& Value);
	bool HasDeleteAllPrototypes() const;


protected:
	std::optional<bool> m_DeleteTenant;
	std::optional<bool> m_DeleteAllSpaces;
	std::optional<bool> m_DeleteAllUsers;
	std::optional<bool> m_DeleteAllPois;
	std::optional<bool> m_DeleteAllSequences;
	std::optional<bool> m_DeleteAllEncryptedDocuments;
	std::optional<bool> m_DeleteAllPrototypes;
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
	/// The Company Name associated with this Tenant
	/// </summary>
	utility::string_t GetCompanyName() const;
	bool HasCompanyName() const;

	/// <summary>
	/// The Administrators full name
	/// </summary>
	utility::string_t GetAdminFullName() const;
	void SetAdminFullName(const utility::string_t& Value);
	bool HasAdminFullName() const;

	/// <summary>
	/// The web URL for the tenant
	/// </summary>
	utility::string_t GetCompanyWebUrl() const;
	void SetCompanyWebUrl(const utility::string_t& Value);
	bool HasCompanyWebUrl() const;

	/// <summary>
	/// If the tenant hasn't verified their admin credentials
	/// </summary>
	bool GetPendingAdmin() const;
	void SetPendingAdmin(const bool& Value);
	bool HasPendingAdmin() const;

	/// <summary>
	/// Whether the tenant is locked
	/// </summary>
	bool GetLocked() const;
	void SetLocked(const bool& Value);
	bool HasLocked() const;

	std::shared_ptr<TenantEmailSettingsDto> GetEmailSettings() const;
	void SetEmailSettings(const std::shared_ptr<TenantEmailSettingsDto>& Value);
	bool HasEmailSettings() const;

	/// <summary>
	/// Contains all the email templates this tenant has defined
	/// </summary>
	const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& GetEmailTemplateSettings() const;
	void SetEmailTemplateSettings(const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& Value);
	bool HasEmailTemplateSettings() const;

	/// <summary>
	/// List of allowed redirect urls
	/// </summary>
	const std::vector<utility::string_t>& GetEmailRedirectUrlAllowList() const;
	void SetEmailRedirectUrlAllowList(const std::vector<utility::string_t>& Value);
	bool HasEmailRedirectUrlAllowList() const;

	/// <summary>
	/// The domains allowed to connect to our services
	/// </summary>
	const std::vector<utility::string_t>& GetCorsAllowedOrigins() const;
	void SetCorsAllowedOrigins(const std::vector<utility::string_t>& Value);
	bool HasCorsAllowedOrigins() const;

	/// <summary>
	/// The linked account that acts as the tenant admin
	/// </summary>
	utility::string_t GetAdminUserId() const;
	bool HasAdminUserId() const;

	/// <summary>
	/// Whether to enable Musubi for image processing
	/// </summary>
	bool GetEnableMusubi() const;
	void SetEnableMusubi(const bool& Value);
	bool HasEnableMusubi() const;

	std::shared_ptr<TenantAdminAccount> GetAdminCredentials() const;
	void SetAdminCredentials(const std::shared_ptr<TenantAdminAccount>& Value);
	bool HasAdminCredentials() const;

	std::shared_ptr<DefaultSessionSettingsDto> GetDefaultSessionSettings() const;
	void SetDefaultSessionSettings(const std::shared_ptr<DefaultSessionSettingsDto>& Value);
	bool HasDefaultSessionSettings() const;

	/// <summary>
	/// Hostnames that map to this tenant for auto-detection from request Origin/Referer headers.
	/// Example: ["nodey.magnopus.cloud", "app.client.com"]
	/// </summary>
	const std::vector<utility::string_t>& GetMappedHostnames() const;
	void SetMappedHostnames(const std::vector<utility::string_t>& Value);
	bool HasMappedHostnames() const;

	/// <summary>
	/// Human-friendly display name for this tenant.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Typed hostnames with DNS status tracking. Managed via Super Admin Console.
	/// </summary>
	const std::vector<std::shared_ptr<TypedHostname>>& GetTypedHostnames() const;
	bool HasTypedHostnames() const;

	/// <summary>
	/// List of allowed redirect uris for SSO login flows. This is used to validate the redirect_uri parameter in the authorization request for SSO
	/// logins.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedSsoRedirectUris() const;
	void SetAllowedSsoRedirectUris(const std::vector<utility::string_t>& Value);
	bool HasAllowedSsoRedirectUris() const;

	/// <summary>
	/// Whether guest login is allowed for this tenant. Defaults to false.
	/// </summary>
	bool GetAllowGuestLogin() const;
	void SetAllowGuestLogin(const bool& Value);
	bool HasAllowGuestLogin() const;

	/// <summary>
	/// Whether secret validation is enforced for this tenant.
	/// When true, only validated secrets count as "available" for node visibility.
	/// Defaults to false for safe rollout.
	/// </summary>
	bool GetEnforceSecretValidation() const;
	void SetEnforceSecretValidation(const bool& Value);
	bool HasEnforceSecretValidation() const;

	/// <summary>
	/// When the tenant was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_AdminFullName;
	std::optional<utility::string_t> m_CompanyWebUrl;
	std::optional<bool> m_PendingAdmin;
	std::optional<bool> m_Locked;
	std::optional<std::shared_ptr<TenantEmailSettingsDto>> m_EmailSettings;
	std::optional<std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>> m_EmailTemplateSettings;
	std::optional<std::vector<utility::string_t>> m_EmailRedirectUrlAllowList;
	std::optional<std::vector<utility::string_t>> m_CorsAllowedOrigins;
	std::optional<utility::string_t> m_AdminUserId;
	std::optional<bool> m_EnableMusubi;
	std::optional<std::shared_ptr<TenantAdminAccount>> m_AdminCredentials;
	std::optional<std::shared_ptr<DefaultSessionSettingsDto>> m_DefaultSessionSettings;
	std::optional<std::vector<utility::string_t>> m_MappedHostnames;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<std::vector<std::shared_ptr<TypedHostname>>> m_TypedHostnames;
	std::optional<std::vector<utility::string_t>> m_AllowedSsoRedirectUris;
	std::optional<bool> m_AllowGuestLogin;
	std::optional<bool> m_EnforceSecretValidation;
	std::optional<utility::string_t> m_CreatedAt;
};

class TenantDtoDataPage : public csp::services::DtoBase
{
public:
	TenantDtoDataPage();
	virtual ~TenantDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<TenantDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<TenantDto>>& Value);
	bool HasItems() const;

	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	int32_t GetItemCount() const;
	void SetItemCount(int32_t Value);
	bool HasItemCount() const;

	int64_t GetItemTotalCount() const;
	void SetItemTotalCount(int64_t Value);
	bool HasItemTotalCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<TenantDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
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
	void SetAllowedEmailDomains(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailDomains() const;

	/// <summary>
	/// The username suffixes allowed to register for a profile
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailUserNameSuffixes() const;
	void SetAllowedEmailUserNameSuffixes(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailUserNameSuffixes() const;

	/// <summary>
	/// Weather or not to disable sending emails for this tenant
	/// </summary>
	bool GetDisableEmailSender() const;
	void SetDisableEmailSender(const bool& Value);
	bool HasDisableEmailSender() const;

	/// <summary>
	/// Weather or not to enable auto-confirmation for accounts for this tenant
	/// </summary>
	bool GetEnableEmailAutoConfirm() const;
	void SetEnableEmailAutoConfirm(const bool& Value);
	bool HasEnableEmailAutoConfirm() const;

	/// <summary>
	/// Specific email addresses allowed to register.
	/// Plus-addressing is supported: user+tag@domain.com matches user@domain.com in the allowlist.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailAddresses() const;
	void SetAllowedEmailAddresses(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailAddresses() const;


protected:
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailUserNameSuffixes;
	std::optional<bool> m_DisableEmailSender;
	std::optional<bool> m_EnableEmailAutoConfirm;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
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
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The name of the template
	/// </summary>
	utility::string_t GetTemplateName() const;
	void SetTemplateName(const utility::string_t& Value);
	bool HasTemplateName() const;

	/// <summary>
	/// The name of the space link template
	/// </summary>
	utility::string_t GetSpaceLinkTemplateName() const;
	void SetSpaceLinkTemplateName(const utility::string_t& Value);
	bool HasSpaceLinkTemplateName() const;

	/// <summary>
	/// The Environment Url
	/// </summary>
	utility::string_t GetEnvironmentUrl() const;
	void SetEnvironmentUrl(const utility::string_t& Value);
	bool HasEnvironmentUrl() const;

	/// <summary>
	/// For certain templates we require an environmentUrlTemplate
	/// </summary>
	utility::string_t GetEnvironmentUrlTemplate() const;
	void SetEnvironmentUrlTemplate(const utility::string_t& Value);
	bool HasEnvironmentUrlTemplate() const;

	/// <summary>
	/// The environment url of the space link template
	/// </summary>
	utility::string_t GetSpaceLinkUrlTemplate() const;
	void SetSpaceLinkUrlTemplate(const utility::string_t& Value);
	bool HasSpaceLinkUrlTemplate() const;

	/// <summary>
	/// The Environment Specific URL used to generate tokens for reset passwords
	/// </summary>
	utility::string_t GetTokenEnvironmentUrl() const;
	void SetTokenEnvironmentUrl(const utility::string_t& Value);
	bool HasTokenEnvironmentUrl() const;

	/// <summary>
	/// The email address this template is being sent from
	/// </summary>
	utility::string_t GetSenderEmail() const;
	void SetSenderEmail(const utility::string_t& Value);
	bool HasSenderEmail() const;

	/// <summary>
	/// The email address this template is being sent to
	/// </summary>
	utility::string_t GetRecipientEmail() const;
	void SetRecipientEmail(const utility::string_t& Value);
	bool HasRecipientEmail() const;


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
/// Scoped tenant data transfer object for tenant admin portal.
/// Exposes only the fields relevant to self-service admin operations.
/// </summary>
class TenantSelfDto : public csp::services::DtoBase
{
public:
	TenantSelfDto();
	virtual ~TenantSelfDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the tenant
	/// </summary>
	utility::string_t GetName() const;
	bool HasName() const;

	/// <summary>
	/// The Company Name associated with this Tenant
	/// </summary>
	utility::string_t GetCompanyName() const;
	bool HasCompanyName() const;

	/// <summary>
	/// The linked account that acts as the tenant admin
	/// </summary>
	utility::string_t GetAdminUserId() const;
	bool HasAdminUserId() const;

	/// <summary>
	/// Allowed email addresses for registration
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailAddresses() const;
	void SetAllowedEmailAddresses(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailAddresses() const;

	/// <summary>
	/// Allowed email domains for registration
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailDomains() const;
	void SetAllowedEmailDomains(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailDomains() const;

	/// <summary>
	/// Hostnames that map to this tenant for auto-detection
	/// </summary>
	const std::vector<utility::string_t>& GetMappedHostnames() const;
	bool HasMappedHostnames() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_AdminUserId;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
	std::optional<std::vector<utility::string_t>> m_MappedHostnames;
};

/// <summary>
/// Options for the token
/// </summary>
class TokenOptions : public csp::services::DtoBase
{
public:
	TokenOptions();
	virtual ~TokenOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// An optional override to set the expiry length of the authorization token -
	/// value must be less than the default expiry length, or it will be ignored.
	/// Examples:
	///    00:29:00 => 29 mins
	///    00:05:00 => 5 mins
	/// </summary>
	utility::string_t GetExpiryLength() const;
	void SetExpiryLength(const utility::string_t& Value);
	bool HasExpiryLength() const;

	/// <summary>
	/// An optional override to set the expiry length of the refresh token -
	/// value must be less than the default expiry length, or it will be ignored.
	/// The default is set per environment, but is typically 7 days.
	/// Examples:
	///    00:29:00 => 29 mins
	///    02:00:00 => 2 days
	/// </summary>
	utility::string_t GetRefreshTokenExpiryLength() const;
	void SetRefreshTokenExpiryLength(const utility::string_t& Value);
	bool HasRefreshTokenExpiryLength() const;


protected:
	std::optional<utility::string_t> m_ExpiryLength;
	std::optional<utility::string_t> m_RefreshTokenExpiryLength;
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
	void SetToken(const utility::string_t& Value);
	bool HasToken() const;

	/// <summary>
	/// User's desired password
	/// </summary>
	utility::string_t GetNewPassword() const;
	void SetNewPassword(const utility::string_t& Value);
	bool HasNewPassword() const;


protected:
	std::optional<utility::string_t> m_Token;
	std::optional<utility::string_t> m_NewPassword;
};

/// <summary>
/// Represents a typed hostname mapping with DNS status tracking.
/// </summary>
class TypedHostname : public csp::services::DtoBase
{
public:
	TypedHostname();
	virtual ~TypedHostname();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname (e.g. "nodey.tenantx.magnopus.cloud")
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The type of service this hostname points to ("nodey" or "oko")
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The Route53 change ID from the CNAME creation request
	/// </summary>
	utility::string_t GetRoute53ChangeId() const;
	void SetRoute53ChangeId(const utility::string_t& Value);
	bool HasRoute53ChangeId() const;

	/// <summary>
	/// Current DNS status: "queued", "cert_pending", "cert_issued", "deploying",
	/// "dns_pending", "insync", "verified", or "error"
	/// </summary>
	utility::string_t GetDnsStatus() const;
	void SetDnsStatus(const utility::string_t& Value);
	bool HasDnsStatus() const;

	/// <summary>
	/// When this hostname was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// The ARN of the ACM certificate that covers this hostname (oko type only)
	/// </summary>
	utility::string_t GetAcmCertificateArn() const;
	void SetAcmCertificateArn(const utility::string_t& Value);
	bool HasAcmCertificateArn() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Route53ChangeId;
	std::optional<utility::string_t> m_DnsStatus;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_AcmCertificateArn;
};

/// <summary>
/// Request to update an existing application secret definition.
/// </summary>
class UpdateApplicationSecretRequest : public csp::services::DtoBase
{
public:
	UpdateApplicationSecretRequest();
	virtual ~UpdateApplicationSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac".
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
};

/// <summary>
/// Request object for updating tenant email allow-list settings.
/// Only allows modification of AllowedEmailAddresses and AllowedEmailDomains.
/// </summary>
class UpdateEmailSettingsRequest : public csp::services::DtoBase
{
public:
	UpdateEmailSettingsRequest();
	virtual ~UpdateEmailSettingsRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Specific email addresses allowed to register
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailAddresses() const;
	void SetAllowedEmailAddresses(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailAddresses() const;

	/// <summary>
	/// Email domains allowed to register
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailDomains() const;
	void SetAllowedEmailDomains(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailDomains() const;


protected:
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
};

/// <summary>
/// Request body for updating user roles.
/// </summary>
class UpdateRolesRequest : public csp::services::DtoBase
{
public:
	UpdateRolesRequest();
	virtual ~UpdateRolesRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The roles to assign to the user
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Roles;
};

/// <summary>
/// Request object for tenant admin "lite" updates.
/// Only allows modification of the four fields editable by tenant admins.
/// </summary>
class UpdateTenantLiteRequest : public csp::services::DtoBase
{
public:
	UpdateTenantLiteRequest();
	virtual ~UpdateTenantLiteRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Specific email addresses allowed to register
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailAddresses() const;
	void SetAllowedEmailAddresses(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailAddresses() const;

	/// <summary>
	/// Email domains allowed to register
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedEmailDomains() const;
	void SetAllowedEmailDomains(const std::vector<utility::string_t>& Value);
	bool HasAllowedEmailDomains() const;

	/// <summary>
	/// Company name
	/// </summary>
	utility::string_t GetCompanyName() const;
	void SetCompanyName(const utility::string_t& Value);
	bool HasCompanyName() const;

	/// <summary>
	/// Human-friendly display name for the tenant
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;


protected:
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_DisplayName;
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
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// Optional username
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// The optional display name of the user
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The optional password of the user.  If no password is provided, the user cannot actually login via MGS Login,
	/// but would first have to call the reset-password endpoint.
	/// </summary>
	utility::string_t GetPassword() const;
	void SetPassword(const utility::string_t& Value);
	bool HasPassword() const;

	/// <summary>
	/// The deviceId used to create the underlying guest account
	/// </summary>
	utility::string_t GetGuestDeviceId() const;
	void SetGuestDeviceId(const utility::string_t& Value);
	bool HasGuestDeviceId() const;

	/// <summary>
	/// Used to suppress the sending of a confirmation email upon upgrading the account.
	/// </summary>
	bool GetSuppressConfirmationEmail() const;
	void SetSuppressConfirmationEmail(const bool& Value);
	bool HasSuppressConfirmationEmail() const;

	/// <summary>
	/// Used to automatically confirm the user - only available to administrators
	/// </summary>
	bool GetAutoConfirm() const;
	void SetAutoConfirm(const bool& Value);
	bool HasAutoConfirm() const;

	/// <summary>
	/// A token provided to the user that can be used to auto-confirm their account
	/// </summary>
	utility::string_t GetInviteToken() const;
	void SetInviteToken(const utility::string_t& Value);
	bool HasInviteToken() const;

	/// <summary>
	/// Optional full url that is embedded in the confirmation email as the primary link to be redirected to after email confirmation is complete.
	/// If this URL is not provided, the system will use the default configured for the environment/tenant to direct new users.
	/// </summary>
	utility::string_t GetRedirectUrl() const;
	void SetRedirectUrl(const utility::string_t& Value);
	bool HasRedirectUrl() const;


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
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// The current auth token from the provider
	/// (must be a valid token)
	/// </summary>
	utility::string_t GetToken() const;
	void SetToken(const utility::string_t& Value);
	bool HasToken() const;

	/// <summary>
	/// Optional username
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// The optional display name of the user
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The optional password of the user.  If no password is provided, the user cannot actually login via MGS Login,
	/// but would first have to call the reset-password endpoint.
	/// </summary>
	utility::string_t GetPassword() const;
	void SetPassword(const utility::string_t& Value);
	bool HasPassword() const;

	/// <summary>
	/// The deviceId used to create the underlying guest account
	/// </summary>
	utility::string_t GetGuestDeviceId() const;
	void SetGuestDeviceId(const utility::string_t& Value);
	bool HasGuestDeviceId() const;

	/// <summary>
	/// Optional full url that is embedded in the confirmation email as the primary link to be redirected to after email confirmation is complete.
	/// If this URL is not provided, the system will use the default configured for the environment/tenant to direct new users.
	/// </summary>
	utility::string_t GetRedirectUrl() const;
	void SetRedirectUrl(const utility::string_t& Value);
	bool HasRedirectUrl() const;

	/// <summary>
	/// The full url provided in the original OAuth flow that represents the final destination of the user after the OAuth flow is complete
	/// </summary>
	utility::string_t GetOAuthRedirectUri() const;
	void SetOAuthRedirectUri(const utility::string_t& Value);
	bool HasOAuthRedirectUri() const;

	/// <summary>
	/// Optional Id of the User with the Social Provider, when needed for Login
	/// </summary>
	utility::string_t GetOptionalProviderUserId() const;
	void SetOptionalProviderUserId(const utility::string_t& Value);
	bool HasOptionalProviderUserId() const;


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
/// Encapsulates optional arguments to use while constructing a User query.
/// </summary>
class UserQuery : public csp::services::DtoBase
{
public:
	UserQuery();
	virtual ~UserQuery();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Guest deviceId value to ge the mapped profile for
	/// Guest profiles have no email/password
	/// </summary>
	utility::string_t GetGuestDeviceId() const;
	void SetGuestDeviceId(const utility::string_t& Value);
	bool HasGuestDeviceId() const;

	/// <summary>
	/// Partial guest deviceId
	/// </summary>
	utility::string_t GetPartialGuestDeviceId() const;
	void SetPartialGuestDeviceId(const utility::string_t& Value);
	bool HasPartialGuestDeviceId() const;

	/// <summary>
	/// Email to query for.
	/// Only valid for non-guest profiles (guest profiles have no email/password)
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// User name to query for.
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// Query on the user's LastDeviceId
	/// </summary>
	utility::string_t GetLastDeviceId() const;
	void SetLastDeviceId(const utility::string_t& Value);
	bool HasLastDeviceId() const;

	/// <summary>
	/// Flag to do partial email matching on searches
	/// </summary>
	bool GetSearchPartialEmails() const;
	void SetSearchPartialEmails(const bool& Value);
	bool HasSearchPartialEmails() const;

	/// <summary>
	/// Guest deviceId values to get the mapped profile for
	/// Guest profiles have no email/password
	/// </summary>
	const std::vector<utility::string_t>& GetGuestDeviceIds() const;
	void SetGuestDeviceIds(const std::vector<utility::string_t>& Value);
	bool HasGuestDeviceIds() const;

	/// <summary>
	/// Query on users EmailAddresses
	/// </summary>
	const std::vector<utility::string_t>& GetEmailAddresses() const;
	void SetEmailAddresses(const std::vector<utility::string_t>& Value);
	bool HasEmailAddresses() const;

	/// <summary>
	/// Query on users UserNames
	/// </summary>
	const std::vector<utility::string_t>& GetUserNames() const;
	void SetUserNames(const std::vector<utility::string_t>& Value);
	bool HasUserNames() const;

	/// <summary>
	/// Query on users LastDeviceIds
	/// </summary>
	const std::vector<utility::string_t>& GetLastDeviceIds() const;
	void SetLastDeviceIds(const std::vector<utility::string_t>& Value);
	bool HasLastDeviceIds() const;

	/// <summary>
	/// Partial text to match against either Email or DisplayName (case-insensitive OR).
	/// When set, overrides the Email + SearchPartialEmails parameters.
	/// </summary>
	utility::string_t GetEmailOrDisplayNameFragment() const;
	void SetEmailOrDisplayNameFragment(const utility::string_t& Value);
	bool HasEmailOrDisplayNameFragment() const;

	/// <summary>
	/// Field to sort by: "name", "email", "status", "lastLogin".
	/// Defaults to "lastLogin" descending (UpdatedAt) when null.
	/// </summary>
	utility::string_t GetSortBy() const;
	void SetSortBy(const utility::string_t& Value);
	bool HasSortBy() const;

	/// <summary>
	/// Sort direction: "asc" or "desc". Defaults to "desc".
	/// </summary>
	utility::string_t GetSortDirection() const;
	void SetSortDirection(const utility::string_t& Value);
	bool HasSortDirection() const;

	/// <summary>
	/// Partial text to match against Email, DisplayName, or UserId (case-insensitive OR).
	/// When set, overrides all other text-based search parameters.
	/// UserId matching requires at least 4 hex characters and uses prefix matching.
	/// </summary>
	utility::string_t GetEmailDisplayNameUserIdCombinedTerm() const;
	void SetEmailDisplayNameUserIdCombinedTerm(const utility::string_t& Value);
	bool HasEmailDisplayNameUserIdCombinedTerm() const;


protected:
	std::optional<utility::string_t> m_GuestDeviceId;
	std::optional<utility::string_t> m_PartialGuestDeviceId;
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_UserName;
	std::optional<utility::string_t> m_LastDeviceId;
	std::optional<bool> m_SearchPartialEmails;
	std::optional<std::vector<utility::string_t>> m_GuestDeviceIds;
	std::optional<std::vector<utility::string_t>> m_EmailAddresses;
	std::optional<std::vector<utility::string_t>> m_UserNames;
	std::optional<std::vector<utility::string_t>> m_LastDeviceIds;
	std::optional<utility::string_t> m_EmailOrDisplayNameFragment;
	std::optional<utility::string_t> m_SortBy;
	std::optional<utility::string_t> m_SortDirection;
	std::optional<utility::string_t> m_EmailDisplayNameUserIdCombinedTerm;
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
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<std::vector<utility::string_t>> m_Roles;
};


} // namespace csp::services::generated::userservice