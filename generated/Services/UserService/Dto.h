

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::userservice
{

class AgentOverrideDto;
class AgentOverrideRequest;
class AnalyticsRecord;
class ApiKeyCreatedDto;
class ApiKeyDto;
class ApiKeySettingsDto;
class ApiVersion;
class ApplicationSecretDto;
class ApplicationSettingsDto;
class AssignmentDto;
class AssignmentUpsertRequest;
class AuthDto;
class AvatarManifestDto;
class BillingMetricDto;
class BillingMetricHistoryDto;
class BillingSettingsDto;
class BillingSettingsHistoryDto;
class BucketPermissionRuleDto;
class BulkAssignRequest;
class BulkAssignResultDto;
class CdnFetchRequest;
class ClaimHistoryDto;
class ClaimHistoryDtoDataPage;
class ClaimOutcomeDto;
class ControllerVersions;
class CreateApiKeyRequest;
class CreateApplicationSecretRequest;
class CreateBillingMetricRequest;
class CreateGcpLoadBalancerHostnameRequest;
class CreateHostnameRequest;
class CreateLegacyHostnameRequest;
class CreateMarketplaceHostnameRequest;
class CreateMatrixTierPriceOverrideRequest;
class CreatePricingSheetExceptionRequest;
class CreatePricingSheetRequest;
class CreateTokenMatrixEntryRequest;
class CreateUserRequest;
class CreateUserSocialRequest;
class CrossTenantSettingsDto;
class DaigramCreateRequest;
class DaigramDto;
class DaigramThumbnailRequest;
class DaigramUpdateRequest;
class DefaultSessionSettingsDto;
class DefaultSettings;
class DepartmentDto;
class DepartmentUpsertRequest;
class EffortEdge;
class EffortResourceBulkGetRequest;
class EffortResourceDto;
class EffortResourceRemoveRequest;
class EffortResourceRemoveResult;
class EffortResourceSearchRequest;
class EffortResourceSearchResponse;
class EffortResourceUpsertItem;
class EffortResourceUpsertRequest;
class EffortResourceUpsertResult;
class EmailRedirectDto;
class EncryptedValueDto;
class EquipItemDto;
class ExchangeProfileRequest;
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
class HostnameDeprovisionResponse;
class HostnameSsoDiffDto;
class HostnameSsoSyncResultDto;
class ImportTokenMatrixEntriesRequest;
class InitialSettingsDto;
class InventoryItemDto;
class InventoryItemDtoDataPage;
class JiraCreateMetaDto;
class JiraCreateMetaField;
class JiraCreateMetaIssueType;
class JiraCreateMetaUpsertRequest;
class JiraFieldOption;
class JiraLink;
class JiraReferenceListDto;
class JiraReferenceOption;
class JiraReferenceUpsertRequest;
class JiraResourceBulkGetRequest;
class JiraResourceDto;
class JiraResourceSearchRequest;
class JiraResourceSearchResponse;
class JiraResourceUpsertItem;
class JiraResourceUpsertRequest;
class JiraResourceUpsertResult;
class JiraSchemaUpsertResult;
class JoinQueueRequest;
class LegacyObjectDto;
class LegacyObjectPageDto;
class LlmGenerateRequest;
class LlmGenerateResponse;
class LlmMessage;
class LlmProviderDto;
class LoginGuestRequest;
class LoginRequest;
class LoginSocialRequest;
class LogoutRequest;
class MarketplaceHostnameResponse;
class MarketplaceTenantProvisionRequest;
class MarketplaceTenantProvisionResponse;
class MatrixCostKind;
class MatrixImportFailureDto;
class MatrixImportResultDto;
class MatrixTierPriceOverrideDto;
class MatrixTierPriceOverrideHistoryDto;
class MetagameProgressDto;
class MetagameUpdate;
class MiningSessionDto;
class MiningSessionSaveRequest;
class MiningSessionSummaryDto;
class MiningSessionSummaryDtoDataPage;
class NamedFunction;
class OrganizationTenantProvisionRequest;
class OrganizationTenantProvisionResponse;
class PersonDto;
class PersonUpsertRequest;
class PlusAddressIdentitiesBatchRequest;
class PlusAddressIdentitiesBatchResponse;
class PlusAddressIdentityDto;
class PlusAddressingDomainEntry;
class PricingSheetDto;
class PricingSheetExceptionDto;
class PricingSheetExceptionHistoryDto;
class PricingSheetHistoryDto;
class ProblemDetails;
class ProfileAdminLiteDto;
class ProfileDto;
class ProfileDtoDataPage;
class ProfileLiteDto;
class ProjectDto;
class ProjectUpsertRequest;
class QueueEntryDto;
class QueueOutcomeDto;
class QuotaFeatureTierConfigItem;
class RefreshRequest;
class RegisterExternalHostnameRequest;
class RevokedJtiSetDto;
class RosterConfigDto;
class RosterSnapshotDto;
class ServiceVersionInfo;
class SetEncryptedValueRequest;
class SetMagnopusOwnedBatchRequest;
class SetMagnopusOwnedRequest;
class SettingsDto;
class SocialIdentityCaptureRequest;
class SocialIdentityDto;
class SocialProviderIdDto;
class SocialProviderInfo;
class SortDirection;
class StringDataPage;
class StripeCheckoutRequest;
class StripeCheckoutSessionDto;
class StripeCustomerDto;
class StripeCustomerPortalDto;
class SystemCreateRequest;
class SystemDto;
class SystemDtoDataPage;
class SystemThumbnailRequest;
class SystemUpdateRequest;
class TakeBatonRequest;
class TenancyLiteDto;
class TenantAdminAccount;
class TenantCleanupFilters;
class TenantClientSettingsDto;
class TenantDto;
class TenantDtoDataPage;
class TenantEmailSettingsDto;
class TenantEmailTemplateSettingsDto;
class TenantSecretKeyInfoDto;
class TenantSelfDto;
class TenantUpdateRequest;
class TokenMatrixEntryDto;
class TokenMatrixEntryDtoDataPage;
class TokenMatrixEntryHistoryDto;
class TokenOptions;
class TokenResetPasswordRequest;
class TypedHostname;
class UpdateApplicationSecretRequest;
class UpdateBillingMetricRequest;
class UpdateEmailSettingsRequest;
class UpdateMatrixTierPriceOverrideRequest;
class UpdatePricingSheetExceptionRequest;
class UpdatePricingSheetRequest;
class UpdateRolesRequest;
class UpdateTenantLiteRequest;
class UpdateTokenMatrixEntryRequest;
class UpgradeGuestRequest;
class UpgradeGuestSocialRequest;
class UpsertBillingSettingsRequest;
class UserQuery;
class UserRolesDto;
class WazzupCapabilitiesDto;



/// <summary>
/// One user's stored edit to one agent. Null fields mean "use the default".
/// </summary>
class AgentOverrideDto : public csp::services::DtoBase
{
public:
	AgentOverrideDto();
	virtual ~AgentOverrideDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The agent id.
	/// </summary>
	utility::string_t GetAgentId() const;
	void SetAgentId(const utility::string_t& Value);
	bool HasAgentId() const;

	/// <summary>
	/// Provider id, or null for the default.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id, or null for the default.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// System instruction, or null for the default.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// Temperature, or null for the default.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back; absent on a build that
	/// does not decode. Null when the request was plain text. See Magnopus.Logic.Wazzup.Dtos.MiningSessionDto.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_AgentId;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<double> m_Temperature;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// Body of an override PUT. Every field optional; null clears that field back to the default.
/// </summary>
class AgentOverrideRequest : public csp::services::DtoBase
{
public:
	AgentOverrideRequest();
	virtual ~AgentOverrideRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// System instruction.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// Temperature, 0–2.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<double> m_Temperature;
	std::optional<utility::string_t> m_Encoding;
};

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
/// DTO returned when an API key is created. Includes the encoded token which is only shown once.
/// </summary>
class ApiKeyCreatedDto : public csp::services::DtoBase
{
public:
	ApiKeyCreatedDto();
	virtual ~ApiKeyCreatedDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The JWT identifier (jti) — used as the unique key identifier
	/// </summary>
	utility::string_t GetJti() const;
	bool HasJti() const;

	/// <summary>
	/// Human-readable label for this API key
	/// </summary>
	utility::string_t GetName() const;
	bool HasName() const;

	/// <summary>
	/// The encoded JWT token. This is only returned at creation time and cannot be retrieved again.
	/// </summary>
	utility::string_t GetToken() const;
	bool HasToken() const;

	/// <summary>
	/// When this API key token expires
	/// </summary>
	utility::string_t GetExpiresAt() const;
	bool HasExpiresAt() const;


protected:
	std::optional<utility::string_t> m_Jti;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Token;
	std::optional<utility::string_t> m_ExpiresAt;
};

/// <summary>
/// DTO representing an API key's metadata (never includes the encoded token)
/// </summary>
class ApiKeyDto : public csp::services::DtoBase
{
public:
	ApiKeyDto();
	virtual ~ApiKeyDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The JWT identifier (jti) — used as the unique key identifier
	/// </summary>
	utility::string_t GetJti() const;
	bool HasJti() const;

	/// <summary>
	/// Human-readable label for this API key
	/// </summary>
	utility::string_t GetName() const;
	bool HasName() const;

	/// <summary>
	/// The user whose identity is encoded in this key's JWT
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// The admin who created this API key
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The scoped roles granted to this API key
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	bool HasRoles() const;

	/// <summary>
	/// IP addresses or CIDR ranges this key is restricted to. Empty means no restriction.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedIps() const;
	bool HasAllowedIps() const;

	/// <summary>
	/// When this API key token expires
	/// </summary>
	utility::string_t GetExpiresAt() const;
	bool HasExpiresAt() const;

	/// <summary>
	/// Whether this API key has been revoked
	/// </summary>
	bool GetIsRevoked() const;
	bool HasIsRevoked() const;

	/// <summary>
	/// When this API key was revoked (null if not revoked)
	/// </summary>
	utility::string_t GetRevokedAt() const;
	bool HasRevokedAt() const;

	/// <summary>
	/// Reason for revocation (null if not revoked)
	/// </summary>
	utility::string_t GetRevocationReason() const;
	bool HasRevocationReason() const;

	/// <summary>
	/// Lifetime usage count for countable operations
	/// </summary>
	int64_t GetUsageCount() const;
	bool HasUsageCount() const;

	/// <summary>
	/// When this key was last used for a countable operation
	/// </summary>
	utility::string_t GetLastUsedAt() const;
	bool HasLastUsedAt() const;

	/// <summary>
	/// Optional lifetime usage limit. Null means unlimited.
	/// </summary>
	int64_t GetUsageLimit() const;
	bool HasUsageLimit() const;

	/// <summary>
	/// Count of authentication attempts after key was revoked
	/// </summary>
	int64_t GetRevokedUsageAttempts() const;
	bool HasRevokedUsageAttempts() const;

	/// <summary>
	/// Last time a revoked usage attempt was detected
	/// </summary>
	utility::string_t GetLastRevokedUsageAt() const;
	bool HasLastRevokedUsageAt() const;

	/// <summary>
	/// When this API key was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;


protected:
	std::optional<utility::string_t> m_Jti;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<std::vector<utility::string_t>> m_Roles;
	std::optional<std::vector<utility::string_t>> m_AllowedIps;
	std::optional<utility::string_t> m_ExpiresAt;
	std::optional<bool> m_IsRevoked;
	std::optional<utility::string_t> m_RevokedAt;
	std::optional<utility::string_t> m_RevocationReason;
	std::optional<int64_t> m_UsageCount;
	std::optional<utility::string_t> m_LastUsedAt;
	std::optional<int64_t> m_UsageLimit;
	std::optional<int64_t> m_RevokedUsageAttempts;
	std::optional<utility::string_t> m_LastRevokedUsageAt;
	std::optional<utility::string_t> m_CreatedAt;
};

/// <summary>
/// DTO exposing API key configuration settings to the frontend
/// </summary>
class ApiKeySettingsDto : public csp::services::DtoBase
{
public:
	ApiKeySettingsDto();
	virtual ~ApiKeySettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Maximum number of active (non-revoked, non-expired) API keys per user per tenant
	/// </summary>
	int32_t GetMaxActiveKeysPerUser() const;
	bool HasMaxActiveKeysPerUser() const;

	/// <summary>
	/// Default expiry in days when no ExpiryDays is specified on creation
	/// </summary>
	int32_t GetDefaultExpiryDays() const;
	bool HasDefaultExpiryDays() const;

	/// <summary>
	/// Maximum allowed expiry in days
	/// </summary>
	int32_t GetMaxExpiryDays() const;
	bool HasMaxExpiryDays() const;

	/// <summary>
	/// Preset expiry options (in days) for the creation form UI
	/// </summary>
	const std::vector<int32_t>& GetExpiryPresetDays() const;
	bool HasExpiryPresetDays() const;

	/// <summary>
	/// Roles that can be assigned to API keys
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedRoles() const;
	bool HasAllowedRoles() const;


protected:
	std::optional<int32_t> m_MaxActiveKeysPerUser;
	std::optional<int32_t> m_DefaultExpiryDays;
	std::optional<int32_t> m_MaxExpiryDays;
	std::optional<std::vector<int32_t>> m_ExpiryPresetDays;
	std::optional<std::vector<utility::string_t>> m_AllowedRoles;
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
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

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
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
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
/// One person, one project, one day, some hours.
/// </summary>
class AssignmentDto : public csp::services::DtoBase
{
public:
	AssignmentDto();
	virtual ~AssignmentDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The assignment's id. The grid needs it to clear a cell.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Who is booked.
	/// </summary>
	utility::string_t GetPersonId() const;
	void SetPersonId(const utility::string_t& Value);
	bool HasPersonId() const;

	/// <summary>
	/// What they are booked onto. ⚠ <b>Absent on a PTO row</b>, which is the one kind with no
	/// project — so a client that assumes this key exists renders "(unknown project)" over
	/// every holiday in the studio.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// The day, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Hours booked that day.
	/// </summary>
	double GetHours() const;
	void SetHours(double Value);
	bool HasHours() const;

	/// <summary>
	/// How firm this booking is — `"Booked"`, `"Held"` or `"Pto"`.
	///
	/// ★ <b>A string, for the same reason Magnopus.Logic.ProductionRoster.Dtos.RosterConfigDto.WeekStartDay is one</b>:
	/// the wire form of a C# enum depends on serializer settings the client cannot see, and a
	/// silent switch from `"Held"` to `1` would not fail anywhere — it would just
	/// stop matching, and every hold in the studio would render as a booking.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_PersonId;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_Date;
	std::optional<double> m_Hours;
	std::optional<utility::string_t> m_Kind;
};

/// <summary>
/// Request body for upserting ONE grid cell.
///
/// ⚠ <b>The key is (PersonId, Date), because a cell is a person-day.</b> §10 D1's
/// recommendation is that the model allows many rows per person-day while the v1 UI writes one,
/// so this endpoint replaces the person's row for that day — changing the project on a cell is
/// one call, not a delete plus a create. A person-day already carrying more than one row is
/// refused rather than collapsed (DG-2).
/// </summary>
class AssignmentUpsertRequest : public csp::services::DtoBase
{
public:
	AssignmentUpsertRequest();
	virtual ~AssignmentUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Who is booked. Required.
	/// </summary>
	utility::string_t GetPersonId() const;
	void SetPersonId(const utility::string_t& Value);
	bool HasPersonId() const;

	/// <summary>
	/// What they are booked onto. Required for `Booked` and `Held`; <b>must be absent
	/// for `Pto`</b>, which is the one kind with no project.
	///
	/// ⚠ <b>`[Required]` was deliberately REMOVED when PTO arrived</b>, and that changes
	/// the failure SHAPE on the wire. `[ApiController]` validation runs before the action
	/// and answers `{"errors":{"ProjectId":[…]}}`; a logic check answers
	/// `{"logic":[…]}`. `rosterErrors.js` reads both (roster-system.md §6.3), so this
	/// is safe — but an attribute that cannot express "required unless Kind is Pto" would have
	/// refused every PTO write before the logic ever saw it.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// The day, as `yyyy-MM-dd`. Required.
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Hours booked that day. <b>Zero clears the cell</b>, which is what an emptied hours box
	/// means — the prototype's own cell editor deletes on an empty entry.
	/// </summary>
	double GetHours() const;
	void SetHours(double Value);
	bool HasHours() const;

	/// <summary>
	/// The assignment this write REPLACES, when an editor is retargeting an existing row at a
	/// different project. Optional, and omitted for every other write.
	///
	/// ★ Why it exists at all: this endpoint keys on (personId, projectId, date), so a PUT that
	/// changes a row's project no longer matches the row being edited — it creates a second row
	/// and strands the first, silently doubling the day. Naming the row being vacated turns
	/// "swap this booking's project" back into ONE request that cannot half-fail, and it merges
	/// correctly when the target project is already on that day.
	/// It is deliberately NOT a general "delete this too": the row must belong to the same
	/// person on the same day, or the request is refused.
	/// </summary>
	utility::string_t GetReplacesAssignmentId() const;
	void SetReplacesAssignmentId(const utility::string_t& Value);
	bool HasReplacesAssignmentId() const;

	/// <summary>
	/// How firm this booking is — `"Booked"`, `"Held"` or `"Pto"`. Optional, and
	/// an omitted or empty value means `"Booked"`.
	///
	/// ★ <b>Defaulting rather than requiring it is what keeps every existing caller working</b>
	/// — the seed script, `verify_split_days.py` and any producer's bookmarked request all
	/// pre-date this field, and the kind they meant is the one they have always written.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<utility::string_t> m_PersonId;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_Date;
	std::optional<double> m_Hours;
	std::optional<utility::string_t> m_ReplacesAssignmentId;
	std::optional<utility::string_t> m_Kind;
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
/// Data transfer object for a billing metric (one of the ≤8 Google-registered usage metrics).
/// </summary>
class BillingMetricDto : public csp::services::DtoBase
{
public:
	BillingMetricDto();
	virtual ~BillingMetricDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Stable metric key, e.g. "tokens".
	/// </summary>
	utility::string_t GetMetricKey() const;
	void SetMetricKey(const utility::string_t& Value);
	bool HasMetricKey() const;

	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// What this metric measures.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Registered Google Cloud Marketplace metric id.
	/// </summary>
	utility::string_t GetGoogleMetricId() const;
	void SetGoogleMetricId(const utility::string_t& Value);
	bool HasGoogleMetricId() const;

	/// <summary>
	/// Unit cost is expressed in (units, not dollars).
	/// </summary>
	utility::string_t GetUnit() const;
	void SetUnit(const utility::string_t& Value);
	bool HasUnit() const;

	/// <summary>
	/// Admin grouping category.
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
	/// Whether the metric is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_MetricKey;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_GoogleMetricId;
	std::optional<utility::string_t> m_Unit;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Response DTO for a Magnopus.Service.User.DataAccess.Models.BillingMetricHistoryDocument.
/// </summary>
class BillingMetricHistoryDto : public csp::services::DtoBase
{
public:
	BillingMetricHistoryDto();
	virtual ~BillingMetricHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Metric key.
	/// </summary>
	utility::string_t GetMetricKey() const;
	void SetMetricKey(const utility::string_t& Value);
	bool HasMetricKey() const;

	/// <summary>
	/// Version number of this snapshot.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: display name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Snapshot: description.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Snapshot: Google metric id.
	/// </summary>
	utility::string_t GetGoogleMetricId() const;
	void SetGoogleMetricId(const utility::string_t& Value);
	bool HasGoogleMetricId() const;

	/// <summary>
	/// Snapshot: unit.
	/// </summary>
	utility::string_t GetUnit() const;
	void SetUnit(const utility::string_t& Value);
	bool HasUnit() const;

	/// <summary>
	/// Snapshot: category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Snapshot: sort order.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_MetricKey;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_GoogleMetricId;
	std::optional<utility::string_t> m_Unit;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
};

/// <summary>
/// Data transfer object for one billing domain's DB-driven settings (one per domain key).
/// </summary>
class BillingSettingsDto : public csp::services::DtoBase
{
public:
	BillingSettingsDto();
	virtual ~BillingSettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The settings-group key (the billing domain), e.g. "corkage".
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The settings payload — a flat key→value map the owning domain interprets.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetValues() const;
	void SetValues(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasValues() const;

	/// <summary>
	/// Master on/off for this domain's emitter.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Key;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Values;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Response DTO for a Magnopus.Service.User.DataAccess.Models.BillingSettingsHistoryDocument.
/// </summary>
class BillingSettingsHistoryDto : public csp::services::DtoBase
{
public:
	BillingSettingsHistoryDto();
	virtual ~BillingSettingsHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The settings-group key.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// Version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: the settings payload.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetValues() const;
	void SetValues(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasValues() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Values;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
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
/// ★ Request body for the <b>span write</b> (§3.4).
///
/// Producers do not think in days, they think "Chuy is on Aurora for three weeks at half time".
/// So the write is a span and the <b>server</b> expands it into per-day rows — which gives the
/// authoring model producers actually want while keeping the read model flat and queryable, and
/// makes bulk assign a real endpoint rather than a client-side loop that half-fails.
/// </summary>
class BulkAssignRequest : public csp::services::DtoBase
{
public:
	BulkAssignRequest();
	virtual ~BulkAssignRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Everyone the span applies to. Required, and at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetPersonIds() const;
	void SetPersonIds(const std::vector<utility::string_t>& Value);
	bool HasPersonIds() const;

	/// <summary>
	/// The project they all go on. Required for `Booked` and `Held`; <b>must be absent
	/// for `Pto`</b>. Same conditional shape, and the same removed `[Required]`, as
	/// Magnopus.Logic.ProductionRoster.Dtos.AssignmentUpsertRequest.ProjectId.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// First day of the span, inclusive, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// Last day of the span, <b>inclusive</b>, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;

	/// <summary>
	/// Hours to book on each day of the span.
	/// </summary>
	double GetHoursPerDay() const;
	void SetHoursPerDay(double Value);
	bool HasHoursPerDay() const;

	/// <summary>
	/// Skip Saturdays and Sundays. On by default is the producer's normal case.
	/// </summary>
	bool GetWeekdaysOnly() const;
	void SetWeekdaysOnly(const bool& Value);
	bool HasWeekdaysOnly() const;

	/// <summary>
	/// Replace existing rows in the span rather than reporting them.
	///
	/// ★ <b>Defaults to false, which is §10 D2's recommendation taken.</b> The first call
	/// reports what is in the way and writes nothing; the client shows that and re-sends with
	/// this set. A destructive default is how somebody's week disappears without anyone deciding.
	/// </summary>
	bool GetOverwrite() const;
	void SetOverwrite(const bool& Value);
	bool HasOverwrite() const;

	/// <summary>
	/// How firm the whole span is — `"Booked"`, `"Held"` or `"Pto"`. Optional,
	/// defaulting to `"Booked"`.
	///
	/// ⚠ <b>The kind does NOT widen what a span may replace.</b>`conflicts` is still "rows
	/// on this span's own project" and `shared` is still "rows on other projects, left
	/// alone, always". A span of holds over a week of bookings replaces those bookings on the
	/// same project — which is a producer downgrading a commitment, and is exactly what they
	/// asked for by sending it.
	/// ★ A `Pto` span has no project, so its conflicts are the other PTO rows on those
	/// days and nothing else. A holiday never silently eats somebody's project work.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<std::vector<utility::string_t>> m_PersonIds;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
	std::optional<double> m_HoursPerDay;
	std::optional<bool> m_WeekdaysOnly;
	std::optional<bool> m_Overwrite;
	std::optional<utility::string_t> m_Kind;
};

/// <summary>
/// What a bulk span write did, or would do.
///
/// ★ <b>§10 D2's recommendation, taken: REPORT rather than overwrite.</b> The prototype
/// overwrites and says so in its own modal, which is honest — but with presence arriving (§7)
/// the better behaviour is to show what would be replaced and let the producer decide. So a
/// request with `overwrite: false` comes back Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied`false` with
/// Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Conflicts filled and <b>nothing written</b>; re-sent with
/// `overwrite: true` it writes and Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Replaced says what it took out.
/// ⚠ <b>Why a 200 rather than a 409:</b> the platform's conflict response body is a bare string
/// (`ToFailureActionResult`), so a structured conflict list has nowhere to ride on a 409.
/// Reporting is therefore a successful answer to the question that was asked, and the client
/// branches on Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied. Frozen in the contract fixture's `errors` note.
/// </summary>
class BulkAssignResultDto : public csp::services::DtoBase
{
public:
	BulkAssignResultDto();
	virtual ~BulkAssignResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether anything was written. `false` means the span was reported, not applied.
	/// </summary>
	bool GetApplied() const;
	void SetApplied(const bool& Value);
	bool HasApplied() const;

	/// <summary>
	/// The rows now in place. Empty when Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied is `false`.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetWritten() const;
	void SetWritten(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasWritten() const;

	/// <summary>
	/// The rows that were overwritten, in the state they were in before the write.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetReplaced() const;
	void SetReplaced(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasReplaced() const;

	/// <summary>
	/// Existing rows standing in the way of a non-overwriting apply, <b>on this span's own
	/// project</b>. These are the rows an apply would REPLACE, and what the client shows the
	/// producer before asking "replace these?".
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetConflicts() const;
	void SetConflicts(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasConflicts() const;

	/// <summary>
	/// Rows on OTHER projects that already sit on the span's days. These are reported and
	/// <b>never deleted</b>, whatever `overwrite` says.
	///
	/// ★ Separate from Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Conflicts because the two ask the producer for different
	/// things. A conflict is "I will replace this"; a shared row is "this stays put, and the day
	/// will hold both". Calling them both conflicts would make the modal lie about what Apply
	/// does — the same failure as the bulk modal's selection count (S2), and the stakes are
	/// higher here because the span write is the one write that can destroy somebody's week.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetShared() const;
	void SetShared(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasShared() const;


protected:
	std::optional<bool> m_Applied;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Written;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Replaced;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Conflicts;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Shared;
};

/// <summary>
/// Body of a CDN fetch.
/// </summary>
class CdnFetchRequest : public csp::services::DtoBase
{
public:
	CdnFetchRequest();
	virtual ~CdnFetchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The asset URI (an https URL on an allowed CDN host).
	/// </summary>
	utility::string_t GetUri() const;
	void SetUri(const utility::string_t& Value);
	bool HasUri() const;

	/// <summary>
	/// An access token for the MINED tenant (from the SPA's tenant connection). In the body rather
	/// than a header so no CORS policy has to learn a custom header name. Never logged.
	/// </summary>
	utility::string_t GetTenantToken() const;
	void SetTenantToken(const utility::string_t& Value);
	bool HasTenantToken() const;

	/// <summary>
	/// The MINED tenant's name. Optional: the tenant is taken from the validated token, and when this
	/// is given it must match. When that tenant has a storage override, the asset is read from its own
	/// bucket with its service account rather than through the CDN.
	/// </summary>
	utility::string_t GetTenant() const;
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;


protected:
	std::optional<utility::string_t> m_Uri;
	std::optional<utility::string_t> m_TenantToken;
	std::optional<utility::string_t> m_Tenant;
};

/// <summary>
/// One hold, as the history list sees it — story S7: <i>"who had it on Tuesday"</i> and
/// <i>"we hold this for six hours at a time"</i>, both answerable.
///
/// ⚠ <b>Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.HolderName is a SNAPSHOT, and here that is not the same compromise it is
/// on the row.</b> Everywhere else in Baton a name is resolved client-side so a renamed
/// colleague shows their new name (D21). History is the exception on purpose: it should say who
/// held it <i>under the name they had at the time</i>. A record that quietly rewrites itself
/// when somebody changes their display name is not a record.
/// </summary>
class ClaimHistoryDto : public csp::services::DtoBase
{
public:
	ClaimHistoryDto();
	virtual ~ClaimHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The claim's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The system it was a hold on.
	/// </summary>
	utility::string_t GetSystemId() const;
	void SetSystemId(const utility::string_t& Value);
	bool HasSystemId() const;

	/// <summary>
	/// Who held it.
	/// </summary>
	utility::string_t GetHolderId() const;
	void SetHolderId(const utility::string_t& Value);
	bool HasHolderId() const;

	/// <summary>
	/// Their name at the time. See the class remarks for why this one is not resolved.
	/// </summary>
	utility::string_t GetHolderName() const;
	void SetHolderName(const utility::string_t& Value);
	bool HasHolderName() const;

	/// <summary>
	/// Why they took it, if they said. Supplied by API and agent callers (§14); the SPA never asks.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;

	/// <summary>
	/// What they did, if they said, given when the hold ended.
	///
	/// ★ This is what the history's notes column actually renders (day-1-followup item H). The
	/// column existed end to end and was blank on every row because nothing ever asked for
	/// Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.Note — and asking on the take was the wrong answer, because a take must
	/// stay one click. Asking on the <b>pass</b> costs nothing, and turns the column from a
	/// promise about intent into a log of what happened, which is what somebody reading history
	/// wants.
	/// </summary>
	utility::string_t GetReleaseNote() const;
	void SetReleaseNote(const utility::string_t& Value);
	bool HasReleaseNote() const;

	/// <summary>
	/// When the hold started.
	/// </summary>
	utility::string_t GetTakenAt() const;
	void SetTakenAt(const utility::string_t& Value);
	bool HasTakenAt() const;

	/// <summary>
	/// When it ended, or `null` while the hold is still open.
	/// </summary>
	utility::string_t GetReleasedAt() const;
	void SetReleasedAt(const utility::string_t& Value);
	bool HasReleasedAt() const;

	/// <summary>
	/// How long it was held. <b>Computed once at release and stored</b>, so history sorts and
	/// aggregates without a `$expr` — and so the answer cannot drift as clocks do.
	/// `null` while the hold is open.
	/// </summary>
	int64_t GetDurationMs() const;
	void SetDurationMs(int64_t Value);
	bool HasDurationMs() const;

	/// <summary>
	/// Who ended it. `null` while the hold is open.
	///
	/// ⚠ <b>Differing from Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.HolderId IS the force-release record</b> — that
	/// difference is the whole audit signal (baton-plan.md §13.1), and it is rendered as such:
	/// <i>"forced by Jerome"</i>, never as a silent gap in the timeline. The name is resolved
	/// client-side, because unlike the holder this is not a snapshot the record has to preserve.
	/// </summary>
	utility::string_t GetReleasedByUserId() const;
	void SetReleasedByUserId(const utility::string_t& Value);
	bool HasReleasedByUserId() const;

	/// <summary>
	/// `true` when somebody other than the holder ended the hold.
	///
	///
	/// Derived here rather than left to the client, because the comparison IS the audit signal
	///              and a UI that reimplemented it could get it subtly wrong — most obviously by treating an
	///              <i>open</i> hold, which has no Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.ReleasedByUserId at all, as a force.
	/// </summary>
	bool GetForced() const;
	void SetForced(const bool& Value);
	bool HasForced() const;

	/// <summary>
	/// Whether a person or a process held it (Magnopus.Logic.Baton.DataAccess.Model.HolderKinds, §14).
	/// </summary>
	utility::string_t GetHolderKind() const;
	void SetHolderKind(const utility::string_t& Value);
	bool HasHolderKind() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_SystemId;
	std::optional<utility::string_t> m_HolderId;
	std::optional<utility::string_t> m_HolderName;
	std::optional<utility::string_t> m_Note;
	std::optional<utility::string_t> m_ReleaseNote;
	std::optional<utility::string_t> m_TakenAt;
	std::optional<utility::string_t> m_ReleasedAt;
	std::optional<int64_t> m_DurationMs;
	std::optional<utility::string_t> m_ReleasedByUserId;
	std::optional<bool> m_Forced;
	std::optional<utility::string_t> m_HolderKind;
};

class ClaimHistoryDtoDataPage : public csp::services::DtoBase
{
public:
	ClaimHistoryDtoDataPage();
	virtual ~ClaimHistoryDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ClaimHistoryDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ClaimHistoryDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ClaimHistoryDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// <b>What happened</b> — the body of both the 200 and the 409, deliberately the same shape.
///
///
/// The UI renders the immediate result <b>from this response</b> rather than from what it sent.
///              That is a considered exception to the SPA's "don't trust PUT/DELETE responses for state"
///              rule (D11, baton-plan.md §11): that rule assumes you already know the outcome, and take and
///              pass are exactly the case where you do not. Constructing "you have it" from what we sent
///              would assert the one thing we cannot know, which is the defect this whole feature exists to
///              prevent.
/// Magnopus.Logic.Baton.Dtos.ClaimOutcomeDto.System is the authoritative state as the server sees it right now: on a
///              success it is the document the conditional update returned; on a conflict it is a re-read,
///              taken <b>after</b> the outcome was already decided, purely so the message can name a person.
/// </summary>
class ClaimOutcomeDto : public csp::services::DtoBase
{
public:
	ClaimOutcomeDto();
	virtual ~ClaimOutcomeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// What happened, as one of Magnopus.Logic.Baton.Dtos.ClaimOutcomes. The UI branches on this, not on the message.
	/// </summary>
	utility::string_t GetOutcome() const;
	void SetOutcome(const utility::string_t& Value);
	bool HasOutcome() const;

	std::shared_ptr<SystemDto> GetSystem() const;
	void SetSystem(const std::shared_ptr<SystemDto>& Value);
	bool HasSystem() const;

	/// <summary>
	/// The claim opened by a take, or closed by a pass. `null` on a conflict.
	/// </summary>
	utility::string_t GetClaimId() const;
	void SetClaimId(const utility::string_t& Value);
	bool HasClaimId() const;

	/// <summary>
	/// How long ago the winning claim was taken, in milliseconds — the losing message's number
	/// (D20, baton-plan.md §6.1). Present only on Magnopus.Logic.Baton.Dtos.ClaimOutcomes.HeldByAnother.
	///
	/// ⚠ <b>Which digits are real:</b>`DateTimeOffset` ticks are 100 ns, so this is genuine to
	/// about <b>four decimal places</b>. The SPA appends more for the joke, and generates them
	/// client-side rather than the server pretending to know them.
	/// ⚠⚠ <b>Nothing may ever build on this number.</b> Two takes can land on different pods,
	/// so it carries whatever clock skew exists between them. Who won is decided by the atomic
	/// update in the repository and by <b>nothing else</b>; this is computed afterwards, for
	/// flavour, from data the winner already wrote.
	/// </summary>
	double GetMissedByMs() const;
	void SetMissedByMs(double Value);
	bool HasMissedByMs() const;

	/// <summary>
	/// `true` when this pass took somebody else's hold. The record of it is
	///             `ClaimDocument.ReleasedByUserId` differing from `HolderId`, plus an audit
	///             record outside the tool (D8/D24) — this flag is only so the UI can say so out loud.
	/// </summary>
	bool GetForced() const;
	void SetForced(const bool& Value);
	bool HasForced() const;

	/// <summary>
	/// A plain sentence describing the outcome, for API and agent callers (§14 — the REST API
	/// <i>is</i> the agent surface). The SPA composes its own copy from the fields above; it
	/// does not parse this.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_Outcome;
	std::optional<std::shared_ptr<SystemDto>> m_System;
	std::optional<utility::string_t> m_ClaimId;
	std::optional<double> m_MissedByMs;
	std::optional<bool> m_Forced;
	std::optional<utility::string_t> m_Message;
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
/// Request to create a new API key
/// </summary>
class CreateApiKeyRequest : public csp::services::DtoBase
{
public:
	CreateApiKeyRequest();
	virtual ~CreateApiKeyRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable label for the API key
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Number of days until the API key expires. If not specified, uses the default from configuration.
	/// </summary>
	int32_t GetExpiryDays() const;
	void SetExpiryDays(int32_t Value);
	bool HasExpiryDays() const;

	/// <summary>
	/// The roles to grant to this API key. Must be in the server's AllowedRoles list.
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;

	/// <summary>
	/// The userId to assign as the key's identity. Must be a user in the caller's tenant.
	/// If null, defaults to the caller's own userId.
	/// </summary>
	utility::string_t GetTargetUserId() const;
	void SetTargetUserId(const utility::string_t& Value);
	bool HasTargetUserId() const;

	/// <summary>
	/// Optional IP addresses or CIDR ranges to restrict this key to. Empty or null means no restriction.
	/// Accepts individual IPs (e.g., "10.0.0.1") and CIDR notation (e.g., "10.0.0.0/24").
	/// Baked into the JWT and cannot be changed after creation.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedIps() const;
	void SetAllowedIps(const std::vector<utility::string_t>& Value);
	bool HasAllowedIps() const;

	/// <summary>
	/// Optional lifetime usage limit for countable operations. Null means unlimited.
	/// Key will be auto-revoked when this limit is exceeded.
	/// </summary>
	int64_t GetUsageLimit() const;
	void SetUsageLimit(int64_t Value);
	bool HasUsageLimit() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<int32_t> m_ExpiryDays;
	std::optional<std::vector<utility::string_t>> m_Roles;
	std::optional<utility::string_t> m_TargetUserId;
	std::optional<std::vector<utility::string_t>> m_AllowedIps;
	std::optional<int64_t> m_UsageLimit;
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

	/// <summary>
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

	/// <summary>
	/// Optional per-tier quota limit configurations.
	/// Processed by Aggregation to upsert QuotaFeatureTier records in the Tracking service.
	/// </summary>
	const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& GetTierConfigs() const;
	void SetTierConfigs(const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& Value);
	bool HasTierConfigs() const;


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
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
	std::optional<std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>> m_TierConfigs;
};

/// <summary>
/// Create request for a billing metric.
/// </summary>
class CreateBillingMetricRequest : public csp::services::DtoBase
{
public:
	CreateBillingMetricRequest();
	virtual ~CreateBillingMetricRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Stable metric key, e.g. "tokens". Required, unique.
	/// </summary>
	utility::string_t GetMetricKey() const;
	void SetMetricKey(const utility::string_t& Value);
	bool HasMetricKey() const;

	/// <summary>
	/// Human-readable name. Required.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// What this metric measures.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Registered Google Cloud Marketplace metric id.
	/// </summary>
	utility::string_t GetGoogleMetricId() const;
	void SetGoogleMetricId(const utility::string_t& Value);
	bool HasGoogleMetricId() const;

	/// <summary>
	/// Unit cost is expressed in.
	/// </summary>
	utility::string_t GetUnit() const;
	void SetUnit(const utility::string_t& Value);
	bool HasUnit() const;

	/// <summary>
	/// Admin grouping category.
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
	/// Whether the metric is enabled. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_MetricKey;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_GoogleMetricId;
	std::optional<utility::string_t> m_Unit;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Internal-service request to point a tenant hostname at a GCP static-site load balancer by upserting a
/// Route 53 A-record (`hostname` → Magnopus.Service.User.Dtos.CreateGcpLoadBalancerHostnameRequest.IpAddress) and recording the typed hostname on the
/// tenant. Used by the nodey-next (`GcpStaticSiteLbPerHost`) provisioning path, where the TLS cert and the
/// LB edge are provisioned GCP-side and only the DNS record must be written into the oko.live Route 53 zone
/// (which the User service owns). Idempotent on Magnopus.Service.User.Dtos.CreateGcpLoadBalancerHostnameRequest.Hostname (the record is UPSERTed).
/// Called by the async provisioning reconcile loop (in Aggregation) under an elevated internal-service principal.
/// </summary>
class CreateGcpLoadBalancerHostnameRequest : public csp::services::DtoBase
{
public:
	CreateGcpLoadBalancerHostnameRequest();
	virtual ~CreateGcpLoadBalancerHostnameRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname to point at the load balancer (e.g. `nodey.acme-corp.acme.oko.live`).
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The static-site load balancer's global IPv4 address the A-record resolves to.
	/// </summary>
	utility::string_t GetIpAddress() const;
	void SetIpAddress(const utility::string_t& Value);
	bool HasIpAddress() const;

	/// <summary>
	/// The `TypedHostname.Type` discriminator to record (e.g. `nodey-next`).
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_IpAddress;
	std::optional<utility::string_t> m_Type;
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
/// Internal-service request to provision a marketplace app subdomain on a tenant. The User service runs the
/// AWS DNS/cert/CloudFront flow for the given Magnopus.Service.User.Dtos.CreateMarketplaceHostnameRequest.Type and stores the resulting typed
/// hostname on the tenant document. Idempotent: re-posting an already-present hostname returns its current status without re-issuing a certificate.
/// Called by the async provisioning reconcile loop (in Aggregation) under an elevated internal-service principal.
/// </summary>
class CreateMarketplaceHostnameRequest : public csp::services::DtoBase
{
public:
	CreateMarketplaceHostnameRequest();
	virtual ~CreateMarketplaceHostnameRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified subdomain to provision (e.g. `spaces.acme-corp.acme.oko.live`).
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The hostname type driving the serving path: `oko` (CloudFront-served, e.g. Spaces) or `nodey`.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
};

/// <summary>
/// Create request for a per-tier price override.
/// </summary>
class CreateMatrixTierPriceOverrideRequest : public csp::services::DtoBase
{
public:
	CreateMatrixTierPriceOverrideRequest();
	virtual ~CreateMatrixTierPriceOverrideRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// FK to the matrix entry id this override applies to. Required.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// FK to the tier id (stable QuotaTier id). Required.
	/// </summary>
	utility::string_t GetTierId() const;
	void SetTierId(const utility::string_t& Value);
	bool HasTierId() const;

	/// <summary>
	/// Override fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Override per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the override is enabled. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<utility::string_t> m_TierId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Create request for a row-level exception on a pricing sheet.
/// </summary>
class CreatePricingSheetExceptionRequest : public csp::services::DtoBase
{
public:
	CreatePricingSheetExceptionRequest();
	virtual ~CreatePricingSheetExceptionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// FK to the pricing sheet. Required.
	/// </summary>
	utility::string_t GetPricingSheetId() const;
	void SetPricingSheetId(const utility::string_t& Value);
	bool HasPricingSheetId() const;

	/// <summary>
	/// FK to the matrix entry id this exception applies to. Required.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// Exception fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Exception per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the exception is enabled. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_PricingSheetId;
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Create request for a pricing sheet. A new sheet is always created as `Draft`.
/// </summary>
class CreatePricingSheetRequest : public csp::services::DtoBase
{
public:
	CreatePricingSheetRequest();
	virtual ~CreatePricingSheetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Display name. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Multiplier applied to the tenant's resolved cost. Defaults to 1 (no discount).
	/// </summary>
	double GetMultiplier() const;
	void SetMultiplier(double Value);
	bool HasMultiplier() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<double> m_Multiplier;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Create request for a matrix entry.
/// </summary>
class CreateTokenMatrixEntryRequest : public csp::services::DtoBase
{
public:
	CreateTokenMatrixEntryRequest();
	virtual ~CreateTokenMatrixEntryRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node identity this entry applies to (nullable for non-node rows).
	/// </summary>
	utility::string_t GetNodeKey() const;
	void SetNodeKey(const utility::string_t& Value);
	bool HasNodeKey() const;

	/// <summary>
	/// The dimensions a node-invocation must match.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetDimensions() const;
	void SetDimensions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasDimensions() const;

	std::shared_ptr<MatrixCostKind> GetCostKind() const;
	void SetCostKind(const std::shared_ptr<MatrixCostKind>& Value);
	bool HasCostKind() const;

	/// <summary>
	/// Fixed cost in units (required when CostKind=Fixed). <b>May be fractional</b> — the wire
	/// contract is a JSON <i>number</i> carrying up to nine decimal places (`0.1`, not
	/// `"0.1"`). Quantized to nine places on write; a positive value below
	/// `0.001` is rejected, and any fraction is rejected on an `apikey`-targeted row.
	/// `null` (unpriced) and `0` are both valid and mean different things.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Per-unit rate (required when CostKind=Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Dimension carrying the measured quantity (required when CostKind=Rate).
	/// </summary>
	utility::string_t GetUnitDimension() const;
	void SetUnitDimension(const utility::string_t& Value);
	bool HasUnitDimension() const;

	/// <summary>
	/// FK to a billing metric key. Required.
	/// </summary>
	utility::string_t GetTargetMetric() const;
	void SetTargetMetric(const utility::string_t& Value);
	bool HasTargetMetric() const;

	/// <summary>
	/// Admin grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Description.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Whether enabled. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_NodeKey;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Dimensions;
	std::optional<std::shared_ptr<MatrixCostKind>> m_CostKind;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<utility::string_t> m_UnitDimension;
	std::optional<utility::string_t> m_TargetMetric;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
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
/// Request body for creating a new daigram (which provisions a group + scope).
/// </summary>
class DaigramCreateRequest : public csp::services::DtoBase
{
public:
	DaigramCreateRequest();
	virtual ~DaigramCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram title. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
};

/// <summary>
/// A daigram as seen by the client: metadata + the caller's relationship to it.
/// Shapes are NOT here — they live in the Multiplayer object store, reached via Magnopus.Logic.Daigrammar.Dtos.DaigramDto.GroupId.
/// </summary>
class DaigramDto : public csp::services::DtoBase
{
public:
	DaigramDto();
	virtual ~DaigramDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// User-facing title.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The owner's user id.
	/// </summary>
	utility::string_t GetOwnerId() const;
	void SetOwnerId(const utility::string_t& Value);
	bool HasOwnerId() const;

	/// <summary>
	/// The backing Group id — the client connects to multiplayer by this reference id.
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// The Global Scope id whose object store holds the shapes (convenience; re-resolved at connect).
	/// </summary>
	utility::string_t GetScopeId() const;
	void SetScopeId(const utility::string_t& Value);
	bool HasScopeId() const;

	/// <summary>
	/// Optional thumbnail Prototype id (deferred feature; null for now).
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;

	/// <summary>
	/// When the daigram was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the daigram was last updated (rename, thumbnail, …). Not shape edits.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The caller's role on this daigram — see Magnopus.Logic.Daigrammar.Dtos.DaigramRoles.
	/// </summary>
	utility::string_t GetRole() const;
	void SetRole(const utility::string_t& Value);
	bool HasRole() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_OwnerId;
	std::optional<utility::string_t> m_GroupId;
	std::optional<utility::string_t> m_ScopeId;
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_Role;
};

/// <summary>
/// Request body for setting a daigram's thumbnail Prototype id (capture-on-save). Metadata-only;
/// the snapshot image itself is a Thumbnail AssetDetail on the referenced (group-owned) Prototype.
/// </summary>
class DaigramThumbnailRequest : public csp::services::DtoBase
{
public:
	DaigramThumbnailRequest();
	virtual ~DaigramThumbnailRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Prototype id whose Thumbnail asset holds the snapshot. Required.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;


protected:
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
};

/// <summary>
/// Request body for renaming a daigram (metadata-only; does not touch the shape store).
/// </summary>
class DaigramUpdateRequest : public csp::services::DtoBase
{
public:
	DaigramUpdateRequest();
	virtual ~DaigramUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The new daigram title. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
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
/// A department as the grid sees it.
///
/// ⚠ <b>Every property here is frozen by S0</b> — the contract fixture at
/// `wwwroot/inspector/test/docs/fixtures/roster/contract.json` carries a worked example and
/// `ProductionRosterContractTests` fails the build if the two drift. Adding a property here
/// without adding it there is the exact failure §8.1 exists to prevent.
/// </summary>
class DepartmentDto : public csp::services::DtoBase
{
public:
	DepartmentDto();
	virtual ~DepartmentDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The department's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Its name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Where it sits in the grid, low first.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Its titles, in seniority order. The grid's title dividers render in this order.
	/// </summary>
	const std::vector<utility::string_t>& GetTitleLadder() const;
	void SetTitleLadder(const std::vector<utility::string_t>& Value);
	bool HasTitleLadder() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<int32_t> m_SortOrder;
	std::optional<std::vector<utility::string_t>> m_TitleLadder;
};

/// <summary>
/// Request body for creating or editing a department.
///
/// ⚠ <b>The duplicate-name guard is the unique index, not this class.</b> ASP.NET validation
/// runs before the action, so a blank name is a 400 from here — but "Studio QA already exists"
/// is decided by `Unique_Tenant_Name` when the insert lands.
/// One request type for both create and edit, rather than two near-identical ones: every field
/// is settable at create and editable afterwards, so a second class would be a copy that drifts.
/// </summary>
class DepartmentUpsertRequest : public csp::services::DtoBase
{
public:
	DepartmentUpsertRequest();
	virtual ~DepartmentUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The department's name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Where it sits in the grid, low first.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// The department's titles, <b>in seniority order</b>. Order is meaningful — see
	/// `DepartmentDocument.TitleLadder`.
	/// </summary>
	const std::vector<utility::string_t>& GetTitleLadder() const;
	void SetTitleLadder(const std::vector<utility::string_t>& Value);
	bool HasTitleLadder() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<int32_t> m_SortOrder;
	std::optional<std::vector<utility::string_t>> m_TitleLadder;
};

/// <summary>
/// A directed edge between two effort-graph nodes, stored inline on the source node's
/// `EffortResourceDocument.Edges` (mirroring how a JIRA issue carries its Magnopus.Logic.WatchTower.Structures.JiraLink
/// relationships, so the effort family reuses the same read/hydrate contract). Magnopus.Logic.WatchTower.Structures.EffortEdge.From and
/// Magnopus.Logic.WatchTower.Structures.EffortEdge.To are node `Key`s, e.g. `"epic:stage-a"` → `"task:<norm-title>"`.
/// </summary>
class EffortEdge : public csp::services::DtoBase
{
public:
	EffortEdge();
	virtual ~EffortEdge();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The edge kind: `contains` (effort→doc, epic→workitem) / `references` (doc↔doc) /
	/// `completes` (event→workitem — its absence is what makes a work item "dangling") /
	/// `touches` (effort/workitem→system) / `depends` (workitem→workitem).
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The source node key.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The target node key.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
};

/// <summary>
/// Request body for bulk-get-by-keys (the client hydration read).
/// </summary>
class EffortResourceBulkGetRequest : public csp::services::DtoBase
{
public:
	EffortResourceBulkGetRequest();
	virtual ~EffortResourceBulkGetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node keys to fetch. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
};

/// <summary>
/// A WatchTower effort-family read-model entry as seen by a client hydrating a daigram: the out-of-band
/// record a durable element points at via its `contentRef { family:"effort", key }`. The client
/// renders shape/colour off Magnopus.Logic.WatchTower.Dtos.EffortResourceDto.Kind + Magnopus.Logic.WatchTower.Dtos.EffortResourceDto.StatusCategory
/// as a client-side overlay — this state never lands on the multiplayer object stream (decision #2). Mirrors
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.
/// </summary>
class EffortResourceDto : public csp::services::DtoBase
{
public:
	EffortResourceDto();
	virtual ~EffortResourceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family — always `"effort"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node kind (`effort` / `system` / `doc` / `section` / `epic` / `workitem` / `event`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The stable node key.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The node's display title / label.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// A longer description / summary, or null.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// For `doc` nodes: the genre. Null otherwise.
	/// </summary>
	utility::string_t GetGenre() const;
	void SetGenre(const utility::string_t& Value);
	bool HasGenre() const;

	/// <summary>
	/// For `epic` / `workitem` nodes: the status name. Null otherwise.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category (`new` / `indeterminate` / `done` / `removed`) — drives the
	/// status colour; non-`done` = dangling, `removed` = tombstoned (render struck-through).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The owner / assignee display name, or null.
	/// </summary>
	utility::string_t GetOwner() const;
	void SetOwner(const utility::string_t& Value);
	bool HasOwner() const;

	/// <summary>
	/// For `event` nodes: when the work occurred (the timeline axis), or null.
	/// </summary>
	utility::string_t GetOccurredAt() const;
	void SetOccurredAt(const utility::string_t& Value);
	bool HasOccurredAt() const;

	/// <summary>
	/// The node's source path in the docs repo, or null.
	/// </summary>
	utility::string_t GetSourcePath() const;
	void SetSourcePath(const utility::string_t& Value);
	bool HasSourcePath() const;

	/// <summary>
	/// The node's source GitHub URL, or null.
	/// </summary>
	utility::string_t GetSourceUrl() const;
	void SetSourceUrl(const utility::string_t& Value);
	bool HasSourceUrl() const;

	/// <summary>
	/// Free-text evidence for a status/event, or null.
	/// </summary>
	utility::string_t GetEvidence() const;
	void SetEvidence(const utility::string_t& Value);
	bool HasEvidence() const;

	/// <summary>
	/// A short digest of the producer's source content (e.g. `"sha256:1f3b…"`), or null. The client can
	/// use it as a cheap "did this actually change" comparison alongside the keyed push.
	/// </summary>
	utility::string_t GetContentHash() const;
	void SetContentHash(const utility::string_t& Value);
	bool HasContentHash() const;

	/// <summary>
	/// The provenance tier of this node's facts (`0` reconstructor / `10` agent / `100` human).
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;

	/// <summary>
	/// This node's outbound edges (containment / references / completes / touches / depends).
	/// </summary>
	const std::vector<std::shared_ptr<EffortEdge>>& GetEdges() const;
	void SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value);
	bool HasEdges() const;

	/// <summary>
	/// The daigram ids this node is referenced by.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// When this read-model entry was last written by the platform (the liveness cursor axis).
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// When this node was tombstoned (its source unit vanished), or null while it is live. A tombstone is
	/// still returned by every read on purpose — the board renders it struck-through rather than letting it
	/// disappear silently. `Status` and `StatusCategory` both read `removed` alongside it.
	/// </summary>
	utility::string_t GetDeletedAt() const;
	void SetDeletedAt(const utility::string_t& Value);
	bool HasDeletedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Kind;
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Genre;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Owner;
	std::optional<utility::string_t> m_OccurredAt;
	std::optional<utility::string_t> m_SourcePath;
	std::optional<utility::string_t> m_SourceUrl;
	std::optional<utility::string_t> m_Evidence;
	std::optional<utility::string_t> m_ContentHash;
	std::optional<int32_t> m_ProvenanceTier;
	std::optional<std::vector<std::shared_ptr<EffortEdge>>> m_Edges;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_DeletedAt;
};

/// <summary>
/// Request body for a bulk-remove — the tombstone verb. Keys only, deliberately: the producer proposes a
/// removal precisely because the source unit has VANISHED, so it no longer holds a payload to send. Sending
/// a sparse upsert item instead would blank the record's title, summary and edges, which is exactly the
/// content the struck-through render needs to keep.
/// </summary>
class EffortResourceRemoveRequest : public csp::services::DtoBase
{
public:
	EffortResourceRemoveRequest();
	virtual ~EffortResourceRemoveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node keys to tombstone. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;

	/// <summary>
	/// The provenance tier asserting the removal (`0` reconstructor / `10` agent / `100`
	/// human). Defaults to `0`. Gated exactly like an upsert: a key whose stored tier is HIGHER is
	/// refused and named in Magnopus.Logic.WatchTower.Dtos.EffortResourceRemoveResult.GatedKeys — that is how a human's
	/// pinned work item survives a sync that no longer sees it in the file.
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
	std::optional<int32_t> m_ProvenanceTier;
};

/// <summary>
/// Outcome of a bulk-remove: what was tombstoned, what was refused, and what was not there.
/// </summary>
class EffortResourceRemoveResult : public csp::services::DtoBase
{
public:
	EffortResourceRemoveResult();
	virtual ~EffortResourceRemoveResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Entries tombstoned by this call (`Status`/`StatusCategory` set to `removed`, `DeletedAt` stamped).
	/// </summary>
	int32_t GetRemoved() const;
	void SetRemoved(int32_t Value);
	bool HasRemoved() const;

	/// <summary>
	/// Entries already carrying a tombstone, left completely untouched. This is the idempotence that
	/// matters: the watcher re-proposes every vanished key on every tick, and re-stamping would move
	/// `UpdatedAt` forever — the tombstone would resurface on every liveness poll and glow for ever.
	/// </summary>
	int32_t GetAlreadyRemoved() const;
	void SetAlreadyRemoved(int32_t Value);
	bool HasAlreadyRemoved() const;

	/// <summary>
	/// The keys refused because their stored provenance tier is higher than the incoming one — named, not
	/// just counted, so the caller can report the refusal rather than swallowing it. Never null.
	/// </summary>
	const std::vector<utility::string_t>& GetGatedKeys() const;
	void SetGatedKeys(const std::vector<utility::string_t>& Value);
	bool HasGatedKeys() const;

	/// <summary>
	/// The requested keys that have no entry in this family/tenant — the caller's view and the server's
	/// have diverged. Reported, not an error. Never null.
	/// </summary>
	const std::vector<utility::string_t>& GetMissingKeys() const;
	void SetMissingKeys(const std::vector<utility::string_t>& Value);
	bool HasMissingKeys() const;


protected:
	std::optional<int32_t> m_Removed;
	std::optional<int32_t> m_AlreadyRemoved;
	std::optional<std::vector<utility::string_t>> m_GatedKeys;
	std::optional<std::vector<utility::string_t>> m_MissingKeys;
};

/// <summary>
/// Request body for the liveness search — nodes tagged with any of Magnopus.Logic.WatchTower.Dtos.EffortResourceSearchRequest.Tags, changed since
/// Magnopus.Logic.WatchTower.Dtos.EffortResourceSearchRequest.Since.
/// </summary>
class EffortResourceSearchRequest : public csp::services::DtoBase
{
public:
	EffortResourceSearchRequest();
	virtual ~EffortResourceSearchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram ids to match (ANY). Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The cursor from the previous poll (exclusive). Null = full set.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// Response for the liveness search: the changed nodes plus the cursor to pass as `since` next poll.
/// </summary>
class EffortResourceSearchResponse : public csp::services::DtoBase
{
public:
	EffortResourceSearchResponse();
	virtual ~EffortResourceSearchResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The matching nodes (newest-written first).
	/// </summary>
	const std::vector<std::shared_ptr<EffortResourceDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<EffortResourceDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// The cursor for the next poll — captured server-side before the query, so nothing is missed.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<std::shared_ptr<EffortResourceDto>>> m_Items;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// A single node in a bulk-upsert. Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Tags are ADDED to any existing tags (merge, not replace).
/// </summary>
class EffortResourceUpsertItem : public csp::services::DtoBase
{
public:
	EffortResourceUpsertItem();
	virtual ~EffortResourceUpsertItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The stable node key, e.g. `"task:<norm-title>"`. Required.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node kind (`effort` / `system` / `doc` / `section` / `epic` / `workitem` / `event`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// Daigram ids to associate this node with (merged into the existing tag set).
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The node's display title / label.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// A longer description / summary, or null.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// For `doc` nodes: the genre.
	/// </summary>
	utility::string_t GetGenre() const;
	void SetGenre(const utility::string_t& Value);
	bool HasGenre() const;

	/// <summary>
	/// For `epic` / `workitem` nodes: the status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category (`new` / `indeterminate` / `done`).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The owner / assignee display name, or null.
	/// </summary>
	utility::string_t GetOwner() const;
	void SetOwner(const utility::string_t& Value);
	bool HasOwner() const;

	/// <summary>
	/// For `event` nodes: when the work occurred (the timeline axis), or null.
	/// </summary>
	utility::string_t GetOccurredAt() const;
	void SetOccurredAt(const utility::string_t& Value);
	bool HasOccurredAt() const;

	/// <summary>
	/// The node's source path in the docs repo, or null.
	/// </summary>
	utility::string_t GetSourcePath() const;
	void SetSourcePath(const utility::string_t& Value);
	bool HasSourcePath() const;

	/// <summary>
	/// The node's source GitHub URL, or null.
	/// </summary>
	utility::string_t GetSourceUrl() const;
	void SetSourceUrl(const utility::string_t& Value);
	bool HasSourceUrl() const;

	/// <summary>
	/// Free-text evidence for a status/event, or null.
	/// </summary>
	utility::string_t GetEvidence() const;
	void SetEvidence(const utility::string_t& Value);
	bool HasEvidence() const;

	/// <summary>
	/// A short digest of the producer's source content for this node (e.g. `"sha256:1f3b…"`), or null.
	/// Opaque to the server — it is compared, never parsed. It exists so a content edit that does not surface
	/// in any other field (a change past the 400-char Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Summary cut, or a section body the
	/// read-model does not carry) still classifies as an update: it is part of the upsert signature, so it
	/// moves `UpdatedAt` and enters the liveness notify set. Retires the convention of smuggling a
	/// `sha256:` marker through Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Evidence.
	/// </summary>
	utility::string_t GetContentHash() const;
	void SetContentHash(const utility::string_t& Value);
	bool HasContentHash() const;

	/// <summary>
	/// The provenance tier of this write (`0` reconstructor / `10` agent / `100` human). Defaults to `0`.
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;

	/// <summary>
	/// This node's outbound edges (containment / references / completes / touches / depends).
	/// </summary>
	const std::vector<std::shared_ptr<EffortEdge>>& GetEdges() const;
	void SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value);
	bool HasEdges() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Genre;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Owner;
	std::optional<utility::string_t> m_OccurredAt;
	std::optional<utility::string_t> m_SourcePath;
	std::optional<utility::string_t> m_SourceUrl;
	std::optional<utility::string_t> m_Evidence;
	std::optional<utility::string_t> m_ContentHash;
	std::optional<int32_t> m_ProvenanceTier;
	std::optional<std::vector<std::shared_ptr<EffortEdge>>> m_Edges;
};

/// <summary>
/// Request body for a bulk-upsert of effort read-model entries — the write path for BOTH producers (the
/// historical reconstructor and the live observer/agent). Each item carries a
/// Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.ProvenanceTier; the upsert only overwrites stored fields when
/// the incoming tier is ≥ the stored tier (a tier-0 re-parse never clobbers a human/agent edit).
/// </summary>
class EffortResourceUpsertRequest : public csp::services::DtoBase
{
public:
	EffortResourceUpsertRequest();
	virtual ~EffortResourceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The nodes to upsert. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& Value);
	bool HasItems() const;


protected:
	std::optional<std::vector<std::shared_ptr<EffortResourceUpsertItem>>> m_Items;
};

/// <summary>
/// Outcome of a bulk-upsert: how many nodes were created / updated / left unchanged (incl. provenance-gated skips).
/// </summary>
class EffortResourceUpsertResult : public csp::services::DtoBase
{
public:
	EffortResourceUpsertResult();
	virtual ~EffortResourceUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New read-model entries inserted.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing entries whose fields, tier, or tags changed.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing entries left untouched (nothing changed, or the incoming tier was below the stored tier).
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
};

/// <summary>
/// Request body for the `POST tenants/{tenantName}/email-redirect-patterns` endpoint.
/// </summary>
class EmailRedirectDto : public csp::services::DtoBase
{
public:
	EmailRedirectDto();
	virtual ~EmailRedirectDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The regex pattern to add to the tenant's `EmailRedirectUrlAllowList`
	/// (e.g. `^(.+\.)?acme\.oko\.live`).
	/// </summary>
	utility::string_t GetPattern() const;
	void SetPattern(const utility::string_t& Value);
	bool HasPattern() const;


protected:
	std::optional<utility::string_t> m_Pattern;
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
	/// The decrypted value. Null when the secret is Magnopus-owned and the caller
	/// does not have an elevated role (magnopus-admin, magnopus-support, tenant-secrets).
	/// </summary>
	utility::string_t GetValue() const;
	void SetValue(const utility::string_t& Value);
	bool HasValue() const;

	/// <summary>
	/// Whether this secret value was provided by Magnopus.
	/// When true, non-elevated callers cannot see the decrypted value.
	/// </summary>
	bool GetIsMagnopusOwned() const;
	void SetIsMagnopusOwned(const bool& Value);
	bool HasIsMagnopusOwned() const;


protected:
	std::optional<utility::string_t> m_KeyName;
	std::optional<utility::string_t> m_Value;
	std::optional<bool> m_IsMagnopusOwned;
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
/// Request to switch to a different plus-addressed identity within the SAME tenant.
/// Requires an active SSO session with the correct provider for the domain.
/// </summary>
class ExchangeProfileRequest : public csp::services::DtoBase
{
public:
	ExchangeProfileRequest();
	virtual ~ExchangeProfileRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Current refresh token (proves session identity).
	/// </summary>
	utility::string_t GetRefreshToken() const;
	void SetRefreshToken(const utility::string_t& Value);
	bool HasRefreshToken() const;

	/// <summary>
	/// Email of the plus-addressed identity to switch to.
	/// Must be a passwordless plus-address variant of the caller's base email.
	/// </summary>
	utility::string_t GetTargetEmail() const;
	void SetTargetEmail(const utility::string_t& Value);
	bool HasTargetEmail() const;

	/// <summary>
	/// Device identifier for session tracking.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;


protected:
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_TargetEmail;
	std::optional<utility::string_t> m_DeviceId;
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

	/// <summary>
	/// Optional. When set, exchange into a plus-addressed identity in the target
	/// tenant instead of the same email. Must be a passwordless plus-address variant
	/// of the caller's base email. Caller's domain + SSO provider must match a
	/// PlusAddressingDomains entry on the target tenant.
	/// </summary>
	utility::string_t GetTargetEmail() const;
	void SetTargetEmail(const utility::string_t& Value);
	bool HasTargetEmail() const;


protected:
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_TargetTenantName;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<utility::string_t> m_TargetEmail;
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
/// The interservice result of de-provisioning one tenant hostname. A slim contract DTO so
/// `Magnopus.Service.User.Contracts` need not reference `Magnopus.Logic.Tenant` (where the
/// `HostnameDeletionResult` it mirrors lives).
/// A successful response means the serving-mechanism resources were actually released — not merely that the
/// request was accepted. Failures come back as a non-success status code, never as a success with an empty
/// result, because a teardown that reports success without achieving it strands cloud quota that can no longer
/// be reached through the UI.
/// </summary>
class HostnameDeprovisionResponse : public csp::services::DtoBase
{
public:
	HostnameDeprovisionResponse();
	virtual ~HostnameDeprovisionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname that was de-provisioned.
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The hostname type that was torn down (`oko`, `nodey`, `nodey-next`), or `null` when
	/// nothing was recorded on the tenant.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Whether a typed hostname was recorded on the tenant. `false` means there was nothing to release,
	/// which is still a success — the operation is idempotent so a teardown can be safely re-run.
	/// </summary>
	bool GetFound() const;
	void SetFound(const bool& Value);
	bool HasFound() const;

	/// <summary>
	/// Whether the typed hostname was removed from the tenant document.
	/// </summary>
	bool GetRemoved() const;
	void SetRemoved(const bool& Value);
	bool HasRemoved() const;

	/// <summary>
	/// Whether the teardown is <b>still in progress</b> and must be polled to completion via
	/// `GET tenants/{tenant}/hostnames/{hostname}/deprovision-status`.
	/// True means the fast half is done — the CloudFront alias and the Route 53 record are released — but the
	/// distribution is still serving the larger certificate, so the SAN slot this teardown exists to reclaim is
	/// <b>not</b> free yet. A caller that treats a pending response as released will delete the tenant while the
	/// slot is still consumed, and the typed hostname carrying the replacement certificate's ARN will go with it.
	/// </summary>
	bool GetPending() const;
	void SetPending(const bool& Value);
	bool HasPending() const;

	/// <summary>
	/// Non-fatal problems encountered after the quota-consuming resources were released (e.g. a leftover DNS
	/// record, or an old certificate that could not be deleted yet). Empty on a fully clean teardown.
	/// </summary>
	const std::vector<utility::string_t>& GetWarnings() const;
	void SetWarnings(const std::vector<utility::string_t>& Value);
	bool HasWarnings() const;

	/// <summary>
	/// The cloud resources this teardown touched, keyed by a mechanism-specific name — for an `oko` host
	/// `RemovedCloudFrontAlias`, `ReissuedCertificateArn`, `RemainingSanCount`,
	/// `RemainingAliasCount` and `DeletedCertificateArn`; for `nodey-next``DeletedARecord`.
	/// Exists so the Aggregation-side teardown can audit <b>what</b> was released rather than merely that
	/// something was. The User service cannot write that record itself: the marketplace audit trail lives in
	/// Aggregation, alongside the teardown that is about to delete the tenant these identifiers belong to.
	/// `RemainingSanCount` / `RemainingAliasCount` are also what make the "both counts drop by one and
	/// stay equal" acceptance check verifiable after the fact instead of only live at the console.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetReleasedResources() const;
	void SetReleasedResources(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasReleasedResources() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<bool> m_Found;
	std::optional<bool> m_Removed;
	std::optional<bool> m_Pending;
	std::optional<std::vector<utility::string_t>> m_Warnings;
	std::optional<std::map<utility::string_t, utility::string_t>> m_ReleasedResources;
};

/// <summary>
/// Read-only diff between a tenant's hostnames and its `AllowedSsoRedirectUris`.
/// Used by Inspector to decide whether to surface the "Sync to SSO Redirects" button
/// and the orphan-redirect note on the Hostnames tab.
/// </summary>
class HostnameSsoDiffDto : public csp::services::DtoBase
{
public:
	HostnameSsoDiffDto();
	virtual ~HostnameSsoDiffDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Hostnames (typed or legacy) that have no matching `https://{hostname}` entry
	/// in `AllowedSsoRedirectUris`. The sync endpoint will add one URI per entry.
	/// </summary>
	const std::vector<utility::string_t>& GetMissingHostnames() const;
	void SetMissingHostnames(const std::vector<utility::string_t>& Value);
	bool HasMissingHostnames() const;

	/// <summary>
	/// Existing `AllowedSsoRedirectUris` entries whose authority doesn't correspond
	/// to any current hostname. Surfaced read-only — never auto-removed.
	/// </summary>
	const std::vector<utility::string_t>& GetOrphanRedirectUris() const;
	void SetOrphanRedirectUris(const std::vector<utility::string_t>& Value);
	bool HasOrphanRedirectUris() const;


protected:
	std::optional<std::vector<utility::string_t>> m_MissingHostnames;
	std::optional<std::vector<utility::string_t>> m_OrphanRedirectUris;
};

/// <summary>
/// Result of `SyncSsoRedirectsFromHostnames`: which URIs were added, and which
/// pre-existing entries remained orphaned (those are left in place, per the additive-only
/// sync policy).
/// </summary>
class HostnameSsoSyncResultDto : public csp::services::DtoBase
{
public:
	HostnameSsoSyncResultDto();
	virtual ~HostnameSsoSyncResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The `https://{hostname}` entries that the sync added.
	/// </summary>
	const std::vector<utility::string_t>& GetAddedRedirectUris() const;
	void SetAddedRedirectUris(const std::vector<utility::string_t>& Value);
	bool HasAddedRedirectUris() const;

	/// <summary>
	/// Existing redirect URIs whose authority doesn't correspond to any current hostname.
	/// Left in place by the sync flow; admins must manage them via the Settings tab.
	/// </summary>
	const std::vector<utility::string_t>& GetOrphanRedirectUris() const;
	void SetOrphanRedirectUris(const std::vector<utility::string_t>& Value);
	bool HasOrphanRedirectUris() const;


protected:
	std::optional<std::vector<utility::string_t>> m_AddedRedirectUris;
	std::optional<std::vector<utility::string_t>> m_OrphanRedirectUris;
};

/// <summary>
/// Bulk import request — the reverse of `export_billing_matrix.py`. Reuses the single-entry
/// create shape per row; each row is upserted by its (NodeKey, Dimensions) identity. CSV parsing is
/// deliberately kept out of the service — a client (the seed script or any tool) parses the export
/// CSV into this JSON. The whole batch bumps the matrix epoch at most once.
/// </summary>
class ImportTokenMatrixEntriesRequest : public csp::services::DtoBase
{
public:
	ImportTokenMatrixEntriesRequest();
	virtual ~ImportTokenMatrixEntriesRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The priced entries to upsert. Required (may be empty — a no-op import).
	/// </summary>
	const std::vector<std::shared_ptr<CreateTokenMatrixEntryRequest>>& GetEntries() const;
	void SetEntries(const std::vector<std::shared_ptr<CreateTokenMatrixEntryRequest>>& Value);
	bool HasEntries() const;

	/// <summary>
	/// Batch-level change note recorded on every created/updated row's history snapshot. A row's own
	/// Magnopus.Service.User.Dtos.CreateTokenMatrixEntryRequest.ChangeNote takes precedence when set.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<std::vector<std::shared_ptr<CreateTokenMatrixEntryRequest>>> m_Entries;
	std::optional<utility::string_t> m_ChangeNote;
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
/// The stored JIRA create schema for a project as seen by a client building the inline-create form:
/// every creatable issue type and its (projected) create fields. The browser maps each field's JIRA
/// schema type to a control (decision A). Magnopus.Logic.WatchTower.Dtos.JiraCreateMetaDto.UpdatedAt is the last refresh time (staleness).
/// </summary>
class JiraCreateMetaDto : public csp::services::DtoBase
{
public:
	JiraCreateMetaDto();
	virtual ~JiraCreateMetaDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key, e.g. `"CHS"`.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The creatable issue types and their create fields.
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& GetIssueTypes() const;
	void SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value);
	bool HasIssueTypes() const;

	/// <summary>
	/// When the collector last refreshed this schema.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaIssueType>>> m_IssueTypes;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// One create field's metadata, projected from a createmeta field entry. Carries the raw JIRA schema
/// bits
/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Type/Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Items/Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AutoComplete)
/// the browser maps to a control; the fat option lists (Components/Versions) are NOT inlined — they carry a
/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Ref pointing at a project-scoped reference list instead (kept small; the byte policy
/// lives in the collector).
/// </summary>
class JiraCreateMetaField : public csp::services::DtoBase
{
public:
	JiraCreateMetaField();
	virtual ~JiraCreateMetaField();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The field id you submit on create, e.g. `"summary"` or `"customfield_10005"`.
	/// </summary>
	utility::string_t GetFieldId() const;
	void SetFieldId(const utility::string_t& Value);
	bool HasFieldId() const;

	/// <summary>
	/// The human field name, e.g. `"Story Points"`.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Whether create requires this field (on CHS only `summary`/`project`/`issuetype` are).
	/// </summary>
	bool GetRequired() const;
	void SetRequired(const bool& Value);
	bool HasRequired() const;

	/// <summary>
	/// The JIRA schema type, e.g. `"string"` / `"number"` / `"option"` / `"user"` / `"array"`.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// For an array field, the element type (schema.items), e.g. `"option"` / `"component"` / `"version"`.
	/// </summary>
	utility::string_t GetItems() const;
	void SetItems(const utility::string_t& Value);
	bool HasItems() const;

	/// <summary>
	/// The custom-field type uri (schema.custom), or null for a system field.
	/// </summary>
	utility::string_t GetCustom() const;
	void SetCustom(const utility::string_t& Value);
	bool HasCustom() const;

	/// <summary>
	/// The system-field name (schema.system), or null for a custom field.
	/// </summary>
	utility::string_t GetSystem() const;
	void SetSystem(const utility::string_t& Value);
	bool HasSystem() const;

	/// <summary>
	/// True when the field enumerates candidates via a live search (createmeta's `autoCompleteUrl`, e.g. assignee) rather than inline
	/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AllowedValues.
	/// </summary>
	bool GetAutoComplete() const;
	void SetAutoComplete(const bool& Value);
	bool HasAutoComplete() const;

	/// <summary>
	/// Whether JIRA supplies a default value for this field on create.
	/// </summary>
	bool GetHasDefaultValue() const;
	void SetHasDefaultValue(const bool& Value);
	bool HasHasDefaultValue() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`) whose options this field draws from, or null when options are inline in
	/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AllowedValues (or the field has none).
	/// </summary>
	utility::string_t GetRef() const;
	void SetRef(const utility::string_t& Value);
	bool HasRef() const;

	/// <summary>
	/// The inline option set for a SMALL select (priority, team, severity, urgency). Empty when the field is free-text, a search
	/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AutoComplete), or externalized
	/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Ref).
	/// </summary>
	const std::vector<std::shared_ptr<JiraFieldOption>>& GetAllowedValues() const;
	void SetAllowedValues(const std::vector<std::shared_ptr<JiraFieldOption>>& Value);
	bool HasAllowedValues() const;


protected:
	std::optional<utility::string_t> m_FieldId;
	std::optional<utility::string_t> m_Name;
	std::optional<bool> m_Required;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Items;
	std::optional<utility::string_t> m_Custom;
	std::optional<utility::string_t> m_System;
	std::optional<bool> m_AutoComplete;
	std::optional<bool> m_HasDefaultValue;
	std::optional<utility::string_t> m_Ref;
	std::optional<std::vector<std::shared_ptr<JiraFieldOption>>> m_AllowedValues;
};

/// <summary>
/// One creatable issue type's create schema (a projection of JIRA's split createmeta
/// `/issue/createmeta/{project}/issuetypes/{id}`). Shared verbatim by the storage document, the
/// client Dto, and the collector upsert request (like Magnopus.Logic.WatchTower.Structures.JiraLink) — it is inert data the
/// collector projects down and the browser maps to form controls (decision A: the control vocabulary
/// lives in JS, not here).
/// </summary>
class JiraCreateMetaIssueType : public csp::services::DtoBase
{
public:
	JiraCreateMetaIssueType();
	virtual ~JiraCreateMetaIssueType();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The issue type name, e.g. `"Task"` / `"Story"` / `"Bug"` / `"Epic"`.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The JIRA issue type id, e.g. `"3"` for Task.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The create fields available for this issue type (projected — see Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField).
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaField>>& GetFields() const;
	void SetFields(const std::vector<std::shared_ptr<JiraCreateMetaField>>& Value);
	bool HasFields() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Id;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaField>>> m_Fields;
};

/// <summary>
/// Request body for the collector's createmeta refresh (find-then-replace by family+project).
/// </summary>
class JiraCreateMetaUpsertRequest : public csp::services::DtoBase
{
public:
	JiraCreateMetaUpsertRequest();
	virtual ~JiraCreateMetaUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key. Required.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The creatable issue types + projected fields to store. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& GetIssueTypes() const;
	void SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value);
	bool HasIssueTypes() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaIssueType>>> m_IssueTypes;
};

/// <summary>
/// A single selectable option (projected to just id + label; the fat source fields are dropped by the collector).
/// </summary>
class JiraFieldOption : public csp::services::DtoBase
{
public:
	JiraFieldOption();
	virtual ~JiraFieldOption();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The option id submitted on create.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The human label shown in the picker.
	/// </summary>
	utility::string_t GetLabel() const;
	void SetLabel(const utility::string_t& Value);
	bool HasLabel() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Label;
};

/// <summary>
/// A directed relationship between two JIRA issues, stored on the read-model and surfaced to the
/// client so a daigram can draw the edge without a second fetch. For a "Blocks" link,
/// Magnopus.Logic.WatchTower.Structures.JiraLink.From is the blocker key and Magnopus.Logic.WatchTower.Structures.JiraLink.To is the blocked key
/// (see the Phase-0 `blocks_edges` extraction).
/// </summary>
class JiraLink : public csp::services::DtoBase
{
public:
	JiraLink();
	virtual ~JiraLink();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The link type, e.g. `"blocks"`.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The source issue key (for a Blocks link, the blocker).
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The target issue key (for a Blocks link, the blocked issue).
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
};

/// <summary>
/// A project-scoped reference list (components/versions) as seen by a client typeahead.
/// </summary>
class JiraReferenceListDto : public csp::services::DtoBase
{
public:
	JiraReferenceListDto();
	virtual ~JiraReferenceListDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key, e.g. `"CHS"`.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The projected options.
	/// </summary>
	const std::vector<std::shared_ptr<JiraReferenceOption>>& GetOptions() const;
	void SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value);
	bool HasOptions() const;

	/// <summary>
	/// When the collector last refreshed this list.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<std::shared_ptr<JiraReferenceOption>>> m_Options;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// A single reference-list option, projected by the collector from its JIRA source (the fat
/// `self`/`ari`/`metadata` fields are dropped). One shape covers every kind — the nullable
/// extras are per-kind: versions carry
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Released/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Archived/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.ReleaseDate;
/// components carry Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Description; sprints carry
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.State; users reuse
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Id(=accountId)/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Name(=displayName).
/// Shared by the storage document, Dto, and upsert request.
/// </summary>
class JiraReferenceOption : public csp::services::DtoBase
{
public:
	JiraReferenceOption();
	virtual ~JiraReferenceOption();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The option id submitted on create.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// An optional description (components) — a tooltip candidate.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// The sprint state — `"active"` or `"future"` (sprints only; null otherwise). Lets the picker group/label active vs future sprints.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// Whether the version is released (versions only; null for components).
	/// </summary>
	bool GetReleased() const;
	void SetReleased(const bool& Value);
	bool HasReleased() const;

	/// <summary>
	/// Whether the version is archived (versions only; null for components).
	/// </summary>
	bool GetArchived() const;
	void SetArchived(const bool& Value);
	bool HasArchived() const;

	/// <summary>
	/// The version release date as JIRA's date string (`"yyyy-MM-dd"`), or null.
	/// </summary>
	utility::string_t GetReleaseDate() const;
	void SetReleaseDate(const utility::string_t& Value);
	bool HasReleaseDate() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_State;
	std::optional<bool> m_Released;
	std::optional<bool> m_Archived;
	std::optional<utility::string_t> m_ReleaseDate;
};

/// <summary>
/// Request body for the collector's reference-list refresh (find-then-replace by family+project+kind).
/// </summary>
class JiraReferenceUpsertRequest : public csp::services::DtoBase
{
public:
	JiraReferenceUpsertRequest();
	virtual ~JiraReferenceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key. Required.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`). Required.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The projected options to store (may be empty for a project with none). Non-null.
	/// </summary>
	const std::vector<std::shared_ptr<JiraReferenceOption>>& GetOptions() const;
	void SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value);
	bool HasOptions() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<std::shared_ptr<JiraReferenceOption>>> m_Options;
};

/// <summary>
/// Request body for bulk-get-by-keys (the client hydration read).
/// </summary>
class JiraResourceBulkGetRequest : public csp::services::DtoBase
{
public:
	JiraResourceBulkGetRequest();
	virtual ~JiraResourceBulkGetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The resource keys to fetch. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
};

/// <summary>
/// A WatchTower read-model entry as seen by a client hydrating a daigram: the out-of-band record a
/// durable element points at via its `contentRef { family, key }`. The client maps
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.Status/Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.StatusCategory to a colour/label as a
/// client-side overlay — this state never lands on the multiplayer object stream (decision #2).
/// </summary>
class JiraResourceDto : public csp::services::DtoBase
{
public:
	JiraResourceDto();
	virtual ~JiraResourceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The external resource key, e.g. `"CHS-123"`.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The issue summary / title.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// The workflow status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category key (`new` / `indeterminate` / `done`) — drives the status colour.
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The assignee display name, or null if unassigned.
	/// </summary>
	utility::string_t GetAssignee() const;
	void SetAssignee(const utility::string_t& Value);
	bool HasAssignee() const;

	/// <summary>
	/// The assignee's JIRA account id, or null if unassigned.
	/// </summary>
	utility::string_t GetAssigneeAccountId() const;
	void SetAssigneeAccountId(const utility::string_t& Value);
	bool HasAssigneeAccountId() const;

	/// <summary>
	/// The resolution name (e.g. `"Won't Do"`), or null while unresolved.
	/// </summary>
	utility::string_t GetResolution() const;
	void SetResolution(const utility::string_t& Value);
	bool HasResolution() const;

	/// <summary>
	/// The issue type (e.g. `"Story"`).
	/// </summary>
	utility::string_t GetIssueType() const;
	void SetIssueType(const utility::string_t& Value);
	bool HasIssueType() const;

	/// <summary>
	/// The project key prefix (e.g. `"CHS"`).
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The parent epic key, or null.
	/// </summary>
	utility::string_t GetEpic() const;
	void SetEpic(const utility::string_t& Value);
	bool HasEpic() const;

	/// <summary>
	/// The issue's relationships (e.g. Blocks edges).
	/// </summary>
	const std::vector<std::shared_ptr<JiraLink>>& GetLinks() const;
	void SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value);
	bool HasLinks() const;

	/// <summary>
	/// The daigram ids this resource is referenced by.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The source last-changed timestamp (JIRA's `fields.updated`), or null.
	/// </summary>
	utility::string_t GetSourceUpdatedAt() const;
	void SetSourceUpdatedAt(const utility::string_t& Value);
	bool HasSourceUpdatedAt() const;

	/// <summary>
	/// The source creation timestamp (JIRA's `fields.created`), or null for entries written
	/// before the field existed. The Today band's "created today" bucket reads this; when EVERY
	/// entry on a board is null the client omits the bucket rather than drawing an empty one.
	/// </summary>
	utility::string_t GetSourceCreatedAt() const;
	void SetSourceCreatedAt(const utility::string_t& Value);
	bool HasSourceCreatedAt() const;

	/// <summary>
	/// When this read-model entry was last written by the platform (the liveness cursor axis).
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Assignee;
	std::optional<utility::string_t> m_AssigneeAccountId;
	std::optional<utility::string_t> m_Resolution;
	std::optional<utility::string_t> m_IssueType;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Epic;
	std::optional<std::vector<std::shared_ptr<JiraLink>>> m_Links;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_SourceUpdatedAt;
	std::optional<utility::string_t> m_SourceCreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// Request body for the liveness search — resources tagged with any of Magnopus.Logic.WatchTower.Dtos.JiraResourceSearchRequest.Tags, changed since
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceSearchRequest.Since.
/// </summary>
class JiraResourceSearchRequest : public csp::services::DtoBase
{
public:
	JiraResourceSearchRequest();
	virtual ~JiraResourceSearchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram ids to match (ANY). Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The cursor from the previous poll (exclusive). Null = full set.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// Response for the liveness search: the changed items plus the cursor to pass as `since` next poll.
/// </summary>
class JiraResourceSearchResponse : public csp::services::DtoBase
{
public:
	JiraResourceSearchResponse();
	virtual ~JiraResourceSearchResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The matching resources (newest-written first).
	/// </summary>
	const std::vector<std::shared_ptr<JiraResourceDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<JiraResourceDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// The cursor for the next poll — captured server-side before the query, so nothing is missed.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<std::shared_ptr<JiraResourceDto>>> m_Items;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// A single resource in a bulk-upsert. Magnopus.Logic.WatchTower.Dtos.JiraResourceUpsertItem.Tags are ADDED to any existing tags (merge, not
/// replace).
/// </summary>
class JiraResourceUpsertItem : public csp::services::DtoBase
{
public:
	JiraResourceUpsertItem();
	virtual ~JiraResourceUpsertItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The external resource key, e.g. `"CHS-123"`. Required.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// Daigram ids to associate this resource with (merged into the existing tag set).
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The issue summary / title.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// The workflow status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category key (`new` / `indeterminate` / `done`).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The assignee display name, or null.
	/// </summary>
	utility::string_t GetAssignee() const;
	void SetAssignee(const utility::string_t& Value);
	bool HasAssignee() const;

	/// <summary>
	/// The assignee's JIRA account id, or null.
	/// </summary>
	utility::string_t GetAssigneeAccountId() const;
	void SetAssigneeAccountId(const utility::string_t& Value);
	bool HasAssigneeAccountId() const;

	/// <summary>
	/// The resolution name, or null.
	/// </summary>
	utility::string_t GetResolution() const;
	void SetResolution(const utility::string_t& Value);
	bool HasResolution() const;

	/// <summary>
	/// The issue type.
	/// </summary>
	utility::string_t GetIssueType() const;
	void SetIssueType(const utility::string_t& Value);
	bool HasIssueType() const;

	/// <summary>
	/// The project key prefix.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The parent epic key, or null.
	/// </summary>
	utility::string_t GetEpic() const;
	void SetEpic(const utility::string_t& Value);
	bool HasEpic() const;

	/// <summary>
	/// The issue's relationships (e.g. Blocks edges).
	/// </summary>
	const std::vector<std::shared_ptr<JiraLink>>& GetLinks() const;
	void SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value);
	bool HasLinks() const;

	/// <summary>
	/// The source last-changed timestamp (JIRA's `fields.updated`), or null.
	/// </summary>
	utility::string_t GetSourceUpdatedAt() const;
	void SetSourceUpdatedAt(const utility::string_t& Value);
	bool HasSourceUpdatedAt() const;

	/// <summary>
	/// The source creation timestamp (JIRA's `fields.created`), or null for older producers.
	/// </summary>
	utility::string_t GetSourceCreatedAt() const;
	void SetSourceCreatedAt(const utility::string_t& Value);
	bool HasSourceCreatedAt() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Assignee;
	std::optional<utility::string_t> m_AssigneeAccountId;
	std::optional<utility::string_t> m_Resolution;
	std::optional<utility::string_t> m_IssueType;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Epic;
	std::optional<std::vector<std::shared_ptr<JiraLink>>> m_Links;
	std::optional<utility::string_t> m_SourceUpdatedAt;
	std::optional<utility::string_t> m_SourceCreatedAt;
};

/// <summary>
/// Request body for a bulk-upsert of read-model entries (the collector/agent write path). Callers
/// should send only entries that actually changed — the poller diffs vs the read-model — because
/// every upsert advances the platform `UpdatedAt` that drives the liveness cursor.
/// </summary>
class JiraResourceUpsertRequest : public csp::services::DtoBase
{
public:
	JiraResourceUpsertRequest();
	virtual ~JiraResourceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The resources to upsert. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& Value);
	bool HasItems() const;


protected:
	std::optional<std::vector<std::shared_ptr<JiraResourceUpsertItem>>> m_Items;
};

/// <summary>
/// Outcome of a bulk-upsert: how many entries were created / updated / left unchanged.
/// </summary>
class JiraResourceUpsertResult : public csp::services::DtoBase
{
public:
	JiraResourceUpsertResult();
	virtual ~JiraResourceUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New read-model entries inserted.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing entries whose fields or tags changed.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing entries left untouched (nothing changed, tags already present).
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
};

/// <summary>
/// Outcome of a schema/reference upsert: whether the document was newly created + how many entries it now holds.
/// </summary>
class JiraSchemaUpsertResult : public csp::services::DtoBase
{
public:
	JiraSchemaUpsertResult();
	virtual ~JiraSchemaUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project the upsert targeted.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (null for a createmeta upsert).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// True if a new document was inserted; false if an existing one was replaced.
	/// </summary>
	bool GetCreated() const;
	void SetCreated(const bool& Value);
	bool HasCreated() const;

	/// <summary>
	/// The number of issue types (createmeta) or options (reference) stored.
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<bool> m_Created;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// The body of a join. One optional field, and it answers the same question the claim note
/// does — <i>why do you want it?</i> — so that whoever is holding the baton can see what they
/// are holding somebody up for.
///
/// ⚠ Nothing identity-shaped lives here. Who is getting in line comes from the token via
/// `AmbientContext`, never from the body.
/// </summary>
class JoinQueueRequest : public csp::services::DtoBase
{
public:
	JoinQueueRequest();
	virtual ~JoinQueueRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Why they want it. Free text, optional, trimmed and length-capped by the logic layer.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;


protected:
	std::optional<utility::string_t> m_Note;
};

/// <summary>
/// One object in a legacy Nodey bucket.
/// </summary>
class LegacyObjectDto : public csp::services::DtoBase
{
public:
	LegacyObjectDto();
	virtual ~LegacyObjectDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Object key, including the tenant prefix.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// Size in bytes.
	/// </summary>
	int64_t GetSize() const;
	void SetSize(int64_t Value);
	bool HasSize() const;

	/// <summary>
	/// Content type.
	/// </summary>
	utility::string_t GetContentType() const;
	void SetContentType(const utility::string_t& Value);
	bool HasContentType() const;

	/// <summary>
	/// Last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<int64_t> m_Size;
	std::optional<utility::string_t> m_ContentType;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// A page of a legacy bucket listing.
/// </summary>
class LegacyObjectPageDto : public csp::services::DtoBase
{
public:
	LegacyObjectPageDto();
	virtual ~LegacyObjectPageDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The bucket listed (a tenant override, or the platform default).
	/// </summary>
	utility::string_t GetBucket() const;
	void SetBucket(const utility::string_t& Value);
	bool HasBucket() const;

	/// <summary>
	/// Whether the bucket is the tenant's own override.
	/// </summary>
	bool GetTenantOverride() const;
	void SetTenantOverride(const bool& Value);
	bool HasTenantOverride() const;

	/// <summary>
	/// Objects on this page.
	/// </summary>
	const std::vector<std::shared_ptr<LegacyObjectDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<LegacyObjectDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// Token for the next page, or null at the end.
	/// </summary>
	utility::string_t GetNextPageToken() const;
	void SetNextPageToken(const utility::string_t& Value);
	bool HasNextPageToken() const;


protected:
	std::optional<utility::string_t> m_Bucket;
	std::optional<bool> m_TenantOverride;
	std::optional<std::vector<std::shared_ptr<LegacyObjectDto>>> m_Items;
	std::optional<utility::string_t> m_NextPageToken;
};

/// <summary>
/// A provider-neutral generation request.
/// </summary>
class LlmGenerateRequest : public csp::services::DtoBase
{
public:
	LlmGenerateRequest();
	virtual ~LlmGenerateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// The agent's system instruction.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// The conversation, oldest first. Must end with a user turn.
	/// </summary>
	const std::vector<std::shared_ptr<LlmMessage>>& GetMessages() const;
	void SetMessages(const std::vector<std::shared_ptr<LlmMessage>>& Value);
	bool HasMessages() const;

	/// <summary>
	/// Sampling temperature; null = provider default.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// Output token cap; null = gateway default.
	/// </summary>
	int32_t GetMaxOutputTokens() const;
	void SetMaxOutputTokens(int32_t Value);
	bool HasMaxOutputTokens() const;

	/// <summary>
	/// Ask the provider for a JSON object response where it supports that.
	/// </summary>
	bool GetJsonResponse() const;
	void SetJsonResponse(const bool& Value);
	bool HasJsonResponse() const;

	/// <summary>
	/// Which swarm agent is calling — logged, so a runaway agent is attributable.
	/// </summary>
	utility::string_t GetAgentId() const;
	void SetAgentId(const utility::string_t& Value);
	bool HasAgentId() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<std::vector<std::shared_ptr<LlmMessage>>> m_Messages;
	std::optional<double> m_Temperature;
	std::optional<int32_t> m_MaxOutputTokens;
	std::optional<bool> m_JsonResponse;
	std::optional<utility::string_t> m_AgentId;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// A provider-neutral generation result.
/// </summary>
class LlmGenerateResponse : public csp::services::DtoBase
{
public:
	LlmGenerateResponse();
	virtual ~LlmGenerateResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The generated text.
	/// </summary>
	utility::string_t GetText() const;
	void SetText(const utility::string_t& Value);
	bool HasText() const;

	/// <summary>
	/// The model that answered.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Prompt tokens, when the provider reports them.
	/// </summary>
	int32_t GetInputTokens() const;
	void SetInputTokens(int32_t Value);
	bool HasInputTokens() const;

	/// <summary>
	/// Output tokens, when the provider reports them.
	/// </summary>
	int32_t GetOutputTokens() const;
	void SetOutputTokens(int32_t Value);
	bool HasOutputTokens() const;

	/// <summary>
	/// Why generation stopped, in the provider's words.
	/// </summary>
	utility::string_t GetFinishReason() const;
	void SetFinishReason(const utility::string_t& Value);
	bool HasFinishReason() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back; absent on a build that
	/// does not decode, which is how the SPA notices that the model was shown base64. Null when the
	/// request was plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Text;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_Provider;
	std::optional<int32_t> m_InputTokens;
	std::optional<int32_t> m_OutputTokens;
	std::optional<utility::string_t> m_FinishReason;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// One turn in an LLM conversation.
/// </summary>
class LlmMessage : public csp::services::DtoBase
{
public:
	LlmMessage();
	virtual ~LlmMessage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// `user` or `assistant`.
	/// </summary>
	utility::string_t GetRole() const;
	void SetRole(const utility::string_t& Value);
	bool HasRole() const;

	/// <summary>
	/// Plain text content.
	/// </summary>
	utility::string_t GetText() const;
	void SetText(const utility::string_t& Value);
	bool HasText() const;


protected:
	std::optional<utility::string_t> m_Role;
	std::optional<utility::string_t> m_Text;
};

/// <summary>
/// One provider as the UI sees it.
/// </summary>
class LlmProviderDto : public csp::services::DtoBase
{
public:
	LlmProviderDto();
	virtual ~LlmProviderDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id: `google`, `anthropic` or `openai`.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Whether a key is configured in this environment.
	/// </summary>
	bool GetConfigured() const;
	void SetConfigured(const bool& Value);
	bool HasConfigured() const;

	/// <summary>
	/// Suggested model ids.
	/// </summary>
	const std::vector<utility::string_t>& GetModels() const;
	void SetModels(const std::vector<utility::string_t>& Value);
	bool HasModels() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<bool> m_Configured;
	std::optional<std::vector<utility::string_t>> m_Models;
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

	/// <summary>
	/// The redirect URI that the caller intends to redirect to after login.
	/// When provided, the backend validates it against the tenant's configured hostnames.
	/// </summary>
	utility::string_t GetRedirectUri() const;
	void SetRedirectUri(const utility::string_t& Value);
	bool HasRedirectUri() const;


protected:
	std::optional<utility::string_t> m_Tenant;
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_UserName;
	std::optional<utility::string_t> m_Password;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<bool> m_VerifiedAgeEighteen;
	std::optional<std::shared_ptr<TokenOptions>> m_TokenOptions;
	std::optional<utility::string_t> m_RedirectUri;
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

	/// <summary>
	/// The redirect URI that the caller intends to redirect to after login.
	/// When provided, the backend validates it against the tenant's configured hostnames.
	/// </summary>
	utility::string_t GetRedirectUri() const;
	void SetRedirectUri(const utility::string_t& Value);
	bool HasRedirectUri() const;


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
	std::optional<utility::string_t> m_RedirectUri;
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
/// The interservice view of a tenant's typed hostname: just the fields the async provisioning recipes need to
/// drive and confirm a subdomain. A slim contract DTO so `Magnopus.Service.User.Contracts` need not
/// reference `Magnopus.Logic.Tenant` (where the persisted `TypedHostname` lives).
/// </summary>
class MarketplaceHostnameResponse : public csp::services::DtoBase
{
public:
	MarketplaceHostnameResponse();
	virtual ~MarketplaceHostnameResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname.
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The hostname type (`oko` or `nodey`).
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The current DNS-stage status (e.g. `cert_pending`, `deploying`, `dns_pending`,
	/// `verified`, `insync`, `error`). The recipe polls this until it reaches a ready value.
	/// </summary>
	utility::string_t GetDnsStatus() const;
	void SetDnsStatus(const utility::string_t& Value);
	bool HasDnsStatus() const;

	/// <summary>
	/// Why provisioning last failed, in terms an operator can act on, or null if there is no outstanding
	/// failure. Carried across the service boundary so the recipe's failure and its audit record can name the
	/// cause instead of only reporting that the hostname "reached an error DNS state".
	/// </summary>
	utility::string_t GetFailureReason() const;
	void SetFailureReason(const utility::string_t& Value);
	bool HasFailureReason() const;

	/// <summary>
	/// The coarse classification behind Magnopus.Service.User.Dtos.MarketplaceHostnameResponse.FailureReason — `cname-conflict`,
	/// `cert-failed`, `quota`, `transient` or `unknown`.
	/// </summary>
	utility::string_t GetFailureKind() const;
	void SetFailureKind(const utility::string_t& Value);
	bool HasFailureKind() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_DnsStatus;
	std::optional<utility::string_t> m_FailureReason;
	std::optional<utility::string_t> m_FailureKind;
};

/// <summary>
/// Internal-service request to provision a tenant + admin for a marketplace onboarding. The User service
/// derives the tenant system name from the fragments, creates the tenant and its admin (with the email
/// pre-confirmed, since SSO verified it), and assigns the admin role. The caller never supplies the tenant
/// name or the admin roles — those are derived/fixed server-side.
/// </summary>
class MarketplaceTenantProvisionRequest : public csp::services::DtoBase
{
public:
	MarketplaceTenantProvisionRequest();
	virtual ~MarketplaceTenantProvisionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The validated company URL fragment (also stored on the tenant).
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The validated project URL fragment (also stored on the tenant).
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The SSO-verified admin email; the admin profile is created with this email pre-confirmed.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// Optional display/company name for the tenant.
	/// </summary>
	utility::string_t GetCompanyName() const;
	void SetCompanyName(const utility::string_t& Value);
	bool HasCompanyName() const;

	/// <summary>
	/// The SPA's device id, used to issue the new admin's first session (token 3) in the same call. The
	/// provisioner mints a one-time key + exchanges it for the admin so the response carries a ready session.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	/// <summary>
	/// Optional. The quota tier the new tenant is born on. `null` (or blank) means "use the historical
	/// default", i.e. exactly what console- and seed-created tenants get.
	/// This exists so a marketplace tenant is born on ITS PLAN'S tier. The quota tier names were reused as
	/// marketplace billing sizes (client apps could not absorb new tier names), so the historical default —
	/// literally `"tenant"` — is also the name of the LARGEST billing size. A marketplace tenant created
	/// on the default therefore meters as the most expensive plan from the moment it exists until provisioning
	/// re-tiers it after the human-paced consent step, which is a real customer-visible over-metering
	/// (observed in gcmp on 2026-08-13). The caller resolves the plan's tier up front and supplies it here so
	/// the wrong tier is never written at all.
	/// Advisory, not authoritative: an unmapped plan resolves to `null` here and onboarding continues.
	/// The authoritative, fail-loud assignment stays where it was — `AssignTierForPlan` at provisioning,
	/// which blocks entitlement approval when the plan has no tier mapping.
	/// </summary>
	utility::string_t GetInitialTierName() const;
	void SetInitialTierName(const utility::string_t& Value);
	bool HasInitialTierName() const;


protected:
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<utility::string_t> m_InitialTierName;
};

/// <summary>
/// The result of provisioning a marketplace tenant + admin: the created tenant's id and derived system name,
/// the new admin's user id, and the admin's first authenticated session (token 3), minted in-process so the
/// caller can hand a ready session to the SPA's federated login path.
/// </summary>
class MarketplaceTenantProvisionResponse : public csp::services::DtoBase
{
public:
	MarketplaceTenantProvisionResponse();
	virtual ~MarketplaceTenantProvisionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The created tenant's id.
	/// </summary>
	utility::string_t GetTenantId() const;
	void SetTenantId(const utility::string_t& Value);
	bool HasTenantId() const;

	/// <summary>
	/// The derived tenant system name (e.g. `ACME_GLOB_01`).
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The created (or reused) admin profile's user id.
	/// </summary>
	utility::string_t GetAdminUserId() const;
	void SetAdminUserId(const utility::string_t& Value);
	bool HasAdminUserId() const;

	std::shared_ptr<AuthDto> GetAuth() const;
	void SetAuth(const std::shared_ptr<AuthDto>& Value);
	bool HasAuth() const;


protected:
	std::optional<utility::string_t> m_TenantId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_AdminUserId;
	std::optional<std::shared_ptr<AuthDto>> m_Auth;
};

/// <summary>
/// How a matrix entry turns a node's measured dimensions into cost. Both kinds are modeled now;
/// slice 1 only resolves Magnopus.Service.User.Dtos.MatrixCostKind.Fixed. Shared contract type (referenced by documents,
/// DTOs, and the interservice client) so it lives in the Contracts assembly.
/// </summary>
class MatrixCostKind : public csp::services::EnumBase
{
public:
	MatrixCostKind();
	virtual ~MatrixCostKind();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eMatrixCostKind
	{
		FIXED,
		RATE

	};

	eMatrixCostKind GetValue() const;
	void SetValue(eMatrixCostKind const Value);

protected:
	eMatrixCostKind Value = {};
};

/// <summary>
/// Response DTO for one rejected row in a Magnopus.Service.User.Dtos.MatrixImportResultDto.
/// </summary>
class MatrixImportFailureDto : public csp::services::DtoBase
{
public:
	MatrixImportFailureDto();
	virtual ~MatrixImportFailureDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Zero-based index of the row in the submitted batch.
	/// </summary>
	int32_t GetIndex() const;
	void SetIndex(int32_t Value);
	bool HasIndex() const;

	/// <summary>
	/// The row's node key.
	/// </summary>
	utility::string_t GetNodeKey() const;
	void SetNodeKey(const utility::string_t& Value);
	bool HasNodeKey() const;

	/// <summary>
	/// The row's dimensions.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetDimensions() const;
	void SetDimensions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasDimensions() const;

	/// <summary>
	/// Why the row was rejected.
	/// </summary>
	utility::string_t GetReason() const;
	void SetReason(const utility::string_t& Value);
	bool HasReason() const;


protected:
	std::optional<int32_t> m_Index;
	std::optional<utility::string_t> m_NodeKey;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Dimensions;
	std::optional<utility::string_t> m_Reason;
};

/// <summary>
/// Response DTO for a bulk matrix-entry import (Magnopus.Service.User.Logic.MatrixImportResult).
/// </summary>
class MatrixImportResultDto : public csp::services::DtoBase
{
public:
	MatrixImportResultDto();
	virtual ~MatrixImportResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Rows inserted as new matrix entries.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing rows whose cost/metadata changed and were updated.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing rows with no effectual change — left untouched.
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;

	/// <summary>
	/// Rows that failed validation.
	/// </summary>
	const std::vector<std::shared_ptr<MatrixImportFailureDto>>& GetFailed() const;
	void SetFailed(const std::vector<std::shared_ptr<MatrixImportFailureDto>>& Value);
	bool HasFailed() const;

	/// <summary>
	/// The global matrix epoch after the import.
	/// </summary>
	int64_t GetEpoch() const;
	void SetEpoch(int64_t Value);
	bool HasEpoch() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
	std::optional<std::vector<std::shared_ptr<MatrixImportFailureDto>>> m_Failed;
	std::optional<int64_t> m_Epoch;
};

/// <summary>
/// Data transfer object for a per-tier price override of a matrix entry. The matrix row carries the
/// always-present default-tier cost; this carries only the per-tier delta. Resolution is
/// `override(tier) ?? base`.
/// </summary>
class MatrixTierPriceOverrideDto : public csp::services::DtoBase
{
public:
	MatrixTierPriceOverrideDto();
	virtual ~MatrixTierPriceOverrideDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// FK to the matrix entry id this override applies to.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// FK to the tier id (the stable QuotaTier id, not the tier name).
	/// </summary>
	utility::string_t GetTierId() const;
	void SetTierId(const utility::string_t& Value);
	bool HasTierId() const;

	/// <summary>
	/// Override fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Override per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the override is enabled (a disabled override falls back to the base cost).
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<utility::string_t> m_TierId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Response DTO for a Magnopus.Service.User.DataAccess.Models.MatrixTierPriceOverrideHistoryDocument.
/// </summary>
class MatrixTierPriceOverrideHistoryDto : public csp::services::DtoBase
{
public:
	MatrixTierPriceOverrideHistoryDto();
	virtual ~MatrixTierPriceOverrideHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Live override id.
	/// </summary>
	utility::string_t GetOverrideId() const;
	void SetOverrideId(const utility::string_t& Value);
	bool HasOverrideId() const;

	/// <summary>
	/// Version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: matrix entry id.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// Snapshot: tier id.
	/// </summary>
	utility::string_t GetTierId() const;
	void SetTierId(const utility::string_t& Value);
	bool HasTierId() const;

	/// <summary>
	/// Snapshot: override fixed cost.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Snapshot: override rate.
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_OverrideId;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<utility::string_t> m_TierId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
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
/// A saved session with its payload.
/// </summary>
class MiningSessionDto : public csp::services::DtoBase
{
public:
	MiningSessionDto();
	virtual ~MiningSessionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The SPA's session JSON, verbatim.
	/// </summary>
	utility::string_t GetPayload() const;
	void SetPayload(const utility::string_t& Value);
	bool HasPayload() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back. A build that does not
	/// decode leaves it absent, which is how the SPA notices a replica that ignored the marker and
	/// stored base64 where the text should be. Null when the request was plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;

	/// <summary>
	/// Session id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status at save time.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Payload size in characters.
	/// </summary>
	int64_t GetPayloadLength() const;
	void SetPayloadLength(int64_t Value);
	bool HasPayloadLength() const;

	/// <summary>
	/// Created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Payload;
	std::optional<utility::string_t> m_Encoding;
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<int64_t> m_PayloadLength;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// Body of a session create or update.
/// </summary>
class MiningSessionSaveRequest : public csp::services::DtoBase
{
public:
	MiningSessionSaveRequest();
	virtual ~MiningSessionSaveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Display name. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The SPA's session JSON. Required.
	/// </summary>
	utility::string_t GetPayload() const;
	void SetPayload(const utility::string_t& Value);
	bool HasPayload() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Payload;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// A saved session as it appears in the list — no payload.
/// </summary>
class MiningSessionSummaryDto : public csp::services::DtoBase
{
public:
	MiningSessionSummaryDto();
	virtual ~MiningSessionSummaryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Session id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status at save time.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Payload size in characters.
	/// </summary>
	int64_t GetPayloadLength() const;
	void SetPayloadLength(int64_t Value);
	bool HasPayloadLength() const;

	/// <summary>
	/// Created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<int64_t> m_PayloadLength;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

class MiningSessionSummaryDtoDataPage : public csp::services::DtoBase
{
public:
	MiningSessionSummaryDtoDataPage();
	virtual ~MiningSessionSummaryDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<MiningSessionSummaryDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
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
/// Internal-service request to provision a tenant + admin for an <b>organization-initiated</b> spin-up:
/// an org admin creating a further workspace under an organization that already has a subscription.
///
/// <b>A sibling of `MarketplaceTenantProvisionRequest` rather than flags on it (D27.)</b> The two
/// contracts share a mechanism but not a shape, and the differences are all subtractions that would
/// otherwise have to be expressed as "ignore this field when that flag is set":
/// <list type="bullet"><item>no `DeviceId` — no session is minted, because the requester is already signed in to the
/// administrative tenant and stays there;</item><item>no `InitialTierName` — the tier is the organization's, resolved rather than cascaded, and
/// a tenant-level assignment would shadow it permanently. See the response type's remarks.</item></list>
/// </summary>
class OrganizationTenantProvisionRequest : public csp::services::DtoBase
{
public:
	OrganizationTenantProvisionRequest();
	virtual ~OrganizationTenantProvisionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The company URL fragment, <b>inherited from the organization</b> rather than collected. The caller
	/// resolves it (from the organization, falling back to its administrative tenant) and passes it here;
	/// this endpoint does not reach into the organization store.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment the org admin chose. Already validated and pre-checked for collision by
	/// the caller; the fragment-pair unique index is the race backstop behind that.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The admin email for the new tenant — in practice the requesting org admin's own address, so that
	/// they can sign in to the new workspace with the identity they already use.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// Optional display/company name for the tenant.
	/// </summary>
	utility::string_t GetCompanyName() const;
	void SetCompanyName(const utility::string_t& Value);
	bool HasCompanyName() const;


protected:
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_CompanyName;
};

/// <summary>
/// The result of provisioning an organization-initiated tenant + admin: the created tenant's id and
/// derived system name, and the admin profile's user id.
///
/// <b>Deliberately carries no session.</b> Its marketplace sibling returns one because that flow's buyer
/// arrives with no account at all and the wizard has to land them inside the workspace it just created.
/// An org admin is already authenticated in the administrative tenant, is not going anywhere, and would
/// have no use for a second session — so minting one would be an unused credential issued on every
/// spin-up, and treating its failure as fatal (as the marketplace flow correctly does) would fail
/// spin-ups for a step that served no purpose.
/// </summary>
class OrganizationTenantProvisionResponse : public csp::services::DtoBase
{
public:
	OrganizationTenantProvisionResponse();
	virtual ~OrganizationTenantProvisionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The created tenant's id.
	/// </summary>
	utility::string_t GetTenantId() const;
	void SetTenantId(const utility::string_t& Value);
	bool HasTenantId() const;

	/// <summary>
	/// The derived tenant system name (e.g. `ACME_LOBBY_01`).
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The created (or reused) admin profile's user id.
	/// </summary>
	utility::string_t GetAdminUserId() const;
	void SetAdminUserId(const utility::string_t& Value);
	bool HasAdminUserId() const;


protected:
	std::optional<utility::string_t> m_TenantId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_AdminUserId;
};

/// <summary>
/// Somebody on the roster, as the grid sees them.
/// </summary>
class PersonDto : public csp::services::DtoBase
{
public:
	PersonDto();
	virtual ~PersonDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Their id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Their name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The department they sit in.
	/// </summary>
	utility::string_t GetDepartmentId() const;
	void SetDepartmentId(const utility::string_t& Value);
	bool HasDepartmentId() const;

	/// <summary>
	/// Their title, one of their department's ladder entries (or blank).
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Expected weekly hours — the denominator of every utilization figure.
	/// </summary>
	double GetWeeklyCapacityHours() const;
	void SetWeeklyCapacityHours(double Value);
	bool HasWeeklyCapacityHours() const;

	/// <summary>
	/// Whether they are on the roster today.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;

	/// <summary>
	/// Where they are based — one of Magnopus.Logic.ProductionRoster.Dtos.RosterConfigDto.Locations, or absent for
	/// Unspecified.
	///
	/// ⚠ <b>Absent, not empty string.</b> The API omits nulls on the wire, so most people have
	/// no `location` key at all until the import script runs. The client must read a
	/// missing key as Unspecified rather than as a filter miss — the contract records this in
	/// `nullsAreOmittedOnTheWire`.
	/// </summary>
	utility::string_t GetLocation() const;
	void SetLocation(const utility::string_t& Value);
	bool HasLocation() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DepartmentId;
	std::optional<utility::string_t> m_Title;
	std::optional<double> m_WeeklyCapacityHours;
	std::optional<bool> m_IsActive;
	std::optional<utility::string_t> m_Location;
};

/// <summary>
/// Request body for creating or editing a person.
/// </summary>
class PersonUpsertRequest : public csp::services::DtoBase
{
public:
	PersonUpsertRequest();
	virtual ~PersonUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Their name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The department they sit in. Required — the grid groups by it.
	/// </summary>
	utility::string_t GetDepartmentId() const;
	void SetDepartmentId(const utility::string_t& Value);
	bool HasDepartmentId() const;

	/// <summary>
	/// Their title. Optional, and <b>validated against their department's ladder</b> when
	/// present (§3.1) — a title that is not on the ladder would render under a divider the
	/// department does not have.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Expected weekly hours.
	///
	/// ⚠ <b>No default, deliberately</b> (§5.4): capacity is not uniform — there are 16h and
	/// 37.5h people among the 40h majority — and a default here is how that becomes uniform by
	/// accident.
	/// </summary>
	double GetWeeklyCapacityHours() const;
	void SetWeeklyCapacityHours(double Value);
	bool HasWeeklyCapacityHours() const;

	/// <summary>
	/// Whether they are on the roster today.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;

	/// <summary>
	/// Where they are based. Optional, and <b>validated against the list `GET /config`
	/// serves</b> when present — the same shape as Magnopus.Logic.ProductionRoster.Dtos.PersonUpsertRequest.Title, which is validated
	/// against its department's ladder rather than accepted as free text.
	///
	/// An empty string and a null both mean Unspecified, and both are stored as null so there
	/// is one representation of "nobody has said". Two would make the import script's
	/// "unmatched" report lie.
	/// </summary>
	utility::string_t GetLocation() const;
	void SetLocation(const utility::string_t& Value);
	bool HasLocation() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DepartmentId;
	std::optional<utility::string_t> m_Title;
	std::optional<double> m_WeeklyCapacityHours;
	std::optional<bool> m_IsActive;
	std::optional<utility::string_t> m_Location;
};

/// <summary>
/// Request body for batched plus-address identity discovery — "which of my plus-address
/// identities exist in each of these tenants?".
/// A POST rather than a GET because the payload is a list: an array of tenant names in a query
/// string runs into URL length limits and array-encoding ambiguity. This follows the existing
/// POST-as-query precedent in the platform (e.g. the WatchTower `bulk-get` endpoints).
/// </summary>
class PlusAddressIdentitiesBatchRequest : public csp::services::DtoBase
{
public:
	PlusAddressIdentitiesBatchRequest();
	virtual ~PlusAddressIdentitiesBatchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenants to discover identities in. At least one, at most
	/// Magnopus.Service.User.Dtos.PlusAddressIdentitiesBatchRequest.MaxTenantNames. Duplicates are collapsed.
	/// </summary>
	const std::vector<utility::string_t>& GetTenantNames() const;
	void SetTenantNames(const std::vector<utility::string_t>& Value);
	bool HasTenantNames() const;


protected:
	std::optional<std::vector<utility::string_t>> m_TenantNames;
};

/// <summary>
/// Response body for batched plus-address identity discovery.
/// </summary>
class PlusAddressIdentitiesBatchResponse : public csp::services::DtoBase
{
public:
	PlusAddressIdentitiesBatchResponse();
	virtual ~PlusAddressIdentitiesBatchResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Identities keyed by the tenant name exactly as it was requested, so the caller can index
	/// straight back into its own list.
	/// EVERY requested tenant gets a key. A tenant that does not exist, is locked, has no
	/// plus-addressing configured for the caller's domain and provider, or simply holds no
	/// variants for this caller all come back the same way: an empty list. That uniformity is
	/// deliberate — it keeps the batch shape from becoming a tenant-existence oracle.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<PlusAddressIdentityDto>>>& GetIdentitiesByTenant() const;
	void SetIdentitiesByTenant(const std::map<utility::string_t, std::vector<std::shared_ptr<PlusAddressIdentityDto>>>& Value);
	bool HasIdentitiesByTenant() const;


protected:
	std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<PlusAddressIdentityDto>>>> m_IdentitiesByTenant;
};

/// <summary>
/// Represents a plus-addressed identity variant available for the current user.
/// Returned by the plus-address discovery endpoint.
/// </summary>
class PlusAddressIdentityDto : public csp::services::DtoBase
{
public:
	PlusAddressIdentityDto();
	virtual ~PlusAddressIdentityDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The email address of this identity variant.
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// The display name of this identity variant.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The plus-address suffix (e.g., "mag.support"), or null for the base account.
	/// </summary>
	utility::string_t GetSuffix() const;
	void SetSuffix(const utility::string_t& Value);
	bool HasSuffix() const;

	/// <summary>
	/// The roles assigned to this identity variant.
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	void SetRoles(const std::vector<utility::string_t>& Value);
	bool HasRoles() const;


protected:
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Suffix;
	std::optional<std::vector<utility::string_t>> m_Roles;
};

/// <summary>
/// Represents a domain + SSO provider pair eligible for plus-address identity switching.
/// When configured on a tenant, users with emails in this domain who log in via the
/// specified SSO provider will be offered the identity picker for switching between
/// plus-addressed accounts (e.g., jane.doe@magnopus.com -> jane.doe+mag.support@magnopus.com).
/// </summary>
class PlusAddressingDomainEntry : public csp::services::DtoBase
{
public:
	PlusAddressingDomainEntry();
	virtual ~PlusAddressingDomainEntry();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Email domain eligible for plus-address switching. E.g., "magnopus.com".
	/// </summary>
	utility::string_t GetDomain() const;
	void SetDomain(const utility::string_t& Value);
	bool HasDomain() const;

	/// <summary>
	/// SSO provider required for plus-address switching on this domain.
	/// Must match the auth provider claim in the JWT. E.g., "Google".
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;


protected:
	std::optional<utility::string_t> m_Domain;
	std::optional<utility::string_t> m_Provider;
};

/// <summary>
/// A named grouping of pricing overrides applied to a tenant, on top of whatever that tenant's tier
/// already resolves to. A sheet is <b>derived, never cloned</b>: it stores a Magnopus.Service.User.Dtos.PricingSheetDto.Multiplier
/// and a sparse set of Magnopus.Service.User.Dtos.PricingSheetExceptionDtos rather than a copy of the matrix, so a
/// row priced after the sheet was created is discounted with no per-customer action. Resolution is
/// `sheetException ?? (multiplier x (tierOverride ?? base))`.
/// The multiplier applies to the tenant's <i>own</i> resolved price, not to a named base tier's — which
/// is what makes a sheet such as "20% Discount" reusable across customers on any tier.
/// </summary>
class PricingSheetDto : public csp::services::DtoBase
{
public:
	PricingSheetDto();
	virtual ~PricingSheetDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name, e.g. "20% Discount" or "Sphere Custom".
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Multiplier applied to the tenant's resolved cost. `1` is no discount; `0.8` is 20%
	/// off; `0` prices everything free (the flat-private-offer construction). Does <b>not</b>
	/// apply to `apikey` rows, which carry no multiplier and can only be overridden outright.
	/// </summary>
	double GetMultiplier() const;
	void SetMultiplier(double Value);
	bool HasMultiplier() const;

	/// <summary>
	/// `Draft` or `Published`. A `Draft` sheet is ignored by the rating path entirely,
	///             so a half-configured sheet never bills an assigned tenant.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Whether the sheet is enabled (a disabled sheet resolves as though unassigned).
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<double> m_Multiplier;
	std::optional<utility::string_t> m_Status;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// A single row-level exception on a Magnopus.Service.User.Dtos.PricingSheetDto — "on this sheet, this matrix row
/// costs exactly this", bypassing the sheet's multiplier for that row only. Sparse: a row with no
/// exception takes the multiplied price, so an exception is never required and can never leave a hole.
/// A <b>disabled</b> exception falls through to the multiplied value, not to the entry's base cost.
/// </summary>
class PricingSheetExceptionDto : public csp::services::DtoBase
{
public:
	PricingSheetExceptionDto();
	virtual ~PricingSheetExceptionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// FK to the pricing sheet this exception belongs to.
	/// </summary>
	utility::string_t GetPricingSheetId() const;
	void SetPricingSheetId(const utility::string_t& Value);
	bool HasPricingSheetId() const;

	/// <summary>
	/// FK to the matrix entry id this exception applies to.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// Exception fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Exception per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the exception is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_PricingSheetId;
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Response DTO for a pricing-sheet-exception history snapshot.
/// </summary>
class PricingSheetExceptionHistoryDto : public csp::services::DtoBase
{
public:
	PricingSheetExceptionHistoryDto();
	virtual ~PricingSheetExceptionHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Live exception id.
	/// </summary>
	utility::string_t GetExceptionId() const;
	void SetExceptionId(const utility::string_t& Value);
	bool HasExceptionId() const;

	/// <summary>
	/// Version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: pricing sheet id.
	/// </summary>
	utility::string_t GetPricingSheetId() const;
	void SetPricingSheetId(const utility::string_t& Value);
	bool HasPricingSheetId() const;

	/// <summary>
	/// Snapshot: matrix entry id.
	/// </summary>
	utility::string_t GetMatrixEntryId() const;
	void SetMatrixEntryId(const utility::string_t& Value);
	bool HasMatrixEntryId() const;

	/// <summary>
	/// Snapshot: exception fixed cost.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Snapshot: exception rate.
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_ExceptionId;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_PricingSheetId;
	std::optional<utility::string_t> m_MatrixEntryId;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
};

/// <summary>
/// Response DTO for a pricing-sheet history snapshot.
/// </summary>
class PricingSheetHistoryDto : public csp::services::DtoBase
{
public:
	PricingSheetHistoryDto();
	virtual ~PricingSheetHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Live sheet id.
	/// </summary>
	utility::string_t GetPricingSheetId() const;
	void SetPricingSheetId(const utility::string_t& Value);
	bool HasPricingSheetId() const;

	/// <summary>
	/// Version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Snapshot: multiplier.
	/// </summary>
	double GetMultiplier() const;
	void SetMultiplier(double Value);
	bool HasMultiplier() const;

	/// <summary>
	/// Snapshot: Draft or Published.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_PricingSheetId;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_Name;
	std::optional<double> m_Multiplier;
	std::optional<utility::string_t> m_Status;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
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
/// Admin-oriented lightweight profile DTO for bulk id → identity resolution.
/// Slimmer than Magnopus.Service.User.Dtos.ProfileDto, but unlike Magnopus.Service.User.Dtos.ProfileLiteDto it
/// carries `Email` plus the admin-relevant fields needed to label/inspect many
/// users at once (e.g. the Inspector "Top Users per Key" view). Returned only by
/// MagnopusSuperUsers-gated, cross-tenant endpoints.
/// </summary>
class ProfileAdminLiteDto : public csp::services::DtoBase
{
public:
	ProfileAdminLiteDto();
	virtual ~ProfileAdminLiteDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for this instance
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The user's email address — the required label for admin lists (display names
	/// are rarely populated in our system).
	/// </summary>
	utility::string_t GetEmail() const;
	bool HasEmail() const;

	/// <summary>
	/// The optional display name of the user.
	/// </summary>
	utility::string_t GetDisplayName() const;
	bool HasDisplayName() const;

	/// <summary>
	/// The authorization roles assigned to the user.
	/// </summary>
	const std::vector<utility::string_t>& GetRoles() const;
	bool HasRoles() const;

	/// <summary>
	/// The tenant the user belongs to (the multi-tenant tenant of the profile document).
	/// Important identity context for cross-tenant admin lists.
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// Confirmation status of the email address.
	/// </summary>
	bool GetIsEmailConfirmed() const;
	bool HasIsEmailConfirmed() const;

	/// <summary>
	/// User account lock status.
	/// </summary>
	bool GetLocked() const;
	bool HasLocked() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<std::vector<utility::string_t>> m_Roles;
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_IsEmailConfirmed;
	std::optional<bool> m_Locked;
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

	/// <summary>
	/// Whether this profile can never be reached by a password. Read-only: it is set by seeding, and
	/// is deliberately not mapped back from the DTO, so no round-trip of this object can clear it.
	/// </summary>
	bool GetPasswordLoginDisabled() const;
	bool HasPasswordLoginDisabled() const;


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
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedBy;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<bool> m_Locked;
	std::optional<bool> m_PasswordLoginDisabled;
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
/// A project, as the picker and the by-project view see it.
/// </summary>
class ProjectDto : public csp::services::DtoBase
{
public:
	ProjectDto();
	virtual ~ProjectDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Its name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The swatch the grid tints its cells with, as `#RRGGBB`.
	/// </summary>
	utility::string_t GetColour() const;
	void SetColour(const utility::string_t& Value);
	bool HasColour() const;

	/// <summary>
	/// Whether the project is still live.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Colour;
	std::optional<bool> m_IsActive;
};

/// <summary>
/// Request body for creating or editing a project.
/// </summary>
class ProjectUpsertRequest : public csp::services::DtoBase
{
public:
	ProjectUpsertRequest();
	virtual ~ProjectUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project's name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The swatch, as `#RGB` or `#RRGGBB`. Optional; the client falls back to a
	/// derived colour.
	///
	/// ⚠ <b>Validated in the logic layer, not just length-capped here</b>: it is written into a
	/// style attribute on the client, so anything that is not a hex colour is a string a
	/// coworker typed reaching a CSS context.
	/// </summary>
	utility::string_t GetColour() const;
	void SetColour(const utility::string_t& Value);
	bool HasColour() const;

	/// <summary>
	/// Whether the project is still live.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Colour;
	std::optional<bool> m_IsActive;
};

/// <summary>
/// One person waiting, as the detail view's queue card sees them.
///
/// ⚠ <b>Magnopus.Logic.Baton.Dtos.QueueEntryDto.Position is DERIVED and never stored</b> (baton-plan.md §5.3). It is the
/// index in an `EnqueuedAt` ordering, computed when the queue is read. Storing an integer
/// position turns every leave into a renumbering write across the whole queue, and renumbering
/// is where these systems corrupt.
/// </summary>
class QueueEntryDto : public csp::services::DtoBase
{
public:
	QueueEntryDto();
	virtual ~QueueEntryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The queue entry's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Who is waiting.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Their name as the queue snapshotted it. Rendered through `user-name-cache.js` like
	/// every other name in Baton, so this is the immediate value rather than the final one (D21).
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// When they joined. <b>This is the ordering.</b>
	/// </summary>
	utility::string_t GetEnqueuedAt() const;
	void SetEnqueuedAt(const utility::string_t& Value);
	bool HasEnqueuedAt() const;

	/// <summary>
	/// Why they want it, if they said.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;

	/// <summary>
	/// Their place in line, 1-based. Derived — see the class remarks.
	/// </summary>
	int32_t GetPosition() const;
	void SetPosition(int32_t Value);
	bool HasPosition() const;

	/// <summary>
	/// `true` when the baton is currently being held open for this person. Exactly one
	///             entry in a queue can carry it, and only while the window is live.
	/// </summary>
	bool GetIsReserved() const;
	void SetIsReserved(const bool& Value);
	bool HasIsReserved() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_UserName;
	std::optional<utility::string_t> m_EnqueuedAt;
	std::optional<utility::string_t> m_Note;
	std::optional<int32_t> m_Position;
	std::optional<bool> m_IsReserved;
};

/// <summary>
/// <b>What happened</b> — the body of a join or a leave, and of the 409 that refuses one.
///             Deliberately the same shape as Magnopus.Logic.Baton.Dtos.ClaimOutcomeDto: the UI branches on
///             Magnopus.Logic.Baton.Dtos.QueueOutcomeDto.Outcome and renders the system from Magnopus.Logic.Baton.Dtos.QueueOutcomeDto.System, never
///             from what it sent.
/// </summary>
class QueueOutcomeDto : public csp::services::DtoBase
{
public:
	QueueOutcomeDto();
	virtual ~QueueOutcomeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// What happened, as one of Magnopus.Logic.Baton.Dtos.QueueOutcomes.
	/// </summary>
	utility::string_t GetOutcome() const;
	void SetOutcome(const utility::string_t& Value);
	bool HasOutcome() const;

	std::shared_ptr<SystemDto> GetSystem() const;
	void SetSystem(const std::shared_ptr<SystemDto>& Value);
	bool HasSystem() const;

	/// <summary>
	/// The caller's place in line after the operation, 1-based, or `null` when they are no
	/// longer in it. <b>"Where do I stand" is half of story S3</b>, so a join that could not say
	/// it would have delivered the list and not the promise.
	/// </summary>
	int32_t GetPosition() const;
	void SetPosition(int32_t Value);
	bool HasPosition() const;

	/// <summary>
	/// How many people are waiting, after the operation.
	/// </summary>
	int32_t GetQueueDepth() const;
	void SetQueueDepth(int32_t Value);
	bool HasQueueDepth() const;

	/// <summary>
	/// A plain sentence, for API and agent callers. The SPA composes its own copy.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_Outcome;
	std::optional<std::shared_ptr<SystemDto>> m_System;
	std::optional<int32_t> m_Position;
	std::optional<int32_t> m_QueueDepth;
	std::optional<utility::string_t> m_Message;
};

/// <summary>
/// Per-tier quota limit configuration for inline editing on secret definitions.
/// Used by the Inspector secret definition modal to bundle tier configs with the save request.
/// Aggregation maps these to QuotaFeatureTierDto and upserts via the Tracking service.
/// </summary>
class QuotaFeatureTierConfigItem : public csp::services::DtoBase
{
public:
	QuotaFeatureTierConfigItem();
	virtual ~QuotaFeatureTierConfigItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tier name to apply this configuration to.
	/// </summary>
	utility::string_t GetTierName() const;
	void SetTierName(const utility::string_t& Value);
	bool HasTierName() const;

	/// <summary>
	/// Limit at this tier. Null = unlimited, 0 = blocked.
	/// </summary>
	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	/// <summary>
	/// Period for counting: 0 = Total (lifetime), 1 = CalendarMonth, 2 = Hours24.
	/// Matches QuotaSumByPeriod enum values.
	/// </summary>
	int32_t GetPeriod() const;
	void SetPeriod(int32_t Value);
	bool HasPeriod() const;

	/// <summary>
	/// Whether reductions count toward the limit.
	/// </summary>
	bool GetAllowReductions() const;
	void SetAllowReductions(const bool& Value);
	bool HasAllowReductions() const;

	/// <summary>
	/// Whether this feature is active at this tier.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Whether limits are enforced (vs. track-only / observing mode).
	/// </summary>
	bool GetLimitsEnforced() const;
	void SetLimitsEnforced(const bool& Value);
	bool HasLimitsEnforced() const;

	/// <summary>
	/// Optional category for UI grouping.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;


protected:
	std::optional<utility::string_t> m_TierName;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_Period;
	std::optional<bool> m_AllowReductions;
	std::optional<bool> m_Enabled;
	std::optional<bool> m_LimitsEnforced;
	std::optional<utility::string_t> m_Category;
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
/// Internal-service request to record a typed hostname whose DNS + TLS are provisioned OUTSIDE the AWS
/// `DnsManagementLogic` flow — e.g. the Nodey subdomain, whose record is written by external-dns and
/// whose certificate is a GKE `ManagedCertificate`. The User service performs no AWS work for this
/// request; it only upserts the typed hostname on the tenant so the read side (Apps page, Hostnames tab)
/// reflects it. Idempotent on Magnopus.Service.User.Dtos.RegisterExternalHostnameRequest.Hostname.
/// </summary>
class RegisterExternalHostnameRequest : public csp::services::DtoBase
{
public:
	RegisterExternalHostnameRequest();
	virtual ~RegisterExternalHostnameRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname to record (e.g. `nodey.acme-corp.acme.oko.live`).
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The hostname type (`nodey`).
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The DNS-stage status to record. Must be a value the read side understands (terminal `verified` /
	/// `insync` / `active`, or an intermediate `cert_pending` / `dns_pending` / `deploying`).
	/// </summary>
	utility::string_t GetDnsStatus() const;
	void SetDnsStatus(const utility::string_t& Value);
	bool HasDnsStatus() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_DnsStatus;
};

/// <summary>
/// DTO for the revoked JTI set sync endpoint, consumed by Nodey polling
/// </summary>
class RevokedJtiSetDto : public csp::services::DtoBase
{
public:
	RevokedJtiSetDto();
	virtual ~RevokedJtiSetDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The set of revoked JTI values for API keys that have not yet expired
	/// </summary>
	const std::vector<utility::string_t>& GetJtis() const;
	bool HasJtis() const;

	/// <summary>
	/// When this set was generated
	/// </summary>
	utility::string_t GetGeneratedAt() const;
	bool HasGeneratedAt() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Jtis;
	std::optional<utility::string_t> m_GeneratedAt;
};

/// <summary>
/// Studio policy the client renders by, served from one place.
///
/// ★ <b>The utilization thresholds are served, not duplicated into the client</b> (§3.3). They
/// are a studio policy that will be argued about, and the argument should happen in one place.
/// They are <b>not</b> a feature flag and <b>not</b> environment-gated — they are configuration
/// data, which is a different thing.
/// </summary>
class RosterConfigDto : public csp::services::DtoBase
{
public:
	RosterConfigDto();
	virtual ~RosterConfigDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The day a week starts on, as a name (`"Monday"`).
	///
	/// §10 D5's recommendation, taken: <b>Monday, served from here</b> rather than configurable.
	/// It is served rather than hardcoded in the client so that making it configurable later is
	/// a change to one value, not a hunt for the places that assumed Monday. A string rather
	/// than a `DayOfWeek` because the wire form of an enum depends on serializer settings
	/// the client cannot see.
	/// </summary>
	utility::string_t GetWeekStartDay() const;
	void SetWeekStartDay(const utility::string_t& Value);
	bool HasWeekStartDay() const;

	/// <summary>
	/// Below this percentage of capacity a person reads as under-utilized. 70 today.
	/// </summary>
	int32_t GetUnderUtilizedBelowPercent() const;
	void SetUnderUtilizedBelowPercent(int32_t Value);
	bool HasUnderUtilizedBelowPercent() const;

	/// <summary>
	/// Above this percentage a person reads as over-booked. 115 today.
	/// </summary>
	int32_t GetOverBookedAbovePercent() const;
	void SetOverBookedAbovePercent(int32_t Value);
	bool HasOverBookedAbovePercent() const;

	/// <summary>
	/// The locations a person can be based in, in the order the form and the filter pills
	/// render them. `["US", "UK", "Remote"]` today.
	///
	/// ★ <b>Served rather than hardcoded in the client</b>, on exactly the argument that put the
	/// thresholds here (§3.3): it is studio policy, the studio will argue about it, and the
	/// argument should happen in one place. A fourth office is then one constant rather than a
	/// hunt through a form, a filter row and a validator.
	/// ⚠ <b>"Unspecified" is NOT in this list.</b> It is the absence of a value, and the client
	/// adds it to the form and the filter itself. Putting it here would make it assignable, and
	/// a person explicitly set to Unspecified is indistinguishable from one nobody has got to
	/// yet — which is the distinction the import script's report depends on.
	/// </summary>
	const std::vector<utility::string_t>& GetLocations() const;
	void SetLocations(const std::vector<utility::string_t>& Value);
	bool HasLocations() const;

	/// <summary>
	/// The one multiplayer Group every roster client attaches to, or `null` until one is
	/// provisioned (§7.4). The client needs it to know what to attach to; it is served here
	/// rather than discovered so that there is exactly one answer.
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;


protected:
	std::optional<utility::string_t> m_WeekStartDay;
	std::optional<int32_t> m_UnderUtilizedBelowPercent;
	std::optional<int32_t> m_OverBookedAbovePercent;
	std::optional<std::vector<utility::string_t>> m_Locations;
	std::optional<utility::string_t> m_GroupId;
};

/// <summary>
/// ★ <b>Everything the grid draws, in ONE response</b> (§4.3).
///
/// The grid's first load and its refresh pulse both need the same five things, and they used to
/// be five parallel requests. One per tick per open client is five times the connections, five
/// sets of auth and rate-limit accounting, and — the part that actually matters — <b>five
/// independently-timed reads of one logical state</b>. A person deleted between the people read
/// and the assignments read leaves the client holding bookings for somebody who is not on the
/// roster. Collecting them server-side makes the tick one request and one answer.
/// ⚠ <b>Every list is nullable, and absence is meaningful.</b> The caller names which types it
/// wants; a type it did not ask for comes back as an <b>absent key</b> (the API omits nulls on
/// the wire), which is deliberately distinguishable from an empty list — "I did not ask" and
/// "there are none" must not collapse, or a client that requested only assignments would read
/// the missing people as <i>the studio is empty</i> and blank the grid.
/// </summary>
class RosterSnapshotDto : public csp::services::DtoBase
{
public:
	RosterSnapshotDto();
	virtual ~RosterSnapshotDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<RosterConfigDto> GetConfig() const;
	void SetConfig(const std::shared_ptr<RosterConfigDto>& Value);
	bool HasConfig() const;

	/// <summary>
	/// The departments with their ordered title ladders, when `departments` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<DepartmentDto>>& GetDepartments() const;
	void SetDepartments(const std::vector<std::shared_ptr<DepartmentDto>>& Value);
	bool HasDepartments() const;

	/// <summary>
	/// The whole roster, when `people` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<PersonDto>>& GetPeople() const;
	void SetPeople(const std::vector<std::shared_ptr<PersonDto>>& Value);
	bool HasPeople() const;

	/// <summary>
	/// The projects, when `projects` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<ProjectDto>>& GetProjects() const;
	void SetProjects(const std::vector<std::shared_ptr<ProjectDto>>& Value);
	bool HasProjects() const;

	/// <summary>
	/// The bookings in the requested day range, when `assignments` was requested.
	///
	/// ⚠ Requesting this type without `from`/`to` is a <b>400</b>, not an unbounded
	/// read: the roster is a studio's whole history and "every assignment ever" is never what a
	/// caller meant.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetAssignments() const;
	void SetAssignments(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasAssignments() const;


protected:
	std::optional<std::shared_ptr<RosterConfigDto>> m_Config;
	std::optional<std::vector<std::shared_ptr<DepartmentDto>>> m_Departments;
	std::optional<std::vector<std::shared_ptr<PersonDto>>> m_People;
	std::optional<std::vector<std::shared_ptr<ProjectDto>>> m_Projects;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Assignments;
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
/// Request object for toggling the MagnopusOwned flag on multiple secrets at once
/// </summary>
class SetMagnopusOwnedBatchRequest : public csp::services::DtoBase
{
public:
	SetMagnopusOwnedBatchRequest();
	virtual ~SetMagnopusOwnedBatchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Key names to update
	/// </summary>
	const std::vector<utility::string_t>& GetKeyNames() const;
	void SetKeyNames(const std::vector<utility::string_t>& Value);
	bool HasKeyNames() const;

	/// <summary>
	/// Whether the secrets should be marked as Magnopus-owned
	/// </summary>
	bool GetIsMagnopusOwned() const;
	void SetIsMagnopusOwned(const bool& Value);
	bool HasIsMagnopusOwned() const;


protected:
	std::optional<std::vector<utility::string_t>> m_KeyNames;
	std::optional<bool> m_IsMagnopusOwned;
};

/// <summary>
/// Request object for toggling the MagnopusOwned flag on a single secret
/// </summary>
class SetMagnopusOwnedRequest : public csp::services::DtoBase
{
public:
	SetMagnopusOwnedRequest();
	virtual ~SetMagnopusOwnedRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the secret should be marked as Magnopus-owned
	/// </summary>
	bool GetIsMagnopusOwned() const;
	void SetIsMagnopusOwned(const bool& Value);
	bool HasIsMagnopusOwned() const;


protected:
	std::optional<bool> m_IsMagnopusOwned;
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
/// Fields required to capture a verified identity from a social authentication provider WITHOUT creating a
/// session or requiring a tenant. Unlike Magnopus.Service.User.Dtos.LoginSocialRequest, this exchanges the provider's
/// authorization code only to confirm the verified email + provider user id — it does not look up or create a
/// profile, issue tokens, or touch a tenant. Used by the pre-tenant marketplace onboarding flow.
/// </summary>
class SocialIdentityCaptureRequest : public csp::services::DtoBase
{
public:
	SocialIdentityCaptureRequest();
	virtual ~SocialIdentityCaptureRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the social authentication provider (e.g. "Google").
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// The name of the client, if the provider has client-specific configuration (defaults to "Web").
	/// </summary>
	utility::string_t GetClient() const;
	void SetClient(const utility::string_t& Value);
	bool HasClient() const;

	/// <summary>
	/// The provider's authorization code to exchange (must be valid and unexpired).
	/// </summary>
	utility::string_t GetToken() const;
	void SetToken(const utility::string_t& Value);
	bool HasToken() const;

	/// <summary>
	/// The redirect URI used in the original OAuth flow (must match what the provider was given).
	/// </summary>
	utility::string_t GetOAuthRedirectUri() const;
	void SetOAuthRedirectUri(const utility::string_t& Value);
	bool HasOAuthRedirectUri() const;

	/// <summary>
	/// Optional id of the user with the social provider, when needed.
	/// </summary>
	utility::string_t GetOptionalProviderUserId() const;
	void SetOptionalProviderUserId(const utility::string_t& Value);
	bool HasOptionalProviderUserId() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Client;
	std::optional<utility::string_t> m_Token;
	std::optional<utility::string_t> m_OAuthRedirectUri;
	std::optional<utility::string_t> m_OptionalProviderUserId;
};

/// <summary>
/// A verified identity captured from a social authentication provider: the confirmed email and the provider's
/// stable subject id. Returned by the identity-capture endpoint with no session or tenant attached.
/// </summary>
class SocialIdentityDto : public csp::services::DtoBase
{
public:
	SocialIdentityDto();
	virtual ~SocialIdentityDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The verified email address from the provider.
	/// </summary>
	utility::string_t GetEmailAddress() const;
	void SetEmailAddress(const utility::string_t& Value);
	bool HasEmailAddress() const;

	/// <summary>
	/// The provider's stable user/subject id (e.g. the Google subject).
	/// </summary>
	utility::string_t GetProviderUserId() const;
	void SetProviderUserId(const utility::string_t& Value);
	bool HasProviderUserId() const;


protected:
	std::optional<utility::string_t> m_EmailAddress;
	std::optional<utility::string_t> m_ProviderUserId;
};

/// <summary>
/// The caller's own stable subject id for a single social provider, returned by the self-scoped
/// `GET users/me/social/{provider}/id` endpoint. Deliberately narrow — it exposes only the provider's
/// subject id (e.g. the Google `sub`) for the authenticated caller, never for another user, so it is not
/// an enumeration surface. Distinct from Magnopus.Service.User.Dtos.SocialIdentityDto, which also carries the email and is
/// produced by the fresh identity-capture flow.
/// </summary>
class SocialProviderIdDto : public csp::services::DtoBase
{
public:
	SocialProviderIdDto();
	virtual ~SocialProviderIdDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The social provider name the id belongs to (e.g. `Google`).
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// The provider's stable user/subject id for the caller (e.g. the Google subject).
	/// </summary>
	utility::string_t GetProviderUserId() const;
	void SetProviderUserId(const utility::string_t& Value);
	bool HasProviderUserId() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_ProviderUserId;
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

class SortDirection : public csp::services::EnumBase
{
public:
	SortDirection();
	virtual ~SortDirection();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eSortDirection
	{
		ASCENDING,
		DESCENDING

	};

	eSortDirection GetValue() const;
	void SetValue(eSortDirection const Value);

protected:
	eSortDirection Value = {};
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
/// Request body for registering a system.
///
/// ⚠ <b>The duplicate-name guard is the unique index, not this class.</b> ASP.NET validation runs
/// before the action, so a blank name is a 400 from here — but "a system called SPHERE-01 already
/// exists" is decided by `Unique_Tenant_Name` when the insert lands. Checking first and then
/// inserting is the same race as a read-then-write take (baton-plan.md §5.1, §6).
/// </summary>
class SystemCreateRequest : public csp::services::DtoBase
{
public:
	SystemCreateRequest();
	virtual ~SystemCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The thing people say out loud ("SPHERE-01"). Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is, so the list reads as our estate rather than a set of hostnames.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// How long the queue head's exclusive window lasts. Omit for
	/// Magnopus.Logic.Baton.DataAccess.Model.SystemDocument.DefaultGracePeriodMinutes (an hour — people are in meetings).
	///
	/// ⚠ <b>Lane C consumes this</b>, so it is settable from the first create rather than
	/// retro-fitted later (baton-plan.md D18, §15.2).
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// Optional. A Slack channel id (`C0123ABCD`) or `#name` for this system's
	/// notifications. Empty or absent means the app-wide default channel.
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<utility::string_t> m_ChannelId;
};

/// <summary>
/// A system as the list and detail views see it. One of these renders a whole row — the system,
/// its holder, its queue depth and the first few names in line — so a page is one round trip
/// rather than an N+1 across collections (baton-plan.md §8.2).
///
/// ⚠ <b>Display names here are a snapshot, and the client does not render them directly.</b>
/// The SPA resolves ids through `user-name-cache.js` so a renamed user shows their new
/// name; Magnopus.Logic.Baton.Dtos.SystemDto.CurrentHolderName exists because it is the server-side <i>filter</i> key
/// (baton-plan.md D21).
/// </summary>
class SystemDto : public csp::services::DtoBase
{
public:
	SystemDto();
	virtual ~SystemDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The system's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The thing people say out loud. Unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// Optional thumbnail Prototype id.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;

	/// <summary>
	/// Optional Slack channel for this system's notifications, or `null` for the app-wide
	/// default. See `SystemDocument.ChannelId`.
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;

	/// <summary>
	/// Whether this system has been retired. Archiving is a <b>soft</b> delete — history has to
	/// outlive the system — so an archived system is absent from the list but still resolvable
	/// by id, and a detail view reached from history needs to be able to say so.
	/// </summary>
	bool GetIsArchived() const;
	void SetIsArchived(const bool& Value);
	bool HasIsArchived() const;

	/// <summary>
	/// Who holds the baton, or `null` when it is free.
	/// </summary>
	utility::string_t GetCurrentHolderId() const;
	void SetCurrentHolderId(const utility::string_t& Value);
	bool HasCurrentHolderId() const;

	/// <summary>
	/// The holder's name as snapshotted at take time. See the class remarks.
	/// </summary>
	utility::string_t GetCurrentHolderName() const;
	void SetCurrentHolderName(const utility::string_t& Value);
	bool HasCurrentHolderName() const;

	/// <summary>
	/// Why they have it.
	/// </summary>
	utility::string_t GetCurrentNote() const;
	void SetCurrentNote(const utility::string_t& Value);
	bool HasCurrentNote() const;

	/// <summary>
	/// When the current hold started.
	/// </summary>
	utility::string_t GetHeldSince() const;
	void SetHeldSince(const utility::string_t& Value);
	bool HasHeldSince() const;

	/// <summary>
	/// When the baton was last passed. The free-row sort key.
	/// </summary>
	utility::string_t GetLastReleasedAt() const;
	void SetLastReleasedAt(const utility::string_t& Value);
	bool HasLastReleasedAt() const;

	/// <summary>
	/// Who the baton is currently being held open for, or `null`.
	/// </summary>
	utility::string_t GetReservedForUserId() const;
	void SetReservedForUserId(const utility::string_t& Value);
	bool HasReservedForUserId() const;

	/// <summary>
	/// When that exclusive window lapses.
	/// </summary>
	utility::string_t GetReservedUntil() const;
	void SetReservedUntil(const utility::string_t& Value);
	bool HasReservedUntil() const;

	/// <summary>
	/// The reserved person's snapshotted name, so a reserved row reads as a person rather than
	/// as an id in the microtask before `user-name-cache.js` answers (D21).
	/// </summary>
	utility::string_t GetReservedForName() const;
	void SetReservedForName(const utility::string_t& Value);
	bool HasReservedForName() const;

	/// <summary>
	/// How long this system's queue-head window lasts.
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// How many people are waiting.
	/// </summary>
	int32_t GetQueueDepth() const;
	void SetQueueDepth(int32_t Value);
	bool HasQueueDepth() const;

	/// <summary>
	/// The first three names in line, for the row's "next up" summary.
	/// </summary>
	const std::vector<utility::string_t>& GetQueueHeadNames() const;
	void SetQueueHeadNames(const std::vector<utility::string_t>& Value);
	bool HasQueueHeadNames() const;

	/// <summary>
	/// The ids behind Magnopus.Logic.Baton.Dtos.SystemDto.QueueHeadNames, in the same order — <b>what lets the row's
	/// queue faces be pictures rather than monograms</b>. Lane E's face factory skips the
	/// lookup when it has no id, so before this the queue was monograms by data gap rather than
	/// by choice.
	/// </summary>
	const std::vector<utility::string_t>& GetQueueHeadUserIds() const;
	void SetQueueHeadUserIds(const std::vector<utility::string_t>& Value);
	bool HasQueueHeadUserIds() const;

	/// <summary>
	/// Whether the <b>caller</b> is in this system's queue.
	///
	/// ⚠ <b>Per-request, and computed for a whole page in ONE query</b> — the alternative is an
	/// N+1 across the list, which is the thing the denormalized summary above exists to avoid.
	/// It is a boolean rather than a position on purpose: an exact position needs the whole
	/// queue of every system on the page, and the row does not need it. "Where do I stand" is
	/// answered exactly by the join response and by the detail view's queue card, and
	/// approximately — for free — by the caller finding itself in
	/// Magnopus.Logic.Baton.Dtos.SystemDto.QueueHeadUserIds.
	/// </summary>
	bool GetViewerQueued() const;
	void SetViewerQueued(const bool& Value);
	bool HasViewerQueued() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
	std::optional<utility::string_t> m_ChannelId;
	std::optional<bool> m_IsArchived;
	std::optional<utility::string_t> m_CurrentHolderId;
	std::optional<utility::string_t> m_CurrentHolderName;
	std::optional<utility::string_t> m_CurrentNote;
	std::optional<utility::string_t> m_HeldSince;
	std::optional<utility::string_t> m_LastReleasedAt;
	std::optional<utility::string_t> m_ReservedForUserId;
	std::optional<utility::string_t> m_ReservedUntil;
	std::optional<utility::string_t> m_ReservedForName;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<int32_t> m_QueueDepth;
	std::optional<std::vector<utility::string_t>> m_QueueHeadNames;
	std::optional<std::vector<utility::string_t>> m_QueueHeadUserIds;
	std::optional<bool> m_ViewerQueued;
};

class SystemDtoDataPage : public csp::services::DtoBase
{
public:
	SystemDtoDataPage();
	virtual ~SystemDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SystemDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SystemDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<SystemDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Request body for setting a system's picture: the id of the Prototype whose Thumbnail asset
/// holds the image.
///
/// <b>Metadata only — the image itself never passes through Baton.</b> The SPA uploads the
/// bytes straight to the Prototype service and then tells Baton which prototype to point at.
/// That keeps this assembly free of a Prototype client (and of the blob-handling that comes with
/// one), and it is the same division daigrammar's thumbnail uses.
/// ⚠ <b>The access control that makes the picture visible to a second person lives on the
/// PROTOTYPE, not here</b> (baton-plan.md D19: read AND write set to everyone, so a system needs
/// no owner concept). Baton stores a reference; it cannot widen or narrow who can see the image,
/// and it should not try.
/// </summary>
class SystemThumbnailRequest : public csp::services::DtoBase
{
public:
	SystemThumbnailRequest();
	virtual ~SystemThumbnailRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Prototype id whose `Thumbnail` asset detail holds the picture. Required, and
	/// validated as a well-formed id — a junk value here would be stored happily and then render
	/// as a permanently absent picture that nothing explains.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;


protected:
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
};

/// <summary>
/// Request body for editing a system's metadata: name, description, url and the grace window.
///
/// ⚠ <b>The grace window is editable, and the endpoint table in baton-plan.md §8.1 says
/// "Name / description / url".</b> §7 and D18 are explicit that `GracePeriodMinutes` is
/// "set at create, editable per system" — a rig that turns over in minutes wants a short window
/// and a box someone needs a morning on wants a long one. The table is the stale half; it was
/// written before D18. Flagged rather than silently resolved.
/// </summary>
class SystemUpdateRequest : public csp::services::DtoBase
{
public:
	SystemUpdateRequest();
	virtual ~SystemUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The system's name. Required, and still unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// The queue head's exclusive window. Omit to leave the current value alone.
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// Optional Slack channel. <b>Sent empty, it clears the override</b> and the system falls back
	/// to the default channel — the same shape as the other editable fields, where absent means
	/// "make it absent".
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<utility::string_t> m_ChannelId;
};

/// <summary>
/// The body of a take. One field, and it is optional — <b>the note answers "why do you have
/// it?"</b>, which is the question a coworker who finds a system held for three days actually
/// has (story S5).
///
/// ⚠ Nothing identity-shaped lives here. Who is taking the baton comes from the token via
/// `AmbientContext`, never from the body — a lock whose holder is whatever the client
/// claimed is not a lock.
/// </summary>
class TakeBatonRequest : public csp::services::DtoBase
{
public:
	TakeBatonRequest();
	virtual ~TakeBatonRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Why the caller wants it. Free text, optional, trimmed and length-capped by the logic layer.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;


protected:
	std::optional<utility::string_t> m_Note;
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
/// Tenant settings that any authenticated member of the tenant may read.
///
/// Deliberately separate from Magnopus.Logic.Tenant.Dtos.TenantSelfDto, which is the tenant-admin
/// portal projection and sits behind an admin role. This one is readable by every user
/// of the tenant, so nothing belongs here unless it is safe for all of them to see:
/// behaviour flags a client is expected to obey qualify, anything identifying,
/// contactable or operational does not.
///
/// Exists because the clients that have to honour these settings run as ordinary users.
/// A flag stored on the tenant but readable only through an admin-gated route cannot be
/// enforced by the code that needs it.
/// </summary>
class TenantClientSettingsDto : public csp::services::DtoBase
{
public:
	TenantClientSettingsDto();
	virtual ~TenantClientSettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether a Shot Context is required before executing a graph containing
	/// generative nodes. Null on the document is normalised to false here, matching the
	/// `!= true` shape the other nullable tenant flags are consumed with.
	/// </summary>
	bool GetRequireShotContext() const;
	void SetRequireShotContext(const bool& Value);
	bool HasRequireShotContext() const;

	/// <summary>
	/// Which shot-context sources this tenant's graphs may use: "shot", "shotgrid".
	/// Passed through uncoerced, unlike Magnopus.Logic.Tenant.Dtos.TenantClientSettingsDto.RequireShotContext above: null
	/// means "unspecified" and lets the client apply its own default, while an empty
	/// array means none. Normalising null to empty here would silently turn shot
	/// context off for every tenant that has never set the field.
	/// </summary>
	const std::vector<utility::string_t>& GetShotContextSources() const;
	void SetShotContextSources(const std::vector<utility::string_t>& Value);
	bool HasShotContextSources() const;


protected:
	std::optional<bool> m_RequireShotContext;
	std::optional<std::vector<utility::string_t>> m_ShotContextSources;
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
	/// Globally unique — a hostname resolves to exactly one tenant. Use
	/// Magnopus.Logic.Tenant.Dtos.TenantDto.LoginRedirectHostAllowList for post-login redirect targets.
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
	/// Host authorities a login flow may redirect back to after authenticating against this
	/// tenant (the `redirect_uri` given to the federated login page). Entries are bare
	/// hosts or `host:port`, e.g. ["app.client.com", "localhost:4200"]. Not unique across
	/// tenants — several tenants may share a redirect target. This is the complete enforced set:
	/// the tenant's mapped/typed hostnames are copied in here when configured rather than being
	/// allowed implicitly.
	/// </summary>
	const std::vector<utility::string_t>& GetLoginRedirectHostAllowList() const;
	void SetLoginRedirectHostAllowList(const std::vector<utility::string_t>& Value);
	bool HasLoginRedirectHostAllowList() const;

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
	/// Whether a Shot Context is required before executing a graph containing
	/// generative nodes. Null means "unspecified" — enforcement is off, the same as false,
	/// so no migration is needed for existing tenants.
	///
	/// Deliberately nullable with no default, unlike the other behaviour flags above: an
	/// omitted value must not read as "turn enforcement off". A caller that simply does not
	/// carry this field — an older console build, a partial write — would otherwise
	/// deserialise to false and silently disable enforcement on the full-document PUT.
	/// Magnopus.Logic.Tenant.Dtos.TenantDto.PreventOpenSignup has the same shape for the same reason, and
	/// Magnopus.Logic.Tenant.DataAccess.TenantRepository preserves a stored value when null arrives.
	/// </summary>
	bool GetRequireShotContext() const;
	void SetRequireShotContext(const bool& Value);
	bool HasRequireShotContext() const;

	/// <summary>
	/// Which shot-context sources this tenant's graphs may use: "shot", "shotgrid".
	/// Null means "unspecified" and preserves the stored value on write; an empty array
	/// is a legitimate value meaning the tenant uses no shot context, so no [MinLength]
	/// here — unlike Magnopus.Logic.Tenant.Dtos.TenantDto.IdentityProviders, where empty is always a caller
	/// that did not carry the field.
	/// </summary>
	const std::vector<utility::string_t>& GetShotContextSources() const;
	void SetShotContextSources(const std::vector<utility::string_t>& Value);
	bool HasShotContextSources() const;

	/// <summary>
	/// List of identity providers enabled for this tenant (e.g., "MGS", "Google").
	/// Every tenant must have at least one identity provider.
	/// </summary>
	const std::vector<utility::string_t>& GetIdentityProviders() const;
	void SetIdentityProviders(const std::vector<utility::string_t>& Value);
	bool HasIdentityProviders() const;

	/// <summary>
	/// Email domains whose SSO users get the plus-address identity picker.
	/// Each entry pairs a domain with a required SSO provider.
	/// If null or empty, plus-addressing is disabled for this tenant.
	/// Magnopus-admin only — not exposed via UpdateTenantLiteRequest.
	/// </summary>
	const std::vector<std::shared_ptr<PlusAddressingDomainEntry>>& GetPlusAddressingDomains() const;
	void SetPlusAddressingDomains(const std::vector<std::shared_ptr<PlusAddressingDomainEntry>>& Value);
	bool HasPlusAddressingDomains() const;

	/// <summary>
	/// When the tenant was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// When true, age verification is bypassed for all login flows on this tenant,
	/// automatically treating all users as age-verified.
	/// </summary>
	bool GetBypassAgeVerification() const;
	void SetBypassAgeVerification(const bool& Value);
	bool HasBypassAgeVerification() const;

	/// <summary>
	/// When `true`, the auth guard is disabled for this tenant and the tenant prefix
	/// is excluded from asset storage paths regardless of the global
	/// `AssetPathSettings:IncludeTenantInPath` setting.
	/// </summary>
	bool GetOmitTenantNameInPath() const;
	void SetOmitTenantNameInPath(const bool& Value);
	bool HasOmitTenantNameInPath() const;

	/// <summary>
	/// When true, this tenant must never be open to the world — the union of the three email
	/// allow-lists has to be non-empty, and authentication is denied rather than falling open when
	/// it is. Null means "legacy" (created before the flag existed, historical open behaviour
	/// preserved); new tenants default to true. Settable only through this magnopus-super-user PUT;
	/// an omitted (null) value never clears a stored value.
	/// </summary>
	bool GetPreventOpenSignup() const;
	void SetPreventOpenSignup(const bool& Value);
	bool HasPreventOpenSignup() const;

	/// <summary>
	/// The company URL fragment for tenants provisioned via the GCP Marketplace onboarding flow.
	/// System-derived; null for tenants created outside that flow.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment for marketplace-provisioned tenants, paired with
	/// Magnopus.Logic.Tenant.Dtos.TenantDto.CompanyUrlFragment. System-derived; null outside the marketplace flow.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	bool HasProjectUrlFragment() const;


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
	std::optional<std::vector<utility::string_t>> m_LoginRedirectHostAllowList;
	std::optional<bool> m_AllowGuestLogin;
	std::optional<bool> m_EnforceSecretValidation;
	std::optional<bool> m_RequireShotContext;
	std::optional<std::vector<utility::string_t>> m_ShotContextSources;
	std::optional<std::vector<utility::string_t>> m_IdentityProviders;
	std::optional<std::vector<std::shared_ptr<PlusAddressingDomainEntry>>> m_PlusAddressingDomains;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<bool> m_BypassAgeVerification;
	std::optional<bool> m_OmitTenantNameInPath;
	std::optional<bool> m_PreventOpenSignup;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
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

	/// <summary>
	/// Whether to add newly created accounts to the AllowedEmailAddresses list
	/// </summary>
	bool GetAddAllowedEmailOnCreate() const;
	void SetAddAllowedEmailOnCreate(const bool& Value);
	bool HasAddAllowedEmailOnCreate() const;


protected:
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailUserNameSuffixes;
	std::optional<bool> m_DisableEmailSender;
	std::optional<bool> m_EnableEmailAutoConfirm;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
	std::optional<bool> m_AddAllowedEmailOnCreate;
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
/// Lightweight info about a tenant secret key — name and ownership, no value.
/// Returned by the key-info endpoint for UI load.
/// </summary>
class TenantSecretKeyInfoDto : public csp::services::DtoBase
{
public:
	TenantSecretKeyInfoDto();
	virtual ~TenantSecretKeyInfoDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The key name (ThirdPartyName)
	/// </summary>
	utility::string_t GetKeyName() const;
	void SetKeyName(const utility::string_t& Value);
	bool HasKeyName() const;

	/// <summary>
	/// Whether this secret value was provided by Magnopus.
	/// </summary>
	bool GetIsMagnopusOwned() const;
	void SetIsMagnopusOwned(const bool& Value);
	bool HasIsMagnopusOwned() const;


protected:
	std::optional<utility::string_t> m_KeyName;
	std::optional<bool> m_IsMagnopusOwned;
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

	/// <summary>
	/// When true, age verification is bypassed for all login flows on this tenant,
	/// automatically treating all users as age-verified.
	/// </summary>
	bool GetBypassAgeVerification() const;
	void SetBypassAgeVerification(const bool& Value);
	bool HasBypassAgeVerification() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_AdminUserId;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailAddresses;
	std::optional<std::vector<utility::string_t>> m_AllowedEmailDomains;
	std::optional<std::vector<utility::string_t>> m_MappedHostnames;
	std::optional<bool> m_BypassAgeVerification;
};

/// <summary>
/// The wire contract for `PUT tenants/names/{tenantName}/settings` — a tenant <b>update</b>.
///
/// ⚠⚠ <b>Every member is nullable and an omitted member means "leave this field as stored".</b> That is
/// the whole point of this type: it is not a Magnopus.Logic.Tenant.Dtos.TenantDto with some fields removed, it is a
/// patch. The update path issues a scoped `$set` for the named fields and nothing else, so adding a
/// field to `TenantDocument` can no longer become a latent data-loss bug waiting for the next
/// console save.
/// For arrays, <b>null and empty mean different things</b>: null is "not named", an empty array is a
/// deliberate "make this empty". The one exception is Magnopus.Logic.Tenant.Dtos.TenantUpdateRequest.IdentityProviders, where empty is
/// refused because every tenant must have at least one.
/// Creating a tenant is a different operation with a different route —
/// `POST tenants/names/{tenantName}`, which takes a whole Magnopus.Logic.Tenant.Dtos.TenantDto. A create may
/// legitimately write every field; an update may not. Fields that are create-time facts
/// (`IsSeeded`, `CreatedVia`), provisioning-owned (`TypedHostnames`,
/// `MappedHostnames`), write-once (the URL fragments) or owned by a dedicated mutator
/// (`OrganizationId`) are absent here on purpose — see Magnopus.Logic.Tenant.DataAccess.Models.TenantFieldUpdates.
/// </summary>
class TenantUpdateRequest : public csp::services::DtoBase
{
public:
	TenantUpdateRequest();
	virtual ~TenantUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The company name. Omit to leave it as stored.
	/// </summary>
	utility::string_t GetCompanyName() const;
	void SetCompanyName(const utility::string_t& Value);
	bool HasCompanyName() const;

	/// <summary>
	/// The human-friendly display name. Omit to leave it as stored.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The administrator's full name. Omit to leave it as stored.
	/// </summary>
	utility::string_t GetAdminFullName() const;
	void SetAdminFullName(const utility::string_t& Value);
	bool HasAdminFullName() const;

	/// <summary>
	/// The company web URL. Omit to leave it as stored.
	/// </summary>
	utility::string_t GetCompanyWebUrl() const;
	void SetCompanyWebUrl(const utility::string_t& Value);
	bool HasCompanyWebUrl() const;

	/// <summary>
	/// The linked account acting as the tenant admin. Omit to leave it as stored — it is never inferred
	/// from the stored document, so a caller that wants to change the admin has to say so.
	/// </summary>
	utility::string_t GetAdminUserId() const;
	void SetAdminUserId(const utility::string_t& Value);
	bool HasAdminUserId() const;

	/// <summary>
	/// Whether the tenant is locked out of the system. Omit to leave it as stored.
	/// </summary>
	bool GetLocked() const;
	void SetLocked(const bool& Value);
	bool HasLocked() const;

	/// <summary>
	/// Whether the tenant is still awaiting admin verification. Omit to leave it as stored.
	/// </summary>
	bool GetPendingAdmin() const;
	void SetPendingAdmin(const bool& Value);
	bool HasPendingAdmin() const;

	/// <summary>
	/// Whether Musubi is enabled for image processing. Omit to leave it as stored.
	/// </summary>
	bool GetEnableMusubi() const;
	void SetEnableMusubi(const bool& Value);
	bool HasEnableMusubi() const;

	/// <summary>
	/// Whether guest login is allowed. Omit to leave it as stored.
	/// </summary>
	bool GetAllowGuestLogin() const;
	void SetAllowGuestLogin(const bool& Value);
	bool HasAllowGuestLogin() const;

	/// <summary>
	/// Whether secret validation is enforced. Omit to leave it as stored.
	/// </summary>
	bool GetEnforceSecretValidation() const;
	void SetEnforceSecretValidation(const bool& Value);
	bool HasEnforceSecretValidation() const;

	/// <summary>
	/// Whether a shot context is required before generative execution. Omit to leave it as stored.
	/// </summary>
	bool GetRequireShotContext() const;
	void SetRequireShotContext(const bool& Value);
	bool HasRequireShotContext() const;

	/// <summary>
	/// Whether age verification is bypassed for all login flows. Omit to leave it as stored.
	/// </summary>
	bool GetBypassAgeVerification() const;
	void SetBypassAgeVerification(const bool& Value);
	bool HasBypassAgeVerification() const;

	/// <summary>
	/// Whether the tenant prefix is omitted from asset storage paths. Omit to leave it as stored.
	/// </summary>
	bool GetOmitTenantNameInPath() const;
	void SetOmitTenantNameInPath(const bool& Value);
	bool HasOmitTenantNameInPath() const;

	/// <summary>
	/// Whether this tenant must never be open to the world. Omit to leave it as stored. A tenant cannot
	/// be returned to the legacy (null) state through this route, only set to true or false.
	/// </summary>
	bool GetPreventOpenSignup() const;
	void SetPreventOpenSignup(const bool& Value);
	bool HasPreventOpenSignup() const;

	/// <summary>
	/// Which shot-context sources the tenant's graphs may use. Omit to leave them as stored; an empty
	/// array is a legitimate value meaning the tenant uses no shot context.
	/// </summary>
	const std::vector<utility::string_t>& GetShotContextSources() const;
	void SetShotContextSources(const std::vector<utility::string_t>& Value);
	bool HasShotContextSources() const;

	/// <summary>
	/// The identity providers enabled for this tenant. Omit to leave them as stored. Unlike the other
	/// arrays, an empty array is refused — every tenant must have at least one provider, and clearing
	/// them locks every user out.
	/// </summary>
	const std::vector<utility::string_t>& GetIdentityProviders() const;
	void SetIdentityProviders(const std::vector<utility::string_t>& Value);
	bool HasIdentityProviders() const;

	/// <summary>
	/// The allowed SSO redirect URIs. Omit to leave them as stored.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedSsoRedirectUris() const;
	void SetAllowedSsoRedirectUris(const std::vector<utility::string_t>& Value);
	bool HasAllowedSsoRedirectUris() const;

	/// <summary>
	/// The hosts a login flow may redirect back to. Omit to leave it as stored. The tenant's configured
	/// hostnames are kept in this list, so removing one that is still a hostname has no effect.
	/// </summary>
	const std::vector<utility::string_t>& GetLoginRedirectHostAllowList() const;
	void SetLoginRedirectHostAllowList(const std::vector<utility::string_t>& Value);
	bool HasLoginRedirectHostAllowList() const;

	/// <summary>
	/// The domains allowed to connect to our services. Omit to leave them as stored.
	/// </summary>
	const std::vector<utility::string_t>& GetCorsAllowedOrigins() const;
	void SetCorsAllowedOrigins(const std::vector<utility::string_t>& Value);
	bool HasCorsAllowedOrigins() const;

	/// <summary>
	/// The allowed redirect URL patterns for links in emails. Omit to leave them as stored.
	/// </summary>
	const std::vector<utility::string_t>& GetEmailRedirectUrlAllowList() const;
	void SetEmailRedirectUrlAllowList(const std::vector<utility::string_t>& Value);
	bool HasEmailRedirectUrlAllowList() const;

	std::shared_ptr<TenantEmailSettingsDto> GetEmailSettings() const;
	void SetEmailSettings(const std::shared_ptr<TenantEmailSettingsDto>& Value);
	bool HasEmailSettings() const;

	/// <summary>
	/// The tenant's email templates. Omit to leave them as stored.
	/// </summary>
	const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& GetEmailTemplateSettings() const;
	void SetEmailTemplateSettings(const std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>& Value);
	bool HasEmailTemplateSettings() const;

	std::shared_ptr<DefaultSessionSettingsDto> GetDefaultSessionSettings() const;
	void SetDefaultSessionSettings(const std::shared_ptr<DefaultSessionSettingsDto>& Value);
	bool HasDefaultSessionSettings() const;

	/// <summary>
	/// The plus-addressing domain entries. Omit to leave them as stored.
	/// </summary>
	const std::vector<std::shared_ptr<PlusAddressingDomainEntry>>& GetPlusAddressingDomains() const;
	void SetPlusAddressingDomains(const std::vector<std::shared_ptr<PlusAddressingDomainEntry>>& Value);
	bool HasPlusAddressingDomains() const;


protected:
	std::optional<utility::string_t> m_CompanyName;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_AdminFullName;
	std::optional<utility::string_t> m_CompanyWebUrl;
	std::optional<utility::string_t> m_AdminUserId;
	std::optional<bool> m_Locked;
	std::optional<bool> m_PendingAdmin;
	std::optional<bool> m_EnableMusubi;
	std::optional<bool> m_AllowGuestLogin;
	std::optional<bool> m_EnforceSecretValidation;
	std::optional<bool> m_RequireShotContext;
	std::optional<bool> m_BypassAgeVerification;
	std::optional<bool> m_OmitTenantNameInPath;
	std::optional<bool> m_PreventOpenSignup;
	std::optional<std::vector<utility::string_t>> m_ShotContextSources;
	std::optional<std::vector<utility::string_t>> m_IdentityProviders;
	std::optional<std::vector<utility::string_t>> m_AllowedSsoRedirectUris;
	std::optional<std::vector<utility::string_t>> m_LoginRedirectHostAllowList;
	std::optional<std::vector<utility::string_t>> m_CorsAllowedOrigins;
	std::optional<std::vector<utility::string_t>> m_EmailRedirectUrlAllowList;
	std::optional<std::shared_ptr<TenantEmailSettingsDto>> m_EmailSettings;
	std::optional<std::vector<std::shared_ptr<TenantEmailTemplateSettingsDto>>> m_EmailTemplateSettings;
	std::optional<std::shared_ptr<DefaultSessionSettingsDto>> m_DefaultSessionSettings;
	std::optional<std::vector<std::shared_ptr<PlusAddressingDomainEntry>>> m_PlusAddressingDomains;
};

/// <summary>
/// Data transfer object for a token-matrix classification entry.
/// </summary>
class TokenMatrixEntryDto : public csp::services::DtoBase
{
public:
	TokenMatrixEntryDto();
	virtual ~TokenMatrixEntryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Node identity this entry applies to (nullable).
	/// </summary>
	utility::string_t GetNodeKey() const;
	void SetNodeKey(const utility::string_t& Value);
	bool HasNodeKey() const;

	/// <summary>
	/// The dimensions a node-invocation must match.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetDimensions() const;
	void SetDimensions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasDimensions() const;

	std::shared_ptr<MatrixCostKind> GetCostKind() const;
	void SetCostKind(const std::shared_ptr<MatrixCostKind>& Value);
	bool HasCostKind() const;

	/// <summary>
	/// Fixed cost in units. <b>May be fractional</b> (a tenth of a credit is `0.1`) — a reader
	/// that coerces this to an integer bills a sub-unit price as nothing.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Per-unit rate.
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Dimension carrying the measured quantity.
	/// </summary>
	utility::string_t GetUnitDimension() const;
	void SetUnitDimension(const utility::string_t& Value);
	bool HasUnitDimension() const;

	/// <summary>
	/// FK to a billing metric key.
	/// </summary>
	utility::string_t GetTargetMetric() const;
	void SetTargetMetric(const utility::string_t& Value);
	bool HasTargetMetric() const;

	/// <summary>
	/// Admin grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Description.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Whether enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Current version.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Most recent change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_NodeKey;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Dimensions;
	std::optional<std::shared_ptr<MatrixCostKind>> m_CostKind;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<utility::string_t> m_UnitDimension;
	std::optional<utility::string_t> m_TargetMetric;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<bool> m_Enabled;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_ChangeNote;
};

class TokenMatrixEntryDtoDataPage : public csp::services::DtoBase
{
public:
	TokenMatrixEntryDtoDataPage();
	virtual ~TokenMatrixEntryDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<TokenMatrixEntryDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<TokenMatrixEntryDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<TokenMatrixEntryDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Response DTO for a Magnopus.Service.User.DataAccess.Models.TokenMatrixEntryHistoryDocument.
/// </summary>
class TokenMatrixEntryHistoryDto : public csp::services::DtoBase
{
public:
	TokenMatrixEntryHistoryDto();
	virtual ~TokenMatrixEntryHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Live entry id.
	/// </summary>
	utility::string_t GetEntryId() const;
	void SetEntryId(const utility::string_t& Value);
	bool HasEntryId() const;

	/// <summary>
	/// Version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Parent version.
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// Snapshot: node key.
	/// </summary>
	utility::string_t GetNodeKey() const;
	void SetNodeKey(const utility::string_t& Value);
	bool HasNodeKey() const;

	/// <summary>
	/// Snapshot: dimensions.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetDimensions() const;
	void SetDimensions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasDimensions() const;

	std::shared_ptr<MatrixCostKind> GetCostKind() const;
	void SetCostKind(const std::shared_ptr<MatrixCostKind>& Value);
	bool HasCostKind() const;

	/// <summary>
	/// Snapshot: fixed cost.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Snapshot: rate.
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Snapshot: unit dimension.
	/// </summary>
	utility::string_t GetUnitDimension() const;
	void SetUnitDimension(const utility::string_t& Value);
	bool HasUnitDimension() const;

	/// <summary>
	/// Snapshot: target metric.
	/// </summary>
	utility::string_t GetTargetMetric() const;
	void SetTargetMetric(const utility::string_t& Value);
	bool HasTargetMetric() const;

	/// <summary>
	/// Snapshot: category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Snapshot: sort order.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Snapshot: display name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Snapshot: description.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Snapshot: enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Change note.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// When this snapshot was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this snapshot.
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_EntryId;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_NodeKey;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Dimensions;
	std::optional<std::shared_ptr<MatrixCostKind>> m_CostKind;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<utility::string_t> m_UnitDimension;
	std::optional<utility::string_t> m_TargetMetric;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
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
	/// "dns_pending", "insync", "verified", or "error" while provisioning; one of the
	/// Magnopus.Logic.Tenant.DataAccess.Models.HostnameDnsStatuses teardown statuses while being torn down
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

	/// <summary>
	/// While Magnopus.Logic.Tenant.DataAccess.Models.TypedHostname.DnsStatus is
	/// Magnopus.Logic.Tenant.DataAccess.Models.HostnameDnsStatuses.DeprovisioningCertPending: the ARN of the replacement certificate —
	/// the remaining SAN set <em>minus</em> this hostname — that the distribution will be swapped onto once ACM
	/// issues it. Null at every other time.
	/// Persisted rather than held in memory because issuance takes minutes, which is longer than any request
	/// may last. Without it a teardown interrupted by a pod restart could not be resumed, and the requested
	/// certificate would be orphaned with nothing recording that it was ever meant to be used.
	/// </summary>
	utility::string_t GetDeprovisioningCertificateArn() const;
	void SetDeprovisioningCertificateArn(const utility::string_t& Value);
	bool HasDeprovisioningCertificateArn() const;

	/// <summary>
	/// Why provisioning last failed, in terms an operator can act on. Magnopus.Logic.Tenant.DataAccess.Models.TypedHostname.DnsStatus on its own only
	/// ever said "error", so the reason lived exclusively in a swallowed exception: two occurrences of the same
	/// CloudFront CNAME conflict could not be told apart without going to Cloud Logging for a stack trace, and
	/// the buyer-facing "Needs Attention" placard pointed at a screen that could only repeat "Error". Cleared
	/// when the hostname next makes progress.
	/// </summary>
	utility::string_t GetFailureReason() const;
	void SetFailureReason(const utility::string_t& Value);
	bool HasFailureReason() const;

	/// <summary>
	/// Coarse machine-readable classification of Magnopus.Logic.Tenant.DataAccess.Models.TypedHostname.FailureReason: "cname-conflict",
	/// "cert-failed", "quota", "transient" or "unknown". Drives whether the hostname is re-driven or parked in
	/// a terminal error, and lets the UI say something useful without parsing a message.
	/// </summary>
	utility::string_t GetFailureKind() const;
	void SetFailureKind(const utility::string_t& Value);
	bool HasFailureKind() const;

	/// <summary>
	/// How many consecutive transient failures this hostname has taken. A transient failure keeps the current
	/// status so the next poll re-drives it — this is the bound that stops that becoming an infinite retry
	/// when the cause turns out to be permanent after all.
	/// </summary>
	int32_t GetFailureCount() const;
	void SetFailureCount(int32_t Value);
	bool HasFailureCount() const;

	/// <summary>
	/// Who holds this hostname's lease: an opaque id for one call in one pod, or null when nobody does. Set and
	/// cleared together with Magnopus.Logic.Tenant.DataAccess.Models.TypedHostname.LeaseExpiresAt, and only by
	/// `ITenantRepository.TryLeaseTypedHostname` and `ReleaseTypedHostnameLease`. The lease serialises the callers that advance or rewrite an
	/// <b>existing</b> hostname — the `dns-status` poll, the teardown's advance, the `DELETE` and the operator's retry — which can otherwise land on
	/// the same hostname at once from at least two `user-api` pods. CloudFront's ETag already makes each distribution <em>write</em> safe; what it
	/// cannot make safe is the <em>decision</em> to write, which each caller used to take from its own cached copy of this element. That is how a
	/// poll that started before a `DELETE` could put back the alias the `DELETE` had just removed. It lives on the element rather than in a separate
	/// collection or in Redis because the element is the thing being decided about: one conditional positional update both takes the lease and
	/// returns the fresh element to decide from, and the lease is removed with the hostname for free. Diagnostic only outside the repository. A
	/// cached tenant read can show a lease that has since been released or taken over, so nothing may treat this field as the truth about who holds
	/// the hostname now.
	/// </summary>
	utility::string_t GetLeaseOwner() const;
	void SetLeaseOwner(const utility::string_t& Value);
	bool HasLeaseOwner() const;

	/// <summary>
	/// When Magnopus.Logic.Tenant.DataAccess.Models.TypedHostname.LeaseOwner's lease lapses, or null when the hostname is not leased. A lease past
	/// this time can be taken over by the next caller, so a pod that dies mid-section never wedges the hostname for longer than one lease.
	/// </summary>
	utility::string_t GetLeaseExpiresAt() const;
	void SetLeaseExpiresAt(const utility::string_t& Value);
	bool HasLeaseExpiresAt() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Route53ChangeId;
	std::optional<utility::string_t> m_DnsStatus;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_AcmCertificateArn;
	std::optional<utility::string_t> m_DeprovisioningCertificateArn;
	std::optional<utility::string_t> m_FailureReason;
	std::optional<utility::string_t> m_FailureKind;
	std::optional<int32_t> m_FailureCount;
	std::optional<utility::string_t> m_LeaseOwner;
	std::optional<utility::string_t> m_LeaseExpiresAt;
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

	/// <summary>
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

	/// <summary>
	/// Optional per-tier quota limit configurations.
	/// Processed by Aggregation to upsert QuotaFeatureTier records in the Tracking service.
	/// </summary>
	const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& GetTierConfigs() const;
	void SetTierConfigs(const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& Value);
	bool HasTierConfigs() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
	std::optional<std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>> m_TierConfigs;
};

/// <summary>
/// Update request for a billing metric.
/// </summary>
class UpdateBillingMetricRequest : public csp::services::DtoBase
{
public:
	UpdateBillingMetricRequest();
	virtual ~UpdateBillingMetricRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// What this metric measures.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Registered Google Cloud Marketplace metric id.
	/// </summary>
	utility::string_t GetGoogleMetricId() const;
	void SetGoogleMetricId(const utility::string_t& Value);
	bool HasGoogleMetricId() const;

	/// <summary>
	/// Unit cost is expressed in.
	/// </summary>
	utility::string_t GetUnit() const;
	void SetUnit(const utility::string_t& Value);
	bool HasUnit() const;

	/// <summary>
	/// Admin grouping category.
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
	/// Whether the metric is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_GoogleMetricId;
	std::optional<utility::string_t> m_Unit;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
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
/// Update request for a per-tier price override (its `MatrixEntryId`/`TierId` identity is
/// fixed — only the cost and enabled state change).
/// </summary>
class UpdateMatrixTierPriceOverrideRequest : public csp::services::DtoBase
{
public:
	UpdateMatrixTierPriceOverrideRequest();
	virtual ~UpdateMatrixTierPriceOverrideRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Override fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Override per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the override is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Update request for a sheet exception (its `PricingSheetId`/`MatrixEntryId` identity is
/// fixed — only the cost and enabled state change).
/// </summary>
class UpdatePricingSheetExceptionRequest : public csp::services::DtoBase
{
public:
	UpdatePricingSheetExceptionRequest();
	virtual ~UpdatePricingSheetExceptionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Exception fixed cost in units (set when the parent row's CostKind is Fixed).
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Exception per-unit rate (set when the parent row's CostKind is Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Whether the exception is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
};

/// <summary>
/// Update request for a pricing sheet. `Status` is not settable here — publishing goes through
/// `POST sheets/{id}/publish` so the transition is its own audited act.
/// </summary>
class UpdatePricingSheetRequest : public csp::services::DtoBase
{
public:
	UpdatePricingSheetRequest();
	virtual ~UpdatePricingSheetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Multiplier applied to the tenant's resolved cost.
	/// </summary>
	double GetMultiplier() const;
	void SetMultiplier(double Value);
	bool HasMultiplier() const;

	/// <summary>
	/// Whether the sheet is enabled.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<double> m_Multiplier;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
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
/// Update request for a matrix entry (same body shape as create).
/// </summary>
class UpdateTokenMatrixEntryRequest : public csp::services::DtoBase
{
public:
	UpdateTokenMatrixEntryRequest();
	virtual ~UpdateTokenMatrixEntryRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node identity this entry applies to (nullable for non-node rows).
	/// </summary>
	utility::string_t GetNodeKey() const;
	void SetNodeKey(const utility::string_t& Value);
	bool HasNodeKey() const;

	/// <summary>
	/// The dimensions a node-invocation must match.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetDimensions() const;
	void SetDimensions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasDimensions() const;

	std::shared_ptr<MatrixCostKind> GetCostKind() const;
	void SetCostKind(const std::shared_ptr<MatrixCostKind>& Value);
	bool HasCostKind() const;

	/// <summary>
	/// Fixed cost in units (required when CostKind=Fixed). <b>May be fractional</b> — the wire
	/// contract is a JSON <i>number</i> carrying up to nine decimal places (`0.1`, not
	/// `"0.1"`). Quantized to nine places on write; a positive value below
	/// `0.001` is rejected, and any fraction is rejected on an `apikey`-targeted row.
	/// `null` (unpriced) and `0` are both valid and mean different things.
	/// </summary>
	double GetTokens() const;
	void SetTokens(double Value);
	bool HasTokens() const;

	/// <summary>
	/// Per-unit rate (required when CostKind=Rate).
	/// </summary>
	double GetRatePerUnit() const;
	void SetRatePerUnit(double Value);
	bool HasRatePerUnit() const;

	/// <summary>
	/// Dimension carrying the measured quantity (required when CostKind=Rate).
	/// </summary>
	utility::string_t GetUnitDimension() const;
	void SetUnitDimension(const utility::string_t& Value);
	bool HasUnitDimension() const;

	/// <summary>
	/// FK to a billing metric key. Required.
	/// </summary>
	utility::string_t GetTargetMetric() const;
	void SetTargetMetric(const utility::string_t& Value);
	bool HasTargetMetric() const;

	/// <summary>
	/// Admin grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Description.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Whether enabled. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<utility::string_t> m_NodeKey;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Dimensions;
	std::optional<std::shared_ptr<MatrixCostKind>> m_CostKind;
	std::optional<double> m_Tokens;
	std::optional<double> m_RatePerUnit;
	std::optional<utility::string_t> m_UnitDimension;
	std::optional<utility::string_t> m_TargetMetric;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
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
/// Upsert request for a billing domain's settings.
/// </summary>
class UpsertBillingSettingsRequest : public csp::services::DtoBase
{
public:
	UpsertBillingSettingsRequest();
	virtual ~UpsertBillingSettingsRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The settings payload — a flat key→value map the owning domain interprets.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetValues() const;
	void SetValues(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasValues() const;

	/// <summary>
	/// Master on/off for this domain's emitter. Defaults true.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Optional note describing the change.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;


protected:
	std::optional<std::map<utility::string_t, utility::string_t>> m_Values;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_ChangeNote;
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
	/// Unique identifier of the SSO group owner(s) to include in the search
	/// </summary>
	const std::vector<utility::string_t>& GetProviderUserIds() const;
	void SetProviderUserIds(const std::vector<utility::string_t>& Value);
	bool HasProviderUserIds() const;

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
	/// Filters on whether password login is disabled for the profile. Null means "do not filter",
	/// matching Magnopus.Service.User.Structures.UserQuery.SearchPartialEmails.
	/// This exists so a magnopus-admin can LIST every passwordless account in a tenant. Without it
	/// the invariant is only visible in the seed file, and the Error log that fires when it breaks
	/// only fires once it is already broken - a filter is what makes it auditable before that.
	/// </summary>
	bool GetPasswordLoginDisabled() const;
	void SetPasswordLoginDisabled(const bool& Value);
	bool HasPasswordLoginDisabled() const;

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
	std::optional<std::vector<utility::string_t>> m_ProviderUserIds;
	std::optional<utility::string_t> m_EmailOrDisplayNameFragment;
	std::optional<utility::string_t> m_SortBy;
	std::optional<utility::string_t> m_SortDirection;
	std::optional<bool> m_PasswordLoginDisabled;
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

/// <summary>
/// What this build of the Wazzup service supports.
/// </summary>
class WazzupCapabilitiesDto : public csp::services::DtoBase
{
public:
	WazzupCapabilitiesDto();
	virtual ~WazzupCapabilitiesDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Transit encodings accepted on prompt-bearing fields (see `Transit.TransitEncoding`).
	/// </summary>
	const std::vector<utility::string_t>& GetTransitEncodings() const;
	void SetTransitEncodings(const std::vector<utility::string_t>& Value);
	bool HasTransitEncodings() const;


protected:
	std::optional<std::vector<utility::string_t>> m_TransitEncodings;
};


} // namespace csp::services::generated::userservice