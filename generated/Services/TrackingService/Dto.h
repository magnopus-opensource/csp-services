

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::trackingservice
{

class QuotaFeatureActivityDto;
class QuotaFeatureActivityDtoDataPage;
class QuotaFeatureLimitProgressDto;
class QuotaFeatureTierDto;
class QuotaSumByPeriodDto;
class QuotaTierAssignmentDto;



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


protected:
	std::optional<utility::string_t> m_FeatureName;
	std::optional<utility::string_t> m_TierName;
	std::optional<int32_t> m_Limit;
	std::optional<std::shared_ptr<QuotaSumByPeriodDto>> m_Period;
	std::optional<bool> m_AllowReductions;
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


} // namespace csp::services::generated::trackingservice