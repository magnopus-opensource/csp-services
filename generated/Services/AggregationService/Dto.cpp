

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Json/JsonParseHelper.h"
#include <optional>


using namespace csp::web;


namespace csp::services::generated::aggregationservice
{


ActivateChaosRequest::ActivateChaosRequest()
{
}
ActivateChaosRequest::~ActivateChaosRequest()
{
}

utility::string_t ActivateChaosRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FailureLikelihood.has_value())
	{
		rapidjson::Value FailureLikelihoodValue(TypeToJsonValue(m_FailureLikelihood, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("failureLikelihood", FailureLikelihoodValue, JsonDoc.GetAllocator());
	}

	if (m_DurationMinutes.has_value())
	{
		rapidjson::Value DurationMinutesValue(TypeToJsonValue(m_DurationMinutes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("durationMinutes", DurationMinutesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ActivateChaosRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ActivateChaosRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("failureLikelihood"))
	{
		const rapidjson::Value& FailureLikelihoodValue = JsonDoc["failureLikelihood"];

		if (FailureLikelihoodValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FailureLikelihoodValue, m_FailureLikelihood);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member failureLikelihood is null!");
		}
	}

	if (JsonDoc.HasMember("durationMinutes"))
	{
		const rapidjson::Value& DurationMinutesValue = JsonDoc["durationMinutes"];

		if (DurationMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurationMinutesValue, m_DurationMinutes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member durationMinutes is null!");
		}
	}
}


int32_t ActivateChaosRequest::GetFailureLikelihood() const
{
	return m_FailureLikelihood.value();
}

bool ActivateChaosRequest::HasFailureLikelihood() const
{
	return m_FailureLikelihood.has_value();
}
void ActivateChaosRequest::SetFailureLikelihood(int32_t Value)
{
	m_FailureLikelihood = Value;
}
int32_t ActivateChaosRequest::GetDurationMinutes() const
{
	return m_DurationMinutes.value();
}

bool ActivateChaosRequest::HasDurationMinutes() const
{
	return m_DurationMinutes.has_value();
}
void ActivateChaosRequest::SetDurationMinutes(int32_t Value)
{
	m_DurationMinutes = Value;
}

AloClassCompletedRequest::AloClassCompletedRequest()
{
}
AloClassCompletedRequest::~AloClassCompletedRequest()
{
}

utility::string_t AloClassCompletedRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ClassDefinitionId.has_value())
	{
		rapidjson::Value ClassDefinitionIdValue(TypeToJsonValue(m_ClassDefinitionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("classDefinitionId", ClassDefinitionIdValue, JsonDoc.GetAllocator());
	}

	if (m_SeriesPlanId.has_value())
	{
		rapidjson::Value SeriesPlanIdValue(TypeToJsonValue(m_SeriesPlanId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("seriesPlanId", SeriesPlanIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AloClassCompletedRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AloClassCompletedRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("classDefinitionId"))
	{
		const rapidjson::Value& ClassDefinitionIdValue = JsonDoc["classDefinitionId"];

		if (ClassDefinitionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClassDefinitionIdValue, m_ClassDefinitionId);
		}
	}

	if (JsonDoc.HasMember("seriesPlanId"))
	{
		const rapidjson::Value& SeriesPlanIdValue = JsonDoc["seriesPlanId"];

		if (SeriesPlanIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SeriesPlanIdValue, m_SeriesPlanId);
		}
	}
}


utility::string_t AloClassCompletedRequest::GetUserId() const
{
	return m_UserId.value();
}

bool AloClassCompletedRequest::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t AloClassCompletedRequest::GetClassDefinitionId() const
{
	return m_ClassDefinitionId.value();
}

bool AloClassCompletedRequest::HasClassDefinitionId() const
{
	return m_ClassDefinitionId.has_value();
}
utility::string_t AloClassCompletedRequest::GetSeriesPlanId() const
{
	return m_SeriesPlanId.value();
}

bool AloClassCompletedRequest::HasSeriesPlanId() const
{
	return m_SeriesPlanId.has_value();
}
void AloClassCompletedRequest::SetSeriesPlanId(const utility::string_t& Value)
{
	m_SeriesPlanId = Value;
}

AloClassCompletedResponse::AloClassCompletedResponse()
{
}
AloClassCompletedResponse::~AloClassCompletedResponse()
{
}

utility::string_t AloClassCompletedResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_BadgeIdsEarned.has_value())
	{
		rapidjson::Value BadgeIdsEarnedValue(TypeToJsonValue(m_BadgeIdsEarned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("badgeIdsEarned", BadgeIdsEarnedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AloClassCompletedResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AloClassCompletedResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("badgeIdsEarned"))
	{
		const rapidjson::Value& BadgeIdsEarnedValue = JsonDoc["badgeIdsEarned"];

		if (BadgeIdsEarnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BadgeIdsEarnedValue, m_BadgeIdsEarned);
		}
	}
}


const std::vector<utility::string_t>& AloClassCompletedResponse::GetBadgeIdsEarned() const
{
	return m_BadgeIdsEarned.value();
}

bool AloClassCompletedResponse::HasBadgeIdsEarned() const
{
	return m_BadgeIdsEarned.has_value();
}
void AloClassCompletedResponse::SetBadgeIdsEarned(const std::vector<utility::string_t>& Value)
{
	m_BadgeIdsEarned = Value;
}

AltitudeMode::AltitudeMode()
{
}
AltitudeMode::~AltitudeMode()
{
}

utility::string_t AltitudeMode::ToJson() const
{
	switch (Value)
	{
		case eAltitudeMode::RELATIVETOGROUND:
			return "relativeToGround";
		case eAltitudeMode::ABSOLUTE:
			return "absolute";
		case eAltitudeMode::RELATIVETOSEAFLOOR:
			return "relativeToSeaFloor";
		case eAltitudeMode::CLAMPTOGROUND:
			return "clampToGround";
		case eAltitudeMode::CLAMPTOSEAFLOOR:
			return "clampToSeaFloor";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void AltitudeMode::FromJson(const utility::string_t& Val)
{
	if (Val == "relativeToGround")
	{
		Value = eAltitudeMode::RELATIVETOGROUND;
	}
	else if (Val == "absolute")
	{
		Value = eAltitudeMode::ABSOLUTE;
	}
	else if (Val == "relativeToSeaFloor")
	{
		Value = eAltitudeMode::RELATIVETOSEAFLOOR;
	}
	else if (Val == "clampToGround")
	{
		Value = eAltitudeMode::CLAMPTOGROUND;
	}
	else if (Val == "clampToSeaFloor")
	{
		Value = eAltitudeMode::CLAMPTOSEAFLOOR;
	}
}

AltitudeMode::eAltitudeMode AltitudeMode::GetValue() const
{
	return Value;
}

void AltitudeMode::SetValue(AltitudeMode::eAltitudeMode const InValue)
{
	Value = InValue;
}

AnalyticsRecord::AnalyticsRecord()
{
}
AnalyticsRecord::~AnalyticsRecord()
{
}

utility::string_t AnalyticsRecord::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Timestamp.has_value())
	{
		rapidjson::Value TimestampValue(TypeToJsonValue(m_Timestamp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("timestamp", TimestampValue, JsonDoc.GetAllocator());
	}

	if (m_ProductIdentifier.has_value())
	{
		rapidjson::Value ProductIdentifierValue(TypeToJsonValue(m_ProductIdentifier, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("productIdentifier", ProductIdentifierValue, JsonDoc.GetAllocator());
	}

	if (m_ProductContext.has_value())
	{
		rapidjson::Value ProductContextValue(TypeToJsonValue(m_ProductContext, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("productContext", ProductContextValue, JsonDoc.GetAllocator());
	}

	if (m_ProductContextSection.has_value())
	{
		rapidjson::Value ProductContextSectionValue(TypeToJsonValue(m_ProductContextSection, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("productContextSection", ProductContextSectionValue, JsonDoc.GetAllocator());
	}

	if (m_VersionMatrix.has_value())
	{
		rapidjson::Value VersionMatrixValue(TypeToJsonValue(m_VersionMatrix, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("versionMatrix", VersionMatrixValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Category.has_value())
	{
		rapidjson::Value CategoryValue(TypeToJsonValue(m_Category, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("category", CategoryValue, JsonDoc.GetAllocator());
	}

	if (m_SubCategory.has_value())
	{
		rapidjson::Value SubCategoryValue(TypeToJsonValue(m_SubCategory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("subCategory", SubCategoryValue, JsonDoc.GetAllocator());
	}

	if (m_InteractionType.has_value())
	{
		rapidjson::Value InteractionTypeValue(TypeToJsonValue(m_InteractionType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("interactionType", InteractionTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Metadata.has_value())
	{
		rapidjson::Value MetadataValue(TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metadata", MetadataValue, JsonDoc.GetAllocator());
	}

	if (m_ServiceName.has_value())
	{
		rapidjson::Value ServiceNameValue(TypeToJsonValue(m_ServiceName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceName", ServiceNameValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AnalyticsRecord::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AnalyticsRecord::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("timestamp"))
	{
		const rapidjson::Value& TimestampValue = JsonDoc["timestamp"];

		if (TimestampValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TimestampValue, m_Timestamp);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member timestamp is null!");
		}
	}

	if (JsonDoc.HasMember("productIdentifier"))
	{
		const rapidjson::Value& ProductIdentifierValue = JsonDoc["productIdentifier"];

		if (ProductIdentifierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductIdentifierValue, m_ProductIdentifier);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member productIdentifier is null!");
		}
	}

	if (JsonDoc.HasMember("productContext"))
	{
		const rapidjson::Value& ProductContextValue = JsonDoc["productContext"];

		if (ProductContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductContextValue, m_ProductContext);
		}
	}

	if (JsonDoc.HasMember("productContextSection"))
	{
		const rapidjson::Value& ProductContextSectionValue = JsonDoc["productContextSection"];

		if (ProductContextSectionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductContextSectionValue, m_ProductContextSection);
		}
	}

	if (JsonDoc.HasMember("versionMatrix"))
	{
		const rapidjson::Value& VersionMatrixValue = JsonDoc["versionMatrix"];

		if (VersionMatrixValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionMatrixValue, m_VersionMatrix);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("category"))
	{
		const rapidjson::Value& CategoryValue = JsonDoc["category"];

		if (CategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CategoryValue, m_Category);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member category is null!");
		}
	}

	if (JsonDoc.HasMember("subCategory"))
	{
		const rapidjson::Value& SubCategoryValue = JsonDoc["subCategory"];

		if (SubCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SubCategoryValue, m_SubCategory);
		}
	}

	if (JsonDoc.HasMember("interactionType"))
	{
		const rapidjson::Value& InteractionTypeValue = JsonDoc["interactionType"];

		if (InteractionTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InteractionTypeValue, m_InteractionType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member interactionType is null!");
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata);
		}
	}

	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName);
		}
	}
}


utility::string_t AnalyticsRecord::GetId() const
{
	return m_Id.value();
}

bool AnalyticsRecord::HasId() const
{
	return m_Id.has_value();
}
utility::string_t AnalyticsRecord::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool AnalyticsRecord::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t AnalyticsRecord::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool AnalyticsRecord::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t AnalyticsRecord::GetTimestamp() const
{
	return m_Timestamp.value();
}

bool AnalyticsRecord::HasTimestamp() const
{
	return m_Timestamp.has_value();
}
void AnalyticsRecord::SetTimestamp(const utility::string_t& Value)
{
	m_Timestamp = Value;
}
utility::string_t AnalyticsRecord::GetProductIdentifier() const
{
	return m_ProductIdentifier.value();
}

bool AnalyticsRecord::HasProductIdentifier() const
{
	return m_ProductIdentifier.has_value();
}
void AnalyticsRecord::SetProductIdentifier(const utility::string_t& Value)
{
	m_ProductIdentifier = Value;
}
utility::string_t AnalyticsRecord::GetProductContext() const
{
	return m_ProductContext.value();
}

bool AnalyticsRecord::HasProductContext() const
{
	return m_ProductContext.has_value();
}
void AnalyticsRecord::SetProductContext(const utility::string_t& Value)
{
	m_ProductContext = Value;
}
utility::string_t AnalyticsRecord::GetProductContextSection() const
{
	return m_ProductContextSection.value();
}

bool AnalyticsRecord::HasProductContextSection() const
{
	return m_ProductContextSection.has_value();
}
void AnalyticsRecord::SetProductContextSection(const utility::string_t& Value)
{
	m_ProductContextSection = Value;
}
const std::vector<utility::string_t>& AnalyticsRecord::GetVersionMatrix() const
{
	return m_VersionMatrix.value();
}

bool AnalyticsRecord::HasVersionMatrix() const
{
	return m_VersionMatrix.has_value();
}
void AnalyticsRecord::SetVersionMatrix(const std::vector<utility::string_t>& Value)
{
	m_VersionMatrix = Value;
}
utility::string_t AnalyticsRecord::GetTenantName() const
{
	return m_TenantName.value();
}

bool AnalyticsRecord::HasTenantName() const
{
	return m_TenantName.has_value();
}
void AnalyticsRecord::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t AnalyticsRecord::GetUserId() const
{
	return m_UserId.value();
}

bool AnalyticsRecord::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t AnalyticsRecord::GetCategory() const
{
	return m_Category.value();
}

bool AnalyticsRecord::HasCategory() const
{
	return m_Category.has_value();
}
void AnalyticsRecord::SetCategory(const utility::string_t& Value)
{
	m_Category = Value;
}
utility::string_t AnalyticsRecord::GetSubCategory() const
{
	return m_SubCategory.value();
}

bool AnalyticsRecord::HasSubCategory() const
{
	return m_SubCategory.has_value();
}
void AnalyticsRecord::SetSubCategory(const utility::string_t& Value)
{
	m_SubCategory = Value;
}
utility::string_t AnalyticsRecord::GetInteractionType() const
{
	return m_InteractionType.value();
}

bool AnalyticsRecord::HasInteractionType() const
{
	return m_InteractionType.has_value();
}
void AnalyticsRecord::SetInteractionType(const utility::string_t& Value)
{
	m_InteractionType = Value;
}
const std::map<utility::string_t, utility::string_t>& AnalyticsRecord::GetMetadata() const
{
	return m_Metadata.value();
}

bool AnalyticsRecord::HasMetadata() const
{
	return m_Metadata.has_value();
}
void AnalyticsRecord::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
utility::string_t AnalyticsRecord::GetServiceName() const
{
	return m_ServiceName.value();
}

bool AnalyticsRecord::HasServiceName() const
{
	return m_ServiceName.has_value();
}
void AnalyticsRecord::SetServiceName(const utility::string_t& Value)
{
	m_ServiceName = Value;
}

ApiVersion::ApiVersion()
{
}
ApiVersion::~ApiVersion()
{
}

utility::string_t ApiVersion::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Version.has_value())
	{
		rapidjson::Value VersionValue(TypeToJsonValue(m_Version, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("version", VersionValue, JsonDoc.GetAllocator());
	}

	if (m_DeprecationDatetime.has_value())
	{
		rapidjson::Value DeprecationDatetimeValue(TypeToJsonValue(m_DeprecationDatetime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deprecationDatetime", DeprecationDatetimeValue, JsonDoc.GetAllocator());
	}

	if (m_EndOfLifeDatetime.has_value())
	{
		rapidjson::Value EndOfLifeDatetimeValue(TypeToJsonValue(m_EndOfLifeDatetime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("endOfLifeDatetime", EndOfLifeDatetimeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ApiVersion::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ApiVersion::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version);
		}
	}

	if (JsonDoc.HasMember("deprecationDatetime"))
	{
		const rapidjson::Value& DeprecationDatetimeValue = JsonDoc["deprecationDatetime"];

		if (DeprecationDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeprecationDatetimeValue, m_DeprecationDatetime);
		}
	}

	if (JsonDoc.HasMember("endOfLifeDatetime"))
	{
		const rapidjson::Value& EndOfLifeDatetimeValue = JsonDoc["endOfLifeDatetime"];

		if (EndOfLifeDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EndOfLifeDatetimeValue, m_EndOfLifeDatetime);
		}
	}
}


utility::string_t ApiVersion::GetVersion() const
{
	return m_Version.value();
}

bool ApiVersion::HasVersion() const
{
	return m_Version.has_value();
}
void ApiVersion::SetVersion(const utility::string_t& Value)
{
	m_Version = Value;
}
utility::string_t ApiVersion::GetDeprecationDatetime() const
{
	return m_DeprecationDatetime.value();
}

bool ApiVersion::HasDeprecationDatetime() const
{
	return m_DeprecationDatetime.has_value();
}
void ApiVersion::SetDeprecationDatetime(const utility::string_t& Value)
{
	m_DeprecationDatetime = Value;
}
utility::string_t ApiVersion::GetEndOfLifeDatetime() const
{
	return m_EndOfLifeDatetime.value();
}

bool ApiVersion::HasEndOfLifeDatetime() const
{
	return m_EndOfLifeDatetime.has_value();
}
void ApiVersion::SetEndOfLifeDatetime(const utility::string_t& Value)
{
	m_EndOfLifeDatetime = Value;
}

ApplicationSettingsDto::ApplicationSettingsDto()
{
}
ApplicationSettingsDto::~ApplicationSettingsDto()
{
}

utility::string_t ApplicationSettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ApplicationName.has_value())
	{
		rapidjson::Value ApplicationNameValue(TypeToJsonValue(m_ApplicationName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("applicationName", ApplicationNameValue, JsonDoc.GetAllocator());
	}

	if (m_Context.has_value())
	{
		rapidjson::Value ContextValue(TypeToJsonValue(m_Context, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("context", ContextValue, JsonDoc.GetAllocator());
	}

	if (m_AllowAnonymous.has_value())
	{
		rapidjson::Value AllowAnonymousValue(TypeToJsonValue(m_AllowAnonymous, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowAnonymous", AllowAnonymousValue, JsonDoc.GetAllocator());
	}

	if (m_Settings.has_value())
	{
		rapidjson::Value SettingsValue(TypeToJsonValue(m_Settings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("settings", SettingsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ApplicationSettingsDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ApplicationSettingsDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("applicationName"))
	{
		const rapidjson::Value& ApplicationNameValue = JsonDoc["applicationName"];

		if (ApplicationNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApplicationNameValue, m_ApplicationName);
		}
	}

	if (JsonDoc.HasMember("context"))
	{
		const rapidjson::Value& ContextValue = JsonDoc["context"];

		if (ContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContextValue, m_Context);
		}
	}

	if (JsonDoc.HasMember("allowAnonymous"))
	{
		const rapidjson::Value& AllowAnonymousValue = JsonDoc["allowAnonymous"];

		if (AllowAnonymousValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowAnonymousValue, m_AllowAnonymous);
		}
	}

	if (JsonDoc.HasMember("settings"))
	{
		const rapidjson::Value& SettingsValue = JsonDoc["settings"];

		if (SettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SettingsValue, m_Settings);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
		}
	}
}


utility::string_t ApplicationSettingsDto::GetApplicationName() const
{
	return m_ApplicationName.value();
}

bool ApplicationSettingsDto::HasApplicationName() const
{
	return m_ApplicationName.has_value();
}
utility::string_t ApplicationSettingsDto::GetContext() const
{
	return m_Context.value();
}

bool ApplicationSettingsDto::HasContext() const
{
	return m_Context.has_value();
}
bool ApplicationSettingsDto::GetAllowAnonymous() const
{
	return m_AllowAnonymous.value();
}

bool ApplicationSettingsDto::HasAllowAnonymous() const
{
	return m_AllowAnonymous.has_value();
}
void ApplicationSettingsDto::SetAllowAnonymous(const bool& Value)
{
	m_AllowAnonymous = Value;
}
const std::map<utility::string_t, utility::string_t>& ApplicationSettingsDto::GetSettings() const
{
	return m_Settings.value();
}

bool ApplicationSettingsDto::HasSettings() const
{
	return m_Settings.has_value();
}
void ApplicationSettingsDto::SetSettings(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Settings = Value;
}

AssetDetailDto::AssetDetailDto()
{
}
AssetDetailDto::~AssetDetailDto()
{
}

utility::string_t AssetDetailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_FileName.has_value())
	{
		rapidjson::Value FileNameValue(TypeToJsonValue(m_FileName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fileName", FileNameValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_LanguageCode.has_value())
	{
		rapidjson::Value LanguageCodeValue(TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("languageCode", LanguageCodeValue, JsonDoc.GetAllocator());
	}

	if (m_AssetType.has_value())
	{
		rapidjson::Value AssetTypeValue(TypeToJsonValue(m_AssetType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetType", AssetTypeValue, JsonDoc.GetAllocator());
	}

	if (m_SupportedPlatforms.has_value())
	{
		rapidjson::Value SupportedPlatformsValue(TypeToJsonValue(m_SupportedPlatforms, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("supportedPlatforms", SupportedPlatformsValue, JsonDoc.GetAllocator());
	}

	if (m_Style.has_value())
	{
		rapidjson::Value StyleValue(TypeToJsonValue(m_Style, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("style", StyleValue, JsonDoc.GetAllocator());
	}

	if (m_AddressableId.has_value())
	{
		rapidjson::Value AddressableIdValue(TypeToJsonValue(m_AddressableId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("addressableId", AddressableIdValue, JsonDoc.GetAllocator());
	}

	if (m_ThirdPartyReferenceId.has_value())
	{
		rapidjson::Value ThirdPartyReferenceIdValue(TypeToJsonValue(m_ThirdPartyReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thirdPartyReferenceId", ThirdPartyReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Uri.has_value())
	{
		rapidjson::Value UriValue(TypeToJsonValue(m_Uri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uri", UriValue, JsonDoc.GetAllocator());
	}

	if (m_Checksum.has_value())
	{
		rapidjson::Value ChecksumValue(TypeToJsonValue(m_Checksum, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checksum", ChecksumValue, JsonDoc.GetAllocator());
	}

	if (m_Version.has_value())
	{
		rapidjson::Value VersionValue(TypeToJsonValue(m_Version, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("version", VersionValue, JsonDoc.GetAllocator());
	}

	if (m_MimeType.has_value())
	{
		rapidjson::Value MimeTypeValue(TypeToJsonValue(m_MimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mimeType", MimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_ExternalUri.has_value())
	{
		rapidjson::Value ExternalUriValue(TypeToJsonValue(m_ExternalUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("externalUri", ExternalUriValue, JsonDoc.GetAllocator());
	}

	if (m_ExternalMimeType.has_value())
	{
		rapidjson::Value ExternalMimeTypeValue(TypeToJsonValue(m_ExternalMimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("externalMimeType", ExternalMimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_OriginalAssetUri.has_value())
	{
		rapidjson::Value OriginalAssetUriValue(TypeToJsonValue(m_OriginalAssetUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalAssetUri", OriginalAssetUriValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_SizeInBytes.has_value())
	{
		rapidjson::Value SizeInBytesValue(TypeToJsonValue(m_SizeInBytes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sizeInBytes", SizeInBytesValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetDetailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetDetailDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("fileName"))
	{
		const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

		if (FileNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileNameValue, m_FileName);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member languageCode is null!");
		}
	}

	if (JsonDoc.HasMember("assetType"))
	{
		const rapidjson::Value& AssetTypeValue = JsonDoc["assetType"];

		if (AssetTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetTypeValue, m_AssetType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member assetType is null!");
		}
	}

	if (JsonDoc.HasMember("supportedPlatforms"))
	{
		const rapidjson::Value& SupportedPlatformsValue = JsonDoc["supportedPlatforms"];

		if (SupportedPlatformsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SupportedPlatformsValue, m_SupportedPlatforms);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member supportedPlatforms is null!");
		}
	}

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member style is null!");
		}
	}

	if (JsonDoc.HasMember("addressableId"))
	{
		const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

		if (AddressableIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddressableIdValue, m_AddressableId);
		}
	}

	if (JsonDoc.HasMember("thirdPartyReferenceId"))
	{
		const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

		if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId);
		}
	}

	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri);
		}
	}

	if (JsonDoc.HasMember("checksum"))
	{
		const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

		if (ChecksumValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChecksumValue, m_Checksum);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType);
		}
	}

	if (JsonDoc.HasMember("externalUri"))
	{
		const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

		if (ExternalUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalUriValue, m_ExternalUri);
		}
	}

	if (JsonDoc.HasMember("externalMimeType"))
	{
		const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

		if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType);
		}
	}

	if (JsonDoc.HasMember("originalAssetUri"))
	{
		const rapidjson::Value& OriginalAssetUriValue = JsonDoc["originalAssetUri"];

		if (OriginalAssetUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetUriValue, m_OriginalAssetUri);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("sizeInBytes"))
	{
		const rapidjson::Value& SizeInBytesValue = JsonDoc["sizeInBytes"];

		if (SizeInBytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeInBytesValue, m_SizeInBytes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sizeInBytes is null!");
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}
}


utility::string_t AssetDetailDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool AssetDetailDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t AssetDetailDto::GetId() const
{
	return m_Id.value();
}

bool AssetDetailDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t AssetDetailDto::GetFileName() const
{
	return m_FileName.value();
}

bool AssetDetailDto::HasFileName() const
{
	return m_FileName.has_value();
}
utility::string_t AssetDetailDto::GetName() const
{
	return m_Name.value();
}

bool AssetDetailDto::HasName() const
{
	return m_Name.has_value();
}
void AssetDetailDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t AssetDetailDto::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool AssetDetailDto::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void AssetDetailDto::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t AssetDetailDto::GetAssetType() const
{
	return m_AssetType.value();
}

bool AssetDetailDto::HasAssetType() const
{
	return m_AssetType.has_value();
}
void AssetDetailDto::SetAssetType(const utility::string_t& Value)
{
	m_AssetType = Value;
}
const std::vector<utility::string_t>& AssetDetailDto::GetSupportedPlatforms() const
{
	return m_SupportedPlatforms.value();
}

bool AssetDetailDto::HasSupportedPlatforms() const
{
	return m_SupportedPlatforms.has_value();
}
void AssetDetailDto::SetSupportedPlatforms(const std::vector<utility::string_t>& Value)
{
	m_SupportedPlatforms = Value;
}
const std::vector<utility::string_t>& AssetDetailDto::GetStyle() const
{
	return m_Style.value();
}

bool AssetDetailDto::HasStyle() const
{
	return m_Style.has_value();
}
void AssetDetailDto::SetStyle(const std::vector<utility::string_t>& Value)
{
	m_Style = Value;
}
utility::string_t AssetDetailDto::GetAddressableId() const
{
	return m_AddressableId.value();
}

bool AssetDetailDto::HasAddressableId() const
{
	return m_AddressableId.has_value();
}
void AssetDetailDto::SetAddressableId(const utility::string_t& Value)
{
	m_AddressableId = Value;
}
utility::string_t AssetDetailDto::GetThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.value();
}

bool AssetDetailDto::HasThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.has_value();
}
void AssetDetailDto::SetThirdPartyReferenceId(const utility::string_t& Value)
{
	m_ThirdPartyReferenceId = Value;
}
utility::string_t AssetDetailDto::GetUri() const
{
	return m_Uri.value();
}

bool AssetDetailDto::HasUri() const
{
	return m_Uri.has_value();
}
utility::string_t AssetDetailDto::GetChecksum() const
{
	return m_Checksum.value();
}

bool AssetDetailDto::HasChecksum() const
{
	return m_Checksum.has_value();
}
utility::string_t AssetDetailDto::GetVersion() const
{
	return m_Version.value();
}

bool AssetDetailDto::HasVersion() const
{
	return m_Version.has_value();
}
utility::string_t AssetDetailDto::GetMimeType() const
{
	return m_MimeType.value();
}

bool AssetDetailDto::HasMimeType() const
{
	return m_MimeType.has_value();
}
utility::string_t AssetDetailDto::GetExternalUri() const
{
	return m_ExternalUri.value();
}

bool AssetDetailDto::HasExternalUri() const
{
	return m_ExternalUri.has_value();
}
void AssetDetailDto::SetExternalUri(const utility::string_t& Value)
{
	m_ExternalUri = Value;
}
utility::string_t AssetDetailDto::GetExternalMimeType() const
{
	return m_ExternalMimeType.value();
}

bool AssetDetailDto::HasExternalMimeType() const
{
	return m_ExternalMimeType.has_value();
}
void AssetDetailDto::SetExternalMimeType(const utility::string_t& Value)
{
	m_ExternalMimeType = Value;
}
utility::string_t AssetDetailDto::GetOriginalAssetUri() const
{
	return m_OriginalAssetUri.value();
}

bool AssetDetailDto::HasOriginalAssetUri() const
{
	return m_OriginalAssetUri.has_value();
}
void AssetDetailDto::SetOriginalAssetUri(const utility::string_t& Value)
{
	m_OriginalAssetUri = Value;
}
const std::vector<utility::string_t>& AssetDetailDto::GetTags() const
{
	return m_Tags.value();
}

bool AssetDetailDto::HasTags() const
{
	return m_Tags.has_value();
}
void AssetDetailDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
int64_t AssetDetailDto::GetSizeInBytes() const
{
	return m_SizeInBytes.value();
}

bool AssetDetailDto::HasSizeInBytes() const
{
	return m_SizeInBytes.has_value();
}
utility::string_t AssetDetailDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool AssetDetailDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t AssetDetailDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool AssetDetailDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t AssetDetailDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool AssetDetailDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
utility::string_t AssetDetailDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool AssetDetailDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}

AuthDto::AuthDto()
{
}
AuthDto::~AuthDto()
{
}

utility::string_t AuthDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_AccessToken.has_value())
	{
		rapidjson::Value AccessTokenValue(TypeToJsonValue(m_AccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("accessToken", AccessTokenValue, JsonDoc.GetAllocator());
	}

	if (m_AccessTokenExpiresAt.has_value())
	{
		rapidjson::Value AccessTokenExpiresAtValue(TypeToJsonValue(m_AccessTokenExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("accessTokenExpiresAt", AccessTokenExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_RefreshToken.has_value())
	{
		rapidjson::Value RefreshTokenValue(TypeToJsonValue(m_RefreshToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("refreshToken", RefreshTokenValue, JsonDoc.GetAllocator());
	}

	if (m_RefreshTokenExpiresAt.has_value())
	{
		rapidjson::Value RefreshTokenExpiresAtValue(TypeToJsonValue(m_RefreshTokenExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("refreshTokenExpiresAt", RefreshTokenExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationIds.has_value())
	{
		rapidjson::Value OrganizationIdsValue(TypeToJsonValue(m_OrganizationIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationIds", OrganizationIdsValue, JsonDoc.GetAllocator());
	}

	if (m_DeviceId.has_value())
	{
		rapidjson::Value DeviceIdValue(TypeToJsonValue(m_DeviceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deviceId", DeviceIdValue, JsonDoc.GetAllocator());
	}

	if (m_DefaultSettings.has_value())
	{
		rapidjson::Value DefaultSettingsValue(TypeToJsonValue(m_DefaultSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("defaultSettings", DefaultSettingsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AuthDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AuthDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("accessToken"))
	{
		const rapidjson::Value& AccessTokenValue = JsonDoc["accessToken"];

		if (AccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AccessTokenValue, m_AccessToken);
		}
	}

	if (JsonDoc.HasMember("accessTokenExpiresAt"))
	{
		const rapidjson::Value& AccessTokenExpiresAtValue = JsonDoc["accessTokenExpiresAt"];

		if (AccessTokenExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AccessTokenExpiresAtValue, m_AccessTokenExpiresAt);
		}
	}

	if (JsonDoc.HasMember("refreshToken"))
	{
		const rapidjson::Value& RefreshTokenValue = JsonDoc["refreshToken"];

		if (RefreshTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefreshTokenValue, m_RefreshToken);
		}
	}

	if (JsonDoc.HasMember("refreshTokenExpiresAt"))
	{
		const rapidjson::Value& RefreshTokenExpiresAtValue = JsonDoc["refreshTokenExpiresAt"];

		if (RefreshTokenExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefreshTokenExpiresAtValue, m_RefreshTokenExpiresAt);
		}
	}

	if (JsonDoc.HasMember("organizationIds"))
	{
		const rapidjson::Value& OrganizationIdsValue = JsonDoc["organizationIds"];

		if (OrganizationIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdsValue, m_OrganizationIds);
		}
	}

	if (JsonDoc.HasMember("deviceId"))
	{
		const rapidjson::Value& DeviceIdValue = JsonDoc["deviceId"];

		if (DeviceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeviceIdValue, m_DeviceId);
		}
	}

	if (JsonDoc.HasMember("defaultSettings"))
	{
		const rapidjson::Value& DefaultSettingsValue = JsonDoc["defaultSettings"];

		if (DefaultSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DefaultSettingsValue, m_DefaultSettings);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member defaultSettings is null!");
		}
	}
}


utility::string_t AuthDto::GetUserId() const
{
	return m_UserId.value();
}

bool AuthDto::HasUserId() const
{
	return m_UserId.has_value();
}
void AuthDto::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
utility::string_t AuthDto::GetAccessToken() const
{
	return m_AccessToken.value();
}

bool AuthDto::HasAccessToken() const
{
	return m_AccessToken.has_value();
}
void AuthDto::SetAccessToken(const utility::string_t& Value)
{
	m_AccessToken = Value;
}
utility::string_t AuthDto::GetAccessTokenExpiresAt() const
{
	return m_AccessTokenExpiresAt.value();
}

bool AuthDto::HasAccessTokenExpiresAt() const
{
	return m_AccessTokenExpiresAt.has_value();
}
void AuthDto::SetAccessTokenExpiresAt(const utility::string_t& Value)
{
	m_AccessTokenExpiresAt = Value;
}
utility::string_t AuthDto::GetRefreshToken() const
{
	return m_RefreshToken.value();
}

bool AuthDto::HasRefreshToken() const
{
	return m_RefreshToken.has_value();
}
void AuthDto::SetRefreshToken(const utility::string_t& Value)
{
	m_RefreshToken = Value;
}
utility::string_t AuthDto::GetRefreshTokenExpiresAt() const
{
	return m_RefreshTokenExpiresAt.value();
}

bool AuthDto::HasRefreshTokenExpiresAt() const
{
	return m_RefreshTokenExpiresAt.has_value();
}
void AuthDto::SetRefreshTokenExpiresAt(const utility::string_t& Value)
{
	m_RefreshTokenExpiresAt = Value;
}
const std::vector<utility::string_t>& AuthDto::GetOrganizationIds() const
{
	return m_OrganizationIds.value();
}

bool AuthDto::HasOrganizationIds() const
{
	return m_OrganizationIds.has_value();
}
void AuthDto::SetOrganizationIds(const std::vector<utility::string_t>& Value)
{
	m_OrganizationIds = Value;
}
utility::string_t AuthDto::GetDeviceId() const
{
	return m_DeviceId.value();
}

bool AuthDto::HasDeviceId() const
{
	return m_DeviceId.has_value();
}
void AuthDto::SetDeviceId(const utility::string_t& Value)
{
	m_DeviceId = Value;
}
std::shared_ptr<DefaultSettings> AuthDto::GetDefaultSettings() const
{
	return m_DefaultSettings.value();
}

bool AuthDto::HasDefaultSettings() const
{
	return m_DefaultSettings.has_value();
}
void AuthDto::SetDefaultSettings(const std::shared_ptr<DefaultSettings>& Value)
{
	m_DefaultSettings = Value;
}

BugReportAssignRequest::BugReportAssignRequest()
{
}
BugReportAssignRequest::~BugReportAssignRequest()
{
}

utility::string_t BugReportAssignRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AssignTo.has_value())
	{
		rapidjson::Value AssignToValue(TypeToJsonValue(m_AssignTo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignTo", AssignToValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportAssignRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportAssignRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("assignTo"))
	{
		const rapidjson::Value& AssignToValue = JsonDoc["assignTo"];

		if (AssignToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignToValue, m_AssignTo);
		}
	}
}


utility::string_t BugReportAssignRequest::GetAssignTo() const
{
	return m_AssignTo.value();
}

bool BugReportAssignRequest::HasAssignTo() const
{
	return m_AssignTo.has_value();
}
void BugReportAssignRequest::SetAssignTo(const utility::string_t& Value)
{
	m_AssignTo = Value;
}

BugReportCreateRequest::BugReportCreateRequest()
{
}
BugReportCreateRequest::~BugReportCreateRequest()
{
}

utility::string_t BugReportCreateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_StepsToReproduce.has_value())
	{
		rapidjson::Value StepsToReproduceValue(TypeToJsonValue(m_StepsToReproduce, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("stepsToReproduce", StepsToReproduceValue, JsonDoc.GetAllocator());
	}

	if (m_Route.has_value())
	{
		rapidjson::Value RouteValue(TypeToJsonValue(m_Route, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("route", RouteValue, JsonDoc.GetAllocator());
	}

	if (m_Viewport.has_value())
	{
		rapidjson::Value ViewportValue(TypeToJsonValue(m_Viewport, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("viewport", ViewportValue, JsonDoc.GetAllocator());
	}

	if (m_ScreenshotBase64.has_value())
	{
		rapidjson::Value ScreenshotBase64Value(TypeToJsonValue(m_ScreenshotBase64, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("screenshotBase64", ScreenshotBase64Value, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportCreateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportCreateRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member title is null!");
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("stepsToReproduce"))
	{
		const rapidjson::Value& StepsToReproduceValue = JsonDoc["stepsToReproduce"];

		if (StepsToReproduceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StepsToReproduceValue, m_StepsToReproduce);
		}
	}

	if (JsonDoc.HasMember("route"))
	{
		const rapidjson::Value& RouteValue = JsonDoc["route"];

		if (RouteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RouteValue, m_Route);
		}
	}

	if (JsonDoc.HasMember("viewport"))
	{
		const rapidjson::Value& ViewportValue = JsonDoc["viewport"];

		if (ViewportValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ViewportValue, m_Viewport);
		}
	}

	if (JsonDoc.HasMember("screenshotBase64"))
	{
		const rapidjson::Value& ScreenshotBase64Value = JsonDoc["screenshotBase64"];

		if (ScreenshotBase64Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScreenshotBase64Value, m_ScreenshotBase64);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}
}


utility::string_t BugReportCreateRequest::GetTitle() const
{
	return m_Title.value();
}

bool BugReportCreateRequest::HasTitle() const
{
	return m_Title.has_value();
}
void BugReportCreateRequest::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
utility::string_t BugReportCreateRequest::GetDescription() const
{
	return m_Description.value();
}

bool BugReportCreateRequest::HasDescription() const
{
	return m_Description.has_value();
}
void BugReportCreateRequest::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t BugReportCreateRequest::GetStepsToReproduce() const
{
	return m_StepsToReproduce.value();
}

bool BugReportCreateRequest::HasStepsToReproduce() const
{
	return m_StepsToReproduce.has_value();
}
void BugReportCreateRequest::SetStepsToReproduce(const utility::string_t& Value)
{
	m_StepsToReproduce = Value;
}
utility::string_t BugReportCreateRequest::GetRoute() const
{
	return m_Route.value();
}

bool BugReportCreateRequest::HasRoute() const
{
	return m_Route.has_value();
}
void BugReportCreateRequest::SetRoute(const utility::string_t& Value)
{
	m_Route = Value;
}
utility::string_t BugReportCreateRequest::GetViewport() const
{
	return m_Viewport.value();
}

bool BugReportCreateRequest::HasViewport() const
{
	return m_Viewport.has_value();
}
void BugReportCreateRequest::SetViewport(const utility::string_t& Value)
{
	m_Viewport = Value;
}
utility::string_t BugReportCreateRequest::GetScreenshotBase64() const
{
	return m_ScreenshotBase64.value();
}

bool BugReportCreateRequest::HasScreenshotBase64() const
{
	return m_ScreenshotBase64.has_value();
}
void BugReportCreateRequest::SetScreenshotBase64(const utility::string_t& Value)
{
	m_ScreenshotBase64 = Value;
}
utility::string_t BugReportCreateRequest::GetType() const
{
	return m_Type.value();
}

bool BugReportCreateRequest::HasType() const
{
	return m_Type.has_value();
}
void BugReportCreateRequest::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}

BugReportDetailDto::BugReportDetailDto()
{
}
BugReportDetailDto::~BugReportDetailDto()
{
}

utility::string_t BugReportDetailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_StepsToReproduce.has_value())
	{
		rapidjson::Value StepsToReproduceValue(TypeToJsonValue(m_StepsToReproduce, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("stepsToReproduce", StepsToReproduceValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserAgent.has_value())
	{
		rapidjson::Value UserAgentValue(TypeToJsonValue(m_UserAgent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userAgent", UserAgentValue, JsonDoc.GetAllocator());
	}

	if (m_Viewport.has_value())
	{
		rapidjson::Value ViewportValue(TypeToJsonValue(m_Viewport, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("viewport", ViewportValue, JsonDoc.GetAllocator());
	}

	if (m_AcknowledgedBy.has_value())
	{
		rapidjson::Value AcknowledgedByValue(TypeToJsonValue(m_AcknowledgedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("acknowledgedBy", AcknowledgedByValue, JsonDoc.GetAllocator());
	}

	if (m_ResolvedBy.has_value())
	{
		rapidjson::Value ResolvedByValue(TypeToJsonValue(m_ResolvedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolvedBy", ResolvedByValue, JsonDoc.GetAllocator());
	}

	if (m_AssignedBy.has_value())
	{
		rapidjson::Value AssignedByValue(TypeToJsonValue(m_AssignedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedBy", AssignedByValue, JsonDoc.GetAllocator());
	}

	if (m_AssignedAt.has_value())
	{
		rapidjson::Value AssignedAtValue(TypeToJsonValue(m_AssignedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedAt", AssignedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_UserEmail.has_value())
	{
		rapidjson::Value UserEmailValue(TypeToJsonValue(m_UserEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userEmail", UserEmailValue, JsonDoc.GetAllocator());
	}

	if (m_Route.has_value())
	{
		rapidjson::Value RouteValue(TypeToJsonValue(m_Route, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("route", RouteValue, JsonDoc.GetAllocator());
	}

	if (m_HasScreenshot.has_value())
	{
		rapidjson::Value HasScreenshotValue(TypeToJsonValue(m_HasScreenshot, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hasScreenshot", HasScreenshotValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_AcknowledgedAt.has_value())
	{
		rapidjson::Value AcknowledgedAtValue(TypeToJsonValue(m_AcknowledgedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("acknowledgedAt", AcknowledgedAtValue, JsonDoc.GetAllocator());
	}

	if (m_ResolvedAt.has_value())
	{
		rapidjson::Value ResolvedAtValue(TypeToJsonValue(m_ResolvedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolvedAt", ResolvedAtValue, JsonDoc.GetAllocator());
	}

	if (m_AssignedTo.has_value())
	{
		rapidjson::Value AssignedToValue(TypeToJsonValue(m_AssignedTo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedTo", AssignedToValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportDetailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportDetailDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("stepsToReproduce"))
	{
		const rapidjson::Value& StepsToReproduceValue = JsonDoc["stepsToReproduce"];

		if (StepsToReproduceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StepsToReproduceValue, m_StepsToReproduce);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("userAgent"))
	{
		const rapidjson::Value& UserAgentValue = JsonDoc["userAgent"];

		if (UserAgentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserAgentValue, m_UserAgent);
		}
	}

	if (JsonDoc.HasMember("viewport"))
	{
		const rapidjson::Value& ViewportValue = JsonDoc["viewport"];

		if (ViewportValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ViewportValue, m_Viewport);
		}
	}

	if (JsonDoc.HasMember("acknowledgedBy"))
	{
		const rapidjson::Value& AcknowledgedByValue = JsonDoc["acknowledgedBy"];

		if (AcknowledgedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AcknowledgedByValue, m_AcknowledgedBy);
		}
	}

	if (JsonDoc.HasMember("resolvedBy"))
	{
		const rapidjson::Value& ResolvedByValue = JsonDoc["resolvedBy"];

		if (ResolvedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolvedByValue, m_ResolvedBy);
		}
	}

	if (JsonDoc.HasMember("assignedBy"))
	{
		const rapidjson::Value& AssignedByValue = JsonDoc["assignedBy"];

		if (AssignedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedByValue, m_AssignedBy);
		}
	}

	if (JsonDoc.HasMember("assignedAt"))
	{
		const rapidjson::Value& AssignedAtValue = JsonDoc["assignedAt"];

		if (AssignedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedAtValue, m_AssignedAt);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("userEmail"))
	{
		const rapidjson::Value& UserEmailValue = JsonDoc["userEmail"];

		if (UserEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserEmailValue, m_UserEmail);
		}
	}

	if (JsonDoc.HasMember("route"))
	{
		const rapidjson::Value& RouteValue = JsonDoc["route"];

		if (RouteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RouteValue, m_Route);
		}
	}

	if (JsonDoc.HasMember("hasScreenshot"))
	{
		const rapidjson::Value& HasScreenshotValue = JsonDoc["hasScreenshot"];

		if (HasScreenshotValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasScreenshotValue, m_HasScreenshot);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member hasScreenshot is null!");
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("acknowledgedAt"))
	{
		const rapidjson::Value& AcknowledgedAtValue = JsonDoc["acknowledgedAt"];

		if (AcknowledgedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AcknowledgedAtValue, m_AcknowledgedAt);
		}
	}

	if (JsonDoc.HasMember("resolvedAt"))
	{
		const rapidjson::Value& ResolvedAtValue = JsonDoc["resolvedAt"];

		if (ResolvedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolvedAtValue, m_ResolvedAt);
		}
	}

	if (JsonDoc.HasMember("assignedTo"))
	{
		const rapidjson::Value& AssignedToValue = JsonDoc["assignedTo"];

		if (AssignedToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedToValue, m_AssignedTo);
		}
	}
}


utility::string_t BugReportDetailDto::GetDescription() const
{
	return m_Description.value();
}

bool BugReportDetailDto::HasDescription() const
{
	return m_Description.has_value();
}
void BugReportDetailDto::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t BugReportDetailDto::GetStepsToReproduce() const
{
	return m_StepsToReproduce.value();
}

bool BugReportDetailDto::HasStepsToReproduce() const
{
	return m_StepsToReproduce.has_value();
}
void BugReportDetailDto::SetStepsToReproduce(const utility::string_t& Value)
{
	m_StepsToReproduce = Value;
}
utility::string_t BugReportDetailDto::GetUserId() const
{
	return m_UserId.value();
}

bool BugReportDetailDto::HasUserId() const
{
	return m_UserId.has_value();
}
void BugReportDetailDto::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
utility::string_t BugReportDetailDto::GetUserAgent() const
{
	return m_UserAgent.value();
}

bool BugReportDetailDto::HasUserAgent() const
{
	return m_UserAgent.has_value();
}
void BugReportDetailDto::SetUserAgent(const utility::string_t& Value)
{
	m_UserAgent = Value;
}
utility::string_t BugReportDetailDto::GetViewport() const
{
	return m_Viewport.value();
}

bool BugReportDetailDto::HasViewport() const
{
	return m_Viewport.has_value();
}
void BugReportDetailDto::SetViewport(const utility::string_t& Value)
{
	m_Viewport = Value;
}
utility::string_t BugReportDetailDto::GetAcknowledgedBy() const
{
	return m_AcknowledgedBy.value();
}

bool BugReportDetailDto::HasAcknowledgedBy() const
{
	return m_AcknowledgedBy.has_value();
}
void BugReportDetailDto::SetAcknowledgedBy(const utility::string_t& Value)
{
	m_AcknowledgedBy = Value;
}
utility::string_t BugReportDetailDto::GetResolvedBy() const
{
	return m_ResolvedBy.value();
}

bool BugReportDetailDto::HasResolvedBy() const
{
	return m_ResolvedBy.has_value();
}
void BugReportDetailDto::SetResolvedBy(const utility::string_t& Value)
{
	m_ResolvedBy = Value;
}
utility::string_t BugReportDetailDto::GetAssignedBy() const
{
	return m_AssignedBy.value();
}

bool BugReportDetailDto::HasAssignedBy() const
{
	return m_AssignedBy.has_value();
}
void BugReportDetailDto::SetAssignedBy(const utility::string_t& Value)
{
	m_AssignedBy = Value;
}
utility::string_t BugReportDetailDto::GetAssignedAt() const
{
	return m_AssignedAt.value();
}

bool BugReportDetailDto::HasAssignedAt() const
{
	return m_AssignedAt.has_value();
}
void BugReportDetailDto::SetAssignedAt(const utility::string_t& Value)
{
	m_AssignedAt = Value;
}
utility::string_t BugReportDetailDto::GetId() const
{
	return m_Id.value();
}

bool BugReportDetailDto::HasId() const
{
	return m_Id.has_value();
}
void BugReportDetailDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t BugReportDetailDto::GetTitle() const
{
	return m_Title.value();
}

bool BugReportDetailDto::HasTitle() const
{
	return m_Title.has_value();
}
void BugReportDetailDto::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
utility::string_t BugReportDetailDto::GetStatus() const
{
	return m_Status.value();
}

bool BugReportDetailDto::HasStatus() const
{
	return m_Status.has_value();
}
void BugReportDetailDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t BugReportDetailDto::GetType() const
{
	return m_Type.value();
}

bool BugReportDetailDto::HasType() const
{
	return m_Type.has_value();
}
void BugReportDetailDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t BugReportDetailDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool BugReportDetailDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void BugReportDetailDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t BugReportDetailDto::GetUserEmail() const
{
	return m_UserEmail.value();
}

bool BugReportDetailDto::HasUserEmail() const
{
	return m_UserEmail.has_value();
}
void BugReportDetailDto::SetUserEmail(const utility::string_t& Value)
{
	m_UserEmail = Value;
}
utility::string_t BugReportDetailDto::GetRoute() const
{
	return m_Route.value();
}

bool BugReportDetailDto::HasRoute() const
{
	return m_Route.has_value();
}
void BugReportDetailDto::SetRoute(const utility::string_t& Value)
{
	m_Route = Value;
}
bool BugReportDetailDto::GetHasScreenshot() const
{
	return m_HasScreenshot.value();
}

bool BugReportDetailDto::HasHasScreenshot() const
{
	return m_HasScreenshot.has_value();
}
void BugReportDetailDto::SetHasScreenshot(const bool& Value)
{
	m_HasScreenshot = Value;
}
utility::string_t BugReportDetailDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool BugReportDetailDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void BugReportDetailDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t BugReportDetailDto::GetAcknowledgedAt() const
{
	return m_AcknowledgedAt.value();
}

bool BugReportDetailDto::HasAcknowledgedAt() const
{
	return m_AcknowledgedAt.has_value();
}
void BugReportDetailDto::SetAcknowledgedAt(const utility::string_t& Value)
{
	m_AcknowledgedAt = Value;
}
utility::string_t BugReportDetailDto::GetResolvedAt() const
{
	return m_ResolvedAt.value();
}

bool BugReportDetailDto::HasResolvedAt() const
{
	return m_ResolvedAt.has_value();
}
void BugReportDetailDto::SetResolvedAt(const utility::string_t& Value)
{
	m_ResolvedAt = Value;
}
utility::string_t BugReportDetailDto::GetAssignedTo() const
{
	return m_AssignedTo.value();
}

bool BugReportDetailDto::HasAssignedTo() const
{
	return m_AssignedTo.has_value();
}
void BugReportDetailDto::SetAssignedTo(const utility::string_t& Value)
{
	m_AssignedTo = Value;
}

BugReportListDto::BugReportListDto()
{
}
BugReportListDto::~BugReportListDto()
{
}

utility::string_t BugReportListDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_UserEmail.has_value())
	{
		rapidjson::Value UserEmailValue(TypeToJsonValue(m_UserEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userEmail", UserEmailValue, JsonDoc.GetAllocator());
	}

	if (m_Route.has_value())
	{
		rapidjson::Value RouteValue(TypeToJsonValue(m_Route, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("route", RouteValue, JsonDoc.GetAllocator());
	}

	if (m_HasScreenshot.has_value())
	{
		rapidjson::Value HasScreenshotValue(TypeToJsonValue(m_HasScreenshot, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hasScreenshot", HasScreenshotValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_AcknowledgedAt.has_value())
	{
		rapidjson::Value AcknowledgedAtValue(TypeToJsonValue(m_AcknowledgedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("acknowledgedAt", AcknowledgedAtValue, JsonDoc.GetAllocator());
	}

	if (m_ResolvedAt.has_value())
	{
		rapidjson::Value ResolvedAtValue(TypeToJsonValue(m_ResolvedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolvedAt", ResolvedAtValue, JsonDoc.GetAllocator());
	}

	if (m_AssignedTo.has_value())
	{
		rapidjson::Value AssignedToValue(TypeToJsonValue(m_AssignedTo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedTo", AssignedToValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportListDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportListDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("userEmail"))
	{
		const rapidjson::Value& UserEmailValue = JsonDoc["userEmail"];

		if (UserEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserEmailValue, m_UserEmail);
		}
	}

	if (JsonDoc.HasMember("route"))
	{
		const rapidjson::Value& RouteValue = JsonDoc["route"];

		if (RouteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RouteValue, m_Route);
		}
	}

	if (JsonDoc.HasMember("hasScreenshot"))
	{
		const rapidjson::Value& HasScreenshotValue = JsonDoc["hasScreenshot"];

		if (HasScreenshotValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasScreenshotValue, m_HasScreenshot);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member hasScreenshot is null!");
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("acknowledgedAt"))
	{
		const rapidjson::Value& AcknowledgedAtValue = JsonDoc["acknowledgedAt"];

		if (AcknowledgedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AcknowledgedAtValue, m_AcknowledgedAt);
		}
	}

	if (JsonDoc.HasMember("resolvedAt"))
	{
		const rapidjson::Value& ResolvedAtValue = JsonDoc["resolvedAt"];

		if (ResolvedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolvedAtValue, m_ResolvedAt);
		}
	}

	if (JsonDoc.HasMember("assignedTo"))
	{
		const rapidjson::Value& AssignedToValue = JsonDoc["assignedTo"];

		if (AssignedToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedToValue, m_AssignedTo);
		}
	}
}


utility::string_t BugReportListDto::GetId() const
{
	return m_Id.value();
}

bool BugReportListDto::HasId() const
{
	return m_Id.has_value();
}
void BugReportListDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t BugReportListDto::GetTitle() const
{
	return m_Title.value();
}

bool BugReportListDto::HasTitle() const
{
	return m_Title.has_value();
}
void BugReportListDto::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
utility::string_t BugReportListDto::GetStatus() const
{
	return m_Status.value();
}

bool BugReportListDto::HasStatus() const
{
	return m_Status.has_value();
}
void BugReportListDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t BugReportListDto::GetType() const
{
	return m_Type.value();
}

bool BugReportListDto::HasType() const
{
	return m_Type.has_value();
}
void BugReportListDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t BugReportListDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool BugReportListDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void BugReportListDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t BugReportListDto::GetUserEmail() const
{
	return m_UserEmail.value();
}

bool BugReportListDto::HasUserEmail() const
{
	return m_UserEmail.has_value();
}
void BugReportListDto::SetUserEmail(const utility::string_t& Value)
{
	m_UserEmail = Value;
}
utility::string_t BugReportListDto::GetRoute() const
{
	return m_Route.value();
}

bool BugReportListDto::HasRoute() const
{
	return m_Route.has_value();
}
void BugReportListDto::SetRoute(const utility::string_t& Value)
{
	m_Route = Value;
}
bool BugReportListDto::GetHasScreenshot() const
{
	return m_HasScreenshot.value();
}

bool BugReportListDto::HasHasScreenshot() const
{
	return m_HasScreenshot.has_value();
}
void BugReportListDto::SetHasScreenshot(const bool& Value)
{
	m_HasScreenshot = Value;
}
utility::string_t BugReportListDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool BugReportListDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void BugReportListDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t BugReportListDto::GetAcknowledgedAt() const
{
	return m_AcknowledgedAt.value();
}

bool BugReportListDto::HasAcknowledgedAt() const
{
	return m_AcknowledgedAt.has_value();
}
void BugReportListDto::SetAcknowledgedAt(const utility::string_t& Value)
{
	m_AcknowledgedAt = Value;
}
utility::string_t BugReportListDto::GetResolvedAt() const
{
	return m_ResolvedAt.value();
}

bool BugReportListDto::HasResolvedAt() const
{
	return m_ResolvedAt.has_value();
}
void BugReportListDto::SetResolvedAt(const utility::string_t& Value)
{
	m_ResolvedAt = Value;
}
utility::string_t BugReportListDto::GetAssignedTo() const
{
	return m_AssignedTo.value();
}

bool BugReportListDto::HasAssignedTo() const
{
	return m_AssignedTo.has_value();
}
void BugReportListDto::SetAssignedTo(const utility::string_t& Value)
{
	m_AssignedTo = Value;
}

BugReportListResponse::BugReportListResponse()
{
}
BugReportListResponse::~BugReportListResponse()
{
}

utility::string_t BugReportListResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_TotalCount.has_value())
	{
		rapidjson::Value TotalCountValue(TypeToJsonValue(m_TotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalCount", TotalCountValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportListResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportListResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("totalCount"))
	{
		const rapidjson::Value& TotalCountValue = JsonDoc["totalCount"];

		if (TotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalCountValue, m_TotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalCount is null!");
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member limit is null!");
		}
	}
}


const std::vector<std::shared_ptr<BugReportListDto>>& BugReportListResponse::GetItems() const
{
	return m_Items.value();
}

bool BugReportListResponse::HasItems() const
{
	return m_Items.has_value();
}
void BugReportListResponse::SetItems(const std::vector<std::shared_ptr<BugReportListDto>>& Value)
{
	m_Items = Value;
}
int64_t BugReportListResponse::GetTotalCount() const
{
	return m_TotalCount.value();
}

bool BugReportListResponse::HasTotalCount() const
{
	return m_TotalCount.has_value();
}
void BugReportListResponse::SetTotalCount(int64_t Value)
{
	m_TotalCount = Value;
}
int32_t BugReportListResponse::GetSkip() const
{
	return m_Skip.value();
}

bool BugReportListResponse::HasSkip() const
{
	return m_Skip.has_value();
}
void BugReportListResponse::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t BugReportListResponse::GetLimit() const
{
	return m_Limit.value();
}

bool BugReportListResponse::HasLimit() const
{
	return m_Limit.has_value();
}
void BugReportListResponse::SetLimit(int32_t Value)
{
	m_Limit = Value;
}

BugReportStatusUpdateRequest::BugReportStatusUpdateRequest()
{
}
BugReportStatusUpdateRequest::~BugReportStatusUpdateRequest()
{
}

utility::string_t BugReportStatusUpdateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BugReportStatusUpdateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BugReportStatusUpdateRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member status is null!");
		}
	}
}


utility::string_t BugReportStatusUpdateRequest::GetStatus() const
{
	return m_Status.value();
}

bool BugReportStatusUpdateRequest::HasStatus() const
{
	return m_Status.has_value();
}
void BugReportStatusUpdateRequest::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}

CancelRedriveResult::CancelRedriveResult()
{
}
CancelRedriveResult::~CancelRedriveResult()
{
}

utility::string_t CancelRedriveResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Success.has_value())
	{
		rapidjson::Value SuccessValue(TypeToJsonValue(m_Success, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("success", SuccessValue, JsonDoc.GetAllocator());
	}

	if (m_ApproximateNumberOfMessagesMoved.has_value())
	{
		rapidjson::Value ApproximateNumberOfMessagesMovedValue(TypeToJsonValue(m_ApproximateNumberOfMessagesMoved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("approximateNumberOfMessagesMoved", ApproximateNumberOfMessagesMovedValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CancelRedriveResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CancelRedriveResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("success"))
	{
		const rapidjson::Value& SuccessValue = JsonDoc["success"];

		if (SuccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessValue, m_Success);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
		}
	}

	if (JsonDoc.HasMember("approximateNumberOfMessagesMoved"))
	{
		const rapidjson::Value& ApproximateNumberOfMessagesMovedValue = JsonDoc["approximateNumberOfMessagesMoved"];

		if (ApproximateNumberOfMessagesMovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApproximateNumberOfMessagesMovedValue, m_ApproximateNumberOfMessagesMoved);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member approximateNumberOfMessagesMoved is null!");
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
	}
}


bool CancelRedriveResult::GetSuccess() const
{
	return m_Success.value();
}

bool CancelRedriveResult::HasSuccess() const
{
	return m_Success.has_value();
}
void CancelRedriveResult::SetSuccess(const bool& Value)
{
	m_Success = Value;
}
int64_t CancelRedriveResult::GetApproximateNumberOfMessagesMoved() const
{
	return m_ApproximateNumberOfMessagesMoved.value();
}

bool CancelRedriveResult::HasApproximateNumberOfMessagesMoved() const
{
	return m_ApproximateNumberOfMessagesMoved.has_value();
}
void CancelRedriveResult::SetApproximateNumberOfMessagesMoved(int64_t Value)
{
	m_ApproximateNumberOfMessagesMoved = Value;
}
utility::string_t CancelRedriveResult::GetError() const
{
	return m_Error.value();
}

bool CancelRedriveResult::HasError() const
{
	return m_Error.has_value();
}
void CancelRedriveResult::SetError(const utility::string_t& Value)
{
	m_Error = Value;
}

ChaosMonkeyConfig::ChaosMonkeyConfig()
{
}
ChaosMonkeyConfig::~ChaosMonkeyConfig()
{
}

utility::string_t ChaosMonkeyConfig::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Qn.has_value())
	{
		rapidjson::Value QnValue(TypeToJsonValue(m_Qn, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qn", QnValue, JsonDoc.GetAllocator());
	}

	if (m_En.has_value())
	{
		rapidjson::Value EnValue(TypeToJsonValue(m_En, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("en", EnValue, JsonDoc.GetAllocator());
	}

	if (m_Fl.has_value())
	{
		rapidjson::Value FlValue(TypeToJsonValue(m_Fl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fl", FlValue, JsonDoc.GetAllocator());
	}

	if (m_Aa.has_value())
	{
		rapidjson::Value AaValue(TypeToJsonValue(m_Aa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("aa", AaValue, JsonDoc.GetAllocator());
	}

	if (m_Ea.has_value())
	{
		rapidjson::Value EaValue(TypeToJsonValue(m_Ea, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ea", EaValue, JsonDoc.GetAllocator());
	}

	if (m_Ab.has_value())
	{
		rapidjson::Value AbValue(TypeToJsonValue(m_Ab, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ab", AbValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ChaosMonkeyConfig::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ChaosMonkeyConfig::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("qn"))
	{
		const rapidjson::Value& QnValue = JsonDoc["qn"];

		if (QnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QnValue, m_Qn);
		}
	}

	if (JsonDoc.HasMember("en"))
	{
		const rapidjson::Value& EnValue = JsonDoc["en"];

		if (EnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnValue, m_En);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member en is null!");
		}
	}

	if (JsonDoc.HasMember("fl"))
	{
		const rapidjson::Value& FlValue = JsonDoc["fl"];

		if (FlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FlValue, m_Fl);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member fl is null!");
		}
	}

	if (JsonDoc.HasMember("aa"))
	{
		const rapidjson::Value& AaValue = JsonDoc["aa"];

		if (AaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AaValue, m_Aa);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member aa is null!");
		}
	}

	if (JsonDoc.HasMember("ea"))
	{
		const rapidjson::Value& EaValue = JsonDoc["ea"];

		if (EaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EaValue, m_Ea);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ea is null!");
		}
	}

	if (JsonDoc.HasMember("ab"))
	{
		const rapidjson::Value& AbValue = JsonDoc["ab"];

		if (AbValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AbValue, m_Ab);
		}
	}
}


utility::string_t ChaosMonkeyConfig::GetQn() const
{
	return m_Qn.value();
}

bool ChaosMonkeyConfig::HasQn() const
{
	return m_Qn.has_value();
}
void ChaosMonkeyConfig::SetQn(const utility::string_t& Value)
{
	m_Qn = Value;
}
bool ChaosMonkeyConfig::GetEn() const
{
	return m_En.value();
}

bool ChaosMonkeyConfig::HasEn() const
{
	return m_En.has_value();
}
void ChaosMonkeyConfig::SetEn(const bool& Value)
{
	m_En = Value;
}
int32_t ChaosMonkeyConfig::GetFl() const
{
	return m_Fl.value();
}

bool ChaosMonkeyConfig::HasFl() const
{
	return m_Fl.has_value();
}
void ChaosMonkeyConfig::SetFl(int32_t Value)
{
	m_Fl = Value;
}
utility::string_t ChaosMonkeyConfig::GetAa() const
{
	return m_Aa.value();
}

bool ChaosMonkeyConfig::HasAa() const
{
	return m_Aa.has_value();
}
void ChaosMonkeyConfig::SetAa(const utility::string_t& Value)
{
	m_Aa = Value;
}
utility::string_t ChaosMonkeyConfig::GetEa() const
{
	return m_Ea.value();
}

bool ChaosMonkeyConfig::HasEa() const
{
	return m_Ea.has_value();
}
void ChaosMonkeyConfig::SetEa(const utility::string_t& Value)
{
	m_Ea = Value;
}
utility::string_t ChaosMonkeyConfig::GetAb() const
{
	return m_Ab.value();
}

bool ChaosMonkeyConfig::HasAb() const
{
	return m_Ab.has_value();
}
void ChaosMonkeyConfig::SetAb(const utility::string_t& Value)
{
	m_Ab = Value;
}

CheckpointStats::CheckpointStats()
{
}
CheckpointStats::~CheckpointStats()
{
}

utility::string_t CheckpointStats::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CheckpointSizeInKilobytes.has_value())
	{
		rapidjson::Value CheckpointSizeInKilobytesValue(TypeToJsonValue(m_CheckpointSizeInKilobytes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkpointSizeInKilobytes", CheckpointSizeInKilobytesValue, JsonDoc.GetAllocator());
	}

	if (m_TypeCounts.has_value())
	{
		rapidjson::Value TypeCountsValue(TypeToJsonValue(m_TypeCounts, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("typeCounts", TypeCountsValue, JsonDoc.GetAllocator());
	}

	if (m_TotalSizeOfAssetsInKilobytes.has_value())
	{
		rapidjson::Value TotalSizeOfAssetsInKilobytesValue(TypeToJsonValue(m_TotalSizeOfAssetsInKilobytes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalSizeOfAssetsInKilobytes", TotalSizeOfAssetsInKilobytesValue, JsonDoc.GetAllocator());
	}

	if (m_AssetTypeCounts.has_value())
	{
		rapidjson::Value AssetTypeCountsValue(TypeToJsonValue(m_AssetTypeCounts, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetTypeCounts", AssetTypeCountsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CheckpointStats::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CheckpointStats::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("checkpointSizeInKilobytes"))
	{
		const rapidjson::Value& CheckpointSizeInKilobytesValue = JsonDoc["checkpointSizeInKilobytes"];

		if (CheckpointSizeInKilobytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckpointSizeInKilobytesValue, m_CheckpointSizeInKilobytes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member checkpointSizeInKilobytes is null!");
		}
	}

	if (JsonDoc.HasMember("typeCounts"))
	{
		const rapidjson::Value& TypeCountsValue = JsonDoc["typeCounts"];

		if (TypeCountsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeCountsValue, m_TypeCounts);
		}
	}

	if (JsonDoc.HasMember("totalSizeOfAssetsInKilobytes"))
	{
		const rapidjson::Value& TotalSizeOfAssetsInKilobytesValue = JsonDoc["totalSizeOfAssetsInKilobytes"];

		if (TotalSizeOfAssetsInKilobytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalSizeOfAssetsInKilobytesValue, m_TotalSizeOfAssetsInKilobytes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalSizeOfAssetsInKilobytes is null!");
		}
	}

	if (JsonDoc.HasMember("assetTypeCounts"))
	{
		const rapidjson::Value& AssetTypeCountsValue = JsonDoc["assetTypeCounts"];

		if (AssetTypeCountsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetTypeCountsValue, m_AssetTypeCounts);
		}
	}
}


int64_t CheckpointStats::GetCheckpointSizeInKilobytes() const
{
	return m_CheckpointSizeInKilobytes.value();
}

bool CheckpointStats::HasCheckpointSizeInKilobytes() const
{
	return m_CheckpointSizeInKilobytes.has_value();
}
void CheckpointStats::SetCheckpointSizeInKilobytes(int64_t Value)
{
	m_CheckpointSizeInKilobytes = Value;
}
const std::map<utility::string_t, int32_t>& CheckpointStats::GetTypeCounts() const
{
	return m_TypeCounts.value();
}

bool CheckpointStats::HasTypeCounts() const
{
	return m_TypeCounts.has_value();
}
void CheckpointStats::SetTypeCounts(const std::map<utility::string_t, int32_t>& Value)
{
	m_TypeCounts = Value;
}
int64_t CheckpointStats::GetTotalSizeOfAssetsInKilobytes() const
{
	return m_TotalSizeOfAssetsInKilobytes.value();
}

bool CheckpointStats::HasTotalSizeOfAssetsInKilobytes() const
{
	return m_TotalSizeOfAssetsInKilobytes.has_value();
}
void CheckpointStats::SetTotalSizeOfAssetsInKilobytes(int64_t Value)
{
	m_TotalSizeOfAssetsInKilobytes = Value;
}
const std::map<utility::string_t, int32_t>& CheckpointStats::GetAssetTypeCounts() const
{
	return m_AssetTypeCounts.value();
}

bool CheckpointStats::HasAssetTypeCounts() const
{
	return m_AssetTypeCounts.has_value();
}
void CheckpointStats::SetAssetTypeCounts(const std::map<utility::string_t, int32_t>& Value)
{
	m_AssetTypeCounts = Value;
}

CoalescenceState::CoalescenceState()
{
}
CoalescenceState::~CoalescenceState()
{
}

utility::string_t CoalescenceState::ToJson() const
{
	switch (Value)
	{
		case eCoalescenceState::NOTSTARTED:
			return "NotStarted";
		case eCoalescenceState::STARTED:
			return "Started";
		case eCoalescenceState::COMPLETIONRAISED:
			return "CompletionRaised";
		case eCoalescenceState::COMPLETED:
			return "Completed";
		case eCoalescenceState::ERRORED:
			return "Errored";
		case eCoalescenceState::TIMEDOUT:
			return "TimedOut";
		case eCoalescenceState::COMPLETIONRAISEDAFTERTIMEOUT:
			return "CompletionRaisedAfterTimeout";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void CoalescenceState::FromJson(const utility::string_t& Val)
{
	if (Val == "NotStarted")
	{
		Value = eCoalescenceState::NOTSTARTED;
	}
	else if (Val == "Started")
	{
		Value = eCoalescenceState::STARTED;
	}
	else if (Val == "CompletionRaised")
	{
		Value = eCoalescenceState::COMPLETIONRAISED;
	}
	else if (Val == "Completed")
	{
		Value = eCoalescenceState::COMPLETED;
	}
	else if (Val == "Errored")
	{
		Value = eCoalescenceState::ERRORED;
	}
	else if (Val == "TimedOut")
	{
		Value = eCoalescenceState::TIMEDOUT;
	}
	else if (Val == "CompletionRaisedAfterTimeout")
	{
		Value = eCoalescenceState::COMPLETIONRAISEDAFTERTIMEOUT;
	}
}

CoalescenceState::eCoalescenceState CoalescenceState::GetValue() const
{
	return Value;
}

void CoalescenceState::SetValue(CoalescenceState::eCoalescenceState const InValue)
{
	Value = InValue;
}

CoalescingFanOutDocument::CoalescingFanOutDocument()
{
}
CoalescingFanOutDocument::~CoalescingFanOutDocument()
{
}

utility::string_t CoalescingFanOutDocument::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_ActivitySpanId.has_value())
	{
		rapidjson::Value ActivitySpanIdValue(TypeToJsonValue(m_ActivitySpanId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("activitySpanId", ActivitySpanIdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_MaximumRuntime.has_value())
	{
		rapidjson::Value MaximumRuntimeValue(TypeToJsonValue(m_MaximumRuntime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maximumRuntime", MaximumRuntimeValue, JsonDoc.GetAllocator());
	}

	if (m_ExpectedCount.has_value())
	{
		rapidjson::Value ExpectedCountValue(TypeToJsonValue(m_ExpectedCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("expectedCount", ExpectedCountValue, JsonDoc.GetAllocator());
	}

	if (m_CompletedCount.has_value())
	{
		rapidjson::Value CompletedCountValue(TypeToJsonValue(m_CompletedCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("completedCount", CompletedCountValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescingState.has_value())
	{
		rapidjson::Value CoalescingStateValue(TypeToJsonValue(m_CoalescingState, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescingState", CoalescingStateValue, JsonDoc.GetAllocator());
	}

	if (m_ErrorReason.has_value())
	{
		rapidjson::Value ErrorReasonValue(TypeToJsonValue(m_ErrorReason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("errorReason", ErrorReasonValue, JsonDoc.GetAllocator());
	}

	if (m_PipelineData.has_value())
	{
		rapidjson::Value PipelineDataValue(TypeToJsonValue(m_PipelineData, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pipelineData", PipelineDataValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_IsSeeded.has_value())
	{
		rapidjson::Value IsSeededValue(TypeToJsonValue(m_IsSeeded, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isSeeded", IsSeededValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CoalescingFanOutDocument::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CoalescingFanOutDocument::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("activitySpanId"))
	{
		const rapidjson::Value& ActivitySpanIdValue = JsonDoc["activitySpanId"];

		if (ActivitySpanIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActivitySpanIdValue, m_ActivitySpanId);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("maximumRuntime"))
	{
		const rapidjson::Value& MaximumRuntimeValue = JsonDoc["maximumRuntime"];

		if (MaximumRuntimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaximumRuntimeValue, m_MaximumRuntime);
		}
	}

	if (JsonDoc.HasMember("expectedCount"))
	{
		const rapidjson::Value& ExpectedCountValue = JsonDoc["expectedCount"];

		if (ExpectedCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExpectedCountValue, m_ExpectedCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member expectedCount is null!");
		}
	}

	if (JsonDoc.HasMember("completedCount"))
	{
		const rapidjson::Value& CompletedCountValue = JsonDoc["completedCount"];

		if (CompletedCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompletedCountValue, m_CompletedCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member completedCount is null!");
		}
	}

	if (JsonDoc.HasMember("coalescingState"))
	{
		const rapidjson::Value& CoalescingStateValue = JsonDoc["coalescingState"];

		if (CoalescingStateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescingStateValue, m_CoalescingState);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member coalescingState is null!");
		}
	}

	if (JsonDoc.HasMember("errorReason"))
	{
		const rapidjson::Value& ErrorReasonValue = JsonDoc["errorReason"];

		if (ErrorReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorReasonValue, m_ErrorReason);
		}
	}

	if (JsonDoc.HasMember("pipelineData"))
	{
		const rapidjson::Value& PipelineDataValue = JsonDoc["pipelineData"];

		if (PipelineDataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PipelineDataValue, m_PipelineData);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
		}
	}

	if (JsonDoc.HasMember("isSeeded"))
	{
		const rapidjson::Value& IsSeededValue = JsonDoc["isSeeded"];

		if (IsSeededValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsSeededValue, m_IsSeeded);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isSeeded is null!");
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}
}


utility::string_t CoalescingFanOutDocument::GetType() const
{
	return m_Type.value();
}

bool CoalescingFanOutDocument::HasType() const
{
	return m_Type.has_value();
}
utility::string_t CoalescingFanOutDocument::GetActivitySpanId() const
{
	return m_ActivitySpanId.value();
}

bool CoalescingFanOutDocument::HasActivitySpanId() const
{
	return m_ActivitySpanId.has_value();
}
utility::string_t CoalescingFanOutDocument::GetUserId() const
{
	return m_UserId.value();
}

bool CoalescingFanOutDocument::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t CoalescingFanOutDocument::GetMaximumRuntime() const
{
	return m_MaximumRuntime.value();
}

bool CoalescingFanOutDocument::HasMaximumRuntime() const
{
	return m_MaximumRuntime.has_value();
}
int32_t CoalescingFanOutDocument::GetExpectedCount() const
{
	return m_ExpectedCount.value();
}

bool CoalescingFanOutDocument::HasExpectedCount() const
{
	return m_ExpectedCount.has_value();
}
int32_t CoalescingFanOutDocument::GetCompletedCount() const
{
	return m_CompletedCount.value();
}

bool CoalescingFanOutDocument::HasCompletedCount() const
{
	return m_CompletedCount.has_value();
}
void CoalescingFanOutDocument::SetCompletedCount(int32_t Value)
{
	m_CompletedCount = Value;
}
std::shared_ptr<CoalescenceState> CoalescingFanOutDocument::GetCoalescingState() const
{
	return m_CoalescingState.value();
}

bool CoalescingFanOutDocument::HasCoalescingState() const
{
	return m_CoalescingState.has_value();
}
void CoalescingFanOutDocument::SetCoalescingState(const std::shared_ptr<CoalescenceState>& Value)
{
	m_CoalescingState = Value;
}
utility::string_t CoalescingFanOutDocument::GetErrorReason() const
{
	return m_ErrorReason.value();
}

bool CoalescingFanOutDocument::HasErrorReason() const
{
	return m_ErrorReason.has_value();
}
void CoalescingFanOutDocument::SetErrorReason(const utility::string_t& Value)
{
	m_ErrorReason = Value;
}
const std::map<utility::string_t, utility::string_t>& CoalescingFanOutDocument::GetPipelineData() const
{
	return m_PipelineData.value();
}

bool CoalescingFanOutDocument::HasPipelineData() const
{
	return m_PipelineData.has_value();
}
void CoalescingFanOutDocument::SetPipelineData(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_PipelineData = Value;
}
utility::string_t CoalescingFanOutDocument::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool CoalescingFanOutDocument::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t CoalescingFanOutDocument::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool CoalescingFanOutDocument::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t CoalescingFanOutDocument::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool CoalescingFanOutDocument::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t CoalescingFanOutDocument::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool CoalescingFanOutDocument::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool CoalescingFanOutDocument::GetIsSeeded() const
{
	return m_IsSeeded.value();
}

bool CoalescingFanOutDocument::HasIsSeeded() const
{
	return m_IsSeeded.has_value();
}
utility::string_t CoalescingFanOutDocument::GetTenantName() const
{
	return m_TenantName.value();
}

bool CoalescingFanOutDocument::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t CoalescingFanOutDocument::GetId() const
{
	return m_Id.value();
}

bool CoalescingFanOutDocument::HasId() const
{
	return m_Id.has_value();
}

CompletedNodeOutput::CompletedNodeOutput()
{
}
CompletedNodeOutput::~CompletedNodeOutput()
{
}

utility::string_t CompletedNodeOutput::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_NodeId.has_value())
	{
		rapidjson::Value NodeIdValue(TypeToJsonValue(m_NodeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeId", NodeIdValue, JsonDoc.GetAllocator());
	}

	if (m_Data.has_value())
	{
		rapidjson::Value DataValue(TypeToJsonValue(m_Data, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("data", DataValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CompletedNodeOutput::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CompletedNodeOutput::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("nodeId"))
	{
		const rapidjson::Value& NodeIdValue = JsonDoc["nodeId"];

		if (NodeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeIdValue, m_NodeId);
		}
	}

	if (JsonDoc.HasMember("data"))
	{
		const rapidjson::Value& DataValue = JsonDoc["data"];

		if (DataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DataValue, m_Data);
		}
	}
}


utility::string_t CompletedNodeOutput::GetNodeId() const
{
	return m_NodeId.value();
}

bool CompletedNodeOutput::HasNodeId() const
{
	return m_NodeId.has_value();
}
void CompletedNodeOutput::SetNodeId(const utility::string_t& Value)
{
	m_NodeId = Value;
}
const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& CompletedNodeOutput::GetData() const
{
	return m_Data.value();
}

bool CompletedNodeOutput::HasData() const
{
	return m_Data.has_value();
}
void CompletedNodeOutput::SetData(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value)
{
	m_Data = Value;
}

ControllerVersions::ControllerVersions()
{
}
ControllerVersions::~ControllerVersions()
{
}

utility::string_t ControllerVersions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ReverseProxy.has_value())
	{
		rapidjson::Value ReverseProxyValue(TypeToJsonValue(m_ReverseProxy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reverseProxy", ReverseProxyValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_ApiVersions.has_value())
	{
		rapidjson::Value ApiVersionsValue(TypeToJsonValue(m_ApiVersions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("apiVersions", ApiVersionsValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentApiVersion.has_value())
	{
		rapidjson::Value CurrentApiVersionValue(TypeToJsonValue(m_CurrentApiVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentApiVersion", CurrentApiVersionValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ControllerVersions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ControllerVersions::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("reverseProxy"))
	{
		const rapidjson::Value& ReverseProxyValue = JsonDoc["reverseProxy"];

		if (ReverseProxyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReverseProxyValue, m_ReverseProxy);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("apiVersions"))
	{
		const rapidjson::Value& ApiVersionsValue = JsonDoc["apiVersions"];

		if (ApiVersionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApiVersionsValue, m_ApiVersions);
		}
	}

	if (JsonDoc.HasMember("currentApiVersion"))
	{
		const rapidjson::Value& CurrentApiVersionValue = JsonDoc["currentApiVersion"];

		if (CurrentApiVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentApiVersionValue, m_CurrentApiVersion);
		}
	}
}


utility::string_t ControllerVersions::GetReverseProxy() const
{
	return m_ReverseProxy.value();
}

bool ControllerVersions::HasReverseProxy() const
{
	return m_ReverseProxy.has_value();
}
void ControllerVersions::SetReverseProxy(const utility::string_t& Value)
{
	m_ReverseProxy = Value;
}
utility::string_t ControllerVersions::GetName() const
{
	return m_Name.value();
}

bool ControllerVersions::HasName() const
{
	return m_Name.has_value();
}
void ControllerVersions::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<std::shared_ptr<ApiVersion>>& ControllerVersions::GetApiVersions() const
{
	return m_ApiVersions.value();
}

bool ControllerVersions::HasApiVersions() const
{
	return m_ApiVersions.has_value();
}
void ControllerVersions::SetApiVersions(const std::vector<std::shared_ptr<ApiVersion>>& Value)
{
	m_ApiVersions = Value;
}
utility::string_t ControllerVersions::GetCurrentApiVersion() const
{
	return m_CurrentApiVersion.value();
}

bool ControllerVersions::HasCurrentApiVersion() const
{
	return m_CurrentApiVersion.has_value();
}
void ControllerVersions::SetCurrentApiVersion(const utility::string_t& Value)
{
	m_CurrentApiVersion = Value;
}

DailyExecutionCount::DailyExecutionCount()
{
}
DailyExecutionCount::~DailyExecutionCount()
{
}

utility::string_t DailyExecutionCount::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Date.has_value())
	{
		rapidjson::Value DateValue(TypeToJsonValue(m_Date, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("date", DateValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DailyExecutionCount::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DailyExecutionCount::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t DailyExecutionCount::GetDate() const
{
	return m_Date.value();
}

bool DailyExecutionCount::HasDate() const
{
	return m_Date.has_value();
}
void DailyExecutionCount::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
int32_t DailyExecutionCount::GetCount() const
{
	return m_Count.value();
}

bool DailyExecutionCount::HasCount() const
{
	return m_Count.has_value();
}
void DailyExecutionCount::SetCount(int32_t Value)
{
	m_Count = Value;
}

DailyKeyUsage::DailyKeyUsage()
{
}
DailyKeyUsage::~DailyKeyUsage()
{
}

utility::string_t DailyKeyUsage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Date.has_value())
	{
		rapidjson::Value DateValue(TypeToJsonValue(m_Date, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("date", DateValue, JsonDoc.GetAllocator());
	}

	if (m_SecretKey.has_value())
	{
		rapidjson::Value SecretKeyValue(TypeToJsonValue(m_SecretKey, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("secretKey", SecretKeyValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DailyKeyUsage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DailyKeyUsage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
	}

	if (JsonDoc.HasMember("secretKey"))
	{
		const rapidjson::Value& SecretKeyValue = JsonDoc["secretKey"];

		if (SecretKeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SecretKeyValue, m_SecretKey);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t DailyKeyUsage::GetDate() const
{
	return m_Date.value();
}

bool DailyKeyUsage::HasDate() const
{
	return m_Date.has_value();
}
void DailyKeyUsage::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
utility::string_t DailyKeyUsage::GetSecretKey() const
{
	return m_SecretKey.value();
}

bool DailyKeyUsage::HasSecretKey() const
{
	return m_SecretKey.has_value();
}
void DailyKeyUsage::SetSecretKey(const utility::string_t& Value)
{
	m_SecretKey = Value;
}
utility::string_t DailyKeyUsage::GetTenantName() const
{
	return m_TenantName.value();
}

bool DailyKeyUsage::HasTenantName() const
{
	return m_TenantName.has_value();
}
void DailyKeyUsage::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
int32_t DailyKeyUsage::GetCount() const
{
	return m_Count.value();
}

bool DailyKeyUsage::HasCount() const
{
	return m_Count.has_value();
}
void DailyKeyUsage::SetCount(int32_t Value)
{
	m_Count = Value;
}

DailyNodeTypeUsage::DailyNodeTypeUsage()
{
}
DailyNodeTypeUsage::~DailyNodeTypeUsage()
{
}

utility::string_t DailyNodeTypeUsage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Date.has_value())
	{
		rapidjson::Value DateValue(TypeToJsonValue(m_Date, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("date", DateValue, JsonDoc.GetAllocator());
	}

	if (m_NodeType.has_value())
	{
		rapidjson::Value NodeTypeValue(TypeToJsonValue(m_NodeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeType", NodeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DailyNodeTypeUsage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DailyNodeTypeUsage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
	}

	if (JsonDoc.HasMember("nodeType"))
	{
		const rapidjson::Value& NodeTypeValue = JsonDoc["nodeType"];

		if (NodeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeTypeValue, m_NodeType);
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t DailyNodeTypeUsage::GetDate() const
{
	return m_Date.value();
}

bool DailyNodeTypeUsage::HasDate() const
{
	return m_Date.has_value();
}
void DailyNodeTypeUsage::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
utility::string_t DailyNodeTypeUsage::GetNodeType() const
{
	return m_NodeType.value();
}

bool DailyNodeTypeUsage::HasNodeType() const
{
	return m_NodeType.has_value();
}
void DailyNodeTypeUsage::SetNodeType(const utility::string_t& Value)
{
	m_NodeType = Value;
}
int32_t DailyNodeTypeUsage::GetCount() const
{
	return m_Count.value();
}

bool DailyNodeTypeUsage::HasCount() const
{
	return m_Count.has_value();
}
void DailyNodeTypeUsage::SetCount(int32_t Value)
{
	m_Count = Value;
}

DailyQueueUsage::DailyQueueUsage()
{
}
DailyQueueUsage::~DailyQueueUsage()
{
}

utility::string_t DailyQueueUsage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Date.has_value())
	{
		rapidjson::Value DateValue(TypeToJsonValue(m_Date, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("date", DateValue, JsonDoc.GetAllocator());
	}

	if (m_Queue.has_value())
	{
		rapidjson::Value QueueValue(TypeToJsonValue(m_Queue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queue", QueueValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DailyQueueUsage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DailyQueueUsage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
	}

	if (JsonDoc.HasMember("queue"))
	{
		const rapidjson::Value& QueueValue = JsonDoc["queue"];

		if (QueueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueValue, m_Queue);
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t DailyQueueUsage::GetDate() const
{
	return m_Date.value();
}

bool DailyQueueUsage::HasDate() const
{
	return m_Date.has_value();
}
void DailyQueueUsage::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
utility::string_t DailyQueueUsage::GetQueue() const
{
	return m_Queue.value();
}

bool DailyQueueUsage::HasQueue() const
{
	return m_Queue.has_value();
}
void DailyQueueUsage::SetQueue(const utility::string_t& Value)
{
	m_Queue = Value;
}
int32_t DailyQueueUsage::GetCount() const
{
	return m_Count.value();
}

bool DailyQueueUsage::HasCount() const
{
	return m_Count.has_value();
}
void DailyQueueUsage::SetCount(int32_t Value)
{
	m_Count = Value;
}

DailySustainedActivityHours::DailySustainedActivityHours()
{
}
DailySustainedActivityHours::~DailySustainedActivityHours()
{
}

utility::string_t DailySustainedActivityHours::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Date.has_value())
	{
		rapidjson::Value DateValue(TypeToJsonValue(m_Date, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("date", DateValue, JsonDoc.GetAllocator());
	}

	if (m_Hours.has_value())
	{
		rapidjson::Value HoursValue(TypeToJsonValue(m_Hours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hours", HoursValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DailySustainedActivityHours::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DailySustainedActivityHours::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
	}

	if (JsonDoc.HasMember("hours"))
	{
		const rapidjson::Value& HoursValue = JsonDoc["hours"];

		if (HoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HoursValue, m_Hours);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member hours is null!");
		}
	}
}


utility::string_t DailySustainedActivityHours::GetDate() const
{
	return m_Date.value();
}

bool DailySustainedActivityHours::HasDate() const
{
	return m_Date.has_value();
}
void DailySustainedActivityHours::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
float DailySustainedActivityHours::GetHours() const
{
	return m_Hours.value();
}

bool DailySustainedActivityHours::HasHours() const
{
	return m_Hours.has_value();
}
void DailySustainedActivityHours::SetHours(float Value)
{
	m_Hours = Value;
}

DefaultSettings::DefaultSettings()
{
}
DefaultSettings::~DefaultSettings()
{
}

utility::string_t DefaultSettings::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_DefaultApplicationSettings.has_value())
	{
		rapidjson::Value DefaultApplicationSettingsValue(TypeToJsonValue(m_DefaultApplicationSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("defaultApplicationSettings", DefaultApplicationSettingsValue, JsonDoc.GetAllocator());
	}

	if (m_DefaultUserSettings.has_value())
	{
		rapidjson::Value DefaultUserSettingsValue(TypeToJsonValue(m_DefaultUserSettings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("defaultUserSettings", DefaultUserSettingsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DefaultSettings::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DefaultSettings::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("defaultApplicationSettings"))
	{
		const rapidjson::Value& DefaultApplicationSettingsValue = JsonDoc["defaultApplicationSettings"];

		if (DefaultApplicationSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DefaultApplicationSettingsValue, m_DefaultApplicationSettings);
		}
	}

	if (JsonDoc.HasMember("defaultUserSettings"))
	{
		const rapidjson::Value& DefaultUserSettingsValue = JsonDoc["defaultUserSettings"];

		if (DefaultUserSettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DefaultUserSettingsValue, m_DefaultUserSettings);
		}
	}
}


const std::vector<std::shared_ptr<ApplicationSettingsDto>>& DefaultSettings::GetDefaultApplicationSettings() const
{
	return m_DefaultApplicationSettings.value();
}

bool DefaultSettings::HasDefaultApplicationSettings() const
{
	return m_DefaultApplicationSettings.has_value();
}
void DefaultSettings::SetDefaultApplicationSettings(const std::vector<std::shared_ptr<ApplicationSettingsDto>>& Value)
{
	m_DefaultApplicationSettings = Value;
}
const std::vector<std::shared_ptr<SettingsDto>>& DefaultSettings::GetDefaultUserSettings() const
{
	return m_DefaultUserSettings.value();
}

bool DefaultSettings::HasDefaultUserSettings() const
{
	return m_DefaultUserSettings.has_value();
}
void DefaultSettings::SetDefaultUserSettings(const std::vector<std::shared_ptr<SettingsDto>>& Value)
{
	m_DefaultUserSettings = Value;
}

DlqInfo::DlqInfo()
{
}
DlqInfo::~DlqInfo()
{
}

utility::string_t DlqInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_D.has_value())
	{
		rapidjson::Value DValue(TypeToJsonValue(m_D, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("d", DValue, JsonDoc.GetAllocator());
	}

	if (m_Qu.has_value())
	{
		rapidjson::Value QuValue(TypeToJsonValue(m_Qu, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qu", QuValue, JsonDoc.GetAllocator());
	}

	if (m_Qa.has_value())
	{
		rapidjson::Value QaValue(TypeToJsonValue(m_Qa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qa", QaValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DlqInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DlqInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("d"))
	{
		const rapidjson::Value& DValue = JsonDoc["d"];

		if (DValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DValue, m_D);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member d is null!");
		}
	}

	if (JsonDoc.HasMember("qu"))
	{
		const rapidjson::Value& QuValue = JsonDoc["qu"];

		if (QuValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuValue, m_Qu);
		}
	}

	if (JsonDoc.HasMember("qa"))
	{
		const rapidjson::Value& QaValue = JsonDoc["qa"];

		if (QaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QaValue, m_Qa);
		}
	}
}


int32_t DlqInfo::GetD() const
{
	return m_D.value();
}

bool DlqInfo::HasD() const
{
	return m_D.has_value();
}
void DlqInfo::SetD(int32_t Value)
{
	m_D = Value;
}
utility::string_t DlqInfo::GetQu() const
{
	return m_Qu.value();
}

bool DlqInfo::HasQu() const
{
	return m_Qu.has_value();
}
void DlqInfo::SetQu(const utility::string_t& Value)
{
	m_Qu = Value;
}
utility::string_t DlqInfo::GetQa() const
{
	return m_Qa.value();
}

bool DlqInfo::HasQa() const
{
	return m_Qa.has_value();
}
void DlqInfo::SetQa(const utility::string_t& Value)
{
	m_Qa = Value;
}

DuplicateSpaceOptions::DuplicateSpaceOptions()
{
}
DuplicateSpaceOptions::~DuplicateSpaceOptions()
{
}

utility::string_t DuplicateSpaceOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescingId.has_value())
	{
		rapidjson::Value CoalescingIdValue(TypeToJsonValue(m_CoalescingId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescingId", CoalescingIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupOwnerId.has_value())
	{
		rapidjson::Value NewGroupOwnerIdValue(TypeToJsonValue(m_NewGroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupOwnerId", NewGroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_MemberGroupIds.has_value())
	{
		rapidjson::Value MemberGroupIdsValue(TypeToJsonValue(m_MemberGroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("memberGroupIds", MemberGroupIdsValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewUniqueName.has_value())
	{
		rapidjson::Value NewUniqueNameValue(TypeToJsonValue(m_NewUniqueName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newUniqueName", NewUniqueNameValue, JsonDoc.GetAllocator());
	}

	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_ShallowCopy.has_value())
	{
		rapidjson::Value ShallowCopyValue(TypeToJsonValue(m_ShallowCopy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shallowCopy", ShallowCopyValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DuplicateSpaceOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DuplicateSpaceOptions::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("coalescingId"))
	{
		const rapidjson::Value& CoalescingIdValue = JsonDoc["coalescingId"];

		if (CoalescingIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescingIdValue, m_CoalescingId);
		}
	}

	if (JsonDoc.HasMember("newGroupOwnerId"))
	{
		const rapidjson::Value& NewGroupOwnerIdValue = JsonDoc["newGroupOwnerId"];

		if (NewGroupOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupOwnerIdValue, m_NewGroupOwnerId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newGroupOwnerId is null!");
		}
	}

	if (JsonDoc.HasMember("memberGroupIds"))
	{
		const rapidjson::Value& MemberGroupIdsValue = JsonDoc["memberGroupIds"];

		if (MemberGroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MemberGroupIdsValue, m_MemberGroupIds);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("newUniqueName"))
	{
		const rapidjson::Value& NewUniqueNameValue = JsonDoc["newUniqueName"];

		if (NewUniqueNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewUniqueNameValue, m_NewUniqueName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newUniqueName is null!");
		}
	}

	if (JsonDoc.HasMember("requiresInvite"))
	{
		const rapidjson::Value& RequiresInviteValue = JsonDoc["requiresInvite"];

		if (RequiresInviteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiresInviteValue, m_RequiresInvite);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
		}
	}

	if (JsonDoc.HasMember("discoverable"))
	{
		const rapidjson::Value& DiscoverableValue = JsonDoc["discoverable"];

		if (DiscoverableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DiscoverableValue, m_Discoverable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
		}
	}

	if (JsonDoc.HasMember("shallowCopy"))
	{
		const rapidjson::Value& ShallowCopyValue = JsonDoc["shallowCopy"];

		if (ShallowCopyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShallowCopyValue, m_ShallowCopy);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member shallowCopy is null!");
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}
}


utility::string_t DuplicateSpaceOptions::GetTenantName() const
{
	return m_TenantName.value();
}

bool DuplicateSpaceOptions::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t DuplicateSpaceOptions::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool DuplicateSpaceOptions::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
void DuplicateSpaceOptions::SetSpaceId(const utility::string_t& Value)
{
	m_SpaceId = Value;
}
utility::string_t DuplicateSpaceOptions::GetCoalescingId() const
{
	return m_CoalescingId.value();
}

bool DuplicateSpaceOptions::HasCoalescingId() const
{
	return m_CoalescingId.has_value();
}
utility::string_t DuplicateSpaceOptions::GetNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.value();
}

bool DuplicateSpaceOptions::HasNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.has_value();
}
void DuplicateSpaceOptions::SetNewGroupOwnerId(const utility::string_t& Value)
{
	m_NewGroupOwnerId = Value;
}
const std::vector<utility::string_t>& DuplicateSpaceOptions::GetMemberGroupIds() const
{
	return m_MemberGroupIds.value();
}

bool DuplicateSpaceOptions::HasMemberGroupIds() const
{
	return m_MemberGroupIds.has_value();
}
void DuplicateSpaceOptions::SetMemberGroupIds(const std::vector<utility::string_t>& Value)
{
	m_MemberGroupIds = Value;
}
utility::string_t DuplicateSpaceOptions::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool DuplicateSpaceOptions::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
utility::string_t DuplicateSpaceOptions::GetNewUniqueName() const
{
	return m_NewUniqueName.value();
}

bool DuplicateSpaceOptions::HasNewUniqueName() const
{
	return m_NewUniqueName.has_value();
}
void DuplicateSpaceOptions::SetNewUniqueName(const utility::string_t& Value)
{
	m_NewUniqueName = Value;
}
bool DuplicateSpaceOptions::GetRequiresInvite() const
{
	return m_RequiresInvite.value();
}

bool DuplicateSpaceOptions::HasRequiresInvite() const
{
	return m_RequiresInvite.has_value();
}
void DuplicateSpaceOptions::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool DuplicateSpaceOptions::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool DuplicateSpaceOptions::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void DuplicateSpaceOptions::SetDiscoverable(const bool& Value)
{
	m_Discoverable = Value;
}
bool DuplicateSpaceOptions::GetShallowCopy() const
{
	return m_ShallowCopy.value();
}

bool DuplicateSpaceOptions::HasShallowCopy() const
{
	return m_ShallowCopy.has_value();
}
void DuplicateSpaceOptions::SetShallowCopy(const bool& Value)
{
	m_ShallowCopy = Value;
}
bool DuplicateSpaceOptions::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool DuplicateSpaceOptions::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void DuplicateSpaceOptions::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}

ExecutionDetailDto::ExecutionDetailDto()
{
}
ExecutionDetailDto::~ExecutionDetailDto()
{
}

utility::string_t ExecutionDetailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Cc.has_value())
	{
		rapidjson::Value CcValue(TypeToJsonValue(m_Cc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cc", CcValue, JsonDoc.GetAllocator());
	}

	if (m_Fni.has_value())
	{
		rapidjson::Value FniValue(TypeToJsonValue(m_Fni, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fni", FniValue, JsonDoc.GetAllocator());
	}

	if (m_Err.has_value())
	{
		rapidjson::Value ErrValue(TypeToJsonValue(m_Err, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("err", ErrValue, JsonDoc.GetAllocator());
	}

	if (m_Eb.has_value())
	{
		rapidjson::Value EbValue(TypeToJsonValue(m_Eb, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eb", EbValue, JsonDoc.GetAllocator());
	}

	if (m_Sp.has_value())
	{
		rapidjson::Value SpValue(TypeToJsonValue(m_Sp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sp", SpValue, JsonDoc.GetAllocator());
	}

	if (m_Ns.has_value())
	{
		rapidjson::Value NsValue(TypeToJsonValue(m_Ns, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ns", NsValue, JsonDoc.GetAllocator());
	}

	if (m_Pm.has_value())
	{
		rapidjson::Value PmValue(TypeToJsonValue(m_Pm, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pm", PmValue, JsonDoc.GetAllocator());
	}

	if (m_Eid.has_value())
	{
		rapidjson::Value EidValue(TypeToJsonValue(m_Eid, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eid", EidValue, JsonDoc.GetAllocator());
	}

	if (m_Tn.has_value())
	{
		rapidjson::Value TnValue(TypeToJsonValue(m_Tn, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tn", TnValue, JsonDoc.GetAllocator());
	}

	if (m_Uid.has_value())
	{
		rapidjson::Value UidValue(TypeToJsonValue(m_Uid, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uid", UidValue, JsonDoc.GetAllocator());
	}

	if (m_Gh.has_value())
	{
		rapidjson::Value GhValue(TypeToJsonValue(m_Gh, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gh", GhValue, JsonDoc.GetAllocator());
	}

	if (m_Gn.has_value())
	{
		rapidjson::Value GnValue(TypeToJsonValue(m_Gn, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gn", GnValue, JsonDoc.GetAllocator());
	}

	if (m_Nc.has_value())
	{
		rapidjson::Value NcValue(TypeToJsonValue(m_Nc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nc", NcValue, JsonDoc.GetAllocator());
	}

	if (m_S.has_value())
	{
		rapidjson::Value SValue(TypeToJsonValue(m_S, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("s", SValue, JsonDoc.GetAllocator());
	}

	if (m_P.has_value())
	{
		rapidjson::Value PValue(TypeToJsonValue(m_P, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("p", PValue, JsonDoc.GetAllocator());
	}

	if (m_Ca.has_value())
	{
		rapidjson::Value CaValue(TypeToJsonValue(m_Ca, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ca", CaValue, JsonDoc.GetAllocator());
	}

	if (m_Sa.has_value())
	{
		rapidjson::Value SaValue(TypeToJsonValue(m_Sa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sa", SaValue, JsonDoc.GetAllocator());
	}

	if (m_Coa.has_value())
	{
		rapidjson::Value CoaValue(TypeToJsonValue(m_Coa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coa", CoaValue, JsonDoc.GetAllocator());
	}

	if (m_Dur.has_value())
	{
		rapidjson::Value DurValue(TypeToJsonValue(m_Dur, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("dur", DurValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExecutionDetailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExecutionDetailDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("cc"))
	{
		const rapidjson::Value& CcValue = JsonDoc["cc"];

		if (CcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CcValue, m_Cc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member cc is null!");
		}
	}

	if (JsonDoc.HasMember("fni"))
	{
		const rapidjson::Value& FniValue = JsonDoc["fni"];

		if (FniValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FniValue, m_Fni);
		}
	}

	if (JsonDoc.HasMember("err"))
	{
		const rapidjson::Value& ErrValue = JsonDoc["err"];

		if (ErrValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrValue, m_Err);
		}
	}

	if (JsonDoc.HasMember("eb"))
	{
		const rapidjson::Value& EbValue = JsonDoc["eb"];

		if (EbValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EbValue, m_Eb);
		}
	}

	if (JsonDoc.HasMember("sp"))
	{
		const rapidjson::Value& SpValue = JsonDoc["sp"];

		if (SpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpValue, m_Sp);
		}
	}

	if (JsonDoc.HasMember("ns"))
	{
		const rapidjson::Value& NsValue = JsonDoc["ns"];

		if (NsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NsValue, m_Ns);
		}
	}

	if (JsonDoc.HasMember("pm"))
	{
		const rapidjson::Value& PmValue = JsonDoc["pm"];

		if (PmValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PmValue, m_Pm);
		}
	}

	if (JsonDoc.HasMember("eid"))
	{
		const rapidjson::Value& EidValue = JsonDoc["eid"];

		if (EidValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EidValue, m_Eid);
		}
	}

	if (JsonDoc.HasMember("tn"))
	{
		const rapidjson::Value& TnValue = JsonDoc["tn"];

		if (TnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TnValue, m_Tn);
		}
	}

	if (JsonDoc.HasMember("uid"))
	{
		const rapidjson::Value& UidValue = JsonDoc["uid"];

		if (UidValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UidValue, m_Uid);
		}
	}

	if (JsonDoc.HasMember("gh"))
	{
		const rapidjson::Value& GhValue = JsonDoc["gh"];

		if (GhValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GhValue, m_Gh);
		}
	}

	if (JsonDoc.HasMember("gn"))
	{
		const rapidjson::Value& GnValue = JsonDoc["gn"];

		if (GnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GnValue, m_Gn);
		}
	}

	if (JsonDoc.HasMember("nc"))
	{
		const rapidjson::Value& NcValue = JsonDoc["nc"];

		if (NcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NcValue, m_Nc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member nc is null!");
		}
	}

	if (JsonDoc.HasMember("s"))
	{
		const rapidjson::Value& SValue = JsonDoc["s"];

		if (SValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SValue, m_S);
		}
	}

	if (JsonDoc.HasMember("p"))
	{
		const rapidjson::Value& PValue = JsonDoc["p"];

		if (PValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PValue, m_P);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member p is null!");
		}
	}

	if (JsonDoc.HasMember("ca"))
	{
		const rapidjson::Value& CaValue = JsonDoc["ca"];

		if (CaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CaValue, m_Ca);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ca is null!");
		}
	}

	if (JsonDoc.HasMember("sa"))
	{
		const rapidjson::Value& SaValue = JsonDoc["sa"];

		if (SaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SaValue, m_Sa);
		}
	}

	if (JsonDoc.HasMember("coa"))
	{
		const rapidjson::Value& CoaValue = JsonDoc["coa"];

		if (CoaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoaValue, m_Coa);
		}
	}

	if (JsonDoc.HasMember("dur"))
	{
		const rapidjson::Value& DurValue = JsonDoc["dur"];

		if (DurValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurValue, m_Dur);
		}
	}
}


int32_t ExecutionDetailDto::GetCc() const
{
	return m_Cc.value();
}

bool ExecutionDetailDto::HasCc() const
{
	return m_Cc.has_value();
}
void ExecutionDetailDto::SetCc(int32_t Value)
{
	m_Cc = Value;
}
utility::string_t ExecutionDetailDto::GetFni() const
{
	return m_Fni.value();
}

bool ExecutionDetailDto::HasFni() const
{
	return m_Fni.has_value();
}
void ExecutionDetailDto::SetFni(const utility::string_t& Value)
{
	m_Fni = Value;
}
utility::string_t ExecutionDetailDto::GetErr() const
{
	return m_Err.value();
}

bool ExecutionDetailDto::HasErr() const
{
	return m_Err.has_value();
}
void ExecutionDetailDto::SetErr(const utility::string_t& Value)
{
	m_Err = Value;
}
utility::string_t ExecutionDetailDto::GetEb() const
{
	return m_Eb.value();
}

bool ExecutionDetailDto::HasEb() const
{
	return m_Eb.has_value();
}
void ExecutionDetailDto::SetEb(const utility::string_t& Value)
{
	m_Eb = Value;
}
utility::string_t ExecutionDetailDto::GetSp() const
{
	return m_Sp.value();
}

bool ExecutionDetailDto::HasSp() const
{
	return m_Sp.has_value();
}
void ExecutionDetailDto::SetSp(const utility::string_t& Value)
{
	m_Sp = Value;
}
const std::vector<std::shared_ptr<NodeSummaryDto>>& ExecutionDetailDto::GetNs() const
{
	return m_Ns.value();
}

bool ExecutionDetailDto::HasNs() const
{
	return m_Ns.has_value();
}
void ExecutionDetailDto::SetNs(const std::vector<std::shared_ptr<NodeSummaryDto>>& Value)
{
	m_Ns = Value;
}
const std::map<utility::string_t, utility::string_t>& ExecutionDetailDto::GetPm() const
{
	return m_Pm.value();
}

bool ExecutionDetailDto::HasPm() const
{
	return m_Pm.has_value();
}
void ExecutionDetailDto::SetPm(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Pm = Value;
}
utility::string_t ExecutionDetailDto::GetEid() const
{
	return m_Eid.value();
}

bool ExecutionDetailDto::HasEid() const
{
	return m_Eid.has_value();
}
void ExecutionDetailDto::SetEid(const utility::string_t& Value)
{
	m_Eid = Value;
}
utility::string_t ExecutionDetailDto::GetTn() const
{
	return m_Tn.value();
}

bool ExecutionDetailDto::HasTn() const
{
	return m_Tn.has_value();
}
void ExecutionDetailDto::SetTn(const utility::string_t& Value)
{
	m_Tn = Value;
}
utility::string_t ExecutionDetailDto::GetUid() const
{
	return m_Uid.value();
}

bool ExecutionDetailDto::HasUid() const
{
	return m_Uid.has_value();
}
void ExecutionDetailDto::SetUid(const utility::string_t& Value)
{
	m_Uid = Value;
}
utility::string_t ExecutionDetailDto::GetGh() const
{
	return m_Gh.value();
}

bool ExecutionDetailDto::HasGh() const
{
	return m_Gh.has_value();
}
void ExecutionDetailDto::SetGh(const utility::string_t& Value)
{
	m_Gh = Value;
}
utility::string_t ExecutionDetailDto::GetGn() const
{
	return m_Gn.value();
}

bool ExecutionDetailDto::HasGn() const
{
	return m_Gn.has_value();
}
void ExecutionDetailDto::SetGn(const utility::string_t& Value)
{
	m_Gn = Value;
}
int32_t ExecutionDetailDto::GetNc() const
{
	return m_Nc.value();
}

bool ExecutionDetailDto::HasNc() const
{
	return m_Nc.has_value();
}
void ExecutionDetailDto::SetNc(int32_t Value)
{
	m_Nc = Value;
}
utility::string_t ExecutionDetailDto::GetS() const
{
	return m_S.value();
}

bool ExecutionDetailDto::HasS() const
{
	return m_S.has_value();
}
void ExecutionDetailDto::SetS(const utility::string_t& Value)
{
	m_S = Value;
}
int32_t ExecutionDetailDto::GetP() const
{
	return m_P.value();
}

bool ExecutionDetailDto::HasP() const
{
	return m_P.has_value();
}
void ExecutionDetailDto::SetP(int32_t Value)
{
	m_P = Value;
}
utility::string_t ExecutionDetailDto::GetCa() const
{
	return m_Ca.value();
}

bool ExecutionDetailDto::HasCa() const
{
	return m_Ca.has_value();
}
void ExecutionDetailDto::SetCa(const utility::string_t& Value)
{
	m_Ca = Value;
}
utility::string_t ExecutionDetailDto::GetSa() const
{
	return m_Sa.value();
}

bool ExecutionDetailDto::HasSa() const
{
	return m_Sa.has_value();
}
void ExecutionDetailDto::SetSa(const utility::string_t& Value)
{
	m_Sa = Value;
}
utility::string_t ExecutionDetailDto::GetCoa() const
{
	return m_Coa.value();
}

bool ExecutionDetailDto::HasCoa() const
{
	return m_Coa.has_value();
}
void ExecutionDetailDto::SetCoa(const utility::string_t& Value)
{
	m_Coa = Value;
}
utility::string_t ExecutionDetailDto::GetDur() const
{
	return m_Dur.value();
}

bool ExecutionDetailDto::HasDur() const
{
	return m_Dur.has_value();
}
void ExecutionDetailDto::SetDur(const utility::string_t& Value)
{
	m_Dur = Value;
}

ExecutionDto::ExecutionDto()
{
}
ExecutionDto::~ExecutionDto()
{
}

utility::string_t ExecutionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Eid.has_value())
	{
		rapidjson::Value EidValue(TypeToJsonValue(m_Eid, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eid", EidValue, JsonDoc.GetAllocator());
	}

	if (m_Tn.has_value())
	{
		rapidjson::Value TnValue(TypeToJsonValue(m_Tn, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tn", TnValue, JsonDoc.GetAllocator());
	}

	if (m_Uid.has_value())
	{
		rapidjson::Value UidValue(TypeToJsonValue(m_Uid, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uid", UidValue, JsonDoc.GetAllocator());
	}

	if (m_Gh.has_value())
	{
		rapidjson::Value GhValue(TypeToJsonValue(m_Gh, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gh", GhValue, JsonDoc.GetAllocator());
	}

	if (m_Gn.has_value())
	{
		rapidjson::Value GnValue(TypeToJsonValue(m_Gn, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gn", GnValue, JsonDoc.GetAllocator());
	}

	if (m_Nc.has_value())
	{
		rapidjson::Value NcValue(TypeToJsonValue(m_Nc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nc", NcValue, JsonDoc.GetAllocator());
	}

	if (m_S.has_value())
	{
		rapidjson::Value SValue(TypeToJsonValue(m_S, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("s", SValue, JsonDoc.GetAllocator());
	}

	if (m_P.has_value())
	{
		rapidjson::Value PValue(TypeToJsonValue(m_P, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("p", PValue, JsonDoc.GetAllocator());
	}

	if (m_Ca.has_value())
	{
		rapidjson::Value CaValue(TypeToJsonValue(m_Ca, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ca", CaValue, JsonDoc.GetAllocator());
	}

	if (m_Sa.has_value())
	{
		rapidjson::Value SaValue(TypeToJsonValue(m_Sa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sa", SaValue, JsonDoc.GetAllocator());
	}

	if (m_Coa.has_value())
	{
		rapidjson::Value CoaValue(TypeToJsonValue(m_Coa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coa", CoaValue, JsonDoc.GetAllocator());
	}

	if (m_Dur.has_value())
	{
		rapidjson::Value DurValue(TypeToJsonValue(m_Dur, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("dur", DurValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExecutionDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExecutionDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("eid"))
	{
		const rapidjson::Value& EidValue = JsonDoc["eid"];

		if (EidValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EidValue, m_Eid);
		}
	}

	if (JsonDoc.HasMember("tn"))
	{
		const rapidjson::Value& TnValue = JsonDoc["tn"];

		if (TnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TnValue, m_Tn);
		}
	}

	if (JsonDoc.HasMember("uid"))
	{
		const rapidjson::Value& UidValue = JsonDoc["uid"];

		if (UidValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UidValue, m_Uid);
		}
	}

	if (JsonDoc.HasMember("gh"))
	{
		const rapidjson::Value& GhValue = JsonDoc["gh"];

		if (GhValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GhValue, m_Gh);
		}
	}

	if (JsonDoc.HasMember("gn"))
	{
		const rapidjson::Value& GnValue = JsonDoc["gn"];

		if (GnValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GnValue, m_Gn);
		}
	}

	if (JsonDoc.HasMember("nc"))
	{
		const rapidjson::Value& NcValue = JsonDoc["nc"];

		if (NcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NcValue, m_Nc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member nc is null!");
		}
	}

	if (JsonDoc.HasMember("s"))
	{
		const rapidjson::Value& SValue = JsonDoc["s"];

		if (SValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SValue, m_S);
		}
	}

	if (JsonDoc.HasMember("p"))
	{
		const rapidjson::Value& PValue = JsonDoc["p"];

		if (PValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PValue, m_P);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member p is null!");
		}
	}

	if (JsonDoc.HasMember("ca"))
	{
		const rapidjson::Value& CaValue = JsonDoc["ca"];

		if (CaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CaValue, m_Ca);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ca is null!");
		}
	}

	if (JsonDoc.HasMember("sa"))
	{
		const rapidjson::Value& SaValue = JsonDoc["sa"];

		if (SaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SaValue, m_Sa);
		}
	}

	if (JsonDoc.HasMember("coa"))
	{
		const rapidjson::Value& CoaValue = JsonDoc["coa"];

		if (CoaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoaValue, m_Coa);
		}
	}

	if (JsonDoc.HasMember("dur"))
	{
		const rapidjson::Value& DurValue = JsonDoc["dur"];

		if (DurValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurValue, m_Dur);
		}
	}
}


utility::string_t ExecutionDto::GetEid() const
{
	return m_Eid.value();
}

bool ExecutionDto::HasEid() const
{
	return m_Eid.has_value();
}
void ExecutionDto::SetEid(const utility::string_t& Value)
{
	m_Eid = Value;
}
utility::string_t ExecutionDto::GetTn() const
{
	return m_Tn.value();
}

bool ExecutionDto::HasTn() const
{
	return m_Tn.has_value();
}
void ExecutionDto::SetTn(const utility::string_t& Value)
{
	m_Tn = Value;
}
utility::string_t ExecutionDto::GetUid() const
{
	return m_Uid.value();
}

bool ExecutionDto::HasUid() const
{
	return m_Uid.has_value();
}
void ExecutionDto::SetUid(const utility::string_t& Value)
{
	m_Uid = Value;
}
utility::string_t ExecutionDto::GetGh() const
{
	return m_Gh.value();
}

bool ExecutionDto::HasGh() const
{
	return m_Gh.has_value();
}
void ExecutionDto::SetGh(const utility::string_t& Value)
{
	m_Gh = Value;
}
utility::string_t ExecutionDto::GetGn() const
{
	return m_Gn.value();
}

bool ExecutionDto::HasGn() const
{
	return m_Gn.has_value();
}
void ExecutionDto::SetGn(const utility::string_t& Value)
{
	m_Gn = Value;
}
int32_t ExecutionDto::GetNc() const
{
	return m_Nc.value();
}

bool ExecutionDto::HasNc() const
{
	return m_Nc.has_value();
}
void ExecutionDto::SetNc(int32_t Value)
{
	m_Nc = Value;
}
utility::string_t ExecutionDto::GetS() const
{
	return m_S.value();
}

bool ExecutionDto::HasS() const
{
	return m_S.has_value();
}
void ExecutionDto::SetS(const utility::string_t& Value)
{
	m_S = Value;
}
int32_t ExecutionDto::GetP() const
{
	return m_P.value();
}

bool ExecutionDto::HasP() const
{
	return m_P.has_value();
}
void ExecutionDto::SetP(int32_t Value)
{
	m_P = Value;
}
utility::string_t ExecutionDto::GetCa() const
{
	return m_Ca.value();
}

bool ExecutionDto::HasCa() const
{
	return m_Ca.has_value();
}
void ExecutionDto::SetCa(const utility::string_t& Value)
{
	m_Ca = Value;
}
utility::string_t ExecutionDto::GetSa() const
{
	return m_Sa.value();
}

bool ExecutionDto::HasSa() const
{
	return m_Sa.has_value();
}
void ExecutionDto::SetSa(const utility::string_t& Value)
{
	m_Sa = Value;
}
utility::string_t ExecutionDto::GetCoa() const
{
	return m_Coa.value();
}

bool ExecutionDto::HasCoa() const
{
	return m_Coa.has_value();
}
void ExecutionDto::SetCoa(const utility::string_t& Value)
{
	m_Coa = Value;
}
utility::string_t ExecutionDto::GetDur() const
{
	return m_Dur.value();
}

bool ExecutionDto::HasDur() const
{
	return m_Dur.has_value();
}
void ExecutionDto::SetDur(const utility::string_t& Value)
{
	m_Dur = Value;
}

ExecutionListResponse::ExecutionListResponse()
{
}
ExecutionListResponse::~ExecutionListResponse()
{
}

utility::string_t ExecutionListResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_I.has_value())
	{
		rapidjson::Value IValue(TypeToJsonValue(m_I, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("i", IValue, JsonDoc.GetAllocator());
	}

	if (m_Tc.has_value())
	{
		rapidjson::Value TcValue(TypeToJsonValue(m_Tc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tc", TcValue, JsonDoc.GetAllocator());
	}

	if (m_Sk.has_value())
	{
		rapidjson::Value SkValue(TypeToJsonValue(m_Sk, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sk", SkValue, JsonDoc.GetAllocator());
	}

	if (m_Lm.has_value())
	{
		rapidjson::Value LmValue(TypeToJsonValue(m_Lm, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lm", LmValue, JsonDoc.GetAllocator());
	}

	if (m_St.has_value())
	{
		rapidjson::Value StValue(TypeToJsonValue(m_St, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("st", StValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExecutionListResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExecutionListResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("i"))
	{
		const rapidjson::Value& IValue = JsonDoc["i"];

		if (IValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IValue, m_I);
		}
	}

	if (JsonDoc.HasMember("tc"))
	{
		const rapidjson::Value& TcValue = JsonDoc["tc"];

		if (TcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TcValue, m_Tc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tc is null!");
		}
	}

	if (JsonDoc.HasMember("sk"))
	{
		const rapidjson::Value& SkValue = JsonDoc["sk"];

		if (SkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkValue, m_Sk);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sk is null!");
		}
	}

	if (JsonDoc.HasMember("lm"))
	{
		const rapidjson::Value& LmValue = JsonDoc["lm"];

		if (LmValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LmValue, m_Lm);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lm is null!");
		}
	}

	if (JsonDoc.HasMember("st"))
	{
		const rapidjson::Value& StValue = JsonDoc["st"];

		if (StValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StValue, m_St);
		}
	}
}


const std::vector<std::shared_ptr<ExecutionDto>>& ExecutionListResponse::GetI() const
{
	return m_I.value();
}

bool ExecutionListResponse::HasI() const
{
	return m_I.has_value();
}
void ExecutionListResponse::SetI(const std::vector<std::shared_ptr<ExecutionDto>>& Value)
{
	m_I = Value;
}
int64_t ExecutionListResponse::GetTc() const
{
	return m_Tc.value();
}

bool ExecutionListResponse::HasTc() const
{
	return m_Tc.has_value();
}
void ExecutionListResponse::SetTc(int64_t Value)
{
	m_Tc = Value;
}
int32_t ExecutionListResponse::GetSk() const
{
	return m_Sk.value();
}

bool ExecutionListResponse::HasSk() const
{
	return m_Sk.has_value();
}
void ExecutionListResponse::SetSk(int32_t Value)
{
	m_Sk = Value;
}
int32_t ExecutionListResponse::GetLm() const
{
	return m_Lm.value();
}

bool ExecutionListResponse::HasLm() const
{
	return m_Lm.has_value();
}
void ExecutionListResponse::SetLm(int32_t Value)
{
	m_Lm = Value;
}
int64_t ExecutionListResponse::GetSt() const
{
	return m_St.value();
}

bool ExecutionListResponse::HasSt() const
{
	return m_St.has_value();
}
void ExecutionListResponse::SetSt(int64_t Value)
{
	m_St = Value;
}

ExecutionLogsResponse::ExecutionLogsResponse()
{
}
ExecutionLogsResponse::~ExecutionLogsResponse()
{
}

utility::string_t ExecutionLogsResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExecutionId.has_value())
	{
		rapidjson::Value ExecutionIdValue(TypeToJsonValue(m_ExecutionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("executionId", ExecutionIdValue, JsonDoc.GetAllocator());
	}

	if (m_Logs.has_value())
	{
		rapidjson::Value LogsValue(TypeToJsonValue(m_Logs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("logs", LogsValue, JsonDoc.GetAllocator());
	}

	if (m_TotalCount.has_value())
	{
		rapidjson::Value TotalCountValue(TypeToJsonValue(m_TotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalCount", TotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExecutionLogsResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExecutionLogsResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("executionId"))
	{
		const rapidjson::Value& ExecutionIdValue = JsonDoc["executionId"];

		if (ExecutionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExecutionIdValue, m_ExecutionId);
		}
	}

	if (JsonDoc.HasMember("logs"))
	{
		const rapidjson::Value& LogsValue = JsonDoc["logs"];

		if (LogsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LogsValue, m_Logs);
		}
	}

	if (JsonDoc.HasMember("totalCount"))
	{
		const rapidjson::Value& TotalCountValue = JsonDoc["totalCount"];

		if (TotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalCountValue, m_TotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalCount is null!");
		}
	}
}


utility::string_t ExecutionLogsResponse::GetExecutionId() const
{
	return m_ExecutionId.value();
}

bool ExecutionLogsResponse::HasExecutionId() const
{
	return m_ExecutionId.has_value();
}
void ExecutionLogsResponse::SetExecutionId(const utility::string_t& Value)
{
	m_ExecutionId = Value;
}
const std::vector<std::shared_ptr<LogEntryDto>>& ExecutionLogsResponse::GetLogs() const
{
	return m_Logs.value();
}

bool ExecutionLogsResponse::HasLogs() const
{
	return m_Logs.has_value();
}
void ExecutionLogsResponse::SetLogs(const std::vector<std::shared_ptr<LogEntryDto>>& Value)
{
	m_Logs = Value;
}
int32_t ExecutionLogsResponse::GetTotalCount() const
{
	return m_TotalCount.value();
}

bool ExecutionLogsResponse::HasTotalCount() const
{
	return m_TotalCount.has_value();
}
void ExecutionLogsResponse::SetTotalCount(int32_t Value)
{
	m_TotalCount = Value;
}

ExecutionStatusUpdateRequest::ExecutionStatusUpdateRequest()
{
}
ExecutionStatusUpdateRequest::~ExecutionStatusUpdateRequest()
{
}

utility::string_t ExecutionStatusUpdateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Progress.has_value())
	{
		rapidjson::Value ProgressValue(TypeToJsonValue(m_Progress, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("progress", ProgressValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}

	if (m_FailedNodeId.has_value())
	{
		rapidjson::Value FailedNodeIdValue(TypeToJsonValue(m_FailedNodeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("failedNodeId", FailedNodeIdValue, JsonDoc.GetAllocator());
	}

	if (m_QueueWaitMs.has_value())
	{
		rapidjson::Value QueueWaitMsValue(TypeToJsonValue(m_QueueWaitMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queueWaitMs", QueueWaitMsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExecutionStatusUpdateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExecutionStatusUpdateRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("progress"))
	{
		const rapidjson::Value& ProgressValue = JsonDoc["progress"];

		if (ProgressValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProgressValue, m_Progress);
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
	}

	if (JsonDoc.HasMember("failedNodeId"))
	{
		const rapidjson::Value& FailedNodeIdValue = JsonDoc["failedNodeId"];

		if (FailedNodeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FailedNodeIdValue, m_FailedNodeId);
		}
	}

	if (JsonDoc.HasMember("queueWaitMs"))
	{
		const rapidjson::Value& QueueWaitMsValue = JsonDoc["queueWaitMs"];

		if (QueueWaitMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueWaitMsValue, m_QueueWaitMs);
		}
	}
}


utility::string_t ExecutionStatusUpdateRequest::GetStatus() const
{
	return m_Status.value();
}

bool ExecutionStatusUpdateRequest::HasStatus() const
{
	return m_Status.has_value();
}
void ExecutionStatusUpdateRequest::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int32_t ExecutionStatusUpdateRequest::GetProgress() const
{
	return m_Progress.value();
}

bool ExecutionStatusUpdateRequest::HasProgress() const
{
	return m_Progress.has_value();
}
void ExecutionStatusUpdateRequest::SetProgress(int32_t Value)
{
	m_Progress = Value;
}
utility::string_t ExecutionStatusUpdateRequest::GetError() const
{
	return m_Error.value();
}

bool ExecutionStatusUpdateRequest::HasError() const
{
	return m_Error.has_value();
}
void ExecutionStatusUpdateRequest::SetError(const utility::string_t& Value)
{
	m_Error = Value;
}
utility::string_t ExecutionStatusUpdateRequest::GetFailedNodeId() const
{
	return m_FailedNodeId.value();
}

bool ExecutionStatusUpdateRequest::HasFailedNodeId() const
{
	return m_FailedNodeId.has_value();
}
void ExecutionStatusUpdateRequest::SetFailedNodeId(const utility::string_t& Value)
{
	m_FailedNodeId = Value;
}
double ExecutionStatusUpdateRequest::GetQueueWaitMs() const
{
	return m_QueueWaitMs.value();
}

bool ExecutionStatusUpdateRequest::HasQueueWaitMs() const
{
	return m_QueueWaitMs.has_value();
}
void ExecutionStatusUpdateRequest::SetQueueWaitMs(double Value)
{
	m_QueueWaitMs = Value;
}

GacValidationBucketRule::GacValidationBucketRule()
{
}
GacValidationBucketRule::~GacValidationBucketRule()
{
}

utility::string_t GacValidationBucketRule::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_BucketName.has_value())
	{
		rapidjson::Value BucketNameValue(TypeToJsonValue(m_BucketName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("bucketName", BucketNameValue, JsonDoc.GetAllocator());
	}

	if (m_Permissions.has_value())
	{
		rapidjson::Value PermissionsValue(TypeToJsonValue(m_Permissions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("permissions", PermissionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GacValidationBucketRule::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GacValidationBucketRule::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("bucketName"))
	{
		const rapidjson::Value& BucketNameValue = JsonDoc["bucketName"];

		if (BucketNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketNameValue, m_BucketName);
		}
	}

	if (JsonDoc.HasMember("permissions"))
	{
		const rapidjson::Value& PermissionsValue = JsonDoc["permissions"];

		if (PermissionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PermissionsValue, m_Permissions);
		}
	}
}


utility::string_t GacValidationBucketRule::GetBucketName() const
{
	return m_BucketName.value();
}

bool GacValidationBucketRule::HasBucketName() const
{
	return m_BucketName.has_value();
}
void GacValidationBucketRule::SetBucketName(const utility::string_t& Value)
{
	m_BucketName = Value;
}
const std::vector<utility::string_t>& GacValidationBucketRule::GetPermissions() const
{
	return m_Permissions.value();
}

bool GacValidationBucketRule::HasPermissions() const
{
	return m_Permissions.has_value();
}
void GacValidationBucketRule::SetPermissions(const std::vector<utility::string_t>& Value)
{
	m_Permissions = Value;
}

GacValidationCheck::GacValidationCheck()
{
}
GacValidationCheck::~GacValidationCheck()
{
}

utility::string_t GacValidationCheck::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CheckType.has_value())
	{
		rapidjson::Value CheckTypeValue(TypeToJsonValue(m_CheckType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkType", CheckTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_DurationMs.has_value())
	{
		rapidjson::Value DurationMsValue(TypeToJsonValue(m_DurationMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("durationMs", DurationMsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GacValidationCheck::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GacValidationCheck::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("checkType"))
	{
		const rapidjson::Value& CheckTypeValue = JsonDoc["checkType"];

		if (CheckTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckTypeValue, m_CheckType);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message);
		}
	}

	if (JsonDoc.HasMember("durationMs"))
	{
		const rapidjson::Value& DurationMsValue = JsonDoc["durationMs"];

		if (DurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurationMsValue, m_DurationMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member durationMs is null!");
		}
	}
}


utility::string_t GacValidationCheck::GetCheckType() const
{
	return m_CheckType.value();
}

bool GacValidationCheck::HasCheckType() const
{
	return m_CheckType.has_value();
}
void GacValidationCheck::SetCheckType(const utility::string_t& Value)
{
	m_CheckType = Value;
}
utility::string_t GacValidationCheck::GetName() const
{
	return m_Name.value();
}

bool GacValidationCheck::HasName() const
{
	return m_Name.has_value();
}
void GacValidationCheck::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t GacValidationCheck::GetStatus() const
{
	return m_Status.value();
}

bool GacValidationCheck::HasStatus() const
{
	return m_Status.has_value();
}
void GacValidationCheck::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t GacValidationCheck::GetMessage() const
{
	return m_Message.value();
}

bool GacValidationCheck::HasMessage() const
{
	return m_Message.has_value();
}
void GacValidationCheck::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
int64_t GacValidationCheck::GetDurationMs() const
{
	return m_DurationMs.value();
}

bool GacValidationCheck::HasDurationMs() const
{
	return m_DurationMs.has_value();
}
void GacValidationCheck::SetDurationMs(int64_t Value)
{
	m_DurationMs = Value;
}

GacValidationRequest::GacValidationRequest()
{
}
GacValidationRequest::~GacValidationRequest()
{
}

utility::string_t GacValidationRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_EnvVarName.has_value())
	{
		rapidjson::Value EnvVarNameValue(TypeToJsonValue(m_EnvVarName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("envVarName", EnvVarNameValue, JsonDoc.GetAllocator());
	}

	if (m_ApplicationName.has_value())
	{
		rapidjson::Value ApplicationNameValue(TypeToJsonValue(m_ApplicationName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("applicationName", ApplicationNameValue, JsonDoc.GetAllocator());
	}

	if (m_ValidationConfig.has_value())
	{
		rapidjson::Value ValidationConfigValue(TypeToJsonValue(m_ValidationConfig, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("validationConfig", ValidationConfigValue, JsonDoc.GetAllocator());
	}

	if (m_GacJson.has_value())
	{
		rapidjson::Value GacJsonValue(TypeToJsonValue(m_GacJson, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gacJson", GacJsonValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GacValidationRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GacValidationRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("envVarName"))
	{
		const rapidjson::Value& EnvVarNameValue = JsonDoc["envVarName"];

		if (EnvVarNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnvVarNameValue, m_EnvVarName);
		}
	}

	if (JsonDoc.HasMember("applicationName"))
	{
		const rapidjson::Value& ApplicationNameValue = JsonDoc["applicationName"];

		if (ApplicationNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApplicationNameValue, m_ApplicationName);
		}
	}

	if (JsonDoc.HasMember("validationConfig"))
	{
		const rapidjson::Value& ValidationConfigValue = JsonDoc["validationConfig"];

		if (ValidationConfigValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValidationConfigValue, m_ValidationConfig);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member validationConfig is null!");
		}
	}

	if (JsonDoc.HasMember("gacJson"))
	{
		const rapidjson::Value& GacJsonValue = JsonDoc["gacJson"];

		if (GacJsonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GacJsonValue, m_GacJson);
		}
	}
}


utility::string_t GacValidationRequest::GetTenantName() const
{
	return m_TenantName.value();
}

bool GacValidationRequest::HasTenantName() const
{
	return m_TenantName.has_value();
}
void GacValidationRequest::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t GacValidationRequest::GetEnvVarName() const
{
	return m_EnvVarName.value();
}

bool GacValidationRequest::HasEnvVarName() const
{
	return m_EnvVarName.has_value();
}
void GacValidationRequest::SetEnvVarName(const utility::string_t& Value)
{
	m_EnvVarName = Value;
}
utility::string_t GacValidationRequest::GetApplicationName() const
{
	return m_ApplicationName.value();
}

bool GacValidationRequest::HasApplicationName() const
{
	return m_ApplicationName.has_value();
}
void GacValidationRequest::SetApplicationName(const utility::string_t& Value)
{
	m_ApplicationName = Value;
}
std::shared_ptr<GacValidationRequestConfig> GacValidationRequest::GetValidationConfig() const
{
	return m_ValidationConfig.value();
}

bool GacValidationRequest::HasValidationConfig() const
{
	return m_ValidationConfig.has_value();
}
void GacValidationRequest::SetValidationConfig(const std::shared_ptr<GacValidationRequestConfig>& Value)
{
	m_ValidationConfig = Value;
}
utility::string_t GacValidationRequest::GetGacJson() const
{
	return m_GacJson.value();
}

bool GacValidationRequest::HasGacJson() const
{
	return m_GacJson.has_value();
}
void GacValidationRequest::SetGacJson(const utility::string_t& Value)
{
	m_GacJson = Value;
}

GacValidationRequestConfig::GacValidationRequestConfig()
{
}
GacValidationRequestConfig::~GacValidationRequestConfig()
{
}

utility::string_t GacValidationRequestConfig::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CheckVertexAi.has_value())
	{
		rapidjson::Value CheckVertexAiValue(TypeToJsonValue(m_CheckVertexAi, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkVertexAi", CheckVertexAiValue, JsonDoc.GetAllocator());
	}

	if (m_RequiredBuckets.has_value())
	{
		rapidjson::Value RequiredBucketsValue(TypeToJsonValue(m_RequiredBuckets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiredBuckets", RequiredBucketsValue, JsonDoc.GetAllocator());
	}

	if (m_RequiredProjectPermissions.has_value())
	{
		rapidjson::Value RequiredProjectPermissionsValue(TypeToJsonValue(m_RequiredProjectPermissions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiredProjectPermissions", RequiredProjectPermissionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GacValidationRequestConfig::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GacValidationRequestConfig::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("checkVertexAi"))
	{
		const rapidjson::Value& CheckVertexAiValue = JsonDoc["checkVertexAi"];

		if (CheckVertexAiValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckVertexAiValue, m_CheckVertexAi);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member checkVertexAi is null!");
		}
	}

	if (JsonDoc.HasMember("requiredBuckets"))
	{
		const rapidjson::Value& RequiredBucketsValue = JsonDoc["requiredBuckets"];

		if (RequiredBucketsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiredBucketsValue, m_RequiredBuckets);
		}
	}

	if (JsonDoc.HasMember("requiredProjectPermissions"))
	{
		const rapidjson::Value& RequiredProjectPermissionsValue = JsonDoc["requiredProjectPermissions"];

		if (RequiredProjectPermissionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiredProjectPermissionsValue, m_RequiredProjectPermissions);
		}
	}
}


bool GacValidationRequestConfig::GetCheckVertexAi() const
{
	return m_CheckVertexAi.value();
}

bool GacValidationRequestConfig::HasCheckVertexAi() const
{
	return m_CheckVertexAi.has_value();
}
void GacValidationRequestConfig::SetCheckVertexAi(const bool& Value)
{
	m_CheckVertexAi = Value;
}
const std::vector<std::shared_ptr<GacValidationBucketRule>>& GacValidationRequestConfig::GetRequiredBuckets() const
{
	return m_RequiredBuckets.value();
}

bool GacValidationRequestConfig::HasRequiredBuckets() const
{
	return m_RequiredBuckets.has_value();
}
void GacValidationRequestConfig::SetRequiredBuckets(const std::vector<std::shared_ptr<GacValidationBucketRule>>& Value)
{
	m_RequiredBuckets = Value;
}
const std::vector<utility::string_t>& GacValidationRequestConfig::GetRequiredProjectPermissions() const
{
	return m_RequiredProjectPermissions.value();
}

bool GacValidationRequestConfig::HasRequiredProjectPermissions() const
{
	return m_RequiredProjectPermissions.has_value();
}
void GacValidationRequestConfig::SetRequiredProjectPermissions(const std::vector<utility::string_t>& Value)
{
	m_RequiredProjectPermissions = Value;
}

GacValidationResult::GacValidationResult()
{
}
GacValidationResult::~GacValidationResult()
{
}

utility::string_t GacValidationResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ProjectId.has_value())
	{
		rapidjson::Value ProjectIdValue(TypeToJsonValue(m_ProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectId", ProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_ClientEmail.has_value())
	{
		rapidjson::Value ClientEmailValue(TypeToJsonValue(m_ClientEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientEmail", ClientEmailValue, JsonDoc.GetAllocator());
	}

	if (m_OverallStatus.has_value())
	{
		rapidjson::Value OverallStatusValue(TypeToJsonValue(m_OverallStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("overallStatus", OverallStatusValue, JsonDoc.GetAllocator());
	}

	if (m_Checks.has_value())
	{
		rapidjson::Value ChecksValue(TypeToJsonValue(m_Checks, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checks", ChecksValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GacValidationResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GacValidationResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId);
		}
	}

	if (JsonDoc.HasMember("clientEmail"))
	{
		const rapidjson::Value& ClientEmailValue = JsonDoc["clientEmail"];

		if (ClientEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClientEmailValue, m_ClientEmail);
		}
	}

	if (JsonDoc.HasMember("overallStatus"))
	{
		const rapidjson::Value& OverallStatusValue = JsonDoc["overallStatus"];

		if (OverallStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverallStatusValue, m_OverallStatus);
		}
	}

	if (JsonDoc.HasMember("checks"))
	{
		const rapidjson::Value& ChecksValue = JsonDoc["checks"];

		if (ChecksValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChecksValue, m_Checks);
		}
	}
}


utility::string_t GacValidationResult::GetProjectId() const
{
	return m_ProjectId.value();
}

bool GacValidationResult::HasProjectId() const
{
	return m_ProjectId.has_value();
}
void GacValidationResult::SetProjectId(const utility::string_t& Value)
{
	m_ProjectId = Value;
}
utility::string_t GacValidationResult::GetClientEmail() const
{
	return m_ClientEmail.value();
}

bool GacValidationResult::HasClientEmail() const
{
	return m_ClientEmail.has_value();
}
void GacValidationResult::SetClientEmail(const utility::string_t& Value)
{
	m_ClientEmail = Value;
}
utility::string_t GacValidationResult::GetOverallStatus() const
{
	return m_OverallStatus.value();
}

bool GacValidationResult::HasOverallStatus() const
{
	return m_OverallStatus.has_value();
}
void GacValidationResult::SetOverallStatus(const utility::string_t& Value)
{
	m_OverallStatus = Value;
}
const std::vector<std::shared_ptr<GacValidationCheck>>& GacValidationResult::GetChecks() const
{
	return m_Checks.value();
}

bool GacValidationResult::HasChecks() const
{
	return m_Checks.has_value();
}
void GacValidationResult::SetChecks(const std::vector<std::shared_ptr<GacValidationCheck>>& Value)
{
	m_Checks = Value;
}

GraphExecutionError::GraphExecutionError()
{
}
GraphExecutionError::~GraphExecutionError()
{
}

utility::string_t GraphExecutionError::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_NodeId.has_value())
	{
		rapidjson::Value NodeIdValue(TypeToJsonValue(m_NodeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeId", NodeIdValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GraphExecutionError::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GraphExecutionError::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("nodeId"))
	{
		const rapidjson::Value& NodeIdValue = JsonDoc["nodeId"];

		if (NodeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeIdValue, m_NodeId);
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
	}
}


utility::string_t GraphExecutionError::GetNodeId() const
{
	return m_NodeId.value();
}

bool GraphExecutionError::HasNodeId() const
{
	return m_NodeId.has_value();
}
void GraphExecutionError::SetNodeId(const utility::string_t& Value)
{
	m_NodeId = Value;
}
utility::string_t GraphExecutionError::GetError() const
{
	return m_Error.value();
}

bool GraphExecutionError::HasError() const
{
	return m_Error.has_value();
}
void GraphExecutionError::SetError(const utility::string_t& Value)
{
	m_Error = Value;
}

GraphExecutionRequest::GraphExecutionRequest()
{
}
GraphExecutionRequest::~GraphExecutionRequest()
{
}

utility::string_t GraphExecutionRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Graph.has_value())
	{
		rapidjson::Value GraphValue(TypeToJsonValue(m_Graph, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("graph", GraphValue, JsonDoc.GetAllocator());
	}

	if (m_NodeDefinitions.has_value())
	{
		rapidjson::Value NodeDefinitionsValue(TypeToJsonValue(m_NodeDefinitions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeDefinitions", NodeDefinitionsValue, JsonDoc.GetAllocator());
	}

	if (m_Options.has_value())
	{
		rapidjson::Value OptionsValue(TypeToJsonValue(m_Options, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("options", OptionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GraphExecutionRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GraphExecutionRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("graph"))
	{
		const rapidjson::Value& GraphValue = JsonDoc["graph"];

		if (GraphValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GraphValue, m_Graph);
		}
	}

	if (JsonDoc.HasMember("nodeDefinitions"))
	{
		const rapidjson::Value& NodeDefinitionsValue = JsonDoc["nodeDefinitions"];

		if (NodeDefinitionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeDefinitionsValue, m_NodeDefinitions);
		}
	}

	if (JsonDoc.HasMember("options"))
	{
		const rapidjson::Value& OptionsValue = JsonDoc["options"];

		if (OptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionsValue, m_Options);
		}
	}
}


std::shared_ptr<rapidjson::Document> GraphExecutionRequest::GetGraph() const
{
	return m_Graph.value();
}

bool GraphExecutionRequest::HasGraph() const
{
	return m_Graph.has_value();
}
void GraphExecutionRequest::SetGraph(const std::shared_ptr<rapidjson::Document>& Value)
{
	m_Graph = Value;
}
std::shared_ptr<rapidjson::Document> GraphExecutionRequest::GetNodeDefinitions() const
{
	return m_NodeDefinitions.value();
}

bool GraphExecutionRequest::HasNodeDefinitions() const
{
	return m_NodeDefinitions.has_value();
}
void GraphExecutionRequest::SetNodeDefinitions(const std::shared_ptr<rapidjson::Document>& Value)
{
	m_NodeDefinitions = Value;
}
const std::map<utility::string_t, utility::string_t>& GraphExecutionRequest::GetOptions() const
{
	return m_Options.value();
}

bool GraphExecutionRequest::HasOptions() const
{
	return m_Options.has_value();
}
void GraphExecutionRequest::SetOptions(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Options = Value;
}

GraphExecutionState::GraphExecutionState()
{
}
GraphExecutionState::~GraphExecutionState()
{
}

utility::string_t GraphExecutionState::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExecutionId.has_value())
	{
		rapidjson::Value ExecutionIdValue(TypeToJsonValue(m_ExecutionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("executionId", ExecutionIdValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Progress.has_value())
	{
		rapidjson::Value ProgressValue(TypeToJsonValue(m_Progress, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("progress", ProgressValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_CompletedNodes.has_value())
	{
		rapidjson::Value CompletedNodesValue(TypeToJsonValue(m_CompletedNodes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("completedNodes", CompletedNodesValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentNode.has_value())
	{
		rapidjson::Value CurrentNodeValue(TypeToJsonValue(m_CurrentNode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentNode", CurrentNodeValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GraphExecutionState::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GraphExecutionState::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("executionId"))
	{
		const rapidjson::Value& ExecutionIdValue = JsonDoc["executionId"];

		if (ExecutionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExecutionIdValue, m_ExecutionId);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("progress"))
	{
		const rapidjson::Value& ProgressValue = JsonDoc["progress"];

		if (ProgressValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProgressValue, m_Progress);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member progress is null!");
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("completedNodes"))
	{
		const rapidjson::Value& CompletedNodesValue = JsonDoc["completedNodes"];

		if (CompletedNodesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompletedNodesValue, m_CompletedNodes);
		}
	}

	if (JsonDoc.HasMember("currentNode"))
	{
		const rapidjson::Value& CurrentNodeValue = JsonDoc["currentNode"];

		if (CurrentNodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentNodeValue, m_CurrentNode);
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member error is null!");
		}
	}
}


utility::string_t GraphExecutionState::GetExecutionId() const
{
	return m_ExecutionId.value();
}

bool GraphExecutionState::HasExecutionId() const
{
	return m_ExecutionId.has_value();
}
void GraphExecutionState::SetExecutionId(const utility::string_t& Value)
{
	m_ExecutionId = Value;
}
utility::string_t GraphExecutionState::GetStatus() const
{
	return m_Status.value();
}

bool GraphExecutionState::HasStatus() const
{
	return m_Status.has_value();
}
void GraphExecutionState::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int32_t GraphExecutionState::GetProgress() const
{
	return m_Progress.value();
}

bool GraphExecutionState::HasProgress() const
{
	return m_Progress.has_value();
}
void GraphExecutionState::SetProgress(int32_t Value)
{
	m_Progress = Value;
}
utility::string_t GraphExecutionState::GetTenantName() const
{
	return m_TenantName.value();
}

bool GraphExecutionState::HasTenantName() const
{
	return m_TenantName.has_value();
}
void GraphExecutionState::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
const std::vector<std::shared_ptr<CompletedNodeOutput>>& GraphExecutionState::GetCompletedNodes() const
{
	return m_CompletedNodes.value();
}

bool GraphExecutionState::HasCompletedNodes() const
{
	return m_CompletedNodes.has_value();
}
void GraphExecutionState::SetCompletedNodes(const std::vector<std::shared_ptr<CompletedNodeOutput>>& Value)
{
	m_CompletedNodes = Value;
}
utility::string_t GraphExecutionState::GetCurrentNode() const
{
	return m_CurrentNode.value();
}

bool GraphExecutionState::HasCurrentNode() const
{
	return m_CurrentNode.has_value();
}
void GraphExecutionState::SetCurrentNode(const utility::string_t& Value)
{
	m_CurrentNode = Value;
}
std::shared_ptr<GraphExecutionError> GraphExecutionState::GetError() const
{
	return m_Error.value();
}

bool GraphExecutionState::HasError() const
{
	return m_Error.has_value();
}
void GraphExecutionState::SetError(const std::shared_ptr<GraphExecutionError>& Value)
{
	m_Error = Value;
}

GraphExecutionStats::GraphExecutionStats()
{
}
GraphExecutionStats::~GraphExecutionStats()
{
}

utility::string_t GraphExecutionStats::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TotalExecutions.has_value())
	{
		rapidjson::Value TotalExecutionsValue(TypeToJsonValue(m_TotalExecutions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalExecutions", TotalExecutionsValue, JsonDoc.GetAllocator());
	}

	if (m_CompletedExecutions.has_value())
	{
		rapidjson::Value CompletedExecutionsValue(TypeToJsonValue(m_CompletedExecutions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("completedExecutions", CompletedExecutionsValue, JsonDoc.GetAllocator());
	}

	if (m_FailedExecutions.has_value())
	{
		rapidjson::Value FailedExecutionsValue(TypeToJsonValue(m_FailedExecutions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("failedExecutions", FailedExecutionsValue, JsonDoc.GetAllocator());
	}

	if (m_RunningExecutions.has_value())
	{
		rapidjson::Value RunningExecutionsValue(TypeToJsonValue(m_RunningExecutions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("runningExecutions", RunningExecutionsValue, JsonDoc.GetAllocator());
	}

	if (m_AverageDurationMs.has_value())
	{
		rapidjson::Value AverageDurationMsValue(TypeToJsonValue(m_AverageDurationMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("averageDurationMs", AverageDurationMsValue, JsonDoc.GetAllocator());
	}

	if (m_SuccessRate.has_value())
	{
		rapidjson::Value SuccessRateValue(TypeToJsonValue(m_SuccessRate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("successRate", SuccessRateValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GraphExecutionStats::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GraphExecutionStats::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("totalExecutions"))
	{
		const rapidjson::Value& TotalExecutionsValue = JsonDoc["totalExecutions"];

		if (TotalExecutionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalExecutionsValue, m_TotalExecutions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalExecutions is null!");
		}
	}

	if (JsonDoc.HasMember("completedExecutions"))
	{
		const rapidjson::Value& CompletedExecutionsValue = JsonDoc["completedExecutions"];

		if (CompletedExecutionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompletedExecutionsValue, m_CompletedExecutions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member completedExecutions is null!");
		}
	}

	if (JsonDoc.HasMember("failedExecutions"))
	{
		const rapidjson::Value& FailedExecutionsValue = JsonDoc["failedExecutions"];

		if (FailedExecutionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FailedExecutionsValue, m_FailedExecutions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member failedExecutions is null!");
		}
	}

	if (JsonDoc.HasMember("runningExecutions"))
	{
		const rapidjson::Value& RunningExecutionsValue = JsonDoc["runningExecutions"];

		if (RunningExecutionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RunningExecutionsValue, m_RunningExecutions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member runningExecutions is null!");
		}
	}

	if (JsonDoc.HasMember("averageDurationMs"))
	{
		const rapidjson::Value& AverageDurationMsValue = JsonDoc["averageDurationMs"];

		if (AverageDurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AverageDurationMsValue, m_AverageDurationMs);
		}
	}

	if (JsonDoc.HasMember("successRate"))
	{
		const rapidjson::Value& SuccessRateValue = JsonDoc["successRate"];

		if (SuccessRateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessRateValue, m_SuccessRate);
		}
	}
}


int64_t GraphExecutionStats::GetTotalExecutions() const
{
	return m_TotalExecutions.value();
}

bool GraphExecutionStats::HasTotalExecutions() const
{
	return m_TotalExecutions.has_value();
}
void GraphExecutionStats::SetTotalExecutions(int64_t Value)
{
	m_TotalExecutions = Value;
}
int64_t GraphExecutionStats::GetCompletedExecutions() const
{
	return m_CompletedExecutions.value();
}

bool GraphExecutionStats::HasCompletedExecutions() const
{
	return m_CompletedExecutions.has_value();
}
void GraphExecutionStats::SetCompletedExecutions(int64_t Value)
{
	m_CompletedExecutions = Value;
}
int64_t GraphExecutionStats::GetFailedExecutions() const
{
	return m_FailedExecutions.value();
}

bool GraphExecutionStats::HasFailedExecutions() const
{
	return m_FailedExecutions.has_value();
}
void GraphExecutionStats::SetFailedExecutions(int64_t Value)
{
	m_FailedExecutions = Value;
}
int64_t GraphExecutionStats::GetRunningExecutions() const
{
	return m_RunningExecutions.value();
}

bool GraphExecutionStats::HasRunningExecutions() const
{
	return m_RunningExecutions.has_value();
}
void GraphExecutionStats::SetRunningExecutions(int64_t Value)
{
	m_RunningExecutions = Value;
}
double GraphExecutionStats::GetAverageDurationMs() const
{
	return m_AverageDurationMs.value();
}

bool GraphExecutionStats::HasAverageDurationMs() const
{
	return m_AverageDurationMs.has_value();
}
void GraphExecutionStats::SetAverageDurationMs(double Value)
{
	m_AverageDurationMs = Value;
}
double GraphExecutionStats::GetSuccessRate() const
{
	return m_SuccessRate.value();
}

bool GraphExecutionStats::HasSuccessRate() const
{
	return m_SuccessRate.has_value();
}
void GraphExecutionStats::SetSuccessRate(double Value)
{
	m_SuccessRate = Value;
}

GraphExecutionSubmitResponse::GraphExecutionSubmitResponse()
{
}
GraphExecutionSubmitResponse::~GraphExecutionSubmitResponse()
{
}

utility::string_t GraphExecutionSubmitResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExecutionId.has_value())
	{
		rapidjson::Value ExecutionIdValue(TypeToJsonValue(m_ExecutionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("executionId", ExecutionIdValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GraphExecutionSubmitResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GraphExecutionSubmitResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("executionId"))
	{
		const rapidjson::Value& ExecutionIdValue = JsonDoc["executionId"];

		if (ExecutionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExecutionIdValue, m_ExecutionId);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}
}


utility::string_t GraphExecutionSubmitResponse::GetExecutionId() const
{
	return m_ExecutionId.value();
}

bool GraphExecutionSubmitResponse::HasExecutionId() const
{
	return m_ExecutionId.has_value();
}
void GraphExecutionSubmitResponse::SetExecutionId(const utility::string_t& Value)
{
	m_ExecutionId = Value;
}
utility::string_t GraphExecutionSubmitResponse::GetStatus() const
{
	return m_Status.value();
}

bool GraphExecutionSubmitResponse::HasStatus() const
{
	return m_Status.has_value();
}
void GraphExecutionSubmitResponse::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}

GroupRoleDto::GroupRoleDto()
{
}
GroupRoleDto::~GroupRoleDto()
{
}

utility::string_t GroupRoleDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupRoles.has_value())
	{
		rapidjson::Value GroupRolesValue(TypeToJsonValue(m_GroupRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupRoles", GroupRolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void GroupRoleDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GroupRoleDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member userId is null!");
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member groupId is null!");
		}
	}

	if (JsonDoc.HasMember("groupRoles"))
	{
		const rapidjson::Value& GroupRolesValue = JsonDoc["groupRoles"];

		if (GroupRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupRolesValue, m_GroupRoles);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member groupRoles is null!");
		}
	}
}


utility::string_t GroupRoleDto::GetUserId() const
{
	return m_UserId.value();
}

bool GroupRoleDto::HasUserId() const
{
	return m_UserId.has_value();
}
void GroupRoleDto::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
utility::string_t GroupRoleDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool GroupRoleDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void GroupRoleDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}
const std::vector<utility::string_t>& GroupRoleDto::GetGroupRoles() const
{
	return m_GroupRoles.value();
}

bool GroupRoleDto::HasGroupRoles() const
{
	return m_GroupRoles.has_value();
}
void GroupRoleDto::SetGroupRoles(const std::vector<utility::string_t>& Value)
{
	m_GroupRoles = Value;
}

HarmonizeAloRequest::HarmonizeAloRequest()
{
}
HarmonizeAloRequest::~HarmonizeAloRequest()
{
}

utility::string_t HarmonizeAloRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Nonce.has_value())
	{
		rapidjson::Value NonceValue(TypeToJsonValue(m_Nonce, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nonce", NonceValue, JsonDoc.GetAllocator());
	}

	if (m_MetaUserId.has_value())
	{
		rapidjson::Value MetaUserIdValue(TypeToJsonValue(m_MetaUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metaUserId", MetaUserIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void HarmonizeAloRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "HarmonizeAloRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("nonce"))
	{
		const rapidjson::Value& NonceValue = JsonDoc["nonce"];

		if (NonceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NonceValue, m_Nonce);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member nonce is null!");
		}
	}

	if (JsonDoc.HasMember("metaUserId"))
	{
		const rapidjson::Value& MetaUserIdValue = JsonDoc["metaUserId"];

		if (MetaUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetaUserIdValue, m_MetaUserId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member metaUserId is null!");
		}
	}
}


utility::string_t HarmonizeAloRequest::GetNonce() const
{
	return m_Nonce.value();
}

bool HarmonizeAloRequest::HasNonce() const
{
	return m_Nonce.has_value();
}
void HarmonizeAloRequest::SetNonce(const utility::string_t& Value)
{
	m_Nonce = Value;
}
utility::string_t HarmonizeAloRequest::GetMetaUserId() const
{
	return m_MetaUserId.value();
}

bool HarmonizeAloRequest::HasMetaUserId() const
{
	return m_MetaUserId.has_value();
}
void HarmonizeAloRequest::SetMetaUserId(const utility::string_t& Value)
{
	m_MetaUserId = Value;
}

HarmonizeAloResponse::HarmonizeAloResponse()
{
}
HarmonizeAloResponse::~HarmonizeAloResponse()
{
}

utility::string_t HarmonizeAloResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Auth.has_value())
	{
		rapidjson::Value AuthValue(TypeToJsonValue(m_Auth, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("auth", AuthValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void HarmonizeAloResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "HarmonizeAloResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("auth"))
	{
		const rapidjson::Value& AuthValue = JsonDoc["auth"];

		if (AuthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AuthValue, m_Auth);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member auth is null!");
		}
	}
}


std::shared_ptr<AuthDto> HarmonizeAloResponse::GetAuth() const
{
	return m_Auth.value();
}

bool HarmonizeAloResponse::HasAuth() const
{
	return m_Auth.has_value();
}
void HarmonizeAloResponse::SetAuth(const std::shared_ptr<AuthDto>& Value)
{
	m_Auth = Value;
}

Icon::Icon()
{
}
Icon::~Icon()
{
}

utility::string_t Icon::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Href.has_value())
	{
		rapidjson::Value HrefValue(TypeToJsonValue(m_Href, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("href", HrefValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Icon::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Icon::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("href"))
	{
		const rapidjson::Value& HrefValue = JsonDoc["href"];

		if (HrefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HrefValue, m_Href);
		}
	}
}


utility::string_t Icon::GetHref() const
{
	return m_Href.value();
}

bool Icon::HasHref() const
{
	return m_Href.has_value();
}
void Icon::SetHref(const utility::string_t& Value)
{
	m_Href = Value;
}

IconStyle::IconStyle()
{
}
IconStyle::~IconStyle()
{
}

utility::string_t IconStyle::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Color.has_value())
	{
		rapidjson::Value ColorValue(TypeToJsonValue(m_Color, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("color", ColorValue, JsonDoc.GetAllocator());
	}

	if (m_ColorMode.has_value())
	{
		rapidjson::Value ColorModeValue(TypeToJsonValue(m_ColorMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("colorMode", ColorModeValue, JsonDoc.GetAllocator());
	}

	if (m_Scale.has_value())
	{
		rapidjson::Value ScaleValue(TypeToJsonValue(m_Scale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scale", ScaleValue, JsonDoc.GetAllocator());
	}

	if (m_Icon.has_value())
	{
		rapidjson::Value IconValue(TypeToJsonValue(m_Icon, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("icon", IconValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void IconStyle::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "IconStyle::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("color"))
	{
		const rapidjson::Value& ColorValue = JsonDoc["color"];

		if (ColorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColorValue, m_Color);
		}
	}

	if (JsonDoc.HasMember("colorMode"))
	{
		const rapidjson::Value& ColorModeValue = JsonDoc["colorMode"];

		if (ColorModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColorModeValue, m_ColorMode);
		}
	}

	if (JsonDoc.HasMember("scale"))
	{
		const rapidjson::Value& ScaleValue = JsonDoc["scale"];

		if (ScaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScaleValue, m_Scale);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
		}
	}

	if (JsonDoc.HasMember("icon"))
	{
		const rapidjson::Value& IconValue = JsonDoc["icon"];

		if (IconValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IconValue, m_Icon);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member icon is null!");
		}
	}
}


utility::string_t IconStyle::GetId() const
{
	return m_Id.value();
}

bool IconStyle::HasId() const
{
	return m_Id.has_value();
}
void IconStyle::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t IconStyle::GetColor() const
{
	return m_Color.value();
}

bool IconStyle::HasColor() const
{
	return m_Color.has_value();
}
void IconStyle::SetColor(const utility::string_t& Value)
{
	m_Color = Value;
}
utility::string_t IconStyle::GetColorMode() const
{
	return m_ColorMode.value();
}

bool IconStyle::HasColorMode() const
{
	return m_ColorMode.has_value();
}
void IconStyle::SetColorMode(const utility::string_t& Value)
{
	m_ColorMode = Value;
}
float IconStyle::GetScale() const
{
	return m_Scale.value();
}

bool IconStyle::HasScale() const
{
	return m_Scale.has_value();
}
void IconStyle::SetScale(float Value)
{
	m_Scale = Value;
}
std::shared_ptr<Icon> IconStyle::GetIcon() const
{
	return m_Icon.value();
}

bool IconStyle::HasIcon() const
{
	return m_Icon.has_value();
}
void IconStyle::SetIcon(const std::shared_ptr<Icon>& Value)
{
	m_Icon = Value;
}

ImportSpaceOptions::ImportSpaceOptions()
{
}
ImportSpaceOptions::~ImportSpaceOptions()
{
}

utility::string_t ImportSpaceOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescingId.has_value())
	{
		rapidjson::Value CoalescingIdValue(TypeToJsonValue(m_CoalescingId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescingId", CoalescingIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupOwnerId.has_value())
	{
		rapidjson::Value NewGroupOwnerIdValue(TypeToJsonValue(m_NewGroupOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupOwnerId", NewGroupOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_MemberGroupIds.has_value())
	{
		rapidjson::Value MemberGroupIdsValue(TypeToJsonValue(m_MemberGroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("memberGroupIds", MemberGroupIdsValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserRoles.has_value())
	{
		rapidjson::Value RequestUserRolesValue(TypeToJsonValue(m_RequestUserRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserRoles", RequestUserRolesValue, JsonDoc.GetAllocator());
	}

	if (m_NewUniqueName.has_value())
	{
		rapidjson::Value NewUniqueNameValue(TypeToJsonValue(m_NewUniqueName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newUniqueName", NewUniqueNameValue, JsonDoc.GetAllocator());
	}

	if (m_Options.has_value())
	{
		rapidjson::Value OptionsValue(TypeToJsonValue(m_Options, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("options", OptionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ImportSpaceOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ImportSpaceOptions::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("coalescingId"))
	{
		const rapidjson::Value& CoalescingIdValue = JsonDoc["coalescingId"];

		if (CoalescingIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescingIdValue, m_CoalescingId);
		}
	}

	if (JsonDoc.HasMember("newGroupOwnerId"))
	{
		const rapidjson::Value& NewGroupOwnerIdValue = JsonDoc["newGroupOwnerId"];

		if (NewGroupOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupOwnerIdValue, m_NewGroupOwnerId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newGroupOwnerId is null!");
		}
	}

	if (JsonDoc.HasMember("memberGroupIds"))
	{
		const rapidjson::Value& MemberGroupIdsValue = JsonDoc["memberGroupIds"];

		if (MemberGroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MemberGroupIdsValue, m_MemberGroupIds);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("requestUserRoles"))
	{
		const rapidjson::Value& RequestUserRolesValue = JsonDoc["requestUserRoles"];

		if (RequestUserRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserRolesValue, m_RequestUserRoles);
		}
	}

	if (JsonDoc.HasMember("newUniqueName"))
	{
		const rapidjson::Value& NewUniqueNameValue = JsonDoc["newUniqueName"];

		if (NewUniqueNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewUniqueNameValue, m_NewUniqueName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member newUniqueName is null!");
		}
	}

	if (JsonDoc.HasMember("options"))
	{
		const rapidjson::Value& OptionsValue = JsonDoc["options"];

		if (OptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionsValue, m_Options);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member options is null!");
		}
	}
}


utility::string_t ImportSpaceOptions::GetTenantName() const
{
	return m_TenantName.value();
}

bool ImportSpaceOptions::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t ImportSpaceOptions::GetExportId() const
{
	return m_ExportId.value();
}

bool ImportSpaceOptions::HasExportId() const
{
	return m_ExportId.has_value();
}
void ImportSpaceOptions::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
utility::string_t ImportSpaceOptions::GetCoalescingId() const
{
	return m_CoalescingId.value();
}

bool ImportSpaceOptions::HasCoalescingId() const
{
	return m_CoalescingId.has_value();
}
utility::string_t ImportSpaceOptions::GetNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.value();
}

bool ImportSpaceOptions::HasNewGroupOwnerId() const
{
	return m_NewGroupOwnerId.has_value();
}
void ImportSpaceOptions::SetNewGroupOwnerId(const utility::string_t& Value)
{
	m_NewGroupOwnerId = Value;
}
const std::vector<utility::string_t>& ImportSpaceOptions::GetMemberGroupIds() const
{
	return m_MemberGroupIds.value();
}

bool ImportSpaceOptions::HasMemberGroupIds() const
{
	return m_MemberGroupIds.has_value();
}
void ImportSpaceOptions::SetMemberGroupIds(const std::vector<utility::string_t>& Value)
{
	m_MemberGroupIds = Value;
}
utility::string_t ImportSpaceOptions::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool ImportSpaceOptions::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
const std::vector<utility::string_t>& ImportSpaceOptions::GetRequestUserRoles() const
{
	return m_RequestUserRoles.value();
}

bool ImportSpaceOptions::HasRequestUserRoles() const
{
	return m_RequestUserRoles.has_value();
}
utility::string_t ImportSpaceOptions::GetNewUniqueName() const
{
	return m_NewUniqueName.value();
}

bool ImportSpaceOptions::HasNewUniqueName() const
{
	return m_NewUniqueName.has_value();
}
void ImportSpaceOptions::SetNewUniqueName(const utility::string_t& Value)
{
	m_NewUniqueName = Value;
}
std::shared_ptr<SpaceOptions> ImportSpaceOptions::GetOptions() const
{
	return m_Options.value();
}

bool ImportSpaceOptions::HasOptions() const
{
	return m_Options.has_value();
}
void ImportSpaceOptions::SetOptions(const std::shared_ptr<SpaceOptions>& Value)
{
	m_Options = Value;
}

Kml::Kml()
{
}
Kml::~Kml()
{
}

utility::string_t Kml::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Document.has_value())
	{
		rapidjson::Value DocumentValue(TypeToJsonValue(m_Document, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("document", DocumentValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Kml::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Kml::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("document"))
	{
		const rapidjson::Value& DocumentValue = JsonDoc["document"];

		if (DocumentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DocumentValue, m_Document);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member document is null!");
		}
	}
}


std::shared_ptr<PositionKml> Kml::GetDocument() const
{
	return m_Document.value();
}

bool Kml::HasDocument() const
{
	return m_Document.has_value();
}
void Kml::SetDocument(const std::shared_ptr<PositionKml>& Value)
{
	m_Document = Value;
}

LineString::LineString()
{
}
LineString::~LineString()
{
}

utility::string_t LineString::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Extrude.has_value())
	{
		rapidjson::Value ExtrudeValue(TypeToJsonValue(m_Extrude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("extrude", ExtrudeValue, JsonDoc.GetAllocator());
	}

	if (m_Tessellate.has_value())
	{
		rapidjson::Value TessellateValue(TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tessellate", TessellateValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Coordinates.has_value())
	{
		rapidjson::Value CoordinatesValue(TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coordinates", CoordinatesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LineString::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LineString::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("extrude"))
	{
		const rapidjson::Value& ExtrudeValue = JsonDoc["extrude"];

		if (ExtrudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtrudeValue, m_Extrude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member extrude is null!");
		}
	}

	if (JsonDoc.HasMember("tessellate"))
	{
		const rapidjson::Value& TessellateValue = JsonDoc["tessellate"];

		if (TessellateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TessellateValue, m_Tessellate);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
		}
	}

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("coordinates"))
	{
		const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

		if (CoordinatesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoordinatesValue, m_Coordinates);
		}
	}
}


bool LineString::GetExtrude() const
{
	return m_Extrude.value();
}

bool LineString::HasExtrude() const
{
	return m_Extrude.has_value();
}
void LineString::SetExtrude(const bool& Value)
{
	m_Extrude = Value;
}
bool LineString::GetTessellate() const
{
	return m_Tessellate.value();
}

bool LineString::HasTessellate() const
{
	return m_Tessellate.has_value();
}
void LineString::SetTessellate(const bool& Value)
{
	m_Tessellate = Value;
}
std::shared_ptr<AltitudeMode> LineString::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool LineString::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void LineString::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
utility::string_t LineString::GetCoordinates() const
{
	return m_Coordinates.value();
}

bool LineString::HasCoordinates() const
{
	return m_Coordinates.has_value();
}
void LineString::SetCoordinates(const utility::string_t& Value)
{
	m_Coordinates = Value;
}

LocalizedString::LocalizedString()
{
}
LocalizedString::~LocalizedString()
{
}

utility::string_t LocalizedString::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_LanguageCode.has_value())
	{
		rapidjson::Value LanguageCodeValue(TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("languageCode", LanguageCodeValue, JsonDoc.GetAllocator());
	}

	if (m_Value.has_value())
	{
		rapidjson::Value ValueValue(TypeToJsonValue(m_Value, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("value", ValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LocalizedString::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LocalizedString::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode);
		}
	}

	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value);
		}
	}
}


utility::string_t LocalizedString::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool LocalizedString::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void LocalizedString::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t LocalizedString::GetValue() const
{
	return m_Value.value();
}

bool LocalizedString::HasValue() const
{
	return m_Value.has_value();
}
void LocalizedString::SetValue(const utility::string_t& Value)
{
	m_Value = Value;
}

LogEntryDto::LogEntryDto()
{
}
LogEntryDto::~LogEntryDto()
{
}

utility::string_t LogEntryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Timestamp.has_value())
	{
		rapidjson::Value TimestampValue(TypeToJsonValue(m_Timestamp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("timestamp", TimestampValue, JsonDoc.GetAllocator());
	}

	if (m_Level.has_value())
	{
		rapidjson::Value LevelValue(TypeToJsonValue(m_Level, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("level", LevelValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_NodeId.has_value())
	{
		rapidjson::Value NodeIdValue(TypeToJsonValue(m_NodeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeId", NodeIdValue, JsonDoc.GetAllocator());
	}

	if (m_NodeType.has_value())
	{
		rapidjson::Value NodeTypeValue(TypeToJsonValue(m_NodeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeType", NodeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Logger.has_value())
	{
		rapidjson::Value LoggerValue(TypeToJsonValue(m_Logger, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("logger", LoggerValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LogEntryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LogEntryDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("timestamp"))
	{
		const rapidjson::Value& TimestampValue = JsonDoc["timestamp"];

		if (TimestampValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TimestampValue, m_Timestamp);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member timestamp is null!");
		}
	}

	if (JsonDoc.HasMember("level"))
	{
		const rapidjson::Value& LevelValue = JsonDoc["level"];

		if (LevelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LevelValue, m_Level);
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message);
		}
	}

	if (JsonDoc.HasMember("nodeId"))
	{
		const rapidjson::Value& NodeIdValue = JsonDoc["nodeId"];

		if (NodeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeIdValue, m_NodeId);
		}
	}

	if (JsonDoc.HasMember("nodeType"))
	{
		const rapidjson::Value& NodeTypeValue = JsonDoc["nodeType"];

		if (NodeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeTypeValue, m_NodeType);
		}
	}

	if (JsonDoc.HasMember("logger"))
	{
		const rapidjson::Value& LoggerValue = JsonDoc["logger"];

		if (LoggerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LoggerValue, m_Logger);
		}
	}
}


utility::string_t LogEntryDto::GetTimestamp() const
{
	return m_Timestamp.value();
}

bool LogEntryDto::HasTimestamp() const
{
	return m_Timestamp.has_value();
}
void LogEntryDto::SetTimestamp(const utility::string_t& Value)
{
	m_Timestamp = Value;
}
utility::string_t LogEntryDto::GetLevel() const
{
	return m_Level.value();
}

bool LogEntryDto::HasLevel() const
{
	return m_Level.has_value();
}
void LogEntryDto::SetLevel(const utility::string_t& Value)
{
	m_Level = Value;
}
utility::string_t LogEntryDto::GetMessage() const
{
	return m_Message.value();
}

bool LogEntryDto::HasMessage() const
{
	return m_Message.has_value();
}
void LogEntryDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
utility::string_t LogEntryDto::GetNodeId() const
{
	return m_NodeId.value();
}

bool LogEntryDto::HasNodeId() const
{
	return m_NodeId.has_value();
}
void LogEntryDto::SetNodeId(const utility::string_t& Value)
{
	m_NodeId = Value;
}
utility::string_t LogEntryDto::GetNodeType() const
{
	return m_NodeType.value();
}

bool LogEntryDto::HasNodeType() const
{
	return m_NodeType.has_value();
}
void LogEntryDto::SetNodeType(const utility::string_t& Value)
{
	m_NodeType = Value;
}
utility::string_t LogEntryDto::GetLogger() const
{
	return m_Logger.value();
}

bool LogEntryDto::HasLogger() const
{
	return m_Logger.has_value();
}
void LogEntryDto::SetLogger(const utility::string_t& Value)
{
	m_Logger = Value;
}

LookAt::LookAt()
{
}
LookAt::~LookAt()
{
}

utility::string_t LookAt::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Longitude.has_value())
	{
		rapidjson::Value LongitudeValue(TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("longitude", LongitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Latitude.has_value())
	{
		rapidjson::Value LatitudeValue(TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("latitude", LatitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Altitude.has_value())
	{
		rapidjson::Value AltitudeValue(TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitude", AltitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Range.has_value())
	{
		rapidjson::Value RangeValue(TypeToJsonValue(m_Range, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("range", RangeValue, JsonDoc.GetAllocator());
	}

	if (m_Tilt.has_value())
	{
		rapidjson::Value TiltValue(TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tilt", TiltValue, JsonDoc.GetAllocator());
	}

	if (m_Heading.has_value())
	{
		rapidjson::Value HeadingValue(TypeToJsonValue(m_Heading, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("heading", HeadingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LookAt::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LookAt::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("longitude"))
	{
		const rapidjson::Value& LongitudeValue = JsonDoc["longitude"];

		if (LongitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LongitudeValue, m_Longitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
		}
	}

	if (JsonDoc.HasMember("latitude"))
	{
		const rapidjson::Value& LatitudeValue = JsonDoc["latitude"];

		if (LatitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LatitudeValue, m_Latitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
		}
	}

	if (JsonDoc.HasMember("altitude"))
	{
		const rapidjson::Value& AltitudeValue = JsonDoc["altitude"];

		if (AltitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeValue, m_Altitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
		}
	}

	if (JsonDoc.HasMember("range"))
	{
		const rapidjson::Value& RangeValue = JsonDoc["range"];

		if (RangeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RangeValue, m_Range);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member range is null!");
		}
	}

	if (JsonDoc.HasMember("tilt"))
	{
		const rapidjson::Value& TiltValue = JsonDoc["tilt"];

		if (TiltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TiltValue, m_Tilt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
		}
	}

	if (JsonDoc.HasMember("heading"))
	{
		const rapidjson::Value& HeadingValue = JsonDoc["heading"];

		if (HeadingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeadingValue, m_Heading);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
		}
	}
}


double LookAt::GetLongitude() const
{
	return m_Longitude.value();
}

bool LookAt::HasLongitude() const
{
	return m_Longitude.has_value();
}
void LookAt::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double LookAt::GetLatitude() const
{
	return m_Latitude.value();
}

bool LookAt::HasLatitude() const
{
	return m_Latitude.has_value();
}
void LookAt::SetLatitude(double Value)
{
	m_Latitude = Value;
}
int32_t LookAt::GetAltitude() const
{
	return m_Altitude.value();
}

bool LookAt::HasAltitude() const
{
	return m_Altitude.has_value();
}
void LookAt::SetAltitude(int32_t Value)
{
	m_Altitude = Value;
}
double LookAt::GetRange() const
{
	return m_Range.value();
}

bool LookAt::HasRange() const
{
	return m_Range.has_value();
}
void LookAt::SetRange(double Value)
{
	m_Range = Value;
}
double LookAt::GetTilt() const
{
	return m_Tilt.value();
}

bool LookAt::HasTilt() const
{
	return m_Tilt.has_value();
}
void LookAt::SetTilt(double Value)
{
	m_Tilt = Value;
}
double LookAt::GetHeading() const
{
	return m_Heading.value();
}

bool LookAt::HasHeading() const
{
	return m_Heading.has_value();
}
void LookAt::SetHeading(double Value)
{
	m_Heading = Value;
}

Model::Model()
{
}
Model::~Model()
{
}

utility::string_t Model::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}

	if (m_Orientation.has_value())
	{
		rapidjson::Value OrientationValue(TypeToJsonValue(m_Orientation, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("orientation", OrientationValue, JsonDoc.GetAllocator());
	}

	if (m_Scale.has_value())
	{
		rapidjson::Value ScaleValue(TypeToJsonValue(m_Scale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scale", ScaleValue, JsonDoc.GetAllocator());
	}

	if (m_Link.has_value())
	{
		rapidjson::Value LinkValue(TypeToJsonValue(m_Link, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("link", LinkValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Model::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Model::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member location is null!");
		}
	}

	if (JsonDoc.HasMember("orientation"))
	{
		const rapidjson::Value& OrientationValue = JsonDoc["orientation"];

		if (OrientationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrientationValue, m_Orientation);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member orientation is null!");
		}
	}

	if (JsonDoc.HasMember("scale"))
	{
		const rapidjson::Value& ScaleValue = JsonDoc["scale"];

		if (ScaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScaleValue, m_Scale);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scale is null!");
		}
	}

	if (JsonDoc.HasMember("link"))
	{
		const rapidjson::Value& LinkValue = JsonDoc["link"];

		if (LinkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinkValue, m_Link);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member link is null!");
		}
	}
}


utility::string_t Model::GetId() const
{
	return m_Id.value();
}

bool Model::HasId() const
{
	return m_Id.has_value();
}
void Model::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
std::shared_ptr<AltitudeMode> Model::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool Model::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void Model::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
std::shared_ptr<ModelLocation> Model::GetLocation() const
{
	return m_Location.value();
}

bool Model::HasLocation() const
{
	return m_Location.has_value();
}
void Model::SetLocation(const std::shared_ptr<ModelLocation>& Value)
{
	m_Location = Value;
}
std::shared_ptr<ModelOrientation> Model::GetOrientation() const
{
	return m_Orientation.value();
}

bool Model::HasOrientation() const
{
	return m_Orientation.has_value();
}
void Model::SetOrientation(const std::shared_ptr<ModelOrientation>& Value)
{
	m_Orientation = Value;
}
std::shared_ptr<ModelScale> Model::GetScale() const
{
	return m_Scale.value();
}

bool Model::HasScale() const
{
	return m_Scale.has_value();
}
void Model::SetScale(const std::shared_ptr<ModelScale>& Value)
{
	m_Scale = Value;
}
std::shared_ptr<ModelLink> Model::GetLink() const
{
	return m_Link.value();
}

bool Model::HasLink() const
{
	return m_Link.has_value();
}
void Model::SetLink(const std::shared_ptr<ModelLink>& Value)
{
	m_Link = Value;
}

ModelLink::ModelLink()
{
}
ModelLink::~ModelLink()
{
}

utility::string_t ModelLink::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Href.has_value())
	{
		rapidjson::Value HrefValue(TypeToJsonValue(m_Href, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("href", HrefValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelLink::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ModelLink::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("href"))
	{
		const rapidjson::Value& HrefValue = JsonDoc["href"];

		if (HrefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HrefValue, m_Href);
		}
	}
}


utility::string_t ModelLink::GetHref() const
{
	return m_Href.value();
}

bool ModelLink::HasHref() const
{
	return m_Href.has_value();
}
void ModelLink::SetHref(const utility::string_t& Value)
{
	m_Href = Value;
}

ModelLocation::ModelLocation()
{
}
ModelLocation::~ModelLocation()
{
}

utility::string_t ModelLocation::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Longitude.has_value())
	{
		rapidjson::Value LongitudeValue(TypeToJsonValue(m_Longitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("longitude", LongitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Latitude.has_value())
	{
		rapidjson::Value LatitudeValue(TypeToJsonValue(m_Latitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("latitude", LatitudeValue, JsonDoc.GetAllocator());
	}

	if (m_Altitude.has_value())
	{
		rapidjson::Value AltitudeValue(TypeToJsonValue(m_Altitude, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitude", AltitudeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelLocation::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ModelLocation::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("longitude"))
	{
		const rapidjson::Value& LongitudeValue = JsonDoc["longitude"];

		if (LongitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LongitudeValue, m_Longitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member longitude is null!");
		}
	}

	if (JsonDoc.HasMember("latitude"))
	{
		const rapidjson::Value& LatitudeValue = JsonDoc["latitude"];

		if (LatitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LatitudeValue, m_Latitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member latitude is null!");
		}
	}

	if (JsonDoc.HasMember("altitude"))
	{
		const rapidjson::Value& AltitudeValue = JsonDoc["altitude"];

		if (AltitudeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeValue, m_Altitude);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitude is null!");
		}
	}
}


double ModelLocation::GetLongitude() const
{
	return m_Longitude.value();
}

bool ModelLocation::HasLongitude() const
{
	return m_Longitude.has_value();
}
void ModelLocation::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double ModelLocation::GetLatitude() const
{
	return m_Latitude.value();
}

bool ModelLocation::HasLatitude() const
{
	return m_Latitude.has_value();
}
void ModelLocation::SetLatitude(double Value)
{
	m_Latitude = Value;
}
int32_t ModelLocation::GetAltitude() const
{
	return m_Altitude.value();
}

bool ModelLocation::HasAltitude() const
{
	return m_Altitude.has_value();
}
void ModelLocation::SetAltitude(int32_t Value)
{
	m_Altitude = Value;
}

ModelOrientation::ModelOrientation()
{
}
ModelOrientation::~ModelOrientation()
{
}

utility::string_t ModelOrientation::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Heading.has_value())
	{
		rapidjson::Value HeadingValue(TypeToJsonValue(m_Heading, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("heading", HeadingValue, JsonDoc.GetAllocator());
	}

	if (m_Tilt.has_value())
	{
		rapidjson::Value TiltValue(TypeToJsonValue(m_Tilt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tilt", TiltValue, JsonDoc.GetAllocator());
	}

	if (m_Roll.has_value())
	{
		rapidjson::Value RollValue(TypeToJsonValue(m_Roll, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roll", RollValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelOrientation::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ModelOrientation::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("heading"))
	{
		const rapidjson::Value& HeadingValue = JsonDoc["heading"];

		if (HeadingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeadingValue, m_Heading);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member heading is null!");
		}
	}

	if (JsonDoc.HasMember("tilt"))
	{
		const rapidjson::Value& TiltValue = JsonDoc["tilt"];

		if (TiltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TiltValue, m_Tilt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tilt is null!");
		}
	}

	if (JsonDoc.HasMember("roll"))
	{
		const rapidjson::Value& RollValue = JsonDoc["roll"];

		if (RollValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RollValue, m_Roll);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member roll is null!");
		}
	}
}


float ModelOrientation::GetHeading() const
{
	return m_Heading.value();
}

bool ModelOrientation::HasHeading() const
{
	return m_Heading.has_value();
}
void ModelOrientation::SetHeading(float Value)
{
	m_Heading = Value;
}
float ModelOrientation::GetTilt() const
{
	return m_Tilt.value();
}

bool ModelOrientation::HasTilt() const
{
	return m_Tilt.has_value();
}
void ModelOrientation::SetTilt(float Value)
{
	m_Tilt = Value;
}
int32_t ModelOrientation::GetRoll() const
{
	return m_Roll.value();
}

bool ModelOrientation::HasRoll() const
{
	return m_Roll.has_value();
}
void ModelOrientation::SetRoll(int32_t Value)
{
	m_Roll = Value;
}

ModelScale::ModelScale()
{
}
ModelScale::~ModelScale()
{
}

utility::string_t ModelScale::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_X.has_value())
	{
		rapidjson::Value XValue(TypeToJsonValue(m_X, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("x", XValue, JsonDoc.GetAllocator());
	}

	if (m_Y.has_value())
	{
		rapidjson::Value YValue(TypeToJsonValue(m_Y, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("y", YValue, JsonDoc.GetAllocator());
	}

	if (m_Z.has_value())
	{
		rapidjson::Value ZValue(TypeToJsonValue(m_Z, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("z", ZValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ModelScale::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ModelScale::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("x"))
	{
		const rapidjson::Value& XValue = JsonDoc["x"];

		if (XValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(XValue, m_X);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member x is null!");
		}
	}

	if (JsonDoc.HasMember("y"))
	{
		const rapidjson::Value& YValue = JsonDoc["y"];

		if (YValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(YValue, m_Y);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member y is null!");
		}
	}

	if (JsonDoc.HasMember("z"))
	{
		const rapidjson::Value& ZValue = JsonDoc["z"];

		if (ZValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZValue, m_Z);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member z is null!");
		}
	}
}


int32_t ModelScale::GetX() const
{
	return m_X.value();
}

bool ModelScale::HasX() const
{
	return m_X.has_value();
}
void ModelScale::SetX(int32_t Value)
{
	m_X = Value;
}
int32_t ModelScale::GetY() const
{
	return m_Y.value();
}

bool ModelScale::HasY() const
{
	return m_Y.has_value();
}
void ModelScale::SetY(int32_t Value)
{
	m_Y = Value;
}
int32_t ModelScale::GetZ() const
{
	return m_Z.value();
}

bool ModelScale::HasZ() const
{
	return m_Z.has_value();
}
void ModelScale::SetZ(int32_t Value)
{
	m_Z = Value;
}

NamedFunction::NamedFunction()
{
}
NamedFunction::~NamedFunction()
{
}

utility::string_t NamedFunction::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FunctionName.has_value())
	{
		rapidjson::Value FunctionNameValue(TypeToJsonValue(m_FunctionName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("functionName", FunctionNameValue, JsonDoc.GetAllocator());
	}

	if (m_DeprecationDatetime.has_value())
	{
		rapidjson::Value DeprecationDatetimeValue(TypeToJsonValue(m_DeprecationDatetime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deprecationDatetime", DeprecationDatetimeValue, JsonDoc.GetAllocator());
	}

	if (m_EndOfLifeDatetime.has_value())
	{
		rapidjson::Value EndOfLifeDatetimeValue(TypeToJsonValue(m_EndOfLifeDatetime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("endOfLifeDatetime", EndOfLifeDatetimeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void NamedFunction::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "NamedFunction::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("functionName"))
	{
		const rapidjson::Value& FunctionNameValue = JsonDoc["functionName"];

		if (FunctionNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FunctionNameValue, m_FunctionName);
		}
	}

	if (JsonDoc.HasMember("deprecationDatetime"))
	{
		const rapidjson::Value& DeprecationDatetimeValue = JsonDoc["deprecationDatetime"];

		if (DeprecationDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeprecationDatetimeValue, m_DeprecationDatetime);
		}
	}

	if (JsonDoc.HasMember("endOfLifeDatetime"))
	{
		const rapidjson::Value& EndOfLifeDatetimeValue = JsonDoc["endOfLifeDatetime"];

		if (EndOfLifeDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EndOfLifeDatetimeValue, m_EndOfLifeDatetime);
		}
	}
}


utility::string_t NamedFunction::GetFunctionName() const
{
	return m_FunctionName.value();
}

bool NamedFunction::HasFunctionName() const
{
	return m_FunctionName.has_value();
}
void NamedFunction::SetFunctionName(const utility::string_t& Value)
{
	m_FunctionName = Value;
}
utility::string_t NamedFunction::GetDeprecationDatetime() const
{
	return m_DeprecationDatetime.value();
}

bool NamedFunction::HasDeprecationDatetime() const
{
	return m_DeprecationDatetime.has_value();
}
void NamedFunction::SetDeprecationDatetime(const utility::string_t& Value)
{
	m_DeprecationDatetime = Value;
}
utility::string_t NamedFunction::GetEndOfLifeDatetime() const
{
	return m_EndOfLifeDatetime.value();
}

bool NamedFunction::HasEndOfLifeDatetime() const
{
	return m_EndOfLifeDatetime.has_value();
}
void NamedFunction::SetEndOfLifeDatetime(const utility::string_t& Value)
{
	m_EndOfLifeDatetime = Value;
}

NodeSummaryDto::NodeSummaryDto()
{
}
NodeSummaryDto::~NodeSummaryDto()
{
}

utility::string_t NodeSummaryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Nid.has_value())
	{
		rapidjson::Value NidValue(TypeToJsonValue(m_Nid, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nid", NidValue, JsonDoc.GetAllocator());
	}

	if (m_Nt.has_value())
	{
		rapidjson::Value NtValue(TypeToJsonValue(m_Nt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nt", NtValue, JsonDoc.GetAllocator());
	}

	if (m_S.has_value())
	{
		rapidjson::Value SValue(TypeToJsonValue(m_S, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("s", SValue, JsonDoc.GetAllocator());
	}

	if (m_Sa.has_value())
	{
		rapidjson::Value SaValue(TypeToJsonValue(m_Sa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sa", SaValue, JsonDoc.GetAllocator());
	}

	if (m_Coa.has_value())
	{
		rapidjson::Value CoaValue(TypeToJsonValue(m_Coa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coa", CoaValue, JsonDoc.GetAllocator());
	}

	if (m_Err.has_value())
	{
		rapidjson::Value ErrValue(TypeToJsonValue(m_Err, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("err", ErrValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void NodeSummaryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "NodeSummaryDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("nid"))
	{
		const rapidjson::Value& NidValue = JsonDoc["nid"];

		if (NidValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NidValue, m_Nid);
		}
	}

	if (JsonDoc.HasMember("nt"))
	{
		const rapidjson::Value& NtValue = JsonDoc["nt"];

		if (NtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NtValue, m_Nt);
		}
	}

	if (JsonDoc.HasMember("s"))
	{
		const rapidjson::Value& SValue = JsonDoc["s"];

		if (SValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SValue, m_S);
		}
	}

	if (JsonDoc.HasMember("sa"))
	{
		const rapidjson::Value& SaValue = JsonDoc["sa"];

		if (SaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SaValue, m_Sa);
		}
	}

	if (JsonDoc.HasMember("coa"))
	{
		const rapidjson::Value& CoaValue = JsonDoc["coa"];

		if (CoaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoaValue, m_Coa);
		}
	}

	if (JsonDoc.HasMember("err"))
	{
		const rapidjson::Value& ErrValue = JsonDoc["err"];

		if (ErrValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrValue, m_Err);
		}
	}
}


utility::string_t NodeSummaryDto::GetNid() const
{
	return m_Nid.value();
}

bool NodeSummaryDto::HasNid() const
{
	return m_Nid.has_value();
}
void NodeSummaryDto::SetNid(const utility::string_t& Value)
{
	m_Nid = Value;
}
utility::string_t NodeSummaryDto::GetNt() const
{
	return m_Nt.value();
}

bool NodeSummaryDto::HasNt() const
{
	return m_Nt.has_value();
}
void NodeSummaryDto::SetNt(const utility::string_t& Value)
{
	m_Nt = Value;
}
utility::string_t NodeSummaryDto::GetS() const
{
	return m_S.value();
}

bool NodeSummaryDto::HasS() const
{
	return m_S.has_value();
}
void NodeSummaryDto::SetS(const utility::string_t& Value)
{
	m_S = Value;
}
utility::string_t NodeSummaryDto::GetSa() const
{
	return m_Sa.value();
}

bool NodeSummaryDto::HasSa() const
{
	return m_Sa.has_value();
}
void NodeSummaryDto::SetSa(const utility::string_t& Value)
{
	m_Sa = Value;
}
utility::string_t NodeSummaryDto::GetCoa() const
{
	return m_Coa.value();
}

bool NodeSummaryDto::HasCoa() const
{
	return m_Coa.has_value();
}
void NodeSummaryDto::SetCoa(const utility::string_t& Value)
{
	m_Coa = Value;
}
utility::string_t NodeSummaryDto::GetErr() const
{
	return m_Err.value();
}

bool NodeSummaryDto::HasErr() const
{
	return m_Err.has_value();
}
void NodeSummaryDto::SetErr(const utility::string_t& Value)
{
	m_Err = Value;
}

ObserveResponse::ObserveResponse()
{
}
ObserveResponse::~ObserveResponse()
{
}

utility::string_t ObserveResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExecutionId.has_value())
	{
		rapidjson::Value ExecutionIdValue(TypeToJsonValue(m_ExecutionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("executionId", ExecutionIdValue, JsonDoc.GetAllocator());
	}

	if (m_SessionId.has_value())
	{
		rapidjson::Value SessionIdValue(TypeToJsonValue(m_SessionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sessionId", SessionIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeId.has_value())
	{
		rapidjson::Value ScopeIdValue(TypeToJsonValue(m_ScopeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeId", ScopeIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceType.has_value())
	{
		rapidjson::Value ScopeReferenceTypeValue(TypeToJsonValue(m_ScopeReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceType", ScopeReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceId.has_value())
	{
		rapidjson::Value ScopeReferenceIdValue(TypeToJsonValue(m_ScopeReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceId", ScopeReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObserveResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObserveResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("executionId"))
	{
		const rapidjson::Value& ExecutionIdValue = JsonDoc["executionId"];

		if (ExecutionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExecutionIdValue, m_ExecutionId);
		}
	}

	if (JsonDoc.HasMember("sessionId"))
	{
		const rapidjson::Value& SessionIdValue = JsonDoc["sessionId"];

		if (SessionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SessionIdValue, m_SessionId);
		}
	}

	if (JsonDoc.HasMember("scopeId"))
	{
		const rapidjson::Value& ScopeIdValue = JsonDoc["scopeId"];

		if (ScopeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdValue, m_ScopeId);
		}
	}

	if (JsonDoc.HasMember("scopeReferenceType"))
	{
		const rapidjson::Value& ScopeReferenceTypeValue = JsonDoc["scopeReferenceType"];

		if (ScopeReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceTypeValue, m_ScopeReferenceType);
		}
	}

	if (JsonDoc.HasMember("scopeReferenceId"))
	{
		const rapidjson::Value& ScopeReferenceIdValue = JsonDoc["scopeReferenceId"];

		if (ScopeReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceIdValue, m_ScopeReferenceId);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}
}


utility::string_t ObserveResponse::GetExecutionId() const
{
	return m_ExecutionId.value();
}

bool ObserveResponse::HasExecutionId() const
{
	return m_ExecutionId.has_value();
}
void ObserveResponse::SetExecutionId(const utility::string_t& Value)
{
	m_ExecutionId = Value;
}
utility::string_t ObserveResponse::GetSessionId() const
{
	return m_SessionId.value();
}

bool ObserveResponse::HasSessionId() const
{
	return m_SessionId.has_value();
}
void ObserveResponse::SetSessionId(const utility::string_t& Value)
{
	m_SessionId = Value;
}
utility::string_t ObserveResponse::GetScopeId() const
{
	return m_ScopeId.value();
}

bool ObserveResponse::HasScopeId() const
{
	return m_ScopeId.has_value();
}
void ObserveResponse::SetScopeId(const utility::string_t& Value)
{
	m_ScopeId = Value;
}
utility::string_t ObserveResponse::GetScopeReferenceType() const
{
	return m_ScopeReferenceType.value();
}

bool ObserveResponse::HasScopeReferenceType() const
{
	return m_ScopeReferenceType.has_value();
}
void ObserveResponse::SetScopeReferenceType(const utility::string_t& Value)
{
	m_ScopeReferenceType = Value;
}
utility::string_t ObserveResponse::GetScopeReferenceId() const
{
	return m_ScopeReferenceId.value();
}

bool ObserveResponse::HasScopeReferenceId() const
{
	return m_ScopeReferenceId.has_value();
}
void ObserveResponse::SetScopeReferenceId(const utility::string_t& Value)
{
	m_ScopeReferenceId = Value;
}
utility::string_t ObserveResponse::GetStatus() const
{
	return m_Status.value();
}

bool ObserveResponse::HasStatus() const
{
	return m_Status.has_value();
}
void ObserveResponse::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}

Placemark::Placemark()
{
}
Placemark::~Placemark()
{
}

utility::string_t Placemark::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_StyleUrl.has_value())
	{
		rapidjson::Value StyleUrlValue(TypeToJsonValue(m_StyleUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("styleUrl", StyleUrlValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_LineString.has_value())
	{
		rapidjson::Value LineStringValue(TypeToJsonValue(m_LineString, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lineString", LineStringValue, JsonDoc.GetAllocator());
	}

	if (m_Point.has_value())
	{
		rapidjson::Value PointValue(TypeToJsonValue(m_Point, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("point", PointValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_LookAt.has_value())
	{
		rapidjson::Value LookAtValue(TypeToJsonValue(m_LookAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lookAt", LookAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Placemark::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Placemark::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("styleUrl"))
	{
		const rapidjson::Value& StyleUrlValue = JsonDoc["styleUrl"];

		if (StyleUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleUrlValue, m_StyleUrl);
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("lineString"))
	{
		const rapidjson::Value& LineStringValue = JsonDoc["lineString"];

		if (LineStringValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LineStringValue, m_LineString);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lineString is null!");
		}
	}

	if (JsonDoc.HasMember("point"))
	{
		const rapidjson::Value& PointValue = JsonDoc["point"];

		if (PointValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointValue, m_Point);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member point is null!");
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member model is null!");
		}
	}

	if (JsonDoc.HasMember("lookAt"))
	{
		const rapidjson::Value& LookAtValue = JsonDoc["lookAt"];

		if (LookAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LookAtValue, m_LookAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lookAt is null!");
		}
	}
}


utility::string_t Placemark::GetId() const
{
	return m_Id.value();
}

bool Placemark::HasId() const
{
	return m_Id.has_value();
}
void Placemark::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t Placemark::GetName() const
{
	return m_Name.value();
}

bool Placemark::HasName() const
{
	return m_Name.has_value();
}
void Placemark::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t Placemark::GetStyleUrl() const
{
	return m_StyleUrl.value();
}

bool Placemark::HasStyleUrl() const
{
	return m_StyleUrl.has_value();
}
void Placemark::SetStyleUrl(const utility::string_t& Value)
{
	m_StyleUrl = Value;
}
utility::string_t Placemark::GetDescription() const
{
	return m_Description.value();
}

bool Placemark::HasDescription() const
{
	return m_Description.has_value();
}
void Placemark::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
std::shared_ptr<LineString> Placemark::GetLineString() const
{
	return m_LineString.value();
}

bool Placemark::HasLineString() const
{
	return m_LineString.has_value();
}
void Placemark::SetLineString(const std::shared_ptr<LineString>& Value)
{
	m_LineString = Value;
}
std::shared_ptr<Point> Placemark::GetPoint() const
{
	return m_Point.value();
}

bool Placemark::HasPoint() const
{
	return m_Point.has_value();
}
void Placemark::SetPoint(const std::shared_ptr<Point>& Value)
{
	m_Point = Value;
}
std::shared_ptr<Model> Placemark::GetModel() const
{
	return m_Model.value();
}

bool Placemark::HasModel() const
{
	return m_Model.has_value();
}
void Placemark::SetModel(const std::shared_ptr<Model>& Value)
{
	m_Model = Value;
}
std::shared_ptr<LookAt> Placemark::GetLookAt() const
{
	return m_LookAt.value();
}

bool Placemark::HasLookAt() const
{
	return m_LookAt.has_value();
}
void Placemark::SetLookAt(const std::shared_ptr<LookAt>& Value)
{
	m_LookAt = Value;
}

Point::Point()
{
}
Point::~Point()
{
}

utility::string_t Point::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tessellate.has_value())
	{
		rapidjson::Value TessellateValue(TypeToJsonValue(m_Tessellate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tessellate", TessellateValue, JsonDoc.GetAllocator());
	}

	if (m_AltitudeMode.has_value())
	{
		rapidjson::Value AltitudeModeValue(TypeToJsonValue(m_AltitudeMode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("altitudeMode", AltitudeModeValue, JsonDoc.GetAllocator());
	}

	if (m_Coordinates.has_value())
	{
		rapidjson::Value CoordinatesValue(TypeToJsonValue(m_Coordinates, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coordinates", CoordinatesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Point::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Point::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tessellate"))
	{
		const rapidjson::Value& TessellateValue = JsonDoc["tessellate"];

		if (TessellateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TessellateValue, m_Tessellate);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tessellate is null!");
		}
	}

	if (JsonDoc.HasMember("altitudeMode"))
	{
		const rapidjson::Value& AltitudeModeValue = JsonDoc["altitudeMode"];

		if (AltitudeModeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltitudeModeValue, m_AltitudeMode);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member altitudeMode is null!");
		}
	}

	if (JsonDoc.HasMember("coordinates"))
	{
		const rapidjson::Value& CoordinatesValue = JsonDoc["coordinates"];

		if (CoordinatesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoordinatesValue, m_Coordinates);
		}
	}
}


bool Point::GetTessellate() const
{
	return m_Tessellate.value();
}

bool Point::HasTessellate() const
{
	return m_Tessellate.has_value();
}
void Point::SetTessellate(const bool& Value)
{
	m_Tessellate = Value;
}
std::shared_ptr<AltitudeMode> Point::GetAltitudeMode() const
{
	return m_AltitudeMode.value();
}

bool Point::HasAltitudeMode() const
{
	return m_AltitudeMode.has_value();
}
void Point::SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value)
{
	m_AltitudeMode = Value;
}
utility::string_t Point::GetCoordinates() const
{
	return m_Coordinates.value();
}

bool Point::HasCoordinates() const
{
	return m_Coordinates.has_value();
}
void Point::SetCoordinates(const utility::string_t& Value)
{
	m_Coordinates = Value;
}

PositionKml::PositionKml()
{
}
PositionKml::~PositionKml()
{
}

utility::string_t PositionKml::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Style.has_value())
	{
		rapidjson::Value StyleValue(TypeToJsonValue(m_Style, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("style", StyleValue, JsonDoc.GetAllocator());
	}

	if (m_Visibility.has_value())
	{
		rapidjson::Value VisibilityValue(TypeToJsonValue(m_Visibility, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("visibility", VisibilityValue, JsonDoc.GetAllocator());
	}

	if (m_Open.has_value())
	{
		rapidjson::Value OpenValue(TypeToJsonValue(m_Open, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("open", OpenValue, JsonDoc.GetAllocator());
	}

	if (m_Placemark.has_value())
	{
		rapidjson::Value PlacemarkValue(TypeToJsonValue(m_Placemark, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("placemark", PlacemarkValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PositionKml::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PositionKml::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style);
		}
	}

	if (JsonDoc.HasMember("visibility"))
	{
		const rapidjson::Value& VisibilityValue = JsonDoc["visibility"];

		if (VisibilityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VisibilityValue, m_Visibility);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member visibility is null!");
		}
	}

	if (JsonDoc.HasMember("open"))
	{
		const rapidjson::Value& OpenValue = JsonDoc["open"];

		if (OpenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OpenValue, m_Open);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member open is null!");
		}
	}

	if (JsonDoc.HasMember("placemark"))
	{
		const rapidjson::Value& PlacemarkValue = JsonDoc["placemark"];

		if (PlacemarkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PlacemarkValue, m_Placemark);
		}
	}
}


utility::string_t PositionKml::GetName() const
{
	return m_Name.value();
}

bool PositionKml::HasName() const
{
	return m_Name.has_value();
}
void PositionKml::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<std::shared_ptr<Style>>& PositionKml::GetStyle() const
{
	return m_Style.value();
}

bool PositionKml::HasStyle() const
{
	return m_Style.has_value();
}
void PositionKml::SetStyle(const std::vector<std::shared_ptr<Style>>& Value)
{
	m_Style = Value;
}
bool PositionKml::GetVisibility() const
{
	return m_Visibility.value();
}

bool PositionKml::HasVisibility() const
{
	return m_Visibility.has_value();
}
void PositionKml::SetVisibility(const bool& Value)
{
	m_Visibility = Value;
}
bool PositionKml::GetOpen() const
{
	return m_Open.value();
}

bool PositionKml::HasOpen() const
{
	return m_Open.has_value();
}
void PositionKml::SetOpen(const bool& Value)
{
	m_Open = Value;
}
const std::vector<std::shared_ptr<Placemark>>& PositionKml::GetPlacemark() const
{
	return m_Placemark.value();
}

bool PositionKml::HasPlacemark() const
{
	return m_Placemark.has_value();
}
void PositionKml::SetPlacemark(const std::vector<std::shared_ptr<Placemark>>& Value)
{
	m_Placemark = Value;
}

ProblemDetails::ProblemDetails()
{
}
ProblemDetails::~ProblemDetails()
{
}

utility::string_t ProblemDetails::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Detail.has_value())
	{
		rapidjson::Value DetailValue(TypeToJsonValue(m_Detail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("detail", DetailValue, JsonDoc.GetAllocator());
	}

	if (m_Instance.has_value())
	{
		rapidjson::Value InstanceValue(TypeToJsonValue(m_Instance, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("instance", InstanceValue, JsonDoc.GetAllocator());
	}

	if (m_Extensions.has_value())
	{
		rapidjson::Value ExtensionsValue(TypeToJsonValue(m_Extensions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("extensions", ExtensionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ProblemDetails::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProblemDetails::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("detail"))
	{
		const rapidjson::Value& DetailValue = JsonDoc["detail"];

		if (DetailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DetailValue, m_Detail);
		}
	}

	if (JsonDoc.HasMember("instance"))
	{
		const rapidjson::Value& InstanceValue = JsonDoc["instance"];

		if (InstanceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InstanceValue, m_Instance);
		}
	}

	if (JsonDoc.HasMember("extensions"))
	{
		const rapidjson::Value& ExtensionsValue = JsonDoc["extensions"];

		if (ExtensionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtensionsValue, m_Extensions);
		}
	}
}


utility::string_t ProblemDetails::GetType() const
{
	return m_Type.value();
}

bool ProblemDetails::HasType() const
{
	return m_Type.has_value();
}
void ProblemDetails::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t ProblemDetails::GetTitle() const
{
	return m_Title.value();
}

bool ProblemDetails::HasTitle() const
{
	return m_Title.has_value();
}
void ProblemDetails::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
int32_t ProblemDetails::GetStatus() const
{
	return m_Status.value();
}

bool ProblemDetails::HasStatus() const
{
	return m_Status.has_value();
}
void ProblemDetails::SetStatus(int32_t Value)
{
	m_Status = Value;
}
utility::string_t ProblemDetails::GetDetail() const
{
	return m_Detail.value();
}

bool ProblemDetails::HasDetail() const
{
	return m_Detail.has_value();
}
void ProblemDetails::SetDetail(const utility::string_t& Value)
{
	m_Detail = Value;
}
utility::string_t ProblemDetails::GetInstance() const
{
	return m_Instance.value();
}

bool ProblemDetails::HasInstance() const
{
	return m_Instance.has_value();
}
void ProblemDetails::SetInstance(const utility::string_t& Value)
{
	m_Instance = Value;
}
const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& ProblemDetails::GetExtensions() const
{
	return m_Extensions.value();
}

bool ProblemDetails::HasExtensions() const
{
	return m_Extensions.has_value();
}
void ProblemDetails::SetExtensions(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value)
{
	m_Extensions = Value;
}

ProcessingTimeEntry::ProcessingTimeEntry()
{
}
ProcessingTimeEntry::~ProcessingTimeEntry()
{
}

utility::string_t ProcessingTimeEntry::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_GroupKey.has_value())
	{
		rapidjson::Value GroupKeyValue(TypeToJsonValue(m_GroupKey, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupKey", GroupKeyValue, JsonDoc.GetAllocator());
	}

	if (m_TotalDurationMs.has_value())
	{
		rapidjson::Value TotalDurationMsValue(TypeToJsonValue(m_TotalDurationMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalDurationMs", TotalDurationMsValue, JsonDoc.GetAllocator());
	}

	if (m_AvgDurationMs.has_value())
	{
		rapidjson::Value AvgDurationMsValue(TypeToJsonValue(m_AvgDurationMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avgDurationMs", AvgDurationMsValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ProcessingTimeEntry::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProcessingTimeEntry::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("groupKey"))
	{
		const rapidjson::Value& GroupKeyValue = JsonDoc["groupKey"];

		if (GroupKeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupKeyValue, m_GroupKey);
		}
	}

	if (JsonDoc.HasMember("totalDurationMs"))
	{
		const rapidjson::Value& TotalDurationMsValue = JsonDoc["totalDurationMs"];

		if (TotalDurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalDurationMsValue, m_TotalDurationMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalDurationMs is null!");
		}
	}

	if (JsonDoc.HasMember("avgDurationMs"))
	{
		const rapidjson::Value& AvgDurationMsValue = JsonDoc["avgDurationMs"];

		if (AvgDurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvgDurationMsValue, m_AvgDurationMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member avgDurationMs is null!");
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t ProcessingTimeEntry::GetGroupKey() const
{
	return m_GroupKey.value();
}

bool ProcessingTimeEntry::HasGroupKey() const
{
	return m_GroupKey.has_value();
}
void ProcessingTimeEntry::SetGroupKey(const utility::string_t& Value)
{
	m_GroupKey = Value;
}
double ProcessingTimeEntry::GetTotalDurationMs() const
{
	return m_TotalDurationMs.value();
}

bool ProcessingTimeEntry::HasTotalDurationMs() const
{
	return m_TotalDurationMs.has_value();
}
void ProcessingTimeEntry::SetTotalDurationMs(double Value)
{
	m_TotalDurationMs = Value;
}
double ProcessingTimeEntry::GetAvgDurationMs() const
{
	return m_AvgDurationMs.value();
}

bool ProcessingTimeEntry::HasAvgDurationMs() const
{
	return m_AvgDurationMs.has_value();
}
void ProcessingTimeEntry::SetAvgDurationMs(double Value)
{
	m_AvgDurationMs = Value;
}
int32_t ProcessingTimeEntry::GetCount() const
{
	return m_Count.value();
}

bool ProcessingTimeEntry::HasCount() const
{
	return m_Count.has_value();
}
void ProcessingTimeEntry::SetCount(int32_t Value)
{
	m_Count = Value;
}

PrototypeDto::PrototypeDto()
{
}
PrototypeDto::~PrototypeDto()
{
}

utility::string_t PrototypeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Metadata.has_value())
	{
		rapidjson::Value MetadataValue(TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metadata", MetadataValue, JsonDoc.GetAllocator());
	}

	if (m_UiStrings.has_value())
	{
		rapidjson::Value UiStringsValue(TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uiStrings", UiStringsValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_PointOfInterestId.has_value())
	{
		rapidjson::Value PointOfInterestIdValue(TypeToJsonValue(m_PointOfInterestId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pointOfInterestId", PointOfInterestIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupIds.has_value())
	{
		rapidjson::Value GroupIdsValue(TypeToJsonValue(m_GroupIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupIds", GroupIdsValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Highlander.has_value())
	{
		rapidjson::Value HighlanderValue(TypeToJsonValue(m_Highlander, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("highlander", HighlanderValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_SystemOwned.has_value())
	{
		rapidjson::Value SystemOwnedValue(TypeToJsonValue(m_SystemOwned, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemOwned", SystemOwnedValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeOwnerId.has_value())
	{
		rapidjson::Value PrototypeOwnerIdValue(TypeToJsonValue(m_PrototypeOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeOwnerId", PrototypeOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_OrganizationId.has_value())
	{
		rapidjson::Value OrganizationIdValue(TypeToJsonValue(m_OrganizationId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationId", OrganizationIdValue, JsonDoc.GetAllocator());
	}

	if (m_ReadAccess.has_value())
	{
		rapidjson::Value ReadAccessValue(TypeToJsonValue(m_ReadAccess, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("readAccess", ReadAccessValue, JsonDoc.GetAllocator());
	}

	if (m_WriteAccess.has_value())
	{
		rapidjson::Value WriteAccessValue(TypeToJsonValue(m_WriteAccess, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("writeAccess", WriteAccessValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PrototypeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PrototypeDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata);
		}
	}

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestId"))
	{
		const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

		if (PointOfInterestIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt);
		}
	}

	if (JsonDoc.HasMember("highlander"))
	{
		const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

		if (HighlanderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighlanderValue, m_Highlander);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type);
		}
	}

	if (JsonDoc.HasMember("systemOwned"))
	{
		const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

		if (SystemOwnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemOwnedValue, m_SystemOwned);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerId"))
	{
		const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

		if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId);
		}
	}

	if (JsonDoc.HasMember("organizationId"))
	{
		const rapidjson::Value& OrganizationIdValue = JsonDoc["organizationId"];

		if (OrganizationIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrganizationIdValue, m_OrganizationId);
		}
	}

	if (JsonDoc.HasMember("readAccess"))
	{
		const rapidjson::Value& ReadAccessValue = JsonDoc["readAccess"];

		if (ReadAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessValue, m_ReadAccess);
		}
	}

	if (JsonDoc.HasMember("writeAccess"))
	{
		const rapidjson::Value& WriteAccessValue = JsonDoc["writeAccess"];

		if (WriteAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessValue, m_WriteAccess);
		}
	}
}


utility::string_t PrototypeDto::GetId() const
{
	return m_Id.value();
}

bool PrototypeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t PrototypeDto::GetName() const
{
	return m_Name.value();
}

bool PrototypeDto::HasName() const
{
	return m_Name.has_value();
}
void PrototypeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetTags() const
{
	return m_Tags.value();
}

bool PrototypeDto::HasTags() const
{
	return m_Tags.has_value();
}
void PrototypeDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& PrototypeDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool PrototypeDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void PrototypeDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& PrototypeDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool PrototypeDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void PrototypeDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
const std::map<utility::string_t, utility::string_t>& PrototypeDto::GetState() const
{
	return m_State.value();
}

bool PrototypeDto::HasState() const
{
	return m_State.has_value();
}
void PrototypeDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_State = Value;
}
utility::string_t PrototypeDto::GetPointOfInterestId() const
{
	return m_PointOfInterestId.value();
}

bool PrototypeDto::HasPointOfInterestId() const
{
	return m_PointOfInterestId.has_value();
}
void PrototypeDto::SetPointOfInterestId(const utility::string_t& Value)
{
	m_PointOfInterestId = Value;
}
utility::string_t PrototypeDto::GetParentId() const
{
	return m_ParentId.value();
}

bool PrototypeDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void PrototypeDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool PrototypeDto::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void PrototypeDto::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
utility::string_t PrototypeDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool PrototypeDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t PrototypeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool PrototypeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t PrototypeDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool PrototypeDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t PrototypeDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool PrototypeDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool PrototypeDto::GetHighlander() const
{
	return m_Highlander.value();
}

bool PrototypeDto::HasHighlander() const
{
	return m_Highlander.has_value();
}
void PrototypeDto::SetHighlander(const bool& Value)
{
	m_Highlander = Value;
}
utility::string_t PrototypeDto::GetType() const
{
	return m_Type.value();
}

bool PrototypeDto::HasType() const
{
	return m_Type.has_value();
}
void PrototypeDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
bool PrototypeDto::GetSystemOwned() const
{
	return m_SystemOwned.value();
}

bool PrototypeDto::HasSystemOwned() const
{
	return m_SystemOwned.has_value();
}
void PrototypeDto::SetSystemOwned(const bool& Value)
{
	m_SystemOwned = Value;
}
utility::string_t PrototypeDto::GetPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.value();
}

bool PrototypeDto::HasPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.has_value();
}
void PrototypeDto::SetPrototypeOwnerId(const utility::string_t& Value)
{
	m_PrototypeOwnerId = Value;
}
utility::string_t PrototypeDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool PrototypeDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
const std::vector<utility::string_t>& PrototypeDto::GetReadAccess() const
{
	return m_ReadAccess.value();
}

bool PrototypeDto::HasReadAccess() const
{
	return m_ReadAccess.has_value();
}
void PrototypeDto::SetReadAccess(const std::vector<utility::string_t>& Value)
{
	m_ReadAccess = Value;
}
const std::vector<utility::string_t>& PrototypeDto::GetWriteAccess() const
{
	return m_WriteAccess.value();
}

bool PrototypeDto::HasWriteAccess() const
{
	return m_WriteAccess.has_value();
}
void PrototypeDto::SetWriteAccess(const std::vector<utility::string_t>& Value)
{
	m_WriteAccess = Value;
}

PrototypeDtoDataPage::PrototypeDtoDataPage()
{
}
PrototypeDtoDataPage::~PrototypeDtoDataPage()
{
}

utility::string_t PrototypeDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PrototypeDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PrototypeDtoDataPage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<PrototypeDto>>& PrototypeDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool PrototypeDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void PrototypeDtoDataPage::SetItems(const std::vector<std::shared_ptr<PrototypeDto>>& Value)
{
	m_Items = Value;
}
int32_t PrototypeDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool PrototypeDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void PrototypeDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t PrototypeDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool PrototypeDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void PrototypeDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t PrototypeDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool PrototypeDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void PrototypeDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t PrototypeDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool PrototypeDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void PrototypeDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

PurgeDlqResult::PurgeDlqResult()
{
}
PurgeDlqResult::~PurgeDlqResult()
{
}

utility::string_t PurgeDlqResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Success.has_value())
	{
		rapidjson::Value SuccessValue(TypeToJsonValue(m_Success, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("success", SuccessValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PurgeDlqResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PurgeDlqResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("success"))
	{
		const rapidjson::Value& SuccessValue = JsonDoc["success"];

		if (SuccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessValue, m_Success);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
	}
}


bool PurgeDlqResult::GetSuccess() const
{
	return m_Success.value();
}

bool PurgeDlqResult::HasSuccess() const
{
	return m_Success.has_value();
}
void PurgeDlqResult::SetSuccess(const bool& Value)
{
	m_Success = Value;
}
utility::string_t PurgeDlqResult::GetError() const
{
	return m_Error.value();
}

bool PurgeDlqResult::HasError() const
{
	return m_Error.has_value();
}
void PurgeDlqResult::SetError(const utility::string_t& Value)
{
	m_Error = Value;
}

QueueBreakdownEntry::QueueBreakdownEntry()
{
}
QueueBreakdownEntry::~QueueBreakdownEntry()
{
}

utility::string_t QueueBreakdownEntry::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Queue.has_value())
	{
		rapidjson::Value QueueValue(TypeToJsonValue(m_Queue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queue", QueueValue, JsonDoc.GetAllocator());
	}

	if (m_AvgQueueWaitMs.has_value())
	{
		rapidjson::Value AvgQueueWaitMsValue(TypeToJsonValue(m_AvgQueueWaitMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avgQueueWaitMs", AvgQueueWaitMsValue, JsonDoc.GetAllocator());
	}

	if (m_AvgProcessingMs.has_value())
	{
		rapidjson::Value AvgProcessingMsValue(TypeToJsonValue(m_AvgProcessingMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avgProcessingMs", AvgProcessingMsValue, JsonDoc.GetAllocator());
	}

	if (m_AvgTotalMs.has_value())
	{
		rapidjson::Value AvgTotalMsValue(TypeToJsonValue(m_AvgTotalMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avgTotalMs", AvgTotalMsValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueBreakdownEntry::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueBreakdownEntry::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("queue"))
	{
		const rapidjson::Value& QueueValue = JsonDoc["queue"];

		if (QueueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueValue, m_Queue);
		}
	}

	if (JsonDoc.HasMember("avgQueueWaitMs"))
	{
		const rapidjson::Value& AvgQueueWaitMsValue = JsonDoc["avgQueueWaitMs"];

		if (AvgQueueWaitMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvgQueueWaitMsValue, m_AvgQueueWaitMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member avgQueueWaitMs is null!");
		}
	}

	if (JsonDoc.HasMember("avgProcessingMs"))
	{
		const rapidjson::Value& AvgProcessingMsValue = JsonDoc["avgProcessingMs"];

		if (AvgProcessingMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvgProcessingMsValue, m_AvgProcessingMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member avgProcessingMs is null!");
		}
	}

	if (JsonDoc.HasMember("avgTotalMs"))
	{
		const rapidjson::Value& AvgTotalMsValue = JsonDoc["avgTotalMs"];

		if (AvgTotalMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvgTotalMsValue, m_AvgTotalMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member avgTotalMs is null!");
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}
}


utility::string_t QueueBreakdownEntry::GetQueue() const
{
	return m_Queue.value();
}

bool QueueBreakdownEntry::HasQueue() const
{
	return m_Queue.has_value();
}
void QueueBreakdownEntry::SetQueue(const utility::string_t& Value)
{
	m_Queue = Value;
}
double QueueBreakdownEntry::GetAvgQueueWaitMs() const
{
	return m_AvgQueueWaitMs.value();
}

bool QueueBreakdownEntry::HasAvgQueueWaitMs() const
{
	return m_AvgQueueWaitMs.has_value();
}
void QueueBreakdownEntry::SetAvgQueueWaitMs(double Value)
{
	m_AvgQueueWaitMs = Value;
}
double QueueBreakdownEntry::GetAvgProcessingMs() const
{
	return m_AvgProcessingMs.value();
}

bool QueueBreakdownEntry::HasAvgProcessingMs() const
{
	return m_AvgProcessingMs.has_value();
}
void QueueBreakdownEntry::SetAvgProcessingMs(double Value)
{
	m_AvgProcessingMs = Value;
}
double QueueBreakdownEntry::GetAvgTotalMs() const
{
	return m_AvgTotalMs.value();
}

bool QueueBreakdownEntry::HasAvgTotalMs() const
{
	return m_AvgTotalMs.has_value();
}
void QueueBreakdownEntry::SetAvgTotalMs(double Value)
{
	m_AvgTotalMs = Value;
}
int32_t QueueBreakdownEntry::GetCount() const
{
	return m_Count.value();
}

bool QueueBreakdownEntry::HasCount() const
{
	return m_Count.has_value();
}
void QueueBreakdownEntry::SetCount(int32_t Value)
{
	m_Count = Value;
}

QueueConfigInfo::QueueConfigInfo()
{
}
QueueConfigInfo::~QueueConfigInfo()
{
}

utility::string_t QueueConfigInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Qa.has_value())
	{
		rapidjson::Value QaValue(TypeToJsonValue(m_Qa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qa", QaValue, JsonDoc.GetAllocator());
	}

	if (m_Ct.has_value())
	{
		rapidjson::Value CtValue(TypeToJsonValue(m_Ct, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ct", CtValue, JsonDoc.GetAllocator());
	}

	if (m_Lmt.has_value())
	{
		rapidjson::Value LmtValue(TypeToJsonValue(m_Lmt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lmt", LmtValue, JsonDoc.GetAllocator());
	}

	if (m_Vt.has_value())
	{
		rapidjson::Value VtValue(TypeToJsonValue(m_Vt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vt", VtValue, JsonDoc.GetAllocator());
	}

	if (m_Mms.has_value())
	{
		rapidjson::Value MmsValue(TypeToJsonValue(m_Mms, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mms", MmsValue, JsonDoc.GetAllocator());
	}

	if (m_Mrp.has_value())
	{
		rapidjson::Value MrpValue(TypeToJsonValue(m_Mrp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mrp", MrpValue, JsonDoc.GetAllocator());
	}

	if (m_Ds.has_value())
	{
		rapidjson::Value DsValue(TypeToJsonValue(m_Ds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ds", DsValue, JsonDoc.GetAllocator());
	}

	if (m_Mrc.has_value())
	{
		rapidjson::Value MrcValue(TypeToJsonValue(m_Mrc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mrc", MrcValue, JsonDoc.GetAllocator());
	}

	if (m_Enc.has_value())
	{
		rapidjson::Value EncValue(TypeToJsonValue(m_Enc, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enc", EncValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueConfigInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueConfigInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("qa"))
	{
		const rapidjson::Value& QaValue = JsonDoc["qa"];

		if (QaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QaValue, m_Qa);
		}
	}

	if (JsonDoc.HasMember("ct"))
	{
		const rapidjson::Value& CtValue = JsonDoc["ct"];

		if (CtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CtValue, m_Ct);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ct is null!");
		}
	}

	if (JsonDoc.HasMember("lmt"))
	{
		const rapidjson::Value& LmtValue = JsonDoc["lmt"];

		if (LmtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LmtValue, m_Lmt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lmt is null!");
		}
	}

	if (JsonDoc.HasMember("vt"))
	{
		const rapidjson::Value& VtValue = JsonDoc["vt"];

		if (VtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VtValue, m_Vt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member vt is null!");
		}
	}

	if (JsonDoc.HasMember("mms"))
	{
		const rapidjson::Value& MmsValue = JsonDoc["mms"];

		if (MmsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MmsValue, m_Mms);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member mms is null!");
		}
	}

	if (JsonDoc.HasMember("mrp"))
	{
		const rapidjson::Value& MrpValue = JsonDoc["mrp"];

		if (MrpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MrpValue, m_Mrp);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member mrp is null!");
		}
	}

	if (JsonDoc.HasMember("ds"))
	{
		const rapidjson::Value& DsValue = JsonDoc["ds"];

		if (DsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DsValue, m_Ds);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ds is null!");
		}
	}

	if (JsonDoc.HasMember("mrc"))
	{
		const rapidjson::Value& MrcValue = JsonDoc["mrc"];

		if (MrcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MrcValue, m_Mrc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member mrc is null!");
		}
	}

	if (JsonDoc.HasMember("enc"))
	{
		const rapidjson::Value& EncValue = JsonDoc["enc"];

		if (EncValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncValue, m_Enc);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enc is null!");
		}
	}
}


utility::string_t QueueConfigInfo::GetQa() const
{
	return m_Qa.value();
}

bool QueueConfigInfo::HasQa() const
{
	return m_Qa.has_value();
}
void QueueConfigInfo::SetQa(const utility::string_t& Value)
{
	m_Qa = Value;
}
int64_t QueueConfigInfo::GetCt() const
{
	return m_Ct.value();
}

bool QueueConfigInfo::HasCt() const
{
	return m_Ct.has_value();
}
void QueueConfigInfo::SetCt(int64_t Value)
{
	m_Ct = Value;
}
int64_t QueueConfigInfo::GetLmt() const
{
	return m_Lmt.value();
}

bool QueueConfigInfo::HasLmt() const
{
	return m_Lmt.has_value();
}
void QueueConfigInfo::SetLmt(int64_t Value)
{
	m_Lmt = Value;
}
int32_t QueueConfigInfo::GetVt() const
{
	return m_Vt.value();
}

bool QueueConfigInfo::HasVt() const
{
	return m_Vt.has_value();
}
void QueueConfigInfo::SetVt(int32_t Value)
{
	m_Vt = Value;
}
int32_t QueueConfigInfo::GetMms() const
{
	return m_Mms.value();
}

bool QueueConfigInfo::HasMms() const
{
	return m_Mms.has_value();
}
void QueueConfigInfo::SetMms(int32_t Value)
{
	m_Mms = Value;
}
int32_t QueueConfigInfo::GetMrp() const
{
	return m_Mrp.value();
}

bool QueueConfigInfo::HasMrp() const
{
	return m_Mrp.has_value();
}
void QueueConfigInfo::SetMrp(int32_t Value)
{
	m_Mrp = Value;
}
int32_t QueueConfigInfo::GetDs() const
{
	return m_Ds.value();
}

bool QueueConfigInfo::HasDs() const
{
	return m_Ds.has_value();
}
void QueueConfigInfo::SetDs(int32_t Value)
{
	m_Ds = Value;
}
int32_t QueueConfigInfo::GetMrc() const
{
	return m_Mrc.value();
}

bool QueueConfigInfo::HasMrc() const
{
	return m_Mrc.has_value();
}
void QueueConfigInfo::SetMrc(int32_t Value)
{
	m_Mrc = Value;
}
bool QueueConfigInfo::GetEnc() const
{
	return m_Enc.value();
}

bool QueueConfigInfo::HasEnc() const
{
	return m_Enc.has_value();
}
void QueueConfigInfo::SetEnc(const bool& Value)
{
	m_Enc = Value;
}

QueueDepthInfo::QueueDepthInfo()
{
}
QueueDepthInfo::~QueueDepthInfo()
{
}

utility::string_t QueueDepthInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_W.has_value())
	{
		rapidjson::Value WValue(TypeToJsonValue(m_W, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("w", WValue, JsonDoc.GetAllocator());
	}

	if (m_If.has_value())
	{
		rapidjson::Value IfValue(TypeToJsonValue(m_If, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("if", IfValue, JsonDoc.GetAllocator());
	}

	if (m_Dy.has_value())
	{
		rapidjson::Value DyValue(TypeToJsonValue(m_Dy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("dy", DyValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueDepthInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueDepthInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("w"))
	{
		const rapidjson::Value& WValue = JsonDoc["w"];

		if (WValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WValue, m_W);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member w is null!");
		}
	}

	if (JsonDoc.HasMember("if"))
	{
		const rapidjson::Value& IfValue = JsonDoc["if"];

		if (IfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IfValue, m_If);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member if is null!");
		}
	}

	if (JsonDoc.HasMember("dy"))
	{
		const rapidjson::Value& DyValue = JsonDoc["dy"];

		if (DyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DyValue, m_Dy);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member dy is null!");
		}
	}
}


int32_t QueueDepthInfo::GetW() const
{
	return m_W.value();
}

bool QueueDepthInfo::HasW() const
{
	return m_W.has_value();
}
void QueueDepthInfo::SetW(int32_t Value)
{
	m_W = Value;
}
int32_t QueueDepthInfo::GetIf() const
{
	return m_If.value();
}

bool QueueDepthInfo::HasIf() const
{
	return m_If.has_value();
}
void QueueDepthInfo::SetIf(int32_t Value)
{
	m_If = Value;
}
int32_t QueueDepthInfo::GetDy() const
{
	return m_Dy.value();
}

bool QueueDepthInfo::HasDy() const
{
	return m_Dy.has_value();
}
void QueueDepthInfo::SetDy(int32_t Value)
{
	m_Dy = Value;
}

QueueHealthInfo::QueueHealthInfo()
{
}
QueueHealthInfo::~QueueHealthInfo()
{
}

utility::string_t QueueHealthInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_N.has_value())
	{
		rapidjson::Value NValue(TypeToJsonValue(m_N, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("n", NValue, JsonDoc.GetAllocator());
	}

	if (m_Qu.has_value())
	{
		rapidjson::Value QuValue(TypeToJsonValue(m_Qu, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qu", QuValue, JsonDoc.GetAllocator());
	}

	if (m_T.has_value())
	{
		rapidjson::Value TValue(TypeToJsonValue(m_T, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("t", TValue, JsonDoc.GetAllocator());
	}

	if (m_D.has_value())
	{
		rapidjson::Value DValue(TypeToJsonValue(m_D, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("d", DValue, JsonDoc.GetAllocator());
	}

	if (m_Oa.has_value())
	{
		rapidjson::Value OaValue(TypeToJsonValue(m_Oa, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oa", OaValue, JsonDoc.GetAllocator());
	}

	if (m_Dlq.has_value())
	{
		rapidjson::Value DlqValue(TypeToJsonValue(m_Dlq, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("dlq", DlqValue, JsonDoc.GetAllocator());
	}

	if (m_Cfg.has_value())
	{
		rapidjson::Value CfgValue(TypeToJsonValue(m_Cfg, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cfg", CfgValue, JsonDoc.GetAllocator());
	}

	if (m_Ac.has_value())
	{
		rapidjson::Value AcValue(TypeToJsonValue(m_Ac, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ac", AcValue, JsonDoc.GetAllocator());
	}

	if (m_Ua.has_value())
	{
		rapidjson::Value UaValue(TypeToJsonValue(m_Ua, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ua", UaValue, JsonDoc.GetAllocator());
	}

	if (m_Del.has_value())
	{
		rapidjson::Value DelValue(TypeToJsonValue(m_Del, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("del", DelValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueHealthInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueHealthInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("n"))
	{
		const rapidjson::Value& NValue = JsonDoc["n"];

		if (NValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NValue, m_N);
		}
	}

	if (JsonDoc.HasMember("qu"))
	{
		const rapidjson::Value& QuValue = JsonDoc["qu"];

		if (QuValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuValue, m_Qu);
		}
	}

	if (JsonDoc.HasMember("t"))
	{
		const rapidjson::Value& TValue = JsonDoc["t"];

		if (TValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TValue, m_T);
		}
	}

	if (JsonDoc.HasMember("d"))
	{
		const rapidjson::Value& DValue = JsonDoc["d"];

		if (DValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DValue, m_D);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member d is null!");
		}
	}

	if (JsonDoc.HasMember("oa"))
	{
		const rapidjson::Value& OaValue = JsonDoc["oa"];

		if (OaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OaValue, m_Oa);
		}
	}

	if (JsonDoc.HasMember("dlq"))
	{
		const rapidjson::Value& DlqValue = JsonDoc["dlq"];

		if (DlqValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DlqValue, m_Dlq);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member dlq is null!");
		}
	}

	if (JsonDoc.HasMember("cfg"))
	{
		const rapidjson::Value& CfgValue = JsonDoc["cfg"];

		if (CfgValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CfgValue, m_Cfg);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member cfg is null!");
		}
	}

	if (JsonDoc.HasMember("ac"))
	{
		const rapidjson::Value& AcValue = JsonDoc["ac"];

		if (AcValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AcValue, m_Ac);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ac is null!");
		}
	}

	if (JsonDoc.HasMember("ua"))
	{
		const rapidjson::Value& UaValue = JsonDoc["ua"];

		if (UaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UaValue, m_Ua);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ua is null!");
		}
	}

	if (JsonDoc.HasMember("del"))
	{
		const rapidjson::Value& DelValue = JsonDoc["del"];

		if (DelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DelValue, m_Del);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member del is null!");
		}
	}
}


utility::string_t QueueHealthInfo::GetN() const
{
	return m_N.value();
}

bool QueueHealthInfo::HasN() const
{
	return m_N.has_value();
}
void QueueHealthInfo::SetN(const utility::string_t& Value)
{
	m_N = Value;
}
utility::string_t QueueHealthInfo::GetQu() const
{
	return m_Qu.value();
}

bool QueueHealthInfo::HasQu() const
{
	return m_Qu.has_value();
}
void QueueHealthInfo::SetQu(const utility::string_t& Value)
{
	m_Qu = Value;
}
utility::string_t QueueHealthInfo::GetT() const
{
	return m_T.value();
}

bool QueueHealthInfo::HasT() const
{
	return m_T.has_value();
}
void QueueHealthInfo::SetT(const utility::string_t& Value)
{
	m_T = Value;
}
std::shared_ptr<QueueDepthInfo> QueueHealthInfo::GetD() const
{
	return m_D.value();
}

bool QueueHealthInfo::HasD() const
{
	return m_D.has_value();
}
void QueueHealthInfo::SetD(const std::shared_ptr<QueueDepthInfo>& Value)
{
	m_D = Value;
}
double QueueHealthInfo::GetOa() const
{
	return m_Oa.value();
}

bool QueueHealthInfo::HasOa() const
{
	return m_Oa.has_value();
}
void QueueHealthInfo::SetOa(double Value)
{
	m_Oa = Value;
}
std::shared_ptr<DlqInfo> QueueHealthInfo::GetDlq() const
{
	return m_Dlq.value();
}

bool QueueHealthInfo::HasDlq() const
{
	return m_Dlq.has_value();
}
void QueueHealthInfo::SetDlq(const std::shared_ptr<DlqInfo>& Value)
{
	m_Dlq = Value;
}
std::shared_ptr<QueueConfigInfo> QueueHealthInfo::GetCfg() const
{
	return m_Cfg.value();
}

bool QueueHealthInfo::HasCfg() const
{
	return m_Cfg.has_value();
}
void QueueHealthInfo::SetCfg(const std::shared_ptr<QueueConfigInfo>& Value)
{
	m_Cfg = Value;
}
std::shared_ptr<ChaosMonkeyConfig> QueueHealthInfo::GetAc() const
{
	return m_Ac.value();
}

bool QueueHealthInfo::HasAc() const
{
	return m_Ac.has_value();
}
void QueueHealthInfo::SetAc(const std::shared_ptr<ChaosMonkeyConfig>& Value)
{
	m_Ac = Value;
}
int64_t QueueHealthInfo::GetUa() const
{
	return m_Ua.value();
}

bool QueueHealthInfo::HasUa() const
{
	return m_Ua.has_value();
}
void QueueHealthInfo::SetUa(int64_t Value)
{
	m_Ua = Value;
}
bool QueueHealthInfo::GetDel() const
{
	return m_Del.value();
}

bool QueueHealthInfo::HasDel() const
{
	return m_Del.has_value();
}
void QueueHealthInfo::SetDel(const bool& Value)
{
	m_Del = Value;
}

QueueHealthSnapshot::QueueHealthSnapshot()
{
}
QueueHealthSnapshot::~QueueHealthSnapshot()
{
}

utility::string_t QueueHealthSnapshot::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Ts.has_value())
	{
		rapidjson::Value TsValue(TypeToJsonValue(m_Ts, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ts", TsValue, JsonDoc.GetAllocator());
	}

	if (m_Qs.has_value())
	{
		rapidjson::Value QsValue(TypeToJsonValue(m_Qs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("qs", QsValue, JsonDoc.GetAllocator());
	}

	if (m_Sy.has_value())
	{
		rapidjson::Value SyValue(TypeToJsonValue(m_Sy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sy", SyValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueHealthSnapshot::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueHealthSnapshot::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("ts"))
	{
		const rapidjson::Value& TsValue = JsonDoc["ts"];

		if (TsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TsValue, m_Ts);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ts is null!");
		}
	}

	if (JsonDoc.HasMember("qs"))
	{
		const rapidjson::Value& QsValue = JsonDoc["qs"];

		if (QsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QsValue, m_Qs);
		}
	}

	if (JsonDoc.HasMember("sy"))
	{
		const rapidjson::Value& SyValue = JsonDoc["sy"];

		if (SyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SyValue, m_Sy);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sy is null!");
		}
	}
}


int64_t QueueHealthSnapshot::GetTs() const
{
	return m_Ts.value();
}

bool QueueHealthSnapshot::HasTs() const
{
	return m_Ts.has_value();
}
void QueueHealthSnapshot::SetTs(int64_t Value)
{
	m_Ts = Value;
}
const std::vector<std::shared_ptr<QueueHealthInfo>>& QueueHealthSnapshot::GetQs() const
{
	return m_Qs.value();
}

bool QueueHealthSnapshot::HasQs() const
{
	return m_Qs.has_value();
}
void QueueHealthSnapshot::SetQs(const std::vector<std::shared_ptr<QueueHealthInfo>>& Value)
{
	m_Qs = Value;
}
std::shared_ptr<QueueHealthSummary> QueueHealthSnapshot::GetSy() const
{
	return m_Sy.value();
}

bool QueueHealthSnapshot::HasSy() const
{
	return m_Sy.has_value();
}
void QueueHealthSnapshot::SetSy(const std::shared_ptr<QueueHealthSummary>& Value)
{
	m_Sy = Value;
}

QueueHealthSummary::QueueHealthSummary()
{
}
QueueHealthSummary::~QueueHealthSummary()
{
}

utility::string_t QueueHealthSummary::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tw.has_value())
	{
		rapidjson::Value TwValue(TypeToJsonValue(m_Tw, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tw", TwValue, JsonDoc.GetAllocator());
	}

	if (m_Tif.has_value())
	{
		rapidjson::Value TifValue(TypeToJsonValue(m_Tif, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tif", TifValue, JsonDoc.GetAllocator());
	}

	if (m_Tdl.has_value())
	{
		rapidjson::Value TdlValue(TypeToJsonValue(m_Tdl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tdl", TdlValue, JsonDoc.GetAllocator());
	}

	if (m_Aq.has_value())
	{
		rapidjson::Value AqValue(TypeToJsonValue(m_Aq, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("aq", AqValue, JsonDoc.GetAllocator());
	}

	if (m_Tqd.has_value())
	{
		rapidjson::Value TqdValue(TypeToJsonValue(m_Tqd, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tqd", TqdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueHealthSummary::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueHealthSummary::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tw"))
	{
		const rapidjson::Value& TwValue = JsonDoc["tw"];

		if (TwValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TwValue, m_Tw);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tw is null!");
		}
	}

	if (JsonDoc.HasMember("tif"))
	{
		const rapidjson::Value& TifValue = JsonDoc["tif"];

		if (TifValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TifValue, m_Tif);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tif is null!");
		}
	}

	if (JsonDoc.HasMember("tdl"))
	{
		const rapidjson::Value& TdlValue = JsonDoc["tdl"];

		if (TdlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TdlValue, m_Tdl);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tdl is null!");
		}
	}

	if (JsonDoc.HasMember("aq"))
	{
		const rapidjson::Value& AqValue = JsonDoc["aq"];

		if (AqValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AqValue, m_Aq);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member aq is null!");
		}
	}

	if (JsonDoc.HasMember("tqd"))
	{
		const rapidjson::Value& TqdValue = JsonDoc["tqd"];

		if (TqdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TqdValue, m_Tqd);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tqd is null!");
		}
	}
}


int32_t QueueHealthSummary::GetTw() const
{
	return m_Tw.value();
}

bool QueueHealthSummary::HasTw() const
{
	return m_Tw.has_value();
}
void QueueHealthSummary::SetTw(int32_t Value)
{
	m_Tw = Value;
}
int32_t QueueHealthSummary::GetTif() const
{
	return m_Tif.value();
}

bool QueueHealthSummary::HasTif() const
{
	return m_Tif.has_value();
}
void QueueHealthSummary::SetTif(int32_t Value)
{
	m_Tif = Value;
}
int32_t QueueHealthSummary::GetTdl() const
{
	return m_Tdl.value();
}

bool QueueHealthSummary::HasTdl() const
{
	return m_Tdl.has_value();
}
void QueueHealthSummary::SetTdl(int32_t Value)
{
	m_Tdl = Value;
}
int32_t QueueHealthSummary::GetAq() const
{
	return m_Aq.value();
}

bool QueueHealthSummary::HasAq() const
{
	return m_Aq.has_value();
}
void QueueHealthSummary::SetAq(int32_t Value)
{
	m_Aq = Value;
}
int32_t QueueHealthSummary::GetTqd() const
{
	return m_Tqd.value();
}

bool QueueHealthSummary::HasTqd() const
{
	return m_Tqd.has_value();
}
void QueueHealthSummary::SetTqd(int32_t Value)
{
	m_Tqd = Value;
}

QueueWaitSummary::QueueWaitSummary()
{
}
QueueWaitSummary::~QueueWaitSummary()
{
}

utility::string_t QueueWaitSummary::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AvgGraphQueueWaitMs.has_value())
	{
		rapidjson::Value AvgGraphQueueWaitMsValue(TypeToJsonValue(m_AvgGraphQueueWaitMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("avgGraphQueueWaitMs", AvgGraphQueueWaitMsValue, JsonDoc.GetAllocator());
	}

	if (m_P50.has_value())
	{
		rapidjson::Value P50Value(TypeToJsonValue(m_P50, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("p50", P50Value, JsonDoc.GetAllocator());
	}

	if (m_P95.has_value())
	{
		rapidjson::Value P95Value(TypeToJsonValue(m_P95, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("p95", P95Value, JsonDoc.GetAllocator());
	}

	if (m_P99.has_value())
	{
		rapidjson::Value P99Value(TypeToJsonValue(m_P99, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("p99", P99Value, JsonDoc.GetAllocator());
	}

	if (m_TotalGraphQueueWaitMs.has_value())
	{
		rapidjson::Value TotalGraphQueueWaitMsValue(TypeToJsonValue(m_TotalGraphQueueWaitMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalGraphQueueWaitMs", TotalGraphQueueWaitMsValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}

	if (m_ByQueue.has_value())
	{
		rapidjson::Value ByQueueValue(TypeToJsonValue(m_ByQueue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("byQueue", ByQueueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueWaitSummary::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueWaitSummary::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("avgGraphQueueWaitMs"))
	{
		const rapidjson::Value& AvgGraphQueueWaitMsValue = JsonDoc["avgGraphQueueWaitMs"];

		if (AvgGraphQueueWaitMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvgGraphQueueWaitMsValue, m_AvgGraphQueueWaitMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member avgGraphQueueWaitMs is null!");
		}
	}

	if (JsonDoc.HasMember("p50"))
	{
		const rapidjson::Value& P50Value = JsonDoc["p50"];

		if (P50Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(P50Value, m_P50);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member p50 is null!");
		}
	}

	if (JsonDoc.HasMember("p95"))
	{
		const rapidjson::Value& P95Value = JsonDoc["p95"];

		if (P95Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(P95Value, m_P95);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member p95 is null!");
		}
	}

	if (JsonDoc.HasMember("p99"))
	{
		const rapidjson::Value& P99Value = JsonDoc["p99"];

		if (P99Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(P99Value, m_P99);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member p99 is null!");
		}
	}

	if (JsonDoc.HasMember("totalGraphQueueWaitMs"))
	{
		const rapidjson::Value& TotalGraphQueueWaitMsValue = JsonDoc["totalGraphQueueWaitMs"];

		if (TotalGraphQueueWaitMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalGraphQueueWaitMsValue, m_TotalGraphQueueWaitMs);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalGraphQueueWaitMs is null!");
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member count is null!");
		}
	}

	if (JsonDoc.HasMember("byQueue"))
	{
		const rapidjson::Value& ByQueueValue = JsonDoc["byQueue"];

		if (ByQueueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ByQueueValue, m_ByQueue);
		}
	}
}


double QueueWaitSummary::GetAvgGraphQueueWaitMs() const
{
	return m_AvgGraphQueueWaitMs.value();
}

bool QueueWaitSummary::HasAvgGraphQueueWaitMs() const
{
	return m_AvgGraphQueueWaitMs.has_value();
}
void QueueWaitSummary::SetAvgGraphQueueWaitMs(double Value)
{
	m_AvgGraphQueueWaitMs = Value;
}
double QueueWaitSummary::GetP50() const
{
	return m_P50.value();
}

bool QueueWaitSummary::HasP50() const
{
	return m_P50.has_value();
}
void QueueWaitSummary::SetP50(double Value)
{
	m_P50 = Value;
}
double QueueWaitSummary::GetP95() const
{
	return m_P95.value();
}

bool QueueWaitSummary::HasP95() const
{
	return m_P95.has_value();
}
void QueueWaitSummary::SetP95(double Value)
{
	m_P95 = Value;
}
double QueueWaitSummary::GetP99() const
{
	return m_P99.value();
}

bool QueueWaitSummary::HasP99() const
{
	return m_P99.has_value();
}
void QueueWaitSummary::SetP99(double Value)
{
	m_P99 = Value;
}
double QueueWaitSummary::GetTotalGraphQueueWaitMs() const
{
	return m_TotalGraphQueueWaitMs.value();
}

bool QueueWaitSummary::HasTotalGraphQueueWaitMs() const
{
	return m_TotalGraphQueueWaitMs.has_value();
}
void QueueWaitSummary::SetTotalGraphQueueWaitMs(double Value)
{
	m_TotalGraphQueueWaitMs = Value;
}
int32_t QueueWaitSummary::GetCount() const
{
	return m_Count.value();
}

bool QueueWaitSummary::HasCount() const
{
	return m_Count.has_value();
}
void QueueWaitSummary::SetCount(int32_t Value)
{
	m_Count = Value;
}
const std::vector<std::shared_ptr<QueueBreakdownEntry>>& QueueWaitSummary::GetByQueue() const
{
	return m_ByQueue.value();
}

bool QueueWaitSummary::HasByQueue() const
{
	return m_ByQueue.has_value();
}
void QueueWaitSummary::SetByQueue(const std::vector<std::shared_ptr<QueueBreakdownEntry>>& Value)
{
	m_ByQueue = Value;
}

RedriveTaskInfo::RedriveTaskInfo()
{
}
RedriveTaskInfo::~RedriveTaskInfo()
{
}

utility::string_t RedriveTaskInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TaskHandle.has_value())
	{
		rapidjson::Value TaskHandleValue(TypeToJsonValue(m_TaskHandle, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("taskHandle", TaskHandleValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_ApproximateNumberOfMessagesMoved.has_value())
	{
		rapidjson::Value ApproximateNumberOfMessagesMovedValue(TypeToJsonValue(m_ApproximateNumberOfMessagesMoved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("approximateNumberOfMessagesMoved", ApproximateNumberOfMessagesMovedValue, JsonDoc.GetAllocator());
	}

	if (m_ApproximateNumberOfMessagesToMove.has_value())
	{
		rapidjson::Value ApproximateNumberOfMessagesToMoveValue(TypeToJsonValue(m_ApproximateNumberOfMessagesToMove, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("approximateNumberOfMessagesToMove", ApproximateNumberOfMessagesToMoveValue, JsonDoc.GetAllocator());
	}

	if (m_StartedTimestamp.has_value())
	{
		rapidjson::Value StartedTimestampValue(TypeToJsonValue(m_StartedTimestamp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("startedTimestamp", StartedTimestampValue, JsonDoc.GetAllocator());
	}

	if (m_FailureReason.has_value())
	{
		rapidjson::Value FailureReasonValue(TypeToJsonValue(m_FailureReason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("failureReason", FailureReasonValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void RedriveTaskInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RedriveTaskInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("taskHandle"))
	{
		const rapidjson::Value& TaskHandleValue = JsonDoc["taskHandle"];

		if (TaskHandleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TaskHandleValue, m_TaskHandle);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status);
		}
	}

	if (JsonDoc.HasMember("approximateNumberOfMessagesMoved"))
	{
		const rapidjson::Value& ApproximateNumberOfMessagesMovedValue = JsonDoc["approximateNumberOfMessagesMoved"];

		if (ApproximateNumberOfMessagesMovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApproximateNumberOfMessagesMovedValue, m_ApproximateNumberOfMessagesMoved);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member approximateNumberOfMessagesMoved is null!");
		}
	}

	if (JsonDoc.HasMember("approximateNumberOfMessagesToMove"))
	{
		const rapidjson::Value& ApproximateNumberOfMessagesToMoveValue = JsonDoc["approximateNumberOfMessagesToMove"];

		if (ApproximateNumberOfMessagesToMoveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApproximateNumberOfMessagesToMoveValue, m_ApproximateNumberOfMessagesToMove);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member approximateNumberOfMessagesToMove is null!");
		}
	}

	if (JsonDoc.HasMember("startedTimestamp"))
	{
		const rapidjson::Value& StartedTimestampValue = JsonDoc["startedTimestamp"];

		if (StartedTimestampValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StartedTimestampValue, m_StartedTimestamp);
		}
	}

	if (JsonDoc.HasMember("failureReason"))
	{
		const rapidjson::Value& FailureReasonValue = JsonDoc["failureReason"];

		if (FailureReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FailureReasonValue, m_FailureReason);
		}
	}
}


utility::string_t RedriveTaskInfo::GetTaskHandle() const
{
	return m_TaskHandle.value();
}

bool RedriveTaskInfo::HasTaskHandle() const
{
	return m_TaskHandle.has_value();
}
void RedriveTaskInfo::SetTaskHandle(const utility::string_t& Value)
{
	m_TaskHandle = Value;
}
utility::string_t RedriveTaskInfo::GetStatus() const
{
	return m_Status.value();
}

bool RedriveTaskInfo::HasStatus() const
{
	return m_Status.has_value();
}
void RedriveTaskInfo::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int64_t RedriveTaskInfo::GetApproximateNumberOfMessagesMoved() const
{
	return m_ApproximateNumberOfMessagesMoved.value();
}

bool RedriveTaskInfo::HasApproximateNumberOfMessagesMoved() const
{
	return m_ApproximateNumberOfMessagesMoved.has_value();
}
void RedriveTaskInfo::SetApproximateNumberOfMessagesMoved(int64_t Value)
{
	m_ApproximateNumberOfMessagesMoved = Value;
}
int64_t RedriveTaskInfo::GetApproximateNumberOfMessagesToMove() const
{
	return m_ApproximateNumberOfMessagesToMove.value();
}

bool RedriveTaskInfo::HasApproximateNumberOfMessagesToMove() const
{
	return m_ApproximateNumberOfMessagesToMove.has_value();
}
void RedriveTaskInfo::SetApproximateNumberOfMessagesToMove(int64_t Value)
{
	m_ApproximateNumberOfMessagesToMove = Value;
}
int64_t RedriveTaskInfo::GetStartedTimestamp() const
{
	return m_StartedTimestamp.value();
}

bool RedriveTaskInfo::HasStartedTimestamp() const
{
	return m_StartedTimestamp.has_value();
}
void RedriveTaskInfo::SetStartedTimestamp(int64_t Value)
{
	m_StartedTimestamp = Value;
}
utility::string_t RedriveTaskInfo::GetFailureReason() const
{
	return m_FailureReason.value();
}

bool RedriveTaskInfo::HasFailureReason() const
{
	return m_FailureReason.has_value();
}
void RedriveTaskInfo::SetFailureReason(const utility::string_t& Value)
{
	m_FailureReason = Value;
}

SaveValidatedGacRequest::SaveValidatedGacRequest()
{
}
SaveValidatedGacRequest::~SaveValidatedGacRequest()
{
}

utility::string_t SaveValidatedGacRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_EnvVarName.has_value())
	{
		rapidjson::Value EnvVarNameValue(TypeToJsonValue(m_EnvVarName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("envVarName", EnvVarNameValue, JsonDoc.GetAllocator());
	}

	if (m_GacJson.has_value())
	{
		rapidjson::Value GacJsonValue(TypeToJsonValue(m_GacJson, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gacJson", GacJsonValue, JsonDoc.GetAllocator());
	}

	if (m_ValidationResult.has_value())
	{
		rapidjson::Value ValidationResultValue(TypeToJsonValue(m_ValidationResult, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("validationResult", ValidationResultValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SaveValidatedGacRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SaveValidatedGacRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("envVarName"))
	{
		const rapidjson::Value& EnvVarNameValue = JsonDoc["envVarName"];

		if (EnvVarNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnvVarNameValue, m_EnvVarName);
		}
	}

	if (JsonDoc.HasMember("gacJson"))
	{
		const rapidjson::Value& GacJsonValue = JsonDoc["gacJson"];

		if (GacJsonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GacJsonValue, m_GacJson);
		}
	}

	if (JsonDoc.HasMember("validationResult"))
	{
		const rapidjson::Value& ValidationResultValue = JsonDoc["validationResult"];

		if (ValidationResultValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValidationResultValue, m_ValidationResult);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member validationResult is null!");
		}
	}
}


utility::string_t SaveValidatedGacRequest::GetTenantName() const
{
	return m_TenantName.value();
}

bool SaveValidatedGacRequest::HasTenantName() const
{
	return m_TenantName.has_value();
}
void SaveValidatedGacRequest::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t SaveValidatedGacRequest::GetEnvVarName() const
{
	return m_EnvVarName.value();
}

bool SaveValidatedGacRequest::HasEnvVarName() const
{
	return m_EnvVarName.has_value();
}
void SaveValidatedGacRequest::SetEnvVarName(const utility::string_t& Value)
{
	m_EnvVarName = Value;
}
utility::string_t SaveValidatedGacRequest::GetGacJson() const
{
	return m_GacJson.value();
}

bool SaveValidatedGacRequest::HasGacJson() const
{
	return m_GacJson.has_value();
}
void SaveValidatedGacRequest::SetGacJson(const utility::string_t& Value)
{
	m_GacJson = Value;
}
std::shared_ptr<GacValidationResult> SaveValidatedGacRequest::GetValidationResult() const
{
	return m_ValidationResult.value();
}

bool SaveValidatedGacRequest::HasValidationResult() const
{
	return m_ValidationResult.has_value();
}
void SaveValidatedGacRequest::SetValidationResult(const std::shared_ptr<GacValidationResult>& Value)
{
	m_ValidationResult = Value;
}

SequenceDto::SequenceDto()
{
}
SequenceDto::~SequenceDto()
{
}

utility::string_t SequenceDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceType.has_value())
	{
		rapidjson::Value ReferenceTypeValue(TypeToJsonValue(m_ReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceType", ReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceId.has_value())
	{
		rapidjson::Value ReferenceIdValue(TypeToJsonValue(m_ReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceId", ReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Metadata.has_value())
	{
		rapidjson::Value MetadataValue(TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("metadata", MetadataValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SequenceDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SequenceDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member key is null!");
		}
	}

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
		}
	}

	if (JsonDoc.HasMember("referenceType"))
	{
		const rapidjson::Value& ReferenceTypeValue = JsonDoc["referenceType"];

		if (ReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceTypeValue, m_ReferenceType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member referenceType is null!");
		}
	}

	if (JsonDoc.HasMember("referenceId"))
	{
		const rapidjson::Value& ReferenceIdValue = JsonDoc["referenceId"];

		if (ReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReferenceIdValue, m_ReferenceId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member referenceId is null!");
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata);
		}
	}
}


utility::string_t SequenceDto::GetId() const
{
	return m_Id.value();
}

bool SequenceDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SequenceDto::GetKey() const
{
	return m_Key.value();
}

bool SequenceDto::HasKey() const
{
	return m_Key.has_value();
}
void SequenceDto::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
const std::vector<utility::string_t>& SequenceDto::GetItems() const
{
	return m_Items.value();
}

bool SequenceDto::HasItems() const
{
	return m_Items.has_value();
}
void SequenceDto::SetItems(const std::vector<utility::string_t>& Value)
{
	m_Items = Value;
}
utility::string_t SequenceDto::GetReferenceType() const
{
	return m_ReferenceType.value();
}

bool SequenceDto::HasReferenceType() const
{
	return m_ReferenceType.has_value();
}
void SequenceDto::SetReferenceType(const utility::string_t& Value)
{
	m_ReferenceType = Value;
}
utility::string_t SequenceDto::GetReferenceId() const
{
	return m_ReferenceId.value();
}

bool SequenceDto::HasReferenceId() const
{
	return m_ReferenceId.has_value();
}
void SequenceDto::SetReferenceId(const utility::string_t& Value)
{
	m_ReferenceId = Value;
}
const std::map<utility::string_t, utility::string_t>& SequenceDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool SequenceDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void SequenceDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}

SequenceDtoDataPage::SequenceDtoDataPage()
{
}
SequenceDtoDataPage::~SequenceDtoDataPage()
{
}

utility::string_t SequenceDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SequenceDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SequenceDtoDataPage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<SequenceDto>>& SequenceDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SequenceDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SequenceDtoDataPage::SetItems(const std::vector<std::shared_ptr<SequenceDto>>& Value)
{
	m_Items = Value;
}
int32_t SequenceDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SequenceDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SequenceDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SequenceDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SequenceDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SequenceDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SequenceDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SequenceDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SequenceDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SequenceDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SequenceDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SequenceDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ServiceRequest::ServiceRequest()
{
}
ServiceRequest::~ServiceRequest()
{
}

utility::string_t ServiceRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ServiceName.has_value())
	{
		rapidjson::Value ServiceNameValue(TypeToJsonValue(m_ServiceName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceName", ServiceNameValue, JsonDoc.GetAllocator());
	}

	if (m_OperationName.has_value())
	{
		rapidjson::Value OperationNameValue(TypeToJsonValue(m_OperationName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operationName", OperationNameValue, JsonDoc.GetAllocator());
	}

	if (m_Help.has_value())
	{
		rapidjson::Value HelpValue(TypeToJsonValue(m_Help, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("help", HelpValue, JsonDoc.GetAllocator());
	}

	if (m_Parameters.has_value())
	{
		rapidjson::Value ParametersValue(TypeToJsonValue(m_Parameters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parameters", ParametersValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ServiceRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ServiceRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member serviceName is null!");
		}
	}

	if (JsonDoc.HasMember("operationName"))
	{
		const rapidjson::Value& OperationNameValue = JsonDoc["operationName"];

		if (OperationNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperationNameValue, m_OperationName);
		}
	}

	if (JsonDoc.HasMember("help"))
	{
		const rapidjson::Value& HelpValue = JsonDoc["help"];

		if (HelpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HelpValue, m_Help);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member help is null!");
		}
	}

	if (JsonDoc.HasMember("parameters"))
	{
		const rapidjson::Value& ParametersValue = JsonDoc["parameters"];

		if (ParametersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParametersValue, m_Parameters);
		}
	}
}


utility::string_t ServiceRequest::GetServiceName() const
{
	return m_ServiceName.value();
}

bool ServiceRequest::HasServiceName() const
{
	return m_ServiceName.has_value();
}
void ServiceRequest::SetServiceName(const utility::string_t& Value)
{
	m_ServiceName = Value;
}
utility::string_t ServiceRequest::GetOperationName() const
{
	return m_OperationName.value();
}

bool ServiceRequest::HasOperationName() const
{
	return m_OperationName.has_value();
}
void ServiceRequest::SetOperationName(const utility::string_t& Value)
{
	m_OperationName = Value;
}
bool ServiceRequest::GetHelp() const
{
	return m_Help.value();
}

bool ServiceRequest::HasHelp() const
{
	return m_Help.has_value();
}
void ServiceRequest::SetHelp(const bool& Value)
{
	m_Help = Value;
}
const std::map<utility::string_t, utility::string_t>& ServiceRequest::GetParameters() const
{
	return m_Parameters.value();
}

bool ServiceRequest::HasParameters() const
{
	return m_Parameters.has_value();
}
void ServiceRequest::SetParameters(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Parameters = Value;
}

ServiceResponse::ServiceResponse()
{
}
ServiceResponse::~ServiceResponse()
{
}

utility::string_t ServiceResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Success.has_value())
	{
		rapidjson::Value SuccessValue(TypeToJsonValue(m_Success, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("success", SuccessValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCode.has_value())
	{
		rapidjson::Value StatusCodeValue(TypeToJsonValue(m_StatusCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCode", StatusCodeValue, JsonDoc.GetAllocator());
	}

	if (m_StatusReason.has_value())
	{
		rapidjson::Value StatusReasonValue(TypeToJsonValue(m_StatusReason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusReason", StatusReasonValue, JsonDoc.GetAllocator());
	}

	if (m_ErrorCode.has_value())
	{
		rapidjson::Value ErrorCodeValue(TypeToJsonValue(m_ErrorCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("errorCode", ErrorCodeValue, JsonDoc.GetAllocator());
	}

	if (m_OperationResult.has_value())
	{
		rapidjson::Value OperationResultValue(TypeToJsonValue(m_OperationResult, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operationResult", OperationResultValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ServiceResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ServiceResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("success"))
	{
		const rapidjson::Value& SuccessValue = JsonDoc["success"];

		if (SuccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessValue, m_Success);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
		}
	}

	if (JsonDoc.HasMember("statusCode"))
	{
		const rapidjson::Value& StatusCodeValue = JsonDoc["statusCode"];

		if (StatusCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCodeValue, m_StatusCode);
		}
	}

	if (JsonDoc.HasMember("statusReason"))
	{
		const rapidjson::Value& StatusReasonValue = JsonDoc["statusReason"];

		if (StatusReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusReasonValue, m_StatusReason);
		}
	}

	if (JsonDoc.HasMember("errorCode"))
	{
		const rapidjson::Value& ErrorCodeValue = JsonDoc["errorCode"];

		if (ErrorCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorCodeValue, m_ErrorCode);
		}
	}

	if (JsonDoc.HasMember("operationResult"))
	{
		const rapidjson::Value& OperationResultValue = JsonDoc["operationResult"];

		if (OperationResultValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperationResultValue, m_OperationResult);
		}
	}
}


bool ServiceResponse::GetSuccess() const
{
	return m_Success.value();
}

bool ServiceResponse::HasSuccess() const
{
	return m_Success.has_value();
}
void ServiceResponse::SetSuccess(const bool& Value)
{
	m_Success = Value;
}
int32_t ServiceResponse::GetStatusCode() const
{
	return m_StatusCode.value();
}

bool ServiceResponse::HasStatusCode() const
{
	return m_StatusCode.has_value();
}
void ServiceResponse::SetStatusCode(int32_t Value)
{
	m_StatusCode = Value;
}
utility::string_t ServiceResponse::GetStatusReason() const
{
	return m_StatusReason.value();
}

bool ServiceResponse::HasStatusReason() const
{
	return m_StatusReason.has_value();
}
void ServiceResponse::SetStatusReason(const utility::string_t& Value)
{
	m_StatusReason = Value;
}
utility::string_t ServiceResponse::GetErrorCode() const
{
	return m_ErrorCode.value();
}

bool ServiceResponse::HasErrorCode() const
{
	return m_ErrorCode.has_value();
}
void ServiceResponse::SetErrorCode(const utility::string_t& Value)
{
	m_ErrorCode = Value;
}
std::shared_ptr<rapidjson::Document> ServiceResponse::GetOperationResult() const
{
	return m_OperationResult.value();
}

bool ServiceResponse::HasOperationResult() const
{
	return m_OperationResult.has_value();
}
void ServiceResponse::SetOperationResult(const std::shared_ptr<rapidjson::Document>& Value)
{
	m_OperationResult = Value;
}

ServiceVersionInfo::ServiceVersionInfo()
{
}
ServiceVersionInfo::~ServiceVersionInfo()
{
}

utility::string_t ServiceVersionInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ContainerVersion.has_value())
	{
		rapidjson::Value ContainerVersionValue(TypeToJsonValue(m_ContainerVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("containerVersion", ContainerVersionValue, JsonDoc.GetAllocator());
	}

	if (m_ServiceName.has_value())
	{
		rapidjson::Value ServiceNameValue(TypeToJsonValue(m_ServiceName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceName", ServiceNameValue, JsonDoc.GetAllocator());
	}

	if (m_ReverseProxy.has_value())
	{
		rapidjson::Value ReverseProxyValue(TypeToJsonValue(m_ReverseProxy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reverseProxy", ReverseProxyValue, JsonDoc.GetAllocator());
	}

	if (m_VersionedServices.has_value())
	{
		rapidjson::Value VersionedServicesValue(TypeToJsonValue(m_VersionedServices, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("versionedServices", VersionedServicesValue, JsonDoc.GetAllocator());
	}

	if (m_VersionedFunctions.has_value())
	{
		rapidjson::Value VersionedFunctionsValue(TypeToJsonValue(m_VersionedFunctions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("versionedFunctions", VersionedFunctionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ServiceVersionInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ServiceVersionInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("containerVersion"))
	{
		const rapidjson::Value& ContainerVersionValue = JsonDoc["containerVersion"];

		if (ContainerVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContainerVersionValue, m_ContainerVersion);
		}
	}

	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName);
		}
	}

	if (JsonDoc.HasMember("reverseProxy"))
	{
		const rapidjson::Value& ReverseProxyValue = JsonDoc["reverseProxy"];

		if (ReverseProxyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReverseProxyValue, m_ReverseProxy);
		}
	}

	if (JsonDoc.HasMember("versionedServices"))
	{
		const rapidjson::Value& VersionedServicesValue = JsonDoc["versionedServices"];

		if (VersionedServicesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionedServicesValue, m_VersionedServices);
		}
	}

	if (JsonDoc.HasMember("versionedFunctions"))
	{
		const rapidjson::Value& VersionedFunctionsValue = JsonDoc["versionedFunctions"];

		if (VersionedFunctionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionedFunctionsValue, m_VersionedFunctions);
		}
	}
}


utility::string_t ServiceVersionInfo::GetContainerVersion() const
{
	return m_ContainerVersion.value();
}

bool ServiceVersionInfo::HasContainerVersion() const
{
	return m_ContainerVersion.has_value();
}
void ServiceVersionInfo::SetContainerVersion(const utility::string_t& Value)
{
	m_ContainerVersion = Value;
}
utility::string_t ServiceVersionInfo::GetServiceName() const
{
	return m_ServiceName.value();
}

bool ServiceVersionInfo::HasServiceName() const
{
	return m_ServiceName.has_value();
}
void ServiceVersionInfo::SetServiceName(const utility::string_t& Value)
{
	m_ServiceName = Value;
}
utility::string_t ServiceVersionInfo::GetReverseProxy() const
{
	return m_ReverseProxy.value();
}

bool ServiceVersionInfo::HasReverseProxy() const
{
	return m_ReverseProxy.has_value();
}
void ServiceVersionInfo::SetReverseProxy(const utility::string_t& Value)
{
	m_ReverseProxy = Value;
}
const std::vector<std::shared_ptr<ControllerVersions>>& ServiceVersionInfo::GetVersionedServices() const
{
	return m_VersionedServices.value();
}

bool ServiceVersionInfo::HasVersionedServices() const
{
	return m_VersionedServices.has_value();
}
void ServiceVersionInfo::SetVersionedServices(const std::vector<std::shared_ptr<ControllerVersions>>& Value)
{
	m_VersionedServices = Value;
}
const std::vector<std::shared_ptr<NamedFunction>>& ServiceVersionInfo::GetVersionedFunctions() const
{
	return m_VersionedFunctions.value();
}

bool ServiceVersionInfo::HasVersionedFunctions() const
{
	return m_VersionedFunctions.has_value();
}
void ServiceVersionInfo::SetVersionedFunctions(const std::vector<std::shared_ptr<NamedFunction>>& Value)
{
	m_VersionedFunctions = Value;
}

SettingsDto::SettingsDto()
{
}
SettingsDto::~SettingsDto()
{
}

utility::string_t SettingsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Context.has_value())
	{
		rapidjson::Value ContextValue(TypeToJsonValue(m_Context, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("context", ContextValue, JsonDoc.GetAllocator());
	}

	if (m_Settings.has_value())
	{
		rapidjson::Value SettingsValue(TypeToJsonValue(m_Settings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("settings", SettingsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SettingsDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SettingsDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("context"))
	{
		const rapidjson::Value& ContextValue = JsonDoc["context"];

		if (ContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContextValue, m_Context);
		}
	}

	if (JsonDoc.HasMember("settings"))
	{
		const rapidjson::Value& SettingsValue = JsonDoc["settings"];

		if (SettingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SettingsValue, m_Settings);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member settings is null!");
		}
	}
}


utility::string_t SettingsDto::GetUserId() const
{
	return m_UserId.value();
}

bool SettingsDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t SettingsDto::GetContext() const
{
	return m_Context.value();
}

bool SettingsDto::HasContext() const
{
	return m_Context.has_value();
}
const std::map<utility::string_t, utility::string_t>& SettingsDto::GetSettings() const
{
	return m_Settings.value();
}

bool SettingsDto::HasSettings() const
{
	return m_Settings.has_value();
}
void SettingsDto::SetSettings(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Settings = Value;
}

ShopifyCartDto::ShopifyCartDto()
{
}
ShopifyCartDto::~ShopifyCartDto()
{
}

utility::string_t ShopifyCartDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ShopifyCartId.has_value())
	{
		rapidjson::Value ShopifyCartIdValue(TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartId", ShopifyCartIdValue, JsonDoc.GetAllocator());
	}

	if (m_Lines.has_value())
	{
		rapidjson::Value LinesValue(TypeToJsonValue(m_Lines, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lines", LinesValue, JsonDoc.GetAllocator());
	}

	if (m_TotalQuantity.has_value())
	{
		rapidjson::Value TotalQuantityValue(TypeToJsonValue(m_TotalQuantity, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalQuantity", TotalQuantityValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyCartDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("shopifyCartId"))
	{
		const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

		if (ShopifyCartIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
		}
	}

	if (JsonDoc.HasMember("lines"))
	{
		const rapidjson::Value& LinesValue = JsonDoc["lines"];

		if (LinesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinesValue, m_Lines);
		}
	}

	if (JsonDoc.HasMember("totalQuantity"))
	{
		const rapidjson::Value& TotalQuantityValue = JsonDoc["totalQuantity"];

		if (TotalQuantityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TotalQuantityValue, m_TotalQuantity);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member totalQuantity is null!");
		}
	}
}


utility::string_t ShopifyCartDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyCartDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t ShopifyCartDto::GetShopifyCartId() const
{
	return m_ShopifyCartId.value();
}

bool ShopifyCartDto::HasShopifyCartId() const
{
	return m_ShopifyCartId.has_value();
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartDto::GetLines() const
{
	return m_Lines.value();
}

bool ShopifyCartDto::HasLines() const
{
	return m_Lines.has_value();
}
void ShopifyCartDto::SetLines(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_Lines = Value;
}
int32_t ShopifyCartDto::GetTotalQuantity() const
{
	return m_TotalQuantity.value();
}

bool ShopifyCartDto::HasTotalQuantity() const
{
	return m_TotalQuantity.has_value();
}

ShopifyCartLineDto::ShopifyCartLineDto()
{
}
ShopifyCartLineDto::~ShopifyCartLineDto()
{
}

utility::string_t ShopifyCartLineDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ShopifyCartLineId.has_value())
	{
		rapidjson::Value ShopifyCartLineIdValue(TypeToJsonValue(m_ShopifyCartLineId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartLineId", ShopifyCartLineIdValue, JsonDoc.GetAllocator());
	}

	if (m_ProductVariantId.has_value())
	{
		rapidjson::Value ProductVariantIdValue(TypeToJsonValue(m_ProductVariantId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("productVariantId", ProductVariantIdValue, JsonDoc.GetAllocator());
	}

	if (m_Quantity.has_value())
	{
		rapidjson::Value QuantityValue(TypeToJsonValue(m_Quantity, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("quantity", QuantityValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartLineDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyCartLineDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("shopifyCartLineId"))
	{
		const rapidjson::Value& ShopifyCartLineIdValue = JsonDoc["shopifyCartLineId"];

		if (ShopifyCartLineIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartLineIdValue, m_ShopifyCartLineId);
		}
	}

	if (JsonDoc.HasMember("productVariantId"))
	{
		const rapidjson::Value& ProductVariantIdValue = JsonDoc["productVariantId"];

		if (ProductVariantIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductVariantIdValue, m_ProductVariantId);
		}
	}

	if (JsonDoc.HasMember("quantity"))
	{
		const rapidjson::Value& QuantityValue = JsonDoc["quantity"];

		if (QuantityValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuantityValue, m_Quantity);
		}
	}
}


utility::string_t ShopifyCartLineDto::GetShopifyCartLineId() const
{
	return m_ShopifyCartLineId.value();
}

bool ShopifyCartLineDto::HasShopifyCartLineId() const
{
	return m_ShopifyCartLineId.has_value();
}
void ShopifyCartLineDto::SetShopifyCartLineId(const utility::string_t& Value)
{
	m_ShopifyCartLineId = Value;
}
utility::string_t ShopifyCartLineDto::GetProductVariantId() const
{
	return m_ProductVariantId.value();
}

bool ShopifyCartLineDto::HasProductVariantId() const
{
	return m_ProductVariantId.has_value();
}
void ShopifyCartLineDto::SetProductVariantId(const utility::string_t& Value)
{
	m_ProductVariantId = Value;
}
int32_t ShopifyCartLineDto::GetQuantity() const
{
	return m_Quantity.value();
}

bool ShopifyCartLineDto::HasQuantity() const
{
	return m_Quantity.has_value();
}
void ShopifyCartLineDto::SetQuantity(int32_t Value)
{
	m_Quantity = Value;
}

ShopifyCartUpdateDto::ShopifyCartUpdateDto()
{
}
ShopifyCartUpdateDto::~ShopifyCartUpdateDto()
{
}

utility::string_t ShopifyCartUpdateDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ShopifyCartId.has_value())
	{
		rapidjson::Value ShopifyCartIdValue(TypeToJsonValue(m_ShopifyCartId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shopifyCartId", ShopifyCartIdValue, JsonDoc.GetAllocator());
	}

	if (m_AddLineCartChanges.has_value())
	{
		rapidjson::Value AddLineCartChangesValue(TypeToJsonValue(m_AddLineCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("addLineCartChanges", AddLineCartChangesValue, JsonDoc.GetAllocator());
	}

	if (m_RemoveLineCartChanges.has_value())
	{
		rapidjson::Value RemoveLineCartChangesValue(TypeToJsonValue(m_RemoveLineCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("removeLineCartChanges", RemoveLineCartChangesValue, JsonDoc.GetAllocator());
	}

	if (m_UpdateLineQtyCartChanges.has_value())
	{
		rapidjson::Value UpdateLineQtyCartChangesValue(TypeToJsonValue(m_UpdateLineQtyCartChanges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updateLineQtyCartChanges", UpdateLineQtyCartChangesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCartUpdateDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyCartUpdateDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("shopifyCartId"))
	{
		const rapidjson::Value& ShopifyCartIdValue = JsonDoc["shopifyCartId"];

		if (ShopifyCartIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShopifyCartIdValue, m_ShopifyCartId);
		}
	}

	if (JsonDoc.HasMember("addLineCartChanges"))
	{
		const rapidjson::Value& AddLineCartChangesValue = JsonDoc["addLineCartChanges"];

		if (AddLineCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddLineCartChangesValue, m_AddLineCartChanges);
		}
	}

	if (JsonDoc.HasMember("removeLineCartChanges"))
	{
		const rapidjson::Value& RemoveLineCartChangesValue = JsonDoc["removeLineCartChanges"];

		if (RemoveLineCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RemoveLineCartChangesValue, m_RemoveLineCartChanges);
		}
	}

	if (JsonDoc.HasMember("updateLineQtyCartChanges"))
	{
		const rapidjson::Value& UpdateLineQtyCartChangesValue = JsonDoc["updateLineQtyCartChanges"];

		if (UpdateLineQtyCartChangesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdateLineQtyCartChangesValue, m_UpdateLineQtyCartChanges);
		}
	}
}


utility::string_t ShopifyCartUpdateDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyCartUpdateDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t ShopifyCartUpdateDto::GetShopifyCartId() const
{
	return m_ShopifyCartId.value();
}

bool ShopifyCartUpdateDto::HasShopifyCartId() const
{
	return m_ShopifyCartId.has_value();
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetAddLineCartChanges() const
{
	return m_AddLineCartChanges.value();
}

bool ShopifyCartUpdateDto::HasAddLineCartChanges() const
{
	return m_AddLineCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetAddLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_AddLineCartChanges = Value;
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetRemoveLineCartChanges() const
{
	return m_RemoveLineCartChanges.value();
}

bool ShopifyCartUpdateDto::HasRemoveLineCartChanges() const
{
	return m_RemoveLineCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetRemoveLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_RemoveLineCartChanges = Value;
}
const std::vector<std::shared_ptr<ShopifyCartLineDto>>& ShopifyCartUpdateDto::GetUpdateLineQtyCartChanges() const
{
	return m_UpdateLineQtyCartChanges.value();
}

bool ShopifyCartUpdateDto::HasUpdateLineQtyCartChanges() const
{
	return m_UpdateLineQtyCartChanges.has_value();
}
void ShopifyCartUpdateDto::SetUpdateLineQtyCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value)
{
	m_UpdateLineQtyCartChanges = Value;
}

ShopifyCheckoutDto::ShopifyCheckoutDto()
{
}
ShopifyCheckoutDto::~ShopifyCheckoutDto()
{
}

utility::string_t ShopifyCheckoutDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_StoreUrl.has_value())
	{
		rapidjson::Value StoreUrlValue(TypeToJsonValue(m_StoreUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeUrl", StoreUrlValue, JsonDoc.GetAllocator());
	}

	if (m_CheckoutUrl.has_value())
	{
		rapidjson::Value CheckoutUrlValue(TypeToJsonValue(m_CheckoutUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkoutUrl", CheckoutUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyCheckoutDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyCheckoutDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("storeUrl"))
	{
		const rapidjson::Value& StoreUrlValue = JsonDoc["storeUrl"];

		if (StoreUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreUrlValue, m_StoreUrl);
		}
	}

	if (JsonDoc.HasMember("checkoutUrl"))
	{
		const rapidjson::Value& CheckoutUrlValue = JsonDoc["checkoutUrl"];

		if (CheckoutUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckoutUrlValue, m_CheckoutUrl);
		}
	}
}


utility::string_t ShopifyCheckoutDto::GetStoreUrl() const
{
	return m_StoreUrl.value();
}

bool ShopifyCheckoutDto::HasStoreUrl() const
{
	return m_StoreUrl.has_value();
}
utility::string_t ShopifyCheckoutDto::GetCheckoutUrl() const
{
	return m_CheckoutUrl.value();
}

bool ShopifyCheckoutDto::HasCheckoutUrl() const
{
	return m_CheckoutUrl.has_value();
}

ShopifyMoney::ShopifyMoney()
{
}
ShopifyMoney::~ShopifyMoney()
{
}

utility::string_t ShopifyMoney::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Amount.has_value())
	{
		rapidjson::Value AmountValue(TypeToJsonValue(m_Amount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("amount", AmountValue, JsonDoc.GetAllocator());
	}

	if (m_CurrencyCode.has_value())
	{
		rapidjson::Value CurrencyCodeValue(TypeToJsonValue(m_CurrencyCode, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currencyCode", CurrencyCodeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyMoney::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyMoney::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("amount"))
	{
		const rapidjson::Value& AmountValue = JsonDoc["amount"];

		if (AmountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AmountValue, m_Amount);
		}
	}

	if (JsonDoc.HasMember("currencyCode"))
	{
		const rapidjson::Value& CurrencyCodeValue = JsonDoc["currencyCode"];

		if (CurrencyCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrencyCodeValue, m_CurrencyCode);
		}
	}
}


double ShopifyMoney::GetAmount() const
{
	return m_Amount.value();
}

bool ShopifyMoney::HasAmount() const
{
	return m_Amount.has_value();
}
utility::string_t ShopifyMoney::GetCurrencyCode() const
{
	return m_CurrencyCode.value();
}

bool ShopifyMoney::HasCurrencyCode() const
{
	return m_CurrencyCode.has_value();
}

ShopifyProductDto::ShopifyProductDto()
{
}
ShopifyProductDto::~ShopifyProductDto()
{
}

utility::string_t ShopifyProductDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Variants.has_value())
	{
		rapidjson::Value VariantsValue(TypeToJsonValue(m_Variants, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("variants", VariantsValue, JsonDoc.GetAllocator());
	}

	if (m_Media.has_value())
	{
		rapidjson::Value MediaValue(TypeToJsonValue(m_Media, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("media", MediaValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyProductDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("variants"))
	{
		const rapidjson::Value& VariantsValue = JsonDoc["variants"];

		if (VariantsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VariantsValue, m_Variants);
		}
	}

	if (JsonDoc.HasMember("media"))
	{
		const rapidjson::Value& MediaValue = JsonDoc["media"];

		if (MediaValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MediaValue, m_Media);
		}
	}
}


utility::string_t ShopifyProductDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ShopifyProductDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t ShopifyProductDto::GetId() const
{
	return m_Id.value();
}

bool ShopifyProductDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyProductDto::GetTitle() const
{
	return m_Title.value();
}

bool ShopifyProductDto::HasTitle() const
{
	return m_Title.has_value();
}
utility::string_t ShopifyProductDto::GetDescription() const
{
	return m_Description.value();
}

bool ShopifyProductDto::HasDescription() const
{
	return m_Description.has_value();
}
const std::vector<utility::string_t>& ShopifyProductDto::GetTags() const
{
	return m_Tags.value();
}

bool ShopifyProductDto::HasTags() const
{
	return m_Tags.has_value();
}
const std::vector<std::shared_ptr<ShopifyProductVariants>>& ShopifyProductDto::GetVariants() const
{
	return m_Variants.value();
}

bool ShopifyProductDto::HasVariants() const
{
	return m_Variants.has_value();
}
const std::vector<std::shared_ptr<ShopifyProductMedia>>& ShopifyProductDto::GetMedia() const
{
	return m_Media.value();
}

bool ShopifyProductDto::HasMedia() const
{
	return m_Media.has_value();
}

ShopifyProductMedia::ShopifyProductMedia()
{
}
ShopifyProductMedia::~ShopifyProductMedia()
{
}

utility::string_t ShopifyProductMedia::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_MediaContentType.has_value())
	{
		rapidjson::Value MediaContentTypeValue(TypeToJsonValue(m_MediaContentType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mediaContentType", MediaContentTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Alt.has_value())
	{
		rapidjson::Value AltValue(TypeToJsonValue(m_Alt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("alt", AltValue, JsonDoc.GetAllocator());
	}

	if (m_Url.has_value())
	{
		rapidjson::Value UrlValue(TypeToJsonValue(m_Url, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("url", UrlValue, JsonDoc.GetAllocator());
	}

	if (m_Width.has_value())
	{
		rapidjson::Value WidthValue(TypeToJsonValue(m_Width, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("width", WidthValue, JsonDoc.GetAllocator());
	}

	if (m_Height.has_value())
	{
		rapidjson::Value HeightValue(TypeToJsonValue(m_Height, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("height", HeightValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductMedia::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyProductMedia::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("mediaContentType"))
	{
		const rapidjson::Value& MediaContentTypeValue = JsonDoc["mediaContentType"];

		if (MediaContentTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MediaContentTypeValue, m_MediaContentType);
		}
	}

	if (JsonDoc.HasMember("alt"))
	{
		const rapidjson::Value& AltValue = JsonDoc["alt"];

		if (AltValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AltValue, m_Alt);
		}
	}

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url);
		}
	}

	if (JsonDoc.HasMember("width"))
	{
		const rapidjson::Value& WidthValue = JsonDoc["width"];

		if (WidthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WidthValue, m_Width);
		}
	}

	if (JsonDoc.HasMember("height"))
	{
		const rapidjson::Value& HeightValue = JsonDoc["height"];

		if (HeightValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeightValue, m_Height);
		}
	}
}


utility::string_t ShopifyProductMedia::GetMediaContentType() const
{
	return m_MediaContentType.value();
}

bool ShopifyProductMedia::HasMediaContentType() const
{
	return m_MediaContentType.has_value();
}
utility::string_t ShopifyProductMedia::GetAlt() const
{
	return m_Alt.value();
}

bool ShopifyProductMedia::HasAlt() const
{
	return m_Alt.has_value();
}
utility::string_t ShopifyProductMedia::GetUrl() const
{
	return m_Url.value();
}

bool ShopifyProductMedia::HasUrl() const
{
	return m_Url.has_value();
}
int32_t ShopifyProductMedia::GetWidth() const
{
	return m_Width.value();
}

bool ShopifyProductMedia::HasWidth() const
{
	return m_Width.has_value();
}
int32_t ShopifyProductMedia::GetHeight() const
{
	return m_Height.value();
}

bool ShopifyProductMedia::HasHeight() const
{
	return m_Height.has_value();
}

ShopifyProductVariants::ShopifyProductVariants()
{
}
ShopifyProductVariants::~ShopifyProductVariants()
{
}

utility::string_t ShopifyProductVariants::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_AvailableForSale.has_value())
	{
		rapidjson::Value AvailableForSaleValue(TypeToJsonValue(m_AvailableForSale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("availableForSale", AvailableForSaleValue, JsonDoc.GetAllocator());
	}

	if (m_QuantityAvailable.has_value())
	{
		rapidjson::Value QuantityAvailableValue(TypeToJsonValue(m_QuantityAvailable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("quantityAvailable", QuantityAvailableValue, JsonDoc.GetAllocator());
	}

	if (m_Image.has_value())
	{
		rapidjson::Value ImageValue(TypeToJsonValue(m_Image, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("image", ImageValue, JsonDoc.GetAllocator());
	}

	if (m_SelectedOptions.has_value())
	{
		rapidjson::Value SelectedOptionsValue(TypeToJsonValue(m_SelectedOptions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("selectedOptions", SelectedOptionsValue, JsonDoc.GetAllocator());
	}

	if (m_UnitPrice.has_value())
	{
		rapidjson::Value UnitPriceValue(TypeToJsonValue(m_UnitPrice, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("unitPrice", UnitPriceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyProductVariants::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyProductVariants::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("availableForSale"))
	{
		const rapidjson::Value& AvailableForSaleValue = JsonDoc["availableForSale"];

		if (AvailableForSaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AvailableForSaleValue, m_AvailableForSale);
		}
	}

	if (JsonDoc.HasMember("quantityAvailable"))
	{
		const rapidjson::Value& QuantityAvailableValue = JsonDoc["quantityAvailable"];

		if (QuantityAvailableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QuantityAvailableValue, m_QuantityAvailable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member quantityAvailable is null!");
		}
	}

	if (JsonDoc.HasMember("image"))
	{
		const rapidjson::Value& ImageValue = JsonDoc["image"];

		if (ImageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageValue, m_Image);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member image is null!");
		}
	}

	if (JsonDoc.HasMember("selectedOptions"))
	{
		const rapidjson::Value& SelectedOptionsValue = JsonDoc["selectedOptions"];

		if (SelectedOptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SelectedOptionsValue, m_SelectedOptions);
		}
	}

	if (JsonDoc.HasMember("unitPrice"))
	{
		const rapidjson::Value& UnitPriceValue = JsonDoc["unitPrice"];

		if (UnitPriceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UnitPriceValue, m_UnitPrice);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member unitPrice is null!");
		}
	}
}


utility::string_t ShopifyProductVariants::GetId() const
{
	return m_Id.value();
}

bool ShopifyProductVariants::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyProductVariants::GetTitle() const
{
	return m_Title.value();
}

bool ShopifyProductVariants::HasTitle() const
{
	return m_Title.has_value();
}
bool ShopifyProductVariants::GetAvailableForSale() const
{
	return m_AvailableForSale.value();
}

bool ShopifyProductVariants::HasAvailableForSale() const
{
	return m_AvailableForSale.has_value();
}
int32_t ShopifyProductVariants::GetQuantityAvailable() const
{
	return m_QuantityAvailable.value();
}

bool ShopifyProductVariants::HasQuantityAvailable() const
{
	return m_QuantityAvailable.has_value();
}
std::shared_ptr<ShopifyProductMedia> ShopifyProductVariants::GetImage() const
{
	return m_Image.value();
}

bool ShopifyProductVariants::HasImage() const
{
	return m_Image.has_value();
}
void ShopifyProductVariants::SetImage(const std::shared_ptr<ShopifyProductMedia>& Value)
{
	m_Image = Value;
}
const std::vector<std::shared_ptr<ShopifyVariantOption>>& ShopifyProductVariants::GetSelectedOptions() const
{
	return m_SelectedOptions.value();
}

bool ShopifyProductVariants::HasSelectedOptions() const
{
	return m_SelectedOptions.has_value();
}
std::shared_ptr<ShopifyMoney> ShopifyProductVariants::GetUnitPrice() const
{
	return m_UnitPrice.value();
}

bool ShopifyProductVariants::HasUnitPrice() const
{
	return m_UnitPrice.has_value();
}
void ShopifyProductVariants::SetUnitPrice(const std::shared_ptr<ShopifyMoney>& Value)
{
	m_UnitPrice = Value;
}

ShopifyStorefrontDto::ShopifyStorefrontDto()
{
}
ShopifyStorefrontDto::~ShopifyStorefrontDto()
{
}

utility::string_t ShopifyStorefrontDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_StoreName.has_value())
	{
		rapidjson::Value StoreNameValue(TypeToJsonValue(m_StoreName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeName", StoreNameValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceOwnerId.has_value())
	{
		rapidjson::Value SpaceOwnerIdValue(TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceOwnerId", SpaceOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsEcommerceActive.has_value())
	{
		rapidjson::Value IsEcommerceActiveValue(TypeToJsonValue(m_IsEcommerceActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isEcommerceActive", IsEcommerceActiveValue, JsonDoc.GetAllocator());
	}

	if (m_PrivateAccessToken.has_value())
	{
		rapidjson::Value PrivateAccessTokenValue(TypeToJsonValue(m_PrivateAccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("privateAccessToken", PrivateAccessTokenValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyStorefrontDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyStorefrontDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("storeName"))
	{
		const rapidjson::Value& StoreNameValue = JsonDoc["storeName"];

		if (StoreNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreNameValue, m_StoreName);
		}
	}

	if (JsonDoc.HasMember("spaceOwnerId"))
	{
		const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

		if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("isEcommerceActive"))
	{
		const rapidjson::Value& IsEcommerceActiveValue = JsonDoc["isEcommerceActive"];

		if (IsEcommerceActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsEcommerceActiveValue, m_IsEcommerceActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isEcommerceActive is null!");
		}
	}

	if (JsonDoc.HasMember("privateAccessToken"))
	{
		const rapidjson::Value& PrivateAccessTokenValue = JsonDoc["privateAccessToken"];

		if (PrivateAccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrivateAccessTokenValue, m_PrivateAccessToken);
		}
	}
}


utility::string_t ShopifyStorefrontDto::GetId() const
{
	return m_Id.value();
}

bool ShopifyStorefrontDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ShopifyStorefrontDto::GetStoreName() const
{
	return m_StoreName.value();
}

bool ShopifyStorefrontDto::HasStoreName() const
{
	return m_StoreName.has_value();
}
void ShopifyStorefrontDto::SetStoreName(const utility::string_t& Value)
{
	m_StoreName = Value;
}
utility::string_t ShopifyStorefrontDto::GetSpaceOwnerId() const
{
	return m_SpaceOwnerId.value();
}

bool ShopifyStorefrontDto::HasSpaceOwnerId() const
{
	return m_SpaceOwnerId.has_value();
}
utility::string_t ShopifyStorefrontDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool ShopifyStorefrontDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
bool ShopifyStorefrontDto::GetIsEcommerceActive() const
{
	return m_IsEcommerceActive.value();
}

bool ShopifyStorefrontDto::HasIsEcommerceActive() const
{
	return m_IsEcommerceActive.has_value();
}
void ShopifyStorefrontDto::SetIsEcommerceActive(const bool& Value)
{
	m_IsEcommerceActive = Value;
}
utility::string_t ShopifyStorefrontDto::GetPrivateAccessToken() const
{
	return m_PrivateAccessToken.value();
}

bool ShopifyStorefrontDto::HasPrivateAccessToken() const
{
	return m_PrivateAccessToken.has_value();
}
void ShopifyStorefrontDto::SetPrivateAccessToken(const utility::string_t& Value)
{
	m_PrivateAccessToken = Value;
}

ShopifyStorefrontDtoDataPage::ShopifyStorefrontDtoDataPage()
{
}
ShopifyStorefrontDtoDataPage::~ShopifyStorefrontDtoDataPage()
{
}

utility::string_t ShopifyStorefrontDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyStorefrontDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyStorefrontDtoDataPage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& ShopifyStorefrontDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ShopifyStorefrontDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItems(const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& Value)
{
	m_Items = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ShopifyStorefrontDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ShopifyStorefrontDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ShopifyStorefrontDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ShopifyStorefrontDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ShopifyStorefrontDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ShopifyStorefrontDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ShopifyStorefrontDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ShopifyStorefrontDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ShopifyStorefrontDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ShopifyStorefrontValidationRequest::ShopifyStorefrontValidationRequest()
{
}
ShopifyStorefrontValidationRequest::~ShopifyStorefrontValidationRequest()
{
}

utility::string_t ShopifyStorefrontValidationRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_StoreName.has_value())
	{
		rapidjson::Value StoreNameValue(TypeToJsonValue(m_StoreName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("storeName", StoreNameValue, JsonDoc.GetAllocator());
	}

	if (m_PrivateAccessToken.has_value())
	{
		rapidjson::Value PrivateAccessTokenValue(TypeToJsonValue(m_PrivateAccessToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("privateAccessToken", PrivateAccessTokenValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyStorefrontValidationRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyStorefrontValidationRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("storeName"))
	{
		const rapidjson::Value& StoreNameValue = JsonDoc["storeName"];

		if (StoreNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StoreNameValue, m_StoreName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member storeName is null!");
		}
	}

	if (JsonDoc.HasMember("privateAccessToken"))
	{
		const rapidjson::Value& PrivateAccessTokenValue = JsonDoc["privateAccessToken"];

		if (PrivateAccessTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrivateAccessTokenValue, m_PrivateAccessToken);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member privateAccessToken is null!");
		}
	}
}


utility::string_t ShopifyStorefrontValidationRequest::GetStoreName() const
{
	return m_StoreName.value();
}

bool ShopifyStorefrontValidationRequest::HasStoreName() const
{
	return m_StoreName.has_value();
}
void ShopifyStorefrontValidationRequest::SetStoreName(const utility::string_t& Value)
{
	m_StoreName = Value;
}
utility::string_t ShopifyStorefrontValidationRequest::GetPrivateAccessToken() const
{
	return m_PrivateAccessToken.value();
}

bool ShopifyStorefrontValidationRequest::HasPrivateAccessToken() const
{
	return m_PrivateAccessToken.has_value();
}
void ShopifyStorefrontValidationRequest::SetPrivateAccessToken(const utility::string_t& Value)
{
	m_PrivateAccessToken = Value;
}

ShopifyVariantOption::ShopifyVariantOption()
{
}
ShopifyVariantOption::~ShopifyVariantOption()
{
}

utility::string_t ShopifyVariantOption::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OptionName.has_value())
	{
		rapidjson::Value OptionNameValue(TypeToJsonValue(m_OptionName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionName", OptionNameValue, JsonDoc.GetAllocator());
	}

	if (m_OptionValue.has_value())
	{
		rapidjson::Value OptionValueValue(TypeToJsonValue(m_OptionValue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("optionValue", OptionValueValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ShopifyVariantOption::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ShopifyVariantOption::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("optionName"))
	{
		const rapidjson::Value& OptionNameValue = JsonDoc["optionName"];

		if (OptionNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionNameValue, m_OptionName);
		}
	}

	if (JsonDoc.HasMember("optionValue"))
	{
		const rapidjson::Value& OptionValueValue = JsonDoc["optionValue"];

		if (OptionValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionValueValue, m_OptionValue);
		}
	}
}


utility::string_t ShopifyVariantOption::GetOptionName() const
{
	return m_OptionName.value();
}

bool ShopifyVariantOption::HasOptionName() const
{
	return m_OptionName.has_value();
}
utility::string_t ShopifyVariantOption::GetOptionValue() const
{
	return m_OptionValue.value();
}

bool ShopifyVariantOption::HasOptionValue() const
{
	return m_OptionValue.has_value();
}

SliceCompatibility::SliceCompatibility()
{
}
SliceCompatibility::~SliceCompatibility()
{
}

utility::string_t SliceCompatibility::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_MinimumVersion.has_value())
	{
		rapidjson::Value MinimumVersionValue(TypeToJsonValue(m_MinimumVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("minimumVersion", MinimumVersionValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SliceCompatibility::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SliceCompatibility::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("minimumVersion"))
	{
		const rapidjson::Value& MinimumVersionValue = JsonDoc["minimumVersion"];

		if (MinimumVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinimumVersionValue, m_MinimumVersion);
		}
	}
}


utility::string_t SliceCompatibility::GetMinimumVersion() const
{
	return m_MinimumVersion.value();
}

bool SliceCompatibility::HasMinimumVersion() const
{
	return m_MinimumVersion.has_value();
}
void SliceCompatibility::SetMinimumVersion(const utility::string_t& Value)
{
	m_MinimumVersion = Value;
}

SpaceCheckpointOptions::SpaceCheckpointOptions()
{
}
SpaceCheckpointOptions::~SpaceCheckpointOptions()
{
}

utility::string_t SpaceCheckpointOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubi.has_value())
	{
		rapidjson::Value IncludeMusubiValue(TypeToJsonValue(m_IncludeMusubi, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubi", IncludeMusubiValue, JsonDoc.GetAllocator());
	}

	if (m_Format.has_value())
	{
		rapidjson::Value FormatValue(TypeToJsonValue(m_Format, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("format", FormatValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceCheckpointOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceCheckpointOptions::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("includeMusubi"))
	{
		const rapidjson::Value& IncludeMusubiValue = JsonDoc["includeMusubi"];

		if (IncludeMusubiValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiValue, m_IncludeMusubi);
		}
	}

	if (JsonDoc.HasMember("format"))
	{
		const rapidjson::Value& FormatValue = JsonDoc["format"];

		if (FormatValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FormatValue, m_Format);
		}
	}
}


utility::string_t SpaceCheckpointOptions::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceCheckpointOptions::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
void SpaceCheckpointOptions::SetSpaceId(const utility::string_t& Value)
{
	m_SpaceId = Value;
}
utility::string_t SpaceCheckpointOptions::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceCheckpointOptions::HasExportId() const
{
	return m_ExportId.has_value();
}
void SpaceCheckpointOptions::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
utility::string_t SpaceCheckpointOptions::GetTenantName() const
{
	return m_TenantName.value();
}

bool SpaceCheckpointOptions::HasTenantName() const
{
	return m_TenantName.has_value();
}
void SpaceCheckpointOptions::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
bool SpaceCheckpointOptions::GetIncludeMusubi() const
{
	return m_IncludeMusubi.value();
}

bool SpaceCheckpointOptions::HasIncludeMusubi() const
{
	return m_IncludeMusubi.has_value();
}
void SpaceCheckpointOptions::SetIncludeMusubi(const bool& Value)
{
	m_IncludeMusubi = Value;
}
utility::string_t SpaceCheckpointOptions::GetFormat() const
{
	return m_Format.value();
}

bool SpaceCheckpointOptions::HasFormat() const
{
	return m_Format.has_value();
}
void SpaceCheckpointOptions::SetFormat(const utility::string_t& Value)
{
	m_Format = Value;
}

SpaceCheckpointResponse::SpaceCheckpointResponse()
{
}
SpaceCheckpointResponse::~SpaceCheckpointResponse()
{
}

utility::string_t SpaceCheckpointResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_CheckpointVersion.has_value())
	{
		rapidjson::Value CheckpointVersionValue(TypeToJsonValue(m_CheckpointVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkpointVersion", CheckpointVersionValue, JsonDoc.GetAllocator());
	}

	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_Stats.has_value())
	{
		rapidjson::Value StatsValue(TypeToJsonValue(m_Stats, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("stats", StatsValue, JsonDoc.GetAllocator());
	}

	if (m_CheckpointAsset.has_value())
	{
		rapidjson::Value CheckpointAssetValue(TypeToJsonValue(m_CheckpointAsset, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkpointAsset", CheckpointAssetValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceCheckpointResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceCheckpointResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("checkpointVersion"))
	{
		const rapidjson::Value& CheckpointVersionValue = JsonDoc["checkpointVersion"];

		if (CheckpointVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckpointVersionValue, m_CheckpointVersion);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member checkpointVersion is null!");
		}
	}

	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("stats"))
	{
		const rapidjson::Value& StatsValue = JsonDoc["stats"];

		if (StatsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatsValue, m_Stats);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member stats is null!");
		}
	}

	if (JsonDoc.HasMember("checkpointAsset"))
	{
		const rapidjson::Value& CheckpointAssetValue = JsonDoc["checkpointAsset"];

		if (CheckpointAssetValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckpointAssetValue, m_CheckpointAsset);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member checkpointAsset is null!");
		}
	}
}


utility::string_t SpaceCheckpointResponse::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceCheckpointResponse::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
void SpaceCheckpointResponse::SetSpaceId(const utility::string_t& Value)
{
	m_SpaceId = Value;
}
int32_t SpaceCheckpointResponse::GetCheckpointVersion() const
{
	return m_CheckpointVersion.value();
}

bool SpaceCheckpointResponse::HasCheckpointVersion() const
{
	return m_CheckpointVersion.has_value();
}
void SpaceCheckpointResponse::SetCheckpointVersion(int32_t Value)
{
	m_CheckpointVersion = Value;
}
utility::string_t SpaceCheckpointResponse::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceCheckpointResponse::HasExportId() const
{
	return m_ExportId.has_value();
}
void SpaceCheckpointResponse::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
std::shared_ptr<CheckpointStats> SpaceCheckpointResponse::GetStats() const
{
	return m_Stats.value();
}

bool SpaceCheckpointResponse::HasStats() const
{
	return m_Stats.has_value();
}
void SpaceCheckpointResponse::SetStats(const std::shared_ptr<CheckpointStats>& Value)
{
	m_Stats = Value;
}
std::shared_ptr<AssetDetailDto> SpaceCheckpointResponse::GetCheckpointAsset() const
{
	return m_CheckpointAsset.value();
}

bool SpaceCheckpointResponse::HasCheckpointAsset() const
{
	return m_CheckpointAsset.has_value();
}
void SpaceCheckpointResponse::SetCheckpointAsset(const std::shared_ptr<AssetDetailDto>& Value)
{
	m_CheckpointAsset = Value;
}

SpaceEventDto::SpaceEventDto()
{
}
SpaceEventDto::~SpaceEventDto()
{
}

utility::string_t SpaceEventDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceOwnerId.has_value())
	{
		rapidjson::Value SpaceOwnerIdValue(TypeToJsonValue(m_SpaceOwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceOwnerId", SpaceOwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventId.has_value())
	{
		rapidjson::Value VendorEventIdValue(TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventId", VendorEventIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventUri.has_value())
	{
		rapidjson::Value VendorEventUriValue(TypeToJsonValue(m_VendorEventUri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventUri", VendorEventUriValue, JsonDoc.GetAllocator());
	}

	if (m_IsTicketingActive.has_value())
	{
		rapidjson::Value IsTicketingActiveValue(TypeToJsonValue(m_IsTicketingActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isTicketingActive", IsTicketingActiveValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceEventDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceEventDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("spaceOwnerId"))
	{
		const rapidjson::Value& SpaceOwnerIdValue = JsonDoc["spaceOwnerId"];

		if (SpaceOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceOwnerIdValue, m_SpaceOwnerId);
		}
	}

	if (JsonDoc.HasMember("vendorEventId"))
	{
		const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

		if (VendorEventIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventIdValue, m_VendorEventId);
		}
	}

	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
		}
	}

	if (JsonDoc.HasMember("vendorEventUri"))
	{
		const rapidjson::Value& VendorEventUriValue = JsonDoc["vendorEventUri"];

		if (VendorEventUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventUriValue, m_VendorEventUri);
		}
	}

	if (JsonDoc.HasMember("isTicketingActive"))
	{
		const rapidjson::Value& IsTicketingActiveValue = JsonDoc["isTicketingActive"];

		if (IsTicketingActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsTicketingActiveValue, m_IsTicketingActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isTicketingActive is null!");
		}
	}
}


utility::string_t SpaceEventDto::GetId() const
{
	return m_Id.value();
}

bool SpaceEventDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SpaceEventDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceEventDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceEventDto::GetSpaceOwnerId() const
{
	return m_SpaceOwnerId.value();
}

bool SpaceEventDto::HasSpaceOwnerId() const
{
	return m_SpaceOwnerId.has_value();
}
utility::string_t SpaceEventDto::GetVendorEventId() const
{
	return m_VendorEventId.value();
}

bool SpaceEventDto::HasVendorEventId() const
{
	return m_VendorEventId.has_value();
}
void SpaceEventDto::SetVendorEventId(const utility::string_t& Value)
{
	m_VendorEventId = Value;
}
utility::string_t SpaceEventDto::GetVendorName() const
{
	return m_VendorName.value();
}

bool SpaceEventDto::HasVendorName() const
{
	return m_VendorName.has_value();
}
void SpaceEventDto::SetVendorName(const utility::string_t& Value)
{
	m_VendorName = Value;
}
utility::string_t SpaceEventDto::GetVendorEventUri() const
{
	return m_VendorEventUri.value();
}

bool SpaceEventDto::HasVendorEventUri() const
{
	return m_VendorEventUri.has_value();
}
void SpaceEventDto::SetVendorEventUri(const utility::string_t& Value)
{
	m_VendorEventUri = Value;
}
bool SpaceEventDto::GetIsTicketingActive() const
{
	return m_IsTicketingActive.value();
}

bool SpaceEventDto::HasIsTicketingActive() const
{
	return m_IsTicketingActive.has_value();
}
void SpaceEventDto::SetIsTicketingActive(const bool& Value)
{
	m_IsTicketingActive = Value;
}

SpaceEventDtoDataPage::SpaceEventDtoDataPage()
{
}
SpaceEventDtoDataPage::~SpaceEventDtoDataPage()
{
}

utility::string_t SpaceEventDtoDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceEventDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceEventDtoDataPage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<SpaceEventDto>>& SpaceEventDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SpaceEventDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SpaceEventDtoDataPage::SetItems(const std::vector<std::shared_ptr<SpaceEventDto>>& Value)
{
	m_Items = Value;
}
int32_t SpaceEventDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SpaceEventDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SpaceEventDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SpaceEventDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SpaceEventDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SpaceEventDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SpaceEventDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SpaceEventDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SpaceEventDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SpaceEventDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SpaceEventDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SpaceEventDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

SpaceExportDto::SpaceExportDto()
{
}
SpaceExportDto::~SpaceExportDto()
{
}

utility::string_t SpaceExportDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserRoles.has_value())
	{
		rapidjson::Value RequestUserRolesValue(TypeToJsonValue(m_RequestUserRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserRoles", RequestUserRolesValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubiGeneratedFiles.has_value())
	{
		rapidjson::Value IncludeMusubiGeneratedFilesValue(TypeToJsonValue(m_IncludeMusubiGeneratedFiles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubiGeneratedFiles", IncludeMusubiGeneratedFilesValue, JsonDoc.GetAllocator());
	}

	if (m_RaiseCompletion.has_value())
	{
		rapidjson::Value RaiseCompletionValue(TypeToJsonValue(m_RaiseCompletion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("raiseCompletion", RaiseCompletionValue, JsonDoc.GetAllocator());
	}

	if (m_PassthroughData.has_value())
	{
		rapidjson::Value PassthroughDataValue(TypeToJsonValue(m_PassthroughData, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("passthroughData", PassthroughDataValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceExportDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceExportDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("requestUserRoles"))
	{
		const rapidjson::Value& RequestUserRolesValue = JsonDoc["requestUserRoles"];

		if (RequestUserRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserRolesValue, m_RequestUserRoles);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedFiles"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedFilesValue = JsonDoc["includeMusubiGeneratedFiles"];

		if (IncludeMusubiGeneratedFilesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedFilesValue, m_IncludeMusubiGeneratedFiles);
		}
	}

	if (JsonDoc.HasMember("raiseCompletion"))
	{
		const rapidjson::Value& RaiseCompletionValue = JsonDoc["raiseCompletion"];

		if (RaiseCompletionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RaiseCompletionValue, m_RaiseCompletion);
		}
	}

	if (JsonDoc.HasMember("passthroughData"))
	{
		const rapidjson::Value& PassthroughDataValue = JsonDoc["passthroughData"];

		if (PassthroughDataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PassthroughDataValue, m_PassthroughData);
		}
	}
}


utility::string_t SpaceExportDto::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceExportDto::HasExportId() const
{
	return m_ExportId.has_value();
}
utility::string_t SpaceExportDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceExportDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceExportDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool SpaceExportDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
bool SpaceExportDto::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool SpaceExportDto::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void SpaceExportDto::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t SpaceExportDto::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool SpaceExportDto::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
void SpaceExportDto::SetRequestUserId(const utility::string_t& Value)
{
	m_RequestUserId = Value;
}
const std::vector<utility::string_t>& SpaceExportDto::GetRequestUserRoles() const
{
	return m_RequestUserRoles.value();
}

bool SpaceExportDto::HasRequestUserRoles() const
{
	return m_RequestUserRoles.has_value();
}
void SpaceExportDto::SetRequestUserRoles(const std::vector<utility::string_t>& Value)
{
	m_RequestUserRoles = Value;
}
bool SpaceExportDto::GetIncludeMusubiGeneratedFiles() const
{
	return m_IncludeMusubiGeneratedFiles.value();
}

bool SpaceExportDto::HasIncludeMusubiGeneratedFiles() const
{
	return m_IncludeMusubiGeneratedFiles.has_value();
}
void SpaceExportDto::SetIncludeMusubiGeneratedFiles(const bool& Value)
{
	m_IncludeMusubiGeneratedFiles = Value;
}
bool SpaceExportDto::GetRaiseCompletion() const
{
	return m_RaiseCompletion.value();
}

bool SpaceExportDto::HasRaiseCompletion() const
{
	return m_RaiseCompletion.has_value();
}
void SpaceExportDto::SetRaiseCompletion(const bool& Value)
{
	m_RaiseCompletion = Value;
}
const std::map<utility::string_t, utility::string_t>& SpaceExportDto::GetPassthroughData() const
{
	return m_PassthroughData.value();
}

bool SpaceExportDto::HasPassthroughData() const
{
	return m_PassthroughData.has_value();
}
void SpaceExportDto::SetPassthroughData(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_PassthroughData = Value;
}

SpaceImportDto::SpaceImportDto()
{
}
SpaceImportDto::~SpaceImportDto()
{
}

utility::string_t SpaceImportDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescingId.has_value())
	{
		rapidjson::Value CoalescingIdValue(TypeToJsonValue(m_CoalescingId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescingId", CoalescingIdValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_RequestUserId.has_value())
	{
		rapidjson::Value RequestUserIdValue(TypeToJsonValue(m_RequestUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestUserId", RequestUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RequestRoles.has_value())
	{
		rapidjson::Value RequestRolesValue(TypeToJsonValue(m_RequestRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestRoles", RequestRolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceImportDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceImportDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("coalescingId"))
	{
		const rapidjson::Value& CoalescingIdValue = JsonDoc["coalescingId"];

		if (CoalescingIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescingIdValue, m_CoalescingId);
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
	}

	if (JsonDoc.HasMember("requestUserId"))
	{
		const rapidjson::Value& RequestUserIdValue = JsonDoc["requestUserId"];

		if (RequestUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestUserIdValue, m_RequestUserId);
		}
	}

	if (JsonDoc.HasMember("requestRoles"))
	{
		const rapidjson::Value& RequestRolesValue = JsonDoc["requestRoles"];

		if (RequestRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestRolesValue, m_RequestRoles);
		}
	}
}


utility::string_t SpaceImportDto::GetExportId() const
{
	return m_ExportId.value();
}

bool SpaceImportDto::HasExportId() const
{
	return m_ExportId.has_value();
}
utility::string_t SpaceImportDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceImportDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
utility::string_t SpaceImportDto::GetCoalescingId() const
{
	return m_CoalescingId.value();
}

bool SpaceImportDto::HasCoalescingId() const
{
	return m_CoalescingId.has_value();
}
bool SpaceImportDto::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool SpaceImportDto::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void SpaceImportDto::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t SpaceImportDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool SpaceImportDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
utility::string_t SpaceImportDto::GetRequestUserId() const
{
	return m_RequestUserId.value();
}

bool SpaceImportDto::HasRequestUserId() const
{
	return m_RequestUserId.has_value();
}
void SpaceImportDto::SetRequestUserId(const utility::string_t& Value)
{
	m_RequestUserId = Value;
}
const std::vector<utility::string_t>& SpaceImportDto::GetRequestRoles() const
{
	return m_RequestRoles.value();
}

bool SpaceImportDto::HasRequestRoles() const
{
	return m_RequestRoles.has_value();
}
void SpaceImportDto::SetRequestRoles(const std::vector<utility::string_t>& Value)
{
	m_RequestRoles = Value;
}

SpaceOptions::SpaceOptions()
{
}
SpaceOptions::~SpaceOptions()
{
}

utility::string_t SpaceOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_RequiresInvite.has_value())
	{
		rapidjson::Value RequiresInviteValue(TypeToJsonValue(m_RequiresInvite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requiresInvite", RequiresInviteValue, JsonDoc.GetAllocator());
	}

	if (m_Discoverable.has_value())
	{
		rapidjson::Value DiscoverableValue(TypeToJsonValue(m_Discoverable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("discoverable", DiscoverableValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubiGeneratedAssets.has_value())
	{
		rapidjson::Value IncludeMusubiGeneratedAssetsValue(TypeToJsonValue(m_IncludeMusubiGeneratedAssets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubiGeneratedAssets", IncludeMusubiGeneratedAssetsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceOptions::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("requiresInvite"))
	{
		const rapidjson::Value& RequiresInviteValue = JsonDoc["requiresInvite"];

		if (RequiresInviteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiresInviteValue, m_RequiresInvite);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member requiresInvite is null!");
		}
	}

	if (JsonDoc.HasMember("discoverable"))
	{
		const rapidjson::Value& DiscoverableValue = JsonDoc["discoverable"];

		if (DiscoverableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DiscoverableValue, m_Discoverable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member discoverable is null!");
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member includeMusubiGeneratedAssets is null!");
		}
	}
}


bool SpaceOptions::GetRequiresInvite() const
{
	return m_RequiresInvite.value();
}

bool SpaceOptions::HasRequiresInvite() const
{
	return m_RequiresInvite.has_value();
}
void SpaceOptions::SetRequiresInvite(const bool& Value)
{
	m_RequiresInvite = Value;
}
bool SpaceOptions::GetDiscoverable() const
{
	return m_Discoverable.value();
}

bool SpaceOptions::HasDiscoverable() const
{
	return m_Discoverable.has_value();
}
void SpaceOptions::SetDiscoverable(const bool& Value)
{
	m_Discoverable = Value;
}
bool SpaceOptions::GetIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.value();
}

bool SpaceOptions::HasIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.has_value();
}
void SpaceOptions::SetIncludeMusubiGeneratedAssets(const bool& Value)
{
	m_IncludeMusubiGeneratedAssets = Value;
}

SpaceTicketDto::SpaceTicketDto()
{
}
SpaceTicketDto::~SpaceTicketDto()
{
}

utility::string_t SpaceTicketDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorEventId.has_value())
	{
		rapidjson::Value VendorEventIdValue(TypeToJsonValue(m_VendorEventId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorEventId", VendorEventIdValue, JsonDoc.GetAllocator());
	}

	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_VendorTicketId.has_value())
	{
		rapidjson::Value VendorTicketIdValue(TypeToJsonValue(m_VendorTicketId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorTicketId", VendorTicketIdValue, JsonDoc.GetAllocator());
	}

	if (m_SpaceId.has_value())
	{
		rapidjson::Value SpaceIdValue(TypeToJsonValue(m_SpaceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("spaceId", SpaceIdValue, JsonDoc.GetAllocator());
	}

	if (m_TicketStatus.has_value())
	{
		rapidjson::Value TicketStatusValue(TypeToJsonValue(m_TicketStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ticketStatus", TicketStatusValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_EmailLower.has_value())
	{
		rapidjson::Value EmailLowerValue(TypeToJsonValue(m_EmailLower, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("emailLower", EmailLowerValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SpaceTicketDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SpaceTicketDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("vendorEventId"))
	{
		const rapidjson::Value& VendorEventIdValue = JsonDoc["vendorEventId"];

		if (VendorEventIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorEventIdValue, m_VendorEventId);
		}
	}

	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
		}
	}

	if (JsonDoc.HasMember("vendorTicketId"))
	{
		const rapidjson::Value& VendorTicketIdValue = JsonDoc["vendorTicketId"];

		if (VendorTicketIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorTicketIdValue, m_VendorTicketId);
		}
	}

	if (JsonDoc.HasMember("spaceId"))
	{
		const rapidjson::Value& SpaceIdValue = JsonDoc["spaceId"];

		if (SpaceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SpaceIdValue, m_SpaceId);
		}
	}

	if (JsonDoc.HasMember("ticketStatus"))
	{
		const rapidjson::Value& TicketStatusValue = JsonDoc["ticketStatus"];

		if (TicketStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TicketStatusValue, m_TicketStatus);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member ticketStatus is null!");
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("emailLower"))
	{
		const rapidjson::Value& EmailLowerValue = JsonDoc["emailLower"];

		if (EmailLowerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EmailLowerValue, m_EmailLower);
		}
	}
}


utility::string_t SpaceTicketDto::GetId() const
{
	return m_Id.value();
}

bool SpaceTicketDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t SpaceTicketDto::GetVendorEventId() const
{
	return m_VendorEventId.value();
}

bool SpaceTicketDto::HasVendorEventId() const
{
	return m_VendorEventId.has_value();
}
utility::string_t SpaceTicketDto::GetVendorName() const
{
	return m_VendorName.value();
}

bool SpaceTicketDto::HasVendorName() const
{
	return m_VendorName.has_value();
}
utility::string_t SpaceTicketDto::GetVendorTicketId() const
{
	return m_VendorTicketId.value();
}

bool SpaceTicketDto::HasVendorTicketId() const
{
	return m_VendorTicketId.has_value();
}
utility::string_t SpaceTicketDto::GetSpaceId() const
{
	return m_SpaceId.value();
}

bool SpaceTicketDto::HasSpaceId() const
{
	return m_SpaceId.has_value();
}
std::shared_ptr<TicketStatus> SpaceTicketDto::GetTicketStatus() const
{
	return m_TicketStatus.value();
}

bool SpaceTicketDto::HasTicketStatus() const
{
	return m_TicketStatus.has_value();
}
void SpaceTicketDto::SetTicketStatus(const std::shared_ptr<TicketStatus>& Value)
{
	m_TicketStatus = Value;
}
utility::string_t SpaceTicketDto::GetUserId() const
{
	return m_UserId.value();
}

bool SpaceTicketDto::HasUserId() const
{
	return m_UserId.has_value();
}
utility::string_t SpaceTicketDto::GetEmailLower() const
{
	return m_EmailLower.value();
}

bool SpaceTicketDto::HasEmailLower() const
{
	return m_EmailLower.has_value();
}

StartObserveRequest::StartObserveRequest()
{
}
StartObserveRequest::~StartObserveRequest()
{
}

utility::string_t StartObserveRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SessionId.has_value())
	{
		rapidjson::Value SessionIdValue(TypeToJsonValue(m_SessionId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sessionId", SessionIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StartObserveRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "StartObserveRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("sessionId"))
	{
		const rapidjson::Value& SessionIdValue = JsonDoc["sessionId"];

		if (SessionIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SessionIdValue, m_SessionId);
		}
	}
}


utility::string_t StartObserveRequest::GetSessionId() const
{
	return m_SessionId.value();
}

bool StartObserveRequest::HasSessionId() const
{
	return m_SessionId.has_value();
}
void StartObserveRequest::SetSessionId(const utility::string_t& Value)
{
	m_SessionId = Value;
}

StartRedriveRequest::StartRedriveRequest()
{
}
StartRedriveRequest::~StartRedriveRequest()
{
}

utility::string_t StartRedriveRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_MaxMessagesPerSecond.has_value())
	{
		rapidjson::Value MaxMessagesPerSecondValue(TypeToJsonValue(m_MaxMessagesPerSecond, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxMessagesPerSecond", MaxMessagesPerSecondValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StartRedriveRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "StartRedriveRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("maxMessagesPerSecond"))
	{
		const rapidjson::Value& MaxMessagesPerSecondValue = JsonDoc["maxMessagesPerSecond"];

		if (MaxMessagesPerSecondValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxMessagesPerSecondValue, m_MaxMessagesPerSecond);
		}
	}
}


int32_t StartRedriveRequest::GetMaxMessagesPerSecond() const
{
	return m_MaxMessagesPerSecond.value();
}

bool StartRedriveRequest::HasMaxMessagesPerSecond() const
{
	return m_MaxMessagesPerSecond.has_value();
}
void StartRedriveRequest::SetMaxMessagesPerSecond(int32_t Value)
{
	m_MaxMessagesPerSecond = Value;
}

StartRedriveResult::StartRedriveResult()
{
}
StartRedriveResult::~StartRedriveResult()
{
}

utility::string_t StartRedriveResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Success.has_value())
	{
		rapidjson::Value SuccessValue(TypeToJsonValue(m_Success, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("success", SuccessValue, JsonDoc.GetAllocator());
	}

	if (m_TaskHandle.has_value())
	{
		rapidjson::Value TaskHandleValue(TypeToJsonValue(m_TaskHandle, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("taskHandle", TaskHandleValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StartRedriveResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "StartRedriveResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("success"))
	{
		const rapidjson::Value& SuccessValue = JsonDoc["success"];

		if (SuccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SuccessValue, m_Success);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member success is null!");
		}
	}

	if (JsonDoc.HasMember("taskHandle"))
	{
		const rapidjson::Value& TaskHandleValue = JsonDoc["taskHandle"];

		if (TaskHandleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TaskHandleValue, m_TaskHandle);
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error);
		}
	}
}


bool StartRedriveResult::GetSuccess() const
{
	return m_Success.value();
}

bool StartRedriveResult::HasSuccess() const
{
	return m_Success.has_value();
}
void StartRedriveResult::SetSuccess(const bool& Value)
{
	m_Success = Value;
}
utility::string_t StartRedriveResult::GetTaskHandle() const
{
	return m_TaskHandle.value();
}

bool StartRedriveResult::HasTaskHandle() const
{
	return m_TaskHandle.has_value();
}
void StartRedriveResult::SetTaskHandle(const utility::string_t& Value)
{
	m_TaskHandle = Value;
}
utility::string_t StartRedriveResult::GetError() const
{
	return m_Error.value();
}

bool StartRedriveResult::HasError() const
{
	return m_Error.has_value();
}
void StartRedriveResult::SetError(const utility::string_t& Value)
{
	m_Error = Value;
}

StringDataPage::StringDataPage()
{
}
StringDataPage::~StringDataPage()
{
}

utility::string_t StringDataPage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Skip.has_value())
	{
		rapidjson::Value SkipValue(TypeToJsonValue(m_Skip, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skip", SkipValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_ItemCount.has_value())
	{
		rapidjson::Value ItemCountValue(TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemCount", ItemCountValue, JsonDoc.GetAllocator());
	}

	if (m_ItemTotalCount.has_value())
	{
		rapidjson::Value ItemTotalCountValue(TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("itemTotalCount", ItemTotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void StringDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "StringDataPage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<utility::string_t>& StringDataPage::GetItems() const
{
	return m_Items.value();
}

bool StringDataPage::HasItems() const
{
	return m_Items.has_value();
}
void StringDataPage::SetItems(const std::vector<utility::string_t>& Value)
{
	m_Items = Value;
}
int32_t StringDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool StringDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void StringDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t StringDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool StringDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void StringDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t StringDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool StringDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void StringDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t StringDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool StringDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void StringDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

Style::Style()
{
}
Style::~Style()
{
}

utility::string_t Style::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_IconStyle.has_value())
	{
		rapidjson::Value IconStyleValue(TypeToJsonValue(m_IconStyle, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("iconStyle", IconStyleValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void Style::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "Style::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("iconStyle"))
	{
		const rapidjson::Value& IconStyleValue = JsonDoc["iconStyle"];

		if (IconStyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IconStyleValue, m_IconStyle);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member iconStyle is null!");
		}
	}
}


utility::string_t Style::GetId() const
{
	return m_Id.value();
}

bool Style::HasId() const
{
	return m_Id.has_value();
}
void Style::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
std::shared_ptr<IconStyle> Style::GetIconStyle() const
{
	return m_IconStyle.value();
}

bool Style::HasIconStyle() const
{
	return m_IconStyle.has_value();
}
void Style::SetIconStyle(const std::shared_ptr<IconStyle>& Value)
{
	m_IconStyle = Value;
}

TicketStatus::TicketStatus()
{
}
TicketStatus::~TicketStatus()
{
}

utility::string_t TicketStatus::ToJson() const
{
	switch (Value)
	{
		case eTicketStatus::PURCHASED:
			return "Purchased";
		case eTicketStatus::REDEEMED:
			return "Redeemed";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void TicketStatus::FromJson(const utility::string_t& Val)
{
	if (Val == "Purchased")
	{
		Value = eTicketStatus::PURCHASED;
	}
	else if (Val == "Redeemed")
	{
		Value = eTicketStatus::REDEEMED;
	}
}

TicketStatus::eTicketStatus TicketStatus::GetValue() const
{
	return Value;
}

void TicketStatus::SetValue(TicketStatus::eTicketStatus const InValue)
{
	Value = InValue;
}

VendorProviderInfo::VendorProviderInfo()
{
}
VendorProviderInfo::~VendorProviderInfo()
{
}

utility::string_t VendorProviderInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_VendorName.has_value())
	{
		rapidjson::Value VendorNameValue(TypeToJsonValue(m_VendorName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("vendorName", VendorNameValue, JsonDoc.GetAllocator());
	}

	if (m_ClientId.has_value())
	{
		rapidjson::Value ClientIdValue(TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientId", ClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_AuthorizeEndpoint.has_value())
	{
		rapidjson::Value AuthorizeEndpointValue(TypeToJsonValue(m_AuthorizeEndpoint, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("authorizeEndpoint", AuthorizeEndpointValue, JsonDoc.GetAllocator());
	}

	if (m_OAuthRedirectUrl.has_value())
	{
		rapidjson::Value OAuthRedirectUrlValue(TypeToJsonValue(m_OAuthRedirectUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("oAuthRedirectUrl", OAuthRedirectUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void VendorProviderInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "VendorProviderInfo::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("vendorName"))
	{
		const rapidjson::Value& VendorNameValue = JsonDoc["vendorName"];

		if (VendorNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VendorNameValue, m_VendorName);
		}
	}

	if (JsonDoc.HasMember("clientId"))
	{
		const rapidjson::Value& ClientIdValue = JsonDoc["clientId"];

		if (ClientIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClientIdValue, m_ClientId);
		}
	}

	if (JsonDoc.HasMember("authorizeEndpoint"))
	{
		const rapidjson::Value& AuthorizeEndpointValue = JsonDoc["authorizeEndpoint"];

		if (AuthorizeEndpointValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AuthorizeEndpointValue, m_AuthorizeEndpoint);
		}
	}

	if (JsonDoc.HasMember("oAuthRedirectUrl"))
	{
		const rapidjson::Value& OAuthRedirectUrlValue = JsonDoc["oAuthRedirectUrl"];

		if (OAuthRedirectUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OAuthRedirectUrlValue, m_OAuthRedirectUrl);
		}
	}
}


utility::string_t VendorProviderInfo::GetVendorName() const
{
	return m_VendorName.value();
}

bool VendorProviderInfo::HasVendorName() const
{
	return m_VendorName.has_value();
}
void VendorProviderInfo::SetVendorName(const utility::string_t& Value)
{
	m_VendorName = Value;
}
utility::string_t VendorProviderInfo::GetClientId() const
{
	return m_ClientId.value();
}

bool VendorProviderInfo::HasClientId() const
{
	return m_ClientId.has_value();
}
void VendorProviderInfo::SetClientId(const utility::string_t& Value)
{
	m_ClientId = Value;
}
utility::string_t VendorProviderInfo::GetAuthorizeEndpoint() const
{
	return m_AuthorizeEndpoint.value();
}

bool VendorProviderInfo::HasAuthorizeEndpoint() const
{
	return m_AuthorizeEndpoint.has_value();
}
utility::string_t VendorProviderInfo::GetOAuthRedirectUrl() const
{
	return m_OAuthRedirectUrl.value();
}

bool VendorProviderInfo::HasOAuthRedirectUrl() const
{
	return m_OAuthRedirectUrl.has_value();
}

VersionMatrix::VersionMatrix()
{
}
VersionMatrix::~VersionMatrix()
{
}

utility::string_t VersionMatrix::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ServiceVersion.has_value())
	{
		rapidjson::Value ServiceVersionValue(TypeToJsonValue(m_ServiceVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceVersion", ServiceVersionValue, JsonDoc.GetAllocator());
	}

	if (m_Matrix.has_value())
	{
		rapidjson::Value MatrixValue(TypeToJsonValue(m_Matrix, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("matrix", MatrixValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void VersionMatrix::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "VersionMatrix::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("serviceVersion"))
	{
		const rapidjson::Value& ServiceVersionValue = JsonDoc["serviceVersion"];

		if (ServiceVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceVersionValue, m_ServiceVersion);
		}
	}

	if (JsonDoc.HasMember("matrix"))
	{
		const rapidjson::Value& MatrixValue = JsonDoc["matrix"];

		if (MatrixValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MatrixValue, m_Matrix);
		}
	}
}


utility::string_t VersionMatrix::GetServiceVersion() const
{
	return m_ServiceVersion.value();
}

bool VersionMatrix::HasServiceVersion() const
{
	return m_ServiceVersion.has_value();
}
void VersionMatrix::SetServiceVersion(const utility::string_t& Value)
{
	m_ServiceVersion = Value;
}
const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& VersionMatrix::GetMatrix() const
{
	return m_Matrix.value();
}

bool VersionMatrix::HasMatrix() const
{
	return m_Matrix.has_value();
}
void VersionMatrix::SetMatrix(const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& Value)
{
	m_Matrix = Value;
}


} // namespace csp::services::generated::aggregationservice