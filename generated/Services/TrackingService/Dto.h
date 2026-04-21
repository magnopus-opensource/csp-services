

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::trackingservice
{

class AnalyticsRecord;
class ApiVersion;
class ControllerVersions;
class NamedFunction;
class ProblemDetails;
class QuotaFeatureActivityDto;
class QuotaFeatureActivityDtoDataPage;
class QuotaFeatureLimitProgressDto;
class QuotaFeatureTierDto;
class QuotaFeatureTierHistoryDto;
class QuotaSumByPeriodDto;
class QuotaTierAssignmentDto;
class QuotaTierDto;
class SeedResultDto;
class ServiceVersionInfo;
class StringDataPage;



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
/// The quota activity for a feature
/// </summary>
class QuotaFeatureActivityDto : public csp::services::DtoBase
{
public:
	QuotaFeatureActivityDto();
	virtual ~QuotaFeatureActivityDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the feature
	/// </summary>
	utility::string_t GetFeatureName() const;
	bool HasFeatureName() const;

	/// <summary>
	/// The type of the entity(s) that the quota applies to (literal strings "user", etc)
	/// </summary>
	utility::string_t GetAppliesToType() const;
	bool HasAppliesToType() const;

	/// <summary>
	/// The id of the entity(s) that the quota applies to (user id, etc)
	/// </summary>
	utility::string_t GetAppliesToId() const;
	bool HasAppliesToId() const;

	/// <summary>
	/// The type of an additional entity(s) that the quota applies to (literal strings "group", etc)
	/// Note: this can be `null` when this feature only applies to one entity
	/// </summary>
	utility::string_t GetAppliesToQualifierType() const;
	bool HasAppliesToQualifierType() const;

	/// <summary>
	/// The id of an additional entity(s) that the quota applies to (group id, etc)
	/// Note: this can be `null` when this feature only applies to one entity
	/// </summary>
	utility::string_t GetAppliesToQualifierId() const;
	bool HasAppliesToQualifierId() const;

	/// <summary>
	/// The user that performed the activity
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date/time the activity was performed
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The amount the activity applies toward the quota
	/// (can be negative when the activity is a delete or other kind of removal)
	/// </summary>
	int32_t GetAmount() const;
	bool HasAmount() const;


protected:
	std::optional<utility::string_t> m_FeatureName;
	std::optional<utility::string_t> m_AppliesToType;
	std::optional<utility::string_t> m_AppliesToId;
	std::optional<utility::string_t> m_AppliesToQualifierType;
	std::optional<utility::string_t> m_AppliesToQualifierId;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<int32_t> m_Amount;
};

class QuotaFeatureActivityDtoDataPage : public csp::services::DtoBase
{
public:
	QuotaFeatureActivityDtoDataPage();
	virtual ~QuotaFeatureActivityDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<QuotaFeatureActivityDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// The progress of activity towards a feature's limit
/// </summary>
class QuotaFeatureLimitProgressDto : public csp::services::DtoBase
{
public:
	QuotaFeatureLimitProgressDto();
	virtual ~QuotaFeatureLimitProgressDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the feature
	/// </summary>
	utility::string_t GetFeatureName() const;
	bool HasFeatureName() const;

	/// <summary>
	/// The amount of activity toward the feature's limit
	/// </summary>
	int32_t GetActivityCount() const;
	bool HasActivityCount() const;

	/// <summary>
	/// The feature's limit
	/// </summary>
	int32_t GetLimit() const;
	bool HasLimit() const;


protected:
	std::optional<utility::string_t> m_FeatureName;
	std::optional<int32_t> m_ActivityCount;
	std::optional<int32_t> m_Limit;
};

/// <summary>
/// DTO for defining the quota limit for a feature at a specified tier
/// </summary>
class QuotaFeatureTierDto : public csp::services::DtoBase
{
public:
	QuotaFeatureTierDto();
	virtual ~QuotaFeatureTierDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the feature
	/// </summary>
	utility::string_t GetFeatureName() const;
	bool HasFeatureName() const;

	/// <summary>
	/// The name of the tier this applies to
	/// </summary>
	utility::string_t GetTierName() const;
	bool HasTierName() const;

	/// <summary>
	/// The limit at this tier
	/// or `null` when there is no limit
	/// </summary>
	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	std::shared_ptr<QuotaSumByPeriodDto> GetPeriod() const;
	void SetPeriod(const std::shared_ptr<QuotaSumByPeriodDto>& Value);
	bool HasPeriod() const;

	/// <summary>
	/// Determines if activity that reduces the count are counted when determining if an entity is below the limit in the specified
	/// Magnopus.Service.Tracking.Dtos.QuotaFeatureTierDto.Period (negative value in Magnopus.Service.Tracking.Dtos.QuotaFeatureActivityDto.Amount)
	/// </summary>
	bool GetAllowReductions() const;
	void SetAllowReductions(const bool& Value);
	bool HasAllowReductions() const;

	/// <summary>
	/// Version number, incremented on each update.
	/// </summary>
	int32_t GetVersion() const;
	bool HasVersion() const;

	/// <summary>
	/// Whether this feature is active for this tier.
	/// When false, the feature is not enforced and treated as if it doesn't exist.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Whether quota limits are enforced for this feature at this tier.
	/// When false, usage is tracked but never blocked (track-only / observing mode).
	/// </summary>
	bool GetLimitsEnforced() const;
	void SetLimitsEnforced(const bool& Value);
	bool HasLimitsEnforced() const;

	/// <summary>
	/// Optional category name for grouping features in the UI.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;


protected:
	std::optional<utility::string_t> m_FeatureName;
	std::optional<utility::string_t> m_TierName;
	std::optional<int32_t> m_Limit;
	std::optional<std::shared_ptr<QuotaSumByPeriodDto>> m_Period;
	std::optional<bool> m_AllowReductions;
	std::optional<int32_t> m_Version;
	std::optional<bool> m_Enabled;
	std::optional<bool> m_LimitsEnforced;
	std::optional<utility::string_t> m_Category;
};

/// <summary>
/// DTO for a versioned snapshot of a quota feature tier entry
/// </summary>
class QuotaFeatureTierHistoryDto : public csp::services::DtoBase
{
public:
	QuotaFeatureTierHistoryDto();
	virtual ~QuotaFeatureTierHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tier this history entry belongs to
	/// </summary>
	utility::string_t GetTierName() const;
	void SetTierName(const utility::string_t& Value);
	bool HasTierName() const;

	/// <summary>
	/// The feature this history entry belongs to
	/// </summary>
	utility::string_t GetFeatureName() const;
	void SetFeatureName(const utility::string_t& Value);
	bool HasFeatureName() const;

	/// <summary>
	/// Version number of this snapshot
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Snapshot: the limit at this version
	/// </summary>
	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	std::shared_ptr<QuotaSumByPeriodDto> GetPeriod() const;
	void SetPeriod(const std::shared_ptr<QuotaSumByPeriodDto>& Value);
	bool HasPeriod() const;

	/// <summary>
	/// Snapshot: allow reductions at this version
	/// </summary>
	bool GetAllowReductions() const;
	void SetAllowReductions(const bool& Value);
	bool HasAllowReductions() const;

	/// <summary>
	/// Snapshot: enabled state at this version
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Snapshot: limits enforced state at this version
	/// </summary>
	bool GetLimitsEnforced() const;
	void SetLimitsEnforced(const bool& Value);
	bool HasLimitsEnforced() const;

	/// <summary>
	/// Snapshot: category at this version
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Description of what changed in this version
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// Parent version number
	/// </summary>
	int32_t GetParentVersion() const;
	void SetParentVersion(int32_t Value);
	bool HasParentVersion() const;

	/// <summary>
	/// When this version was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Who created this version
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;


protected:
	std::optional<utility::string_t> m_TierName;
	std::optional<utility::string_t> m_FeatureName;
	std::optional<int32_t> m_Version;
	std::optional<int32_t> m_Limit;
	std::optional<std::shared_ptr<QuotaSumByPeriodDto>> m_Period;
	std::optional<bool> m_AllowReductions;
	std::optional<bool> m_Enabled;
	std::optional<bool> m_LimitsEnforced;
	std::optional<utility::string_t> m_Category;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<int32_t> m_ParentVersion;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
};

/// <summary>
/// How the activity for the feature is counted
/// </summary>
class QuotaSumByPeriodDto : public csp::services::EnumBase
{
public:
	QuotaSumByPeriodDto();
	virtual ~QuotaSumByPeriodDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eQuotaSumByPeriodDto
	{
		TOTAL,
		CALENDARMONTH,
		HOURS24

	};

	eQuotaSumByPeriodDto GetValue() const;
	void SetValue(eQuotaSumByPeriodDto const Value);

protected:
	eQuotaSumByPeriodDto Value = {};
};

/// <summary>
/// The assignment of the quota tier to an entity
/// </summary>
class QuotaTierAssignmentDto : public csp::services::DtoBase
{
public:
	QuotaTierAssignmentDto();
	virtual ~QuotaTierAssignmentDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The type of the entity this tier quota is assigned to (literal strings "user", "tenant", etc)
	/// </summary>
	utility::string_t GetAssignedToType() const;
	bool HasAssignedToType() const;

	/// <summary>
	/// The id of the entity this tier quota is assigned to (user id, tenant name, etc)
	/// </summary>
	utility::string_t GetAssignedToId() const;
	bool HasAssignedToId() const;

	/// <summary>
	/// The name of the tier the entity is assigned to
	/// </summary>
	utility::string_t GetTierName() const;
	void SetTierName(const utility::string_t& Value);
	bool HasTierName() const;

	/// <summary>
	/// The name of the tenant to which the entity belongs
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Optional date when the tier assignment expires.
	/// </summary>
	utility::string_t GetExpiresAt() const;
	void SetExpiresAt(const utility::string_t& Value);
	bool HasExpiresAt() const;


protected:
	std::optional<utility::string_t> m_AssignedToType;
	std::optional<utility::string_t> m_AssignedToId;
	std::optional<utility::string_t> m_TierName;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_ExpiresAt;
};

/// <summary>
/// First-class tier definition with metadata (display name, color, sort order, etc.)
/// </summary>
class QuotaTierDto : public csp::services::DtoBase
{
public:
	QuotaTierDto();
	virtual ~QuotaTierDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique tier identifier (e.g., "free", "pro", "enterprise")
	/// </summary>
	utility::string_t GetTierName() const;
	bool HasTierName() const;

	/// <summary>
	/// Human-readable display name (e.g., "Professional", "Enterprise")
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Optional description of what this tier includes or who it's for
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// CSS hex color for UI badge styling (e.g., "#3B82F6")
	/// </summary>
	utility::string_t GetColor() const;
	void SetColor(const utility::string_t& Value);
	bool HasColor() const;

	/// <summary>
	/// Display ordering / tier rank (higher = more permissive)
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Whether this is the default fallback tier
	/// </summary>
	bool GetIsDefault() const;
	void SetIsDefault(const bool& Value);
	bool HasIsDefault() const;

	/// <summary>
	/// Tier status: "active" or "deprecated"
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Number of feature quota definitions associated with this tier (computed)
	/// </summary>
	int32_t GetFeatureCount() const;
	bool HasFeatureCount() const;


protected:
	std::optional<utility::string_t> m_TierName;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Color;
	std::optional<int32_t> m_SortOrder;
	std::optional<bool> m_IsDefault;
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_FeatureCount;
};

/// <summary>
/// Result of a tier seed operation
/// </summary>
class SeedResultDto : public csp::services::DtoBase
{
public:
	SeedResultDto();
	virtual ~SeedResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Number of new tier documents created
	/// </summary>
	int32_t GetSeededCount() const;
	void SetSeededCount(int32_t Value);
	bool HasSeededCount() const;

	/// <summary>
	/// Total tier documents after seeding
	/// </summary>
	int32_t GetTotalCount() const;
	void SetTotalCount(int32_t Value);
	bool HasTotalCount() const;


protected:
	std::optional<int32_t> m_SeededCount;
	std::optional<int32_t> m_TotalCount;
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


} // namespace csp::services::generated::trackingservice