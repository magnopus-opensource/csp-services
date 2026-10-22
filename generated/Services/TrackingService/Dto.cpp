

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Json/JsonParseHelper.h"
#include <optional>


using namespace csp::web;


namespace csp::services::generated::trackingservice
{


AgentOverrideDto::AgentOverrideDto()
{
}
AgentOverrideDto::~AgentOverrideDto()
{
}

utility::string_t AgentOverrideDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AgentId.has_value())
	{
		rapidjson::Value AgentIdValue(TypeToJsonValue(m_AgentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("agentId", AgentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_SystemInstruction.has_value())
	{
		rapidjson::Value SystemInstructionValue(TypeToJsonValue(m_SystemInstruction, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemInstruction", SystemInstructionValue, JsonDoc.GetAllocator());
	}

	if (m_Temperature.has_value())
	{
		rapidjson::Value TemperatureValue(TypeToJsonValue(m_Temperature, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("temperature", TemperatureValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AgentOverrideDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AgentOverrideDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("agentId"))
	{
		const rapidjson::Value& AgentIdValue = JsonDoc["agentId"];

		if (AgentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AgentIdValue, m_AgentId);
		}
	}

	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature);
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

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
		}
	}
}


utility::string_t AgentOverrideDto::GetAgentId() const
{
	return m_AgentId.value();
}

bool AgentOverrideDto::HasAgentId() const
{
	return m_AgentId.has_value();
}
void AgentOverrideDto::SetAgentId(const utility::string_t& Value)
{
	m_AgentId = Value;
}
utility::string_t AgentOverrideDto::GetProvider() const
{
	return m_Provider.value();
}

bool AgentOverrideDto::HasProvider() const
{
	return m_Provider.has_value();
}
void AgentOverrideDto::SetProvider(const utility::string_t& Value)
{
	m_Provider = Value;
}
utility::string_t AgentOverrideDto::GetModel() const
{
	return m_Model.value();
}

bool AgentOverrideDto::HasModel() const
{
	return m_Model.has_value();
}
void AgentOverrideDto::SetModel(const utility::string_t& Value)
{
	m_Model = Value;
}
utility::string_t AgentOverrideDto::GetSystemInstruction() const
{
	return m_SystemInstruction.value();
}

bool AgentOverrideDto::HasSystemInstruction() const
{
	return m_SystemInstruction.has_value();
}
void AgentOverrideDto::SetSystemInstruction(const utility::string_t& Value)
{
	m_SystemInstruction = Value;
}
double AgentOverrideDto::GetTemperature() const
{
	return m_Temperature.value();
}

bool AgentOverrideDto::HasTemperature() const
{
	return m_Temperature.has_value();
}
void AgentOverrideDto::SetTemperature(double Value)
{
	m_Temperature = Value;
}
utility::string_t AgentOverrideDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool AgentOverrideDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void AgentOverrideDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}
utility::string_t AgentOverrideDto::GetEncoding() const
{
	return m_Encoding.value();
}

bool AgentOverrideDto::HasEncoding() const
{
	return m_Encoding.has_value();
}
void AgentOverrideDto::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
}

AgentOverrideRequest::AgentOverrideRequest()
{
}
AgentOverrideRequest::~AgentOverrideRequest()
{
}

utility::string_t AgentOverrideRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_SystemInstruction.has_value())
	{
		rapidjson::Value SystemInstructionValue(TypeToJsonValue(m_SystemInstruction, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemInstruction", SystemInstructionValue, JsonDoc.GetAllocator());
	}

	if (m_Temperature.has_value())
	{
		rapidjson::Value TemperatureValue(TypeToJsonValue(m_Temperature, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("temperature", TemperatureValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AgentOverrideRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AgentOverrideRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
		}
	}
}


utility::string_t AgentOverrideRequest::GetProvider() const
{
	return m_Provider.value();
}

bool AgentOverrideRequest::HasProvider() const
{
	return m_Provider.has_value();
}
void AgentOverrideRequest::SetProvider(const utility::string_t& Value)
{
	m_Provider = Value;
}
utility::string_t AgentOverrideRequest::GetModel() const
{
	return m_Model.value();
}

bool AgentOverrideRequest::HasModel() const
{
	return m_Model.has_value();
}
void AgentOverrideRequest::SetModel(const utility::string_t& Value)
{
	m_Model = Value;
}
utility::string_t AgentOverrideRequest::GetSystemInstruction() const
{
	return m_SystemInstruction.value();
}

bool AgentOverrideRequest::HasSystemInstruction() const
{
	return m_SystemInstruction.has_value();
}
void AgentOverrideRequest::SetSystemInstruction(const utility::string_t& Value)
{
	m_SystemInstruction = Value;
}
double AgentOverrideRequest::GetTemperature() const
{
	return m_Temperature.value();
}

bool AgentOverrideRequest::HasTemperature() const
{
	return m_Temperature.has_value();
}
void AgentOverrideRequest::SetTemperature(double Value)
{
	m_Temperature = Value;
}
utility::string_t AgentOverrideRequest::GetEncoding() const
{
	return m_Encoding.value();
}

bool AgentOverrideRequest::HasEncoding() const
{
	return m_Encoding.has_value();
}
void AgentOverrideRequest::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
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

AssignmentDto::AssignmentDto()
{
}
AssignmentDto::~AssignmentDto()
{
}

utility::string_t AssignmentDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_PersonId.has_value())
	{
		rapidjson::Value PersonIdValue(TypeToJsonValue(m_PersonId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("personId", PersonIdValue, JsonDoc.GetAllocator());
	}

	if (m_ProjectId.has_value())
	{
		rapidjson::Value ProjectIdValue(TypeToJsonValue(m_ProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectId", ProjectIdValue, JsonDoc.GetAllocator());
	}

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

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssignmentDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssignmentDto::FromJson");
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

	if (JsonDoc.HasMember("personId"))
	{
		const rapidjson::Value& PersonIdValue = JsonDoc["personId"];

		if (PersonIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdValue, m_PersonId);
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId);
		}
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

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
	}
}


utility::string_t AssignmentDto::GetId() const
{
	return m_Id.value();
}

bool AssignmentDto::HasId() const
{
	return m_Id.has_value();
}
void AssignmentDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t AssignmentDto::GetPersonId() const
{
	return m_PersonId.value();
}

bool AssignmentDto::HasPersonId() const
{
	return m_PersonId.has_value();
}
void AssignmentDto::SetPersonId(const utility::string_t& Value)
{
	m_PersonId = Value;
}
utility::string_t AssignmentDto::GetProjectId() const
{
	return m_ProjectId.value();
}

bool AssignmentDto::HasProjectId() const
{
	return m_ProjectId.has_value();
}
void AssignmentDto::SetProjectId(const utility::string_t& Value)
{
	m_ProjectId = Value;
}
utility::string_t AssignmentDto::GetDate() const
{
	return m_Date.value();
}

bool AssignmentDto::HasDate() const
{
	return m_Date.has_value();
}
void AssignmentDto::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
double AssignmentDto::GetHours() const
{
	return m_Hours.value();
}

bool AssignmentDto::HasHours() const
{
	return m_Hours.has_value();
}
void AssignmentDto::SetHours(double Value)
{
	m_Hours = Value;
}
utility::string_t AssignmentDto::GetKind() const
{
	return m_Kind.value();
}

bool AssignmentDto::HasKind() const
{
	return m_Kind.has_value();
}
void AssignmentDto::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}

AssignmentUpsertRequest::AssignmentUpsertRequest()
{
}
AssignmentUpsertRequest::~AssignmentUpsertRequest()
{
}

utility::string_t AssignmentUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PersonId.has_value())
	{
		rapidjson::Value PersonIdValue(TypeToJsonValue(m_PersonId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("personId", PersonIdValue, JsonDoc.GetAllocator());
	}

	if (m_ProjectId.has_value())
	{
		rapidjson::Value ProjectIdValue(TypeToJsonValue(m_ProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectId", ProjectIdValue, JsonDoc.GetAllocator());
	}

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

	if (m_ReplacesAssignmentId.has_value())
	{
		rapidjson::Value ReplacesAssignmentIdValue(TypeToJsonValue(m_ReplacesAssignmentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("replacesAssignmentId", ReplacesAssignmentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssignmentUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssignmentUpsertRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("personId"))
	{
		const rapidjson::Value& PersonIdValue = JsonDoc["personId"];

		if (PersonIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdValue, m_PersonId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member personId is null!");
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId);
		}
	}

	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member date is null!");
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

	if (JsonDoc.HasMember("replacesAssignmentId"))
	{
		const rapidjson::Value& ReplacesAssignmentIdValue = JsonDoc["replacesAssignmentId"];

		if (ReplacesAssignmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReplacesAssignmentIdValue, m_ReplacesAssignmentId);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
	}
}


utility::string_t AssignmentUpsertRequest::GetPersonId() const
{
	return m_PersonId.value();
}

bool AssignmentUpsertRequest::HasPersonId() const
{
	return m_PersonId.has_value();
}
void AssignmentUpsertRequest::SetPersonId(const utility::string_t& Value)
{
	m_PersonId = Value;
}
utility::string_t AssignmentUpsertRequest::GetProjectId() const
{
	return m_ProjectId.value();
}

bool AssignmentUpsertRequest::HasProjectId() const
{
	return m_ProjectId.has_value();
}
void AssignmentUpsertRequest::SetProjectId(const utility::string_t& Value)
{
	m_ProjectId = Value;
}
utility::string_t AssignmentUpsertRequest::GetDate() const
{
	return m_Date.value();
}

bool AssignmentUpsertRequest::HasDate() const
{
	return m_Date.has_value();
}
void AssignmentUpsertRequest::SetDate(const utility::string_t& Value)
{
	m_Date = Value;
}
double AssignmentUpsertRequest::GetHours() const
{
	return m_Hours.value();
}

bool AssignmentUpsertRequest::HasHours() const
{
	return m_Hours.has_value();
}
void AssignmentUpsertRequest::SetHours(double Value)
{
	m_Hours = Value;
}
utility::string_t AssignmentUpsertRequest::GetReplacesAssignmentId() const
{
	return m_ReplacesAssignmentId.value();
}

bool AssignmentUpsertRequest::HasReplacesAssignmentId() const
{
	return m_ReplacesAssignmentId.has_value();
}
void AssignmentUpsertRequest::SetReplacesAssignmentId(const utility::string_t& Value)
{
	m_ReplacesAssignmentId = Value;
}
utility::string_t AssignmentUpsertRequest::GetKind() const
{
	return m_Kind.value();
}

bool AssignmentUpsertRequest::HasKind() const
{
	return m_Kind.has_value();
}
void AssignmentUpsertRequest::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}

BulkAssignRequest::BulkAssignRequest()
{
}
BulkAssignRequest::~BulkAssignRequest()
{
}

utility::string_t BulkAssignRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PersonIds.has_value())
	{
		rapidjson::Value PersonIdsValue(TypeToJsonValue(m_PersonIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("personIds", PersonIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ProjectId.has_value())
	{
		rapidjson::Value ProjectIdValue(TypeToJsonValue(m_ProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectId", ProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_From.has_value())
	{
		rapidjson::Value FromValue(TypeToJsonValue(m_From, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("from", FromValue, JsonDoc.GetAllocator());
	}

	if (m_To.has_value())
	{
		rapidjson::Value ToValue(TypeToJsonValue(m_To, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("to", ToValue, JsonDoc.GetAllocator());
	}

	if (m_HoursPerDay.has_value())
	{
		rapidjson::Value HoursPerDayValue(TypeToJsonValue(m_HoursPerDay, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hoursPerDay", HoursPerDayValue, JsonDoc.GetAllocator());
	}

	if (m_WeekdaysOnly.has_value())
	{
		rapidjson::Value WeekdaysOnlyValue(TypeToJsonValue(m_WeekdaysOnly, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("weekdaysOnly", WeekdaysOnlyValue, JsonDoc.GetAllocator());
	}

	if (m_Overwrite.has_value())
	{
		rapidjson::Value OverwriteValue(TypeToJsonValue(m_Overwrite, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("overwrite", OverwriteValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BulkAssignRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkAssignRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("personIds"))
	{
		const rapidjson::Value& PersonIdsValue = JsonDoc["personIds"];

		if (PersonIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdsValue, m_PersonIds);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member personIds is null!");
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId);
		}
	}

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member from is null!");
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member to is null!");
		}
	}

	if (JsonDoc.HasMember("hoursPerDay"))
	{
		const rapidjson::Value& HoursPerDayValue = JsonDoc["hoursPerDay"];

		if (HoursPerDayValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HoursPerDayValue, m_HoursPerDay);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member hoursPerDay is null!");
		}
	}

	if (JsonDoc.HasMember("weekdaysOnly"))
	{
		const rapidjson::Value& WeekdaysOnlyValue = JsonDoc["weekdaysOnly"];

		if (WeekdaysOnlyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeekdaysOnlyValue, m_WeekdaysOnly);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member weekdaysOnly is null!");
		}
	}

	if (JsonDoc.HasMember("overwrite"))
	{
		const rapidjson::Value& OverwriteValue = JsonDoc["overwrite"];

		if (OverwriteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverwriteValue, m_Overwrite);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member overwrite is null!");
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
	}
}


const std::vector<utility::string_t>& BulkAssignRequest::GetPersonIds() const
{
	return m_PersonIds.value();
}

bool BulkAssignRequest::HasPersonIds() const
{
	return m_PersonIds.has_value();
}
void BulkAssignRequest::SetPersonIds(const std::vector<utility::string_t>& Value)
{
	m_PersonIds = Value;
}
utility::string_t BulkAssignRequest::GetProjectId() const
{
	return m_ProjectId.value();
}

bool BulkAssignRequest::HasProjectId() const
{
	return m_ProjectId.has_value();
}
void BulkAssignRequest::SetProjectId(const utility::string_t& Value)
{
	m_ProjectId = Value;
}
utility::string_t BulkAssignRequest::GetFrom() const
{
	return m_From.value();
}

bool BulkAssignRequest::HasFrom() const
{
	return m_From.has_value();
}
void BulkAssignRequest::SetFrom(const utility::string_t& Value)
{
	m_From = Value;
}
utility::string_t BulkAssignRequest::GetTo() const
{
	return m_To.value();
}

bool BulkAssignRequest::HasTo() const
{
	return m_To.has_value();
}
void BulkAssignRequest::SetTo(const utility::string_t& Value)
{
	m_To = Value;
}
double BulkAssignRequest::GetHoursPerDay() const
{
	return m_HoursPerDay.value();
}

bool BulkAssignRequest::HasHoursPerDay() const
{
	return m_HoursPerDay.has_value();
}
void BulkAssignRequest::SetHoursPerDay(double Value)
{
	m_HoursPerDay = Value;
}
bool BulkAssignRequest::GetWeekdaysOnly() const
{
	return m_WeekdaysOnly.value();
}

bool BulkAssignRequest::HasWeekdaysOnly() const
{
	return m_WeekdaysOnly.has_value();
}
void BulkAssignRequest::SetWeekdaysOnly(const bool& Value)
{
	m_WeekdaysOnly = Value;
}
bool BulkAssignRequest::GetOverwrite() const
{
	return m_Overwrite.value();
}

bool BulkAssignRequest::HasOverwrite() const
{
	return m_Overwrite.has_value();
}
void BulkAssignRequest::SetOverwrite(const bool& Value)
{
	m_Overwrite = Value;
}
utility::string_t BulkAssignRequest::GetKind() const
{
	return m_Kind.value();
}

bool BulkAssignRequest::HasKind() const
{
	return m_Kind.has_value();
}
void BulkAssignRequest::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}

BulkAssignResultDto::BulkAssignResultDto()
{
}
BulkAssignResultDto::~BulkAssignResultDto()
{
}

utility::string_t BulkAssignResultDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Applied.has_value())
	{
		rapidjson::Value AppliedValue(TypeToJsonValue(m_Applied, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("applied", AppliedValue, JsonDoc.GetAllocator());
	}

	if (m_Written.has_value())
	{
		rapidjson::Value WrittenValue(TypeToJsonValue(m_Written, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("written", WrittenValue, JsonDoc.GetAllocator());
	}

	if (m_Replaced.has_value())
	{
		rapidjson::Value ReplacedValue(TypeToJsonValue(m_Replaced, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("replaced", ReplacedValue, JsonDoc.GetAllocator());
	}

	if (m_Conflicts.has_value())
	{
		rapidjson::Value ConflictsValue(TypeToJsonValue(m_Conflicts, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("conflicts", ConflictsValue, JsonDoc.GetAllocator());
	}

	if (m_Shared.has_value())
	{
		rapidjson::Value SharedValue(TypeToJsonValue(m_Shared, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shared", SharedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BulkAssignResultDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkAssignResultDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("applied"))
	{
		const rapidjson::Value& AppliedValue = JsonDoc["applied"];

		if (AppliedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliedValue, m_Applied);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member applied is null!");
		}
	}

	if (JsonDoc.HasMember("written"))
	{
		const rapidjson::Value& WrittenValue = JsonDoc["written"];

		if (WrittenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WrittenValue, m_Written);
		}
	}

	if (JsonDoc.HasMember("replaced"))
	{
		const rapidjson::Value& ReplacedValue = JsonDoc["replaced"];

		if (ReplacedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReplacedValue, m_Replaced);
		}
	}

	if (JsonDoc.HasMember("conflicts"))
	{
		const rapidjson::Value& ConflictsValue = JsonDoc["conflicts"];

		if (ConflictsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConflictsValue, m_Conflicts);
		}
	}

	if (JsonDoc.HasMember("shared"))
	{
		const rapidjson::Value& SharedValue = JsonDoc["shared"];

		if (SharedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SharedValue, m_Shared);
		}
	}
}


bool BulkAssignResultDto::GetApplied() const
{
	return m_Applied.value();
}

bool BulkAssignResultDto::HasApplied() const
{
	return m_Applied.has_value();
}
void BulkAssignResultDto::SetApplied(const bool& Value)
{
	m_Applied = Value;
}
const std::vector<std::shared_ptr<AssignmentDto>>& BulkAssignResultDto::GetWritten() const
{
	return m_Written.value();
}

bool BulkAssignResultDto::HasWritten() const
{
	return m_Written.has_value();
}
void BulkAssignResultDto::SetWritten(const std::vector<std::shared_ptr<AssignmentDto>>& Value)
{
	m_Written = Value;
}
const std::vector<std::shared_ptr<AssignmentDto>>& BulkAssignResultDto::GetReplaced() const
{
	return m_Replaced.value();
}

bool BulkAssignResultDto::HasReplaced() const
{
	return m_Replaced.has_value();
}
void BulkAssignResultDto::SetReplaced(const std::vector<std::shared_ptr<AssignmentDto>>& Value)
{
	m_Replaced = Value;
}
const std::vector<std::shared_ptr<AssignmentDto>>& BulkAssignResultDto::GetConflicts() const
{
	return m_Conflicts.value();
}

bool BulkAssignResultDto::HasConflicts() const
{
	return m_Conflicts.has_value();
}
void BulkAssignResultDto::SetConflicts(const std::vector<std::shared_ptr<AssignmentDto>>& Value)
{
	m_Conflicts = Value;
}
const std::vector<std::shared_ptr<AssignmentDto>>& BulkAssignResultDto::GetShared() const
{
	return m_Shared.value();
}

bool BulkAssignResultDto::HasShared() const
{
	return m_Shared.has_value();
}
void BulkAssignResultDto::SetShared(const std::vector<std::shared_ptr<AssignmentDto>>& Value)
{
	m_Shared = Value;
}

CdnFetchRequest::CdnFetchRequest()
{
}
CdnFetchRequest::~CdnFetchRequest()
{
}

utility::string_t CdnFetchRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Uri.has_value())
	{
		rapidjson::Value UriValue(TypeToJsonValue(m_Uri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uri", UriValue, JsonDoc.GetAllocator());
	}

	if (m_TenantToken.has_value())
	{
		rapidjson::Value TenantTokenValue(TypeToJsonValue(m_TenantToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantToken", TenantTokenValue, JsonDoc.GetAllocator());
	}

	if (m_Tenant.has_value())
	{
		rapidjson::Value TenantValue(TypeToJsonValue(m_Tenant, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenant", TenantValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CdnFetchRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CdnFetchRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri);
		}
	}

	if (JsonDoc.HasMember("tenantToken"))
	{
		const rapidjson::Value& TenantTokenValue = JsonDoc["tenantToken"];

		if (TenantTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantTokenValue, m_TenantToken);
		}
	}

	if (JsonDoc.HasMember("tenant"))
	{
		const rapidjson::Value& TenantValue = JsonDoc["tenant"];

		if (TenantValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantValue, m_Tenant);
		}
	}
}


utility::string_t CdnFetchRequest::GetUri() const
{
	return m_Uri.value();
}

bool CdnFetchRequest::HasUri() const
{
	return m_Uri.has_value();
}
void CdnFetchRequest::SetUri(const utility::string_t& Value)
{
	m_Uri = Value;
}
utility::string_t CdnFetchRequest::GetTenantToken() const
{
	return m_TenantToken.value();
}

bool CdnFetchRequest::HasTenantToken() const
{
	return m_TenantToken.has_value();
}
void CdnFetchRequest::SetTenantToken(const utility::string_t& Value)
{
	m_TenantToken = Value;
}
utility::string_t CdnFetchRequest::GetTenant() const
{
	return m_Tenant.value();
}

bool CdnFetchRequest::HasTenant() const
{
	return m_Tenant.has_value();
}
void CdnFetchRequest::SetTenant(const utility::string_t& Value)
{
	m_Tenant = Value;
}

ClaimHistoryDto::ClaimHistoryDto()
{
}
ClaimHistoryDto::~ClaimHistoryDto()
{
}

utility::string_t ClaimHistoryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_SystemId.has_value())
	{
		rapidjson::Value SystemIdValue(TypeToJsonValue(m_SystemId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemId", SystemIdValue, JsonDoc.GetAllocator());
	}

	if (m_HolderId.has_value())
	{
		rapidjson::Value HolderIdValue(TypeToJsonValue(m_HolderId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("holderId", HolderIdValue, JsonDoc.GetAllocator());
	}

	if (m_HolderName.has_value())
	{
		rapidjson::Value HolderNameValue(TypeToJsonValue(m_HolderName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("holderName", HolderNameValue, JsonDoc.GetAllocator());
	}

	if (m_Note.has_value())
	{
		rapidjson::Value NoteValue(TypeToJsonValue(m_Note, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("note", NoteValue, JsonDoc.GetAllocator());
	}

	if (m_ReleaseNote.has_value())
	{
		rapidjson::Value ReleaseNoteValue(TypeToJsonValue(m_ReleaseNote, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("releaseNote", ReleaseNoteValue, JsonDoc.GetAllocator());
	}

	if (m_TakenAt.has_value())
	{
		rapidjson::Value TakenAtValue(TypeToJsonValue(m_TakenAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("takenAt", TakenAtValue, JsonDoc.GetAllocator());
	}

	if (m_ReleasedAt.has_value())
	{
		rapidjson::Value ReleasedAtValue(TypeToJsonValue(m_ReleasedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("releasedAt", ReleasedAtValue, JsonDoc.GetAllocator());
	}

	if (m_DurationMs.has_value())
	{
		rapidjson::Value DurationMsValue(TypeToJsonValue(m_DurationMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("durationMs", DurationMsValue, JsonDoc.GetAllocator());
	}

	if (m_ReleasedByUserId.has_value())
	{
		rapidjson::Value ReleasedByUserIdValue(TypeToJsonValue(m_ReleasedByUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("releasedByUserId", ReleasedByUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_Forced.has_value())
	{
		rapidjson::Value ForcedValue(TypeToJsonValue(m_Forced, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("forced", ForcedValue, JsonDoc.GetAllocator());
	}

	if (m_HolderKind.has_value())
	{
		rapidjson::Value HolderKindValue(TypeToJsonValue(m_HolderKind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("holderKind", HolderKindValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ClaimHistoryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimHistoryDto::FromJson");
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

	if (JsonDoc.HasMember("systemId"))
	{
		const rapidjson::Value& SystemIdValue = JsonDoc["systemId"];

		if (SystemIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemIdValue, m_SystemId);
		}
	}

	if (JsonDoc.HasMember("holderId"))
	{
		const rapidjson::Value& HolderIdValue = JsonDoc["holderId"];

		if (HolderIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderIdValue, m_HolderId);
		}
	}

	if (JsonDoc.HasMember("holderName"))
	{
		const rapidjson::Value& HolderNameValue = JsonDoc["holderName"];

		if (HolderNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderNameValue, m_HolderName);
		}
	}

	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note);
		}
	}

	if (JsonDoc.HasMember("releaseNote"))
	{
		const rapidjson::Value& ReleaseNoteValue = JsonDoc["releaseNote"];

		if (ReleaseNoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleaseNoteValue, m_ReleaseNote);
		}
	}

	if (JsonDoc.HasMember("takenAt"))
	{
		const rapidjson::Value& TakenAtValue = JsonDoc["takenAt"];

		if (TakenAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TakenAtValue, m_TakenAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member takenAt is null!");
		}
	}

	if (JsonDoc.HasMember("releasedAt"))
	{
		const rapidjson::Value& ReleasedAtValue = JsonDoc["releasedAt"];

		if (ReleasedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedAtValue, m_ReleasedAt);
		}
	}

	if (JsonDoc.HasMember("durationMs"))
	{
		const rapidjson::Value& DurationMsValue = JsonDoc["durationMs"];

		if (DurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurationMsValue, m_DurationMs);
		}
	}

	if (JsonDoc.HasMember("releasedByUserId"))
	{
		const rapidjson::Value& ReleasedByUserIdValue = JsonDoc["releasedByUserId"];

		if (ReleasedByUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedByUserIdValue, m_ReleasedByUserId);
		}
	}

	if (JsonDoc.HasMember("forced"))
	{
		const rapidjson::Value& ForcedValue = JsonDoc["forced"];

		if (ForcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ForcedValue, m_Forced);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member forced is null!");
		}
	}

	if (JsonDoc.HasMember("holderKind"))
	{
		const rapidjson::Value& HolderKindValue = JsonDoc["holderKind"];

		if (HolderKindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderKindValue, m_HolderKind);
		}
	}
}


utility::string_t ClaimHistoryDto::GetId() const
{
	return m_Id.value();
}

bool ClaimHistoryDto::HasId() const
{
	return m_Id.has_value();
}
void ClaimHistoryDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ClaimHistoryDto::GetSystemId() const
{
	return m_SystemId.value();
}

bool ClaimHistoryDto::HasSystemId() const
{
	return m_SystemId.has_value();
}
void ClaimHistoryDto::SetSystemId(const utility::string_t& Value)
{
	m_SystemId = Value;
}
utility::string_t ClaimHistoryDto::GetHolderId() const
{
	return m_HolderId.value();
}

bool ClaimHistoryDto::HasHolderId() const
{
	return m_HolderId.has_value();
}
void ClaimHistoryDto::SetHolderId(const utility::string_t& Value)
{
	m_HolderId = Value;
}
utility::string_t ClaimHistoryDto::GetHolderName() const
{
	return m_HolderName.value();
}

bool ClaimHistoryDto::HasHolderName() const
{
	return m_HolderName.has_value();
}
void ClaimHistoryDto::SetHolderName(const utility::string_t& Value)
{
	m_HolderName = Value;
}
utility::string_t ClaimHistoryDto::GetNote() const
{
	return m_Note.value();
}

bool ClaimHistoryDto::HasNote() const
{
	return m_Note.has_value();
}
void ClaimHistoryDto::SetNote(const utility::string_t& Value)
{
	m_Note = Value;
}
utility::string_t ClaimHistoryDto::GetReleaseNote() const
{
	return m_ReleaseNote.value();
}

bool ClaimHistoryDto::HasReleaseNote() const
{
	return m_ReleaseNote.has_value();
}
void ClaimHistoryDto::SetReleaseNote(const utility::string_t& Value)
{
	m_ReleaseNote = Value;
}
utility::string_t ClaimHistoryDto::GetTakenAt() const
{
	return m_TakenAt.value();
}

bool ClaimHistoryDto::HasTakenAt() const
{
	return m_TakenAt.has_value();
}
void ClaimHistoryDto::SetTakenAt(const utility::string_t& Value)
{
	m_TakenAt = Value;
}
utility::string_t ClaimHistoryDto::GetReleasedAt() const
{
	return m_ReleasedAt.value();
}

bool ClaimHistoryDto::HasReleasedAt() const
{
	return m_ReleasedAt.has_value();
}
void ClaimHistoryDto::SetReleasedAt(const utility::string_t& Value)
{
	m_ReleasedAt = Value;
}
int64_t ClaimHistoryDto::GetDurationMs() const
{
	return m_DurationMs.value();
}

bool ClaimHistoryDto::HasDurationMs() const
{
	return m_DurationMs.has_value();
}
void ClaimHistoryDto::SetDurationMs(int64_t Value)
{
	m_DurationMs = Value;
}
utility::string_t ClaimHistoryDto::GetReleasedByUserId() const
{
	return m_ReleasedByUserId.value();
}

bool ClaimHistoryDto::HasReleasedByUserId() const
{
	return m_ReleasedByUserId.has_value();
}
void ClaimHistoryDto::SetReleasedByUserId(const utility::string_t& Value)
{
	m_ReleasedByUserId = Value;
}
bool ClaimHistoryDto::GetForced() const
{
	return m_Forced.value();
}

bool ClaimHistoryDto::HasForced() const
{
	return m_Forced.has_value();
}
void ClaimHistoryDto::SetForced(const bool& Value)
{
	m_Forced = Value;
}
utility::string_t ClaimHistoryDto::GetHolderKind() const
{
	return m_HolderKind.value();
}

bool ClaimHistoryDto::HasHolderKind() const
{
	return m_HolderKind.has_value();
}
void ClaimHistoryDto::SetHolderKind(const utility::string_t& Value)
{
	m_HolderKind = Value;
}

ClaimHistoryDtoDataPage::ClaimHistoryDtoDataPage()
{
}
ClaimHistoryDtoDataPage::~ClaimHistoryDtoDataPage()
{
}

utility::string_t ClaimHistoryDtoDataPage::ToJson() const
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

void ClaimHistoryDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimHistoryDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<ClaimHistoryDto>>& ClaimHistoryDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ClaimHistoryDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ClaimHistoryDtoDataPage::SetItems(const std::vector<std::shared_ptr<ClaimHistoryDto>>& Value)
{
	m_Items = Value;
}
int32_t ClaimHistoryDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ClaimHistoryDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ClaimHistoryDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ClaimHistoryDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ClaimHistoryDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ClaimHistoryDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ClaimHistoryDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ClaimHistoryDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ClaimHistoryDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ClaimHistoryDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ClaimHistoryDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ClaimHistoryDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ClaimOutcomeDto::ClaimOutcomeDto()
{
}
ClaimOutcomeDto::~ClaimOutcomeDto()
{
}

utility::string_t ClaimOutcomeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Outcome.has_value())
	{
		rapidjson::Value OutcomeValue(TypeToJsonValue(m_Outcome, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("outcome", OutcomeValue, JsonDoc.GetAllocator());
	}

	if (m_System.has_value())
	{
		rapidjson::Value SystemValue(TypeToJsonValue(m_System, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("system", SystemValue, JsonDoc.GetAllocator());
	}

	if (m_ClaimId.has_value())
	{
		rapidjson::Value ClaimIdValue(TypeToJsonValue(m_ClaimId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("claimId", ClaimIdValue, JsonDoc.GetAllocator());
	}

	if (m_MissedByMs.has_value())
	{
		rapidjson::Value MissedByMsValue(TypeToJsonValue(m_MissedByMs, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("missedByMs", MissedByMsValue, JsonDoc.GetAllocator());
	}

	if (m_Forced.has_value())
	{
		rapidjson::Value ForcedValue(TypeToJsonValue(m_Forced, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("forced", ForcedValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ClaimOutcomeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimOutcomeDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("outcome"))
	{
		const rapidjson::Value& OutcomeValue = JsonDoc["outcome"];

		if (OutcomeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutcomeValue, m_Outcome);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member system is null!");
		}
	}

	if (JsonDoc.HasMember("claimId"))
	{
		const rapidjson::Value& ClaimIdValue = JsonDoc["claimId"];

		if (ClaimIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClaimIdValue, m_ClaimId);
		}
	}

	if (JsonDoc.HasMember("missedByMs"))
	{
		const rapidjson::Value& MissedByMsValue = JsonDoc["missedByMs"];

		if (MissedByMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MissedByMsValue, m_MissedByMs);
		}
	}

	if (JsonDoc.HasMember("forced"))
	{
		const rapidjson::Value& ForcedValue = JsonDoc["forced"];

		if (ForcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ForcedValue, m_Forced);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member forced is null!");
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
}


utility::string_t ClaimOutcomeDto::GetOutcome() const
{
	return m_Outcome.value();
}

bool ClaimOutcomeDto::HasOutcome() const
{
	return m_Outcome.has_value();
}
void ClaimOutcomeDto::SetOutcome(const utility::string_t& Value)
{
	m_Outcome = Value;
}
std::shared_ptr<SystemDto> ClaimOutcomeDto::GetSystem() const
{
	return m_System.value();
}

bool ClaimOutcomeDto::HasSystem() const
{
	return m_System.has_value();
}
void ClaimOutcomeDto::SetSystem(const std::shared_ptr<SystemDto>& Value)
{
	m_System = Value;
}
utility::string_t ClaimOutcomeDto::GetClaimId() const
{
	return m_ClaimId.value();
}

bool ClaimOutcomeDto::HasClaimId() const
{
	return m_ClaimId.has_value();
}
void ClaimOutcomeDto::SetClaimId(const utility::string_t& Value)
{
	m_ClaimId = Value;
}
double ClaimOutcomeDto::GetMissedByMs() const
{
	return m_MissedByMs.value();
}

bool ClaimOutcomeDto::HasMissedByMs() const
{
	return m_MissedByMs.has_value();
}
void ClaimOutcomeDto::SetMissedByMs(double Value)
{
	m_MissedByMs = Value;
}
bool ClaimOutcomeDto::GetForced() const
{
	return m_Forced.value();
}

bool ClaimOutcomeDto::HasForced() const
{
	return m_Forced.has_value();
}
void ClaimOutcomeDto::SetForced(const bool& Value)
{
	m_Forced = Value;
}
utility::string_t ClaimOutcomeDto::GetMessage() const
{
	return m_Message.value();
}

bool ClaimOutcomeDto::HasMessage() const
{
	return m_Message.has_value();
}
void ClaimOutcomeDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
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

DaigramCreateRequest::DaigramCreateRequest()
{
}
DaigramCreateRequest::~DaigramCreateRequest()
{
}

utility::string_t DaigramCreateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DaigramCreateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramCreateRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}
}


utility::string_t DaigramCreateRequest::GetName() const
{
	return m_Name.value();
}

bool DaigramCreateRequest::HasName() const
{
	return m_Name.has_value();
}
void DaigramCreateRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}

DaigramDto::DaigramDto()
{
}
DaigramDto::~DaigramDto()
{
}

utility::string_t DaigramDto::ToJson() const
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

	if (m_OwnerId.has_value())
	{
		rapidjson::Value OwnerIdValue(TypeToJsonValue(m_OwnerId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ownerId", OwnerIdValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_ScopeId.has_value())
	{
		rapidjson::Value ScopeIdValue(TypeToJsonValue(m_ScopeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scopeId", ScopeIdValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailPrototypeId.has_value())
	{
		rapidjson::Value ThumbnailPrototypeIdValue(TypeToJsonValue(m_ThumbnailPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailPrototypeId", ThumbnailPrototypeIdValue, JsonDoc.GetAllocator());
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

	if (m_Role.has_value())
	{
		rapidjson::Value RoleValue(TypeToJsonValue(m_Role, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("role", RoleValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DaigramDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramDto::FromJson");
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

	if (JsonDoc.HasMember("ownerId"))
	{
		const rapidjson::Value& OwnerIdValue = JsonDoc["ownerId"];

		if (OwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerIdValue, m_OwnerId);
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
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

	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId);
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

	if (JsonDoc.HasMember("role"))
	{
		const rapidjson::Value& RoleValue = JsonDoc["role"];

		if (RoleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoleValue, m_Role);
		}
	}
}


utility::string_t DaigramDto::GetId() const
{
	return m_Id.value();
}

bool DaigramDto::HasId() const
{
	return m_Id.has_value();
}
void DaigramDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t DaigramDto::GetName() const
{
	return m_Name.value();
}

bool DaigramDto::HasName() const
{
	return m_Name.has_value();
}
void DaigramDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t DaigramDto::GetOwnerId() const
{
	return m_OwnerId.value();
}

bool DaigramDto::HasOwnerId() const
{
	return m_OwnerId.has_value();
}
void DaigramDto::SetOwnerId(const utility::string_t& Value)
{
	m_OwnerId = Value;
}
utility::string_t DaigramDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool DaigramDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void DaigramDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}
utility::string_t DaigramDto::GetScopeId() const
{
	return m_ScopeId.value();
}

bool DaigramDto::HasScopeId() const
{
	return m_ScopeId.has_value();
}
void DaigramDto::SetScopeId(const utility::string_t& Value)
{
	m_ScopeId = Value;
}
utility::string_t DaigramDto::GetThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.value();
}

bool DaigramDto::HasThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.has_value();
}
void DaigramDto::SetThumbnailPrototypeId(const utility::string_t& Value)
{
	m_ThumbnailPrototypeId = Value;
}
utility::string_t DaigramDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool DaigramDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void DaigramDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t DaigramDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool DaigramDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void DaigramDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}
utility::string_t DaigramDto::GetRole() const
{
	return m_Role.value();
}

bool DaigramDto::HasRole() const
{
	return m_Role.has_value();
}
void DaigramDto::SetRole(const utility::string_t& Value)
{
	m_Role = Value;
}

DaigramThumbnailRequest::DaigramThumbnailRequest()
{
}
DaigramThumbnailRequest::~DaigramThumbnailRequest()
{
}

utility::string_t DaigramThumbnailRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ThumbnailPrototypeId.has_value())
	{
		rapidjson::Value ThumbnailPrototypeIdValue(TypeToJsonValue(m_ThumbnailPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailPrototypeId", ThumbnailPrototypeIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DaigramThumbnailRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramThumbnailRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member thumbnailPrototypeId is null!");
		}
	}
}


utility::string_t DaigramThumbnailRequest::GetThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.value();
}

bool DaigramThumbnailRequest::HasThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.has_value();
}
void DaigramThumbnailRequest::SetThumbnailPrototypeId(const utility::string_t& Value)
{
	m_ThumbnailPrototypeId = Value;
}

DaigramUpdateRequest::DaigramUpdateRequest()
{
}
DaigramUpdateRequest::~DaigramUpdateRequest()
{
}

utility::string_t DaigramUpdateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DaigramUpdateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramUpdateRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}
}


utility::string_t DaigramUpdateRequest::GetName() const
{
	return m_Name.value();
}

bool DaigramUpdateRequest::HasName() const
{
	return m_Name.has_value();
}
void DaigramUpdateRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}

DepartmentDto::DepartmentDto()
{
}
DepartmentDto::~DepartmentDto()
{
}

utility::string_t DepartmentDto::ToJson() const
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

	if (m_SortOrder.has_value())
	{
		rapidjson::Value SortOrderValue(TypeToJsonValue(m_SortOrder, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sortOrder", SortOrderValue, JsonDoc.GetAllocator());
	}

	if (m_TitleLadder.has_value())
	{
		rapidjson::Value TitleLadderValue(TypeToJsonValue(m_TitleLadder, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("titleLadder", TitleLadderValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DepartmentDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DepartmentDto::FromJson");
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

	if (JsonDoc.HasMember("sortOrder"))
	{
		const rapidjson::Value& SortOrderValue = JsonDoc["sortOrder"];

		if (SortOrderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SortOrderValue, m_SortOrder);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sortOrder is null!");
		}
	}

	if (JsonDoc.HasMember("titleLadder"))
	{
		const rapidjson::Value& TitleLadderValue = JsonDoc["titleLadder"];

		if (TitleLadderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleLadderValue, m_TitleLadder);
		}
	}
}


utility::string_t DepartmentDto::GetId() const
{
	return m_Id.value();
}

bool DepartmentDto::HasId() const
{
	return m_Id.has_value();
}
void DepartmentDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t DepartmentDto::GetName() const
{
	return m_Name.value();
}

bool DepartmentDto::HasName() const
{
	return m_Name.has_value();
}
void DepartmentDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
int32_t DepartmentDto::GetSortOrder() const
{
	return m_SortOrder.value();
}

bool DepartmentDto::HasSortOrder() const
{
	return m_SortOrder.has_value();
}
void DepartmentDto::SetSortOrder(int32_t Value)
{
	m_SortOrder = Value;
}
const std::vector<utility::string_t>& DepartmentDto::GetTitleLadder() const
{
	return m_TitleLadder.value();
}

bool DepartmentDto::HasTitleLadder() const
{
	return m_TitleLadder.has_value();
}
void DepartmentDto::SetTitleLadder(const std::vector<utility::string_t>& Value)
{
	m_TitleLadder = Value;
}

DepartmentUpsertRequest::DepartmentUpsertRequest()
{
}
DepartmentUpsertRequest::~DepartmentUpsertRequest()
{
}

utility::string_t DepartmentUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_SortOrder.has_value())
	{
		rapidjson::Value SortOrderValue(TypeToJsonValue(m_SortOrder, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sortOrder", SortOrderValue, JsonDoc.GetAllocator());
	}

	if (m_TitleLadder.has_value())
	{
		rapidjson::Value TitleLadderValue(TypeToJsonValue(m_TitleLadder, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("titleLadder", TitleLadderValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DepartmentUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DepartmentUpsertRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("sortOrder"))
	{
		const rapidjson::Value& SortOrderValue = JsonDoc["sortOrder"];

		if (SortOrderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SortOrderValue, m_SortOrder);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sortOrder is null!");
		}
	}

	if (JsonDoc.HasMember("titleLadder"))
	{
		const rapidjson::Value& TitleLadderValue = JsonDoc["titleLadder"];

		if (TitleLadderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleLadderValue, m_TitleLadder);
		}
	}
}


utility::string_t DepartmentUpsertRequest::GetName() const
{
	return m_Name.value();
}

bool DepartmentUpsertRequest::HasName() const
{
	return m_Name.has_value();
}
void DepartmentUpsertRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
int32_t DepartmentUpsertRequest::GetSortOrder() const
{
	return m_SortOrder.value();
}

bool DepartmentUpsertRequest::HasSortOrder() const
{
	return m_SortOrder.has_value();
}
void DepartmentUpsertRequest::SetSortOrder(int32_t Value)
{
	m_SortOrder = Value;
}
const std::vector<utility::string_t>& DepartmentUpsertRequest::GetTitleLadder() const
{
	return m_TitleLadder.value();
}

bool DepartmentUpsertRequest::HasTitleLadder() const
{
	return m_TitleLadder.has_value();
}
void DepartmentUpsertRequest::SetTitleLadder(const std::vector<utility::string_t>& Value)
{
	m_TitleLadder = Value;
}

EffortEdge::EffortEdge()
{
}
EffortEdge::~EffortEdge()
{
}

utility::string_t EffortEdge::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_From.has_value())
	{
		rapidjson::Value FromValue(TypeToJsonValue(m_From, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("from", FromValue, JsonDoc.GetAllocator());
	}

	if (m_To.has_value())
	{
		rapidjson::Value ToValue(TypeToJsonValue(m_To, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("to", ToValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortEdge::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortEdge::FromJson");
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

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From);
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To);
		}
	}
}


utility::string_t EffortEdge::GetType() const
{
	return m_Type.value();
}

bool EffortEdge::HasType() const
{
	return m_Type.has_value();
}
void EffortEdge::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t EffortEdge::GetFrom() const
{
	return m_From.value();
}

bool EffortEdge::HasFrom() const
{
	return m_From.has_value();
}
void EffortEdge::SetFrom(const utility::string_t& Value)
{
	m_From = Value;
}
utility::string_t EffortEdge::GetTo() const
{
	return m_To.value();
}

bool EffortEdge::HasTo() const
{
	return m_To.has_value();
}
void EffortEdge::SetTo(const utility::string_t& Value)
{
	m_To = Value;
}

EffortResourceBulkGetRequest::EffortResourceBulkGetRequest()
{
}
EffortResourceBulkGetRequest::~EffortResourceBulkGetRequest()
{
}

utility::string_t EffortResourceBulkGetRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Keys.has_value())
	{
		rapidjson::Value KeysValue(TypeToJsonValue(m_Keys, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("keys", KeysValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceBulkGetRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceBulkGetRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member keys is null!");
		}
	}
}


utility::string_t EffortResourceBulkGetRequest::GetFamily() const
{
	return m_Family.value();
}

bool EffortResourceBulkGetRequest::HasFamily() const
{
	return m_Family.has_value();
}
void EffortResourceBulkGetRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
const std::vector<utility::string_t>& EffortResourceBulkGetRequest::GetKeys() const
{
	return m_Keys.value();
}

bool EffortResourceBulkGetRequest::HasKeys() const
{
	return m_Keys.has_value();
}
void EffortResourceBulkGetRequest::SetKeys(const std::vector<utility::string_t>& Value)
{
	m_Keys = Value;
}

EffortResourceDto::EffortResourceDto()
{
}
EffortResourceDto::~EffortResourceDto()
{
}

utility::string_t EffortResourceDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}

	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Summary.has_value())
	{
		rapidjson::Value SummaryValue(TypeToJsonValue(m_Summary, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("summary", SummaryValue, JsonDoc.GetAllocator());
	}

	if (m_Genre.has_value())
	{
		rapidjson::Value GenreValue(TypeToJsonValue(m_Genre, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("genre", GenreValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCategory.has_value())
	{
		rapidjson::Value StatusCategoryValue(TypeToJsonValue(m_StatusCategory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCategory", StatusCategoryValue, JsonDoc.GetAllocator());
	}

	if (m_Owner.has_value())
	{
		rapidjson::Value OwnerValue(TypeToJsonValue(m_Owner, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("owner", OwnerValue, JsonDoc.GetAllocator());
	}

	if (m_OccurredAt.has_value())
	{
		rapidjson::Value OccurredAtValue(TypeToJsonValue(m_OccurredAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("occurredAt", OccurredAtValue, JsonDoc.GetAllocator());
	}

	if (m_SourcePath.has_value())
	{
		rapidjson::Value SourcePathValue(TypeToJsonValue(m_SourcePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourcePath", SourcePathValue, JsonDoc.GetAllocator());
	}

	if (m_SourceUrl.has_value())
	{
		rapidjson::Value SourceUrlValue(TypeToJsonValue(m_SourceUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceUrl", SourceUrlValue, JsonDoc.GetAllocator());
	}

	if (m_Evidence.has_value())
	{
		rapidjson::Value EvidenceValue(TypeToJsonValue(m_Evidence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("evidence", EvidenceValue, JsonDoc.GetAllocator());
	}

	if (m_ContentHash.has_value())
	{
		rapidjson::Value ContentHashValue(TypeToJsonValue(m_ContentHash, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("contentHash", ContentHashValue, JsonDoc.GetAllocator());
	}

	if (m_ProvenanceTier.has_value())
	{
		rapidjson::Value ProvenanceTierValue(TypeToJsonValue(m_ProvenanceTier, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provenanceTier", ProvenanceTierValue, JsonDoc.GetAllocator());
	}

	if (m_Edges.has_value())
	{
		rapidjson::Value EdgesValue(TypeToJsonValue(m_Edges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("edges", EdgesValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_DeletedAt.has_value())
	{
		rapidjson::Value DeletedAtValue(TypeToJsonValue(m_DeletedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("deletedAt", DeletedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
	}

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key);
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

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary);
		}
	}

	if (JsonDoc.HasMember("genre"))
	{
		const rapidjson::Value& GenreValue = JsonDoc["genre"];

		if (GenreValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GenreValue, m_Genre);
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

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory);
		}
	}

	if (JsonDoc.HasMember("owner"))
	{
		const rapidjson::Value& OwnerValue = JsonDoc["owner"];

		if (OwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerValue, m_Owner);
		}
	}

	if (JsonDoc.HasMember("occurredAt"))
	{
		const rapidjson::Value& OccurredAtValue = JsonDoc["occurredAt"];

		if (OccurredAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OccurredAtValue, m_OccurredAt);
		}
	}

	if (JsonDoc.HasMember("sourcePath"))
	{
		const rapidjson::Value& SourcePathValue = JsonDoc["sourcePath"];

		if (SourcePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourcePathValue, m_SourcePath);
		}
	}

	if (JsonDoc.HasMember("sourceUrl"))
	{
		const rapidjson::Value& SourceUrlValue = JsonDoc["sourceUrl"];

		if (SourceUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUrlValue, m_SourceUrl);
		}
	}

	if (JsonDoc.HasMember("evidence"))
	{
		const rapidjson::Value& EvidenceValue = JsonDoc["evidence"];

		if (EvidenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EvidenceValue, m_Evidence);
		}
	}

	if (JsonDoc.HasMember("contentHash"))
	{
		const rapidjson::Value& ContentHashValue = JsonDoc["contentHash"];

		if (ContentHashValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentHashValue, m_ContentHash);
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provenanceTier is null!");
		}
	}

	if (JsonDoc.HasMember("edges"))
	{
		const rapidjson::Value& EdgesValue = JsonDoc["edges"];

		if (EdgesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EdgesValue, m_Edges);
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

	if (JsonDoc.HasMember("deletedAt"))
	{
		const rapidjson::Value& DeletedAtValue = JsonDoc["deletedAt"];

		if (DeletedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeletedAtValue, m_DeletedAt);
		}
	}
}


utility::string_t EffortResourceDto::GetFamily() const
{
	return m_Family.value();
}

bool EffortResourceDto::HasFamily() const
{
	return m_Family.has_value();
}
void EffortResourceDto::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t EffortResourceDto::GetKind() const
{
	return m_Kind.value();
}

bool EffortResourceDto::HasKind() const
{
	return m_Kind.has_value();
}
void EffortResourceDto::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}
utility::string_t EffortResourceDto::GetKey() const
{
	return m_Key.value();
}

bool EffortResourceDto::HasKey() const
{
	return m_Key.has_value();
}
void EffortResourceDto::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
utility::string_t EffortResourceDto::GetTitle() const
{
	return m_Title.value();
}

bool EffortResourceDto::HasTitle() const
{
	return m_Title.has_value();
}
void EffortResourceDto::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
utility::string_t EffortResourceDto::GetSummary() const
{
	return m_Summary.value();
}

bool EffortResourceDto::HasSummary() const
{
	return m_Summary.has_value();
}
void EffortResourceDto::SetSummary(const utility::string_t& Value)
{
	m_Summary = Value;
}
utility::string_t EffortResourceDto::GetGenre() const
{
	return m_Genre.value();
}

bool EffortResourceDto::HasGenre() const
{
	return m_Genre.has_value();
}
void EffortResourceDto::SetGenre(const utility::string_t& Value)
{
	m_Genre = Value;
}
utility::string_t EffortResourceDto::GetStatus() const
{
	return m_Status.value();
}

bool EffortResourceDto::HasStatus() const
{
	return m_Status.has_value();
}
void EffortResourceDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t EffortResourceDto::GetStatusCategory() const
{
	return m_StatusCategory.value();
}

bool EffortResourceDto::HasStatusCategory() const
{
	return m_StatusCategory.has_value();
}
void EffortResourceDto::SetStatusCategory(const utility::string_t& Value)
{
	m_StatusCategory = Value;
}
utility::string_t EffortResourceDto::GetOwner() const
{
	return m_Owner.value();
}

bool EffortResourceDto::HasOwner() const
{
	return m_Owner.has_value();
}
void EffortResourceDto::SetOwner(const utility::string_t& Value)
{
	m_Owner = Value;
}
utility::string_t EffortResourceDto::GetOccurredAt() const
{
	return m_OccurredAt.value();
}

bool EffortResourceDto::HasOccurredAt() const
{
	return m_OccurredAt.has_value();
}
void EffortResourceDto::SetOccurredAt(const utility::string_t& Value)
{
	m_OccurredAt = Value;
}
utility::string_t EffortResourceDto::GetSourcePath() const
{
	return m_SourcePath.value();
}

bool EffortResourceDto::HasSourcePath() const
{
	return m_SourcePath.has_value();
}
void EffortResourceDto::SetSourcePath(const utility::string_t& Value)
{
	m_SourcePath = Value;
}
utility::string_t EffortResourceDto::GetSourceUrl() const
{
	return m_SourceUrl.value();
}

bool EffortResourceDto::HasSourceUrl() const
{
	return m_SourceUrl.has_value();
}
void EffortResourceDto::SetSourceUrl(const utility::string_t& Value)
{
	m_SourceUrl = Value;
}
utility::string_t EffortResourceDto::GetEvidence() const
{
	return m_Evidence.value();
}

bool EffortResourceDto::HasEvidence() const
{
	return m_Evidence.has_value();
}
void EffortResourceDto::SetEvidence(const utility::string_t& Value)
{
	m_Evidence = Value;
}
utility::string_t EffortResourceDto::GetContentHash() const
{
	return m_ContentHash.value();
}

bool EffortResourceDto::HasContentHash() const
{
	return m_ContentHash.has_value();
}
void EffortResourceDto::SetContentHash(const utility::string_t& Value)
{
	m_ContentHash = Value;
}
int32_t EffortResourceDto::GetProvenanceTier() const
{
	return m_ProvenanceTier.value();
}

bool EffortResourceDto::HasProvenanceTier() const
{
	return m_ProvenanceTier.has_value();
}
void EffortResourceDto::SetProvenanceTier(int32_t Value)
{
	m_ProvenanceTier = Value;
}
const std::vector<std::shared_ptr<EffortEdge>>& EffortResourceDto::GetEdges() const
{
	return m_Edges.value();
}

bool EffortResourceDto::HasEdges() const
{
	return m_Edges.has_value();
}
void EffortResourceDto::SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value)
{
	m_Edges = Value;
}
const std::vector<utility::string_t>& EffortResourceDto::GetTags() const
{
	return m_Tags.value();
}

bool EffortResourceDto::HasTags() const
{
	return m_Tags.has_value();
}
void EffortResourceDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t EffortResourceDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool EffortResourceDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void EffortResourceDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}
utility::string_t EffortResourceDto::GetDeletedAt() const
{
	return m_DeletedAt.value();
}

bool EffortResourceDto::HasDeletedAt() const
{
	return m_DeletedAt.has_value();
}
void EffortResourceDto::SetDeletedAt(const utility::string_t& Value)
{
	m_DeletedAt = Value;
}

EffortResourceRemoveRequest::EffortResourceRemoveRequest()
{
}
EffortResourceRemoveRequest::~EffortResourceRemoveRequest()
{
}

utility::string_t EffortResourceRemoveRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Keys.has_value())
	{
		rapidjson::Value KeysValue(TypeToJsonValue(m_Keys, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("keys", KeysValue, JsonDoc.GetAllocator());
	}

	if (m_ProvenanceTier.has_value())
	{
		rapidjson::Value ProvenanceTierValue(TypeToJsonValue(m_ProvenanceTier, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provenanceTier", ProvenanceTierValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceRemoveRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceRemoveRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member keys is null!");
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provenanceTier is null!");
		}
	}
}


utility::string_t EffortResourceRemoveRequest::GetFamily() const
{
	return m_Family.value();
}

bool EffortResourceRemoveRequest::HasFamily() const
{
	return m_Family.has_value();
}
void EffortResourceRemoveRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
const std::vector<utility::string_t>& EffortResourceRemoveRequest::GetKeys() const
{
	return m_Keys.value();
}

bool EffortResourceRemoveRequest::HasKeys() const
{
	return m_Keys.has_value();
}
void EffortResourceRemoveRequest::SetKeys(const std::vector<utility::string_t>& Value)
{
	m_Keys = Value;
}
int32_t EffortResourceRemoveRequest::GetProvenanceTier() const
{
	return m_ProvenanceTier.value();
}

bool EffortResourceRemoveRequest::HasProvenanceTier() const
{
	return m_ProvenanceTier.has_value();
}
void EffortResourceRemoveRequest::SetProvenanceTier(int32_t Value)
{
	m_ProvenanceTier = Value;
}

EffortResourceRemoveResult::EffortResourceRemoveResult()
{
}
EffortResourceRemoveResult::~EffortResourceRemoveResult()
{
}

utility::string_t EffortResourceRemoveResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Removed.has_value())
	{
		rapidjson::Value RemovedValue(TypeToJsonValue(m_Removed, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("removed", RemovedValue, JsonDoc.GetAllocator());
	}

	if (m_AlreadyRemoved.has_value())
	{
		rapidjson::Value AlreadyRemovedValue(TypeToJsonValue(m_AlreadyRemoved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("alreadyRemoved", AlreadyRemovedValue, JsonDoc.GetAllocator());
	}

	if (m_GatedKeys.has_value())
	{
		rapidjson::Value GatedKeysValue(TypeToJsonValue(m_GatedKeys, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gatedKeys", GatedKeysValue, JsonDoc.GetAllocator());
	}

	if (m_MissingKeys.has_value())
	{
		rapidjson::Value MissingKeysValue(TypeToJsonValue(m_MissingKeys, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("missingKeys", MissingKeysValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceRemoveResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceRemoveResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("removed"))
	{
		const rapidjson::Value& RemovedValue = JsonDoc["removed"];

		if (RemovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RemovedValue, m_Removed);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member removed is null!");
		}
	}

	if (JsonDoc.HasMember("alreadyRemoved"))
	{
		const rapidjson::Value& AlreadyRemovedValue = JsonDoc["alreadyRemoved"];

		if (AlreadyRemovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AlreadyRemovedValue, m_AlreadyRemoved);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member alreadyRemoved is null!");
		}
	}

	if (JsonDoc.HasMember("gatedKeys"))
	{
		const rapidjson::Value& GatedKeysValue = JsonDoc["gatedKeys"];

		if (GatedKeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GatedKeysValue, m_GatedKeys);
		}
	}

	if (JsonDoc.HasMember("missingKeys"))
	{
		const rapidjson::Value& MissingKeysValue = JsonDoc["missingKeys"];

		if (MissingKeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MissingKeysValue, m_MissingKeys);
		}
	}
}


int32_t EffortResourceRemoveResult::GetRemoved() const
{
	return m_Removed.value();
}

bool EffortResourceRemoveResult::HasRemoved() const
{
	return m_Removed.has_value();
}
void EffortResourceRemoveResult::SetRemoved(int32_t Value)
{
	m_Removed = Value;
}
int32_t EffortResourceRemoveResult::GetAlreadyRemoved() const
{
	return m_AlreadyRemoved.value();
}

bool EffortResourceRemoveResult::HasAlreadyRemoved() const
{
	return m_AlreadyRemoved.has_value();
}
void EffortResourceRemoveResult::SetAlreadyRemoved(int32_t Value)
{
	m_AlreadyRemoved = Value;
}
const std::vector<utility::string_t>& EffortResourceRemoveResult::GetGatedKeys() const
{
	return m_GatedKeys.value();
}

bool EffortResourceRemoveResult::HasGatedKeys() const
{
	return m_GatedKeys.has_value();
}
void EffortResourceRemoveResult::SetGatedKeys(const std::vector<utility::string_t>& Value)
{
	m_GatedKeys = Value;
}
const std::vector<utility::string_t>& EffortResourceRemoveResult::GetMissingKeys() const
{
	return m_MissingKeys.value();
}

bool EffortResourceRemoveResult::HasMissingKeys() const
{
	return m_MissingKeys.has_value();
}
void EffortResourceRemoveResult::SetMissingKeys(const std::vector<utility::string_t>& Value)
{
	m_MissingKeys = Value;
}

EffortResourceSearchRequest::EffortResourceSearchRequest()
{
}
EffortResourceSearchRequest::~EffortResourceSearchRequest()
{
}

utility::string_t EffortResourceSearchRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Since.has_value())
	{
		rapidjson::Value SinceValue(TypeToJsonValue(m_Since, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("since", SinceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceSearchRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceSearchRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since);
		}
	}
}


const std::vector<utility::string_t>& EffortResourceSearchRequest::GetTags() const
{
	return m_Tags.value();
}

bool EffortResourceSearchRequest::HasTags() const
{
	return m_Tags.has_value();
}
void EffortResourceSearchRequest::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t EffortResourceSearchRequest::GetFamily() const
{
	return m_Family.value();
}

bool EffortResourceSearchRequest::HasFamily() const
{
	return m_Family.has_value();
}
void EffortResourceSearchRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t EffortResourceSearchRequest::GetSince() const
{
	return m_Since.value();
}

bool EffortResourceSearchRequest::HasSince() const
{
	return m_Since.has_value();
}
void EffortResourceSearchRequest::SetSince(const utility::string_t& Value)
{
	m_Since = Value;
}

EffortResourceSearchResponse::EffortResourceSearchResponse()
{
}
EffortResourceSearchResponse::~EffortResourceSearchResponse()
{
}

utility::string_t EffortResourceSearchResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Since.has_value())
	{
		rapidjson::Value SinceValue(TypeToJsonValue(m_Since, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("since", SinceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceSearchResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceSearchResponse::FromJson");
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

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member since is null!");
		}
	}
}


const std::vector<std::shared_ptr<EffortResourceDto>>& EffortResourceSearchResponse::GetItems() const
{
	return m_Items.value();
}

bool EffortResourceSearchResponse::HasItems() const
{
	return m_Items.has_value();
}
void EffortResourceSearchResponse::SetItems(const std::vector<std::shared_ptr<EffortResourceDto>>& Value)
{
	m_Items = Value;
}
utility::string_t EffortResourceSearchResponse::GetSince() const
{
	return m_Since.value();
}

bool EffortResourceSearchResponse::HasSince() const
{
	return m_Since.has_value();
}
void EffortResourceSearchResponse::SetSince(const utility::string_t& Value)
{
	m_Since = Value;
}

EffortResourceUpsertItem::EffortResourceUpsertItem()
{
}
EffortResourceUpsertItem::~EffortResourceUpsertItem()
{
}

utility::string_t EffortResourceUpsertItem::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_Summary.has_value())
	{
		rapidjson::Value SummaryValue(TypeToJsonValue(m_Summary, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("summary", SummaryValue, JsonDoc.GetAllocator());
	}

	if (m_Genre.has_value())
	{
		rapidjson::Value GenreValue(TypeToJsonValue(m_Genre, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("genre", GenreValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCategory.has_value())
	{
		rapidjson::Value StatusCategoryValue(TypeToJsonValue(m_StatusCategory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCategory", StatusCategoryValue, JsonDoc.GetAllocator());
	}

	if (m_Owner.has_value())
	{
		rapidjson::Value OwnerValue(TypeToJsonValue(m_Owner, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("owner", OwnerValue, JsonDoc.GetAllocator());
	}

	if (m_OccurredAt.has_value())
	{
		rapidjson::Value OccurredAtValue(TypeToJsonValue(m_OccurredAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("occurredAt", OccurredAtValue, JsonDoc.GetAllocator());
	}

	if (m_SourcePath.has_value())
	{
		rapidjson::Value SourcePathValue(TypeToJsonValue(m_SourcePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourcePath", SourcePathValue, JsonDoc.GetAllocator());
	}

	if (m_SourceUrl.has_value())
	{
		rapidjson::Value SourceUrlValue(TypeToJsonValue(m_SourceUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceUrl", SourceUrlValue, JsonDoc.GetAllocator());
	}

	if (m_Evidence.has_value())
	{
		rapidjson::Value EvidenceValue(TypeToJsonValue(m_Evidence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("evidence", EvidenceValue, JsonDoc.GetAllocator());
	}

	if (m_ContentHash.has_value())
	{
		rapidjson::Value ContentHashValue(TypeToJsonValue(m_ContentHash, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("contentHash", ContentHashValue, JsonDoc.GetAllocator());
	}

	if (m_ProvenanceTier.has_value())
	{
		rapidjson::Value ProvenanceTierValue(TypeToJsonValue(m_ProvenanceTier, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provenanceTier", ProvenanceTierValue, JsonDoc.GetAllocator());
	}

	if (m_Edges.has_value())
	{
		rapidjson::Value EdgesValue(TypeToJsonValue(m_Edges, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("edges", EdgesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceUpsertItem::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertItem::FromJson");
	if (!ok)
	{
		return;
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

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
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

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary);
		}
	}

	if (JsonDoc.HasMember("genre"))
	{
		const rapidjson::Value& GenreValue = JsonDoc["genre"];

		if (GenreValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GenreValue, m_Genre);
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

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory);
		}
	}

	if (JsonDoc.HasMember("owner"))
	{
		const rapidjson::Value& OwnerValue = JsonDoc["owner"];

		if (OwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerValue, m_Owner);
		}
	}

	if (JsonDoc.HasMember("occurredAt"))
	{
		const rapidjson::Value& OccurredAtValue = JsonDoc["occurredAt"];

		if (OccurredAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OccurredAtValue, m_OccurredAt);
		}
	}

	if (JsonDoc.HasMember("sourcePath"))
	{
		const rapidjson::Value& SourcePathValue = JsonDoc["sourcePath"];

		if (SourcePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourcePathValue, m_SourcePath);
		}
	}

	if (JsonDoc.HasMember("sourceUrl"))
	{
		const rapidjson::Value& SourceUrlValue = JsonDoc["sourceUrl"];

		if (SourceUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUrlValue, m_SourceUrl);
		}
	}

	if (JsonDoc.HasMember("evidence"))
	{
		const rapidjson::Value& EvidenceValue = JsonDoc["evidence"];

		if (EvidenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EvidenceValue, m_Evidence);
		}
	}

	if (JsonDoc.HasMember("contentHash"))
	{
		const rapidjson::Value& ContentHashValue = JsonDoc["contentHash"];

		if (ContentHashValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentHashValue, m_ContentHash);
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member provenanceTier is null!");
		}
	}

	if (JsonDoc.HasMember("edges"))
	{
		const rapidjson::Value& EdgesValue = JsonDoc["edges"];

		if (EdgesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EdgesValue, m_Edges);
		}
	}
}


utility::string_t EffortResourceUpsertItem::GetKey() const
{
	return m_Key.value();
}

bool EffortResourceUpsertItem::HasKey() const
{
	return m_Key.has_value();
}
void EffortResourceUpsertItem::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
utility::string_t EffortResourceUpsertItem::GetFamily() const
{
	return m_Family.value();
}

bool EffortResourceUpsertItem::HasFamily() const
{
	return m_Family.has_value();
}
void EffortResourceUpsertItem::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t EffortResourceUpsertItem::GetKind() const
{
	return m_Kind.value();
}

bool EffortResourceUpsertItem::HasKind() const
{
	return m_Kind.has_value();
}
void EffortResourceUpsertItem::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}
const std::vector<utility::string_t>& EffortResourceUpsertItem::GetTags() const
{
	return m_Tags.value();
}

bool EffortResourceUpsertItem::HasTags() const
{
	return m_Tags.has_value();
}
void EffortResourceUpsertItem::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t EffortResourceUpsertItem::GetTitle() const
{
	return m_Title.value();
}

bool EffortResourceUpsertItem::HasTitle() const
{
	return m_Title.has_value();
}
void EffortResourceUpsertItem::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
utility::string_t EffortResourceUpsertItem::GetSummary() const
{
	return m_Summary.value();
}

bool EffortResourceUpsertItem::HasSummary() const
{
	return m_Summary.has_value();
}
void EffortResourceUpsertItem::SetSummary(const utility::string_t& Value)
{
	m_Summary = Value;
}
utility::string_t EffortResourceUpsertItem::GetGenre() const
{
	return m_Genre.value();
}

bool EffortResourceUpsertItem::HasGenre() const
{
	return m_Genre.has_value();
}
void EffortResourceUpsertItem::SetGenre(const utility::string_t& Value)
{
	m_Genre = Value;
}
utility::string_t EffortResourceUpsertItem::GetStatus() const
{
	return m_Status.value();
}

bool EffortResourceUpsertItem::HasStatus() const
{
	return m_Status.has_value();
}
void EffortResourceUpsertItem::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t EffortResourceUpsertItem::GetStatusCategory() const
{
	return m_StatusCategory.value();
}

bool EffortResourceUpsertItem::HasStatusCategory() const
{
	return m_StatusCategory.has_value();
}
void EffortResourceUpsertItem::SetStatusCategory(const utility::string_t& Value)
{
	m_StatusCategory = Value;
}
utility::string_t EffortResourceUpsertItem::GetOwner() const
{
	return m_Owner.value();
}

bool EffortResourceUpsertItem::HasOwner() const
{
	return m_Owner.has_value();
}
void EffortResourceUpsertItem::SetOwner(const utility::string_t& Value)
{
	m_Owner = Value;
}
utility::string_t EffortResourceUpsertItem::GetOccurredAt() const
{
	return m_OccurredAt.value();
}

bool EffortResourceUpsertItem::HasOccurredAt() const
{
	return m_OccurredAt.has_value();
}
void EffortResourceUpsertItem::SetOccurredAt(const utility::string_t& Value)
{
	m_OccurredAt = Value;
}
utility::string_t EffortResourceUpsertItem::GetSourcePath() const
{
	return m_SourcePath.value();
}

bool EffortResourceUpsertItem::HasSourcePath() const
{
	return m_SourcePath.has_value();
}
void EffortResourceUpsertItem::SetSourcePath(const utility::string_t& Value)
{
	m_SourcePath = Value;
}
utility::string_t EffortResourceUpsertItem::GetSourceUrl() const
{
	return m_SourceUrl.value();
}

bool EffortResourceUpsertItem::HasSourceUrl() const
{
	return m_SourceUrl.has_value();
}
void EffortResourceUpsertItem::SetSourceUrl(const utility::string_t& Value)
{
	m_SourceUrl = Value;
}
utility::string_t EffortResourceUpsertItem::GetEvidence() const
{
	return m_Evidence.value();
}

bool EffortResourceUpsertItem::HasEvidence() const
{
	return m_Evidence.has_value();
}
void EffortResourceUpsertItem::SetEvidence(const utility::string_t& Value)
{
	m_Evidence = Value;
}
utility::string_t EffortResourceUpsertItem::GetContentHash() const
{
	return m_ContentHash.value();
}

bool EffortResourceUpsertItem::HasContentHash() const
{
	return m_ContentHash.has_value();
}
void EffortResourceUpsertItem::SetContentHash(const utility::string_t& Value)
{
	m_ContentHash = Value;
}
int32_t EffortResourceUpsertItem::GetProvenanceTier() const
{
	return m_ProvenanceTier.value();
}

bool EffortResourceUpsertItem::HasProvenanceTier() const
{
	return m_ProvenanceTier.has_value();
}
void EffortResourceUpsertItem::SetProvenanceTier(int32_t Value)
{
	m_ProvenanceTier = Value;
}
const std::vector<std::shared_ptr<EffortEdge>>& EffortResourceUpsertItem::GetEdges() const
{
	return m_Edges.value();
}

bool EffortResourceUpsertItem::HasEdges() const
{
	return m_Edges.has_value();
}
void EffortResourceUpsertItem::SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value)
{
	m_Edges = Value;
}

EffortResourceUpsertRequest::EffortResourceUpsertRequest()
{
}
EffortResourceUpsertRequest::~EffortResourceUpsertRequest()
{
}

utility::string_t EffortResourceUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
		}
	}
}


const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& EffortResourceUpsertRequest::GetItems() const
{
	return m_Items.value();
}

bool EffortResourceUpsertRequest::HasItems() const
{
	return m_Items.has_value();
}
void EffortResourceUpsertRequest::SetItems(const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& Value)
{
	m_Items = Value;
}

EffortResourceUpsertResult::EffortResourceUpsertResult()
{
}
EffortResourceUpsertResult::~EffortResourceUpsertResult()
{
}

utility::string_t EffortResourceUpsertResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Created.has_value())
	{
		rapidjson::Value CreatedValue(TypeToJsonValue(m_Created, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("created", CreatedValue, JsonDoc.GetAllocator());
	}

	if (m_Updated.has_value())
	{
		rapidjson::Value UpdatedValue(TypeToJsonValue(m_Updated, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updated", UpdatedValue, JsonDoc.GetAllocator());
	}

	if (m_Skipped.has_value())
	{
		rapidjson::Value SkippedValue(TypeToJsonValue(m_Skipped, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skipped", SkippedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void EffortResourceUpsertResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member created is null!");
		}
	}

	if (JsonDoc.HasMember("updated"))
	{
		const rapidjson::Value& UpdatedValue = JsonDoc["updated"];

		if (UpdatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedValue, m_Updated);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member updated is null!");
		}
	}

	if (JsonDoc.HasMember("skipped"))
	{
		const rapidjson::Value& SkippedValue = JsonDoc["skipped"];

		if (SkippedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkippedValue, m_Skipped);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skipped is null!");
		}
	}
}


int32_t EffortResourceUpsertResult::GetCreated() const
{
	return m_Created.value();
}

bool EffortResourceUpsertResult::HasCreated() const
{
	return m_Created.has_value();
}
void EffortResourceUpsertResult::SetCreated(int32_t Value)
{
	m_Created = Value;
}
int32_t EffortResourceUpsertResult::GetUpdated() const
{
	return m_Updated.value();
}

bool EffortResourceUpsertResult::HasUpdated() const
{
	return m_Updated.has_value();
}
void EffortResourceUpsertResult::SetUpdated(int32_t Value)
{
	m_Updated = Value;
}
int32_t EffortResourceUpsertResult::GetSkipped() const
{
	return m_Skipped.value();
}

bool EffortResourceUpsertResult::HasSkipped() const
{
	return m_Skipped.has_value();
}
void EffortResourceUpsertResult::SetSkipped(int32_t Value)
{
	m_Skipped = Value;
}

JiraCreateMetaDto::JiraCreateMetaDto()
{
}
JiraCreateMetaDto::~JiraCreateMetaDto()
{
}

utility::string_t JiraCreateMetaDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_IssueTypes.has_value())
	{
		rapidjson::Value IssueTypesValue(TypeToJsonValue(m_IssueTypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("issueTypes", IssueTypesValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraCreateMetaDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
	}

	if (JsonDoc.HasMember("issueTypes"))
	{
		const rapidjson::Value& IssueTypesValue = JsonDoc["issueTypes"];

		if (IssueTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypesValue, m_IssueTypes);
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
}


utility::string_t JiraCreateMetaDto::GetFamily() const
{
	return m_Family.value();
}

bool JiraCreateMetaDto::HasFamily() const
{
	return m_Family.has_value();
}
void JiraCreateMetaDto::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraCreateMetaDto::GetProject() const
{
	return m_Project.value();
}

bool JiraCreateMetaDto::HasProject() const
{
	return m_Project.has_value();
}
void JiraCreateMetaDto::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& JiraCreateMetaDto::GetIssueTypes() const
{
	return m_IssueTypes.value();
}

bool JiraCreateMetaDto::HasIssueTypes() const
{
	return m_IssueTypes.has_value();
}
void JiraCreateMetaDto::SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value)
{
	m_IssueTypes = Value;
}
utility::string_t JiraCreateMetaDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool JiraCreateMetaDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void JiraCreateMetaDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

JiraCreateMetaField::JiraCreateMetaField()
{
}
JiraCreateMetaField::~JiraCreateMetaField()
{
}

utility::string_t JiraCreateMetaField::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FieldId.has_value())
	{
		rapidjson::Value FieldIdValue(TypeToJsonValue(m_FieldId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fieldId", FieldIdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Required.has_value())
	{
		rapidjson::Value RequiredValue(TypeToJsonValue(m_Required, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("required", RequiredValue, JsonDoc.GetAllocator());
	}

	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Custom.has_value())
	{
		rapidjson::Value CustomValue(TypeToJsonValue(m_Custom, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("custom", CustomValue, JsonDoc.GetAllocator());
	}

	if (m_System.has_value())
	{
		rapidjson::Value SystemValue(TypeToJsonValue(m_System, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("system", SystemValue, JsonDoc.GetAllocator());
	}

	if (m_AutoComplete.has_value())
	{
		rapidjson::Value AutoCompleteValue(TypeToJsonValue(m_AutoComplete, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("autoComplete", AutoCompleteValue, JsonDoc.GetAllocator());
	}

	if (m_HasDefaultValue.has_value())
	{
		rapidjson::Value HasDefaultValueValue(TypeToJsonValue(m_HasDefaultValue, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hasDefaultValue", HasDefaultValueValue, JsonDoc.GetAllocator());
	}

	if (m_Ref.has_value())
	{
		rapidjson::Value RefValue(TypeToJsonValue(m_Ref, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ref", RefValue, JsonDoc.GetAllocator());
	}

	if (m_AllowedValues.has_value())
	{
		rapidjson::Value AllowedValuesValue(TypeToJsonValue(m_AllowedValues, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowedValues", AllowedValuesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraCreateMetaField::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaField::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("fieldId"))
	{
		const rapidjson::Value& FieldIdValue = JsonDoc["fieldId"];

		if (FieldIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FieldIdValue, m_FieldId);
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

	if (JsonDoc.HasMember("required"))
	{
		const rapidjson::Value& RequiredValue = JsonDoc["required"];

		if (RequiredValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiredValue, m_Required);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member required is null!");
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

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("custom"))
	{
		const rapidjson::Value& CustomValue = JsonDoc["custom"];

		if (CustomValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CustomValue, m_Custom);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System);
		}
	}

	if (JsonDoc.HasMember("autoComplete"))
	{
		const rapidjson::Value& AutoCompleteValue = JsonDoc["autoComplete"];

		if (AutoCompleteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AutoCompleteValue, m_AutoComplete);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member autoComplete is null!");
		}
	}

	if (JsonDoc.HasMember("hasDefaultValue"))
	{
		const rapidjson::Value& HasDefaultValueValue = JsonDoc["hasDefaultValue"];

		if (HasDefaultValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasDefaultValueValue, m_HasDefaultValue);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member hasDefaultValue is null!");
		}
	}

	if (JsonDoc.HasMember("ref"))
	{
		const rapidjson::Value& RefValue = JsonDoc["ref"];

		if (RefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefValue, m_Ref);
		}
	}

	if (JsonDoc.HasMember("allowedValues"))
	{
		const rapidjson::Value& AllowedValuesValue = JsonDoc["allowedValues"];

		if (AllowedValuesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowedValuesValue, m_AllowedValues);
		}
	}
}


utility::string_t JiraCreateMetaField::GetFieldId() const
{
	return m_FieldId.value();
}

bool JiraCreateMetaField::HasFieldId() const
{
	return m_FieldId.has_value();
}
void JiraCreateMetaField::SetFieldId(const utility::string_t& Value)
{
	m_FieldId = Value;
}
utility::string_t JiraCreateMetaField::GetName() const
{
	return m_Name.value();
}

bool JiraCreateMetaField::HasName() const
{
	return m_Name.has_value();
}
void JiraCreateMetaField::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
bool JiraCreateMetaField::GetRequired() const
{
	return m_Required.value();
}

bool JiraCreateMetaField::HasRequired() const
{
	return m_Required.has_value();
}
void JiraCreateMetaField::SetRequired(const bool& Value)
{
	m_Required = Value;
}
utility::string_t JiraCreateMetaField::GetType() const
{
	return m_Type.value();
}

bool JiraCreateMetaField::HasType() const
{
	return m_Type.has_value();
}
void JiraCreateMetaField::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t JiraCreateMetaField::GetItems() const
{
	return m_Items.value();
}

bool JiraCreateMetaField::HasItems() const
{
	return m_Items.has_value();
}
void JiraCreateMetaField::SetItems(const utility::string_t& Value)
{
	m_Items = Value;
}
utility::string_t JiraCreateMetaField::GetCustom() const
{
	return m_Custom.value();
}

bool JiraCreateMetaField::HasCustom() const
{
	return m_Custom.has_value();
}
void JiraCreateMetaField::SetCustom(const utility::string_t& Value)
{
	m_Custom = Value;
}
utility::string_t JiraCreateMetaField::GetSystem() const
{
	return m_System.value();
}

bool JiraCreateMetaField::HasSystem() const
{
	return m_System.has_value();
}
void JiraCreateMetaField::SetSystem(const utility::string_t& Value)
{
	m_System = Value;
}
bool JiraCreateMetaField::GetAutoComplete() const
{
	return m_AutoComplete.value();
}

bool JiraCreateMetaField::HasAutoComplete() const
{
	return m_AutoComplete.has_value();
}
void JiraCreateMetaField::SetAutoComplete(const bool& Value)
{
	m_AutoComplete = Value;
}
bool JiraCreateMetaField::GetHasDefaultValue() const
{
	return m_HasDefaultValue.value();
}

bool JiraCreateMetaField::HasHasDefaultValue() const
{
	return m_HasDefaultValue.has_value();
}
void JiraCreateMetaField::SetHasDefaultValue(const bool& Value)
{
	m_HasDefaultValue = Value;
}
utility::string_t JiraCreateMetaField::GetRef() const
{
	return m_Ref.value();
}

bool JiraCreateMetaField::HasRef() const
{
	return m_Ref.has_value();
}
void JiraCreateMetaField::SetRef(const utility::string_t& Value)
{
	m_Ref = Value;
}
const std::vector<std::shared_ptr<JiraFieldOption>>& JiraCreateMetaField::GetAllowedValues() const
{
	return m_AllowedValues.value();
}

bool JiraCreateMetaField::HasAllowedValues() const
{
	return m_AllowedValues.has_value();
}
void JiraCreateMetaField::SetAllowedValues(const std::vector<std::shared_ptr<JiraFieldOption>>& Value)
{
	m_AllowedValues = Value;
}

JiraCreateMetaIssueType::JiraCreateMetaIssueType()
{
}
JiraCreateMetaIssueType::~JiraCreateMetaIssueType()
{
}

utility::string_t JiraCreateMetaIssueType::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Fields.has_value())
	{
		rapidjson::Value FieldsValue(TypeToJsonValue(m_Fields, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fields", FieldsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraCreateMetaIssueType::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaIssueType::FromJson");
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

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("fields"))
	{
		const rapidjson::Value& FieldsValue = JsonDoc["fields"];

		if (FieldsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FieldsValue, m_Fields);
		}
	}
}


utility::string_t JiraCreateMetaIssueType::GetName() const
{
	return m_Name.value();
}

bool JiraCreateMetaIssueType::HasName() const
{
	return m_Name.has_value();
}
void JiraCreateMetaIssueType::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t JiraCreateMetaIssueType::GetId() const
{
	return m_Id.value();
}

bool JiraCreateMetaIssueType::HasId() const
{
	return m_Id.has_value();
}
void JiraCreateMetaIssueType::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
const std::vector<std::shared_ptr<JiraCreateMetaField>>& JiraCreateMetaIssueType::GetFields() const
{
	return m_Fields.value();
}

bool JiraCreateMetaIssueType::HasFields() const
{
	return m_Fields.has_value();
}
void JiraCreateMetaIssueType::SetFields(const std::vector<std::shared_ptr<JiraCreateMetaField>>& Value)
{
	m_Fields = Value;
}

JiraCreateMetaUpsertRequest::JiraCreateMetaUpsertRequest()
{
}
JiraCreateMetaUpsertRequest::~JiraCreateMetaUpsertRequest()
{
}

utility::string_t JiraCreateMetaUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_IssueTypes.has_value())
	{
		rapidjson::Value IssueTypesValue(TypeToJsonValue(m_IssueTypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("issueTypes", IssueTypesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraCreateMetaUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaUpsertRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member project is null!");
		}
	}

	if (JsonDoc.HasMember("issueTypes"))
	{
		const rapidjson::Value& IssueTypesValue = JsonDoc["issueTypes"];

		if (IssueTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypesValue, m_IssueTypes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member issueTypes is null!");
		}
	}
}


utility::string_t JiraCreateMetaUpsertRequest::GetFamily() const
{
	return m_Family.value();
}

bool JiraCreateMetaUpsertRequest::HasFamily() const
{
	return m_Family.has_value();
}
void JiraCreateMetaUpsertRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraCreateMetaUpsertRequest::GetProject() const
{
	return m_Project.value();
}

bool JiraCreateMetaUpsertRequest::HasProject() const
{
	return m_Project.has_value();
}
void JiraCreateMetaUpsertRequest::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& JiraCreateMetaUpsertRequest::GetIssueTypes() const
{
	return m_IssueTypes.value();
}

bool JiraCreateMetaUpsertRequest::HasIssueTypes() const
{
	return m_IssueTypes.has_value();
}
void JiraCreateMetaUpsertRequest::SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value)
{
	m_IssueTypes = Value;
}

JiraFieldOption::JiraFieldOption()
{
}
JiraFieldOption::~JiraFieldOption()
{
}

utility::string_t JiraFieldOption::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Label.has_value())
	{
		rapidjson::Value LabelValue(TypeToJsonValue(m_Label, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("label", LabelValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraFieldOption::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraFieldOption::FromJson");
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

	if (JsonDoc.HasMember("label"))
	{
		const rapidjson::Value& LabelValue = JsonDoc["label"];

		if (LabelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LabelValue, m_Label);
		}
	}
}


utility::string_t JiraFieldOption::GetId() const
{
	return m_Id.value();
}

bool JiraFieldOption::HasId() const
{
	return m_Id.has_value();
}
void JiraFieldOption::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t JiraFieldOption::GetLabel() const
{
	return m_Label.value();
}

bool JiraFieldOption::HasLabel() const
{
	return m_Label.has_value();
}
void JiraFieldOption::SetLabel(const utility::string_t& Value)
{
	m_Label = Value;
}

JiraLink::JiraLink()
{
}
JiraLink::~JiraLink()
{
}

utility::string_t JiraLink::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Type.has_value())
	{
		rapidjson::Value TypeValue(TypeToJsonValue(m_Type, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("type", TypeValue, JsonDoc.GetAllocator());
	}

	if (m_From.has_value())
	{
		rapidjson::Value FromValue(TypeToJsonValue(m_From, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("from", FromValue, JsonDoc.GetAllocator());
	}

	if (m_To.has_value())
	{
		rapidjson::Value ToValue(TypeToJsonValue(m_To, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("to", ToValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraLink::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraLink::FromJson");
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

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From);
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To);
		}
	}
}


utility::string_t JiraLink::GetType() const
{
	return m_Type.value();
}

bool JiraLink::HasType() const
{
	return m_Type.has_value();
}
void JiraLink::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
utility::string_t JiraLink::GetFrom() const
{
	return m_From.value();
}

bool JiraLink::HasFrom() const
{
	return m_From.has_value();
}
void JiraLink::SetFrom(const utility::string_t& Value)
{
	m_From = Value;
}
utility::string_t JiraLink::GetTo() const
{
	return m_To.value();
}

bool JiraLink::HasTo() const
{
	return m_To.has_value();
}
void JiraLink::SetTo(const utility::string_t& Value)
{
	m_To = Value;
}

JiraReferenceListDto::JiraReferenceListDto()
{
}
JiraReferenceListDto::~JiraReferenceListDto()
{
}

utility::string_t JiraReferenceListDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}

	if (m_Options.has_value())
	{
		rapidjson::Value OptionsValue(TypeToJsonValue(m_Options, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("options", OptionsValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraReferenceListDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceListDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
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
}


utility::string_t JiraReferenceListDto::GetFamily() const
{
	return m_Family.value();
}

bool JiraReferenceListDto::HasFamily() const
{
	return m_Family.has_value();
}
void JiraReferenceListDto::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraReferenceListDto::GetProject() const
{
	return m_Project.value();
}

bool JiraReferenceListDto::HasProject() const
{
	return m_Project.has_value();
}
void JiraReferenceListDto::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
utility::string_t JiraReferenceListDto::GetKind() const
{
	return m_Kind.value();
}

bool JiraReferenceListDto::HasKind() const
{
	return m_Kind.has_value();
}
void JiraReferenceListDto::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}
const std::vector<std::shared_ptr<JiraReferenceOption>>& JiraReferenceListDto::GetOptions() const
{
	return m_Options.value();
}

bool JiraReferenceListDto::HasOptions() const
{
	return m_Options.has_value();
}
void JiraReferenceListDto::SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value)
{
	m_Options = Value;
}
utility::string_t JiraReferenceListDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool JiraReferenceListDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void JiraReferenceListDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

JiraReferenceOption::JiraReferenceOption()
{
}
JiraReferenceOption::~JiraReferenceOption()
{
}

utility::string_t JiraReferenceOption::ToJson() const
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

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_Released.has_value())
	{
		rapidjson::Value ReleasedValue(TypeToJsonValue(m_Released, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("released", ReleasedValue, JsonDoc.GetAllocator());
	}

	if (m_Archived.has_value())
	{
		rapidjson::Value ArchivedValue(TypeToJsonValue(m_Archived, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("archived", ArchivedValue, JsonDoc.GetAllocator());
	}

	if (m_ReleaseDate.has_value())
	{
		rapidjson::Value ReleaseDateValue(TypeToJsonValue(m_ReleaseDate, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("releaseDate", ReleaseDateValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraReferenceOption::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceOption::FromJson");
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

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
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

	if (JsonDoc.HasMember("released"))
	{
		const rapidjson::Value& ReleasedValue = JsonDoc["released"];

		if (ReleasedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedValue, m_Released);
		}
	}

	if (JsonDoc.HasMember("archived"))
	{
		const rapidjson::Value& ArchivedValue = JsonDoc["archived"];

		if (ArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ArchivedValue, m_Archived);
		}
	}

	if (JsonDoc.HasMember("releaseDate"))
	{
		const rapidjson::Value& ReleaseDateValue = JsonDoc["releaseDate"];

		if (ReleaseDateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleaseDateValue, m_ReleaseDate);
		}
	}
}


utility::string_t JiraReferenceOption::GetId() const
{
	return m_Id.value();
}

bool JiraReferenceOption::HasId() const
{
	return m_Id.has_value();
}
void JiraReferenceOption::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t JiraReferenceOption::GetName() const
{
	return m_Name.value();
}

bool JiraReferenceOption::HasName() const
{
	return m_Name.has_value();
}
void JiraReferenceOption::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t JiraReferenceOption::GetDescription() const
{
	return m_Description.value();
}

bool JiraReferenceOption::HasDescription() const
{
	return m_Description.has_value();
}
void JiraReferenceOption::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t JiraReferenceOption::GetState() const
{
	return m_State.value();
}

bool JiraReferenceOption::HasState() const
{
	return m_State.has_value();
}
void JiraReferenceOption::SetState(const utility::string_t& Value)
{
	m_State = Value;
}
bool JiraReferenceOption::GetReleased() const
{
	return m_Released.value();
}

bool JiraReferenceOption::HasReleased() const
{
	return m_Released.has_value();
}
void JiraReferenceOption::SetReleased(const bool& Value)
{
	m_Released = Value;
}
bool JiraReferenceOption::GetArchived() const
{
	return m_Archived.value();
}

bool JiraReferenceOption::HasArchived() const
{
	return m_Archived.has_value();
}
void JiraReferenceOption::SetArchived(const bool& Value)
{
	m_Archived = Value;
}
utility::string_t JiraReferenceOption::GetReleaseDate() const
{
	return m_ReleaseDate.value();
}

bool JiraReferenceOption::HasReleaseDate() const
{
	return m_ReleaseDate.has_value();
}
void JiraReferenceOption::SetReleaseDate(const utility::string_t& Value)
{
	m_ReleaseDate = Value;
}

JiraReferenceUpsertRequest::JiraReferenceUpsertRequest()
{
}
JiraReferenceUpsertRequest::~JiraReferenceUpsertRequest()
{
}

utility::string_t JiraReferenceUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}

	if (m_Options.has_value())
	{
		rapidjson::Value OptionsValue(TypeToJsonValue(m_Options, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("options", OptionsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraReferenceUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceUpsertRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member project is null!");
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member kind is null!");
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


utility::string_t JiraReferenceUpsertRequest::GetFamily() const
{
	return m_Family.value();
}

bool JiraReferenceUpsertRequest::HasFamily() const
{
	return m_Family.has_value();
}
void JiraReferenceUpsertRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraReferenceUpsertRequest::GetProject() const
{
	return m_Project.value();
}

bool JiraReferenceUpsertRequest::HasProject() const
{
	return m_Project.has_value();
}
void JiraReferenceUpsertRequest::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
utility::string_t JiraReferenceUpsertRequest::GetKind() const
{
	return m_Kind.value();
}

bool JiraReferenceUpsertRequest::HasKind() const
{
	return m_Kind.has_value();
}
void JiraReferenceUpsertRequest::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}
const std::vector<std::shared_ptr<JiraReferenceOption>>& JiraReferenceUpsertRequest::GetOptions() const
{
	return m_Options.value();
}

bool JiraReferenceUpsertRequest::HasOptions() const
{
	return m_Options.has_value();
}
void JiraReferenceUpsertRequest::SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value)
{
	m_Options = Value;
}

JiraResourceBulkGetRequest::JiraResourceBulkGetRequest()
{
}
JiraResourceBulkGetRequest::~JiraResourceBulkGetRequest()
{
}

utility::string_t JiraResourceBulkGetRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Keys.has_value())
	{
		rapidjson::Value KeysValue(TypeToJsonValue(m_Keys, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("keys", KeysValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceBulkGetRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceBulkGetRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member keys is null!");
		}
	}
}


utility::string_t JiraResourceBulkGetRequest::GetFamily() const
{
	return m_Family.value();
}

bool JiraResourceBulkGetRequest::HasFamily() const
{
	return m_Family.has_value();
}
void JiraResourceBulkGetRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
const std::vector<utility::string_t>& JiraResourceBulkGetRequest::GetKeys() const
{
	return m_Keys.value();
}

bool JiraResourceBulkGetRequest::HasKeys() const
{
	return m_Keys.has_value();
}
void JiraResourceBulkGetRequest::SetKeys(const std::vector<utility::string_t>& Value)
{
	m_Keys = Value;
}

JiraResourceDto::JiraResourceDto()
{
}
JiraResourceDto::~JiraResourceDto()
{
}

utility::string_t JiraResourceDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Summary.has_value())
	{
		rapidjson::Value SummaryValue(TypeToJsonValue(m_Summary, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("summary", SummaryValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCategory.has_value())
	{
		rapidjson::Value StatusCategoryValue(TypeToJsonValue(m_StatusCategory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCategory", StatusCategoryValue, JsonDoc.GetAllocator());
	}

	if (m_Assignee.has_value())
	{
		rapidjson::Value AssigneeValue(TypeToJsonValue(m_Assignee, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignee", AssigneeValue, JsonDoc.GetAllocator());
	}

	if (m_AssigneeAccountId.has_value())
	{
		rapidjson::Value AssigneeAccountIdValue(TypeToJsonValue(m_AssigneeAccountId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assigneeAccountId", AssigneeAccountIdValue, JsonDoc.GetAllocator());
	}

	if (m_Resolution.has_value())
	{
		rapidjson::Value ResolutionValue(TypeToJsonValue(m_Resolution, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolution", ResolutionValue, JsonDoc.GetAllocator());
	}

	if (m_IssueType.has_value())
	{
		rapidjson::Value IssueTypeValue(TypeToJsonValue(m_IssueType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("issueType", IssueTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_Epic.has_value())
	{
		rapidjson::Value EpicValue(TypeToJsonValue(m_Epic, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("epic", EpicValue, JsonDoc.GetAllocator());
	}

	if (m_Links.has_value())
	{
		rapidjson::Value LinksValue(TypeToJsonValue(m_Links, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("links", LinksValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_SourceUpdatedAt.has_value())
	{
		rapidjson::Value SourceUpdatedAtValue(TypeToJsonValue(m_SourceUpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceUpdatedAt", SourceUpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_SourceCreatedAt.has_value())
	{
		rapidjson::Value SourceCreatedAtValue(TypeToJsonValue(m_SourceCreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceCreatedAt", SourceCreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary);
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

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory);
		}
	}

	if (JsonDoc.HasMember("assignee"))
	{
		const rapidjson::Value& AssigneeValue = JsonDoc["assignee"];

		if (AssigneeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeValue, m_Assignee);
		}
	}

	if (JsonDoc.HasMember("assigneeAccountId"))
	{
		const rapidjson::Value& AssigneeAccountIdValue = JsonDoc["assigneeAccountId"];

		if (AssigneeAccountIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeAccountIdValue, m_AssigneeAccountId);
		}
	}

	if (JsonDoc.HasMember("resolution"))
	{
		const rapidjson::Value& ResolutionValue = JsonDoc["resolution"];

		if (ResolutionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolutionValue, m_Resolution);
		}
	}

	if (JsonDoc.HasMember("issueType"))
	{
		const rapidjson::Value& IssueTypeValue = JsonDoc["issueType"];

		if (IssueTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypeValue, m_IssueType);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
	}

	if (JsonDoc.HasMember("epic"))
	{
		const rapidjson::Value& EpicValue = JsonDoc["epic"];

		if (EpicValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EpicValue, m_Epic);
		}
	}

	if (JsonDoc.HasMember("links"))
	{
		const rapidjson::Value& LinksValue = JsonDoc["links"];

		if (LinksValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinksValue, m_Links);
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

	if (JsonDoc.HasMember("sourceUpdatedAt"))
	{
		const rapidjson::Value& SourceUpdatedAtValue = JsonDoc["sourceUpdatedAt"];

		if (SourceUpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUpdatedAtValue, m_SourceUpdatedAt);
		}
	}

	if (JsonDoc.HasMember("sourceCreatedAt"))
	{
		const rapidjson::Value& SourceCreatedAtValue = JsonDoc["sourceCreatedAt"];

		if (SourceCreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceCreatedAtValue, m_SourceCreatedAt);
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
}


utility::string_t JiraResourceDto::GetFamily() const
{
	return m_Family.value();
}

bool JiraResourceDto::HasFamily() const
{
	return m_Family.has_value();
}
void JiraResourceDto::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraResourceDto::GetKey() const
{
	return m_Key.value();
}

bool JiraResourceDto::HasKey() const
{
	return m_Key.has_value();
}
void JiraResourceDto::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
utility::string_t JiraResourceDto::GetSummary() const
{
	return m_Summary.value();
}

bool JiraResourceDto::HasSummary() const
{
	return m_Summary.has_value();
}
void JiraResourceDto::SetSummary(const utility::string_t& Value)
{
	m_Summary = Value;
}
utility::string_t JiraResourceDto::GetStatus() const
{
	return m_Status.value();
}

bool JiraResourceDto::HasStatus() const
{
	return m_Status.has_value();
}
void JiraResourceDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t JiraResourceDto::GetStatusCategory() const
{
	return m_StatusCategory.value();
}

bool JiraResourceDto::HasStatusCategory() const
{
	return m_StatusCategory.has_value();
}
void JiraResourceDto::SetStatusCategory(const utility::string_t& Value)
{
	m_StatusCategory = Value;
}
utility::string_t JiraResourceDto::GetAssignee() const
{
	return m_Assignee.value();
}

bool JiraResourceDto::HasAssignee() const
{
	return m_Assignee.has_value();
}
void JiraResourceDto::SetAssignee(const utility::string_t& Value)
{
	m_Assignee = Value;
}
utility::string_t JiraResourceDto::GetAssigneeAccountId() const
{
	return m_AssigneeAccountId.value();
}

bool JiraResourceDto::HasAssigneeAccountId() const
{
	return m_AssigneeAccountId.has_value();
}
void JiraResourceDto::SetAssigneeAccountId(const utility::string_t& Value)
{
	m_AssigneeAccountId = Value;
}
utility::string_t JiraResourceDto::GetResolution() const
{
	return m_Resolution.value();
}

bool JiraResourceDto::HasResolution() const
{
	return m_Resolution.has_value();
}
void JiraResourceDto::SetResolution(const utility::string_t& Value)
{
	m_Resolution = Value;
}
utility::string_t JiraResourceDto::GetIssueType() const
{
	return m_IssueType.value();
}

bool JiraResourceDto::HasIssueType() const
{
	return m_IssueType.has_value();
}
void JiraResourceDto::SetIssueType(const utility::string_t& Value)
{
	m_IssueType = Value;
}
utility::string_t JiraResourceDto::GetProject() const
{
	return m_Project.value();
}

bool JiraResourceDto::HasProject() const
{
	return m_Project.has_value();
}
void JiraResourceDto::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
utility::string_t JiraResourceDto::GetEpic() const
{
	return m_Epic.value();
}

bool JiraResourceDto::HasEpic() const
{
	return m_Epic.has_value();
}
void JiraResourceDto::SetEpic(const utility::string_t& Value)
{
	m_Epic = Value;
}
const std::vector<std::shared_ptr<JiraLink>>& JiraResourceDto::GetLinks() const
{
	return m_Links.value();
}

bool JiraResourceDto::HasLinks() const
{
	return m_Links.has_value();
}
void JiraResourceDto::SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value)
{
	m_Links = Value;
}
const std::vector<utility::string_t>& JiraResourceDto::GetTags() const
{
	return m_Tags.value();
}

bool JiraResourceDto::HasTags() const
{
	return m_Tags.has_value();
}
void JiraResourceDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t JiraResourceDto::GetSourceUpdatedAt() const
{
	return m_SourceUpdatedAt.value();
}

bool JiraResourceDto::HasSourceUpdatedAt() const
{
	return m_SourceUpdatedAt.has_value();
}
void JiraResourceDto::SetSourceUpdatedAt(const utility::string_t& Value)
{
	m_SourceUpdatedAt = Value;
}
utility::string_t JiraResourceDto::GetSourceCreatedAt() const
{
	return m_SourceCreatedAt.value();
}

bool JiraResourceDto::HasSourceCreatedAt() const
{
	return m_SourceCreatedAt.has_value();
}
void JiraResourceDto::SetSourceCreatedAt(const utility::string_t& Value)
{
	m_SourceCreatedAt = Value;
}
utility::string_t JiraResourceDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool JiraResourceDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void JiraResourceDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

JiraResourceSearchRequest::JiraResourceSearchRequest()
{
}
JiraResourceSearchRequest::~JiraResourceSearchRequest()
{
}

utility::string_t JiraResourceSearchRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Since.has_value())
	{
		rapidjson::Value SinceValue(TypeToJsonValue(m_Since, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("since", SinceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceSearchRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceSearchRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since);
		}
	}
}


const std::vector<utility::string_t>& JiraResourceSearchRequest::GetTags() const
{
	return m_Tags.value();
}

bool JiraResourceSearchRequest::HasTags() const
{
	return m_Tags.has_value();
}
void JiraResourceSearchRequest::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t JiraResourceSearchRequest::GetFamily() const
{
	return m_Family.value();
}

bool JiraResourceSearchRequest::HasFamily() const
{
	return m_Family.has_value();
}
void JiraResourceSearchRequest::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
utility::string_t JiraResourceSearchRequest::GetSince() const
{
	return m_Since.value();
}

bool JiraResourceSearchRequest::HasSince() const
{
	return m_Since.has_value();
}
void JiraResourceSearchRequest::SetSince(const utility::string_t& Value)
{
	m_Since = Value;
}

JiraResourceSearchResponse::JiraResourceSearchResponse()
{
}
JiraResourceSearchResponse::~JiraResourceSearchResponse()
{
}

utility::string_t JiraResourceSearchResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_Since.has_value())
	{
		rapidjson::Value SinceValue(TypeToJsonValue(m_Since, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("since", SinceValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceSearchResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceSearchResponse::FromJson");
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

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member since is null!");
		}
	}
}


const std::vector<std::shared_ptr<JiraResourceDto>>& JiraResourceSearchResponse::GetItems() const
{
	return m_Items.value();
}

bool JiraResourceSearchResponse::HasItems() const
{
	return m_Items.has_value();
}
void JiraResourceSearchResponse::SetItems(const std::vector<std::shared_ptr<JiraResourceDto>>& Value)
{
	m_Items = Value;
}
utility::string_t JiraResourceSearchResponse::GetSince() const
{
	return m_Since.value();
}

bool JiraResourceSearchResponse::HasSince() const
{
	return m_Since.has_value();
}
void JiraResourceSearchResponse::SetSince(const utility::string_t& Value)
{
	m_Since = Value;
}

JiraResourceUpsertItem::JiraResourceUpsertItem()
{
}
JiraResourceUpsertItem::~JiraResourceUpsertItem()
{
}

utility::string_t JiraResourceUpsertItem::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Family.has_value())
	{
		rapidjson::Value FamilyValue(TypeToJsonValue(m_Family, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("family", FamilyValue, JsonDoc.GetAllocator());
	}

	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_Summary.has_value())
	{
		rapidjson::Value SummaryValue(TypeToJsonValue(m_Summary, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("summary", SummaryValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_StatusCategory.has_value())
	{
		rapidjson::Value StatusCategoryValue(TypeToJsonValue(m_StatusCategory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("statusCategory", StatusCategoryValue, JsonDoc.GetAllocator());
	}

	if (m_Assignee.has_value())
	{
		rapidjson::Value AssigneeValue(TypeToJsonValue(m_Assignee, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignee", AssigneeValue, JsonDoc.GetAllocator());
	}

	if (m_AssigneeAccountId.has_value())
	{
		rapidjson::Value AssigneeAccountIdValue(TypeToJsonValue(m_AssigneeAccountId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assigneeAccountId", AssigneeAccountIdValue, JsonDoc.GetAllocator());
	}

	if (m_Resolution.has_value())
	{
		rapidjson::Value ResolutionValue(TypeToJsonValue(m_Resolution, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("resolution", ResolutionValue, JsonDoc.GetAllocator());
	}

	if (m_IssueType.has_value())
	{
		rapidjson::Value IssueTypeValue(TypeToJsonValue(m_IssueType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("issueType", IssueTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_Epic.has_value())
	{
		rapidjson::Value EpicValue(TypeToJsonValue(m_Epic, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("epic", EpicValue, JsonDoc.GetAllocator());
	}

	if (m_Links.has_value())
	{
		rapidjson::Value LinksValue(TypeToJsonValue(m_Links, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("links", LinksValue, JsonDoc.GetAllocator());
	}

	if (m_SourceUpdatedAt.has_value())
	{
		rapidjson::Value SourceUpdatedAtValue(TypeToJsonValue(m_SourceUpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceUpdatedAt", SourceUpdatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_SourceCreatedAt.has_value())
	{
		rapidjson::Value SourceCreatedAtValue(TypeToJsonValue(m_SourceCreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceCreatedAt", SourceCreatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceUpsertItem::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertItem::FromJson");
	if (!ok)
	{
		return;
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

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family);
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

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary);
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

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory);
		}
	}

	if (JsonDoc.HasMember("assignee"))
	{
		const rapidjson::Value& AssigneeValue = JsonDoc["assignee"];

		if (AssigneeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeValue, m_Assignee);
		}
	}

	if (JsonDoc.HasMember("assigneeAccountId"))
	{
		const rapidjson::Value& AssigneeAccountIdValue = JsonDoc["assigneeAccountId"];

		if (AssigneeAccountIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeAccountIdValue, m_AssigneeAccountId);
		}
	}

	if (JsonDoc.HasMember("resolution"))
	{
		const rapidjson::Value& ResolutionValue = JsonDoc["resolution"];

		if (ResolutionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolutionValue, m_Resolution);
		}
	}

	if (JsonDoc.HasMember("issueType"))
	{
		const rapidjson::Value& IssueTypeValue = JsonDoc["issueType"];

		if (IssueTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypeValue, m_IssueType);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
	}

	if (JsonDoc.HasMember("epic"))
	{
		const rapidjson::Value& EpicValue = JsonDoc["epic"];

		if (EpicValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EpicValue, m_Epic);
		}
	}

	if (JsonDoc.HasMember("links"))
	{
		const rapidjson::Value& LinksValue = JsonDoc["links"];

		if (LinksValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinksValue, m_Links);
		}
	}

	if (JsonDoc.HasMember("sourceUpdatedAt"))
	{
		const rapidjson::Value& SourceUpdatedAtValue = JsonDoc["sourceUpdatedAt"];

		if (SourceUpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUpdatedAtValue, m_SourceUpdatedAt);
		}
	}

	if (JsonDoc.HasMember("sourceCreatedAt"))
	{
		const rapidjson::Value& SourceCreatedAtValue = JsonDoc["sourceCreatedAt"];

		if (SourceCreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceCreatedAtValue, m_SourceCreatedAt);
		}
	}
}


utility::string_t JiraResourceUpsertItem::GetKey() const
{
	return m_Key.value();
}

bool JiraResourceUpsertItem::HasKey() const
{
	return m_Key.has_value();
}
void JiraResourceUpsertItem::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
utility::string_t JiraResourceUpsertItem::GetFamily() const
{
	return m_Family.value();
}

bool JiraResourceUpsertItem::HasFamily() const
{
	return m_Family.has_value();
}
void JiraResourceUpsertItem::SetFamily(const utility::string_t& Value)
{
	m_Family = Value;
}
const std::vector<utility::string_t>& JiraResourceUpsertItem::GetTags() const
{
	return m_Tags.value();
}

bool JiraResourceUpsertItem::HasTags() const
{
	return m_Tags.has_value();
}
void JiraResourceUpsertItem::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
utility::string_t JiraResourceUpsertItem::GetSummary() const
{
	return m_Summary.value();
}

bool JiraResourceUpsertItem::HasSummary() const
{
	return m_Summary.has_value();
}
void JiraResourceUpsertItem::SetSummary(const utility::string_t& Value)
{
	m_Summary = Value;
}
utility::string_t JiraResourceUpsertItem::GetStatus() const
{
	return m_Status.value();
}

bool JiraResourceUpsertItem::HasStatus() const
{
	return m_Status.has_value();
}
void JiraResourceUpsertItem::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t JiraResourceUpsertItem::GetStatusCategory() const
{
	return m_StatusCategory.value();
}

bool JiraResourceUpsertItem::HasStatusCategory() const
{
	return m_StatusCategory.has_value();
}
void JiraResourceUpsertItem::SetStatusCategory(const utility::string_t& Value)
{
	m_StatusCategory = Value;
}
utility::string_t JiraResourceUpsertItem::GetAssignee() const
{
	return m_Assignee.value();
}

bool JiraResourceUpsertItem::HasAssignee() const
{
	return m_Assignee.has_value();
}
void JiraResourceUpsertItem::SetAssignee(const utility::string_t& Value)
{
	m_Assignee = Value;
}
utility::string_t JiraResourceUpsertItem::GetAssigneeAccountId() const
{
	return m_AssigneeAccountId.value();
}

bool JiraResourceUpsertItem::HasAssigneeAccountId() const
{
	return m_AssigneeAccountId.has_value();
}
void JiraResourceUpsertItem::SetAssigneeAccountId(const utility::string_t& Value)
{
	m_AssigneeAccountId = Value;
}
utility::string_t JiraResourceUpsertItem::GetResolution() const
{
	return m_Resolution.value();
}

bool JiraResourceUpsertItem::HasResolution() const
{
	return m_Resolution.has_value();
}
void JiraResourceUpsertItem::SetResolution(const utility::string_t& Value)
{
	m_Resolution = Value;
}
utility::string_t JiraResourceUpsertItem::GetIssueType() const
{
	return m_IssueType.value();
}

bool JiraResourceUpsertItem::HasIssueType() const
{
	return m_IssueType.has_value();
}
void JiraResourceUpsertItem::SetIssueType(const utility::string_t& Value)
{
	m_IssueType = Value;
}
utility::string_t JiraResourceUpsertItem::GetProject() const
{
	return m_Project.value();
}

bool JiraResourceUpsertItem::HasProject() const
{
	return m_Project.has_value();
}
void JiraResourceUpsertItem::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
utility::string_t JiraResourceUpsertItem::GetEpic() const
{
	return m_Epic.value();
}

bool JiraResourceUpsertItem::HasEpic() const
{
	return m_Epic.has_value();
}
void JiraResourceUpsertItem::SetEpic(const utility::string_t& Value)
{
	m_Epic = Value;
}
const std::vector<std::shared_ptr<JiraLink>>& JiraResourceUpsertItem::GetLinks() const
{
	return m_Links.value();
}

bool JiraResourceUpsertItem::HasLinks() const
{
	return m_Links.has_value();
}
void JiraResourceUpsertItem::SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value)
{
	m_Links = Value;
}
utility::string_t JiraResourceUpsertItem::GetSourceUpdatedAt() const
{
	return m_SourceUpdatedAt.value();
}

bool JiraResourceUpsertItem::HasSourceUpdatedAt() const
{
	return m_SourceUpdatedAt.has_value();
}
void JiraResourceUpsertItem::SetSourceUpdatedAt(const utility::string_t& Value)
{
	m_SourceUpdatedAt = Value;
}
utility::string_t JiraResourceUpsertItem::GetSourceCreatedAt() const
{
	return m_SourceCreatedAt.value();
}

bool JiraResourceUpsertItem::HasSourceCreatedAt() const
{
	return m_SourceCreatedAt.has_value();
}
void JiraResourceUpsertItem::SetSourceCreatedAt(const utility::string_t& Value)
{
	m_SourceCreatedAt = Value;
}

JiraResourceUpsertRequest::JiraResourceUpsertRequest()
{
}
JiraResourceUpsertRequest::~JiraResourceUpsertRequest()
{
}

utility::string_t JiraResourceUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
		}
	}
}


const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& JiraResourceUpsertRequest::GetItems() const
{
	return m_Items.value();
}

bool JiraResourceUpsertRequest::HasItems() const
{
	return m_Items.has_value();
}
void JiraResourceUpsertRequest::SetItems(const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& Value)
{
	m_Items = Value;
}

JiraResourceUpsertResult::JiraResourceUpsertResult()
{
}
JiraResourceUpsertResult::~JiraResourceUpsertResult()
{
}

utility::string_t JiraResourceUpsertResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Created.has_value())
	{
		rapidjson::Value CreatedValue(TypeToJsonValue(m_Created, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("created", CreatedValue, JsonDoc.GetAllocator());
	}

	if (m_Updated.has_value())
	{
		rapidjson::Value UpdatedValue(TypeToJsonValue(m_Updated, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updated", UpdatedValue, JsonDoc.GetAllocator());
	}

	if (m_Skipped.has_value())
	{
		rapidjson::Value SkippedValue(TypeToJsonValue(m_Skipped, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("skipped", SkippedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraResourceUpsertResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member created is null!");
		}
	}

	if (JsonDoc.HasMember("updated"))
	{
		const rapidjson::Value& UpdatedValue = JsonDoc["updated"];

		if (UpdatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedValue, m_Updated);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member updated is null!");
		}
	}

	if (JsonDoc.HasMember("skipped"))
	{
		const rapidjson::Value& SkippedValue = JsonDoc["skipped"];

		if (SkippedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkippedValue, m_Skipped);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member skipped is null!");
		}
	}
}


int32_t JiraResourceUpsertResult::GetCreated() const
{
	return m_Created.value();
}

bool JiraResourceUpsertResult::HasCreated() const
{
	return m_Created.has_value();
}
void JiraResourceUpsertResult::SetCreated(int32_t Value)
{
	m_Created = Value;
}
int32_t JiraResourceUpsertResult::GetUpdated() const
{
	return m_Updated.value();
}

bool JiraResourceUpsertResult::HasUpdated() const
{
	return m_Updated.has_value();
}
void JiraResourceUpsertResult::SetUpdated(int32_t Value)
{
	m_Updated = Value;
}
int32_t JiraResourceUpsertResult::GetSkipped() const
{
	return m_Skipped.value();
}

bool JiraResourceUpsertResult::HasSkipped() const
{
	return m_Skipped.has_value();
}
void JiraResourceUpsertResult::SetSkipped(int32_t Value)
{
	m_Skipped = Value;
}

JiraSchemaUpsertResult::JiraSchemaUpsertResult()
{
}
JiraSchemaUpsertResult::~JiraSchemaUpsertResult()
{
}

utility::string_t JiraSchemaUpsertResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_Kind.has_value())
	{
		rapidjson::Value KindValue(TypeToJsonValue(m_Kind, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("kind", KindValue, JsonDoc.GetAllocator());
	}

	if (m_Created.has_value())
	{
		rapidjson::Value CreatedValue(TypeToJsonValue(m_Created, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("created", CreatedValue, JsonDoc.GetAllocator());
	}

	if (m_Count.has_value())
	{
		rapidjson::Value CountValue(TypeToJsonValue(m_Count, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("count", CountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JiraSchemaUpsertResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraSchemaUpsertResult::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind);
		}
	}

	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member created is null!");
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


utility::string_t JiraSchemaUpsertResult::GetProject() const
{
	return m_Project.value();
}

bool JiraSchemaUpsertResult::HasProject() const
{
	return m_Project.has_value();
}
void JiraSchemaUpsertResult::SetProject(const utility::string_t& Value)
{
	m_Project = Value;
}
utility::string_t JiraSchemaUpsertResult::GetKind() const
{
	return m_Kind.value();
}

bool JiraSchemaUpsertResult::HasKind() const
{
	return m_Kind.has_value();
}
void JiraSchemaUpsertResult::SetKind(const utility::string_t& Value)
{
	m_Kind = Value;
}
bool JiraSchemaUpsertResult::GetCreated() const
{
	return m_Created.value();
}

bool JiraSchemaUpsertResult::HasCreated() const
{
	return m_Created.has_value();
}
void JiraSchemaUpsertResult::SetCreated(const bool& Value)
{
	m_Created = Value;
}
int32_t JiraSchemaUpsertResult::GetCount() const
{
	return m_Count.value();
}

bool JiraSchemaUpsertResult::HasCount() const
{
	return m_Count.has_value();
}
void JiraSchemaUpsertResult::SetCount(int32_t Value)
{
	m_Count = Value;
}

JoinQueueRequest::JoinQueueRequest()
{
}
JoinQueueRequest::~JoinQueueRequest()
{
}

utility::string_t JoinQueueRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Note.has_value())
	{
		rapidjson::Value NoteValue(TypeToJsonValue(m_Note, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("note", NoteValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void JoinQueueRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JoinQueueRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note);
		}
	}
}


utility::string_t JoinQueueRequest::GetNote() const
{
	return m_Note.value();
}

bool JoinQueueRequest::HasNote() const
{
	return m_Note.has_value();
}
void JoinQueueRequest::SetNote(const utility::string_t& Value)
{
	m_Note = Value;
}

LegacyObjectDto::LegacyObjectDto()
{
}
LegacyObjectDto::~LegacyObjectDto()
{
}

utility::string_t LegacyObjectDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Key.has_value())
	{
		rapidjson::Value KeyValue(TypeToJsonValue(m_Key, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("key", KeyValue, JsonDoc.GetAllocator());
	}

	if (m_Size.has_value())
	{
		rapidjson::Value SizeValue(TypeToJsonValue(m_Size, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("size", SizeValue, JsonDoc.GetAllocator());
	}

	if (m_ContentType.has_value())
	{
		rapidjson::Value ContentTypeValue(TypeToJsonValue(m_ContentType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("contentType", ContentTypeValue, JsonDoc.GetAllocator());
	}

	if (m_UpdatedAt.has_value())
	{
		rapidjson::Value UpdatedAtValue(TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("updatedAt", UpdatedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LegacyObjectDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LegacyObjectDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key);
		}
	}

	if (JsonDoc.HasMember("size"))
	{
		const rapidjson::Value& SizeValue = JsonDoc["size"];

		if (SizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeValue, m_Size);
		}
	}

	if (JsonDoc.HasMember("contentType"))
	{
		const rapidjson::Value& ContentTypeValue = JsonDoc["contentType"];

		if (ContentTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentTypeValue, m_ContentType);
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
}


utility::string_t LegacyObjectDto::GetKey() const
{
	return m_Key.value();
}

bool LegacyObjectDto::HasKey() const
{
	return m_Key.has_value();
}
void LegacyObjectDto::SetKey(const utility::string_t& Value)
{
	m_Key = Value;
}
int64_t LegacyObjectDto::GetSize() const
{
	return m_Size.value();
}

bool LegacyObjectDto::HasSize() const
{
	return m_Size.has_value();
}
void LegacyObjectDto::SetSize(int64_t Value)
{
	m_Size = Value;
}
utility::string_t LegacyObjectDto::GetContentType() const
{
	return m_ContentType.value();
}

bool LegacyObjectDto::HasContentType() const
{
	return m_ContentType.has_value();
}
void LegacyObjectDto::SetContentType(const utility::string_t& Value)
{
	m_ContentType = Value;
}
utility::string_t LegacyObjectDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool LegacyObjectDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void LegacyObjectDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

LegacyObjectPageDto::LegacyObjectPageDto()
{
}
LegacyObjectPageDto::~LegacyObjectPageDto()
{
}

utility::string_t LegacyObjectPageDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Bucket.has_value())
	{
		rapidjson::Value BucketValue(TypeToJsonValue(m_Bucket, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("bucket", BucketValue, JsonDoc.GetAllocator());
	}

	if (m_TenantOverride.has_value())
	{
		rapidjson::Value TenantOverrideValue(TypeToJsonValue(m_TenantOverride, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantOverride", TenantOverrideValue, JsonDoc.GetAllocator());
	}

	if (m_Items.has_value())
	{
		rapidjson::Value ItemsValue(TypeToJsonValue(m_Items, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("items", ItemsValue, JsonDoc.GetAllocator());
	}

	if (m_NextPageToken.has_value())
	{
		rapidjson::Value NextPageTokenValue(TypeToJsonValue(m_NextPageToken, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nextPageToken", NextPageTokenValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LegacyObjectPageDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LegacyObjectPageDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("bucket"))
	{
		const rapidjson::Value& BucketValue = JsonDoc["bucket"];

		if (BucketValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketValue, m_Bucket);
		}
	}

	if (JsonDoc.HasMember("tenantOverride"))
	{
		const rapidjson::Value& TenantOverrideValue = JsonDoc["tenantOverride"];

		if (TenantOverrideValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantOverrideValue, m_TenantOverride);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tenantOverride is null!");
		}
	}

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items);
		}
	}

	if (JsonDoc.HasMember("nextPageToken"))
	{
		const rapidjson::Value& NextPageTokenValue = JsonDoc["nextPageToken"];

		if (NextPageTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NextPageTokenValue, m_NextPageToken);
		}
	}
}


utility::string_t LegacyObjectPageDto::GetBucket() const
{
	return m_Bucket.value();
}

bool LegacyObjectPageDto::HasBucket() const
{
	return m_Bucket.has_value();
}
void LegacyObjectPageDto::SetBucket(const utility::string_t& Value)
{
	m_Bucket = Value;
}
bool LegacyObjectPageDto::GetTenantOverride() const
{
	return m_TenantOverride.value();
}

bool LegacyObjectPageDto::HasTenantOverride() const
{
	return m_TenantOverride.has_value();
}
void LegacyObjectPageDto::SetTenantOverride(const bool& Value)
{
	m_TenantOverride = Value;
}
const std::vector<std::shared_ptr<LegacyObjectDto>>& LegacyObjectPageDto::GetItems() const
{
	return m_Items.value();
}

bool LegacyObjectPageDto::HasItems() const
{
	return m_Items.has_value();
}
void LegacyObjectPageDto::SetItems(const std::vector<std::shared_ptr<LegacyObjectDto>>& Value)
{
	m_Items = Value;
}
utility::string_t LegacyObjectPageDto::GetNextPageToken() const
{
	return m_NextPageToken.value();
}

bool LegacyObjectPageDto::HasNextPageToken() const
{
	return m_NextPageToken.has_value();
}
void LegacyObjectPageDto::SetNextPageToken(const utility::string_t& Value)
{
	m_NextPageToken = Value;
}

LlmGenerateRequest::LlmGenerateRequest()
{
}
LlmGenerateRequest::~LlmGenerateRequest()
{
}

utility::string_t LlmGenerateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_SystemInstruction.has_value())
	{
		rapidjson::Value SystemInstructionValue(TypeToJsonValue(m_SystemInstruction, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("systemInstruction", SystemInstructionValue, JsonDoc.GetAllocator());
	}

	if (m_Messages.has_value())
	{
		rapidjson::Value MessagesValue(TypeToJsonValue(m_Messages, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("messages", MessagesValue, JsonDoc.GetAllocator());
	}

	if (m_Temperature.has_value())
	{
		rapidjson::Value TemperatureValue(TypeToJsonValue(m_Temperature, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("temperature", TemperatureValue, JsonDoc.GetAllocator());
	}

	if (m_MaxOutputTokens.has_value())
	{
		rapidjson::Value MaxOutputTokensValue(TypeToJsonValue(m_MaxOutputTokens, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxOutputTokens", MaxOutputTokensValue, JsonDoc.GetAllocator());
	}

	if (m_JsonResponse.has_value())
	{
		rapidjson::Value JsonResponseValue(TypeToJsonValue(m_JsonResponse, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("jsonResponse", JsonResponseValue, JsonDoc.GetAllocator());
	}

	if (m_AgentId.has_value())
	{
		rapidjson::Value AgentIdValue(TypeToJsonValue(m_AgentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("agentId", AgentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LlmGenerateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmGenerateRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction);
		}
	}

	if (JsonDoc.HasMember("messages"))
	{
		const rapidjson::Value& MessagesValue = JsonDoc["messages"];

		if (MessagesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessagesValue, m_Messages);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature);
		}
	}

	if (JsonDoc.HasMember("maxOutputTokens"))
	{
		const rapidjson::Value& MaxOutputTokensValue = JsonDoc["maxOutputTokens"];

		if (MaxOutputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxOutputTokensValue, m_MaxOutputTokens);
		}
	}

	if (JsonDoc.HasMember("jsonResponse"))
	{
		const rapidjson::Value& JsonResponseValue = JsonDoc["jsonResponse"];

		if (JsonResponseValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(JsonResponseValue, m_JsonResponse);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member jsonResponse is null!");
		}
	}

	if (JsonDoc.HasMember("agentId"))
	{
		const rapidjson::Value& AgentIdValue = JsonDoc["agentId"];

		if (AgentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AgentIdValue, m_AgentId);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
		}
	}
}


utility::string_t LlmGenerateRequest::GetProvider() const
{
	return m_Provider.value();
}

bool LlmGenerateRequest::HasProvider() const
{
	return m_Provider.has_value();
}
void LlmGenerateRequest::SetProvider(const utility::string_t& Value)
{
	m_Provider = Value;
}
utility::string_t LlmGenerateRequest::GetModel() const
{
	return m_Model.value();
}

bool LlmGenerateRequest::HasModel() const
{
	return m_Model.has_value();
}
void LlmGenerateRequest::SetModel(const utility::string_t& Value)
{
	m_Model = Value;
}
utility::string_t LlmGenerateRequest::GetSystemInstruction() const
{
	return m_SystemInstruction.value();
}

bool LlmGenerateRequest::HasSystemInstruction() const
{
	return m_SystemInstruction.has_value();
}
void LlmGenerateRequest::SetSystemInstruction(const utility::string_t& Value)
{
	m_SystemInstruction = Value;
}
const std::vector<std::shared_ptr<LlmMessage>>& LlmGenerateRequest::GetMessages() const
{
	return m_Messages.value();
}

bool LlmGenerateRequest::HasMessages() const
{
	return m_Messages.has_value();
}
void LlmGenerateRequest::SetMessages(const std::vector<std::shared_ptr<LlmMessage>>& Value)
{
	m_Messages = Value;
}
double LlmGenerateRequest::GetTemperature() const
{
	return m_Temperature.value();
}

bool LlmGenerateRequest::HasTemperature() const
{
	return m_Temperature.has_value();
}
void LlmGenerateRequest::SetTemperature(double Value)
{
	m_Temperature = Value;
}
int32_t LlmGenerateRequest::GetMaxOutputTokens() const
{
	return m_MaxOutputTokens.value();
}

bool LlmGenerateRequest::HasMaxOutputTokens() const
{
	return m_MaxOutputTokens.has_value();
}
void LlmGenerateRequest::SetMaxOutputTokens(int32_t Value)
{
	m_MaxOutputTokens = Value;
}
bool LlmGenerateRequest::GetJsonResponse() const
{
	return m_JsonResponse.value();
}

bool LlmGenerateRequest::HasJsonResponse() const
{
	return m_JsonResponse.has_value();
}
void LlmGenerateRequest::SetJsonResponse(const bool& Value)
{
	m_JsonResponse = Value;
}
utility::string_t LlmGenerateRequest::GetAgentId() const
{
	return m_AgentId.value();
}

bool LlmGenerateRequest::HasAgentId() const
{
	return m_AgentId.has_value();
}
void LlmGenerateRequest::SetAgentId(const utility::string_t& Value)
{
	m_AgentId = Value;
}
utility::string_t LlmGenerateRequest::GetEncoding() const
{
	return m_Encoding.value();
}

bool LlmGenerateRequest::HasEncoding() const
{
	return m_Encoding.has_value();
}
void LlmGenerateRequest::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
}

LlmGenerateResponse::LlmGenerateResponse()
{
}
LlmGenerateResponse::~LlmGenerateResponse()
{
}

utility::string_t LlmGenerateResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Text.has_value())
	{
		rapidjson::Value TextValue(TypeToJsonValue(m_Text, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("text", TextValue, JsonDoc.GetAllocator());
	}

	if (m_Model.has_value())
	{
		rapidjson::Value ModelValue(TypeToJsonValue(m_Model, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("model", ModelValue, JsonDoc.GetAllocator());
	}

	if (m_Provider.has_value())
	{
		rapidjson::Value ProviderValue(TypeToJsonValue(m_Provider, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("provider", ProviderValue, JsonDoc.GetAllocator());
	}

	if (m_InputTokens.has_value())
	{
		rapidjson::Value InputTokensValue(TypeToJsonValue(m_InputTokens, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("inputTokens", InputTokensValue, JsonDoc.GetAllocator());
	}

	if (m_OutputTokens.has_value())
	{
		rapidjson::Value OutputTokensValue(TypeToJsonValue(m_OutputTokens, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("outputTokens", OutputTokensValue, JsonDoc.GetAllocator());
	}

	if (m_FinishReason.has_value())
	{
		rapidjson::Value FinishReasonValue(TypeToJsonValue(m_FinishReason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("finishReason", FinishReasonValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LlmGenerateResponse::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmGenerateResponse::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("text"))
	{
		const rapidjson::Value& TextValue = JsonDoc["text"];

		if (TextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TextValue, m_Text);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model);
		}
	}

	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider);
		}
	}

	if (JsonDoc.HasMember("inputTokens"))
	{
		const rapidjson::Value& InputTokensValue = JsonDoc["inputTokens"];

		if (InputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InputTokensValue, m_InputTokens);
		}
	}

	if (JsonDoc.HasMember("outputTokens"))
	{
		const rapidjson::Value& OutputTokensValue = JsonDoc["outputTokens"];

		if (OutputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutputTokensValue, m_OutputTokens);
		}
	}

	if (JsonDoc.HasMember("finishReason"))
	{
		const rapidjson::Value& FinishReasonValue = JsonDoc["finishReason"];

		if (FinishReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FinishReasonValue, m_FinishReason);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
		}
	}
}


utility::string_t LlmGenerateResponse::GetText() const
{
	return m_Text.value();
}

bool LlmGenerateResponse::HasText() const
{
	return m_Text.has_value();
}
void LlmGenerateResponse::SetText(const utility::string_t& Value)
{
	m_Text = Value;
}
utility::string_t LlmGenerateResponse::GetModel() const
{
	return m_Model.value();
}

bool LlmGenerateResponse::HasModel() const
{
	return m_Model.has_value();
}
void LlmGenerateResponse::SetModel(const utility::string_t& Value)
{
	m_Model = Value;
}
utility::string_t LlmGenerateResponse::GetProvider() const
{
	return m_Provider.value();
}

bool LlmGenerateResponse::HasProvider() const
{
	return m_Provider.has_value();
}
void LlmGenerateResponse::SetProvider(const utility::string_t& Value)
{
	m_Provider = Value;
}
int32_t LlmGenerateResponse::GetInputTokens() const
{
	return m_InputTokens.value();
}

bool LlmGenerateResponse::HasInputTokens() const
{
	return m_InputTokens.has_value();
}
void LlmGenerateResponse::SetInputTokens(int32_t Value)
{
	m_InputTokens = Value;
}
int32_t LlmGenerateResponse::GetOutputTokens() const
{
	return m_OutputTokens.value();
}

bool LlmGenerateResponse::HasOutputTokens() const
{
	return m_OutputTokens.has_value();
}
void LlmGenerateResponse::SetOutputTokens(int32_t Value)
{
	m_OutputTokens = Value;
}
utility::string_t LlmGenerateResponse::GetFinishReason() const
{
	return m_FinishReason.value();
}

bool LlmGenerateResponse::HasFinishReason() const
{
	return m_FinishReason.has_value();
}
void LlmGenerateResponse::SetFinishReason(const utility::string_t& Value)
{
	m_FinishReason = Value;
}
utility::string_t LlmGenerateResponse::GetEncoding() const
{
	return m_Encoding.value();
}

bool LlmGenerateResponse::HasEncoding() const
{
	return m_Encoding.has_value();
}
void LlmGenerateResponse::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
}

LlmMessage::LlmMessage()
{
}
LlmMessage::~LlmMessage()
{
}

utility::string_t LlmMessage::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Role.has_value())
	{
		rapidjson::Value RoleValue(TypeToJsonValue(m_Role, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("role", RoleValue, JsonDoc.GetAllocator());
	}

	if (m_Text.has_value())
	{
		rapidjson::Value TextValue(TypeToJsonValue(m_Text, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("text", TextValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LlmMessage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmMessage::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("role"))
	{
		const rapidjson::Value& RoleValue = JsonDoc["role"];

		if (RoleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoleValue, m_Role);
		}
	}

	if (JsonDoc.HasMember("text"))
	{
		const rapidjson::Value& TextValue = JsonDoc["text"];

		if (TextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TextValue, m_Text);
		}
	}
}


utility::string_t LlmMessage::GetRole() const
{
	return m_Role.value();
}

bool LlmMessage::HasRole() const
{
	return m_Role.has_value();
}
void LlmMessage::SetRole(const utility::string_t& Value)
{
	m_Role = Value;
}
utility::string_t LlmMessage::GetText() const
{
	return m_Text.value();
}

bool LlmMessage::HasText() const
{
	return m_Text.has_value();
}
void LlmMessage::SetText(const utility::string_t& Value)
{
	m_Text = Value;
}

LlmProviderDto::LlmProviderDto()
{
}
LlmProviderDto::~LlmProviderDto()
{
}

utility::string_t LlmProviderDto::ToJson() const
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

	if (m_Configured.has_value())
	{
		rapidjson::Value ConfiguredValue(TypeToJsonValue(m_Configured, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("configured", ConfiguredValue, JsonDoc.GetAllocator());
	}

	if (m_Models.has_value())
	{
		rapidjson::Value ModelsValue(TypeToJsonValue(m_Models, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("models", ModelsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void LlmProviderDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmProviderDto::FromJson");
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

	if (JsonDoc.HasMember("configured"))
	{
		const rapidjson::Value& ConfiguredValue = JsonDoc["configured"];

		if (ConfiguredValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConfiguredValue, m_Configured);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member configured is null!");
		}
	}

	if (JsonDoc.HasMember("models"))
	{
		const rapidjson::Value& ModelsValue = JsonDoc["models"];

		if (ModelsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelsValue, m_Models);
		}
	}
}


utility::string_t LlmProviderDto::GetId() const
{
	return m_Id.value();
}

bool LlmProviderDto::HasId() const
{
	return m_Id.has_value();
}
void LlmProviderDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t LlmProviderDto::GetName() const
{
	return m_Name.value();
}

bool LlmProviderDto::HasName() const
{
	return m_Name.has_value();
}
void LlmProviderDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
bool LlmProviderDto::GetConfigured() const
{
	return m_Configured.value();
}

bool LlmProviderDto::HasConfigured() const
{
	return m_Configured.has_value();
}
void LlmProviderDto::SetConfigured(const bool& Value)
{
	m_Configured = Value;
}
const std::vector<utility::string_t>& LlmProviderDto::GetModels() const
{
	return m_Models.value();
}

bool LlmProviderDto::HasModels() const
{
	return m_Models.has_value();
}
void LlmProviderDto::SetModels(const std::vector<utility::string_t>& Value)
{
	m_Models = Value;
}

MiningSessionDto::MiningSessionDto()
{
}
MiningSessionDto::~MiningSessionDto()
{
}

utility::string_t MiningSessionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Payload.has_value())
	{
		rapidjson::Value PayloadValue(TypeToJsonValue(m_Payload, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("payload", PayloadValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}

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

	if (m_MinedTenantName.has_value())
	{
		rapidjson::Value MinedTenantNameValue(TypeToJsonValue(m_MinedTenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("minedTenantName", MinedTenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_FilePrompt.has_value())
	{
		rapidjson::Value FilePromptValue(TypeToJsonValue(m_FilePrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("filePrompt", FilePromptValue, JsonDoc.GetAllocator());
	}

	if (m_MiningPrompt.has_value())
	{
		rapidjson::Value MiningPromptValue(TypeToJsonValue(m_MiningPrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("miningPrompt", MiningPromptValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_PayloadLength.has_value())
	{
		rapidjson::Value PayloadLengthValue(TypeToJsonValue(m_PayloadLength, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("payloadLength", PayloadLengthValue, JsonDoc.GetAllocator());
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


	return JsonDocToString(JsonDoc);
}

void MiningSessionDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("payload"))
	{
		const rapidjson::Value& PayloadValue = JsonDoc["payload"];

		if (PayloadValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadValue, m_Payload);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
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

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name);
		}
	}

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt);
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

	if (JsonDoc.HasMember("payloadLength"))
	{
		const rapidjson::Value& PayloadLengthValue = JsonDoc["payloadLength"];

		if (PayloadLengthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadLengthValue, m_PayloadLength);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member payloadLength is null!");
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
}


utility::string_t MiningSessionDto::GetPayload() const
{
	return m_Payload.value();
}

bool MiningSessionDto::HasPayload() const
{
	return m_Payload.has_value();
}
void MiningSessionDto::SetPayload(const utility::string_t& Value)
{
	m_Payload = Value;
}
utility::string_t MiningSessionDto::GetEncoding() const
{
	return m_Encoding.value();
}

bool MiningSessionDto::HasEncoding() const
{
	return m_Encoding.has_value();
}
void MiningSessionDto::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
}
utility::string_t MiningSessionDto::GetId() const
{
	return m_Id.value();
}

bool MiningSessionDto::HasId() const
{
	return m_Id.has_value();
}
void MiningSessionDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t MiningSessionDto::GetName() const
{
	return m_Name.value();
}

bool MiningSessionDto::HasName() const
{
	return m_Name.has_value();
}
void MiningSessionDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t MiningSessionDto::GetMinedTenantName() const
{
	return m_MinedTenantName.value();
}

bool MiningSessionDto::HasMinedTenantName() const
{
	return m_MinedTenantName.has_value();
}
void MiningSessionDto::SetMinedTenantName(const utility::string_t& Value)
{
	m_MinedTenantName = Value;
}
utility::string_t MiningSessionDto::GetFilePrompt() const
{
	return m_FilePrompt.value();
}

bool MiningSessionDto::HasFilePrompt() const
{
	return m_FilePrompt.has_value();
}
void MiningSessionDto::SetFilePrompt(const utility::string_t& Value)
{
	m_FilePrompt = Value;
}
utility::string_t MiningSessionDto::GetMiningPrompt() const
{
	return m_MiningPrompt.value();
}

bool MiningSessionDto::HasMiningPrompt() const
{
	return m_MiningPrompt.has_value();
}
void MiningSessionDto::SetMiningPrompt(const utility::string_t& Value)
{
	m_MiningPrompt = Value;
}
utility::string_t MiningSessionDto::GetStatus() const
{
	return m_Status.value();
}

bool MiningSessionDto::HasStatus() const
{
	return m_Status.has_value();
}
void MiningSessionDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int64_t MiningSessionDto::GetPayloadLength() const
{
	return m_PayloadLength.value();
}

bool MiningSessionDto::HasPayloadLength() const
{
	return m_PayloadLength.has_value();
}
void MiningSessionDto::SetPayloadLength(int64_t Value)
{
	m_PayloadLength = Value;
}
utility::string_t MiningSessionDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool MiningSessionDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void MiningSessionDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t MiningSessionDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool MiningSessionDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void MiningSessionDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

MiningSessionSaveRequest::MiningSessionSaveRequest()
{
}
MiningSessionSaveRequest::~MiningSessionSaveRequest()
{
}

utility::string_t MiningSessionSaveRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_MinedTenantName.has_value())
	{
		rapidjson::Value MinedTenantNameValue(TypeToJsonValue(m_MinedTenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("minedTenantName", MinedTenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_FilePrompt.has_value())
	{
		rapidjson::Value FilePromptValue(TypeToJsonValue(m_FilePrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("filePrompt", FilePromptValue, JsonDoc.GetAllocator());
	}

	if (m_MiningPrompt.has_value())
	{
		rapidjson::Value MiningPromptValue(TypeToJsonValue(m_MiningPrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("miningPrompt", MiningPromptValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_Payload.has_value())
	{
		rapidjson::Value PayloadValue(TypeToJsonValue(m_Payload, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("payload", PayloadValue, JsonDoc.GetAllocator());
	}

	if (m_Encoding.has_value())
	{
		rapidjson::Value EncodingValue(TypeToJsonValue(m_Encoding, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("encoding", EncodingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void MiningSessionSaveRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSaveRequest::FromJson");
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

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt);
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

	if (JsonDoc.HasMember("payload"))
	{
		const rapidjson::Value& PayloadValue = JsonDoc["payload"];

		if (PayloadValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadValue, m_Payload);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding);
		}
	}
}


utility::string_t MiningSessionSaveRequest::GetName() const
{
	return m_Name.value();
}

bool MiningSessionSaveRequest::HasName() const
{
	return m_Name.has_value();
}
void MiningSessionSaveRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t MiningSessionSaveRequest::GetMinedTenantName() const
{
	return m_MinedTenantName.value();
}

bool MiningSessionSaveRequest::HasMinedTenantName() const
{
	return m_MinedTenantName.has_value();
}
void MiningSessionSaveRequest::SetMinedTenantName(const utility::string_t& Value)
{
	m_MinedTenantName = Value;
}
utility::string_t MiningSessionSaveRequest::GetFilePrompt() const
{
	return m_FilePrompt.value();
}

bool MiningSessionSaveRequest::HasFilePrompt() const
{
	return m_FilePrompt.has_value();
}
void MiningSessionSaveRequest::SetFilePrompt(const utility::string_t& Value)
{
	m_FilePrompt = Value;
}
utility::string_t MiningSessionSaveRequest::GetMiningPrompt() const
{
	return m_MiningPrompt.value();
}

bool MiningSessionSaveRequest::HasMiningPrompt() const
{
	return m_MiningPrompt.has_value();
}
void MiningSessionSaveRequest::SetMiningPrompt(const utility::string_t& Value)
{
	m_MiningPrompt = Value;
}
utility::string_t MiningSessionSaveRequest::GetStatus() const
{
	return m_Status.value();
}

bool MiningSessionSaveRequest::HasStatus() const
{
	return m_Status.has_value();
}
void MiningSessionSaveRequest::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
utility::string_t MiningSessionSaveRequest::GetPayload() const
{
	return m_Payload.value();
}

bool MiningSessionSaveRequest::HasPayload() const
{
	return m_Payload.has_value();
}
void MiningSessionSaveRequest::SetPayload(const utility::string_t& Value)
{
	m_Payload = Value;
}
utility::string_t MiningSessionSaveRequest::GetEncoding() const
{
	return m_Encoding.value();
}

bool MiningSessionSaveRequest::HasEncoding() const
{
	return m_Encoding.has_value();
}
void MiningSessionSaveRequest::SetEncoding(const utility::string_t& Value)
{
	m_Encoding = Value;
}

MiningSessionSummaryDto::MiningSessionSummaryDto()
{
}
MiningSessionSummaryDto::~MiningSessionSummaryDto()
{
}

utility::string_t MiningSessionSummaryDto::ToJson() const
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

	if (m_MinedTenantName.has_value())
	{
		rapidjson::Value MinedTenantNameValue(TypeToJsonValue(m_MinedTenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("minedTenantName", MinedTenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_FilePrompt.has_value())
	{
		rapidjson::Value FilePromptValue(TypeToJsonValue(m_FilePrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("filePrompt", FilePromptValue, JsonDoc.GetAllocator());
	}

	if (m_MiningPrompt.has_value())
	{
		rapidjson::Value MiningPromptValue(TypeToJsonValue(m_MiningPrompt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("miningPrompt", MiningPromptValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_PayloadLength.has_value())
	{
		rapidjson::Value PayloadLengthValue(TypeToJsonValue(m_PayloadLength, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("payloadLength", PayloadLengthValue, JsonDoc.GetAllocator());
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


	return JsonDocToString(JsonDoc);
}

void MiningSessionSummaryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSummaryDto::FromJson");
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

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt);
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

	if (JsonDoc.HasMember("payloadLength"))
	{
		const rapidjson::Value& PayloadLengthValue = JsonDoc["payloadLength"];

		if (PayloadLengthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadLengthValue, m_PayloadLength);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member payloadLength is null!");
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
}


utility::string_t MiningSessionSummaryDto::GetId() const
{
	return m_Id.value();
}

bool MiningSessionSummaryDto::HasId() const
{
	return m_Id.has_value();
}
void MiningSessionSummaryDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t MiningSessionSummaryDto::GetName() const
{
	return m_Name.value();
}

bool MiningSessionSummaryDto::HasName() const
{
	return m_Name.has_value();
}
void MiningSessionSummaryDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t MiningSessionSummaryDto::GetMinedTenantName() const
{
	return m_MinedTenantName.value();
}

bool MiningSessionSummaryDto::HasMinedTenantName() const
{
	return m_MinedTenantName.has_value();
}
void MiningSessionSummaryDto::SetMinedTenantName(const utility::string_t& Value)
{
	m_MinedTenantName = Value;
}
utility::string_t MiningSessionSummaryDto::GetFilePrompt() const
{
	return m_FilePrompt.value();
}

bool MiningSessionSummaryDto::HasFilePrompt() const
{
	return m_FilePrompt.has_value();
}
void MiningSessionSummaryDto::SetFilePrompt(const utility::string_t& Value)
{
	m_FilePrompt = Value;
}
utility::string_t MiningSessionSummaryDto::GetMiningPrompt() const
{
	return m_MiningPrompt.value();
}

bool MiningSessionSummaryDto::HasMiningPrompt() const
{
	return m_MiningPrompt.has_value();
}
void MiningSessionSummaryDto::SetMiningPrompt(const utility::string_t& Value)
{
	m_MiningPrompt = Value;
}
utility::string_t MiningSessionSummaryDto::GetStatus() const
{
	return m_Status.value();
}

bool MiningSessionSummaryDto::HasStatus() const
{
	return m_Status.has_value();
}
void MiningSessionSummaryDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int64_t MiningSessionSummaryDto::GetPayloadLength() const
{
	return m_PayloadLength.value();
}

bool MiningSessionSummaryDto::HasPayloadLength() const
{
	return m_PayloadLength.has_value();
}
void MiningSessionSummaryDto::SetPayloadLength(int64_t Value)
{
	m_PayloadLength = Value;
}
utility::string_t MiningSessionSummaryDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool MiningSessionSummaryDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void MiningSessionSummaryDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t MiningSessionSummaryDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool MiningSessionSummaryDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
void MiningSessionSummaryDto::SetUpdatedAt(const utility::string_t& Value)
{
	m_UpdatedAt = Value;
}

MiningSessionSummaryDtoDataPage::MiningSessionSummaryDtoDataPage()
{
}
MiningSessionSummaryDtoDataPage::~MiningSessionSummaryDtoDataPage()
{
}

utility::string_t MiningSessionSummaryDtoDataPage::ToJson() const
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

void MiningSessionSummaryDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSummaryDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& MiningSessionSummaryDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool MiningSessionSummaryDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void MiningSessionSummaryDtoDataPage::SetItems(const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& Value)
{
	m_Items = Value;
}
int32_t MiningSessionSummaryDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool MiningSessionSummaryDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void MiningSessionSummaryDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t MiningSessionSummaryDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool MiningSessionSummaryDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void MiningSessionSummaryDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t MiningSessionSummaryDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool MiningSessionSummaryDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void MiningSessionSummaryDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t MiningSessionSummaryDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool MiningSessionSummaryDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void MiningSessionSummaryDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
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

PersonDto::PersonDto()
{
}
PersonDto::~PersonDto()
{
}

utility::string_t PersonDto::ToJson() const
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

	if (m_DepartmentId.has_value())
	{
		rapidjson::Value DepartmentIdValue(TypeToJsonValue(m_DepartmentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("departmentId", DepartmentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_WeeklyCapacityHours.has_value())
	{
		rapidjson::Value WeeklyCapacityHoursValue(TypeToJsonValue(m_WeeklyCapacityHours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("weeklyCapacityHours", WeeklyCapacityHoursValue, JsonDoc.GetAllocator());
	}

	if (m_IsActive.has_value())
	{
		rapidjson::Value IsActiveValue(TypeToJsonValue(m_IsActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isActive", IsActiveValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PersonDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PersonDto::FromJson");
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

	if (JsonDoc.HasMember("departmentId"))
	{
		const rapidjson::Value& DepartmentIdValue = JsonDoc["departmentId"];

		if (DepartmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentIdValue, m_DepartmentId);
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

	if (JsonDoc.HasMember("weeklyCapacityHours"))
	{
		const rapidjson::Value& WeeklyCapacityHoursValue = JsonDoc["weeklyCapacityHours"];

		if (WeeklyCapacityHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeeklyCapacityHoursValue, m_WeeklyCapacityHours);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member weeklyCapacityHours is null!");
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isActive is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location);
		}
	}
}


utility::string_t PersonDto::GetId() const
{
	return m_Id.value();
}

bool PersonDto::HasId() const
{
	return m_Id.has_value();
}
void PersonDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t PersonDto::GetName() const
{
	return m_Name.value();
}

bool PersonDto::HasName() const
{
	return m_Name.has_value();
}
void PersonDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t PersonDto::GetDepartmentId() const
{
	return m_DepartmentId.value();
}

bool PersonDto::HasDepartmentId() const
{
	return m_DepartmentId.has_value();
}
void PersonDto::SetDepartmentId(const utility::string_t& Value)
{
	m_DepartmentId = Value;
}
utility::string_t PersonDto::GetTitle() const
{
	return m_Title.value();
}

bool PersonDto::HasTitle() const
{
	return m_Title.has_value();
}
void PersonDto::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
double PersonDto::GetWeeklyCapacityHours() const
{
	return m_WeeklyCapacityHours.value();
}

bool PersonDto::HasWeeklyCapacityHours() const
{
	return m_WeeklyCapacityHours.has_value();
}
void PersonDto::SetWeeklyCapacityHours(double Value)
{
	m_WeeklyCapacityHours = Value;
}
bool PersonDto::GetIsActive() const
{
	return m_IsActive.value();
}

bool PersonDto::HasIsActive() const
{
	return m_IsActive.has_value();
}
void PersonDto::SetIsActive(const bool& Value)
{
	m_IsActive = Value;
}
utility::string_t PersonDto::GetLocation() const
{
	return m_Location.value();
}

bool PersonDto::HasLocation() const
{
	return m_Location.has_value();
}
void PersonDto::SetLocation(const utility::string_t& Value)
{
	m_Location = Value;
}

PersonUpsertRequest::PersonUpsertRequest()
{
}
PersonUpsertRequest::~PersonUpsertRequest()
{
}

utility::string_t PersonUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_DepartmentId.has_value())
	{
		rapidjson::Value DepartmentIdValue(TypeToJsonValue(m_DepartmentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("departmentId", DepartmentIdValue, JsonDoc.GetAllocator());
	}

	if (m_Title.has_value())
	{
		rapidjson::Value TitleValue(TypeToJsonValue(m_Title, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("title", TitleValue, JsonDoc.GetAllocator());
	}

	if (m_WeeklyCapacityHours.has_value())
	{
		rapidjson::Value WeeklyCapacityHoursValue(TypeToJsonValue(m_WeeklyCapacityHours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("weeklyCapacityHours", WeeklyCapacityHoursValue, JsonDoc.GetAllocator());
	}

	if (m_IsActive.has_value())
	{
		rapidjson::Value IsActiveValue(TypeToJsonValue(m_IsActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isActive", IsActiveValue, JsonDoc.GetAllocator());
	}

	if (m_Location.has_value())
	{
		rapidjson::Value LocationValue(TypeToJsonValue(m_Location, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("location", LocationValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PersonUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PersonUpsertRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("departmentId"))
	{
		const rapidjson::Value& DepartmentIdValue = JsonDoc["departmentId"];

		if (DepartmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentIdValue, m_DepartmentId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member departmentId is null!");
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

	if (JsonDoc.HasMember("weeklyCapacityHours"))
	{
		const rapidjson::Value& WeeklyCapacityHoursValue = JsonDoc["weeklyCapacityHours"];

		if (WeeklyCapacityHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeeklyCapacityHoursValue, m_WeeklyCapacityHours);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member weeklyCapacityHours is null!");
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isActive is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location);
		}
	}
}


utility::string_t PersonUpsertRequest::GetName() const
{
	return m_Name.value();
}

bool PersonUpsertRequest::HasName() const
{
	return m_Name.has_value();
}
void PersonUpsertRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t PersonUpsertRequest::GetDepartmentId() const
{
	return m_DepartmentId.value();
}

bool PersonUpsertRequest::HasDepartmentId() const
{
	return m_DepartmentId.has_value();
}
void PersonUpsertRequest::SetDepartmentId(const utility::string_t& Value)
{
	m_DepartmentId = Value;
}
utility::string_t PersonUpsertRequest::GetTitle() const
{
	return m_Title.value();
}

bool PersonUpsertRequest::HasTitle() const
{
	return m_Title.has_value();
}
void PersonUpsertRequest::SetTitle(const utility::string_t& Value)
{
	m_Title = Value;
}
double PersonUpsertRequest::GetWeeklyCapacityHours() const
{
	return m_WeeklyCapacityHours.value();
}

bool PersonUpsertRequest::HasWeeklyCapacityHours() const
{
	return m_WeeklyCapacityHours.has_value();
}
void PersonUpsertRequest::SetWeeklyCapacityHours(double Value)
{
	m_WeeklyCapacityHours = Value;
}
bool PersonUpsertRequest::GetIsActive() const
{
	return m_IsActive.value();
}

bool PersonUpsertRequest::HasIsActive() const
{
	return m_IsActive.has_value();
}
void PersonUpsertRequest::SetIsActive(const bool& Value)
{
	m_IsActive = Value;
}
utility::string_t PersonUpsertRequest::GetLocation() const
{
	return m_Location.value();
}

bool PersonUpsertRequest::HasLocation() const
{
	return m_Location.has_value();
}
void PersonUpsertRequest::SetLocation(const utility::string_t& Value)
{
	m_Location = Value;
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

ProjectDto::ProjectDto()
{
}
ProjectDto::~ProjectDto()
{
}

utility::string_t ProjectDto::ToJson() const
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

	if (m_Colour.has_value())
	{
		rapidjson::Value ColourValue(TypeToJsonValue(m_Colour, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("colour", ColourValue, JsonDoc.GetAllocator());
	}

	if (m_IsActive.has_value())
	{
		rapidjson::Value IsActiveValue(TypeToJsonValue(m_IsActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isActive", IsActiveValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ProjectDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProjectDto::FromJson");
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

	if (JsonDoc.HasMember("colour"))
	{
		const rapidjson::Value& ColourValue = JsonDoc["colour"];

		if (ColourValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColourValue, m_Colour);
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isActive is null!");
		}
	}
}


utility::string_t ProjectDto::GetId() const
{
	return m_Id.value();
}

bool ProjectDto::HasId() const
{
	return m_Id.has_value();
}
void ProjectDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ProjectDto::GetName() const
{
	return m_Name.value();
}

bool ProjectDto::HasName() const
{
	return m_Name.has_value();
}
void ProjectDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t ProjectDto::GetColour() const
{
	return m_Colour.value();
}

bool ProjectDto::HasColour() const
{
	return m_Colour.has_value();
}
void ProjectDto::SetColour(const utility::string_t& Value)
{
	m_Colour = Value;
}
bool ProjectDto::GetIsActive() const
{
	return m_IsActive.value();
}

bool ProjectDto::HasIsActive() const
{
	return m_IsActive.has_value();
}
void ProjectDto::SetIsActive(const bool& Value)
{
	m_IsActive = Value;
}

ProjectUpsertRequest::ProjectUpsertRequest()
{
}
ProjectUpsertRequest::~ProjectUpsertRequest()
{
}

utility::string_t ProjectUpsertRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Colour.has_value())
	{
		rapidjson::Value ColourValue(TypeToJsonValue(m_Colour, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("colour", ColourValue, JsonDoc.GetAllocator());
	}

	if (m_IsActive.has_value())
	{
		rapidjson::Value IsActiveValue(TypeToJsonValue(m_IsActive, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isActive", IsActiveValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ProjectUpsertRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProjectUpsertRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("colour"))
	{
		const rapidjson::Value& ColourValue = JsonDoc["colour"];

		if (ColourValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColourValue, m_Colour);
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isActive is null!");
		}
	}
}


utility::string_t ProjectUpsertRequest::GetName() const
{
	return m_Name.value();
}

bool ProjectUpsertRequest::HasName() const
{
	return m_Name.has_value();
}
void ProjectUpsertRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t ProjectUpsertRequest::GetColour() const
{
	return m_Colour.value();
}

bool ProjectUpsertRequest::HasColour() const
{
	return m_Colour.has_value();
}
void ProjectUpsertRequest::SetColour(const utility::string_t& Value)
{
	m_Colour = Value;
}
bool ProjectUpsertRequest::GetIsActive() const
{
	return m_IsActive.value();
}

bool ProjectUpsertRequest::HasIsActive() const
{
	return m_IsActive.has_value();
}
void ProjectUpsertRequest::SetIsActive(const bool& Value)
{
	m_IsActive = Value;
}

QueueEntryDto::QueueEntryDto()
{
}
QueueEntryDto::~QueueEntryDto()
{
}

utility::string_t QueueEntryDto::ToJson() const
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

	if (m_UserName.has_value())
	{
		rapidjson::Value UserNameValue(TypeToJsonValue(m_UserName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("userName", UserNameValue, JsonDoc.GetAllocator());
	}

	if (m_EnqueuedAt.has_value())
	{
		rapidjson::Value EnqueuedAtValue(TypeToJsonValue(m_EnqueuedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enqueuedAt", EnqueuedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Note.has_value())
	{
		rapidjson::Value NoteValue(TypeToJsonValue(m_Note, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("note", NoteValue, JsonDoc.GetAllocator());
	}

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_IsReserved.has_value())
	{
		rapidjson::Value IsReservedValue(TypeToJsonValue(m_IsReserved, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isReserved", IsReservedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueEntryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueEntryDto::FromJson");
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

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName);
		}
	}

	if (JsonDoc.HasMember("enqueuedAt"))
	{
		const rapidjson::Value& EnqueuedAtValue = JsonDoc["enqueuedAt"];

		if (EnqueuedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnqueuedAtValue, m_EnqueuedAt);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enqueuedAt is null!");
		}
	}

	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note);
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

	if (JsonDoc.HasMember("isReserved"))
	{
		const rapidjson::Value& IsReservedValue = JsonDoc["isReserved"];

		if (IsReservedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsReservedValue, m_IsReserved);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isReserved is null!");
		}
	}
}


utility::string_t QueueEntryDto::GetId() const
{
	return m_Id.value();
}

bool QueueEntryDto::HasId() const
{
	return m_Id.has_value();
}
void QueueEntryDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t QueueEntryDto::GetUserId() const
{
	return m_UserId.value();
}

bool QueueEntryDto::HasUserId() const
{
	return m_UserId.has_value();
}
void QueueEntryDto::SetUserId(const utility::string_t& Value)
{
	m_UserId = Value;
}
utility::string_t QueueEntryDto::GetUserName() const
{
	return m_UserName.value();
}

bool QueueEntryDto::HasUserName() const
{
	return m_UserName.has_value();
}
void QueueEntryDto::SetUserName(const utility::string_t& Value)
{
	m_UserName = Value;
}
utility::string_t QueueEntryDto::GetEnqueuedAt() const
{
	return m_EnqueuedAt.value();
}

bool QueueEntryDto::HasEnqueuedAt() const
{
	return m_EnqueuedAt.has_value();
}
void QueueEntryDto::SetEnqueuedAt(const utility::string_t& Value)
{
	m_EnqueuedAt = Value;
}
utility::string_t QueueEntryDto::GetNote() const
{
	return m_Note.value();
}

bool QueueEntryDto::HasNote() const
{
	return m_Note.has_value();
}
void QueueEntryDto::SetNote(const utility::string_t& Value)
{
	m_Note = Value;
}
int32_t QueueEntryDto::GetPosition() const
{
	return m_Position.value();
}

bool QueueEntryDto::HasPosition() const
{
	return m_Position.has_value();
}
void QueueEntryDto::SetPosition(int32_t Value)
{
	m_Position = Value;
}
bool QueueEntryDto::GetIsReserved() const
{
	return m_IsReserved.value();
}

bool QueueEntryDto::HasIsReserved() const
{
	return m_IsReserved.has_value();
}
void QueueEntryDto::SetIsReserved(const bool& Value)
{
	m_IsReserved = Value;
}

QueueOutcomeDto::QueueOutcomeDto()
{
}
QueueOutcomeDto::~QueueOutcomeDto()
{
}

utility::string_t QueueOutcomeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Outcome.has_value())
	{
		rapidjson::Value OutcomeValue(TypeToJsonValue(m_Outcome, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("outcome", OutcomeValue, JsonDoc.GetAllocator());
	}

	if (m_System.has_value())
	{
		rapidjson::Value SystemValue(TypeToJsonValue(m_System, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("system", SystemValue, JsonDoc.GetAllocator());
	}

	if (m_Position.has_value())
	{
		rapidjson::Value PositionValue(TypeToJsonValue(m_Position, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("position", PositionValue, JsonDoc.GetAllocator());
	}

	if (m_QueueDepth.has_value())
	{
		rapidjson::Value QueueDepthValue(TypeToJsonValue(m_QueueDepth, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queueDepth", QueueDepthValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QueueOutcomeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueOutcomeDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("outcome"))
	{
		const rapidjson::Value& OutcomeValue = JsonDoc["outcome"];

		if (OutcomeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutcomeValue, m_Outcome);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member system is null!");
		}
	}

	if (JsonDoc.HasMember("position"))
	{
		const rapidjson::Value& PositionValue = JsonDoc["position"];

		if (PositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PositionValue, m_Position);
		}
	}

	if (JsonDoc.HasMember("queueDepth"))
	{
		const rapidjson::Value& QueueDepthValue = JsonDoc["queueDepth"];

		if (QueueDepthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueDepthValue, m_QueueDepth);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member queueDepth is null!");
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
}


utility::string_t QueueOutcomeDto::GetOutcome() const
{
	return m_Outcome.value();
}

bool QueueOutcomeDto::HasOutcome() const
{
	return m_Outcome.has_value();
}
void QueueOutcomeDto::SetOutcome(const utility::string_t& Value)
{
	m_Outcome = Value;
}
std::shared_ptr<SystemDto> QueueOutcomeDto::GetSystem() const
{
	return m_System.value();
}

bool QueueOutcomeDto::HasSystem() const
{
	return m_System.has_value();
}
void QueueOutcomeDto::SetSystem(const std::shared_ptr<SystemDto>& Value)
{
	m_System = Value;
}
int32_t QueueOutcomeDto::GetPosition() const
{
	return m_Position.value();
}

bool QueueOutcomeDto::HasPosition() const
{
	return m_Position.has_value();
}
void QueueOutcomeDto::SetPosition(int32_t Value)
{
	m_Position = Value;
}
int32_t QueueOutcomeDto::GetQueueDepth() const
{
	return m_QueueDepth.value();
}

bool QueueOutcomeDto::HasQueueDepth() const
{
	return m_QueueDepth.has_value();
}
void QueueOutcomeDto::SetQueueDepth(int32_t Value)
{
	m_QueueDepth = Value;
}
utility::string_t QueueOutcomeDto::GetMessage() const
{
	return m_Message.value();
}

bool QueueOutcomeDto::HasMessage() const
{
	return m_Message.has_value();
}
void QueueOutcomeDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}

QuotaFeatureActivityDto::QuotaFeatureActivityDto()
{
}
QuotaFeatureActivityDto::~QuotaFeatureActivityDto()
{
}

utility::string_t QuotaFeatureActivityDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FeatureName.has_value())
	{
		rapidjson::Value FeatureNameValue(TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("featureName", FeatureNameValue, JsonDoc.GetAllocator());
	}

	if (m_AppliesToType.has_value())
	{
		rapidjson::Value AppliesToTypeValue(TypeToJsonValue(m_AppliesToType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("appliesToType", AppliesToTypeValue, JsonDoc.GetAllocator());
	}

	if (m_AppliesToId.has_value())
	{
		rapidjson::Value AppliesToIdValue(TypeToJsonValue(m_AppliesToId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("appliesToId", AppliesToIdValue, JsonDoc.GetAllocator());
	}

	if (m_AppliesToQualifierType.has_value())
	{
		rapidjson::Value AppliesToQualifierTypeValue(TypeToJsonValue(m_AppliesToQualifierType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("appliesToQualifierType", AppliesToQualifierTypeValue, JsonDoc.GetAllocator());
	}

	if (m_AppliesToQualifierId.has_value())
	{
		rapidjson::Value AppliesToQualifierIdValue(TypeToJsonValue(m_AppliesToQualifierId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("appliesToQualifierId", AppliesToQualifierIdValue, JsonDoc.GetAllocator());
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

	if (m_Amount.has_value())
	{
		rapidjson::Value AmountValue(TypeToJsonValue(m_Amount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("amount", AmountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QuotaFeatureActivityDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaFeatureActivityDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("featureName"))
	{
		const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

		if (FeatureNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FeatureNameValue, m_FeatureName);
		}
	}

	if (JsonDoc.HasMember("appliesToType"))
	{
		const rapidjson::Value& AppliesToTypeValue = JsonDoc["appliesToType"];

		if (AppliesToTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliesToTypeValue, m_AppliesToType);
		}
	}

	if (JsonDoc.HasMember("appliesToId"))
	{
		const rapidjson::Value& AppliesToIdValue = JsonDoc["appliesToId"];

		if (AppliesToIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliesToIdValue, m_AppliesToId);
		}
	}

	if (JsonDoc.HasMember("appliesToQualifierType"))
	{
		const rapidjson::Value& AppliesToQualifierTypeValue = JsonDoc["appliesToQualifierType"];

		if (AppliesToQualifierTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliesToQualifierTypeValue, m_AppliesToQualifierType);
		}
	}

	if (JsonDoc.HasMember("appliesToQualifierId"))
	{
		const rapidjson::Value& AppliesToQualifierIdValue = JsonDoc["appliesToQualifierId"];

		if (AppliesToQualifierIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliesToQualifierIdValue, m_AppliesToQualifierId);
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

	if (JsonDoc.HasMember("amount"))
	{
		const rapidjson::Value& AmountValue = JsonDoc["amount"];

		if (AmountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AmountValue, m_Amount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member amount is null!");
		}
	}
}


utility::string_t QuotaFeatureActivityDto::GetFeatureName() const
{
	return m_FeatureName.value();
}

bool QuotaFeatureActivityDto::HasFeatureName() const
{
	return m_FeatureName.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetAppliesToType() const
{
	return m_AppliesToType.value();
}

bool QuotaFeatureActivityDto::HasAppliesToType() const
{
	return m_AppliesToType.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetAppliesToId() const
{
	return m_AppliesToId.value();
}

bool QuotaFeatureActivityDto::HasAppliesToId() const
{
	return m_AppliesToId.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetAppliesToQualifierType() const
{
	return m_AppliesToQualifierType.value();
}

bool QuotaFeatureActivityDto::HasAppliesToQualifierType() const
{
	return m_AppliesToQualifierType.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetAppliesToQualifierId() const
{
	return m_AppliesToQualifierId.value();
}

bool QuotaFeatureActivityDto::HasAppliesToQualifierId() const
{
	return m_AppliesToQualifierId.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool QuotaFeatureActivityDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t QuotaFeatureActivityDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool QuotaFeatureActivityDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
int32_t QuotaFeatureActivityDto::GetAmount() const
{
	return m_Amount.value();
}

bool QuotaFeatureActivityDto::HasAmount() const
{
	return m_Amount.has_value();
}

QuotaFeatureActivityDtoDataPage::QuotaFeatureActivityDtoDataPage()
{
}
QuotaFeatureActivityDtoDataPage::~QuotaFeatureActivityDtoDataPage()
{
}

utility::string_t QuotaFeatureActivityDtoDataPage::ToJson() const
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

void QuotaFeatureActivityDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaFeatureActivityDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>& QuotaFeatureActivityDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool QuotaFeatureActivityDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void QuotaFeatureActivityDtoDataPage::SetItems(const std::vector<std::shared_ptr<QuotaFeatureActivityDto>>& Value)
{
	m_Items = Value;
}
int32_t QuotaFeatureActivityDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool QuotaFeatureActivityDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void QuotaFeatureActivityDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t QuotaFeatureActivityDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool QuotaFeatureActivityDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void QuotaFeatureActivityDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t QuotaFeatureActivityDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool QuotaFeatureActivityDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void QuotaFeatureActivityDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t QuotaFeatureActivityDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool QuotaFeatureActivityDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void QuotaFeatureActivityDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

QuotaFeatureLimitProgressDto::QuotaFeatureLimitProgressDto()
{
}
QuotaFeatureLimitProgressDto::~QuotaFeatureLimitProgressDto()
{
}

utility::string_t QuotaFeatureLimitProgressDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FeatureName.has_value())
	{
		rapidjson::Value FeatureNameValue(TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("featureName", FeatureNameValue, JsonDoc.GetAllocator());
	}

	if (m_ActivityCount.has_value())
	{
		rapidjson::Value ActivityCountValue(TypeToJsonValue(m_ActivityCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("activityCount", ActivityCountValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QuotaFeatureLimitProgressDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaFeatureLimitProgressDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("featureName"))
	{
		const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

		if (FeatureNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FeatureNameValue, m_FeatureName);
		}
	}

	if (JsonDoc.HasMember("activityCount"))
	{
		const rapidjson::Value& ActivityCountValue = JsonDoc["activityCount"];

		if (ActivityCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActivityCountValue, m_ActivityCount);
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
}


utility::string_t QuotaFeatureLimitProgressDto::GetFeatureName() const
{
	return m_FeatureName.value();
}

bool QuotaFeatureLimitProgressDto::HasFeatureName() const
{
	return m_FeatureName.has_value();
}
int32_t QuotaFeatureLimitProgressDto::GetActivityCount() const
{
	return m_ActivityCount.value();
}

bool QuotaFeatureLimitProgressDto::HasActivityCount() const
{
	return m_ActivityCount.has_value();
}
int32_t QuotaFeatureLimitProgressDto::GetLimit() const
{
	return m_Limit.value();
}

bool QuotaFeatureLimitProgressDto::HasLimit() const
{
	return m_Limit.has_value();
}

QuotaFeatureTierDto::QuotaFeatureTierDto()
{
}
QuotaFeatureTierDto::~QuotaFeatureTierDto()
{
}

utility::string_t QuotaFeatureTierDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_FeatureName.has_value())
	{
		rapidjson::Value FeatureNameValue(TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("featureName", FeatureNameValue, JsonDoc.GetAllocator());
	}

	if (m_TierName.has_value())
	{
		rapidjson::Value TierNameValue(TypeToJsonValue(m_TierName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tierName", TierNameValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_Period.has_value())
	{
		rapidjson::Value PeriodValue(TypeToJsonValue(m_Period, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("period", PeriodValue, JsonDoc.GetAllocator());
	}

	if (m_AllowReductions.has_value())
	{
		rapidjson::Value AllowReductionsValue(TypeToJsonValue(m_AllowReductions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowReductions", AllowReductionsValue, JsonDoc.GetAllocator());
	}

	if (m_Version.has_value())
	{
		rapidjson::Value VersionValue(TypeToJsonValue(m_Version, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("version", VersionValue, JsonDoc.GetAllocator());
	}

	if (m_Enabled.has_value())
	{
		rapidjson::Value EnabledValue(TypeToJsonValue(m_Enabled, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enabled", EnabledValue, JsonDoc.GetAllocator());
	}

	if (m_LimitsEnforced.has_value())
	{
		rapidjson::Value LimitsEnforcedValue(TypeToJsonValue(m_LimitsEnforced, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limitsEnforced", LimitsEnforcedValue, JsonDoc.GetAllocator());
	}

	if (m_Category.has_value())
	{
		rapidjson::Value CategoryValue(TypeToJsonValue(m_Category, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("category", CategoryValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QuotaFeatureTierDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaFeatureTierDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("featureName"))
	{
		const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

		if (FeatureNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FeatureNameValue, m_FeatureName);
		}
	}

	if (JsonDoc.HasMember("tierName"))
	{
		const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

		if (TierNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TierNameValue, m_TierName);
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

	if (JsonDoc.HasMember("period"))
	{
		const rapidjson::Value& PeriodValue = JsonDoc["period"];

		if (PeriodValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PeriodValue, m_Period);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member period is null!");
		}
	}

	if (JsonDoc.HasMember("allowReductions"))
	{
		const rapidjson::Value& AllowReductionsValue = JsonDoc["allowReductions"];

		if (AllowReductionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowReductionsValue, m_AllowReductions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member allowReductions is null!");
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member version is null!");
		}
	}

	if (JsonDoc.HasMember("enabled"))
	{
		const rapidjson::Value& EnabledValue = JsonDoc["enabled"];

		if (EnabledValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnabledValue, m_Enabled);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enabled is null!");
		}
	}

	if (JsonDoc.HasMember("limitsEnforced"))
	{
		const rapidjson::Value& LimitsEnforcedValue = JsonDoc["limitsEnforced"];

		if (LimitsEnforcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitsEnforcedValue, m_LimitsEnforced);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member limitsEnforced is null!");
		}
	}

	if (JsonDoc.HasMember("category"))
	{
		const rapidjson::Value& CategoryValue = JsonDoc["category"];

		if (CategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CategoryValue, m_Category);
		}
	}
}


utility::string_t QuotaFeatureTierDto::GetFeatureName() const
{
	return m_FeatureName.value();
}

bool QuotaFeatureTierDto::HasFeatureName() const
{
	return m_FeatureName.has_value();
}
utility::string_t QuotaFeatureTierDto::GetTierName() const
{
	return m_TierName.value();
}

bool QuotaFeatureTierDto::HasTierName() const
{
	return m_TierName.has_value();
}
int32_t QuotaFeatureTierDto::GetLimit() const
{
	return m_Limit.value();
}

bool QuotaFeatureTierDto::HasLimit() const
{
	return m_Limit.has_value();
}
void QuotaFeatureTierDto::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
std::shared_ptr<QuotaSumByPeriodDto> QuotaFeatureTierDto::GetPeriod() const
{
	return m_Period.value();
}

bool QuotaFeatureTierDto::HasPeriod() const
{
	return m_Period.has_value();
}
void QuotaFeatureTierDto::SetPeriod(const std::shared_ptr<QuotaSumByPeriodDto>& Value)
{
	m_Period = Value;
}
bool QuotaFeatureTierDto::GetAllowReductions() const
{
	return m_AllowReductions.value();
}

bool QuotaFeatureTierDto::HasAllowReductions() const
{
	return m_AllowReductions.has_value();
}
void QuotaFeatureTierDto::SetAllowReductions(const bool& Value)
{
	m_AllowReductions = Value;
}
int32_t QuotaFeatureTierDto::GetVersion() const
{
	return m_Version.value();
}

bool QuotaFeatureTierDto::HasVersion() const
{
	return m_Version.has_value();
}
bool QuotaFeatureTierDto::GetEnabled() const
{
	return m_Enabled.value();
}

bool QuotaFeatureTierDto::HasEnabled() const
{
	return m_Enabled.has_value();
}
void QuotaFeatureTierDto::SetEnabled(const bool& Value)
{
	m_Enabled = Value;
}
bool QuotaFeatureTierDto::GetLimitsEnforced() const
{
	return m_LimitsEnforced.value();
}

bool QuotaFeatureTierDto::HasLimitsEnforced() const
{
	return m_LimitsEnforced.has_value();
}
void QuotaFeatureTierDto::SetLimitsEnforced(const bool& Value)
{
	m_LimitsEnforced = Value;
}
utility::string_t QuotaFeatureTierDto::GetCategory() const
{
	return m_Category.value();
}

bool QuotaFeatureTierDto::HasCategory() const
{
	return m_Category.has_value();
}
void QuotaFeatureTierDto::SetCategory(const utility::string_t& Value)
{
	m_Category = Value;
}

QuotaFeatureTierHistoryDto::QuotaFeatureTierHistoryDto()
{
}
QuotaFeatureTierHistoryDto::~QuotaFeatureTierHistoryDto()
{
}

utility::string_t QuotaFeatureTierHistoryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TierName.has_value())
	{
		rapidjson::Value TierNameValue(TypeToJsonValue(m_TierName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tierName", TierNameValue, JsonDoc.GetAllocator());
	}

	if (m_FeatureName.has_value())
	{
		rapidjson::Value FeatureNameValue(TypeToJsonValue(m_FeatureName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("featureName", FeatureNameValue, JsonDoc.GetAllocator());
	}

	if (m_Version.has_value())
	{
		rapidjson::Value VersionValue(TypeToJsonValue(m_Version, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("version", VersionValue, JsonDoc.GetAllocator());
	}

	if (m_Limit.has_value())
	{
		rapidjson::Value LimitValue(TypeToJsonValue(m_Limit, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limit", LimitValue, JsonDoc.GetAllocator());
	}

	if (m_Period.has_value())
	{
		rapidjson::Value PeriodValue(TypeToJsonValue(m_Period, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("period", PeriodValue, JsonDoc.GetAllocator());
	}

	if (m_AllowReductions.has_value())
	{
		rapidjson::Value AllowReductionsValue(TypeToJsonValue(m_AllowReductions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("allowReductions", AllowReductionsValue, JsonDoc.GetAllocator());
	}

	if (m_Enabled.has_value())
	{
		rapidjson::Value EnabledValue(TypeToJsonValue(m_Enabled, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("enabled", EnabledValue, JsonDoc.GetAllocator());
	}

	if (m_LimitsEnforced.has_value())
	{
		rapidjson::Value LimitsEnforcedValue(TypeToJsonValue(m_LimitsEnforced, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("limitsEnforced", LimitsEnforcedValue, JsonDoc.GetAllocator());
	}

	if (m_Category.has_value())
	{
		rapidjson::Value CategoryValue(TypeToJsonValue(m_Category, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("category", CategoryValue, JsonDoc.GetAllocator());
	}

	if (m_ChangeNote.has_value())
	{
		rapidjson::Value ChangeNoteValue(TypeToJsonValue(m_ChangeNote, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("changeNote", ChangeNoteValue, JsonDoc.GetAllocator());
	}

	if (m_ParentVersion.has_value())
	{
		rapidjson::Value ParentVersionValue(TypeToJsonValue(m_ParentVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("parentVersion", ParentVersionValue, JsonDoc.GetAllocator());
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


	return JsonDocToString(JsonDoc);
}

void QuotaFeatureTierHistoryDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaFeatureTierHistoryDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tierName"))
	{
		const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

		if (TierNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TierNameValue, m_TierName);
		}
	}

	if (JsonDoc.HasMember("featureName"))
	{
		const rapidjson::Value& FeatureNameValue = JsonDoc["featureName"];

		if (FeatureNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FeatureNameValue, m_FeatureName);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member version is null!");
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

	if (JsonDoc.HasMember("period"))
	{
		const rapidjson::Value& PeriodValue = JsonDoc["period"];

		if (PeriodValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PeriodValue, m_Period);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member period is null!");
		}
	}

	if (JsonDoc.HasMember("allowReductions"))
	{
		const rapidjson::Value& AllowReductionsValue = JsonDoc["allowReductions"];

		if (AllowReductionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowReductionsValue, m_AllowReductions);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member allowReductions is null!");
		}
	}

	if (JsonDoc.HasMember("enabled"))
	{
		const rapidjson::Value& EnabledValue = JsonDoc["enabled"];

		if (EnabledValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnabledValue, m_Enabled);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member enabled is null!");
		}
	}

	if (JsonDoc.HasMember("limitsEnforced"))
	{
		const rapidjson::Value& LimitsEnforcedValue = JsonDoc["limitsEnforced"];

		if (LimitsEnforcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitsEnforcedValue, m_LimitsEnforced);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member limitsEnforced is null!");
		}
	}

	if (JsonDoc.HasMember("category"))
	{
		const rapidjson::Value& CategoryValue = JsonDoc["category"];

		if (CategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CategoryValue, m_Category);
		}
	}

	if (JsonDoc.HasMember("changeNote"))
	{
		const rapidjson::Value& ChangeNoteValue = JsonDoc["changeNote"];

		if (ChangeNoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChangeNoteValue, m_ChangeNote);
		}
	}

	if (JsonDoc.HasMember("parentVersion"))
	{
		const rapidjson::Value& ParentVersionValue = JsonDoc["parentVersion"];

		if (ParentVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentVersionValue, m_ParentVersion);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member parentVersion is null!");
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

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy);
		}
	}
}


utility::string_t QuotaFeatureTierHistoryDto::GetTierName() const
{
	return m_TierName.value();
}

bool QuotaFeatureTierHistoryDto::HasTierName() const
{
	return m_TierName.has_value();
}
void QuotaFeatureTierHistoryDto::SetTierName(const utility::string_t& Value)
{
	m_TierName = Value;
}
utility::string_t QuotaFeatureTierHistoryDto::GetFeatureName() const
{
	return m_FeatureName.value();
}

bool QuotaFeatureTierHistoryDto::HasFeatureName() const
{
	return m_FeatureName.has_value();
}
void QuotaFeatureTierHistoryDto::SetFeatureName(const utility::string_t& Value)
{
	m_FeatureName = Value;
}
int32_t QuotaFeatureTierHistoryDto::GetVersion() const
{
	return m_Version.value();
}

bool QuotaFeatureTierHistoryDto::HasVersion() const
{
	return m_Version.has_value();
}
void QuotaFeatureTierHistoryDto::SetVersion(int32_t Value)
{
	m_Version = Value;
}
int32_t QuotaFeatureTierHistoryDto::GetLimit() const
{
	return m_Limit.value();
}

bool QuotaFeatureTierHistoryDto::HasLimit() const
{
	return m_Limit.has_value();
}
void QuotaFeatureTierHistoryDto::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
std::shared_ptr<QuotaSumByPeriodDto> QuotaFeatureTierHistoryDto::GetPeriod() const
{
	return m_Period.value();
}

bool QuotaFeatureTierHistoryDto::HasPeriod() const
{
	return m_Period.has_value();
}
void QuotaFeatureTierHistoryDto::SetPeriod(const std::shared_ptr<QuotaSumByPeriodDto>& Value)
{
	m_Period = Value;
}
bool QuotaFeatureTierHistoryDto::GetAllowReductions() const
{
	return m_AllowReductions.value();
}

bool QuotaFeatureTierHistoryDto::HasAllowReductions() const
{
	return m_AllowReductions.has_value();
}
void QuotaFeatureTierHistoryDto::SetAllowReductions(const bool& Value)
{
	m_AllowReductions = Value;
}
bool QuotaFeatureTierHistoryDto::GetEnabled() const
{
	return m_Enabled.value();
}

bool QuotaFeatureTierHistoryDto::HasEnabled() const
{
	return m_Enabled.has_value();
}
void QuotaFeatureTierHistoryDto::SetEnabled(const bool& Value)
{
	m_Enabled = Value;
}
bool QuotaFeatureTierHistoryDto::GetLimitsEnforced() const
{
	return m_LimitsEnforced.value();
}

bool QuotaFeatureTierHistoryDto::HasLimitsEnforced() const
{
	return m_LimitsEnforced.has_value();
}
void QuotaFeatureTierHistoryDto::SetLimitsEnforced(const bool& Value)
{
	m_LimitsEnforced = Value;
}
utility::string_t QuotaFeatureTierHistoryDto::GetCategory() const
{
	return m_Category.value();
}

bool QuotaFeatureTierHistoryDto::HasCategory() const
{
	return m_Category.has_value();
}
void QuotaFeatureTierHistoryDto::SetCategory(const utility::string_t& Value)
{
	m_Category = Value;
}
utility::string_t QuotaFeatureTierHistoryDto::GetChangeNote() const
{
	return m_ChangeNote.value();
}

bool QuotaFeatureTierHistoryDto::HasChangeNote() const
{
	return m_ChangeNote.has_value();
}
void QuotaFeatureTierHistoryDto::SetChangeNote(const utility::string_t& Value)
{
	m_ChangeNote = Value;
}
int32_t QuotaFeatureTierHistoryDto::GetParentVersion() const
{
	return m_ParentVersion.value();
}

bool QuotaFeatureTierHistoryDto::HasParentVersion() const
{
	return m_ParentVersion.has_value();
}
void QuotaFeatureTierHistoryDto::SetParentVersion(int32_t Value)
{
	m_ParentVersion = Value;
}
utility::string_t QuotaFeatureTierHistoryDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool QuotaFeatureTierHistoryDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void QuotaFeatureTierHistoryDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t QuotaFeatureTierHistoryDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool QuotaFeatureTierHistoryDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
void QuotaFeatureTierHistoryDto::SetCreatedBy(const utility::string_t& Value)
{
	m_CreatedBy = Value;
}

QuotaSumByPeriodDto::QuotaSumByPeriodDto()
{
}
QuotaSumByPeriodDto::~QuotaSumByPeriodDto()
{
}

utility::string_t QuotaSumByPeriodDto::ToJson() const
{
	switch (Value)
	{
		case eQuotaSumByPeriodDto::TOTAL:
			return "Total";
		case eQuotaSumByPeriodDto::CALENDARMONTH:
			return "CalendarMonth";
		case eQuotaSumByPeriodDto::HOURS24:
			return "Hours24";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void QuotaSumByPeriodDto::FromJson(const utility::string_t& Val)
{
	if (Val == "Total")
	{
		Value = eQuotaSumByPeriodDto::TOTAL;
	}
	else if (Val == "CalendarMonth")
	{
		Value = eQuotaSumByPeriodDto::CALENDARMONTH;
	}
	else if (Val == "Hours24")
	{
		Value = eQuotaSumByPeriodDto::HOURS24;
	}
}

QuotaSumByPeriodDto::eQuotaSumByPeriodDto QuotaSumByPeriodDto::GetValue() const
{
	return Value;
}

void QuotaSumByPeriodDto::SetValue(QuotaSumByPeriodDto::eQuotaSumByPeriodDto const InValue)
{
	Value = InValue;
}

QuotaTierAssignmentDto::QuotaTierAssignmentDto()
{
}
QuotaTierAssignmentDto::~QuotaTierAssignmentDto()
{
}

utility::string_t QuotaTierAssignmentDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AssignedToType.has_value())
	{
		rapidjson::Value AssignedToTypeValue(TypeToJsonValue(m_AssignedToType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedToType", AssignedToTypeValue, JsonDoc.GetAllocator());
	}

	if (m_AssignedToId.has_value())
	{
		rapidjson::Value AssignedToIdValue(TypeToJsonValue(m_AssignedToId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignedToId", AssignedToIdValue, JsonDoc.GetAllocator());
	}

	if (m_TierName.has_value())
	{
		rapidjson::Value TierNameValue(TypeToJsonValue(m_TierName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tierName", TierNameValue, JsonDoc.GetAllocator());
	}

	if (m_PricingSheetId.has_value())
	{
		rapidjson::Value PricingSheetIdValue(TypeToJsonValue(m_PricingSheetId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pricingSheetId", PricingSheetIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_ExpiresAt.has_value())
	{
		rapidjson::Value ExpiresAtValue(TypeToJsonValue(m_ExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("expiresAt", ExpiresAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QuotaTierAssignmentDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaTierAssignmentDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("assignedToType"))
	{
		const rapidjson::Value& AssignedToTypeValue = JsonDoc["assignedToType"];

		if (AssignedToTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedToTypeValue, m_AssignedToType);
		}
	}

	if (JsonDoc.HasMember("assignedToId"))
	{
		const rapidjson::Value& AssignedToIdValue = JsonDoc["assignedToId"];

		if (AssignedToIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignedToIdValue, m_AssignedToId);
		}
	}

	if (JsonDoc.HasMember("tierName"))
	{
		const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

		if (TierNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TierNameValue, m_TierName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tierName is null!");
		}
	}

	if (JsonDoc.HasMember("pricingSheetId"))
	{
		const rapidjson::Value& PricingSheetIdValue = JsonDoc["pricingSheetId"];

		if (PricingSheetIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PricingSheetIdValue, m_PricingSheetId);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member tenantName is null!");
		}
	}

	if (JsonDoc.HasMember("expiresAt"))
	{
		const rapidjson::Value& ExpiresAtValue = JsonDoc["expiresAt"];

		if (ExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExpiresAtValue, m_ExpiresAt);
		}
	}
}


utility::string_t QuotaTierAssignmentDto::GetAssignedToType() const
{
	return m_AssignedToType.value();
}

bool QuotaTierAssignmentDto::HasAssignedToType() const
{
	return m_AssignedToType.has_value();
}
utility::string_t QuotaTierAssignmentDto::GetAssignedToId() const
{
	return m_AssignedToId.value();
}

bool QuotaTierAssignmentDto::HasAssignedToId() const
{
	return m_AssignedToId.has_value();
}
utility::string_t QuotaTierAssignmentDto::GetTierName() const
{
	return m_TierName.value();
}

bool QuotaTierAssignmentDto::HasTierName() const
{
	return m_TierName.has_value();
}
void QuotaTierAssignmentDto::SetTierName(const utility::string_t& Value)
{
	m_TierName = Value;
}
utility::string_t QuotaTierAssignmentDto::GetPricingSheetId() const
{
	return m_PricingSheetId.value();
}

bool QuotaTierAssignmentDto::HasPricingSheetId() const
{
	return m_PricingSheetId.has_value();
}
void QuotaTierAssignmentDto::SetPricingSheetId(const utility::string_t& Value)
{
	m_PricingSheetId = Value;
}
utility::string_t QuotaTierAssignmentDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool QuotaTierAssignmentDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void QuotaTierAssignmentDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t QuotaTierAssignmentDto::GetExpiresAt() const
{
	return m_ExpiresAt.value();
}

bool QuotaTierAssignmentDto::HasExpiresAt() const
{
	return m_ExpiresAt.has_value();
}
void QuotaTierAssignmentDto::SetExpiresAt(const utility::string_t& Value)
{
	m_ExpiresAt = Value;
}

QuotaTierDto::QuotaTierDto()
{
}
QuotaTierDto::~QuotaTierDto()
{
}

utility::string_t QuotaTierDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_TierName.has_value())
	{
		rapidjson::Value TierNameValue(TypeToJsonValue(m_TierName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tierName", TierNameValue, JsonDoc.GetAllocator());
	}

	if (m_DisplayName.has_value())
	{
		rapidjson::Value DisplayNameValue(TypeToJsonValue(m_DisplayName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("displayName", DisplayNameValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Color.has_value())
	{
		rapidjson::Value ColorValue(TypeToJsonValue(m_Color, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("color", ColorValue, JsonDoc.GetAllocator());
	}

	if (m_SortOrder.has_value())
	{
		rapidjson::Value SortOrderValue(TypeToJsonValue(m_SortOrder, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sortOrder", SortOrderValue, JsonDoc.GetAllocator());
	}

	if (m_IsDefault.has_value())
	{
		rapidjson::Value IsDefaultValue(TypeToJsonValue(m_IsDefault, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isDefault", IsDefaultValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_FeatureCount.has_value())
	{
		rapidjson::Value FeatureCountValue(TypeToJsonValue(m_FeatureCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("featureCount", FeatureCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void QuotaTierDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QuotaTierDto::FromJson");
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

	if (JsonDoc.HasMember("tierName"))
	{
		const rapidjson::Value& TierNameValue = JsonDoc["tierName"];

		if (TierNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TierNameValue, m_TierName);
		}
	}

	if (JsonDoc.HasMember("displayName"))
	{
		const rapidjson::Value& DisplayNameValue = JsonDoc["displayName"];

		if (DisplayNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DisplayNameValue, m_DisplayName);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member displayName is null!");
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

	if (JsonDoc.HasMember("color"))
	{
		const rapidjson::Value& ColorValue = JsonDoc["color"];

		if (ColorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColorValue, m_Color);
		}
	}

	if (JsonDoc.HasMember("sortOrder"))
	{
		const rapidjson::Value& SortOrderValue = JsonDoc["sortOrder"];

		if (SortOrderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SortOrderValue, m_SortOrder);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sortOrder is null!");
		}
	}

	if (JsonDoc.HasMember("isDefault"))
	{
		const rapidjson::Value& IsDefaultValue = JsonDoc["isDefault"];

		if (IsDefaultValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsDefaultValue, m_IsDefault);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isDefault is null!");
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

	if (JsonDoc.HasMember("featureCount"))
	{
		const rapidjson::Value& FeatureCountValue = JsonDoc["featureCount"];

		if (FeatureCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FeatureCountValue, m_FeatureCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member featureCount is null!");
		}
	}
}


utility::string_t QuotaTierDto::GetId() const
{
	return m_Id.value();
}

bool QuotaTierDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t QuotaTierDto::GetTierName() const
{
	return m_TierName.value();
}

bool QuotaTierDto::HasTierName() const
{
	return m_TierName.has_value();
}
utility::string_t QuotaTierDto::GetDisplayName() const
{
	return m_DisplayName.value();
}

bool QuotaTierDto::HasDisplayName() const
{
	return m_DisplayName.has_value();
}
void QuotaTierDto::SetDisplayName(const utility::string_t& Value)
{
	m_DisplayName = Value;
}
utility::string_t QuotaTierDto::GetDescription() const
{
	return m_Description.value();
}

bool QuotaTierDto::HasDescription() const
{
	return m_Description.has_value();
}
void QuotaTierDto::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t QuotaTierDto::GetColor() const
{
	return m_Color.value();
}

bool QuotaTierDto::HasColor() const
{
	return m_Color.has_value();
}
void QuotaTierDto::SetColor(const utility::string_t& Value)
{
	m_Color = Value;
}
int32_t QuotaTierDto::GetSortOrder() const
{
	return m_SortOrder.value();
}

bool QuotaTierDto::HasSortOrder() const
{
	return m_SortOrder.has_value();
}
void QuotaTierDto::SetSortOrder(int32_t Value)
{
	m_SortOrder = Value;
}
bool QuotaTierDto::GetIsDefault() const
{
	return m_IsDefault.value();
}

bool QuotaTierDto::HasIsDefault() const
{
	return m_IsDefault.has_value();
}
void QuotaTierDto::SetIsDefault(const bool& Value)
{
	m_IsDefault = Value;
}
utility::string_t QuotaTierDto::GetStatus() const
{
	return m_Status.value();
}

bool QuotaTierDto::HasStatus() const
{
	return m_Status.has_value();
}
void QuotaTierDto::SetStatus(const utility::string_t& Value)
{
	m_Status = Value;
}
int32_t QuotaTierDto::GetFeatureCount() const
{
	return m_FeatureCount.value();
}

bool QuotaTierDto::HasFeatureCount() const
{
	return m_FeatureCount.has_value();
}

RosterConfigDto::RosterConfigDto()
{
}
RosterConfigDto::~RosterConfigDto()
{
}

utility::string_t RosterConfigDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_WeekStartDay.has_value())
	{
		rapidjson::Value WeekStartDayValue(TypeToJsonValue(m_WeekStartDay, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("weekStartDay", WeekStartDayValue, JsonDoc.GetAllocator());
	}

	if (m_UnderUtilizedBelowPercent.has_value())
	{
		rapidjson::Value UnderUtilizedBelowPercentValue(TypeToJsonValue(m_UnderUtilizedBelowPercent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("underUtilizedBelowPercent", UnderUtilizedBelowPercentValue, JsonDoc.GetAllocator());
	}

	if (m_OverBookedAbovePercent.has_value())
	{
		rapidjson::Value OverBookedAbovePercentValue(TypeToJsonValue(m_OverBookedAbovePercent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("overBookedAbovePercent", OverBookedAbovePercentValue, JsonDoc.GetAllocator());
	}

	if (m_Locations.has_value())
	{
		rapidjson::Value LocationsValue(TypeToJsonValue(m_Locations, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("locations", LocationsValue, JsonDoc.GetAllocator());
	}

	if (m_GroupId.has_value())
	{
		rapidjson::Value GroupIdValue(TypeToJsonValue(m_GroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("groupId", GroupIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void RosterConfigDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RosterConfigDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("weekStartDay"))
	{
		const rapidjson::Value& WeekStartDayValue = JsonDoc["weekStartDay"];

		if (WeekStartDayValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeekStartDayValue, m_WeekStartDay);
		}
	}

	if (JsonDoc.HasMember("underUtilizedBelowPercent"))
	{
		const rapidjson::Value& UnderUtilizedBelowPercentValue = JsonDoc["underUtilizedBelowPercent"];

		if (UnderUtilizedBelowPercentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UnderUtilizedBelowPercentValue, m_UnderUtilizedBelowPercent);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member underUtilizedBelowPercent is null!");
		}
	}

	if (JsonDoc.HasMember("overBookedAbovePercent"))
	{
		const rapidjson::Value& OverBookedAbovePercentValue = JsonDoc["overBookedAbovePercent"];

		if (OverBookedAbovePercentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverBookedAbovePercentValue, m_OverBookedAbovePercent);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member overBookedAbovePercent is null!");
		}
	}

	if (JsonDoc.HasMember("locations"))
	{
		const rapidjson::Value& LocationsValue = JsonDoc["locations"];

		if (LocationsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationsValue, m_Locations);
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId);
		}
	}
}


utility::string_t RosterConfigDto::GetWeekStartDay() const
{
	return m_WeekStartDay.value();
}

bool RosterConfigDto::HasWeekStartDay() const
{
	return m_WeekStartDay.has_value();
}
void RosterConfigDto::SetWeekStartDay(const utility::string_t& Value)
{
	m_WeekStartDay = Value;
}
int32_t RosterConfigDto::GetUnderUtilizedBelowPercent() const
{
	return m_UnderUtilizedBelowPercent.value();
}

bool RosterConfigDto::HasUnderUtilizedBelowPercent() const
{
	return m_UnderUtilizedBelowPercent.has_value();
}
void RosterConfigDto::SetUnderUtilizedBelowPercent(int32_t Value)
{
	m_UnderUtilizedBelowPercent = Value;
}
int32_t RosterConfigDto::GetOverBookedAbovePercent() const
{
	return m_OverBookedAbovePercent.value();
}

bool RosterConfigDto::HasOverBookedAbovePercent() const
{
	return m_OverBookedAbovePercent.has_value();
}
void RosterConfigDto::SetOverBookedAbovePercent(int32_t Value)
{
	m_OverBookedAbovePercent = Value;
}
const std::vector<utility::string_t>& RosterConfigDto::GetLocations() const
{
	return m_Locations.value();
}

bool RosterConfigDto::HasLocations() const
{
	return m_Locations.has_value();
}
void RosterConfigDto::SetLocations(const std::vector<utility::string_t>& Value)
{
	m_Locations = Value;
}
utility::string_t RosterConfigDto::GetGroupId() const
{
	return m_GroupId.value();
}

bool RosterConfigDto::HasGroupId() const
{
	return m_GroupId.has_value();
}
void RosterConfigDto::SetGroupId(const utility::string_t& Value)
{
	m_GroupId = Value;
}

RosterSnapshotDto::RosterSnapshotDto()
{
}
RosterSnapshotDto::~RosterSnapshotDto()
{
}

utility::string_t RosterSnapshotDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Config.has_value())
	{
		rapidjson::Value ConfigValue(TypeToJsonValue(m_Config, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("config", ConfigValue, JsonDoc.GetAllocator());
	}

	if (m_Departments.has_value())
	{
		rapidjson::Value DepartmentsValue(TypeToJsonValue(m_Departments, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("departments", DepartmentsValue, JsonDoc.GetAllocator());
	}

	if (m_People.has_value())
	{
		rapidjson::Value PeopleValue(TypeToJsonValue(m_People, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("people", PeopleValue, JsonDoc.GetAllocator());
	}

	if (m_Projects.has_value())
	{
		rapidjson::Value ProjectsValue(TypeToJsonValue(m_Projects, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projects", ProjectsValue, JsonDoc.GetAllocator());
	}

	if (m_Assignments.has_value())
	{
		rapidjson::Value AssignmentsValue(TypeToJsonValue(m_Assignments, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assignments", AssignmentsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void RosterSnapshotDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RosterSnapshotDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("config"))
	{
		const rapidjson::Value& ConfigValue = JsonDoc["config"];

		if (ConfigValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConfigValue, m_Config);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member config is null!");
		}
	}

	if (JsonDoc.HasMember("departments"))
	{
		const rapidjson::Value& DepartmentsValue = JsonDoc["departments"];

		if (DepartmentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentsValue, m_Departments);
		}
	}

	if (JsonDoc.HasMember("people"))
	{
		const rapidjson::Value& PeopleValue = JsonDoc["people"];

		if (PeopleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PeopleValue, m_People);
		}
	}

	if (JsonDoc.HasMember("projects"))
	{
		const rapidjson::Value& ProjectsValue = JsonDoc["projects"];

		if (ProjectsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectsValue, m_Projects);
		}
	}

	if (JsonDoc.HasMember("assignments"))
	{
		const rapidjson::Value& AssignmentsValue = JsonDoc["assignments"];

		if (AssignmentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignmentsValue, m_Assignments);
		}
	}
}


std::shared_ptr<RosterConfigDto> RosterSnapshotDto::GetConfig() const
{
	return m_Config.value();
}

bool RosterSnapshotDto::HasConfig() const
{
	return m_Config.has_value();
}
void RosterSnapshotDto::SetConfig(const std::shared_ptr<RosterConfigDto>& Value)
{
	m_Config = Value;
}
const std::vector<std::shared_ptr<DepartmentDto>>& RosterSnapshotDto::GetDepartments() const
{
	return m_Departments.value();
}

bool RosterSnapshotDto::HasDepartments() const
{
	return m_Departments.has_value();
}
void RosterSnapshotDto::SetDepartments(const std::vector<std::shared_ptr<DepartmentDto>>& Value)
{
	m_Departments = Value;
}
const std::vector<std::shared_ptr<PersonDto>>& RosterSnapshotDto::GetPeople() const
{
	return m_People.value();
}

bool RosterSnapshotDto::HasPeople() const
{
	return m_People.has_value();
}
void RosterSnapshotDto::SetPeople(const std::vector<std::shared_ptr<PersonDto>>& Value)
{
	m_People = Value;
}
const std::vector<std::shared_ptr<ProjectDto>>& RosterSnapshotDto::GetProjects() const
{
	return m_Projects.value();
}

bool RosterSnapshotDto::HasProjects() const
{
	return m_Projects.has_value();
}
void RosterSnapshotDto::SetProjects(const std::vector<std::shared_ptr<ProjectDto>>& Value)
{
	m_Projects = Value;
}
const std::vector<std::shared_ptr<AssignmentDto>>& RosterSnapshotDto::GetAssignments() const
{
	return m_Assignments.value();
}

bool RosterSnapshotDto::HasAssignments() const
{
	return m_Assignments.has_value();
}
void RosterSnapshotDto::SetAssignments(const std::vector<std::shared_ptr<AssignmentDto>>& Value)
{
	m_Assignments = Value;
}

SeedResultDto::SeedResultDto()
{
}
SeedResultDto::~SeedResultDto()
{
}

utility::string_t SeedResultDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SeededCount.has_value())
	{
		rapidjson::Value SeededCountValue(TypeToJsonValue(m_SeededCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("seededCount", SeededCountValue, JsonDoc.GetAllocator());
	}

	if (m_TotalCount.has_value())
	{
		rapidjson::Value TotalCountValue(TypeToJsonValue(m_TotalCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("totalCount", TotalCountValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SeedResultDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SeedResultDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("seededCount"))
	{
		const rapidjson::Value& SeededCountValue = JsonDoc["seededCount"];

		if (SeededCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SeededCountValue, m_SeededCount);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member seededCount is null!");
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


int32_t SeedResultDto::GetSeededCount() const
{
	return m_SeededCount.value();
}

bool SeedResultDto::HasSeededCount() const
{
	return m_SeededCount.has_value();
}
void SeedResultDto::SetSeededCount(int32_t Value)
{
	m_SeededCount = Value;
}
int32_t SeedResultDto::GetTotalCount() const
{
	return m_TotalCount.value();
}

bool SeedResultDto::HasTotalCount() const
{
	return m_TotalCount.has_value();
}
void SeedResultDto::SetTotalCount(int32_t Value)
{
	m_TotalCount = Value;
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

SortDirection::SortDirection()
{
}
SortDirection::~SortDirection()
{
}

utility::string_t SortDirection::ToJson() const
{
	switch (Value)
	{
		case eSortDirection::ASCENDING:
			return "Ascending";
		case eSortDirection::DESCENDING:
			return "Descending";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void SortDirection::FromJson(const utility::string_t& Val)
{
	if (Val == "Ascending")
	{
		Value = eSortDirection::ASCENDING;
	}
	else if (Val == "Descending")
	{
		Value = eSortDirection::DESCENDING;
	}
}

SortDirection::eSortDirection SortDirection::GetValue() const
{
	return Value;
}

void SortDirection::SetValue(SortDirection::eSortDirection const InValue)
{
	Value = InValue;
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

SystemCreateRequest::SystemCreateRequest()
{
}
SystemCreateRequest::~SystemCreateRequest()
{
}

utility::string_t SystemCreateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Url.has_value())
	{
		rapidjson::Value UrlValue(TypeToJsonValue(m_Url, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("url", UrlValue, JsonDoc.GetAllocator());
	}

	if (m_GracePeriodMinutes.has_value())
	{
		rapidjson::Value GracePeriodMinutesValue(TypeToJsonValue(m_GracePeriodMinutes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gracePeriodMinutes", GracePeriodMinutesValue, JsonDoc.GetAllocator());
	}

	if (m_ChannelId.has_value())
	{
		rapidjson::Value ChannelIdValue(TypeToJsonValue(m_ChannelId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("channelId", ChannelIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SystemCreateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemCreateRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
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

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId);
		}
	}
}


utility::string_t SystemCreateRequest::GetName() const
{
	return m_Name.value();
}

bool SystemCreateRequest::HasName() const
{
	return m_Name.has_value();
}
void SystemCreateRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t SystemCreateRequest::GetDescription() const
{
	return m_Description.value();
}

bool SystemCreateRequest::HasDescription() const
{
	return m_Description.has_value();
}
void SystemCreateRequest::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t SystemCreateRequest::GetUrl() const
{
	return m_Url.value();
}

bool SystemCreateRequest::HasUrl() const
{
	return m_Url.has_value();
}
void SystemCreateRequest::SetUrl(const utility::string_t& Value)
{
	m_Url = Value;
}
int32_t SystemCreateRequest::GetGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.value();
}

bool SystemCreateRequest::HasGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.has_value();
}
void SystemCreateRequest::SetGracePeriodMinutes(int32_t Value)
{
	m_GracePeriodMinutes = Value;
}
utility::string_t SystemCreateRequest::GetChannelId() const
{
	return m_ChannelId.value();
}

bool SystemCreateRequest::HasChannelId() const
{
	return m_ChannelId.has_value();
}
void SystemCreateRequest::SetChannelId(const utility::string_t& Value)
{
	m_ChannelId = Value;
}

SystemDto::SystemDto()
{
}
SystemDto::~SystemDto()
{
}

utility::string_t SystemDto::ToJson() const
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

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Url.has_value())
	{
		rapidjson::Value UrlValue(TypeToJsonValue(m_Url, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("url", UrlValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailPrototypeId.has_value())
	{
		rapidjson::Value ThumbnailPrototypeIdValue(TypeToJsonValue(m_ThumbnailPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailPrototypeId", ThumbnailPrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_ChannelId.has_value())
	{
		rapidjson::Value ChannelIdValue(TypeToJsonValue(m_ChannelId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("channelId", ChannelIdValue, JsonDoc.GetAllocator());
	}

	if (m_IsArchived.has_value())
	{
		rapidjson::Value IsArchivedValue(TypeToJsonValue(m_IsArchived, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isArchived", IsArchivedValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentHolderId.has_value())
	{
		rapidjson::Value CurrentHolderIdValue(TypeToJsonValue(m_CurrentHolderId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentHolderId", CurrentHolderIdValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentHolderName.has_value())
	{
		rapidjson::Value CurrentHolderNameValue(TypeToJsonValue(m_CurrentHolderName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentHolderName", CurrentHolderNameValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentNote.has_value())
	{
		rapidjson::Value CurrentNoteValue(TypeToJsonValue(m_CurrentNote, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentNote", CurrentNoteValue, JsonDoc.GetAllocator());
	}

	if (m_HeldSince.has_value())
	{
		rapidjson::Value HeldSinceValue(TypeToJsonValue(m_HeldSince, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("heldSince", HeldSinceValue, JsonDoc.GetAllocator());
	}

	if (m_LastReleasedAt.has_value())
	{
		rapidjson::Value LastReleasedAtValue(TypeToJsonValue(m_LastReleasedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastReleasedAt", LastReleasedAtValue, JsonDoc.GetAllocator());
	}

	if (m_ReservedForUserId.has_value())
	{
		rapidjson::Value ReservedForUserIdValue(TypeToJsonValue(m_ReservedForUserId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reservedForUserId", ReservedForUserIdValue, JsonDoc.GetAllocator());
	}

	if (m_ReservedUntil.has_value())
	{
		rapidjson::Value ReservedUntilValue(TypeToJsonValue(m_ReservedUntil, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reservedUntil", ReservedUntilValue, JsonDoc.GetAllocator());
	}

	if (m_ReservedForName.has_value())
	{
		rapidjson::Value ReservedForNameValue(TypeToJsonValue(m_ReservedForName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reservedForName", ReservedForNameValue, JsonDoc.GetAllocator());
	}

	if (m_GracePeriodMinutes.has_value())
	{
		rapidjson::Value GracePeriodMinutesValue(TypeToJsonValue(m_GracePeriodMinutes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gracePeriodMinutes", GracePeriodMinutesValue, JsonDoc.GetAllocator());
	}

	if (m_QueueDepth.has_value())
	{
		rapidjson::Value QueueDepthValue(TypeToJsonValue(m_QueueDepth, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queueDepth", QueueDepthValue, JsonDoc.GetAllocator());
	}

	if (m_QueueHeadNames.has_value())
	{
		rapidjson::Value QueueHeadNamesValue(TypeToJsonValue(m_QueueHeadNames, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queueHeadNames", QueueHeadNamesValue, JsonDoc.GetAllocator());
	}

	if (m_QueueHeadUserIds.has_value())
	{
		rapidjson::Value QueueHeadUserIdsValue(TypeToJsonValue(m_QueueHeadUserIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("queueHeadUserIds", QueueHeadUserIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ViewerQueued.has_value())
	{
		rapidjson::Value ViewerQueuedValue(TypeToJsonValue(m_ViewerQueued, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("viewerQueued", ViewerQueuedValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SystemDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemDto::FromJson");
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

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description);
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

	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId);
		}
	}

	if (JsonDoc.HasMember("isArchived"))
	{
		const rapidjson::Value& IsArchivedValue = JsonDoc["isArchived"];

		if (IsArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsArchivedValue, m_IsArchived);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member isArchived is null!");
		}
	}

	if (JsonDoc.HasMember("currentHolderId"))
	{
		const rapidjson::Value& CurrentHolderIdValue = JsonDoc["currentHolderId"];

		if (CurrentHolderIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentHolderIdValue, m_CurrentHolderId);
		}
	}

	if (JsonDoc.HasMember("currentHolderName"))
	{
		const rapidjson::Value& CurrentHolderNameValue = JsonDoc["currentHolderName"];

		if (CurrentHolderNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentHolderNameValue, m_CurrentHolderName);
		}
	}

	if (JsonDoc.HasMember("currentNote"))
	{
		const rapidjson::Value& CurrentNoteValue = JsonDoc["currentNote"];

		if (CurrentNoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentNoteValue, m_CurrentNote);
		}
	}

	if (JsonDoc.HasMember("heldSince"))
	{
		const rapidjson::Value& HeldSinceValue = JsonDoc["heldSince"];

		if (HeldSinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeldSinceValue, m_HeldSince);
		}
	}

	if (JsonDoc.HasMember("lastReleasedAt"))
	{
		const rapidjson::Value& LastReleasedAtValue = JsonDoc["lastReleasedAt"];

		if (LastReleasedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastReleasedAtValue, m_LastReleasedAt);
		}
	}

	if (JsonDoc.HasMember("reservedForUserId"))
	{
		const rapidjson::Value& ReservedForUserIdValue = JsonDoc["reservedForUserId"];

		if (ReservedForUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedForUserIdValue, m_ReservedForUserId);
		}
	}

	if (JsonDoc.HasMember("reservedUntil"))
	{
		const rapidjson::Value& ReservedUntilValue = JsonDoc["reservedUntil"];

		if (ReservedUntilValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedUntilValue, m_ReservedUntil);
		}
	}

	if (JsonDoc.HasMember("reservedForName"))
	{
		const rapidjson::Value& ReservedForNameValue = JsonDoc["reservedForName"];

		if (ReservedForNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedForNameValue, m_ReservedForName);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member gracePeriodMinutes is null!");
		}
	}

	if (JsonDoc.HasMember("queueDepth"))
	{
		const rapidjson::Value& QueueDepthValue = JsonDoc["queueDepth"];

		if (QueueDepthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueDepthValue, m_QueueDepth);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member queueDepth is null!");
		}
	}

	if (JsonDoc.HasMember("queueHeadNames"))
	{
		const rapidjson::Value& QueueHeadNamesValue = JsonDoc["queueHeadNames"];

		if (QueueHeadNamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueHeadNamesValue, m_QueueHeadNames);
		}
	}

	if (JsonDoc.HasMember("queueHeadUserIds"))
	{
		const rapidjson::Value& QueueHeadUserIdsValue = JsonDoc["queueHeadUserIds"];

		if (QueueHeadUserIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueHeadUserIdsValue, m_QueueHeadUserIds);
		}
	}

	if (JsonDoc.HasMember("viewerQueued"))
	{
		const rapidjson::Value& ViewerQueuedValue = JsonDoc["viewerQueued"];

		if (ViewerQueuedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ViewerQueuedValue, m_ViewerQueued);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member viewerQueued is null!");
		}
	}
}


utility::string_t SystemDto::GetId() const
{
	return m_Id.value();
}

bool SystemDto::HasId() const
{
	return m_Id.has_value();
}
void SystemDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t SystemDto::GetName() const
{
	return m_Name.value();
}

bool SystemDto::HasName() const
{
	return m_Name.has_value();
}
void SystemDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t SystemDto::GetDescription() const
{
	return m_Description.value();
}

bool SystemDto::HasDescription() const
{
	return m_Description.has_value();
}
void SystemDto::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t SystemDto::GetUrl() const
{
	return m_Url.value();
}

bool SystemDto::HasUrl() const
{
	return m_Url.has_value();
}
void SystemDto::SetUrl(const utility::string_t& Value)
{
	m_Url = Value;
}
utility::string_t SystemDto::GetThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.value();
}

bool SystemDto::HasThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.has_value();
}
void SystemDto::SetThumbnailPrototypeId(const utility::string_t& Value)
{
	m_ThumbnailPrototypeId = Value;
}
utility::string_t SystemDto::GetChannelId() const
{
	return m_ChannelId.value();
}

bool SystemDto::HasChannelId() const
{
	return m_ChannelId.has_value();
}
void SystemDto::SetChannelId(const utility::string_t& Value)
{
	m_ChannelId = Value;
}
bool SystemDto::GetIsArchived() const
{
	return m_IsArchived.value();
}

bool SystemDto::HasIsArchived() const
{
	return m_IsArchived.has_value();
}
void SystemDto::SetIsArchived(const bool& Value)
{
	m_IsArchived = Value;
}
utility::string_t SystemDto::GetCurrentHolderId() const
{
	return m_CurrentHolderId.value();
}

bool SystemDto::HasCurrentHolderId() const
{
	return m_CurrentHolderId.has_value();
}
void SystemDto::SetCurrentHolderId(const utility::string_t& Value)
{
	m_CurrentHolderId = Value;
}
utility::string_t SystemDto::GetCurrentHolderName() const
{
	return m_CurrentHolderName.value();
}

bool SystemDto::HasCurrentHolderName() const
{
	return m_CurrentHolderName.has_value();
}
void SystemDto::SetCurrentHolderName(const utility::string_t& Value)
{
	m_CurrentHolderName = Value;
}
utility::string_t SystemDto::GetCurrentNote() const
{
	return m_CurrentNote.value();
}

bool SystemDto::HasCurrentNote() const
{
	return m_CurrentNote.has_value();
}
void SystemDto::SetCurrentNote(const utility::string_t& Value)
{
	m_CurrentNote = Value;
}
utility::string_t SystemDto::GetHeldSince() const
{
	return m_HeldSince.value();
}

bool SystemDto::HasHeldSince() const
{
	return m_HeldSince.has_value();
}
void SystemDto::SetHeldSince(const utility::string_t& Value)
{
	m_HeldSince = Value;
}
utility::string_t SystemDto::GetLastReleasedAt() const
{
	return m_LastReleasedAt.value();
}

bool SystemDto::HasLastReleasedAt() const
{
	return m_LastReleasedAt.has_value();
}
void SystemDto::SetLastReleasedAt(const utility::string_t& Value)
{
	m_LastReleasedAt = Value;
}
utility::string_t SystemDto::GetReservedForUserId() const
{
	return m_ReservedForUserId.value();
}

bool SystemDto::HasReservedForUserId() const
{
	return m_ReservedForUserId.has_value();
}
void SystemDto::SetReservedForUserId(const utility::string_t& Value)
{
	m_ReservedForUserId = Value;
}
utility::string_t SystemDto::GetReservedUntil() const
{
	return m_ReservedUntil.value();
}

bool SystemDto::HasReservedUntil() const
{
	return m_ReservedUntil.has_value();
}
void SystemDto::SetReservedUntil(const utility::string_t& Value)
{
	m_ReservedUntil = Value;
}
utility::string_t SystemDto::GetReservedForName() const
{
	return m_ReservedForName.value();
}

bool SystemDto::HasReservedForName() const
{
	return m_ReservedForName.has_value();
}
void SystemDto::SetReservedForName(const utility::string_t& Value)
{
	m_ReservedForName = Value;
}
int32_t SystemDto::GetGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.value();
}

bool SystemDto::HasGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.has_value();
}
void SystemDto::SetGracePeriodMinutes(int32_t Value)
{
	m_GracePeriodMinutes = Value;
}
int32_t SystemDto::GetQueueDepth() const
{
	return m_QueueDepth.value();
}

bool SystemDto::HasQueueDepth() const
{
	return m_QueueDepth.has_value();
}
void SystemDto::SetQueueDepth(int32_t Value)
{
	m_QueueDepth = Value;
}
const std::vector<utility::string_t>& SystemDto::GetQueueHeadNames() const
{
	return m_QueueHeadNames.value();
}

bool SystemDto::HasQueueHeadNames() const
{
	return m_QueueHeadNames.has_value();
}
void SystemDto::SetQueueHeadNames(const std::vector<utility::string_t>& Value)
{
	m_QueueHeadNames = Value;
}
const std::vector<utility::string_t>& SystemDto::GetQueueHeadUserIds() const
{
	return m_QueueHeadUserIds.value();
}

bool SystemDto::HasQueueHeadUserIds() const
{
	return m_QueueHeadUserIds.has_value();
}
void SystemDto::SetQueueHeadUserIds(const std::vector<utility::string_t>& Value)
{
	m_QueueHeadUserIds = Value;
}
bool SystemDto::GetViewerQueued() const
{
	return m_ViewerQueued.value();
}

bool SystemDto::HasViewerQueued() const
{
	return m_ViewerQueued.has_value();
}
void SystemDto::SetViewerQueued(const bool& Value)
{
	m_ViewerQueued = Value;
}

SystemDtoDataPage::SystemDtoDataPage()
{
}
SystemDtoDataPage::~SystemDtoDataPage()
{
}

utility::string_t SystemDtoDataPage::ToJson() const
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

void SystemDtoDataPage::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemDtoDataPage::FromJson");
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


const std::vector<std::shared_ptr<SystemDto>>& SystemDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool SystemDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void SystemDtoDataPage::SetItems(const std::vector<std::shared_ptr<SystemDto>>& Value)
{
	m_Items = Value;
}
int32_t SystemDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool SystemDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void SystemDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t SystemDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool SystemDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void SystemDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t SystemDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool SystemDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void SystemDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t SystemDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool SystemDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void SystemDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

SystemThumbnailRequest::SystemThumbnailRequest()
{
}
SystemThumbnailRequest::~SystemThumbnailRequest()
{
}

utility::string_t SystemThumbnailRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ThumbnailPrototypeId.has_value())
	{
		rapidjson::Value ThumbnailPrototypeIdValue(TypeToJsonValue(m_ThumbnailPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailPrototypeId", ThumbnailPrototypeIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SystemThumbnailRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemThumbnailRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member thumbnailPrototypeId is null!");
		}
	}
}


utility::string_t SystemThumbnailRequest::GetThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.value();
}

bool SystemThumbnailRequest::HasThumbnailPrototypeId() const
{
	return m_ThumbnailPrototypeId.has_value();
}
void SystemThumbnailRequest::SetThumbnailPrototypeId(const utility::string_t& Value)
{
	m_ThumbnailPrototypeId = Value;
}

SystemUpdateRequest::SystemUpdateRequest()
{
}
SystemUpdateRequest::~SystemUpdateRequest()
{
}

utility::string_t SystemUpdateRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Description.has_value())
	{
		rapidjson::Value DescriptionValue(TypeToJsonValue(m_Description, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("description", DescriptionValue, JsonDoc.GetAllocator());
	}

	if (m_Url.has_value())
	{
		rapidjson::Value UrlValue(TypeToJsonValue(m_Url, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("url", UrlValue, JsonDoc.GetAllocator());
	}

	if (m_GracePeriodMinutes.has_value())
	{
		rapidjson::Value GracePeriodMinutesValue(TypeToJsonValue(m_GracePeriodMinutes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gracePeriodMinutes", GracePeriodMinutesValue, JsonDoc.GetAllocator());
	}

	if (m_ChannelId.has_value())
	{
		rapidjson::Value ChannelIdValue(TypeToJsonValue(m_ChannelId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("channelId", ChannelIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SystemUpdateRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemUpdateRequest::FromJson");
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
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
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

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId);
		}
	}
}


utility::string_t SystemUpdateRequest::GetName() const
{
	return m_Name.value();
}

bool SystemUpdateRequest::HasName() const
{
	return m_Name.has_value();
}
void SystemUpdateRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t SystemUpdateRequest::GetDescription() const
{
	return m_Description.value();
}

bool SystemUpdateRequest::HasDescription() const
{
	return m_Description.has_value();
}
void SystemUpdateRequest::SetDescription(const utility::string_t& Value)
{
	m_Description = Value;
}
utility::string_t SystemUpdateRequest::GetUrl() const
{
	return m_Url.value();
}

bool SystemUpdateRequest::HasUrl() const
{
	return m_Url.has_value();
}
void SystemUpdateRequest::SetUrl(const utility::string_t& Value)
{
	m_Url = Value;
}
int32_t SystemUpdateRequest::GetGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.value();
}

bool SystemUpdateRequest::HasGracePeriodMinutes() const
{
	return m_GracePeriodMinutes.has_value();
}
void SystemUpdateRequest::SetGracePeriodMinutes(int32_t Value)
{
	m_GracePeriodMinutes = Value;
}
utility::string_t SystemUpdateRequest::GetChannelId() const
{
	return m_ChannelId.value();
}

bool SystemUpdateRequest::HasChannelId() const
{
	return m_ChannelId.has_value();
}
void SystemUpdateRequest::SetChannelId(const utility::string_t& Value)
{
	m_ChannelId = Value;
}

TakeBatonRequest::TakeBatonRequest()
{
}
TakeBatonRequest::~TakeBatonRequest()
{
}

utility::string_t TakeBatonRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Note.has_value())
	{
		rapidjson::Value NoteValue(TypeToJsonValue(m_Note, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("note", NoteValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void TakeBatonRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "TakeBatonRequest::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note);
		}
	}
}


utility::string_t TakeBatonRequest::GetNote() const
{
	return m_Note.value();
}

bool TakeBatonRequest::HasNote() const
{
	return m_Note.has_value();
}
void TakeBatonRequest::SetNote(const utility::string_t& Value)
{
	m_Note = Value;
}

WazzupCapabilitiesDto::WazzupCapabilitiesDto()
{
}
WazzupCapabilitiesDto::~WazzupCapabilitiesDto()
{
}

utility::string_t WazzupCapabilitiesDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_TransitEncodings.has_value())
	{
		rapidjson::Value TransitEncodingsValue(TypeToJsonValue(m_TransitEncodings, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("transitEncodings", TransitEncodingsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void WazzupCapabilitiesDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "WazzupCapabilitiesDto::FromJson");
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("transitEncodings"))
	{
		const rapidjson::Value& TransitEncodingsValue = JsonDoc["transitEncodings"];

		if (TransitEncodingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TransitEncodingsValue, m_TransitEncodings);
		}
	}
}


const std::vector<utility::string_t>& WazzupCapabilitiesDto::GetTransitEncodings() const
{
	return m_TransitEncodings.value();
}

bool WazzupCapabilitiesDto::HasTransitEncodings() const
{
	return m_TransitEncodings.has_value();
}
void WazzupCapabilitiesDto::SetTransitEncodings(const std::vector<utility::string_t>& Value)
{
	m_TransitEncodings = Value;
}


} // namespace csp::services::generated::trackingservice