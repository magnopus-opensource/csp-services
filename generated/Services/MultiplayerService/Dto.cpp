

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Json/JsonParseHelper.h"
#include <optional>


using namespace csp::web;


namespace csp::services::generated::multiplayerservice
{


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

AreaOfInterestDto::AreaOfInterestDto()
{
}
AreaOfInterestDto::~AreaOfInterestDto()
{
}

utility::string_t AreaOfInterestDto::ToJson() const
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

	if (m_UpdatedBy.has_value())
	{
		rapidjson::Value UpdatedByValue(TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedBy", UpdatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_IsListening.has_value())
	{
		rapidjson::Value IsListeningValue(TypeToJsonValue(m_IsListening, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isListening", IsListeningValue, JsonDoc.GetAllocator());
	}

	if (m_IsSpectator.has_value())
	{
		rapidjson::Value IsSpectatorValue(TypeToJsonValue(m_IsSpectator, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isSpectator", IsSpectatorValue, JsonDoc.GetAllocator());
	}

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_LastSolveTime.has_value())
	{
		rapidjson::Value LastSolveTimeValue(TypeToJsonValue(m_LastSolveTime, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastSolveTime", LastSolveTimeValue, JsonDoc.GetAllocator());
	}

	if (m_GlobalScopes.has_value())
	{
		rapidjson::Value GlobalScopesValue(TypeToJsonValue(m_GlobalScopes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("globalScopes", GlobalScopesValue, JsonDoc.GetAllocator());
	}

	if (m_ObjectScopes.has_value())
	{
		rapidjson::Value ObjectScopesValue(TypeToJsonValue(m_ObjectScopes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("objectScopes", ObjectScopesValue, JsonDoc.GetAllocator());
	}

	if (m_ObjectIds.has_value())
	{
		rapidjson::Value ObjectIdsValue(TypeToJsonValue(m_ObjectIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("objectIds", ObjectIdsValue, JsonDoc.GetAllocator());
	}

	if (m_Entourage.has_value())
	{
		rapidjson::Value EntourageValue(TypeToJsonValue(m_Entourage, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("entourage", EntourageValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AreaOfInterestDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AreaOfInterestDto::FromJson");
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

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy);
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

	if (JsonDoc.HasMember("isListening"))
	{
		const rapidjson::Value& IsListeningValue = JsonDoc["isListening"];

		if (IsListeningValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsListeningValue, m_IsListening);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isListening is null!");
		}
	}

	if (JsonDoc.HasMember("isSpectator"))
	{
		const rapidjson::Value& IsSpectatorValue = JsonDoc["isSpectator"];

		if (IsSpectatorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsSpectatorValue, m_IsSpectator);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isSpectator is null!");
		}
	}

	if (JsonDoc.HasMember("position"))
	{
		const rapidjson::Value& PositionValue = JsonDoc["position"];

		if (PositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PositionValue, m_Position);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member position is null!");
		}
	}

	if (JsonDoc.HasMember("lastSolveTime"))
	{
		const rapidjson::Value& LastSolveTimeValue = JsonDoc["lastSolveTime"];

		if (LastSolveTimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastSolveTimeValue, m_LastSolveTime);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lastSolveTime is null!");
		}
	}

	if (JsonDoc.HasMember("globalScopes"))
	{
		const rapidjson::Value& GlobalScopesValue = JsonDoc["globalScopes"];

		if (GlobalScopesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GlobalScopesValue, m_GlobalScopes);
		}
	}

	if (JsonDoc.HasMember("objectScopes"))
	{
		const rapidjson::Value& ObjectScopesValue = JsonDoc["objectScopes"];

		if (ObjectScopesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ObjectScopesValue, m_ObjectScopes);
		}
	}

	if (JsonDoc.HasMember("objectIds"))
	{
		const rapidjson::Value& ObjectIdsValue = JsonDoc["objectIds"];

		if (ObjectIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ObjectIdsValue, m_ObjectIds);
		}
	}

	if (JsonDoc.HasMember("entourage"))
	{
		const rapidjson::Value& EntourageValue = JsonDoc["entourage"];

		if (EntourageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EntourageValue, m_Entourage);
		}
	}
}


utility::string_t AreaOfInterestDto::GetId() const
{
	return m_Id.value();
}

bool AreaOfInterestDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t AreaOfInterestDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool AreaOfInterestDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t AreaOfInterestDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool AreaOfInterestDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t AreaOfInterestDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool AreaOfInterestDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t AreaOfInterestDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool AreaOfInterestDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool AreaOfInterestDto::GetIsListening() const
{
	return m_IsListening.value();
}

bool AreaOfInterestDto::HasIsListening() const
{
	return m_IsListening.has_value();
}
bool AreaOfInterestDto::GetIsSpectator() const
{
	return m_IsSpectator.value();
}

bool AreaOfInterestDto::HasIsSpectator() const
{
	return m_IsSpectator.has_value();
}
std::shared_ptr<GeoCoord> AreaOfInterestDto::GetPosition() const
{
	return m_Position.value();
}

bool AreaOfInterestDto::HasPosition() const
{
	return m_Position.has_value();
}
void AreaOfInterestDto::SetPosition(const std::shared_ptr<GeoCoord>& Value)
{
	m_Position = Value;
}
utility::string_t AreaOfInterestDto::GetLastSolveTime() const
{
	return m_LastSolveTime.value();
}

bool AreaOfInterestDto::HasLastSolveTime() const
{
	return m_LastSolveTime.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetGlobalScopes() const
{
	return m_GlobalScopes.value();
}

bool AreaOfInterestDto::HasGlobalScopes() const
{
	return m_GlobalScopes.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetObjectScopes() const
{
	return m_ObjectScopes.value();
}

bool AreaOfInterestDto::HasObjectScopes() const
{
	return m_ObjectScopes.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetObjectIds() const
{
	return m_ObjectIds.value();
}

bool AreaOfInterestDto::HasObjectIds() const
{
	return m_ObjectIds.has_value();
}
const std::vector<utility::string_t>& AreaOfInterestDto::GetEntourage() const
{
	return m_Entourage.value();
}

bool AreaOfInterestDto::HasEntourage() const
{
	return m_Entourage.has_value();
}

BooleanUInt32NullableTuple::BooleanUInt32NullableTuple()
{
}
BooleanUInt32NullableTuple::~BooleanUInt32NullableTuple()
{
}

utility::string_t BooleanUInt32NullableTuple::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Item1.has_value())
	{
		rapidjson::Value Item1Value(TypeToJsonValue(m_Item1, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("item1", Item1Value, JsonDoc.GetAllocator());
	}

	if (m_Item2.has_value())
	{
		rapidjson::Value Item2Value(TypeToJsonValue(m_Item2, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("item2", Item2Value, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BooleanUInt32NullableTuple::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BooleanUInt32NullableTuple::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("item1"))
	{
		const rapidjson::Value& Item1Value = JsonDoc["item1"];

		if (Item1Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(Item1Value, m_Item1);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member item1 is null!");
		}
	}

	if (JsonDoc.HasMember("item2"))
	{
		const rapidjson::Value& Item2Value = JsonDoc["item2"];

		if (Item2Value != rapidjson::Type::kNullType)
		{
			JsonValueToType(Item2Value, m_Item2);
		}
	}
}


bool BooleanUInt32NullableTuple::GetItem1() const
{
	return m_Item1.value();
}

bool BooleanUInt32NullableTuple::HasItem1() const
{
	return m_Item1.has_value();
}
void BooleanUInt32NullableTuple::SetItem1(const bool& Value)
{
	m_Item1 = Value;
}
int32_t BooleanUInt32NullableTuple::GetItem2() const
{
	return m_Item2.value();
}

bool BooleanUInt32NullableTuple::HasItem2() const
{
	return m_Item2.has_value();
}
void BooleanUInt32NullableTuple::SetItem2(int32_t Value)
{
	m_Item2 = Value;
}

ClientConnectionDto::ClientConnectionDto()
{
}
ClientConnectionDto::~ClientConnectionDto()
{
}

utility::string_t ClientConnectionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_UserId.has_value())
	{
		rapidjson::Value UserIdValue(TypeToJsonValue(m_UserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userId", UserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ClientId.has_value())
	{
		rapidjson::Value ClientIdValue(TypeToJsonValue(m_ClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("clientId", ClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ConnectionStatus.has_value())
	{
		rapidjson::Value ConnectionStatusValue(TypeToJsonValue(m_ConnectionStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("connectionStatus", ConnectionStatusValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ClientConnectionDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClientConnectionDto::FromJson");
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

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId);
		}
	}

	if (JsonDoc.HasMember("clientId"))
	{
		const rapidjson::Value& ClientIdValue = JsonDoc["clientId"];

		if (ClientIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClientIdValue, m_ClientId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member clientId is null!");
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
	}

	if (JsonDoc.HasMember("connectionStatus"))
	{
		const rapidjson::Value& ConnectionStatusValue = JsonDoc["connectionStatus"];

		if (ConnectionStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConnectionStatusValue, m_ConnectionStatus);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member connectionStatus is null!");
		}
	}
}


utility::string_t ClientConnectionDto::GetId() const
{
	return m_Id.value();
}

bool ClientConnectionDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ClientConnectionDto::GetUserId() const
{
	return m_UserId.value();
}

bool ClientConnectionDto::HasUserId() const
{
	return m_UserId.has_value();
}
int32_t ClientConnectionDto::GetClientId() const
{
	return m_ClientId.value();
}

bool ClientConnectionDto::HasClientId() const
{
	return m_ClientId.has_value();
}
const std::vector<utility::string_t>& ClientConnectionDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool ClientConnectionDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
std::shared_ptr<ClientConnectionStatus> ClientConnectionDto::GetConnectionStatus() const
{
	return m_ConnectionStatus.value();
}

bool ClientConnectionDto::HasConnectionStatus() const
{
	return m_ConnectionStatus.has_value();
}
void ClientConnectionDto::SetConnectionStatus(const std::shared_ptr<ClientConnectionStatus>& Value)
{
	m_ConnectionStatus = Value;
}

ClientConnectionDtoDataPage::ClientConnectionDtoDataPage()
{
}
ClientConnectionDtoDataPage::~ClientConnectionDtoDataPage()
{
}

utility::string_t ClientConnectionDtoDataPage::ToJson() const
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

void ClientConnectionDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClientConnectionDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<ClientConnectionDto>>& ClientConnectionDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ClientConnectionDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ClientConnectionDtoDataPage::SetItems(const std::vector<std::shared_ptr<ClientConnectionDto>>& Value)
{
	m_Items = Value;
}
int32_t ClientConnectionDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ClientConnectionDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ClientConnectionDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ClientConnectionDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ClientConnectionDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ClientConnectionDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ClientConnectionDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ClientConnectionDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ClientConnectionDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ClientConnectionDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ClientConnectionDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ClientConnectionDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ClientConnectionStatus::ClientConnectionStatus()
{
}
ClientConnectionStatus::~ClientConnectionStatus()
{
}

utility::string_t ClientConnectionStatus::ToJson() const
{
	switch (Value)
	{
		case eClientConnectionStatus::DISCONNECTED:
			return "Disconnected";
		case eClientConnectionStatus::CONNECTED:
			return "Connected";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void ClientConnectionStatus::FromJson(const utility::string_t& Val)
{
	if (Val == "Disconnected")
	{
		Value = eClientConnectionStatus::DISCONNECTED;
	}
	else if (Val == "Connected")
	{
		Value = eClientConnectionStatus::CONNECTED;
	}
}

ClientConnectionStatus::eClientConnectionStatus ClientConnectionStatus::GetValue() const
{
	return Value;
}

void ClientConnectionStatus::SetValue(ClientConnectionStatus::eClientConnectionStatus const InValue)
{
	Value = InValue;
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

EventMessageDto::EventMessageDto()
{
}
EventMessageDto::~EventMessageDto()
{
}

utility::string_t EventMessageDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_EventType.has_value())
	{
		rapidjson::Value EventTypeValue(TypeToJsonValue(m_EventType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("eventType", EventTypeValue, JsonDoc.GetAllocator());
	}

	if (m_SenderUserId.has_value())
	{
		rapidjson::Value SenderUserIdValue(TypeToJsonValue(m_SenderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("senderUserId", SenderUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_RecipientUserId.has_value())
	{
		rapidjson::Value RecipientUserIdValue(TypeToJsonValue(m_RecipientUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("recipientUserId", RecipientUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EventMessageDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EventMessageDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("eventType"))
	{
		const rapidjson::Value& EventTypeValue = JsonDoc["eventType"];

		if (EventTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EventTypeValue, m_EventType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member eventType is null!");
		}
	}

	if (JsonDoc.HasMember("senderUserId"))
	{
		const rapidjson::Value& SenderUserIdValue = JsonDoc["senderUserId"];

		if (SenderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SenderUserIdValue, m_SenderUserId);
		}
	}

	if (JsonDoc.HasMember("recipientUserId"))
	{
		const rapidjson::Value& RecipientUserIdValue = JsonDoc["recipientUserId"];

		if (RecipientUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RecipientUserIdValue, m_RecipientUserId);
		}
	}

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
	}
}


utility::string_t EventMessageDto::GetEventType() const
{
	return m_EventType.value();
}

bool EventMessageDto::HasEventType() const
{
	return m_EventType.has_value();
}
void EventMessageDto::SetEventType(const utility::string_t& Value)
{
	m_EventType = Value;
}
utility::string_t EventMessageDto::GetSenderUserId() const
{
	return m_SenderUserId.value();
}

bool EventMessageDto::HasSenderUserId() const
{
	return m_SenderUserId.has_value();
}
void EventMessageDto::SetSenderUserId(const utility::string_t& Value)
{
	m_SenderUserId = Value;
}
utility::string_t EventMessageDto::GetRecipientUserId() const
{
	return m_RecipientUserId.value();
}

bool EventMessageDto::HasRecipientUserId() const
{
	return m_RecipientUserId.has_value();
}
void EventMessageDto::SetRecipientUserId(const utility::string_t& Value)
{
	m_RecipientUserId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& EventMessageDto::GetComponents() const
{
	return m_Components.value();
}

bool EventMessageDto::HasComponents() const
{
	return m_Components.has_value();
}
void EventMessageDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
}
const std::vector<utility::string_t>& EventMessageDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool EventMessageDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
void EventMessageDto::SetScopeIds(const std::vector<utility::string_t>& Value)
{
	m_ScopeIds = Value;
}

GeoCoord::GeoCoord()
{
}
GeoCoord::~GeoCoord()
{
}

utility::string_t GeoCoord::ToJson() const
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


	return JsonDocToString(JsonDoc);
}

void GeoCoord::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "GeoCoord::FromJson");
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
}


double GeoCoord::GetLongitude() const
{
	return m_Longitude.value();
}

bool GeoCoord::HasLongitude() const
{
	return m_Longitude.has_value();
}
void GeoCoord::SetLongitude(double Value)
{
	m_Longitude = Value;
}
double GeoCoord::GetLatitude() const
{
	return m_Latitude.value();
}

bool GeoCoord::HasLatitude() const
{
	return m_Latitude.has_value();
}
void GeoCoord::SetLatitude(double Value)
{
	m_Latitude = Value;
}

IComponentData::IComponentData()
{
}
IComponentData::~IComponentData()
{
}

utility::string_t IComponentData::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);



	return JsonDocToString(JsonDoc);
}

void IComponentData::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "IComponentData::FromJson");
	if (!ok)
	{
		return;
	}
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

ObjectMessageDocumentDto::ObjectMessageDocumentDto()
{
}
ObjectMessageDocumentDto::~ObjectMessageDocumentDto()
{
}

utility::string_t ObjectMessageDocumentDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_OwnerUserId.has_value())
	{
		rapidjson::Value OwnerUserIdValue(TypeToJsonValue(m_OwnerUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerUserId", OwnerUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOfUserId.has_value())
	{
		rapidjson::Value OnBehalfOfUserIdValue(TypeToJsonValue(m_OnBehalfOfUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOfUserId", OnBehalfOfUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceId.has_value())
	{
		rapidjson::Value ScopeReferenceIdValue(TypeToJsonValue(m_ScopeReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceId", ScopeReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceType.has_value())
	{
		rapidjson::Value ScopeReferenceTypeValue(TypeToJsonValue(m_ScopeReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceType", ScopeReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_ObjectMessage.has_value())
	{
		rapidjson::Value ObjectMessageValue(TypeToJsonValue(m_ObjectMessage, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("objectMessage", ObjectMessageValue, JsonDoc.GetAllocator());
	}

	if (m_EuclideanPosition.has_value())
	{
		rapidjson::Value EuclideanPositionValue(TypeToJsonValue(m_EuclideanPosition, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("euclideanPosition", EuclideanPositionValue, JsonDoc.GetAllocator());
	}

	if (m_RootParentId.has_value())
	{
		rapidjson::Value RootParentIdValue(TypeToJsonValue(m_RootParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("rootParentId", RootParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_DuplicatedFrom.has_value())
	{
		rapidjson::Value DuplicatedFromValue(TypeToJsonValue(m_DuplicatedFrom, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("duplicatedFrom", DuplicatedFromValue, JsonDoc.GetAllocator());
	}

	if (m_AoiCenter.has_value())
	{
		rapidjson::Value AoiCenterValue(TypeToJsonValue(m_AoiCenter, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("aoiCenter", AoiCenterValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObjectMessageDocumentDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObjectMessageDocumentDto::FromJson");
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

	if (JsonDoc.HasMember("ownerUserId"))
	{
		const rapidjson::Value& OwnerUserIdValue = JsonDoc["ownerUserId"];

		if (OwnerUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerUserIdValue, m_OwnerUserId);
		}
	}

	if (JsonDoc.HasMember("onBehalfOfUserId"))
	{
		const rapidjson::Value& OnBehalfOfUserIdValue = JsonDoc["onBehalfOfUserId"];

		if (OnBehalfOfUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfUserIdValue, m_OnBehalfOfUserId);
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
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

	if (JsonDoc.HasMember("scopeReferenceType"))
	{
		const rapidjson::Value& ScopeReferenceTypeValue = JsonDoc["scopeReferenceType"];

		if (ScopeReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceTypeValue, m_ScopeReferenceType);
		}
	}

	if (JsonDoc.HasMember("objectMessage"))
	{
		const rapidjson::Value& ObjectMessageValue = JsonDoc["objectMessage"];

		if (ObjectMessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ObjectMessageValue, m_ObjectMessage);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member objectMessage is null!");
		}
	}

	if (JsonDoc.HasMember("euclideanPosition"))
	{
		const rapidjson::Value& EuclideanPositionValue = JsonDoc["euclideanPosition"];

		if (EuclideanPositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EuclideanPositionValue, m_EuclideanPosition);
		}
	}

	if (JsonDoc.HasMember("rootParentId"))
	{
		const rapidjson::Value& RootParentIdValue = JsonDoc["rootParentId"];

		if (RootParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RootParentIdValue, m_RootParentId);
		}
	}

	if (JsonDoc.HasMember("duplicatedFrom"))
	{
		const rapidjson::Value& DuplicatedFromValue = JsonDoc["duplicatedFrom"];

		if (DuplicatedFromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DuplicatedFromValue, m_DuplicatedFrom);
		}
	}

	if (JsonDoc.HasMember("aoiCenter"))
	{
		const rapidjson::Value& AoiCenterValue = JsonDoc["aoiCenter"];

		if (AoiCenterValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AoiCenterValue, m_AoiCenter);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member aoiCenter is null!");
		}
	}
}


utility::string_t ObjectMessageDocumentDto::GetId() const
{
	return m_Id.value();
}

bool ObjectMessageDocumentDto::HasId() const
{
	return m_Id.has_value();
}
void ObjectMessageDocumentDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ObjectMessageDocumentDto::GetOwnerUserId() const
{
	return m_OwnerUserId.value();
}

bool ObjectMessageDocumentDto::HasOwnerUserId() const
{
	return m_OwnerUserId.has_value();
}
void ObjectMessageDocumentDto::SetOwnerUserId(const utility::string_t& Value)
{
	m_OwnerUserId = Value;
}
utility::string_t ObjectMessageDocumentDto::GetOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.value();
}

bool ObjectMessageDocumentDto::HasOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.has_value();
}
void ObjectMessageDocumentDto::SetOnBehalfOfUserId(const utility::string_t& Value)
{
	m_OnBehalfOfUserId = Value;
}
const std::vector<utility::string_t>& ObjectMessageDocumentDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool ObjectMessageDocumentDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
void ObjectMessageDocumentDto::SetScopeIds(const std::vector<utility::string_t>& Value)
{
	m_ScopeIds = Value;
}
utility::string_t ObjectMessageDocumentDto::GetScopeReferenceId() const
{
	return m_ScopeReferenceId.value();
}

bool ObjectMessageDocumentDto::HasScopeReferenceId() const
{
	return m_ScopeReferenceId.has_value();
}
void ObjectMessageDocumentDto::SetScopeReferenceId(const utility::string_t& Value)
{
	m_ScopeReferenceId = Value;
}
utility::string_t ObjectMessageDocumentDto::GetScopeReferenceType() const
{
	return m_ScopeReferenceType.value();
}

bool ObjectMessageDocumentDto::HasScopeReferenceType() const
{
	return m_ScopeReferenceType.has_value();
}
void ObjectMessageDocumentDto::SetScopeReferenceType(const utility::string_t& Value)
{
	m_ScopeReferenceType = Value;
}
std::shared_ptr<ObjectMessageDto> ObjectMessageDocumentDto::GetObjectMessage() const
{
	return m_ObjectMessage.value();
}

bool ObjectMessageDocumentDto::HasObjectMessage() const
{
	return m_ObjectMessage.has_value();
}
void ObjectMessageDocumentDto::SetObjectMessage(const std::shared_ptr<ObjectMessageDto>& Value)
{
	m_ObjectMessage = Value;
}
const std::vector<float>& ObjectMessageDocumentDto::GetEuclideanPosition() const
{
	return m_EuclideanPosition.value();
}

bool ObjectMessageDocumentDto::HasEuclideanPosition() const
{
	return m_EuclideanPosition.has_value();
}
void ObjectMessageDocumentDto::SetEuclideanPosition(const std::vector<float>& Value)
{
	m_EuclideanPosition = Value;
}
utility::string_t ObjectMessageDocumentDto::GetRootParentId() const
{
	return m_RootParentId.value();
}

bool ObjectMessageDocumentDto::HasRootParentId() const
{
	return m_RootParentId.has_value();
}
void ObjectMessageDocumentDto::SetRootParentId(const utility::string_t& Value)
{
	m_RootParentId = Value;
}
utility::string_t ObjectMessageDocumentDto::GetDuplicatedFrom() const
{
	return m_DuplicatedFrom.value();
}

bool ObjectMessageDocumentDto::HasDuplicatedFrom() const
{
	return m_DuplicatedFrom.has_value();
}
void ObjectMessageDocumentDto::SetDuplicatedFrom(const utility::string_t& Value)
{
	m_DuplicatedFrom = Value;
}
bool ObjectMessageDocumentDto::GetAoiCenter() const
{
	return m_AoiCenter.value();
}

bool ObjectMessageDocumentDto::HasAoiCenter() const
{
	return m_AoiCenter.has_value();
}
void ObjectMessageDocumentDto::SetAoiCenter(const bool& Value)
{
	m_AoiCenter = Value;
}

ObjectMessageDocumentDtoDataPage::ObjectMessageDocumentDtoDataPage()
{
}
ObjectMessageDocumentDtoDataPage::~ObjectMessageDocumentDtoDataPage()
{
}

utility::string_t ObjectMessageDocumentDtoDataPage::ToJson() const
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

void ObjectMessageDocumentDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObjectMessageDocumentDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<ObjectMessageDocumentDto>>& ObjectMessageDocumentDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ObjectMessageDocumentDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ObjectMessageDocumentDtoDataPage::SetItems(const std::vector<std::shared_ptr<ObjectMessageDocumentDto>>& Value)
{
	m_Items = Value;
}
int32_t ObjectMessageDocumentDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ObjectMessageDocumentDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ObjectMessageDocumentDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ObjectMessageDocumentDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ObjectMessageDocumentDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ObjectMessageDocumentDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ObjectMessageDocumentDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ObjectMessageDocumentDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ObjectMessageDocumentDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ObjectMessageDocumentDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ObjectMessageDocumentDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ObjectMessageDocumentDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ObjectMessageDto::ObjectMessageDto()
{
}
ObjectMessageDto::~ObjectMessageDto()
{
}

utility::string_t ObjectMessageDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_PrefabId.has_value())
	{
		rapidjson::Value PrefabIdValue(TypeToJsonValue(m_PrefabId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prefabId", PrefabIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsTransferable.has_value())
	{
		rapidjson::Value IsTransferableValue(TypeToJsonValue(m_IsTransferable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isTransferable", IsTransferableValue, JsonDoc.GetAllocator());
	}

	if (m_IsPersistent.has_value())
	{
		rapidjson::Value IsPersistentValue(TypeToJsonValue(m_IsPersistent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isPersistent", IsPersistentValue, JsonDoc.GetAllocator());
	}

	if (m_OwnerUserId.has_value())
	{
		rapidjson::Value OwnerUserIdValue(TypeToJsonValue(m_OwnerUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerUserId", OwnerUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceId.has_value())
	{
		rapidjson::Value ScopeReferenceIdValue(TypeToJsonValue(m_ScopeReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceId", ScopeReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeReferenceType.has_value())
	{
		rapidjson::Value ScopeReferenceTypeValue(TypeToJsonValue(m_ScopeReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeReferenceType", ScopeReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOfUserId.has_value())
	{
		rapidjson::Value OnBehalfOfUserIdValue(TypeToJsonValue(m_OnBehalfOfUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOfUserId", OnBehalfOfUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeIds.has_value())
	{
		rapidjson::Value ScopeIdsValue(TypeToJsonValue(m_ScopeIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeIds", ScopeIdsValue, JsonDoc.GetAllocator());
	}

	if (m_AoiCenter.has_value())
	{
		rapidjson::Value AoiCenterValue(TypeToJsonValue(m_AoiCenter, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("aoiCenter", AoiCenterValue, JsonDoc.GetAllocator());
	}

	if (m_DuplicatedFrom.has_value())
	{
		rapidjson::Value DuplicatedFromValue(TypeToJsonValue(m_DuplicatedFrom, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("duplicatedFrom", DuplicatedFromValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObjectMessageDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObjectMessageDto::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
		}
	}

	if (JsonDoc.HasMember("prefabId"))
	{
		const rapidjson::Value& PrefabIdValue = JsonDoc["prefabId"];

		if (PrefabIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrefabIdValue, m_PrefabId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member prefabId is null!");
		}
	}

	if (JsonDoc.HasMember("isTransferable"))
	{
		const rapidjson::Value& IsTransferableValue = JsonDoc["isTransferable"];

		if (IsTransferableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsTransferableValue, m_IsTransferable);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isTransferable is null!");
		}
	}

	if (JsonDoc.HasMember("isPersistent"))
	{
		const rapidjson::Value& IsPersistentValue = JsonDoc["isPersistent"];

		if (IsPersistentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsPersistentValue, m_IsPersistent);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isPersistent is null!");
		}
	}

	if (JsonDoc.HasMember("ownerUserId"))
	{
		const rapidjson::Value& OwnerUserIdValue = JsonDoc["ownerUserId"];

		if (OwnerUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerUserIdValue, m_OwnerUserId);
		}
	}

	if (JsonDoc.HasMember("scopeReferenceId"))
	{
		const rapidjson::Value& ScopeReferenceIdValue = JsonDoc["scopeReferenceId"];

		if (ScopeReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceIdValue, m_ScopeReferenceId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceId is null!");
		}
	}

	if (JsonDoc.HasMember("scopeReferenceType"))
	{
		const rapidjson::Value& ScopeReferenceTypeValue = JsonDoc["scopeReferenceType"];

		if (ScopeReferenceTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeReferenceTypeValue, m_ScopeReferenceType);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeReferenceType is null!");
		}
	}

	if (JsonDoc.HasMember("onBehalfOfUserId"))
	{
		const rapidjson::Value& OnBehalfOfUserIdValue = JsonDoc["onBehalfOfUserId"];

		if (OnBehalfOfUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfUserIdValue, m_OnBehalfOfUserId);
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

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}

	if (JsonDoc.HasMember("scopeIds"))
	{
		const rapidjson::Value& ScopeIdsValue = JsonDoc["scopeIds"];

		if (ScopeIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdsValue, m_ScopeIds);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member scopeIds is null!");
		}
	}

	if (JsonDoc.HasMember("aoiCenter"))
	{
		const rapidjson::Value& AoiCenterValue = JsonDoc["aoiCenter"];

		if (AoiCenterValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AoiCenterValue, m_AoiCenter);
		}
	}

	if (JsonDoc.HasMember("duplicatedFrom"))
	{
		const rapidjson::Value& DuplicatedFromValue = JsonDoc["duplicatedFrom"];

		if (DuplicatedFromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DuplicatedFromValue, m_DuplicatedFrom);
		}
	}
}


int32_t ObjectMessageDto::GetId() const
{
	return m_Id.value();
}

bool ObjectMessageDto::HasId() const
{
	return m_Id.has_value();
}
void ObjectMessageDto::SetId(int32_t Value)
{
	m_Id = Value;
}
int32_t ObjectMessageDto::GetPrefabId() const
{
	return m_PrefabId.value();
}

bool ObjectMessageDto::HasPrefabId() const
{
	return m_PrefabId.has_value();
}
void ObjectMessageDto::SetPrefabId(int32_t Value)
{
	m_PrefabId = Value;
}
bool ObjectMessageDto::GetIsTransferable() const
{
	return m_IsTransferable.value();
}

bool ObjectMessageDto::HasIsTransferable() const
{
	return m_IsTransferable.has_value();
}
void ObjectMessageDto::SetIsTransferable(const bool& Value)
{
	m_IsTransferable = Value;
}
bool ObjectMessageDto::GetIsPersistent() const
{
	return m_IsPersistent.value();
}

bool ObjectMessageDto::HasIsPersistent() const
{
	return m_IsPersistent.has_value();
}
void ObjectMessageDto::SetIsPersistent(const bool& Value)
{
	m_IsPersistent = Value;
}
utility::string_t ObjectMessageDto::GetOwnerUserId() const
{
	return m_OwnerUserId.value();
}

bool ObjectMessageDto::HasOwnerUserId() const
{
	return m_OwnerUserId.has_value();
}
void ObjectMessageDto::SetOwnerUserId(const utility::string_t& Value)
{
	m_OwnerUserId = Value;
}
utility::string_t ObjectMessageDto::GetScopeReferenceId() const
{
	return m_ScopeReferenceId.value();
}

bool ObjectMessageDto::HasScopeReferenceId() const
{
	return m_ScopeReferenceId.has_value();
}
void ObjectMessageDto::SetScopeReferenceId(const utility::string_t& Value)
{
	m_ScopeReferenceId = Value;
}
utility::string_t ObjectMessageDto::GetScopeReferenceType() const
{
	return m_ScopeReferenceType.value();
}

bool ObjectMessageDto::HasScopeReferenceType() const
{
	return m_ScopeReferenceType.has_value();
}
void ObjectMessageDto::SetScopeReferenceType(const utility::string_t& Value)
{
	m_ScopeReferenceType = Value;
}
utility::string_t ObjectMessageDto::GetOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.value();
}

bool ObjectMessageDto::HasOnBehalfOfUserId() const
{
	return m_OnBehalfOfUserId.has_value();
}
void ObjectMessageDto::SetOnBehalfOfUserId(const utility::string_t& Value)
{
	m_OnBehalfOfUserId = Value;
}
int32_t ObjectMessageDto::GetParentId() const
{
	return m_ParentId.value();
}

bool ObjectMessageDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void ObjectMessageDto::SetParentId(int32_t Value)
{
	m_ParentId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& ObjectMessageDto::GetComponents() const
{
	return m_Components.value();
}

bool ObjectMessageDto::HasComponents() const
{
	return m_Components.has_value();
}
void ObjectMessageDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
}
const std::vector<utility::string_t>& ObjectMessageDto::GetScopeIds() const
{
	return m_ScopeIds.value();
}

bool ObjectMessageDto::HasScopeIds() const
{
	return m_ScopeIds.has_value();
}
void ObjectMessageDto::SetScopeIds(const std::vector<utility::string_t>& Value)
{
	m_ScopeIds = Value;
}
bool ObjectMessageDto::GetAoiCenter() const
{
	return m_AoiCenter.value();
}

bool ObjectMessageDto::HasAoiCenter() const
{
	return m_AoiCenter.has_value();
}
void ObjectMessageDto::SetAoiCenter(const bool& Value)
{
	m_AoiCenter = Value;
}
utility::string_t ObjectMessageDto::GetDuplicatedFrom() const
{
	return m_DuplicatedFrom.value();
}

bool ObjectMessageDto::HasDuplicatedFrom() const
{
	return m_DuplicatedFrom.has_value();
}
void ObjectMessageDto::SetDuplicatedFrom(const utility::string_t& Value)
{
	m_DuplicatedFrom = Value;
}

ObjectMessageDtoDataPage::ObjectMessageDtoDataPage()
{
}
ObjectMessageDtoDataPage::~ObjectMessageDtoDataPage()
{
}

utility::string_t ObjectMessageDtoDataPage::ToJson() const
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

void ObjectMessageDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObjectMessageDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<ObjectMessageDto>>& ObjectMessageDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ObjectMessageDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ObjectMessageDtoDataPage::SetItems(const std::vector<std::shared_ptr<ObjectMessageDto>>& Value)
{
	m_Items = Value;
}
int32_t ObjectMessageDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ObjectMessageDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ObjectMessageDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ObjectMessageDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ObjectMessageDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ObjectMessageDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ObjectMessageDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ObjectMessageDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ObjectMessageDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ObjectMessageDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ObjectMessageDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ObjectMessageDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ObjectMessagePatchDto::ObjectMessagePatchDto()
{
}
ObjectMessagePatchDto::~ObjectMessagePatchDto()
{
}

utility::string_t ObjectMessagePatchDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OwnerUserId.has_value())
	{
		rapidjson::Value OwnerUserIdValue(TypeToJsonValue(m_OwnerUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerUserId", OwnerUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ParentId.has_value())
	{
		rapidjson::Value ParentIdValue(TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentId", ParentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Components.has_value())
	{
		rapidjson::Value ComponentsValue(TypeToJsonValue(m_Components, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("components", ComponentsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ObjectMessagePatchDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ObjectMessagePatchDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("ownerUserId"))
	{
		const rapidjson::Value& OwnerUserIdValue = JsonDoc["ownerUserId"];

		if (OwnerUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerUserIdValue, m_OwnerUserId);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member parentId is null!");
		}
	}

	if (JsonDoc.HasMember("components"))
	{
		const rapidjson::Value& ComponentsValue = JsonDoc["components"];

		if (ComponentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ComponentsValue, m_Components);
		}
	}
}


utility::string_t ObjectMessagePatchDto::GetOwnerUserId() const
{
	return m_OwnerUserId.value();
}

bool ObjectMessagePatchDto::HasOwnerUserId() const
{
	return m_OwnerUserId.has_value();
}
void ObjectMessagePatchDto::SetOwnerUserId(const utility::string_t& Value)
{
	m_OwnerUserId = Value;
}
std::shared_ptr<BooleanUInt32NullableTuple> ObjectMessagePatchDto::GetParentId() const
{
	return m_ParentId.value();
}

bool ObjectMessagePatchDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void ObjectMessagePatchDto::SetParentId(const std::shared_ptr<BooleanUInt32NullableTuple>& Value)
{
	m_ParentId = Value;
}
const std::map<utility::string_t, std::shared_ptr<IComponentData>>& ObjectMessagePatchDto::GetComponents() const
{
	return m_Components.value();
}

bool ObjectMessagePatchDto::HasComponents() const
{
	return m_Components.has_value();
}
void ObjectMessagePatchDto::SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value)
{
	m_Components = Value;
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

PubSubModel::PubSubModel()
{
}
PubSubModel::~PubSubModel()
{
}

utility::string_t PubSubModel::ToJson() const
{
	switch (Value)
	{
		case ePubSubModel::OBJECT:
			return "Object";
		case ePubSubModel::GLOBAL:
			return "Global";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void PubSubModel::FromJson(const utility::string_t& Val)
{
	if (Val == "Object")
	{
		Value = ePubSubModel::OBJECT;
	}
	else if (Val == "Global")
	{
		Value = ePubSubModel::GLOBAL;
	}
}

PubSubModel::ePubSubModel PubSubModel::GetValue() const
{
	return Value;
}

void PubSubModel::SetValue(PubSubModel::ePubSubModel const InValue)
{
	Value = InValue;
}

ScopeDto::ScopeDto()
{
}
ScopeDto::~ScopeDto()
{
}

utility::string_t ScopeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceId.has_value())
	{
		rapidjson::Value ReferenceIdValue(TypeToJsonValue(m_ReferenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceId", ReferenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_ReferenceType.has_value())
	{
		rapidjson::Value ReferenceTypeValue(TypeToJsonValue(m_ReferenceType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("referenceType", ReferenceTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_PubSubModel.has_value())
	{
		rapidjson::Value PubSubModelValue(TypeToJsonValue(m_PubSubModel, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pubSubModel", PubSubModelValue, JsonDoc.GetAllocator());
	}

	if (m_SolveRadius.has_value())
	{
		rapidjson::Value SolveRadiusValue(TypeToJsonValue(m_SolveRadius, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("solveRadius", SolveRadiusValue, JsonDoc.GetAllocator());
	}

	if (m_ManagedLeaderElection.has_value())
	{
		rapidjson::Value ManagedLeaderElectionValue(TypeToJsonValue(m_ManagedLeaderElection, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("managedLeaderElection", ManagedLeaderElectionValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ScopeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ScopeDto::FromJson");
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

	if (JsonDoc.HasMember("pubSubModel"))
	{
		const rapidjson::Value& PubSubModelValue = JsonDoc["pubSubModel"];

		if (PubSubModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PubSubModelValue, m_PubSubModel);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member pubSubModel is null!");
		}
	}

	if (JsonDoc.HasMember("solveRadius"))
	{
		const rapidjson::Value& SolveRadiusValue = JsonDoc["solveRadius"];

		if (SolveRadiusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SolveRadiusValue, m_SolveRadius);
		}
	}

	if (JsonDoc.HasMember("managedLeaderElection"))
	{
		const rapidjson::Value& ManagedLeaderElectionValue = JsonDoc["managedLeaderElection"];

		if (ManagedLeaderElectionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ManagedLeaderElectionValue, m_ManagedLeaderElection);
		}
	}
}


utility::string_t ScopeDto::GetId() const
{
	return m_Id.value();
}

bool ScopeDto::HasId() const
{
	return m_Id.has_value();
}
void ScopeDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ScopeDto::GetReferenceId() const
{
	return m_ReferenceId.value();
}

bool ScopeDto::HasReferenceId() const
{
	return m_ReferenceId.has_value();
}
void ScopeDto::SetReferenceId(const utility::string_t& Value)
{
	m_ReferenceId = Value;
}
utility::string_t ScopeDto::GetReferenceType() const
{
	return m_ReferenceType.value();
}

bool ScopeDto::HasReferenceType() const
{
	return m_ReferenceType.has_value();
}
void ScopeDto::SetReferenceType(const utility::string_t& Value)
{
	m_ReferenceType = Value;
}
utility::string_t ScopeDto::GetName() const
{
	return m_Name.value();
}

bool ScopeDto::HasName() const
{
	return m_Name.has_value();
}
void ScopeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
std::shared_ptr<PubSubModel> ScopeDto::GetPubSubModel() const
{
	return m_PubSubModel.value();
}

bool ScopeDto::HasPubSubModel() const
{
	return m_PubSubModel.has_value();
}
void ScopeDto::SetPubSubModel(const std::shared_ptr<PubSubModel>& Value)
{
	m_PubSubModel = Value;
}
double ScopeDto::GetSolveRadius() const
{
	return m_SolveRadius.value();
}

bool ScopeDto::HasSolveRadius() const
{
	return m_SolveRadius.has_value();
}
void ScopeDto::SetSolveRadius(double Value)
{
	m_SolveRadius = Value;
}
bool ScopeDto::GetManagedLeaderElection() const
{
	return m_ManagedLeaderElection.value();
}

bool ScopeDto::HasManagedLeaderElection() const
{
	return m_ManagedLeaderElection.has_value();
}
void ScopeDto::SetManagedLeaderElection(const bool& Value)
{
	m_ManagedLeaderElection = Value;
}

ScopeDtoDataPage::ScopeDtoDataPage()
{
}
ScopeDtoDataPage::~ScopeDtoDataPage()
{
}

utility::string_t ScopeDtoDataPage::ToJson() const
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

void ScopeDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ScopeDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<ScopeDto>>& ScopeDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ScopeDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ScopeDtoDataPage::SetItems(const std::vector<std::shared_ptr<ScopeDto>>& Value)
{
	m_Items = Value;
}
int32_t ScopeDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ScopeDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ScopeDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ScopeDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ScopeDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ScopeDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ScopeDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ScopeDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ScopeDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ScopeDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ScopeDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ScopeDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ScopeLeaderDto::ScopeLeaderDto()
{
}
ScopeLeaderDto::~ScopeLeaderDto()
{
}

utility::string_t ScopeLeaderDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ScopeId.has_value())
	{
		rapidjson::Value ScopeIdValue(TypeToJsonValue(m_ScopeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeId", ScopeIdValue, JsonDoc.GetAllocator());
	}

	if (m_LeaderUserId.has_value())
	{
		rapidjson::Value LeaderUserIdValue(TypeToJsonValue(m_LeaderUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaderUserId", LeaderUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_LeaderClientId.has_value())
	{
		rapidjson::Value LeaderClientIdValue(TypeToJsonValue(m_LeaderClientId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaderClientId", LeaderClientIdValue, JsonDoc.GetAllocator());
	}

	if (m_ElectionInProgress.has_value())
	{
		rapidjson::Value ElectionInProgressValue(TypeToJsonValue(m_ElectionInProgress, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("electionInProgress", ElectionInProgressValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludeConnectionIds.has_value())
	{
		rapidjson::Value ExcludeConnectionIdsValue(TypeToJsonValue(m_ExcludeConnectionIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludeConnectionIds", ExcludeConnectionIdsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ScopeLeaderDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ScopeLeaderDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("scopeId"))
	{
		const rapidjson::Value& ScopeIdValue = JsonDoc["scopeId"];

		if (ScopeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdValue, m_ScopeId);
		}
	}

	if (JsonDoc.HasMember("leaderUserId"))
	{
		const rapidjson::Value& LeaderUserIdValue = JsonDoc["leaderUserId"];

		if (LeaderUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaderUserIdValue, m_LeaderUserId);
		}
	}

	if (JsonDoc.HasMember("leaderClientId"))
	{
		const rapidjson::Value& LeaderClientIdValue = JsonDoc["leaderClientId"];

		if (LeaderClientIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaderClientIdValue, m_LeaderClientId);
		}
	}

	if (JsonDoc.HasMember("electionInProgress"))
	{
		const rapidjson::Value& ElectionInProgressValue = JsonDoc["electionInProgress"];

		if (ElectionInProgressValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ElectionInProgressValue, m_ElectionInProgress);
		}
	}

	if (JsonDoc.HasMember("excludeConnectionIds"))
	{
		const rapidjson::Value& ExcludeConnectionIdsValue = JsonDoc["excludeConnectionIds"];

		if (ExcludeConnectionIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludeConnectionIdsValue, m_ExcludeConnectionIds);
		}
	}
}


utility::string_t ScopeLeaderDto::GetScopeId() const
{
	return m_ScopeId.value();
}

bool ScopeLeaderDto::HasScopeId() const
{
	return m_ScopeId.has_value();
}
void ScopeLeaderDto::SetScopeId(const utility::string_t& Value)
{
	m_ScopeId = Value;
}
utility::string_t ScopeLeaderDto::GetLeaderUserId() const
{
	return m_LeaderUserId.value();
}

bool ScopeLeaderDto::HasLeaderUserId() const
{
	return m_LeaderUserId.has_value();
}
void ScopeLeaderDto::SetLeaderUserId(const utility::string_t& Value)
{
	m_LeaderUserId = Value;
}
int32_t ScopeLeaderDto::GetLeaderClientId() const
{
	return m_LeaderClientId.value();
}

bool ScopeLeaderDto::HasLeaderClientId() const
{
	return m_LeaderClientId.has_value();
}
void ScopeLeaderDto::SetLeaderClientId(int32_t Value)
{
	m_LeaderClientId = Value;
}
bool ScopeLeaderDto::GetElectionInProgress() const
{
	return m_ElectionInProgress.value();
}

bool ScopeLeaderDto::HasElectionInProgress() const
{
	return m_ElectionInProgress.has_value();
}
void ScopeLeaderDto::SetElectionInProgress(const bool& Value)
{
	m_ElectionInProgress = Value;
}
const std::vector<utility::string_t>& ScopeLeaderDto::GetExcludeConnectionIds() const
{
	return m_ExcludeConnectionIds.value();
}

bool ScopeLeaderDto::HasExcludeConnectionIds() const
{
	return m_ExcludeConnectionIds.has_value();
}
void ScopeLeaderDto::SetExcludeConnectionIds(const std::vector<utility::string_t>& Value)
{
	m_ExcludeConnectionIds = Value;
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


} // namespace csp::services::generated::multiplayerservice