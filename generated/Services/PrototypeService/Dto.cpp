

#include "Dto.h"

#include "CSP/Common/Systems/Log/LogSystem.h"
#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"

#include "Json/JsonParseHelper.h"
#include <optional>
#include <stdexcept>


using namespace csp::web;


namespace csp::services::generated::prototypeservice
{


AdoptMachineRequest::AdoptMachineRequest()
{
}
AdoptMachineRequest::~AdoptMachineRequest()
{
}

utility::string_t AdoptMachineRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Purpose.has_value())
	{
		rapidjson::Value PurposeValue(TypeToJsonValue(m_Purpose, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("purpose", PurposeValue, JsonDoc.GetAllocator());
	}

	if (m_LeaseHours.has_value())
	{
		rapidjson::Value LeaseHoursValue(TypeToJsonValue(m_LeaseHours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaseHours", LeaseHoursValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AdoptMachineRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AdoptMachineRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("purpose"))
	{
		const rapidjson::Value& PurposeValue = JsonDoc["purpose"];

		if (PurposeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PurposeValue, m_Purpose, LogSystem);
		}
	}

	if (JsonDoc.HasMember("leaseHours"))
	{
		const rapidjson::Value& LeaseHoursValue = JsonDoc["leaseHours"];

		if (LeaseHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaseHoursValue, m_LeaseHours, LogSystem);
		}
	}
}


utility::string_t AdoptMachineRequest::GetPurpose() const
{
	return m_Purpose.value();
}

bool AdoptMachineRequest::HasPurpose() const
{
	return m_Purpose.has_value();
}
void AdoptMachineRequest::SetPurpose(const utility::string_t& Value)
{
	m_Purpose = Value;
}
int32_t AdoptMachineRequest::GetLeaseHours() const
{
	return m_LeaseHours.value();
}

bool AdoptMachineRequest::HasLeaseHours() const
{
	return m_LeaseHours.has_value();
}
void AdoptMachineRequest::SetLeaseHours(int32_t Value)
{
	m_LeaseHours = Value;
}

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

void AgentOverrideDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AgentOverrideDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("agentId"))
	{
		const rapidjson::Value& AgentIdValue = JsonDoc["agentId"];

		if (AgentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AgentIdValue, m_AgentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider, LogSystem);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction, LogSystem);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
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

void AgentOverrideRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AgentOverrideRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider, LogSystem);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction, LogSystem);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature, LogSystem);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
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

void AnalyticsRecord::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AnalyticsRecord::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("timestamp"))
	{
		const rapidjson::Value& TimestampValue = JsonDoc["timestamp"];

		if (TimestampValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TimestampValue, m_Timestamp, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member timestamp is null!");
		}
	}

	if (JsonDoc.HasMember("productIdentifier"))
	{
		const rapidjson::Value& ProductIdentifierValue = JsonDoc["productIdentifier"];

		if (ProductIdentifierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductIdentifierValue, m_ProductIdentifier, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member productIdentifier is null!");
		}
	}

	if (JsonDoc.HasMember("productContext"))
	{
		const rapidjson::Value& ProductContextValue = JsonDoc["productContext"];

		if (ProductContextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductContextValue, m_ProductContext, LogSystem);
		}
	}

	if (JsonDoc.HasMember("productContextSection"))
	{
		const rapidjson::Value& ProductContextSectionValue = JsonDoc["productContextSection"];

		if (ProductContextSectionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProductContextSectionValue, m_ProductContextSection, LogSystem);
		}
	}

	if (JsonDoc.HasMember("versionMatrix"))
	{
		const rapidjson::Value& VersionMatrixValue = JsonDoc["versionMatrix"];

		if (VersionMatrixValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionMatrixValue, m_VersionMatrix, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("category"))
	{
		const rapidjson::Value& CategoryValue = JsonDoc["category"];

		if (CategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CategoryValue, m_Category, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member category is null!");
		}
	}

	if (JsonDoc.HasMember("subCategory"))
	{
		const rapidjson::Value& SubCategoryValue = JsonDoc["subCategory"];

		if (SubCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SubCategoryValue, m_SubCategory, LogSystem);
		}
	}

	if (JsonDoc.HasMember("interactionType"))
	{
		const rapidjson::Value& InteractionTypeValue = JsonDoc["interactionType"];

		if (InteractionTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InteractionTypeValue, m_InteractionType, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member interactionType is null!");
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata, LogSystem);
		}
	}

	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName, LogSystem);
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

void ApiVersion::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ApiVersion::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version, LogSystem);
		}
	}

	if (JsonDoc.HasMember("deprecationDatetime"))
	{
		const rapidjson::Value& DeprecationDatetimeValue = JsonDoc["deprecationDatetime"];

		if (DeprecationDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeprecationDatetimeValue, m_DeprecationDatetime, LogSystem);
		}
	}

	if (JsonDoc.HasMember("endOfLifeDatetime"))
	{
		const rapidjson::Value& EndOfLifeDatetimeValue = JsonDoc["endOfLifeDatetime"];

		if (EndOfLifeDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EndOfLifeDatetimeValue, m_EndOfLifeDatetime, LogSystem);
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

	if (m_CloudStoragePath.has_value())
	{
		rapidjson::Value CloudStoragePathValue(TypeToJsonValue(m_CloudStoragePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cloudStoragePath", CloudStoragePathValue, JsonDoc.GetAllocator());
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

	if (m_MaxVersions.has_value())
	{
		rapidjson::Value MaxVersionsValue(TypeToJsonValue(m_MaxVersions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxVersions", MaxVersionsValue, JsonDoc.GetAllocator());
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetDetailDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetDetailDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fileName"))
	{
		const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

		if (FileNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileNameValue, m_FileName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member languageCode is null!");
		}
	}

	if (JsonDoc.HasMember("assetType"))
	{
		const rapidjson::Value& AssetTypeValue = JsonDoc["assetType"];

		if (AssetTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetTypeValue, m_AssetType, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member assetType is null!");
		}
	}

	if (JsonDoc.HasMember("supportedPlatforms"))
	{
		const rapidjson::Value& SupportedPlatformsValue = JsonDoc["supportedPlatforms"];

		if (SupportedPlatformsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SupportedPlatformsValue, m_SupportedPlatforms, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member supportedPlatforms is null!");
		}
	}

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member style is null!");
		}
	}

	if (JsonDoc.HasMember("addressableId"))
	{
		const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

		if (AddressableIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddressableIdValue, m_AddressableId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thirdPartyReferenceId"))
	{
		const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

		if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("cloudStoragePath"))
	{
		const rapidjson::Value& CloudStoragePathValue = JsonDoc["cloudStoragePath"];

		if (CloudStoragePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CloudStoragePathValue, m_CloudStoragePath, LogSystem);
		}
	}

	if (JsonDoc.HasMember("checksum"))
	{
		const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

		if (ChecksumValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChecksumValue, m_Checksum, LogSystem);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version, LogSystem);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalUri"))
	{
		const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

		if (ExternalUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalUriValue, m_ExternalUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalMimeType"))
	{
		const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

		if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalAssetUri"))
	{
		const rapidjson::Value& OriginalAssetUriValue = JsonDoc["originalAssetUri"];

		if (OriginalAssetUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetUriValue, m_OriginalAssetUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sizeInBytes"))
	{
		const rapidjson::Value& SizeInBytesValue = JsonDoc["sizeInBytes"];

		if (SizeInBytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeInBytesValue, m_SizeInBytes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sizeInBytes is null!");
		}
	}

	if (JsonDoc.HasMember("maxVersions"))
	{
		const rapidjson::Value& MaxVersionsValue = JsonDoc["maxVersions"];

		if (MaxVersionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxVersionsValue, m_MaxVersions, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
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
utility::string_t AssetDetailDto::GetCloudStoragePath() const
{
	return m_CloudStoragePath.value();
}

bool AssetDetailDto::HasCloudStoragePath() const
{
	return m_CloudStoragePath.has_value();
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
int32_t AssetDetailDto::GetMaxVersions() const
{
	return m_MaxVersions.value();
}

bool AssetDetailDto::HasMaxVersions() const
{
	return m_MaxVersions.has_value();
}
void AssetDetailDto::SetMaxVersions(int32_t Value)
{
	m_MaxVersions = Value;
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
bool AssetDetailDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool AssetDetailDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}

AssetDetailVersionDto::AssetDetailVersionDto()
{
}
AssetDetailVersionDto::~AssetDetailVersionDto()
{
}

utility::string_t AssetDetailVersionDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_AssetDetailId.has_value())
	{
		rapidjson::Value AssetDetailIdValue(TypeToJsonValue(m_AssetDetailId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetDetailId", AssetDetailIdValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_Version.has_value())
	{
		rapidjson::Value VersionValue(TypeToJsonValue(m_Version, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("version", VersionValue, JsonDoc.GetAllocator());
	}

	if (m_IsCurrent.has_value())
	{
		rapidjson::Value IsCurrentValue(TypeToJsonValue(m_IsCurrent, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isCurrent", IsCurrentValue, JsonDoc.GetAllocator());
	}

	if (m_FileName.has_value())
	{
		rapidjson::Value FileNameValue(TypeToJsonValue(m_FileName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fileName", FileNameValue, JsonDoc.GetAllocator());
	}

	if (m_MimeType.has_value())
	{
		rapidjson::Value MimeTypeValue(TypeToJsonValue(m_MimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mimeType", MimeTypeValue, JsonDoc.GetAllocator());
	}

	if (m_SizeInBytes.has_value())
	{
		rapidjson::Value SizeInBytesValue(TypeToJsonValue(m_SizeInBytes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sizeInBytes", SizeInBytesValue, JsonDoc.GetAllocator());
	}

	if (m_SavedAt.has_value())
	{
		rapidjson::Value SavedAtValue(TypeToJsonValue(m_SavedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("savedAt", SavedAtValue, JsonDoc.GetAllocator());
	}

	if (m_SavedBy.has_value())
	{
		rapidjson::Value SavedByValue(TypeToJsonValue(m_SavedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("savedBy", SavedByValue, JsonDoc.GetAllocator());
	}

	if (m_Origin.has_value())
	{
		rapidjson::Value OriginValue(TypeToJsonValue(m_Origin, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("origin", OriginValue, JsonDoc.GetAllocator());
	}

	if (m_RestoredFromVersion.has_value())
	{
		rapidjson::Value RestoredFromVersionValue(TypeToJsonValue(m_RestoredFromVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("restoredFromVersion", RestoredFromVersionValue, JsonDoc.GetAllocator());
	}

	if (m_IsBackfilled.has_value())
	{
		rapidjson::Value IsBackfilledValue(TypeToJsonValue(m_IsBackfilled, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isBackfilled", IsBackfilledValue, JsonDoc.GetAllocator());
	}

	if (m_Uri.has_value())
	{
		rapidjson::Value UriValue(TypeToJsonValue(m_Uri, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("uri", UriValue, JsonDoc.GetAllocator());
	}

	if (m_CloudStoragePath.has_value())
	{
		rapidjson::Value CloudStoragePathValue(TypeToJsonValue(m_CloudStoragePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cloudStoragePath", CloudStoragePathValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetDetailVersionDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetDetailVersionDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member version is null!");
		}
	}

	if (JsonDoc.HasMember("isCurrent"))
	{
		const rapidjson::Value& IsCurrentValue = JsonDoc["isCurrent"];

		if (IsCurrentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsCurrentValue, m_IsCurrent, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isCurrent is null!");
		}
	}

	if (JsonDoc.HasMember("fileName"))
	{
		const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

		if (FileNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileNameValue, m_FileName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sizeInBytes"))
	{
		const rapidjson::Value& SizeInBytesValue = JsonDoc["sizeInBytes"];

		if (SizeInBytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeInBytesValue, m_SizeInBytes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sizeInBytes is null!");
		}
	}

	if (JsonDoc.HasMember("savedAt"))
	{
		const rapidjson::Value& SavedAtValue = JsonDoc["savedAt"];

		if (SavedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SavedAtValue, m_SavedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("savedBy"))
	{
		const rapidjson::Value& SavedByValue = JsonDoc["savedBy"];

		if (SavedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SavedByValue, m_SavedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("origin"))
	{
		const rapidjson::Value& OriginValue = JsonDoc["origin"];

		if (OriginValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginValue, m_Origin, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member origin is null!");
		}
	}

	if (JsonDoc.HasMember("restoredFromVersion"))
	{
		const rapidjson::Value& RestoredFromVersionValue = JsonDoc["restoredFromVersion"];

		if (RestoredFromVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RestoredFromVersionValue, m_RestoredFromVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isBackfilled"))
	{
		const rapidjson::Value& IsBackfilledValue = JsonDoc["isBackfilled"];

		if (IsBackfilledValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsBackfilledValue, m_IsBackfilled, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isBackfilled is null!");
		}
	}

	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("cloudStoragePath"))
	{
		const rapidjson::Value& CloudStoragePathValue = JsonDoc["cloudStoragePath"];

		if (CloudStoragePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CloudStoragePathValue, m_CloudStoragePath, LogSystem);
		}
	}
}


utility::string_t AssetDetailVersionDto::GetAssetDetailId() const
{
	return m_AssetDetailId.value();
}

bool AssetDetailVersionDto::HasAssetDetailId() const
{
	return m_AssetDetailId.has_value();
}
utility::string_t AssetDetailVersionDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool AssetDetailVersionDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
int32_t AssetDetailVersionDto::GetVersion() const
{
	return m_Version.value();
}

bool AssetDetailVersionDto::HasVersion() const
{
	return m_Version.has_value();
}
bool AssetDetailVersionDto::GetIsCurrent() const
{
	return m_IsCurrent.value();
}

bool AssetDetailVersionDto::HasIsCurrent() const
{
	return m_IsCurrent.has_value();
}
utility::string_t AssetDetailVersionDto::GetFileName() const
{
	return m_FileName.value();
}

bool AssetDetailVersionDto::HasFileName() const
{
	return m_FileName.has_value();
}
utility::string_t AssetDetailVersionDto::GetMimeType() const
{
	return m_MimeType.value();
}

bool AssetDetailVersionDto::HasMimeType() const
{
	return m_MimeType.has_value();
}
int64_t AssetDetailVersionDto::GetSizeInBytes() const
{
	return m_SizeInBytes.value();
}

bool AssetDetailVersionDto::HasSizeInBytes() const
{
	return m_SizeInBytes.has_value();
}
utility::string_t AssetDetailVersionDto::GetSavedAt() const
{
	return m_SavedAt.value();
}

bool AssetDetailVersionDto::HasSavedAt() const
{
	return m_SavedAt.has_value();
}
utility::string_t AssetDetailVersionDto::GetSavedBy() const
{
	return m_SavedBy.value();
}

bool AssetDetailVersionDto::HasSavedBy() const
{
	return m_SavedBy.has_value();
}
std::shared_ptr<AssetDetailVersionOrigin> AssetDetailVersionDto::GetOrigin() const
{
	return m_Origin.value();
}

bool AssetDetailVersionDto::HasOrigin() const
{
	return m_Origin.has_value();
}
void AssetDetailVersionDto::SetOrigin(const std::shared_ptr<AssetDetailVersionOrigin>& Value)
{
	m_Origin = Value;
}
int32_t AssetDetailVersionDto::GetRestoredFromVersion() const
{
	return m_RestoredFromVersion.value();
}

bool AssetDetailVersionDto::HasRestoredFromVersion() const
{
	return m_RestoredFromVersion.has_value();
}
bool AssetDetailVersionDto::GetIsBackfilled() const
{
	return m_IsBackfilled.value();
}

bool AssetDetailVersionDto::HasIsBackfilled() const
{
	return m_IsBackfilled.has_value();
}
utility::string_t AssetDetailVersionDto::GetUri() const
{
	return m_Uri.value();
}

bool AssetDetailVersionDto::HasUri() const
{
	return m_Uri.has_value();
}
utility::string_t AssetDetailVersionDto::GetCloudStoragePath() const
{
	return m_CloudStoragePath.value();
}

bool AssetDetailVersionDto::HasCloudStoragePath() const
{
	return m_CloudStoragePath.has_value();
}

AssetDetailVersionDtoDataPage::AssetDetailVersionDtoDataPage()
{
}
AssetDetailVersionDtoDataPage::~AssetDetailVersionDtoDataPage()
{
}

utility::string_t AssetDetailVersionDtoDataPage::ToJson() const
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

void AssetDetailVersionDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetDetailVersionDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<AssetDetailVersionDto>>& AssetDetailVersionDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool AssetDetailVersionDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void AssetDetailVersionDtoDataPage::SetItems(const std::vector<std::shared_ptr<AssetDetailVersionDto>>& Value)
{
	m_Items = Value;
}
int32_t AssetDetailVersionDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool AssetDetailVersionDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void AssetDetailVersionDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t AssetDetailVersionDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool AssetDetailVersionDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void AssetDetailVersionDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t AssetDetailVersionDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool AssetDetailVersionDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void AssetDetailVersionDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t AssetDetailVersionDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool AssetDetailVersionDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void AssetDetailVersionDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

AssetDetailVersionOrigin::AssetDetailVersionOrigin()
{
}
AssetDetailVersionOrigin::~AssetDetailVersionOrigin()
{
}

utility::string_t AssetDetailVersionOrigin::ToJson() const
{
	switch (Value)
	{
		case eAssetDetailVersionOrigin::UNKNOWN:
			return "Unknown";
		case eAssetDetailVersionOrigin::UPLOAD:
			return "Upload";
		case eAssetDetailVersionOrigin::PIPELINE:
			return "Pipeline";
		case eAssetDetailVersionOrigin::RESTORE:
			return "Restore";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void AssetDetailVersionOrigin::FromJson(const utility::string_t& Val)
{
	if (Val == "Unknown")
	{
		Value = eAssetDetailVersionOrigin::UNKNOWN;
	}
	else if (Val == "Upload")
	{
		Value = eAssetDetailVersionOrigin::UPLOAD;
	}
	else if (Val == "Pipeline")
	{
		Value = eAssetDetailVersionOrigin::PIPELINE;
	}
	else if (Val == "Restore")
	{
		Value = eAssetDetailVersionOrigin::RESTORE;
	}
}

AssetDetailVersionOrigin::eAssetDetailVersionOrigin AssetDetailVersionOrigin::GetValue() const
{
	return Value;
}

void AssetDetailVersionOrigin::SetValue(AssetDetailVersionOrigin::eAssetDetailVersionOrigin const InValue)
{
	Value = InValue;
}

AssetPipelineModelDto::AssetPipelineModelDto()
{
}
AssetPipelineModelDto::~AssetPipelineModelDto()
{
}

utility::string_t AssetPipelineModelDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_AssetDetailId.has_value())
	{
		rapidjson::Value AssetDetailIdValue(TypeToJsonValue(m_AssetDetailId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetDetailId", AssetDetailIdValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailsCount.has_value())
	{
		rapidjson::Value ThumbnailsCountValue(TypeToJsonValue(m_ThumbnailsCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailsCount", ThumbnailsCountValue, JsonDoc.GetAllocator());
	}

	if (m_Thumbnails.has_value())
	{
		rapidjson::Value ThumbnailsValue(TypeToJsonValue(m_Thumbnails, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnails", ThumbnailsValue, JsonDoc.GetAllocator());
	}

	if (m_LodLevelsCount.has_value())
	{
		rapidjson::Value LodLevelsCountValue(TypeToJsonValue(m_LodLevelsCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lodLevelsCount", LodLevelsCountValue, JsonDoc.GetAllocator());
	}

	if (m_LodLevels.has_value())
	{
		rapidjson::Value LodLevelsValue(TypeToJsonValue(m_LodLevels, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lodLevels", LodLevelsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetPipelineModelDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetPipelineModelDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thumbnailsCount"))
	{
		const rapidjson::Value& ThumbnailsCountValue = JsonDoc["thumbnailsCount"];

		if (ThumbnailsCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailsCountValue, m_ThumbnailsCount, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thumbnails"))
	{
		const rapidjson::Value& ThumbnailsValue = JsonDoc["thumbnails"];

		if (ThumbnailsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailsValue, m_Thumbnails, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lodLevelsCount"))
	{
		const rapidjson::Value& LodLevelsCountValue = JsonDoc["lodLevelsCount"];

		if (LodLevelsCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelsCountValue, m_LodLevelsCount, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lodLevels"))
	{
		const rapidjson::Value& LodLevelsValue = JsonDoc["lodLevels"];

		if (LodLevelsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelsValue, m_LodLevels, LogSystem);
		}
	}
}


utility::string_t AssetPipelineModelDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool AssetPipelineModelDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t AssetPipelineModelDto::GetAssetDetailId() const
{
	return m_AssetDetailId.value();
}

bool AssetPipelineModelDto::HasAssetDetailId() const
{
	return m_AssetDetailId.has_value();
}
int32_t AssetPipelineModelDto::GetThumbnailsCount() const
{
	return m_ThumbnailsCount.value();
}

bool AssetPipelineModelDto::HasThumbnailsCount() const
{
	return m_ThumbnailsCount.has_value();
}
void AssetPipelineModelDto::SetThumbnailsCount(int32_t Value)
{
	m_ThumbnailsCount = Value;
}
const std::vector<std::shared_ptr<AssetPipelineThumbnailDto>>& AssetPipelineModelDto::GetThumbnails() const
{
	return m_Thumbnails.value();
}

bool AssetPipelineModelDto::HasThumbnails() const
{
	return m_Thumbnails.has_value();
}
void AssetPipelineModelDto::SetThumbnails(const std::vector<std::shared_ptr<AssetPipelineThumbnailDto>>& Value)
{
	m_Thumbnails = Value;
}
int32_t AssetPipelineModelDto::GetLodLevelsCount() const
{
	return m_LodLevelsCount.value();
}

bool AssetPipelineModelDto::HasLodLevelsCount() const
{
	return m_LodLevelsCount.has_value();
}
void AssetPipelineModelDto::SetLodLevelsCount(int32_t Value)
{
	m_LodLevelsCount = Value;
}
const std::vector<std::shared_ptr<AssetPipelineModelLodLevelDto>>& AssetPipelineModelDto::GetLodLevels() const
{
	return m_LodLevels.value();
}

bool AssetPipelineModelDto::HasLodLevels() const
{
	return m_LodLevels.has_value();
}
void AssetPipelineModelDto::SetLodLevels(const std::vector<std::shared_ptr<AssetPipelineModelLodLevelDto>>& Value)
{
	m_LodLevels = Value;
}

AssetPipelineModelLodLevelDto::AssetPipelineModelLodLevelDto()
{
}
AssetPipelineModelLodLevelDto::~AssetPipelineModelLodLevelDto()
{
}

utility::string_t AssetPipelineModelLodLevelDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_AssetDetailId.has_value())
	{
		rapidjson::Value AssetDetailIdValue(TypeToJsonValue(m_AssetDetailId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetDetailId", AssetDetailIdValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_LodLevelNumber.has_value())
	{
		rapidjson::Value LodLevelNumberValue(TypeToJsonValue(m_LodLevelNumber, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lodLevelNumber", LodLevelNumberValue, JsonDoc.GetAllocator());
	}

	if (m_SimplifyRatio.has_value())
	{
		rapidjson::Value SimplifyRatioValue(TypeToJsonValue(m_SimplifyRatio, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("simplifyRatio", SimplifyRatioValue, JsonDoc.GetAllocator());
	}

	if (m_ErrorTolerance.has_value())
	{
		rapidjson::Value ErrorToleranceValue(TypeToJsonValue(m_ErrorTolerance, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("errorTolerance", ErrorToleranceValue, JsonDoc.GetAllocator());
	}

	if (m_MaxTextureSize.has_value())
	{
		rapidjson::Value MaxTextureSizeValue(TypeToJsonValue(m_MaxTextureSize, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxTextureSize", MaxTextureSizeValue, JsonDoc.GetAllocator());
	}

	if (m_MaxLightMapSize.has_value())
	{
		rapidjson::Value MaxLightMapSizeValue(TypeToJsonValue(m_MaxLightMapSize, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxLightMapSize", MaxLightMapSizeValue, JsonDoc.GetAllocator());
	}

	if (m_CompressNormals.has_value())
	{
		rapidjson::Value CompressNormalsValue(TypeToJsonValue(m_CompressNormals, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("compressNormals", CompressNormalsValue, JsonDoc.GetAllocator());
	}

	if (m_CompressOcclusion.has_value())
	{
		rapidjson::Value CompressOcclusionValue(TypeToJsonValue(m_CompressOcclusion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("compressOcclusion", CompressOcclusionValue, JsonDoc.GetAllocator());
	}

	if (m_HighQualityTextures.has_value())
	{
		rapidjson::Value HighQualityTexturesValue(TypeToJsonValue(m_HighQualityTextures, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("highQualityTextures", HighQualityTexturesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetPipelineModelLodLevelDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetPipelineModelLodLevelDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member status is null!");
		}
	}

	if (JsonDoc.HasMember("lodLevelNumber"))
	{
		const rapidjson::Value& LodLevelNumberValue = JsonDoc["lodLevelNumber"];

		if (LodLevelNumberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelNumberValue, m_LodLevelNumber, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lodLevelNumber is null!");
		}
	}

	if (JsonDoc.HasMember("simplifyRatio"))
	{
		const rapidjson::Value& SimplifyRatioValue = JsonDoc["simplifyRatio"];

		if (SimplifyRatioValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SimplifyRatioValue, m_SimplifyRatio, LogSystem);
		}
	}

	if (JsonDoc.HasMember("errorTolerance"))
	{
		const rapidjson::Value& ErrorToleranceValue = JsonDoc["errorTolerance"];

		if (ErrorToleranceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorToleranceValue, m_ErrorTolerance, LogSystem);
		}
	}

	if (JsonDoc.HasMember("maxTextureSize"))
	{
		const rapidjson::Value& MaxTextureSizeValue = JsonDoc["maxTextureSize"];

		if (MaxTextureSizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxTextureSizeValue, m_MaxTextureSize, LogSystem);
		}
	}

	if (JsonDoc.HasMember("maxLightMapSize"))
	{
		const rapidjson::Value& MaxLightMapSizeValue = JsonDoc["maxLightMapSize"];

		if (MaxLightMapSizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxLightMapSizeValue, m_MaxLightMapSize, LogSystem);
		}
	}

	if (JsonDoc.HasMember("compressNormals"))
	{
		const rapidjson::Value& CompressNormalsValue = JsonDoc["compressNormals"];

		if (CompressNormalsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompressNormalsValue, m_CompressNormals, LogSystem);
		}
	}

	if (JsonDoc.HasMember("compressOcclusion"))
	{
		const rapidjson::Value& CompressOcclusionValue = JsonDoc["compressOcclusion"];

		if (CompressOcclusionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompressOcclusionValue, m_CompressOcclusion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("highQualityTextures"))
	{
		const rapidjson::Value& HighQualityTexturesValue = JsonDoc["highQualityTextures"];

		if (HighQualityTexturesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighQualityTexturesValue, m_HighQualityTextures, LogSystem);
		}
	}
}


utility::string_t AssetPipelineModelLodLevelDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool AssetPipelineModelLodLevelDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t AssetPipelineModelLodLevelDto::GetAssetDetailId() const
{
	return m_AssetDetailId.value();
}

bool AssetPipelineModelLodLevelDto::HasAssetDetailId() const
{
	return m_AssetDetailId.has_value();
}
std::shared_ptr<AssetPipelineStatus> AssetPipelineModelLodLevelDto::GetStatus() const
{
	return m_Status.value();
}

bool AssetPipelineModelLodLevelDto::HasStatus() const
{
	return m_Status.has_value();
}
void AssetPipelineModelLodLevelDto::SetStatus(const std::shared_ptr<AssetPipelineStatus>& Value)
{
	m_Status = Value;
}
int32_t AssetPipelineModelLodLevelDto::GetLodLevelNumber() const
{
	return m_LodLevelNumber.value();
}

bool AssetPipelineModelLodLevelDto::HasLodLevelNumber() const
{
	return m_LodLevelNumber.has_value();
}
void AssetPipelineModelLodLevelDto::SetLodLevelNumber(int32_t Value)
{
	m_LodLevelNumber = Value;
}
float AssetPipelineModelLodLevelDto::GetSimplifyRatio() const
{
	return m_SimplifyRatio.value();
}

bool AssetPipelineModelLodLevelDto::HasSimplifyRatio() const
{
	return m_SimplifyRatio.has_value();
}
void AssetPipelineModelLodLevelDto::SetSimplifyRatio(float Value)
{
	m_SimplifyRatio = Value;
}
float AssetPipelineModelLodLevelDto::GetErrorTolerance() const
{
	return m_ErrorTolerance.value();
}

bool AssetPipelineModelLodLevelDto::HasErrorTolerance() const
{
	return m_ErrorTolerance.has_value();
}
void AssetPipelineModelLodLevelDto::SetErrorTolerance(float Value)
{
	m_ErrorTolerance = Value;
}
int32_t AssetPipelineModelLodLevelDto::GetMaxTextureSize() const
{
	return m_MaxTextureSize.value();
}

bool AssetPipelineModelLodLevelDto::HasMaxTextureSize() const
{
	return m_MaxTextureSize.has_value();
}
void AssetPipelineModelLodLevelDto::SetMaxTextureSize(int32_t Value)
{
	m_MaxTextureSize = Value;
}
int32_t AssetPipelineModelLodLevelDto::GetMaxLightMapSize() const
{
	return m_MaxLightMapSize.value();
}

bool AssetPipelineModelLodLevelDto::HasMaxLightMapSize() const
{
	return m_MaxLightMapSize.has_value();
}
void AssetPipelineModelLodLevelDto::SetMaxLightMapSize(int32_t Value)
{
	m_MaxLightMapSize = Value;
}
bool AssetPipelineModelLodLevelDto::GetCompressNormals() const
{
	return m_CompressNormals.value();
}

bool AssetPipelineModelLodLevelDto::HasCompressNormals() const
{
	return m_CompressNormals.has_value();
}
void AssetPipelineModelLodLevelDto::SetCompressNormals(const bool& Value)
{
	m_CompressNormals = Value;
}
bool AssetPipelineModelLodLevelDto::GetCompressOcclusion() const
{
	return m_CompressOcclusion.value();
}

bool AssetPipelineModelLodLevelDto::HasCompressOcclusion() const
{
	return m_CompressOcclusion.has_value();
}
void AssetPipelineModelLodLevelDto::SetCompressOcclusion(const bool& Value)
{
	m_CompressOcclusion = Value;
}
bool AssetPipelineModelLodLevelDto::GetHighQualityTextures() const
{
	return m_HighQualityTextures.value();
}

bool AssetPipelineModelLodLevelDto::HasHighQualityTextures() const
{
	return m_HighQualityTextures.has_value();
}
void AssetPipelineModelLodLevelDto::SetHighQualityTextures(const bool& Value)
{
	m_HighQualityTextures = Value;
}

AssetPipelineStatus::AssetPipelineStatus()
{
}
AssetPipelineStatus::~AssetPipelineStatus()
{
}

utility::string_t AssetPipelineStatus::ToJson() const
{
	switch (Value)
	{
		case eAssetPipelineStatus::RUNNING:
			return "Running";
		case eAssetPipelineStatus::FAILED:
			return "Failed";
		case eAssetPipelineStatus::SUCCEEDED:
			return "Succeeded";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void AssetPipelineStatus::FromJson(const utility::string_t& Val)
{
	if (Val == "Running")
	{
		Value = eAssetPipelineStatus::RUNNING;
	}
	else if (Val == "Failed")
	{
		Value = eAssetPipelineStatus::FAILED;
	}
	else if (Val == "Succeeded")
	{
		Value = eAssetPipelineStatus::SUCCEEDED;
	}
}

AssetPipelineStatus::eAssetPipelineStatus AssetPipelineStatus::GetValue() const
{
	return Value;
}

void AssetPipelineStatus::SetValue(AssetPipelineStatus::eAssetPipelineStatus const InValue)
{
	Value = InValue;
}

AssetPipelineThumbnailDto::AssetPipelineThumbnailDto()
{
}
AssetPipelineThumbnailDto::~AssetPipelineThumbnailDto()
{
}

utility::string_t AssetPipelineThumbnailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_AssetDetailId.has_value())
	{
		rapidjson::Value AssetDetailIdValue(TypeToJsonValue(m_AssetDetailId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetDetailId", AssetDetailIdValue, JsonDoc.GetAllocator());
	}

	if (m_Status.has_value())
	{
		rapidjson::Value StatusValue(TypeToJsonValue(m_Status, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("status", StatusValue, JsonDoc.GetAllocator());
	}

	if (m_ThumbnailNumber.has_value())
	{
		rapidjson::Value ThumbnailNumberValue(TypeToJsonValue(m_ThumbnailNumber, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("thumbnailNumber", ThumbnailNumberValue, JsonDoc.GetAllocator());
	}

	if (m_ImageSizeX.has_value())
	{
		rapidjson::Value ImageSizeXValue(TypeToJsonValue(m_ImageSizeX, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("imageSizeX", ImageSizeXValue, JsonDoc.GetAllocator());
	}

	if (m_ImageSizeY.has_value())
	{
		rapidjson::Value ImageSizeYValue(TypeToJsonValue(m_ImageSizeY, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("imageSizeY", ImageSizeYValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void AssetPipelineThumbnailDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssetPipelineThumbnailDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member status is null!");
		}
	}

	if (JsonDoc.HasMember("thumbnailNumber"))
	{
		const rapidjson::Value& ThumbnailNumberValue = JsonDoc["thumbnailNumber"];

		if (ThumbnailNumberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailNumberValue, m_ThumbnailNumber, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member thumbnailNumber is null!");
		}
	}

	if (JsonDoc.HasMember("imageSizeX"))
	{
		const rapidjson::Value& ImageSizeXValue = JsonDoc["imageSizeX"];

		if (ImageSizeXValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageSizeXValue, m_ImageSizeX, LogSystem);
		}
	}

	if (JsonDoc.HasMember("imageSizeY"))
	{
		const rapidjson::Value& ImageSizeYValue = JsonDoc["imageSizeY"];

		if (ImageSizeYValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageSizeYValue, m_ImageSizeY, LogSystem);
		}
	}
}


utility::string_t AssetPipelineThumbnailDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool AssetPipelineThumbnailDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t AssetPipelineThumbnailDto::GetAssetDetailId() const
{
	return m_AssetDetailId.value();
}

bool AssetPipelineThumbnailDto::HasAssetDetailId() const
{
	return m_AssetDetailId.has_value();
}
std::shared_ptr<AssetPipelineStatus> AssetPipelineThumbnailDto::GetStatus() const
{
	return m_Status.value();
}

bool AssetPipelineThumbnailDto::HasStatus() const
{
	return m_Status.has_value();
}
void AssetPipelineThumbnailDto::SetStatus(const std::shared_ptr<AssetPipelineStatus>& Value)
{
	m_Status = Value;
}
int32_t AssetPipelineThumbnailDto::GetThumbnailNumber() const
{
	return m_ThumbnailNumber.value();
}

bool AssetPipelineThumbnailDto::HasThumbnailNumber() const
{
	return m_ThumbnailNumber.has_value();
}
void AssetPipelineThumbnailDto::SetThumbnailNumber(int32_t Value)
{
	m_ThumbnailNumber = Value;
}
int32_t AssetPipelineThumbnailDto::GetImageSizeX() const
{
	return m_ImageSizeX.value();
}

bool AssetPipelineThumbnailDto::HasImageSizeX() const
{
	return m_ImageSizeX.has_value();
}
void AssetPipelineThumbnailDto::SetImageSizeX(int32_t Value)
{
	m_ImageSizeX = Value;
}
int32_t AssetPipelineThumbnailDto::GetImageSizeY() const
{
	return m_ImageSizeY.value();
}

bool AssetPipelineThumbnailDto::HasImageSizeY() const
{
	return m_ImageSizeY.has_value();
}
void AssetPipelineThumbnailDto::SetImageSizeY(int32_t Value)
{
	m_ImageSizeY = Value;
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

void AssignmentDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssignmentDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("personId"))
	{
		const rapidjson::Value& PersonIdValue = JsonDoc["personId"];

		if (PersonIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdValue, m_PersonId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date, LogSystem);
		}
	}

	if (JsonDoc.HasMember("hours"))
	{
		const rapidjson::Value& HoursValue = JsonDoc["hours"];

		if (HoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HoursValue, m_Hours, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member hours is null!");
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
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

void AssignmentUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "AssignmentUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("personId"))
	{
		const rapidjson::Value& PersonIdValue = JsonDoc["personId"];

		if (PersonIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdValue, m_PersonId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member personId is null!");
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("date"))
	{
		const rapidjson::Value& DateValue = JsonDoc["date"];

		if (DateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DateValue, m_Date, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member date is null!");
		}
	}

	if (JsonDoc.HasMember("hours"))
	{
		const rapidjson::Value& HoursValue = JsonDoc["hours"];

		if (HoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HoursValue, m_Hours, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member hours is null!");
		}
	}

	if (JsonDoc.HasMember("replacesAssignmentId"))
	{
		const rapidjson::Value& ReplacesAssignmentIdValue = JsonDoc["replacesAssignmentId"];

		if (ReplacesAssignmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReplacesAssignmentIdValue, m_ReplacesAssignmentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
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

void BulkAssignRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkAssignRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("personIds"))
	{
		const rapidjson::Value& PersonIdsValue = JsonDoc["personIds"];

		if (PersonIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PersonIdsValue, m_PersonIds, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member personIds is null!");
		}
	}

	if (JsonDoc.HasMember("projectId"))
	{
		const rapidjson::Value& ProjectIdValue = JsonDoc["projectId"];

		if (ProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectIdValue, m_ProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member from is null!");
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member to is null!");
		}
	}

	if (JsonDoc.HasMember("hoursPerDay"))
	{
		const rapidjson::Value& HoursPerDayValue = JsonDoc["hoursPerDay"];

		if (HoursPerDayValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HoursPerDayValue, m_HoursPerDay, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member hoursPerDay is null!");
		}
	}

	if (JsonDoc.HasMember("weekdaysOnly"))
	{
		const rapidjson::Value& WeekdaysOnlyValue = JsonDoc["weekdaysOnly"];

		if (WeekdaysOnlyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeekdaysOnlyValue, m_WeekdaysOnly, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member weekdaysOnly is null!");
		}
	}

	if (JsonDoc.HasMember("overwrite"))
	{
		const rapidjson::Value& OverwriteValue = JsonDoc["overwrite"];

		if (OverwriteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverwriteValue, m_Overwrite, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member overwrite is null!");
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
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

void BulkAssignResultDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkAssignResultDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("applied"))
	{
		const rapidjson::Value& AppliedValue = JsonDoc["applied"];

		if (AppliedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AppliedValue, m_Applied, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member applied is null!");
		}
	}

	if (JsonDoc.HasMember("written"))
	{
		const rapidjson::Value& WrittenValue = JsonDoc["written"];

		if (WrittenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WrittenValue, m_Written, LogSystem);
		}
	}

	if (JsonDoc.HasMember("replaced"))
	{
		const rapidjson::Value& ReplacedValue = JsonDoc["replaced"];

		if (ReplacedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReplacedValue, m_Replaced, LogSystem);
		}
	}

	if (JsonDoc.HasMember("conflicts"))
	{
		const rapidjson::Value& ConflictsValue = JsonDoc["conflicts"];

		if (ConflictsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConflictsValue, m_Conflicts, LogSystem);
		}
	}

	if (JsonDoc.HasMember("shared"))
	{
		const rapidjson::Value& SharedValue = JsonDoc["shared"];

		if (SharedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SharedValue, m_Shared, LogSystem);
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

BulkUpsertAssetDetailDto::BulkUpsertAssetDetailDto()
{
}
BulkUpsertAssetDetailDto::~BulkUpsertAssetDetailDto()
{
}

utility::string_t BulkUpsertAssetDetailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeId.has_value())
	{
		rapidjson::Value PrototypeIdValue(TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeId", PrototypeIdValue, JsonDoc.GetAllocator());
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

	if (m_CloudStoragePath.has_value())
	{
		rapidjson::Value CloudStoragePathValue(TypeToJsonValue(m_CloudStoragePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cloudStoragePath", CloudStoragePathValue, JsonDoc.GetAllocator());
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

	if (m_MaxVersions.has_value())
	{
		rapidjson::Value MaxVersionsValue(TypeToJsonValue(m_MaxVersions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxVersions", MaxVersionsValue, JsonDoc.GetAllocator());
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void BulkUpsertAssetDetailDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkUpsertAssetDetailDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fileName"))
	{
		const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

		if (FileNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileNameValue, m_FileName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member languageCode is null!");
		}
	}

	if (JsonDoc.HasMember("assetType"))
	{
		const rapidjson::Value& AssetTypeValue = JsonDoc["assetType"];

		if (AssetTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetTypeValue, m_AssetType, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member assetType is null!");
		}
	}

	if (JsonDoc.HasMember("supportedPlatforms"))
	{
		const rapidjson::Value& SupportedPlatformsValue = JsonDoc["supportedPlatforms"];

		if (SupportedPlatformsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SupportedPlatformsValue, m_SupportedPlatforms, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member supportedPlatforms is null!");
		}
	}

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member style is null!");
		}
	}

	if (JsonDoc.HasMember("addressableId"))
	{
		const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

		if (AddressableIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddressableIdValue, m_AddressableId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thirdPartyReferenceId"))
	{
		const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

		if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("cloudStoragePath"))
	{
		const rapidjson::Value& CloudStoragePathValue = JsonDoc["cloudStoragePath"];

		if (CloudStoragePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CloudStoragePathValue, m_CloudStoragePath, LogSystem);
		}
	}

	if (JsonDoc.HasMember("checksum"))
	{
		const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

		if (ChecksumValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChecksumValue, m_Checksum, LogSystem);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version, LogSystem);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalUri"))
	{
		const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

		if (ExternalUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalUriValue, m_ExternalUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalMimeType"))
	{
		const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

		if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalAssetUri"))
	{
		const rapidjson::Value& OriginalAssetUriValue = JsonDoc["originalAssetUri"];

		if (OriginalAssetUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetUriValue, m_OriginalAssetUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sizeInBytes"))
	{
		const rapidjson::Value& SizeInBytesValue = JsonDoc["sizeInBytes"];

		if (SizeInBytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeInBytesValue, m_SizeInBytes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sizeInBytes is null!");
		}
	}

	if (JsonDoc.HasMember("maxVersions"))
	{
		const rapidjson::Value& MaxVersionsValue = JsonDoc["maxVersions"];

		if (MaxVersionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxVersionsValue, m_MaxVersions, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
		}
	}
}


utility::string_t BulkUpsertAssetDetailDto::GetId() const
{
	return m_Id.value();
}

bool BulkUpsertAssetDetailDto::HasId() const
{
	return m_Id.has_value();
}
void BulkUpsertAssetDetailDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool BulkUpsertAssetDetailDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetFileName() const
{
	return m_FileName.value();
}

bool BulkUpsertAssetDetailDto::HasFileName() const
{
	return m_FileName.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetName() const
{
	return m_Name.value();
}

bool BulkUpsertAssetDetailDto::HasName() const
{
	return m_Name.has_value();
}
void BulkUpsertAssetDetailDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool BulkUpsertAssetDetailDto::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void BulkUpsertAssetDetailDto::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetAssetType() const
{
	return m_AssetType.value();
}

bool BulkUpsertAssetDetailDto::HasAssetType() const
{
	return m_AssetType.has_value();
}
void BulkUpsertAssetDetailDto::SetAssetType(const utility::string_t& Value)
{
	m_AssetType = Value;
}
const std::vector<utility::string_t>& BulkUpsertAssetDetailDto::GetSupportedPlatforms() const
{
	return m_SupportedPlatforms.value();
}

bool BulkUpsertAssetDetailDto::HasSupportedPlatforms() const
{
	return m_SupportedPlatforms.has_value();
}
void BulkUpsertAssetDetailDto::SetSupportedPlatforms(const std::vector<utility::string_t>& Value)
{
	m_SupportedPlatforms = Value;
}
const std::vector<utility::string_t>& BulkUpsertAssetDetailDto::GetStyle() const
{
	return m_Style.value();
}

bool BulkUpsertAssetDetailDto::HasStyle() const
{
	return m_Style.has_value();
}
void BulkUpsertAssetDetailDto::SetStyle(const std::vector<utility::string_t>& Value)
{
	m_Style = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetAddressableId() const
{
	return m_AddressableId.value();
}

bool BulkUpsertAssetDetailDto::HasAddressableId() const
{
	return m_AddressableId.has_value();
}
void BulkUpsertAssetDetailDto::SetAddressableId(const utility::string_t& Value)
{
	m_AddressableId = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.value();
}

bool BulkUpsertAssetDetailDto::HasThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.has_value();
}
void BulkUpsertAssetDetailDto::SetThirdPartyReferenceId(const utility::string_t& Value)
{
	m_ThirdPartyReferenceId = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetUri() const
{
	return m_Uri.value();
}

bool BulkUpsertAssetDetailDto::HasUri() const
{
	return m_Uri.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetCloudStoragePath() const
{
	return m_CloudStoragePath.value();
}

bool BulkUpsertAssetDetailDto::HasCloudStoragePath() const
{
	return m_CloudStoragePath.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetChecksum() const
{
	return m_Checksum.value();
}

bool BulkUpsertAssetDetailDto::HasChecksum() const
{
	return m_Checksum.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetVersion() const
{
	return m_Version.value();
}

bool BulkUpsertAssetDetailDto::HasVersion() const
{
	return m_Version.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetMimeType() const
{
	return m_MimeType.value();
}

bool BulkUpsertAssetDetailDto::HasMimeType() const
{
	return m_MimeType.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetExternalUri() const
{
	return m_ExternalUri.value();
}

bool BulkUpsertAssetDetailDto::HasExternalUri() const
{
	return m_ExternalUri.has_value();
}
void BulkUpsertAssetDetailDto::SetExternalUri(const utility::string_t& Value)
{
	m_ExternalUri = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetExternalMimeType() const
{
	return m_ExternalMimeType.value();
}

bool BulkUpsertAssetDetailDto::HasExternalMimeType() const
{
	return m_ExternalMimeType.has_value();
}
void BulkUpsertAssetDetailDto::SetExternalMimeType(const utility::string_t& Value)
{
	m_ExternalMimeType = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetOriginalAssetUri() const
{
	return m_OriginalAssetUri.value();
}

bool BulkUpsertAssetDetailDto::HasOriginalAssetUri() const
{
	return m_OriginalAssetUri.has_value();
}
void BulkUpsertAssetDetailDto::SetOriginalAssetUri(const utility::string_t& Value)
{
	m_OriginalAssetUri = Value;
}
const std::vector<utility::string_t>& BulkUpsertAssetDetailDto::GetTags() const
{
	return m_Tags.value();
}

bool BulkUpsertAssetDetailDto::HasTags() const
{
	return m_Tags.has_value();
}
void BulkUpsertAssetDetailDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
int64_t BulkUpsertAssetDetailDto::GetSizeInBytes() const
{
	return m_SizeInBytes.value();
}

bool BulkUpsertAssetDetailDto::HasSizeInBytes() const
{
	return m_SizeInBytes.has_value();
}
int32_t BulkUpsertAssetDetailDto::GetMaxVersions() const
{
	return m_MaxVersions.value();
}

bool BulkUpsertAssetDetailDto::HasMaxVersions() const
{
	return m_MaxVersions.has_value();
}
void BulkUpsertAssetDetailDto::SetMaxVersions(int32_t Value)
{
	m_MaxVersions = Value;
}
utility::string_t BulkUpsertAssetDetailDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool BulkUpsertAssetDetailDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool BulkUpsertAssetDetailDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool BulkUpsertAssetDetailDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
utility::string_t BulkUpsertAssetDetailDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool BulkUpsertAssetDetailDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
bool BulkUpsertAssetDetailDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool BulkUpsertAssetDetailDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}

BulkUpsertPrototypeDto::BulkUpsertPrototypeDto()
{
}
BulkUpsertPrototypeDto::~BulkUpsertPrototypeDto()
{
}

utility::string_t BulkUpsertPrototypeDto::ToJson() const
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
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

void BulkUpsertPrototypeDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "BulkUpsertPrototypeDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestId"))
	{
		const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

		if (PointOfInterestIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("highlander"))
	{
		const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

		if (HighlanderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighlanderValue, m_Highlander, LogSystem);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemOwned"))
	{
		const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

		if (SystemOwnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemOwnedValue, m_SystemOwned, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerId"))
	{
		const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

		if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
		}
	}

	if (JsonDoc.HasMember("readAccess"))
	{
		const rapidjson::Value& ReadAccessValue = JsonDoc["readAccess"];

		if (ReadAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessValue, m_ReadAccess, LogSystem);
		}
	}

	if (JsonDoc.HasMember("writeAccess"))
	{
		const rapidjson::Value& WriteAccessValue = JsonDoc["writeAccess"];

		if (WriteAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessValue, m_WriteAccess, LogSystem);
		}
	}
}


utility::string_t BulkUpsertPrototypeDto::GetId() const
{
	return m_Id.value();
}

bool BulkUpsertPrototypeDto::HasId() const
{
	return m_Id.has_value();
}
void BulkUpsertPrototypeDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetName() const
{
	return m_Name.value();
}

bool BulkUpsertPrototypeDto::HasName() const
{
	return m_Name.has_value();
}
void BulkUpsertPrototypeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<utility::string_t>& BulkUpsertPrototypeDto::GetTags() const
{
	return m_Tags.value();
}

bool BulkUpsertPrototypeDto::HasTags() const
{
	return m_Tags.has_value();
}
void BulkUpsertPrototypeDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& BulkUpsertPrototypeDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool BulkUpsertPrototypeDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void BulkUpsertPrototypeDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& BulkUpsertPrototypeDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool BulkUpsertPrototypeDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void BulkUpsertPrototypeDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
const std::map<utility::string_t, utility::string_t>& BulkUpsertPrototypeDto::GetState() const
{
	return m_State.value();
}

bool BulkUpsertPrototypeDto::HasState() const
{
	return m_State.has_value();
}
void BulkUpsertPrototypeDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_State = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetPointOfInterestId() const
{
	return m_PointOfInterestId.value();
}

bool BulkUpsertPrototypeDto::HasPointOfInterestId() const
{
	return m_PointOfInterestId.has_value();
}
void BulkUpsertPrototypeDto::SetPointOfInterestId(const utility::string_t& Value)
{
	m_PointOfInterestId = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetParentId() const
{
	return m_ParentId.value();
}

bool BulkUpsertPrototypeDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void BulkUpsertPrototypeDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& BulkUpsertPrototypeDto::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool BulkUpsertPrototypeDto::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void BulkUpsertPrototypeDto::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool BulkUpsertPrototypeDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t BulkUpsertPrototypeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool BulkUpsertPrototypeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t BulkUpsertPrototypeDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool BulkUpsertPrototypeDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t BulkUpsertPrototypeDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool BulkUpsertPrototypeDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool BulkUpsertPrototypeDto::GetHighlander() const
{
	return m_Highlander.value();
}

bool BulkUpsertPrototypeDto::HasHighlander() const
{
	return m_Highlander.has_value();
}
void BulkUpsertPrototypeDto::SetHighlander(const bool& Value)
{
	m_Highlander = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetType() const
{
	return m_Type.value();
}

bool BulkUpsertPrototypeDto::HasType() const
{
	return m_Type.has_value();
}
void BulkUpsertPrototypeDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
bool BulkUpsertPrototypeDto::GetSystemOwned() const
{
	return m_SystemOwned.value();
}

bool BulkUpsertPrototypeDto::HasSystemOwned() const
{
	return m_SystemOwned.has_value();
}
void BulkUpsertPrototypeDto::SetSystemOwned(const bool& Value)
{
	m_SystemOwned = Value;
}
utility::string_t BulkUpsertPrototypeDto::GetPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.value();
}

bool BulkUpsertPrototypeDto::HasPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.has_value();
}
void BulkUpsertPrototypeDto::SetPrototypeOwnerId(const utility::string_t& Value)
{
	m_PrototypeOwnerId = Value;
}
bool BulkUpsertPrototypeDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool BulkUpsertPrototypeDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}
void BulkUpsertPrototypeDto::SetIsGlobal(const bool& Value)
{
	m_IsGlobal = Value;
}
const std::vector<utility::string_t>& BulkUpsertPrototypeDto::GetReadAccess() const
{
	return m_ReadAccess.value();
}

bool BulkUpsertPrototypeDto::HasReadAccess() const
{
	return m_ReadAccess.has_value();
}
void BulkUpsertPrototypeDto::SetReadAccess(const std::vector<utility::string_t>& Value)
{
	m_ReadAccess = Value;
}
const std::vector<utility::string_t>& BulkUpsertPrototypeDto::GetWriteAccess() const
{
	return m_WriteAccess.value();
}

bool BulkUpsertPrototypeDto::HasWriteAccess() const
{
	return m_WriteAccess.has_value();
}
void BulkUpsertPrototypeDto::SetWriteAccess(const std::vector<utility::string_t>& Value)
{
	m_WriteAccess = Value;
}

ByoAccessCheckDto::ByoAccessCheckDto()
{
}
ByoAccessCheckDto::~ByoAccessCheckDto()
{
}

utility::string_t ByoAccessCheckDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_CheckedAt.has_value())
	{
		rapidjson::Value CheckedAtValue(TypeToJsonValue(m_CheckedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("checkedAt", CheckedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Passed.has_value())
	{
		rapidjson::Value PassedValue(TypeToJsonValue(m_Passed, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("passed", PassedValue, JsonDoc.GetAllocator());
	}

	if (m_Rows.has_value())
	{
		rapidjson::Value RowsValue(TypeToJsonValue(m_Rows, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("rows", RowsValue, JsonDoc.GetAllocator());
	}

	if (m_Notes.has_value())
	{
		rapidjson::Value NotesValue(TypeToJsonValue(m_Notes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("notes", NotesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoAccessCheckDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoAccessCheckDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("checkedAt"))
	{
		const rapidjson::Value& CheckedAtValue = JsonDoc["checkedAt"];

		if (CheckedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CheckedAtValue, m_CheckedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member checkedAt is null!");
		}
	}

	if (JsonDoc.HasMember("passed"))
	{
		const rapidjson::Value& PassedValue = JsonDoc["passed"];

		if (PassedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PassedValue, m_Passed, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member passed is null!");
		}
	}

	if (JsonDoc.HasMember("rows"))
	{
		const rapidjson::Value& RowsValue = JsonDoc["rows"];

		if (RowsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RowsValue, m_Rows, LogSystem);
		}
	}

	if (JsonDoc.HasMember("notes"))
	{
		const rapidjson::Value& NotesValue = JsonDoc["notes"];

		if (NotesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NotesValue, m_Notes, LogSystem);
		}
	}
}


utility::string_t ByoAccessCheckDto::GetCheckedAt() const
{
	return m_CheckedAt.value();
}

bool ByoAccessCheckDto::HasCheckedAt() const
{
	return m_CheckedAt.has_value();
}
void ByoAccessCheckDto::SetCheckedAt(const utility::string_t& Value)
{
	m_CheckedAt = Value;
}
bool ByoAccessCheckDto::GetPassed() const
{
	return m_Passed.value();
}

bool ByoAccessCheckDto::HasPassed() const
{
	return m_Passed.has_value();
}
void ByoAccessCheckDto::SetPassed(const bool& Value)
{
	m_Passed = Value;
}
const std::vector<std::shared_ptr<ByoAccessCheckRowDto>>& ByoAccessCheckDto::GetRows() const
{
	return m_Rows.value();
}

bool ByoAccessCheckDto::HasRows() const
{
	return m_Rows.has_value();
}
void ByoAccessCheckDto::SetRows(const std::vector<std::shared_ptr<ByoAccessCheckRowDto>>& Value)
{
	m_Rows = Value;
}
const std::vector<utility::string_t>& ByoAccessCheckDto::GetNotes() const
{
	return m_Notes.value();
}

bool ByoAccessCheckDto::HasNotes() const
{
	return m_Notes.has_value();
}
void ByoAccessCheckDto::SetNotes(const std::vector<utility::string_t>& Value)
{
	m_Notes = Value;
}

ByoAccessCheckRowDto::ByoAccessCheckRowDto()
{
}
ByoAccessCheckRowDto::~ByoAccessCheckRowDto()
{
}

utility::string_t ByoAccessCheckRowDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Permission.has_value())
	{
		rapidjson::Value PermissionValue(TypeToJsonValue(m_Permission, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("permission", PermissionValue, JsonDoc.GetAllocator());
	}

	if (m_Role.has_value())
	{
		rapidjson::Value RoleValue(TypeToJsonValue(m_Role, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("role", RoleValue, JsonDoc.GetAllocator());
	}

	if (m_Purpose.has_value())
	{
		rapidjson::Value PurposeValue(TypeToJsonValue(m_Purpose, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("purpose", PurposeValue, JsonDoc.GetAllocator());
	}

	if (m_Required.has_value())
	{
		rapidjson::Value RequiredValue(TypeToJsonValue(m_Required, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("required", RequiredValue, JsonDoc.GetAllocator());
	}

	if (m_Granted.has_value())
	{
		rapidjson::Value GrantedValue(TypeToJsonValue(m_Granted, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("granted", GrantedValue, JsonDoc.GetAllocator());
	}

	if (m_Fix.has_value())
	{
		rapidjson::Value FixValue(TypeToJsonValue(m_Fix, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fix", FixValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoAccessCheckRowDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoAccessCheckRowDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("permission"))
	{
		const rapidjson::Value& PermissionValue = JsonDoc["permission"];

		if (PermissionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PermissionValue, m_Permission, LogSystem);
		}
	}

	if (JsonDoc.HasMember("role"))
	{
		const rapidjson::Value& RoleValue = JsonDoc["role"];

		if (RoleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoleValue, m_Role, LogSystem);
		}
	}

	if (JsonDoc.HasMember("purpose"))
	{
		const rapidjson::Value& PurposeValue = JsonDoc["purpose"];

		if (PurposeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PurposeValue, m_Purpose, LogSystem);
		}
	}

	if (JsonDoc.HasMember("required"))
	{
		const rapidjson::Value& RequiredValue = JsonDoc["required"];

		if (RequiredValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiredValue, m_Required, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member required is null!");
		}
	}

	if (JsonDoc.HasMember("granted"))
	{
		const rapidjson::Value& GrantedValue = JsonDoc["granted"];

		if (GrantedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GrantedValue, m_Granted, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member granted is null!");
		}
	}

	if (JsonDoc.HasMember("fix"))
	{
		const rapidjson::Value& FixValue = JsonDoc["fix"];

		if (FixValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FixValue, m_Fix, LogSystem);
		}
	}
}


utility::string_t ByoAccessCheckRowDto::GetPermission() const
{
	return m_Permission.value();
}

bool ByoAccessCheckRowDto::HasPermission() const
{
	return m_Permission.has_value();
}
void ByoAccessCheckRowDto::SetPermission(const utility::string_t& Value)
{
	m_Permission = Value;
}
utility::string_t ByoAccessCheckRowDto::GetRole() const
{
	return m_Role.value();
}

bool ByoAccessCheckRowDto::HasRole() const
{
	return m_Role.has_value();
}
void ByoAccessCheckRowDto::SetRole(const utility::string_t& Value)
{
	m_Role = Value;
}
utility::string_t ByoAccessCheckRowDto::GetPurpose() const
{
	return m_Purpose.value();
}

bool ByoAccessCheckRowDto::HasPurpose() const
{
	return m_Purpose.has_value();
}
void ByoAccessCheckRowDto::SetPurpose(const utility::string_t& Value)
{
	m_Purpose = Value;
}
bool ByoAccessCheckRowDto::GetRequired() const
{
	return m_Required.value();
}

bool ByoAccessCheckRowDto::HasRequired() const
{
	return m_Required.has_value();
}
void ByoAccessCheckRowDto::SetRequired(const bool& Value)
{
	m_Required = Value;
}
bool ByoAccessCheckRowDto::GetGranted() const
{
	return m_Granted.value();
}

bool ByoAccessCheckRowDto::HasGranted() const
{
	return m_Granted.has_value();
}
void ByoAccessCheckRowDto::SetGranted(const bool& Value)
{
	m_Granted = Value;
}
utility::string_t ByoAccessCheckRowDto::GetFix() const
{
	return m_Fix.value();
}

bool ByoAccessCheckRowDto::HasFix() const
{
	return m_Fix.has_value();
}
void ByoAccessCheckRowDto::SetFix(const utility::string_t& Value)
{
	m_Fix = Value;
}

ByoHandoverDto::ByoHandoverDto()
{
}
ByoHandoverDto::~ByoHandoverDto()
{
}

utility::string_t ByoHandoverDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_RuntimeServiceAccountEmail.has_value())
	{
		rapidjson::Value RuntimeServiceAccountEmailValue(TypeToJsonValue(m_RuntimeServiceAccountEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("runtimeServiceAccountEmail", RuntimeServiceAccountEmailValue, JsonDoc.GetAllocator());
	}

	if (m_Network.has_value())
	{
		rapidjson::Value NetworkValue(TypeToJsonValue(m_Network, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("network", NetworkValue, JsonDoc.GetAllocator());
	}

	if (m_NetworkTag.has_value())
	{
		rapidjson::Value NetworkTagValue(TypeToJsonValue(m_NetworkTag, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("networkTag", NetworkTagValue, JsonDoc.GetAllocator());
	}

	if (m_Subnet.has_value())
	{
		rapidjson::Value SubnetValue(TypeToJsonValue(m_Subnet, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("subnet", SubnetValue, JsonDoc.GetAllocator());
	}

	if (m_Region.has_value())
	{
		rapidjson::Value RegionValue(TypeToJsonValue(m_Region, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("region", RegionValue, JsonDoc.GetAllocator());
	}

	if (m_NatEnabled.has_value())
	{
		rapidjson::Value NatEnabledValue(TypeToJsonValue(m_NatEnabled, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("natEnabled", NatEnabledValue, JsonDoc.GetAllocator());
	}

	if (m_NatRegions.has_value())
	{
		rapidjson::Value NatRegionsValue(TypeToJsonValue(m_NatRegions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("natRegions", NatRegionsValue, JsonDoc.GetAllocator());
	}

	if (m_SshFirewallRule.has_value())
	{
		rapidjson::Value SshFirewallRuleValue(TypeToJsonValue(m_SshFirewallRule, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sshFirewallRule", SshFirewallRuleValue, JsonDoc.GetAllocator());
	}

	if (m_FirewallManagementGranted.has_value())
	{
		rapidjson::Value FirewallManagementGrantedValue(TypeToJsonValue(m_FirewallManagementGranted, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("firewallManagementGranted", FirewallManagementGrantedValue, JsonDoc.GetAllocator());
	}

	if (m_GrantedRoles.has_value())
	{
		rapidjson::Value GrantedRolesValue(TypeToJsonValue(m_GrantedRoles, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("grantedRoles", GrantedRolesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoHandoverDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoHandoverDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("runtimeServiceAccountEmail"))
	{
		const rapidjson::Value& RuntimeServiceAccountEmailValue = JsonDoc["runtimeServiceAccountEmail"];

		if (RuntimeServiceAccountEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RuntimeServiceAccountEmailValue, m_RuntimeServiceAccountEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("network"))
	{
		const rapidjson::Value& NetworkValue = JsonDoc["network"];

		if (NetworkValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NetworkValue, m_Network, LogSystem);
		}
	}

	if (JsonDoc.HasMember("networkTag"))
	{
		const rapidjson::Value& NetworkTagValue = JsonDoc["networkTag"];

		if (NetworkTagValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NetworkTagValue, m_NetworkTag, LogSystem);
		}
	}

	if (JsonDoc.HasMember("subnet"))
	{
		const rapidjson::Value& SubnetValue = JsonDoc["subnet"];

		if (SubnetValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SubnetValue, m_Subnet, LogSystem);
		}
	}

	if (JsonDoc.HasMember("region"))
	{
		const rapidjson::Value& RegionValue = JsonDoc["region"];

		if (RegionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RegionValue, m_Region, LogSystem);
		}
	}

	if (JsonDoc.HasMember("natEnabled"))
	{
		const rapidjson::Value& NatEnabledValue = JsonDoc["natEnabled"];

		if (NatEnabledValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NatEnabledValue, m_NatEnabled, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member natEnabled is null!");
		}
	}

	if (JsonDoc.HasMember("natRegions"))
	{
		const rapidjson::Value& NatRegionsValue = JsonDoc["natRegions"];

		if (NatRegionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NatRegionsValue, m_NatRegions, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sshFirewallRule"))
	{
		const rapidjson::Value& SshFirewallRuleValue = JsonDoc["sshFirewallRule"];

		if (SshFirewallRuleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SshFirewallRuleValue, m_SshFirewallRule, LogSystem);
		}
	}

	if (JsonDoc.HasMember("firewallManagementGranted"))
	{
		const rapidjson::Value& FirewallManagementGrantedValue = JsonDoc["firewallManagementGranted"];

		if (FirewallManagementGrantedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FirewallManagementGrantedValue, m_FirewallManagementGranted, LogSystem);
		}
	}

	if (JsonDoc.HasMember("grantedRoles"))
	{
		const rapidjson::Value& GrantedRolesValue = JsonDoc["grantedRoles"];

		if (GrantedRolesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GrantedRolesValue, m_GrantedRoles, LogSystem);
		}
	}
}


utility::string_t ByoHandoverDto::GetRuntimeServiceAccountEmail() const
{
	return m_RuntimeServiceAccountEmail.value();
}

bool ByoHandoverDto::HasRuntimeServiceAccountEmail() const
{
	return m_RuntimeServiceAccountEmail.has_value();
}
void ByoHandoverDto::SetRuntimeServiceAccountEmail(const utility::string_t& Value)
{
	m_RuntimeServiceAccountEmail = Value;
}
utility::string_t ByoHandoverDto::GetNetwork() const
{
	return m_Network.value();
}

bool ByoHandoverDto::HasNetwork() const
{
	return m_Network.has_value();
}
void ByoHandoverDto::SetNetwork(const utility::string_t& Value)
{
	m_Network = Value;
}
utility::string_t ByoHandoverDto::GetNetworkTag() const
{
	return m_NetworkTag.value();
}

bool ByoHandoverDto::HasNetworkTag() const
{
	return m_NetworkTag.has_value();
}
void ByoHandoverDto::SetNetworkTag(const utility::string_t& Value)
{
	m_NetworkTag = Value;
}
utility::string_t ByoHandoverDto::GetSubnet() const
{
	return m_Subnet.value();
}

bool ByoHandoverDto::HasSubnet() const
{
	return m_Subnet.has_value();
}
void ByoHandoverDto::SetSubnet(const utility::string_t& Value)
{
	m_Subnet = Value;
}
utility::string_t ByoHandoverDto::GetRegion() const
{
	return m_Region.value();
}

bool ByoHandoverDto::HasRegion() const
{
	return m_Region.has_value();
}
void ByoHandoverDto::SetRegion(const utility::string_t& Value)
{
	m_Region = Value;
}
bool ByoHandoverDto::GetNatEnabled() const
{
	return m_NatEnabled.value();
}

bool ByoHandoverDto::HasNatEnabled() const
{
	return m_NatEnabled.has_value();
}
void ByoHandoverDto::SetNatEnabled(const bool& Value)
{
	m_NatEnabled = Value;
}
const std::vector<utility::string_t>& ByoHandoverDto::GetNatRegions() const
{
	return m_NatRegions.value();
}

bool ByoHandoverDto::HasNatRegions() const
{
	return m_NatRegions.has_value();
}
void ByoHandoverDto::SetNatRegions(const std::vector<utility::string_t>& Value)
{
	m_NatRegions = Value;
}
utility::string_t ByoHandoverDto::GetSshFirewallRule() const
{
	return m_SshFirewallRule.value();
}

bool ByoHandoverDto::HasSshFirewallRule() const
{
	return m_SshFirewallRule.has_value();
}
void ByoHandoverDto::SetSshFirewallRule(const utility::string_t& Value)
{
	m_SshFirewallRule = Value;
}
bool ByoHandoverDto::GetFirewallManagementGranted() const
{
	return m_FirewallManagementGranted.value();
}

bool ByoHandoverDto::HasFirewallManagementGranted() const
{
	return m_FirewallManagementGranted.has_value();
}
void ByoHandoverDto::SetFirewallManagementGranted(const bool& Value)
{
	m_FirewallManagementGranted = Value;
}
const std::vector<utility::string_t>& ByoHandoverDto::GetGrantedRoles() const
{
	return m_GrantedRoles.value();
}

bool ByoHandoverDto::HasGrantedRoles() const
{
	return m_GrantedRoles.has_value();
}
void ByoHandoverDto::SetGrantedRoles(const std::vector<utility::string_t>& Value)
{
	m_GrantedRoles = Value;
}

ByoInventoryErrorDto::ByoInventoryErrorDto()
{
}
ByoInventoryErrorDto::~ByoInventoryErrorDto()
{
}

utility::string_t ByoInventoryErrorDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_At.has_value())
	{
		rapidjson::Value AtValue(TypeToJsonValue(m_At, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("at", AtValue, JsonDoc.GetAllocator());
	}

	if (m_OurSide.has_value())
	{
		rapidjson::Value OurSideValue(TypeToJsonValue(m_OurSide, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ourSide", OurSideValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoInventoryErrorDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoInventoryErrorDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
		}
	}

	if (JsonDoc.HasMember("at"))
	{
		const rapidjson::Value& AtValue = JsonDoc["at"];

		if (AtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AtValue, m_At, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member at is null!");
		}
	}

	if (JsonDoc.HasMember("ourSide"))
	{
		const rapidjson::Value& OurSideValue = JsonDoc["ourSide"];

		if (OurSideValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OurSideValue, m_OurSide, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member ourSide is null!");
		}
	}
}


utility::string_t ByoInventoryErrorDto::GetMessage() const
{
	return m_Message.value();
}

bool ByoInventoryErrorDto::HasMessage() const
{
	return m_Message.has_value();
}
void ByoInventoryErrorDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
utility::string_t ByoInventoryErrorDto::GetAt() const
{
	return m_At.value();
}

bool ByoInventoryErrorDto::HasAt() const
{
	return m_At.has_value();
}
void ByoInventoryErrorDto::SetAt(const utility::string_t& Value)
{
	m_At = Value;
}
bool ByoInventoryErrorDto::GetOurSide() const
{
	return m_OurSide.value();
}

bool ByoInventoryErrorDto::HasOurSide() const
{
	return m_OurSide.has_value();
}
void ByoInventoryErrorDto::SetOurSide(const bool& Value)
{
	m_OurSide = Value;
}

ByoMachineAttemptDto::ByoMachineAttemptDto()
{
}
ByoMachineAttemptDto::~ByoMachineAttemptDto()
{
}

utility::string_t ByoMachineAttemptDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Round.has_value())
	{
		rapidjson::Value RoundValue(TypeToJsonValue(m_Round, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("round", RoundValue, JsonDoc.GetAllocator());
	}

	if (m_Zone.has_value())
	{
		rapidjson::Value ZoneValue(TypeToJsonValue(m_Zone, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("zone", ZoneValue, JsonDoc.GetAllocator());
	}

	if (m_Class.has_value())
	{
		rapidjson::Value ClassValue(TypeToJsonValue(m_Class, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("class", ClassValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_At.has_value())
	{
		rapidjson::Value AtValue(TypeToJsonValue(m_At, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("at", AtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoMachineAttemptDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineAttemptDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("round"))
	{
		const rapidjson::Value& RoundValue = JsonDoc["round"];

		if (RoundValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoundValue, m_Round, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member round is null!");
		}
	}

	if (JsonDoc.HasMember("zone"))
	{
		const rapidjson::Value& ZoneValue = JsonDoc["zone"];

		if (ZoneValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZoneValue, m_Zone, LogSystem);
		}
	}

	if (JsonDoc.HasMember("class"))
	{
		const rapidjson::Value& ClassValue = JsonDoc["class"];

		if (ClassValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClassValue, m_Class, LogSystem);
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
		}
	}

	if (JsonDoc.HasMember("at"))
	{
		const rapidjson::Value& AtValue = JsonDoc["at"];

		if (AtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AtValue, m_At, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member at is null!");
		}
	}
}


int32_t ByoMachineAttemptDto::GetRound() const
{
	return m_Round.value();
}

bool ByoMachineAttemptDto::HasRound() const
{
	return m_Round.has_value();
}
void ByoMachineAttemptDto::SetRound(int32_t Value)
{
	m_Round = Value;
}
utility::string_t ByoMachineAttemptDto::GetZone() const
{
	return m_Zone.value();
}

bool ByoMachineAttemptDto::HasZone() const
{
	return m_Zone.has_value();
}
void ByoMachineAttemptDto::SetZone(const utility::string_t& Value)
{
	m_Zone = Value;
}
utility::string_t ByoMachineAttemptDto::GetClass() const
{
	return m_Class.value();
}

bool ByoMachineAttemptDto::HasClass() const
{
	return m_Class.has_value();
}
void ByoMachineAttemptDto::SetClass(const utility::string_t& Value)
{
	m_Class = Value;
}
utility::string_t ByoMachineAttemptDto::GetMessage() const
{
	return m_Message.value();
}

bool ByoMachineAttemptDto::HasMessage() const
{
	return m_Message.has_value();
}
void ByoMachineAttemptDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
utility::string_t ByoMachineAttemptDto::GetAt() const
{
	return m_At.value();
}

bool ByoMachineAttemptDto::HasAt() const
{
	return m_At.has_value();
}
void ByoMachineAttemptDto::SetAt(const utility::string_t& Value)
{
	m_At = Value;
}

ByoMachineDto::ByoMachineDto()
{
}
ByoMachineDto::~ByoMachineDto()
{
}

utility::string_t ByoMachineDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_ProjectRecordId.has_value())
	{
		rapidjson::Value ProjectRecordIdValue(TypeToJsonValue(m_ProjectRecordId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectRecordId", ProjectRecordIdValue, JsonDoc.GetAllocator());
	}

	if (m_GcpProjectId.has_value())
	{
		rapidjson::Value GcpProjectIdValue(TypeToJsonValue(m_GcpProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpProjectId", GcpProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_ProjectState.has_value())
	{
		rapidjson::Value ProjectStateValue(TypeToJsonValue(m_ProjectState, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectState", ProjectStateValue, JsonDoc.GetAllocator());
	}

	if (m_GcpInstanceId.has_value())
	{
		rapidjson::Value GcpInstanceIdValue(TypeToJsonValue(m_GcpInstanceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpInstanceId", GcpInstanceIdValue, JsonDoc.GetAllocator());
	}

	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_Zone.has_value())
	{
		rapidjson::Value ZoneValue(TypeToJsonValue(m_Zone, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("zone", ZoneValue, JsonDoc.GetAllocator());
	}

	if (m_MachineType.has_value())
	{
		rapidjson::Value MachineTypeValue(TypeToJsonValue(m_MachineType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("machineType", MachineTypeValue, JsonDoc.GetAllocator());
	}

	if (m_GpuType.has_value())
	{
		rapidjson::Value GpuTypeValue(TypeToJsonValue(m_GpuType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gpuType", GpuTypeValue, JsonDoc.GetAllocator());
	}

	if (m_GpuCount.has_value())
	{
		rapidjson::Value GpuCountValue(TypeToJsonValue(m_GpuCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gpuCount", GpuCountValue, JsonDoc.GetAllocator());
	}

	if (m_ServiceAccountEmail.has_value())
	{
		rapidjson::Value ServiceAccountEmailValue(TypeToJsonValue(m_ServiceAccountEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("serviceAccountEmail", ServiceAccountEmailValue, JsonDoc.GetAllocator());
	}

	if (m_NetworkTags.has_value())
	{
		rapidjson::Value NetworkTagsValue(TypeToJsonValue(m_NetworkTags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("networkTags", NetworkTagsValue, JsonDoc.GetAllocator());
	}

	if (m_Labels.has_value())
	{
		rapidjson::Value LabelsValue(TypeToJsonValue(m_Labels, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("labels", LabelsValue, JsonDoc.GetAllocator());
	}

	if (m_InternalIp.has_value())
	{
		rapidjson::Value InternalIpValue(TypeToJsonValue(m_InternalIp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("internalIp", InternalIpValue, JsonDoc.GetAllocator());
	}

	if (m_ExternalIp.has_value())
	{
		rapidjson::Value ExternalIpValue(TypeToJsonValue(m_ExternalIp, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("externalIp", ExternalIpValue, JsonDoc.GetAllocator());
	}

	if (m_GcpStatus.has_value())
	{
		rapidjson::Value GcpStatusValue(TypeToJsonValue(m_GcpStatus, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpStatus", GcpStatusValue, JsonDoc.GetAllocator());
	}

	if (m_GcpCreatedAt.has_value())
	{
		rapidjson::Value GcpCreatedAtValue(TypeToJsonValue(m_GcpCreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpCreatedAt", GcpCreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastStartedAt.has_value())
	{
		rapidjson::Value LastStartedAtValue(TypeToJsonValue(m_LastStartedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastStartedAt", LastStartedAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastStoppedAt.has_value())
	{
		rapidjson::Value LastStoppedAtValue(TypeToJsonValue(m_LastStoppedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastStoppedAt", LastStoppedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Origin.has_value())
	{
		rapidjson::Value OriginValue(TypeToJsonValue(m_Origin, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("origin", OriginValue, JsonDoc.GetAllocator());
	}

	if (m_Presence.has_value())
	{
		rapidjson::Value PresenceValue(TypeToJsonValue(m_Presence, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("presence", PresenceValue, JsonDoc.GetAllocator());
	}

	if (m_IsOrphan.has_value())
	{
		rapidjson::Value IsOrphanValue(TypeToJsonValue(m_IsOrphan, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isOrphan", IsOrphanValue, JsonDoc.GetAllocator());
	}

	if (m_MatchedBy.has_value())
	{
		rapidjson::Value MatchedByValue(TypeToJsonValue(m_MatchedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("matchedBy", MatchedByValue, JsonDoc.GetAllocator());
	}

	if (m_FirstSeenAt.has_value())
	{
		rapidjson::Value FirstSeenAtValue(TypeToJsonValue(m_FirstSeenAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("firstSeenAt", FirstSeenAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastSeenAt.has_value())
	{
		rapidjson::Value LastSeenAtValue(TypeToJsonValue(m_LastSeenAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastSeenAt", LastSeenAtValue, JsonDoc.GetAllocator());
	}

	if (m_GoneAt.has_value())
	{
		rapidjson::Value GoneAtValue(TypeToJsonValue(m_GoneAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("goneAt", GoneAtValue, JsonDoc.GetAllocator());
	}

	if (m_RequestedByEmail.has_value())
	{
		rapidjson::Value RequestedByEmailValue(TypeToJsonValue(m_RequestedByEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestedByEmail", RequestedByEmailValue, JsonDoc.GetAllocator());
	}

	if (m_RequestedAt.has_value())
	{
		rapidjson::Value RequestedAtValue(TypeToJsonValue(m_RequestedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestedAt", RequestedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Purpose.has_value())
	{
		rapidjson::Value PurposeValue(TypeToJsonValue(m_Purpose, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("purpose", PurposeValue, JsonDoc.GetAllocator());
	}

	if (m_Template.has_value())
	{
		rapidjson::Value TemplateValue(TypeToJsonValue(m_Template, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("template", TemplateValue, JsonDoc.GetAllocator());
	}

	if (m_ImageVersion.has_value())
	{
		rapidjson::Value ImageVersionValue(TypeToJsonValue(m_ImageVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("imageVersion", ImageVersionValue, JsonDoc.GetAllocator());
	}

	if (m_NodeDefinitionsVersion.has_value())
	{
		rapidjson::Value NodeDefinitionsVersionValue(TypeToJsonValue(m_NodeDefinitionsVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeDefinitionsVersion", NodeDefinitionsVersionValue, JsonDoc.GetAllocator());
	}

	if (m_LeaseExpiresAt.has_value())
	{
		rapidjson::Value LeaseExpiresAtValue(TypeToJsonValue(m_LeaseExpiresAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaseExpiresAt", LeaseExpiresAtValue, JsonDoc.GetAllocator());
	}

	if (m_IsPastLease.has_value())
	{
		rapidjson::Value IsPastLeaseValue(TypeToJsonValue(m_IsPastLease, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isPastLease", IsPastLeaseValue, JsonDoc.GetAllocator());
	}

	if (m_ActiveJobAction.has_value())
	{
		rapidjson::Value ActiveJobActionValue(TypeToJsonValue(m_ActiveJobAction, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("activeJobAction", ActiveJobActionValue, JsonDoc.GetAllocator());
	}

	if (m_ActiveJob.has_value())
	{
		rapidjson::Value ActiveJobValue(TypeToJsonValue(m_ActiveJob, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("activeJob", ActiveJobValue, JsonDoc.GetAllocator());
	}

	if (m_LastJob.has_value())
	{
		rapidjson::Value LastJobValue(TypeToJsonValue(m_LastJob, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastJob", LastJobValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoMachineDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("projectRecordId"))
	{
		const rapidjson::Value& ProjectRecordIdValue = JsonDoc["projectRecordId"];

		if (ProjectRecordIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectRecordIdValue, m_ProjectRecordId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpProjectId"))
	{
		const rapidjson::Value& GcpProjectIdValue = JsonDoc["gcpProjectId"];

		if (GcpProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpProjectIdValue, m_GcpProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("projectState"))
	{
		const rapidjson::Value& ProjectStateValue = JsonDoc["projectState"];

		if (ProjectStateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectStateValue, m_ProjectState, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpInstanceId"))
	{
		const rapidjson::Value& GcpInstanceIdValue = JsonDoc["gcpInstanceId"];

		if (GcpInstanceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpInstanceIdValue, m_GcpInstanceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("zone"))
	{
		const rapidjson::Value& ZoneValue = JsonDoc["zone"];

		if (ZoneValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZoneValue, m_Zone, LogSystem);
		}
	}

	if (JsonDoc.HasMember("machineType"))
	{
		const rapidjson::Value& MachineTypeValue = JsonDoc["machineType"];

		if (MachineTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MachineTypeValue, m_MachineType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gpuType"))
	{
		const rapidjson::Value& GpuTypeValue = JsonDoc["gpuType"];

		if (GpuTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GpuTypeValue, m_GpuType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gpuCount"))
	{
		const rapidjson::Value& GpuCountValue = JsonDoc["gpuCount"];

		if (GpuCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GpuCountValue, m_GpuCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member gpuCount is null!");
		}
	}

	if (JsonDoc.HasMember("serviceAccountEmail"))
	{
		const rapidjson::Value& ServiceAccountEmailValue = JsonDoc["serviceAccountEmail"];

		if (ServiceAccountEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceAccountEmailValue, m_ServiceAccountEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("networkTags"))
	{
		const rapidjson::Value& NetworkTagsValue = JsonDoc["networkTags"];

		if (NetworkTagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NetworkTagsValue, m_NetworkTags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("labels"))
	{
		const rapidjson::Value& LabelsValue = JsonDoc["labels"];

		if (LabelsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LabelsValue, m_Labels, LogSystem);
		}
	}

	if (JsonDoc.HasMember("internalIp"))
	{
		const rapidjson::Value& InternalIpValue = JsonDoc["internalIp"];

		if (InternalIpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InternalIpValue, m_InternalIp, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalIp"))
	{
		const rapidjson::Value& ExternalIpValue = JsonDoc["externalIp"];

		if (ExternalIpValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalIpValue, m_ExternalIp, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpStatus"))
	{
		const rapidjson::Value& GcpStatusValue = JsonDoc["gcpStatus"];

		if (GcpStatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpStatusValue, m_GcpStatus, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpCreatedAt"))
	{
		const rapidjson::Value& GcpCreatedAtValue = JsonDoc["gcpCreatedAt"];

		if (GcpCreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpCreatedAtValue, m_GcpCreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastStartedAt"))
	{
		const rapidjson::Value& LastStartedAtValue = JsonDoc["lastStartedAt"];

		if (LastStartedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastStartedAtValue, m_LastStartedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastStoppedAt"))
	{
		const rapidjson::Value& LastStoppedAtValue = JsonDoc["lastStoppedAt"];

		if (LastStoppedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastStoppedAtValue, m_LastStoppedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("origin"))
	{
		const rapidjson::Value& OriginValue = JsonDoc["origin"];

		if (OriginValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginValue, m_Origin, LogSystem);
		}
	}

	if (JsonDoc.HasMember("presence"))
	{
		const rapidjson::Value& PresenceValue = JsonDoc["presence"];

		if (PresenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PresenceValue, m_Presence, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isOrphan"))
	{
		const rapidjson::Value& IsOrphanValue = JsonDoc["isOrphan"];

		if (IsOrphanValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsOrphanValue, m_IsOrphan, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isOrphan is null!");
		}
	}

	if (JsonDoc.HasMember("matchedBy"))
	{
		const rapidjson::Value& MatchedByValue = JsonDoc["matchedBy"];

		if (MatchedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MatchedByValue, m_MatchedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("firstSeenAt"))
	{
		const rapidjson::Value& FirstSeenAtValue = JsonDoc["firstSeenAt"];

		if (FirstSeenAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FirstSeenAtValue, m_FirstSeenAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member firstSeenAt is null!");
		}
	}

	if (JsonDoc.HasMember("lastSeenAt"))
	{
		const rapidjson::Value& LastSeenAtValue = JsonDoc["lastSeenAt"];

		if (LastSeenAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastSeenAtValue, m_LastSeenAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lastSeenAt is null!");
		}
	}

	if (JsonDoc.HasMember("goneAt"))
	{
		const rapidjson::Value& GoneAtValue = JsonDoc["goneAt"];

		if (GoneAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GoneAtValue, m_GoneAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("requestedByEmail"))
	{
		const rapidjson::Value& RequestedByEmailValue = JsonDoc["requestedByEmail"];

		if (RequestedByEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestedByEmailValue, m_RequestedByEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("requestedAt"))
	{
		const rapidjson::Value& RequestedAtValue = JsonDoc["requestedAt"];

		if (RequestedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestedAtValue, m_RequestedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("purpose"))
	{
		const rapidjson::Value& PurposeValue = JsonDoc["purpose"];

		if (PurposeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PurposeValue, m_Purpose, LogSystem);
		}
	}

	if (JsonDoc.HasMember("template"))
	{
		const rapidjson::Value& TemplateValue = JsonDoc["template"];

		if (TemplateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemplateValue, m_Template, LogSystem);
		}
	}

	if (JsonDoc.HasMember("imageVersion"))
	{
		const rapidjson::Value& ImageVersionValue = JsonDoc["imageVersion"];

		if (ImageVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageVersionValue, m_ImageVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("nodeDefinitionsVersion"))
	{
		const rapidjson::Value& NodeDefinitionsVersionValue = JsonDoc["nodeDefinitionsVersion"];

		if (NodeDefinitionsVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeDefinitionsVersionValue, m_NodeDefinitionsVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("leaseExpiresAt"))
	{
		const rapidjson::Value& LeaseExpiresAtValue = JsonDoc["leaseExpiresAt"];

		if (LeaseExpiresAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaseExpiresAtValue, m_LeaseExpiresAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isPastLease"))
	{
		const rapidjson::Value& IsPastLeaseValue = JsonDoc["isPastLease"];

		if (IsPastLeaseValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsPastLeaseValue, m_IsPastLease, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isPastLease is null!");
		}
	}

	if (JsonDoc.HasMember("activeJobAction"))
	{
		const rapidjson::Value& ActiveJobActionValue = JsonDoc["activeJobAction"];

		if (ActiveJobActionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActiveJobActionValue, m_ActiveJobAction, LogSystem);
		}
	}

	if (JsonDoc.HasMember("activeJob"))
	{
		const rapidjson::Value& ActiveJobValue = JsonDoc["activeJob"];

		if (ActiveJobValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActiveJobValue, m_ActiveJob, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member activeJob is null!");
		}
	}

	if (JsonDoc.HasMember("lastJob"))
	{
		const rapidjson::Value& LastJobValue = JsonDoc["lastJob"];

		if (LastJobValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastJobValue, m_LastJob, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lastJob is null!");
		}
	}
}


utility::string_t ByoMachineDto::GetId() const
{
	return m_Id.value();
}

bool ByoMachineDto::HasId() const
{
	return m_Id.has_value();
}
void ByoMachineDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ByoMachineDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool ByoMachineDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void ByoMachineDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t ByoMachineDto::GetProjectRecordId() const
{
	return m_ProjectRecordId.value();
}

bool ByoMachineDto::HasProjectRecordId() const
{
	return m_ProjectRecordId.has_value();
}
void ByoMachineDto::SetProjectRecordId(const utility::string_t& Value)
{
	m_ProjectRecordId = Value;
}
utility::string_t ByoMachineDto::GetGcpProjectId() const
{
	return m_GcpProjectId.value();
}

bool ByoMachineDto::HasGcpProjectId() const
{
	return m_GcpProjectId.has_value();
}
void ByoMachineDto::SetGcpProjectId(const utility::string_t& Value)
{
	m_GcpProjectId = Value;
}
utility::string_t ByoMachineDto::GetProjectState() const
{
	return m_ProjectState.value();
}

bool ByoMachineDto::HasProjectState() const
{
	return m_ProjectState.has_value();
}
void ByoMachineDto::SetProjectState(const utility::string_t& Value)
{
	m_ProjectState = Value;
}
utility::string_t ByoMachineDto::GetGcpInstanceId() const
{
	return m_GcpInstanceId.value();
}

bool ByoMachineDto::HasGcpInstanceId() const
{
	return m_GcpInstanceId.has_value();
}
void ByoMachineDto::SetGcpInstanceId(const utility::string_t& Value)
{
	m_GcpInstanceId = Value;
}
utility::string_t ByoMachineDto::GetName() const
{
	return m_Name.value();
}

bool ByoMachineDto::HasName() const
{
	return m_Name.has_value();
}
void ByoMachineDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t ByoMachineDto::GetZone() const
{
	return m_Zone.value();
}

bool ByoMachineDto::HasZone() const
{
	return m_Zone.has_value();
}
void ByoMachineDto::SetZone(const utility::string_t& Value)
{
	m_Zone = Value;
}
utility::string_t ByoMachineDto::GetMachineType() const
{
	return m_MachineType.value();
}

bool ByoMachineDto::HasMachineType() const
{
	return m_MachineType.has_value();
}
void ByoMachineDto::SetMachineType(const utility::string_t& Value)
{
	m_MachineType = Value;
}
utility::string_t ByoMachineDto::GetGpuType() const
{
	return m_GpuType.value();
}

bool ByoMachineDto::HasGpuType() const
{
	return m_GpuType.has_value();
}
void ByoMachineDto::SetGpuType(const utility::string_t& Value)
{
	m_GpuType = Value;
}
int32_t ByoMachineDto::GetGpuCount() const
{
	return m_GpuCount.value();
}

bool ByoMachineDto::HasGpuCount() const
{
	return m_GpuCount.has_value();
}
void ByoMachineDto::SetGpuCount(int32_t Value)
{
	m_GpuCount = Value;
}
utility::string_t ByoMachineDto::GetServiceAccountEmail() const
{
	return m_ServiceAccountEmail.value();
}

bool ByoMachineDto::HasServiceAccountEmail() const
{
	return m_ServiceAccountEmail.has_value();
}
void ByoMachineDto::SetServiceAccountEmail(const utility::string_t& Value)
{
	m_ServiceAccountEmail = Value;
}
const std::vector<utility::string_t>& ByoMachineDto::GetNetworkTags() const
{
	return m_NetworkTags.value();
}

bool ByoMachineDto::HasNetworkTags() const
{
	return m_NetworkTags.has_value();
}
void ByoMachineDto::SetNetworkTags(const std::vector<utility::string_t>& Value)
{
	m_NetworkTags = Value;
}
const std::map<utility::string_t, utility::string_t>& ByoMachineDto::GetLabels() const
{
	return m_Labels.value();
}

bool ByoMachineDto::HasLabels() const
{
	return m_Labels.has_value();
}
void ByoMachineDto::SetLabels(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Labels = Value;
}
utility::string_t ByoMachineDto::GetInternalIp() const
{
	return m_InternalIp.value();
}

bool ByoMachineDto::HasInternalIp() const
{
	return m_InternalIp.has_value();
}
void ByoMachineDto::SetInternalIp(const utility::string_t& Value)
{
	m_InternalIp = Value;
}
utility::string_t ByoMachineDto::GetExternalIp() const
{
	return m_ExternalIp.value();
}

bool ByoMachineDto::HasExternalIp() const
{
	return m_ExternalIp.has_value();
}
void ByoMachineDto::SetExternalIp(const utility::string_t& Value)
{
	m_ExternalIp = Value;
}
utility::string_t ByoMachineDto::GetGcpStatus() const
{
	return m_GcpStatus.value();
}

bool ByoMachineDto::HasGcpStatus() const
{
	return m_GcpStatus.has_value();
}
void ByoMachineDto::SetGcpStatus(const utility::string_t& Value)
{
	m_GcpStatus = Value;
}
utility::string_t ByoMachineDto::GetGcpCreatedAt() const
{
	return m_GcpCreatedAt.value();
}

bool ByoMachineDto::HasGcpCreatedAt() const
{
	return m_GcpCreatedAt.has_value();
}
void ByoMachineDto::SetGcpCreatedAt(const utility::string_t& Value)
{
	m_GcpCreatedAt = Value;
}
utility::string_t ByoMachineDto::GetLastStartedAt() const
{
	return m_LastStartedAt.value();
}

bool ByoMachineDto::HasLastStartedAt() const
{
	return m_LastStartedAt.has_value();
}
void ByoMachineDto::SetLastStartedAt(const utility::string_t& Value)
{
	m_LastStartedAt = Value;
}
utility::string_t ByoMachineDto::GetLastStoppedAt() const
{
	return m_LastStoppedAt.value();
}

bool ByoMachineDto::HasLastStoppedAt() const
{
	return m_LastStoppedAt.has_value();
}
void ByoMachineDto::SetLastStoppedAt(const utility::string_t& Value)
{
	m_LastStoppedAt = Value;
}
utility::string_t ByoMachineDto::GetOrigin() const
{
	return m_Origin.value();
}

bool ByoMachineDto::HasOrigin() const
{
	return m_Origin.has_value();
}
void ByoMachineDto::SetOrigin(const utility::string_t& Value)
{
	m_Origin = Value;
}
utility::string_t ByoMachineDto::GetPresence() const
{
	return m_Presence.value();
}

bool ByoMachineDto::HasPresence() const
{
	return m_Presence.has_value();
}
void ByoMachineDto::SetPresence(const utility::string_t& Value)
{
	m_Presence = Value;
}
bool ByoMachineDto::GetIsOrphan() const
{
	return m_IsOrphan.value();
}

bool ByoMachineDto::HasIsOrphan() const
{
	return m_IsOrphan.has_value();
}
void ByoMachineDto::SetIsOrphan(const bool& Value)
{
	m_IsOrphan = Value;
}
const std::vector<utility::string_t>& ByoMachineDto::GetMatchedBy() const
{
	return m_MatchedBy.value();
}

bool ByoMachineDto::HasMatchedBy() const
{
	return m_MatchedBy.has_value();
}
void ByoMachineDto::SetMatchedBy(const std::vector<utility::string_t>& Value)
{
	m_MatchedBy = Value;
}
utility::string_t ByoMachineDto::GetFirstSeenAt() const
{
	return m_FirstSeenAt.value();
}

bool ByoMachineDto::HasFirstSeenAt() const
{
	return m_FirstSeenAt.has_value();
}
void ByoMachineDto::SetFirstSeenAt(const utility::string_t& Value)
{
	m_FirstSeenAt = Value;
}
utility::string_t ByoMachineDto::GetLastSeenAt() const
{
	return m_LastSeenAt.value();
}

bool ByoMachineDto::HasLastSeenAt() const
{
	return m_LastSeenAt.has_value();
}
void ByoMachineDto::SetLastSeenAt(const utility::string_t& Value)
{
	m_LastSeenAt = Value;
}
utility::string_t ByoMachineDto::GetGoneAt() const
{
	return m_GoneAt.value();
}

bool ByoMachineDto::HasGoneAt() const
{
	return m_GoneAt.has_value();
}
void ByoMachineDto::SetGoneAt(const utility::string_t& Value)
{
	m_GoneAt = Value;
}
utility::string_t ByoMachineDto::GetRequestedByEmail() const
{
	return m_RequestedByEmail.value();
}

bool ByoMachineDto::HasRequestedByEmail() const
{
	return m_RequestedByEmail.has_value();
}
void ByoMachineDto::SetRequestedByEmail(const utility::string_t& Value)
{
	m_RequestedByEmail = Value;
}
utility::string_t ByoMachineDto::GetRequestedAt() const
{
	return m_RequestedAt.value();
}

bool ByoMachineDto::HasRequestedAt() const
{
	return m_RequestedAt.has_value();
}
void ByoMachineDto::SetRequestedAt(const utility::string_t& Value)
{
	m_RequestedAt = Value;
}
utility::string_t ByoMachineDto::GetPurpose() const
{
	return m_Purpose.value();
}

bool ByoMachineDto::HasPurpose() const
{
	return m_Purpose.has_value();
}
void ByoMachineDto::SetPurpose(const utility::string_t& Value)
{
	m_Purpose = Value;
}
utility::string_t ByoMachineDto::GetTemplate() const
{
	return m_Template.value();
}

bool ByoMachineDto::HasTemplate() const
{
	return m_Template.has_value();
}
void ByoMachineDto::SetTemplate(const utility::string_t& Value)
{
	m_Template = Value;
}
utility::string_t ByoMachineDto::GetImageVersion() const
{
	return m_ImageVersion.value();
}

bool ByoMachineDto::HasImageVersion() const
{
	return m_ImageVersion.has_value();
}
void ByoMachineDto::SetImageVersion(const utility::string_t& Value)
{
	m_ImageVersion = Value;
}
utility::string_t ByoMachineDto::GetNodeDefinitionsVersion() const
{
	return m_NodeDefinitionsVersion.value();
}

bool ByoMachineDto::HasNodeDefinitionsVersion() const
{
	return m_NodeDefinitionsVersion.has_value();
}
void ByoMachineDto::SetNodeDefinitionsVersion(const utility::string_t& Value)
{
	m_NodeDefinitionsVersion = Value;
}
utility::string_t ByoMachineDto::GetLeaseExpiresAt() const
{
	return m_LeaseExpiresAt.value();
}

bool ByoMachineDto::HasLeaseExpiresAt() const
{
	return m_LeaseExpiresAt.has_value();
}
void ByoMachineDto::SetLeaseExpiresAt(const utility::string_t& Value)
{
	m_LeaseExpiresAt = Value;
}
bool ByoMachineDto::GetIsPastLease() const
{
	return m_IsPastLease.value();
}

bool ByoMachineDto::HasIsPastLease() const
{
	return m_IsPastLease.has_value();
}
void ByoMachineDto::SetIsPastLease(const bool& Value)
{
	m_IsPastLease = Value;
}
utility::string_t ByoMachineDto::GetActiveJobAction() const
{
	return m_ActiveJobAction.value();
}

bool ByoMachineDto::HasActiveJobAction() const
{
	return m_ActiveJobAction.has_value();
}
void ByoMachineDto::SetActiveJobAction(const utility::string_t& Value)
{
	m_ActiveJobAction = Value;
}
std::shared_ptr<ByoMachineJobDto> ByoMachineDto::GetActiveJob() const
{
	return m_ActiveJob.value();
}

bool ByoMachineDto::HasActiveJob() const
{
	return m_ActiveJob.has_value();
}
void ByoMachineDto::SetActiveJob(const std::shared_ptr<ByoMachineJobDto>& Value)
{
	m_ActiveJob = Value;
}
std::shared_ptr<ByoMachineJobSummaryDto> ByoMachineDto::GetLastJob() const
{
	return m_LastJob.value();
}

bool ByoMachineDto::HasLastJob() const
{
	return m_LastJob.has_value();
}
void ByoMachineDto::SetLastJob(const std::shared_ptr<ByoMachineJobSummaryDto>& Value)
{
	m_LastJob = Value;
}

ByoMachineDtoDataPage::ByoMachineDtoDataPage()
{
}
ByoMachineDtoDataPage::~ByoMachineDtoDataPage()
{
}

utility::string_t ByoMachineDtoDataPage::ToJson() const
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

void ByoMachineDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<ByoMachineDto>>& ByoMachineDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ByoMachineDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ByoMachineDtoDataPage::SetItems(const std::vector<std::shared_ptr<ByoMachineDto>>& Value)
{
	m_Items = Value;
}
int32_t ByoMachineDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ByoMachineDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ByoMachineDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ByoMachineDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ByoMachineDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ByoMachineDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ByoMachineDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ByoMachineDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ByoMachineDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ByoMachineDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ByoMachineDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ByoMachineDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ByoMachineJobDto::ByoMachineJobDto()
{
}
ByoMachineJobDto::~ByoMachineJobDto()
{
}

utility::string_t ByoMachineJobDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_Action.has_value())
	{
		rapidjson::Value ActionValue(TypeToJsonValue(m_Action, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("action", ActionValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_Step.has_value())
	{
		rapidjson::Value StepValue(TypeToJsonValue(m_Step, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("step", StepValue, JsonDoc.GetAllocator());
	}

	if (m_Round.has_value())
	{
		rapidjson::Value RoundValue(TypeToJsonValue(m_Round, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("round", RoundValue, JsonDoc.GetAllocator());
	}

	if (m_Rounds.has_value())
	{
		rapidjson::Value RoundsValue(TypeToJsonValue(m_Rounds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("rounds", RoundsValue, JsonDoc.GetAllocator());
	}

	if (m_NextAttemptAt.has_value())
	{
		rapidjson::Value NextAttemptAtValue(TypeToJsonValue(m_NextAttemptAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nextAttemptAt", NextAttemptAtValue, JsonDoc.GetAllocator());
	}

	if (m_CurrentZone.has_value())
	{
		rapidjson::Value CurrentZoneValue(TypeToJsonValue(m_CurrentZone, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("currentZone", CurrentZoneValue, JsonDoc.GetAllocator());
	}

	if (m_ZonesTried.has_value())
	{
		rapidjson::Value ZonesTriedValue(TypeToJsonValue(m_ZonesTried, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("zonesTried", ZonesTriedValue, JsonDoc.GetAllocator());
	}

	if (m_ZonesPerRound.has_value())
	{
		rapidjson::Value ZonesPerRoundValue(TypeToJsonValue(m_ZonesPerRound, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("zonesPerRound", ZonesPerRoundValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}

	if (m_CancelRequested.has_value())
	{
		rapidjson::Value CancelRequestedValue(TypeToJsonValue(m_CancelRequested, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cancelRequested", CancelRequestedValue, JsonDoc.GetAllocator());
	}

	if (m_RequestedByEmail.has_value())
	{
		rapidjson::Value RequestedByEmailValue(TypeToJsonValue(m_RequestedByEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("requestedByEmail", RequestedByEmailValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_FinishedAt.has_value())
	{
		rapidjson::Value FinishedAtValue(TypeToJsonValue(m_FinishedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("finishedAt", FinishedAtValue, JsonDoc.GetAllocator());
	}

	if (m_Notes.has_value())
	{
		rapidjson::Value NotesValue(TypeToJsonValue(m_Notes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("notes", NotesValue, JsonDoc.GetAllocator());
	}

	if (m_Attempts.has_value())
	{
		rapidjson::Value AttemptsValue(TypeToJsonValue(m_Attempts, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("attempts", AttemptsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoMachineJobDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineJobDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("action"))
	{
		const rapidjson::Value& ActionValue = JsonDoc["action"];

		if (ActionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActionValue, m_Action, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("step"))
	{
		const rapidjson::Value& StepValue = JsonDoc["step"];

		if (StepValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StepValue, m_Step, LogSystem);
		}
	}

	if (JsonDoc.HasMember("round"))
	{
		const rapidjson::Value& RoundValue = JsonDoc["round"];

		if (RoundValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoundValue, m_Round, LogSystem);
		}
	}

	if (JsonDoc.HasMember("rounds"))
	{
		const rapidjson::Value& RoundsValue = JsonDoc["rounds"];

		if (RoundsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoundsValue, m_Rounds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("nextAttemptAt"))
	{
		const rapidjson::Value& NextAttemptAtValue = JsonDoc["nextAttemptAt"];

		if (NextAttemptAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NextAttemptAtValue, m_NextAttemptAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member nextAttemptAt is null!");
		}
	}

	if (JsonDoc.HasMember("currentZone"))
	{
		const rapidjson::Value& CurrentZoneValue = JsonDoc["currentZone"];

		if (CurrentZoneValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentZoneValue, m_CurrentZone, LogSystem);
		}
	}

	if (JsonDoc.HasMember("zonesTried"))
	{
		const rapidjson::Value& ZonesTriedValue = JsonDoc["zonesTried"];

		if (ZonesTriedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZonesTriedValue, m_ZonesTried, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member zonesTried is null!");
		}
	}

	if (JsonDoc.HasMember("zonesPerRound"))
	{
		const rapidjson::Value& ZonesPerRoundValue = JsonDoc["zonesPerRound"];

		if (ZonesPerRoundValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ZonesPerRoundValue, m_ZonesPerRound, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member zonesPerRound is null!");
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member error is null!");
		}
	}

	if (JsonDoc.HasMember("cancelRequested"))
	{
		const rapidjson::Value& CancelRequestedValue = JsonDoc["cancelRequested"];

		if (CancelRequestedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CancelRequestedValue, m_CancelRequested, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member cancelRequested is null!");
		}
	}

	if (JsonDoc.HasMember("requestedByEmail"))
	{
		const rapidjson::Value& RequestedByEmailValue = JsonDoc["requestedByEmail"];

		if (RequestedByEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequestedByEmailValue, m_RequestedByEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("finishedAt"))
	{
		const rapidjson::Value& FinishedAtValue = JsonDoc["finishedAt"];

		if (FinishedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FinishedAtValue, m_FinishedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("notes"))
	{
		const rapidjson::Value& NotesValue = JsonDoc["notes"];

		if (NotesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NotesValue, m_Notes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("attempts"))
	{
		const rapidjson::Value& AttemptsValue = JsonDoc["attempts"];

		if (AttemptsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AttemptsValue, m_Attempts, LogSystem);
		}
	}
}


utility::string_t ByoMachineJobDto::GetId() const
{
	return m_Id.value();
}

bool ByoMachineJobDto::HasId() const
{
	return m_Id.has_value();
}
void ByoMachineJobDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ByoMachineJobDto::GetAction() const
{
	return m_Action.value();
}

bool ByoMachineJobDto::HasAction() const
{
	return m_Action.has_value();
}
void ByoMachineJobDto::SetAction(const utility::string_t& Value)
{
	m_Action = Value;
}
utility::string_t ByoMachineJobDto::GetState() const
{
	return m_State.value();
}

bool ByoMachineJobDto::HasState() const
{
	return m_State.has_value();
}
void ByoMachineJobDto::SetState(const utility::string_t& Value)
{
	m_State = Value;
}
utility::string_t ByoMachineJobDto::GetStep() const
{
	return m_Step.value();
}

bool ByoMachineJobDto::HasStep() const
{
	return m_Step.has_value();
}
void ByoMachineJobDto::SetStep(const utility::string_t& Value)
{
	m_Step = Value;
}
int32_t ByoMachineJobDto::GetRound() const
{
	return m_Round.value();
}

bool ByoMachineJobDto::HasRound() const
{
	return m_Round.has_value();
}
void ByoMachineJobDto::SetRound(int32_t Value)
{
	m_Round = Value;
}
int32_t ByoMachineJobDto::GetRounds() const
{
	return m_Rounds.value();
}

bool ByoMachineJobDto::HasRounds() const
{
	return m_Rounds.has_value();
}
void ByoMachineJobDto::SetRounds(int32_t Value)
{
	m_Rounds = Value;
}
utility::string_t ByoMachineJobDto::GetNextAttemptAt() const
{
	return m_NextAttemptAt.value();
}

bool ByoMachineJobDto::HasNextAttemptAt() const
{
	return m_NextAttemptAt.has_value();
}
void ByoMachineJobDto::SetNextAttemptAt(const utility::string_t& Value)
{
	m_NextAttemptAt = Value;
}
utility::string_t ByoMachineJobDto::GetCurrentZone() const
{
	return m_CurrentZone.value();
}

bool ByoMachineJobDto::HasCurrentZone() const
{
	return m_CurrentZone.has_value();
}
void ByoMachineJobDto::SetCurrentZone(const utility::string_t& Value)
{
	m_CurrentZone = Value;
}
int32_t ByoMachineJobDto::GetZonesTried() const
{
	return m_ZonesTried.value();
}

bool ByoMachineJobDto::HasZonesTried() const
{
	return m_ZonesTried.has_value();
}
void ByoMachineJobDto::SetZonesTried(int32_t Value)
{
	m_ZonesTried = Value;
}
int32_t ByoMachineJobDto::GetZonesPerRound() const
{
	return m_ZonesPerRound.value();
}

bool ByoMachineJobDto::HasZonesPerRound() const
{
	return m_ZonesPerRound.has_value();
}
void ByoMachineJobDto::SetZonesPerRound(int32_t Value)
{
	m_ZonesPerRound = Value;
}
std::shared_ptr<ByoMachineJobErrorDto> ByoMachineJobDto::GetError() const
{
	return m_Error.value();
}

bool ByoMachineJobDto::HasError() const
{
	return m_Error.has_value();
}
void ByoMachineJobDto::SetError(const std::shared_ptr<ByoMachineJobErrorDto>& Value)
{
	m_Error = Value;
}
bool ByoMachineJobDto::GetCancelRequested() const
{
	return m_CancelRequested.value();
}

bool ByoMachineJobDto::HasCancelRequested() const
{
	return m_CancelRequested.has_value();
}
void ByoMachineJobDto::SetCancelRequested(const bool& Value)
{
	m_CancelRequested = Value;
}
utility::string_t ByoMachineJobDto::GetRequestedByEmail() const
{
	return m_RequestedByEmail.value();
}

bool ByoMachineJobDto::HasRequestedByEmail() const
{
	return m_RequestedByEmail.has_value();
}
void ByoMachineJobDto::SetRequestedByEmail(const utility::string_t& Value)
{
	m_RequestedByEmail = Value;
}
utility::string_t ByoMachineJobDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ByoMachineJobDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void ByoMachineJobDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t ByoMachineJobDto::GetFinishedAt() const
{
	return m_FinishedAt.value();
}

bool ByoMachineJobDto::HasFinishedAt() const
{
	return m_FinishedAt.has_value();
}
void ByoMachineJobDto::SetFinishedAt(const utility::string_t& Value)
{
	m_FinishedAt = Value;
}
const std::vector<utility::string_t>& ByoMachineJobDto::GetNotes() const
{
	return m_Notes.value();
}

bool ByoMachineJobDto::HasNotes() const
{
	return m_Notes.has_value();
}
void ByoMachineJobDto::SetNotes(const std::vector<utility::string_t>& Value)
{
	m_Notes = Value;
}
const std::vector<std::shared_ptr<ByoMachineAttemptDto>>& ByoMachineJobDto::GetAttempts() const
{
	return m_Attempts.value();
}

bool ByoMachineJobDto::HasAttempts() const
{
	return m_Attempts.has_value();
}
void ByoMachineJobDto::SetAttempts(const std::vector<std::shared_ptr<ByoMachineAttemptDto>>& Value)
{
	m_Attempts = Value;
}

ByoMachineJobErrorDto::ByoMachineJobErrorDto()
{
}
ByoMachineJobErrorDto::~ByoMachineJobErrorDto()
{
}

utility::string_t ByoMachineJobErrorDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_Class.has_value())
	{
		rapidjson::Value ClassValue(TypeToJsonValue(m_Class, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("class", ClassValue, JsonDoc.GetAllocator());
	}

	if (m_OurSide.has_value())
	{
		rapidjson::Value OurSideValue(TypeToJsonValue(m_OurSide, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ourSide", OurSideValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoMachineJobErrorDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineJobErrorDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
		}
	}

	if (JsonDoc.HasMember("class"))
	{
		const rapidjson::Value& ClassValue = JsonDoc["class"];

		if (ClassValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClassValue, m_Class, LogSystem);
		}
	}

	if (JsonDoc.HasMember("ourSide"))
	{
		const rapidjson::Value& OurSideValue = JsonDoc["ourSide"];

		if (OurSideValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OurSideValue, m_OurSide, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member ourSide is null!");
		}
	}
}


utility::string_t ByoMachineJobErrorDto::GetMessage() const
{
	return m_Message.value();
}

bool ByoMachineJobErrorDto::HasMessage() const
{
	return m_Message.has_value();
}
void ByoMachineJobErrorDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
utility::string_t ByoMachineJobErrorDto::GetClass() const
{
	return m_Class.value();
}

bool ByoMachineJobErrorDto::HasClass() const
{
	return m_Class.has_value();
}
void ByoMachineJobErrorDto::SetClass(const utility::string_t& Value)
{
	m_Class = Value;
}
bool ByoMachineJobErrorDto::GetOurSide() const
{
	return m_OurSide.value();
}

bool ByoMachineJobErrorDto::HasOurSide() const
{
	return m_OurSide.has_value();
}
void ByoMachineJobErrorDto::SetOurSide(const bool& Value)
{
	m_OurSide = Value;
}

ByoMachineJobSummaryDto::ByoMachineJobSummaryDto()
{
}
ByoMachineJobSummaryDto::~ByoMachineJobSummaryDto()
{
}

utility::string_t ByoMachineJobSummaryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_JobId.has_value())
	{
		rapidjson::Value JobIdValue(TypeToJsonValue(m_JobId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("jobId", JobIdValue, JsonDoc.GetAllocator());
	}

	if (m_Action.has_value())
	{
		rapidjson::Value ActionValue(TypeToJsonValue(m_Action, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("action", ActionValue, JsonDoc.GetAllocator());
	}

	if (m_Outcome.has_value())
	{
		rapidjson::Value OutcomeValue(TypeToJsonValue(m_Outcome, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("outcome", OutcomeValue, JsonDoc.GetAllocator());
	}

	if (m_Error.has_value())
	{
		rapidjson::Value ErrorValue(TypeToJsonValue(m_Error, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("error", ErrorValue, JsonDoc.GetAllocator());
	}

	if (m_FinishedAt.has_value())
	{
		rapidjson::Value FinishedAtValue(TypeToJsonValue(m_FinishedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("finishedAt", FinishedAtValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoMachineJobSummaryDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoMachineJobSummaryDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("jobId"))
	{
		const rapidjson::Value& JobIdValue = JsonDoc["jobId"];

		if (JobIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(JobIdValue, m_JobId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("action"))
	{
		const rapidjson::Value& ActionValue = JsonDoc["action"];

		if (ActionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ActionValue, m_Action, LogSystem);
		}
	}

	if (JsonDoc.HasMember("outcome"))
	{
		const rapidjson::Value& OutcomeValue = JsonDoc["outcome"];

		if (OutcomeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutcomeValue, m_Outcome, LogSystem);
		}
	}

	if (JsonDoc.HasMember("error"))
	{
		const rapidjson::Value& ErrorValue = JsonDoc["error"];

		if (ErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorValue, m_Error, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member error is null!");
		}
	}

	if (JsonDoc.HasMember("finishedAt"))
	{
		const rapidjson::Value& FinishedAtValue = JsonDoc["finishedAt"];

		if (FinishedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FinishedAtValue, m_FinishedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member finishedAt is null!");
		}
	}
}


utility::string_t ByoMachineJobSummaryDto::GetJobId() const
{
	return m_JobId.value();
}

bool ByoMachineJobSummaryDto::HasJobId() const
{
	return m_JobId.has_value();
}
void ByoMachineJobSummaryDto::SetJobId(const utility::string_t& Value)
{
	m_JobId = Value;
}
utility::string_t ByoMachineJobSummaryDto::GetAction() const
{
	return m_Action.value();
}

bool ByoMachineJobSummaryDto::HasAction() const
{
	return m_Action.has_value();
}
void ByoMachineJobSummaryDto::SetAction(const utility::string_t& Value)
{
	m_Action = Value;
}
utility::string_t ByoMachineJobSummaryDto::GetOutcome() const
{
	return m_Outcome.value();
}

bool ByoMachineJobSummaryDto::HasOutcome() const
{
	return m_Outcome.has_value();
}
void ByoMachineJobSummaryDto::SetOutcome(const utility::string_t& Value)
{
	m_Outcome = Value;
}
std::shared_ptr<ByoMachineJobErrorDto> ByoMachineJobSummaryDto::GetError() const
{
	return m_Error.value();
}

bool ByoMachineJobSummaryDto::HasError() const
{
	return m_Error.has_value();
}
void ByoMachineJobSummaryDto::SetError(const std::shared_ptr<ByoMachineJobErrorDto>& Value)
{
	m_Error = Value;
}
utility::string_t ByoMachineJobSummaryDto::GetFinishedAt() const
{
	return m_FinishedAt.value();
}

bool ByoMachineJobSummaryDto::HasFinishedAt() const
{
	return m_FinishedAt.has_value();
}
void ByoMachineJobSummaryDto::SetFinishedAt(const utility::string_t& Value)
{
	m_FinishedAt = Value;
}

ByoOperatorDetailsDto::ByoOperatorDetailsDto()
{
}
ByoOperatorDetailsDto::~ByoOperatorDetailsDto()
{
}

utility::string_t ByoOperatorDetailsDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Project.has_value())
	{
		rapidjson::Value ProjectValue(TypeToJsonValue(m_Project, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("project", ProjectValue, JsonDoc.GetAllocator());
	}

	if (m_OperatorServiceAccountEmail.has_value())
	{
		rapidjson::Value OperatorServiceAccountEmailValue(TypeToJsonValue(m_OperatorServiceAccountEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operatorServiceAccountEmail", OperatorServiceAccountEmailValue, JsonDoc.GetAllocator());
	}

	if (m_OperatorMember.has_value())
	{
		rapidjson::Value OperatorMemberValue(TypeToJsonValue(m_OperatorMember, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operatorMember", OperatorMemberValue, JsonDoc.GetAllocator());
	}

	if (m_ModuleSource.has_value())
	{
		rapidjson::Value ModuleSourceValue(TypeToJsonValue(m_ModuleSource, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("moduleSource", ModuleSourceValue, JsonDoc.GetAllocator());
	}

	if (m_ModuleVersion.has_value())
	{
		rapidjson::Value ModuleVersionValue(TypeToJsonValue(m_ModuleVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("moduleVersion", ModuleVersionValue, JsonDoc.GetAllocator());
	}

	if (m_ModuleReadmeUrl.has_value())
	{
		rapidjson::Value ModuleReadmeUrlValue(TypeToJsonValue(m_ModuleReadmeUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("moduleReadmeUrl", ModuleReadmeUrlValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoOperatorDetailsDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoOperatorDetailsDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member project is null!");
		}
	}

	if (JsonDoc.HasMember("operatorServiceAccountEmail"))
	{
		const rapidjson::Value& OperatorServiceAccountEmailValue = JsonDoc["operatorServiceAccountEmail"];

		if (OperatorServiceAccountEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperatorServiceAccountEmailValue, m_OperatorServiceAccountEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("operatorMember"))
	{
		const rapidjson::Value& OperatorMemberValue = JsonDoc["operatorMember"];

		if (OperatorMemberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperatorMemberValue, m_OperatorMember, LogSystem);
		}
	}

	if (JsonDoc.HasMember("moduleSource"))
	{
		const rapidjson::Value& ModuleSourceValue = JsonDoc["moduleSource"];

		if (ModuleSourceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModuleSourceValue, m_ModuleSource, LogSystem);
		}
	}

	if (JsonDoc.HasMember("moduleVersion"))
	{
		const rapidjson::Value& ModuleVersionValue = JsonDoc["moduleVersion"];

		if (ModuleVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModuleVersionValue, m_ModuleVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("moduleReadmeUrl"))
	{
		const rapidjson::Value& ModuleReadmeUrlValue = JsonDoc["moduleReadmeUrl"];

		if (ModuleReadmeUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModuleReadmeUrlValue, m_ModuleReadmeUrl, LogSystem);
		}
	}
}


std::shared_ptr<ByoProjectDto> ByoOperatorDetailsDto::GetProject() const
{
	return m_Project.value();
}

bool ByoOperatorDetailsDto::HasProject() const
{
	return m_Project.has_value();
}
void ByoOperatorDetailsDto::SetProject(const std::shared_ptr<ByoProjectDto>& Value)
{
	m_Project = Value;
}
utility::string_t ByoOperatorDetailsDto::GetOperatorServiceAccountEmail() const
{
	return m_OperatorServiceAccountEmail.value();
}

bool ByoOperatorDetailsDto::HasOperatorServiceAccountEmail() const
{
	return m_OperatorServiceAccountEmail.has_value();
}
void ByoOperatorDetailsDto::SetOperatorServiceAccountEmail(const utility::string_t& Value)
{
	m_OperatorServiceAccountEmail = Value;
}
utility::string_t ByoOperatorDetailsDto::GetOperatorMember() const
{
	return m_OperatorMember.value();
}

bool ByoOperatorDetailsDto::HasOperatorMember() const
{
	return m_OperatorMember.has_value();
}
void ByoOperatorDetailsDto::SetOperatorMember(const utility::string_t& Value)
{
	m_OperatorMember = Value;
}
utility::string_t ByoOperatorDetailsDto::GetModuleSource() const
{
	return m_ModuleSource.value();
}

bool ByoOperatorDetailsDto::HasModuleSource() const
{
	return m_ModuleSource.has_value();
}
void ByoOperatorDetailsDto::SetModuleSource(const utility::string_t& Value)
{
	m_ModuleSource = Value;
}
utility::string_t ByoOperatorDetailsDto::GetModuleVersion() const
{
	return m_ModuleVersion.value();
}

bool ByoOperatorDetailsDto::HasModuleVersion() const
{
	return m_ModuleVersion.has_value();
}
void ByoOperatorDetailsDto::SetModuleVersion(const utility::string_t& Value)
{
	m_ModuleVersion = Value;
}
utility::string_t ByoOperatorDetailsDto::GetModuleReadmeUrl() const
{
	return m_ModuleReadmeUrl.value();
}

bool ByoOperatorDetailsDto::HasModuleReadmeUrl() const
{
	return m_ModuleReadmeUrl.has_value();
}
void ByoOperatorDetailsDto::SetModuleReadmeUrl(const utility::string_t& Value)
{
	m_ModuleReadmeUrl = Value;
}

ByoOutputFieldErrorDto::ByoOutputFieldErrorDto()
{
}
ByoOutputFieldErrorDto::~ByoOutputFieldErrorDto()
{
}

utility::string_t ByoOutputFieldErrorDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Field.has_value())
	{
		rapidjson::Value FieldValue(TypeToJsonValue(m_Field, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("field", FieldValue, JsonDoc.GetAllocator());
	}

	if (m_Problem.has_value())
	{
		rapidjson::Value ProblemValue(TypeToJsonValue(m_Problem, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("problem", ProblemValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoOutputFieldErrorDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoOutputFieldErrorDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("field"))
	{
		const rapidjson::Value& FieldValue = JsonDoc["field"];

		if (FieldValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FieldValue, m_Field, LogSystem);
		}
	}

	if (JsonDoc.HasMember("problem"))
	{
		const rapidjson::Value& ProblemValue = JsonDoc["problem"];

		if (ProblemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProblemValue, m_Problem, LogSystem);
		}
	}
}


utility::string_t ByoOutputFieldErrorDto::GetField() const
{
	return m_Field.value();
}

bool ByoOutputFieldErrorDto::HasField() const
{
	return m_Field.has_value();
}
void ByoOutputFieldErrorDto::SetField(const utility::string_t& Value)
{
	m_Field = Value;
}
utility::string_t ByoOutputFieldErrorDto::GetProblem() const
{
	return m_Problem.value();
}

bool ByoOutputFieldErrorDto::HasProblem() const
{
	return m_Problem.has_value();
}
void ByoOutputFieldErrorDto::SetProblem(const utility::string_t& Value)
{
	m_Problem = Value;
}

ByoProjectDto::ByoProjectDto()
{
}
ByoProjectDto::~ByoProjectDto()
{
}

utility::string_t ByoProjectDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Id.has_value())
	{
		rapidjson::Value IdValue(TypeToJsonValue(m_Id, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("id", IdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_GcpProjectId.has_value())
	{
		rapidjson::Value GcpProjectIdValue(TypeToJsonValue(m_GcpProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpProjectId", GcpProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_State.has_value())
	{
		rapidjson::Value StateValue(TypeToJsonValue(m_State, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("state", StateValue, JsonDoc.GetAllocator());
	}

	if (m_OperatorServiceAccountEmail.has_value())
	{
		rapidjson::Value OperatorServiceAccountEmailValue(TypeToJsonValue(m_OperatorServiceAccountEmail, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("operatorServiceAccountEmail", OperatorServiceAccountEmailValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAt.has_value())
	{
		rapidjson::Value CreatedAtValue(TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAt", CreatedAtValue, JsonDoc.GetAllocator());
	}

	if (m_StateChangedAt.has_value())
	{
		rapidjson::Value StateChangedAtValue(TypeToJsonValue(m_StateChangedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("stateChangedAt", StateChangedAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastError.has_value())
	{
		rapidjson::Value LastErrorValue(TypeToJsonValue(m_LastError, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastError", LastErrorValue, JsonDoc.GetAllocator());
	}

	if (m_Handover.has_value())
	{
		rapidjson::Value HandoverValue(TypeToJsonValue(m_Handover, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("handover", HandoverValue, JsonDoc.GetAllocator());
	}

	if (m_OutputValidationErrors.has_value())
	{
		rapidjson::Value OutputValidationErrorsValue(TypeToJsonValue(m_OutputValidationErrors, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("outputValidationErrors", OutputValidationErrorsValue, JsonDoc.GetAllocator());
	}

	if (m_TerraformOutputSubmittedAt.has_value())
	{
		rapidjson::Value TerraformOutputSubmittedAtValue(TypeToJsonValue(m_TerraformOutputSubmittedAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("terraformOutputSubmittedAt", TerraformOutputSubmittedAtValue, JsonDoc.GetAllocator());
	}

	if (m_TerraformOutputRaw.has_value())
	{
		rapidjson::Value TerraformOutputRawValue(TypeToJsonValue(m_TerraformOutputRaw, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("terraformOutputRaw", TerraformOutputRawValue, JsonDoc.GetAllocator());
	}

	if (m_LastAccessCheck.has_value())
	{
		rapidjson::Value LastAccessCheckValue(TypeToJsonValue(m_LastAccessCheck, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastAccessCheck", LastAccessCheckValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoProjectDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoProjectDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpProjectId"))
	{
		const rapidjson::Value& GcpProjectIdValue = JsonDoc["gcpProjectId"];

		if (GcpProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpProjectIdValue, m_GcpProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("operatorServiceAccountEmail"))
	{
		const rapidjson::Value& OperatorServiceAccountEmailValue = JsonDoc["operatorServiceAccountEmail"];

		if (OperatorServiceAccountEmailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OperatorServiceAccountEmailValue, m_OperatorServiceAccountEmail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("stateChangedAt"))
	{
		const rapidjson::Value& StateChangedAtValue = JsonDoc["stateChangedAt"];

		if (StateChangedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateChangedAtValue, m_StateChangedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member stateChangedAt is null!");
		}
	}

	if (JsonDoc.HasMember("lastError"))
	{
		const rapidjson::Value& LastErrorValue = JsonDoc["lastError"];

		if (LastErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastErrorValue, m_LastError, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lastError is null!");
		}
	}

	if (JsonDoc.HasMember("handover"))
	{
		const rapidjson::Value& HandoverValue = JsonDoc["handover"];

		if (HandoverValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HandoverValue, m_Handover, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member handover is null!");
		}
	}

	if (JsonDoc.HasMember("outputValidationErrors"))
	{
		const rapidjson::Value& OutputValidationErrorsValue = JsonDoc["outputValidationErrors"];

		if (OutputValidationErrorsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutputValidationErrorsValue, m_OutputValidationErrors, LogSystem);
		}
	}

	if (JsonDoc.HasMember("terraformOutputSubmittedAt"))
	{
		const rapidjson::Value& TerraformOutputSubmittedAtValue = JsonDoc["terraformOutputSubmittedAt"];

		if (TerraformOutputSubmittedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TerraformOutputSubmittedAtValue, m_TerraformOutputSubmittedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("terraformOutputRaw"))
	{
		const rapidjson::Value& TerraformOutputRawValue = JsonDoc["terraformOutputRaw"];

		if (TerraformOutputRawValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TerraformOutputRawValue, m_TerraformOutputRaw, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastAccessCheck"))
	{
		const rapidjson::Value& LastAccessCheckValue = JsonDoc["lastAccessCheck"];

		if (LastAccessCheckValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastAccessCheckValue, m_LastAccessCheck, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lastAccessCheck is null!");
		}
	}
}


utility::string_t ByoProjectDto::GetId() const
{
	return m_Id.value();
}

bool ByoProjectDto::HasId() const
{
	return m_Id.has_value();
}
void ByoProjectDto::SetId(const utility::string_t& Value)
{
	m_Id = Value;
}
utility::string_t ByoProjectDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool ByoProjectDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void ByoProjectDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t ByoProjectDto::GetGcpProjectId() const
{
	return m_GcpProjectId.value();
}

bool ByoProjectDto::HasGcpProjectId() const
{
	return m_GcpProjectId.has_value();
}
void ByoProjectDto::SetGcpProjectId(const utility::string_t& Value)
{
	m_GcpProjectId = Value;
}
utility::string_t ByoProjectDto::GetState() const
{
	return m_State.value();
}

bool ByoProjectDto::HasState() const
{
	return m_State.has_value();
}
void ByoProjectDto::SetState(const utility::string_t& Value)
{
	m_State = Value;
}
utility::string_t ByoProjectDto::GetOperatorServiceAccountEmail() const
{
	return m_OperatorServiceAccountEmail.value();
}

bool ByoProjectDto::HasOperatorServiceAccountEmail() const
{
	return m_OperatorServiceAccountEmail.has_value();
}
void ByoProjectDto::SetOperatorServiceAccountEmail(const utility::string_t& Value)
{
	m_OperatorServiceAccountEmail = Value;
}
utility::string_t ByoProjectDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ByoProjectDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
void ByoProjectDto::SetCreatedAt(const utility::string_t& Value)
{
	m_CreatedAt = Value;
}
utility::string_t ByoProjectDto::GetStateChangedAt() const
{
	return m_StateChangedAt.value();
}

bool ByoProjectDto::HasStateChangedAt() const
{
	return m_StateChangedAt.has_value();
}
void ByoProjectDto::SetStateChangedAt(const utility::string_t& Value)
{
	m_StateChangedAt = Value;
}
std::shared_ptr<ByoSetupErrorDto> ByoProjectDto::GetLastError() const
{
	return m_LastError.value();
}

bool ByoProjectDto::HasLastError() const
{
	return m_LastError.has_value();
}
void ByoProjectDto::SetLastError(const std::shared_ptr<ByoSetupErrorDto>& Value)
{
	m_LastError = Value;
}
std::shared_ptr<ByoHandoverDto> ByoProjectDto::GetHandover() const
{
	return m_Handover.value();
}

bool ByoProjectDto::HasHandover() const
{
	return m_Handover.has_value();
}
void ByoProjectDto::SetHandover(const std::shared_ptr<ByoHandoverDto>& Value)
{
	m_Handover = Value;
}
const std::vector<std::shared_ptr<ByoOutputFieldErrorDto>>& ByoProjectDto::GetOutputValidationErrors() const
{
	return m_OutputValidationErrors.value();
}

bool ByoProjectDto::HasOutputValidationErrors() const
{
	return m_OutputValidationErrors.has_value();
}
void ByoProjectDto::SetOutputValidationErrors(const std::vector<std::shared_ptr<ByoOutputFieldErrorDto>>& Value)
{
	m_OutputValidationErrors = Value;
}
utility::string_t ByoProjectDto::GetTerraformOutputSubmittedAt() const
{
	return m_TerraformOutputSubmittedAt.value();
}

bool ByoProjectDto::HasTerraformOutputSubmittedAt() const
{
	return m_TerraformOutputSubmittedAt.has_value();
}
void ByoProjectDto::SetTerraformOutputSubmittedAt(const utility::string_t& Value)
{
	m_TerraformOutputSubmittedAt = Value;
}
utility::string_t ByoProjectDto::GetTerraformOutputRaw() const
{
	return m_TerraformOutputRaw.value();
}

bool ByoProjectDto::HasTerraformOutputRaw() const
{
	return m_TerraformOutputRaw.has_value();
}
void ByoProjectDto::SetTerraformOutputRaw(const utility::string_t& Value)
{
	m_TerraformOutputRaw = Value;
}
std::shared_ptr<ByoAccessCheckDto> ByoProjectDto::GetLastAccessCheck() const
{
	return m_LastAccessCheck.value();
}

bool ByoProjectDto::HasLastAccessCheck() const
{
	return m_LastAccessCheck.has_value();
}
void ByoProjectDto::SetLastAccessCheck(const std::shared_ptr<ByoAccessCheckDto>& Value)
{
	m_LastAccessCheck = Value;
}

ByoProjectDtoDataPage::ByoProjectDtoDataPage()
{
}
ByoProjectDtoDataPage::~ByoProjectDtoDataPage()
{
}

utility::string_t ByoProjectDtoDataPage::ToJson() const
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

void ByoProjectDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoProjectDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
		}
	}
}


const std::vector<std::shared_ptr<ByoProjectDto>>& ByoProjectDtoDataPage::GetItems() const
{
	return m_Items.value();
}

bool ByoProjectDtoDataPage::HasItems() const
{
	return m_Items.has_value();
}
void ByoProjectDtoDataPage::SetItems(const std::vector<std::shared_ptr<ByoProjectDto>>& Value)
{
	m_Items = Value;
}
int32_t ByoProjectDtoDataPage::GetSkip() const
{
	return m_Skip.value();
}

bool ByoProjectDtoDataPage::HasSkip() const
{
	return m_Skip.has_value();
}
void ByoProjectDtoDataPage::SetSkip(int32_t Value)
{
	m_Skip = Value;
}
int32_t ByoProjectDtoDataPage::GetLimit() const
{
	return m_Limit.value();
}

bool ByoProjectDtoDataPage::HasLimit() const
{
	return m_Limit.has_value();
}
void ByoProjectDtoDataPage::SetLimit(int32_t Value)
{
	m_Limit = Value;
}
int32_t ByoProjectDtoDataPage::GetItemCount() const
{
	return m_ItemCount.value();
}

bool ByoProjectDtoDataPage::HasItemCount() const
{
	return m_ItemCount.has_value();
}
void ByoProjectDtoDataPage::SetItemCount(int32_t Value)
{
	m_ItemCount = Value;
}
int64_t ByoProjectDtoDataPage::GetItemTotalCount() const
{
	return m_ItemTotalCount.value();
}

bool ByoProjectDtoDataPage::HasItemTotalCount() const
{
	return m_ItemTotalCount.has_value();
}
void ByoProjectDtoDataPage::SetItemTotalCount(int64_t Value)
{
	m_ItemTotalCount = Value;
}

ByoProjectInventoryDto::ByoProjectInventoryDto()
{
}
ByoProjectInventoryDto::~ByoProjectInventoryDto()
{
}

utility::string_t ByoProjectInventoryDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ProjectRecordId.has_value())
	{
		rapidjson::Value ProjectRecordIdValue(TypeToJsonValue(m_ProjectRecordId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("projectRecordId", ProjectRecordIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}

	if (m_GcpProjectId.has_value())
	{
		rapidjson::Value GcpProjectIdValue(TypeToJsonValue(m_GcpProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpProjectId", GcpProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_LastSweptAt.has_value())
	{
		rapidjson::Value LastSweptAtValue(TypeToJsonValue(m_LastSweptAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastSweptAt", LastSweptAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastAttemptAt.has_value())
	{
		rapidjson::Value LastAttemptAtValue(TypeToJsonValue(m_LastAttemptAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastAttemptAt", LastAttemptAtValue, JsonDoc.GetAllocator());
	}

	if (m_NextSweepAt.has_value())
	{
		rapidjson::Value NextSweepAtValue(TypeToJsonValue(m_NextSweepAt, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nextSweepAt", NextSweepAtValue, JsonDoc.GetAllocator());
	}

	if (m_LastError.has_value())
	{
		rapidjson::Value LastErrorValue(TypeToJsonValue(m_LastError, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("lastError", LastErrorValue, JsonDoc.GetAllocator());
	}

	if (m_ConsecutiveFailures.has_value())
	{
		rapidjson::Value ConsecutiveFailuresValue(TypeToJsonValue(m_ConsecutiveFailures, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("consecutiveFailures", ConsecutiveFailuresValue, JsonDoc.GetAllocator());
	}

	if (m_UnreachableZones.has_value())
	{
		rapidjson::Value UnreachableZonesValue(TypeToJsonValue(m_UnreachableZones, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("unreachableZones", UnreachableZonesValue, JsonDoc.GetAllocator());
	}

	if (m_PresentCount.has_value())
	{
		rapidjson::Value PresentCountValue(TypeToJsonValue(m_PresentCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("presentCount", PresentCountValue, JsonDoc.GetAllocator());
	}

	if (m_OrphanCount.has_value())
	{
		rapidjson::Value OrphanCountValue(TypeToJsonValue(m_OrphanCount, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("orphanCount", OrphanCountValue, JsonDoc.GetAllocator());
	}

	if (m_IsStale.has_value())
	{
		rapidjson::Value IsStaleValue(TypeToJsonValue(m_IsStale, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isStale", IsStaleValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoProjectInventoryDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoProjectInventoryDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("projectRecordId"))
	{
		const rapidjson::Value& ProjectRecordIdValue = JsonDoc["projectRecordId"];

		if (ProjectRecordIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectRecordIdValue, m_ProjectRecordId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gcpProjectId"))
	{
		const rapidjson::Value& GcpProjectIdValue = JsonDoc["gcpProjectId"];

		if (GcpProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpProjectIdValue, m_GcpProjectId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastSweptAt"))
	{
		const rapidjson::Value& LastSweptAtValue = JsonDoc["lastSweptAt"];

		if (LastSweptAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastSweptAtValue, m_LastSweptAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastAttemptAt"))
	{
		const rapidjson::Value& LastAttemptAtValue = JsonDoc["lastAttemptAt"];

		if (LastAttemptAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastAttemptAtValue, m_LastAttemptAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("nextSweepAt"))
	{
		const rapidjson::Value& NextSweepAtValue = JsonDoc["nextSweepAt"];

		if (NextSweepAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NextSweepAtValue, m_NextSweepAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member nextSweepAt is null!");
		}
	}

	if (JsonDoc.HasMember("lastError"))
	{
		const rapidjson::Value& LastErrorValue = JsonDoc["lastError"];

		if (LastErrorValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastErrorValue, m_LastError, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member lastError is null!");
		}
	}

	if (JsonDoc.HasMember("consecutiveFailures"))
	{
		const rapidjson::Value& ConsecutiveFailuresValue = JsonDoc["consecutiveFailures"];

		if (ConsecutiveFailuresValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConsecutiveFailuresValue, m_ConsecutiveFailures, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member consecutiveFailures is null!");
		}
	}

	if (JsonDoc.HasMember("unreachableZones"))
	{
		const rapidjson::Value& UnreachableZonesValue = JsonDoc["unreachableZones"];

		if (UnreachableZonesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UnreachableZonesValue, m_UnreachableZones, LogSystem);
		}
	}

	if (JsonDoc.HasMember("presentCount"))
	{
		const rapidjson::Value& PresentCountValue = JsonDoc["presentCount"];

		if (PresentCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PresentCountValue, m_PresentCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member presentCount is null!");
		}
	}

	if (JsonDoc.HasMember("orphanCount"))
	{
		const rapidjson::Value& OrphanCountValue = JsonDoc["orphanCount"];

		if (OrphanCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OrphanCountValue, m_OrphanCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member orphanCount is null!");
		}
	}

	if (JsonDoc.HasMember("isStale"))
	{
		const rapidjson::Value& IsStaleValue = JsonDoc["isStale"];

		if (IsStaleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsStaleValue, m_IsStale, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isStale is null!");
		}
	}
}


utility::string_t ByoProjectInventoryDto::GetProjectRecordId() const
{
	return m_ProjectRecordId.value();
}

bool ByoProjectInventoryDto::HasProjectRecordId() const
{
	return m_ProjectRecordId.has_value();
}
void ByoProjectInventoryDto::SetProjectRecordId(const utility::string_t& Value)
{
	m_ProjectRecordId = Value;
}
utility::string_t ByoProjectInventoryDto::GetTenantName() const
{
	return m_TenantName.value();
}

bool ByoProjectInventoryDto::HasTenantName() const
{
	return m_TenantName.has_value();
}
void ByoProjectInventoryDto::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
}
utility::string_t ByoProjectInventoryDto::GetGcpProjectId() const
{
	return m_GcpProjectId.value();
}

bool ByoProjectInventoryDto::HasGcpProjectId() const
{
	return m_GcpProjectId.has_value();
}
void ByoProjectInventoryDto::SetGcpProjectId(const utility::string_t& Value)
{
	m_GcpProjectId = Value;
}
utility::string_t ByoProjectInventoryDto::GetLastSweptAt() const
{
	return m_LastSweptAt.value();
}

bool ByoProjectInventoryDto::HasLastSweptAt() const
{
	return m_LastSweptAt.has_value();
}
void ByoProjectInventoryDto::SetLastSweptAt(const utility::string_t& Value)
{
	m_LastSweptAt = Value;
}
utility::string_t ByoProjectInventoryDto::GetLastAttemptAt() const
{
	return m_LastAttemptAt.value();
}

bool ByoProjectInventoryDto::HasLastAttemptAt() const
{
	return m_LastAttemptAt.has_value();
}
void ByoProjectInventoryDto::SetLastAttemptAt(const utility::string_t& Value)
{
	m_LastAttemptAt = Value;
}
utility::string_t ByoProjectInventoryDto::GetNextSweepAt() const
{
	return m_NextSweepAt.value();
}

bool ByoProjectInventoryDto::HasNextSweepAt() const
{
	return m_NextSweepAt.has_value();
}
void ByoProjectInventoryDto::SetNextSweepAt(const utility::string_t& Value)
{
	m_NextSweepAt = Value;
}
std::shared_ptr<ByoInventoryErrorDto> ByoProjectInventoryDto::GetLastError() const
{
	return m_LastError.value();
}

bool ByoProjectInventoryDto::HasLastError() const
{
	return m_LastError.has_value();
}
void ByoProjectInventoryDto::SetLastError(const std::shared_ptr<ByoInventoryErrorDto>& Value)
{
	m_LastError = Value;
}
int32_t ByoProjectInventoryDto::GetConsecutiveFailures() const
{
	return m_ConsecutiveFailures.value();
}

bool ByoProjectInventoryDto::HasConsecutiveFailures() const
{
	return m_ConsecutiveFailures.has_value();
}
void ByoProjectInventoryDto::SetConsecutiveFailures(int32_t Value)
{
	m_ConsecutiveFailures = Value;
}
const std::vector<utility::string_t>& ByoProjectInventoryDto::GetUnreachableZones() const
{
	return m_UnreachableZones.value();
}

bool ByoProjectInventoryDto::HasUnreachableZones() const
{
	return m_UnreachableZones.has_value();
}
void ByoProjectInventoryDto::SetUnreachableZones(const std::vector<utility::string_t>& Value)
{
	m_UnreachableZones = Value;
}
int64_t ByoProjectInventoryDto::GetPresentCount() const
{
	return m_PresentCount.value();
}

bool ByoProjectInventoryDto::HasPresentCount() const
{
	return m_PresentCount.has_value();
}
void ByoProjectInventoryDto::SetPresentCount(int64_t Value)
{
	m_PresentCount = Value;
}
int64_t ByoProjectInventoryDto::GetOrphanCount() const
{
	return m_OrphanCount.value();
}

bool ByoProjectInventoryDto::HasOrphanCount() const
{
	return m_OrphanCount.has_value();
}
void ByoProjectInventoryDto::SetOrphanCount(int64_t Value)
{
	m_OrphanCount = Value;
}
bool ByoProjectInventoryDto::GetIsStale() const
{
	return m_IsStale.value();
}

bool ByoProjectInventoryDto::HasIsStale() const
{
	return m_IsStale.has_value();
}
void ByoProjectInventoryDto::SetIsStale(const bool& Value)
{
	m_IsStale = Value;
}

ByoSetupErrorDto::ByoSetupErrorDto()
{
}
ByoSetupErrorDto::~ByoSetupErrorDto()
{
}

utility::string_t ByoSetupErrorDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Step.has_value())
	{
		rapidjson::Value StepValue(TypeToJsonValue(m_Step, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("step", StepValue, JsonDoc.GetAllocator());
	}

	if (m_Message.has_value())
	{
		rapidjson::Value MessageValue(TypeToJsonValue(m_Message, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("message", MessageValue, JsonDoc.GetAllocator());
	}

	if (m_At.has_value())
	{
		rapidjson::Value AtValue(TypeToJsonValue(m_At, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("at", AtValue, JsonDoc.GetAllocator());
	}

	if (m_Retryable.has_value())
	{
		rapidjson::Value RetryableValue(TypeToJsonValue(m_Retryable, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("retryable", RetryableValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ByoSetupErrorDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ByoSetupErrorDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("step"))
	{
		const rapidjson::Value& StepValue = JsonDoc["step"];

		if (StepValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StepValue, m_Step, LogSystem);
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
		}
	}

	if (JsonDoc.HasMember("at"))
	{
		const rapidjson::Value& AtValue = JsonDoc["at"];

		if (AtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AtValue, m_At, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member at is null!");
		}
	}

	if (JsonDoc.HasMember("retryable"))
	{
		const rapidjson::Value& RetryableValue = JsonDoc["retryable"];

		if (RetryableValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RetryableValue, m_Retryable, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member retryable is null!");
		}
	}
}


utility::string_t ByoSetupErrorDto::GetStep() const
{
	return m_Step.value();
}

bool ByoSetupErrorDto::HasStep() const
{
	return m_Step.has_value();
}
void ByoSetupErrorDto::SetStep(const utility::string_t& Value)
{
	m_Step = Value;
}
utility::string_t ByoSetupErrorDto::GetMessage() const
{
	return m_Message.value();
}

bool ByoSetupErrorDto::HasMessage() const
{
	return m_Message.has_value();
}
void ByoSetupErrorDto::SetMessage(const utility::string_t& Value)
{
	m_Message = Value;
}
utility::string_t ByoSetupErrorDto::GetAt() const
{
	return m_At.value();
}

bool ByoSetupErrorDto::HasAt() const
{
	return m_At.has_value();
}
void ByoSetupErrorDto::SetAt(const utility::string_t& Value)
{
	m_At = Value;
}
bool ByoSetupErrorDto::GetRetryable() const
{
	return m_Retryable.value();
}

bool ByoSetupErrorDto::HasRetryable() const
{
	return m_Retryable.has_value();
}
void ByoSetupErrorDto::SetRetryable(const bool& Value)
{
	m_Retryable = Value;
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

void CdnFetchRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CdnFetchRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantToken"))
	{
		const rapidjson::Value& TenantTokenValue = JsonDoc["tenantToken"];

		if (TenantTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantTokenValue, m_TenantToken, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenant"))
	{
		const rapidjson::Value& TenantValue = JsonDoc["tenant"];

		if (TenantValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantValue, m_Tenant, LogSystem);
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

void ClaimHistoryDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimHistoryDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemId"))
	{
		const rapidjson::Value& SystemIdValue = JsonDoc["systemId"];

		if (SystemIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemIdValue, m_SystemId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("holderId"))
	{
		const rapidjson::Value& HolderIdValue = JsonDoc["holderId"];

		if (HolderIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderIdValue, m_HolderId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("holderName"))
	{
		const rapidjson::Value& HolderNameValue = JsonDoc["holderName"];

		if (HolderNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderNameValue, m_HolderName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note, LogSystem);
		}
	}

	if (JsonDoc.HasMember("releaseNote"))
	{
		const rapidjson::Value& ReleaseNoteValue = JsonDoc["releaseNote"];

		if (ReleaseNoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleaseNoteValue, m_ReleaseNote, LogSystem);
		}
	}

	if (JsonDoc.HasMember("takenAt"))
	{
		const rapidjson::Value& TakenAtValue = JsonDoc["takenAt"];

		if (TakenAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TakenAtValue, m_TakenAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member takenAt is null!");
		}
	}

	if (JsonDoc.HasMember("releasedAt"))
	{
		const rapidjson::Value& ReleasedAtValue = JsonDoc["releasedAt"];

		if (ReleasedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedAtValue, m_ReleasedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("durationMs"))
	{
		const rapidjson::Value& DurationMsValue = JsonDoc["durationMs"];

		if (DurationMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DurationMsValue, m_DurationMs, LogSystem);
		}
	}

	if (JsonDoc.HasMember("releasedByUserId"))
	{
		const rapidjson::Value& ReleasedByUserIdValue = JsonDoc["releasedByUserId"];

		if (ReleasedByUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedByUserIdValue, m_ReleasedByUserId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("forced"))
	{
		const rapidjson::Value& ForcedValue = JsonDoc["forced"];

		if (ForcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ForcedValue, m_Forced, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member forced is null!");
		}
	}

	if (JsonDoc.HasMember("holderKind"))
	{
		const rapidjson::Value& HolderKindValue = JsonDoc["holderKind"];

		if (HolderKindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HolderKindValue, m_HolderKind, LogSystem);
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

void ClaimHistoryDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimHistoryDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
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

void ClaimOutcomeDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ClaimOutcomeDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("outcome"))
	{
		const rapidjson::Value& OutcomeValue = JsonDoc["outcome"];

		if (OutcomeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutcomeValue, m_Outcome, LogSystem);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member system is null!");
		}
	}

	if (JsonDoc.HasMember("claimId"))
	{
		const rapidjson::Value& ClaimIdValue = JsonDoc["claimId"];

		if (ClaimIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ClaimIdValue, m_ClaimId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("missedByMs"))
	{
		const rapidjson::Value& MissedByMsValue = JsonDoc["missedByMs"];

		if (MissedByMsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MissedByMsValue, m_MissedByMs, LogSystem);
		}
	}

	if (JsonDoc.HasMember("forced"))
	{
		const rapidjson::Value& ForcedValue = JsonDoc["forced"];

		if (ForcedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ForcedValue, m_Forced, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member forced is null!");
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
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

void ControllerVersions::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ControllerVersions::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("reverseProxy"))
	{
		const rapidjson::Value& ReverseProxyValue = JsonDoc["reverseProxy"];

		if (ReverseProxyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReverseProxyValue, m_ReverseProxy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("apiVersions"))
	{
		const rapidjson::Value& ApiVersionsValue = JsonDoc["apiVersions"];

		if (ApiVersionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ApiVersionsValue, m_ApiVersions, LogSystem);
		}
	}

	if (JsonDoc.HasMember("currentApiVersion"))
	{
		const rapidjson::Value& CurrentApiVersionValue = JsonDoc["currentApiVersion"];

		if (CurrentApiVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentApiVersionValue, m_CurrentApiVersion, LogSystem);
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

CopiedAssetDetailDto::CopiedAssetDetailDto()
{
}
CopiedAssetDetailDto::~CopiedAssetDetailDto()
{
}

utility::string_t CopiedAssetDetailDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OriginalAssetDetailId.has_value())
	{
		rapidjson::Value OriginalAssetDetailIdValue(TypeToJsonValue(m_OriginalAssetDetailId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalAssetDetailId", OriginalAssetDetailIdValue, JsonDoc.GetAllocator());
	}

	if (m_OriginalPrototypeId.has_value())
	{
		rapidjson::Value OriginalPrototypeIdValue(TypeToJsonValue(m_OriginalPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalPrototypeId", OriginalPrototypeIdValue, JsonDoc.GetAllocator());
	}

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

	if (m_CloudStoragePath.has_value())
	{
		rapidjson::Value CloudStoragePathValue(TypeToJsonValue(m_CloudStoragePath, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("cloudStoragePath", CloudStoragePathValue, JsonDoc.GetAllocator());
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

	if (m_MaxVersions.has_value())
	{
		rapidjson::Value MaxVersionsValue(TypeToJsonValue(m_MaxVersions, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("maxVersions", MaxVersionsValue, JsonDoc.GetAllocator());
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CopiedAssetDetailDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CopiedAssetDetailDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("originalAssetDetailId"))
	{
		const rapidjson::Value& OriginalAssetDetailIdValue = JsonDoc["originalAssetDetailId"];

		if (OriginalAssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetDetailIdValue, m_OriginalAssetDetailId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalPrototypeId"))
	{
		const rapidjson::Value& OriginalPrototypeIdValue = JsonDoc["originalPrototypeId"];

		if (OriginalPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalPrototypeIdValue, m_OriginalPrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fileName"))
	{
		const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

		if (FileNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileNameValue, m_FileName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member languageCode is null!");
		}
	}

	if (JsonDoc.HasMember("assetType"))
	{
		const rapidjson::Value& AssetTypeValue = JsonDoc["assetType"];

		if (AssetTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetTypeValue, m_AssetType, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member assetType is null!");
		}
	}

	if (JsonDoc.HasMember("supportedPlatforms"))
	{
		const rapidjson::Value& SupportedPlatformsValue = JsonDoc["supportedPlatforms"];

		if (SupportedPlatformsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SupportedPlatformsValue, m_SupportedPlatforms, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member supportedPlatforms is null!");
		}
	}

	if (JsonDoc.HasMember("style"))
	{
		const rapidjson::Value& StyleValue = JsonDoc["style"];

		if (StyleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StyleValue, m_Style, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member style is null!");
		}
	}

	if (JsonDoc.HasMember("addressableId"))
	{
		const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

		if (AddressableIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AddressableIdValue, m_AddressableId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thirdPartyReferenceId"))
	{
		const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

		if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uri"))
	{
		const rapidjson::Value& UriValue = JsonDoc["uri"];

		if (UriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UriValue, m_Uri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("cloudStoragePath"))
	{
		const rapidjson::Value& CloudStoragePathValue = JsonDoc["cloudStoragePath"];

		if (CloudStoragePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CloudStoragePathValue, m_CloudStoragePath, LogSystem);
		}
	}

	if (JsonDoc.HasMember("checksum"))
	{
		const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

		if (ChecksumValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChecksumValue, m_Checksum, LogSystem);
		}
	}

	if (JsonDoc.HasMember("version"))
	{
		const rapidjson::Value& VersionValue = JsonDoc["version"];

		if (VersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionValue, m_Version, LogSystem);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalUri"))
	{
		const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

		if (ExternalUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalUriValue, m_ExternalUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("externalMimeType"))
	{
		const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

		if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalAssetUri"))
	{
		const rapidjson::Value& OriginalAssetUriValue = JsonDoc["originalAssetUri"];

		if (OriginalAssetUriValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetUriValue, m_OriginalAssetUri, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sizeInBytes"))
	{
		const rapidjson::Value& SizeInBytesValue = JsonDoc["sizeInBytes"];

		if (SizeInBytesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeInBytesValue, m_SizeInBytes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sizeInBytes is null!");
		}
	}

	if (JsonDoc.HasMember("maxVersions"))
	{
		const rapidjson::Value& MaxVersionsValue = JsonDoc["maxVersions"];

		if (MaxVersionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxVersionsValue, m_MaxVersions, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
		}
	}
}


utility::string_t CopiedAssetDetailDto::GetOriginalAssetDetailId() const
{
	return m_OriginalAssetDetailId.value();
}

bool CopiedAssetDetailDto::HasOriginalAssetDetailId() const
{
	return m_OriginalAssetDetailId.has_value();
}
utility::string_t CopiedAssetDetailDto::GetOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.value();
}

bool CopiedAssetDetailDto::HasOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.has_value();
}
utility::string_t CopiedAssetDetailDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool CopiedAssetDetailDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t CopiedAssetDetailDto::GetId() const
{
	return m_Id.value();
}

bool CopiedAssetDetailDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t CopiedAssetDetailDto::GetFileName() const
{
	return m_FileName.value();
}

bool CopiedAssetDetailDto::HasFileName() const
{
	return m_FileName.has_value();
}
utility::string_t CopiedAssetDetailDto::GetName() const
{
	return m_Name.value();
}

bool CopiedAssetDetailDto::HasName() const
{
	return m_Name.has_value();
}
void CopiedAssetDetailDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t CopiedAssetDetailDto::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool CopiedAssetDetailDto::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void CopiedAssetDetailDto::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t CopiedAssetDetailDto::GetAssetType() const
{
	return m_AssetType.value();
}

bool CopiedAssetDetailDto::HasAssetType() const
{
	return m_AssetType.has_value();
}
void CopiedAssetDetailDto::SetAssetType(const utility::string_t& Value)
{
	m_AssetType = Value;
}
const std::vector<utility::string_t>& CopiedAssetDetailDto::GetSupportedPlatforms() const
{
	return m_SupportedPlatforms.value();
}

bool CopiedAssetDetailDto::HasSupportedPlatforms() const
{
	return m_SupportedPlatforms.has_value();
}
void CopiedAssetDetailDto::SetSupportedPlatforms(const std::vector<utility::string_t>& Value)
{
	m_SupportedPlatforms = Value;
}
const std::vector<utility::string_t>& CopiedAssetDetailDto::GetStyle() const
{
	return m_Style.value();
}

bool CopiedAssetDetailDto::HasStyle() const
{
	return m_Style.has_value();
}
void CopiedAssetDetailDto::SetStyle(const std::vector<utility::string_t>& Value)
{
	m_Style = Value;
}
utility::string_t CopiedAssetDetailDto::GetAddressableId() const
{
	return m_AddressableId.value();
}

bool CopiedAssetDetailDto::HasAddressableId() const
{
	return m_AddressableId.has_value();
}
void CopiedAssetDetailDto::SetAddressableId(const utility::string_t& Value)
{
	m_AddressableId = Value;
}
utility::string_t CopiedAssetDetailDto::GetThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.value();
}

bool CopiedAssetDetailDto::HasThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.has_value();
}
void CopiedAssetDetailDto::SetThirdPartyReferenceId(const utility::string_t& Value)
{
	m_ThirdPartyReferenceId = Value;
}
utility::string_t CopiedAssetDetailDto::GetUri() const
{
	return m_Uri.value();
}

bool CopiedAssetDetailDto::HasUri() const
{
	return m_Uri.has_value();
}
utility::string_t CopiedAssetDetailDto::GetCloudStoragePath() const
{
	return m_CloudStoragePath.value();
}

bool CopiedAssetDetailDto::HasCloudStoragePath() const
{
	return m_CloudStoragePath.has_value();
}
utility::string_t CopiedAssetDetailDto::GetChecksum() const
{
	return m_Checksum.value();
}

bool CopiedAssetDetailDto::HasChecksum() const
{
	return m_Checksum.has_value();
}
utility::string_t CopiedAssetDetailDto::GetVersion() const
{
	return m_Version.value();
}

bool CopiedAssetDetailDto::HasVersion() const
{
	return m_Version.has_value();
}
utility::string_t CopiedAssetDetailDto::GetMimeType() const
{
	return m_MimeType.value();
}

bool CopiedAssetDetailDto::HasMimeType() const
{
	return m_MimeType.has_value();
}
utility::string_t CopiedAssetDetailDto::GetExternalUri() const
{
	return m_ExternalUri.value();
}

bool CopiedAssetDetailDto::HasExternalUri() const
{
	return m_ExternalUri.has_value();
}
void CopiedAssetDetailDto::SetExternalUri(const utility::string_t& Value)
{
	m_ExternalUri = Value;
}
utility::string_t CopiedAssetDetailDto::GetExternalMimeType() const
{
	return m_ExternalMimeType.value();
}

bool CopiedAssetDetailDto::HasExternalMimeType() const
{
	return m_ExternalMimeType.has_value();
}
void CopiedAssetDetailDto::SetExternalMimeType(const utility::string_t& Value)
{
	m_ExternalMimeType = Value;
}
utility::string_t CopiedAssetDetailDto::GetOriginalAssetUri() const
{
	return m_OriginalAssetUri.value();
}

bool CopiedAssetDetailDto::HasOriginalAssetUri() const
{
	return m_OriginalAssetUri.has_value();
}
void CopiedAssetDetailDto::SetOriginalAssetUri(const utility::string_t& Value)
{
	m_OriginalAssetUri = Value;
}
const std::vector<utility::string_t>& CopiedAssetDetailDto::GetTags() const
{
	return m_Tags.value();
}

bool CopiedAssetDetailDto::HasTags() const
{
	return m_Tags.has_value();
}
void CopiedAssetDetailDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
int64_t CopiedAssetDetailDto::GetSizeInBytes() const
{
	return m_SizeInBytes.value();
}

bool CopiedAssetDetailDto::HasSizeInBytes() const
{
	return m_SizeInBytes.has_value();
}
int32_t CopiedAssetDetailDto::GetMaxVersions() const
{
	return m_MaxVersions.value();
}

bool CopiedAssetDetailDto::HasMaxVersions() const
{
	return m_MaxVersions.has_value();
}
void CopiedAssetDetailDto::SetMaxVersions(int32_t Value)
{
	m_MaxVersions = Value;
}
utility::string_t CopiedAssetDetailDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool CopiedAssetDetailDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t CopiedAssetDetailDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool CopiedAssetDetailDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t CopiedAssetDetailDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool CopiedAssetDetailDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
utility::string_t CopiedAssetDetailDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool CopiedAssetDetailDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
bool CopiedAssetDetailDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool CopiedAssetDetailDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}

CopiedPrototypeDto::CopiedPrototypeDto()
{
}
CopiedPrototypeDto::~CopiedPrototypeDto()
{
}

utility::string_t CopiedPrototypeDto::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OriginalPrototypeId.has_value())
	{
		rapidjson::Value OriginalPrototypeIdValue(TypeToJsonValue(m_OriginalPrototypeId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalPrototypeId", OriginalPrototypeIdValue, JsonDoc.GetAllocator());
	}

	if (m_OriginalParentId.has_value())
	{
		rapidjson::Value OriginalParentIdValue(TypeToJsonValue(m_OriginalParentId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalParentId", OriginalParentIdValue, JsonDoc.GetAllocator());
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
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

void CopiedPrototypeDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CopiedPrototypeDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("originalPrototypeId"))
	{
		const rapidjson::Value& OriginalPrototypeIdValue = JsonDoc["originalPrototypeId"];

		if (OriginalPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalPrototypeIdValue, m_OriginalPrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalParentId"))
	{
		const rapidjson::Value& OriginalParentIdValue = JsonDoc["originalParentId"];

		if (OriginalParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalParentIdValue, m_OriginalParentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestId"))
	{
		const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

		if (PointOfInterestIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("highlander"))
	{
		const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

		if (HighlanderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighlanderValue, m_Highlander, LogSystem);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemOwned"))
	{
		const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

		if (SystemOwnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemOwnedValue, m_SystemOwned, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerId"))
	{
		const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

		if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
		}
	}

	if (JsonDoc.HasMember("readAccess"))
	{
		const rapidjson::Value& ReadAccessValue = JsonDoc["readAccess"];

		if (ReadAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessValue, m_ReadAccess, LogSystem);
		}
	}

	if (JsonDoc.HasMember("writeAccess"))
	{
		const rapidjson::Value& WriteAccessValue = JsonDoc["writeAccess"];

		if (WriteAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessValue, m_WriteAccess, LogSystem);
		}
	}
}


utility::string_t CopiedPrototypeDto::GetOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.value();
}

bool CopiedPrototypeDto::HasOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.has_value();
}
utility::string_t CopiedPrototypeDto::GetOriginalParentId() const
{
	return m_OriginalParentId.value();
}

bool CopiedPrototypeDto::HasOriginalParentId() const
{
	return m_OriginalParentId.has_value();
}
utility::string_t CopiedPrototypeDto::GetId() const
{
	return m_Id.value();
}

bool CopiedPrototypeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t CopiedPrototypeDto::GetName() const
{
	return m_Name.value();
}

bool CopiedPrototypeDto::HasName() const
{
	return m_Name.has_value();
}
void CopiedPrototypeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<utility::string_t>& CopiedPrototypeDto::GetTags() const
{
	return m_Tags.value();
}

bool CopiedPrototypeDto::HasTags() const
{
	return m_Tags.has_value();
}
void CopiedPrototypeDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& CopiedPrototypeDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool CopiedPrototypeDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void CopiedPrototypeDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& CopiedPrototypeDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool CopiedPrototypeDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void CopiedPrototypeDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
const std::map<utility::string_t, utility::string_t>& CopiedPrototypeDto::GetState() const
{
	return m_State.value();
}

bool CopiedPrototypeDto::HasState() const
{
	return m_State.has_value();
}
void CopiedPrototypeDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_State = Value;
}
utility::string_t CopiedPrototypeDto::GetPointOfInterestId() const
{
	return m_PointOfInterestId.value();
}

bool CopiedPrototypeDto::HasPointOfInterestId() const
{
	return m_PointOfInterestId.has_value();
}
void CopiedPrototypeDto::SetPointOfInterestId(const utility::string_t& Value)
{
	m_PointOfInterestId = Value;
}
utility::string_t CopiedPrototypeDto::GetParentId() const
{
	return m_ParentId.value();
}

bool CopiedPrototypeDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void CopiedPrototypeDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& CopiedPrototypeDto::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool CopiedPrototypeDto::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void CopiedPrototypeDto::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
utility::string_t CopiedPrototypeDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool CopiedPrototypeDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t CopiedPrototypeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool CopiedPrototypeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t CopiedPrototypeDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool CopiedPrototypeDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t CopiedPrototypeDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool CopiedPrototypeDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool CopiedPrototypeDto::GetHighlander() const
{
	return m_Highlander.value();
}

bool CopiedPrototypeDto::HasHighlander() const
{
	return m_Highlander.has_value();
}
void CopiedPrototypeDto::SetHighlander(const bool& Value)
{
	m_Highlander = Value;
}
utility::string_t CopiedPrototypeDto::GetType() const
{
	return m_Type.value();
}

bool CopiedPrototypeDto::HasType() const
{
	return m_Type.has_value();
}
void CopiedPrototypeDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
bool CopiedPrototypeDto::GetSystemOwned() const
{
	return m_SystemOwned.value();
}

bool CopiedPrototypeDto::HasSystemOwned() const
{
	return m_SystemOwned.has_value();
}
void CopiedPrototypeDto::SetSystemOwned(const bool& Value)
{
	m_SystemOwned = Value;
}
utility::string_t CopiedPrototypeDto::GetPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.value();
}

bool CopiedPrototypeDto::HasPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.has_value();
}
void CopiedPrototypeDto::SetPrototypeOwnerId(const utility::string_t& Value)
{
	m_PrototypeOwnerId = Value;
}
bool CopiedPrototypeDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool CopiedPrototypeDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}
void CopiedPrototypeDto::SetIsGlobal(const bool& Value)
{
	m_IsGlobal = Value;
}
const std::vector<utility::string_t>& CopiedPrototypeDto::GetReadAccess() const
{
	return m_ReadAccess.value();
}

bool CopiedPrototypeDto::HasReadAccess() const
{
	return m_ReadAccess.has_value();
}
void CopiedPrototypeDto::SetReadAccess(const std::vector<utility::string_t>& Value)
{
	m_ReadAccess = Value;
}
const std::vector<utility::string_t>& CopiedPrototypeDto::GetWriteAccess() const
{
	return m_WriteAccess.value();
}

bool CopiedPrototypeDto::HasWriteAccess() const
{
	return m_WriteAccess.has_value();
}
void CopiedPrototypeDto::SetWriteAccess(const std::vector<utility::string_t>& Value)
{
	m_WriteAccess = Value;
}

CopyPrototypesResult::CopyPrototypesResult()
{
}
CopyPrototypesResult::~CopyPrototypesResult()
{
}

utility::string_t CopyPrototypesResult::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Prototypes.has_value())
	{
		rapidjson::Value PrototypesValue(TypeToJsonValue(m_Prototypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypes", PrototypesValue, JsonDoc.GetAllocator());
	}

	if (m_AssetDetails.has_value())
	{
		rapidjson::Value AssetDetailsValue(TypeToJsonValue(m_AssetDetails, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assetDetails", AssetDetailsValue, JsonDoc.GetAllocator());
	}

	if (m_IdLookup.has_value())
	{
		rapidjson::Value IdLookupValue(TypeToJsonValue(m_IdLookup, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("idLookup", IdLookupValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncProcessing.has_value())
	{
		rapidjson::Value AsyncProcessingValue(TypeToJsonValue(m_AsyncProcessing, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncProcessing", AsyncProcessingValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CopyPrototypesResult::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CopyPrototypesResult::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("prototypes"))
	{
		const rapidjson::Value& PrototypesValue = JsonDoc["prototypes"];

		if (PrototypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypesValue, m_Prototypes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assetDetails"))
	{
		const rapidjson::Value& AssetDetailsValue = JsonDoc["assetDetails"];

		if (AssetDetailsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailsValue, m_AssetDetails, LogSystem);
		}
	}

	if (JsonDoc.HasMember("idLookup"))
	{
		const rapidjson::Value& IdLookupValue = JsonDoc["idLookup"];

		if (IdLookupValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdLookupValue, m_IdLookup, LogSystem);
		}
	}

	if (JsonDoc.HasMember("asyncProcessing"))
	{
		const rapidjson::Value& AsyncProcessingValue = JsonDoc["asyncProcessing"];

		if (AsyncProcessingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncProcessingValue, m_AsyncProcessing, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member asyncProcessing is null!");
		}
	}
}


const std::vector<std::shared_ptr<CopiedPrototypeDto>>& CopyPrototypesResult::GetPrototypes() const
{
	return m_Prototypes.value();
}

bool CopyPrototypesResult::HasPrototypes() const
{
	return m_Prototypes.has_value();
}
void CopyPrototypesResult::SetPrototypes(const std::vector<std::shared_ptr<CopiedPrototypeDto>>& Value)
{
	m_Prototypes = Value;
}
const std::vector<std::shared_ptr<CopiedAssetDetailDto>>& CopyPrototypesResult::GetAssetDetails() const
{
	return m_AssetDetails.value();
}

bool CopyPrototypesResult::HasAssetDetails() const
{
	return m_AssetDetails.has_value();
}
void CopyPrototypesResult::SetAssetDetails(const std::vector<std::shared_ptr<CopiedAssetDetailDto>>& Value)
{
	m_AssetDetails = Value;
}
const std::map<utility::string_t, utility::string_t>& CopyPrototypesResult::GetIdLookup() const
{
	return m_IdLookup.value();
}

bool CopyPrototypesResult::HasIdLookup() const
{
	return m_IdLookup.has_value();
}
void CopyPrototypesResult::SetIdLookup(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_IdLookup = Value;
}
bool CopyPrototypesResult::GetAsyncProcessing() const
{
	return m_AsyncProcessing.value();
}

bool CopyPrototypesResult::HasAsyncProcessing() const
{
	return m_AsyncProcessing.has_value();
}
void CopyPrototypesResult::SetAsyncProcessing(const bool& Value)
{
	m_AsyncProcessing = Value;
}

CreateMachineRequest::CreateMachineRequest()
{
}
CreateMachineRequest::~CreateMachineRequest()
{
}

utility::string_t CreateMachineRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Name.has_value())
	{
		rapidjson::Value NameValue(TypeToJsonValue(m_Name, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("name", NameValue, JsonDoc.GetAllocator());
	}

	if (m_MachineType.has_value())
	{
		rapidjson::Value MachineTypeValue(TypeToJsonValue(m_MachineType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("machineType", MachineTypeValue, JsonDoc.GetAllocator());
	}

	if (m_Purpose.has_value())
	{
		rapidjson::Value PurposeValue(TypeToJsonValue(m_Purpose, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("purpose", PurposeValue, JsonDoc.GetAllocator());
	}

	if (m_LeaseHours.has_value())
	{
		rapidjson::Value LeaseHoursValue(TypeToJsonValue(m_LeaseHours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaseHours", LeaseHoursValue, JsonDoc.GetAllocator());
	}

	if (m_Template.has_value())
	{
		rapidjson::Value TemplateValue(TypeToJsonValue(m_Template, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("template", TemplateValue, JsonDoc.GetAllocator());
	}

	if (m_ImageVersion.has_value())
	{
		rapidjson::Value ImageVersionValue(TypeToJsonValue(m_ImageVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("imageVersion", ImageVersionValue, JsonDoc.GetAllocator());
	}

	if (m_NodeDefinitionsVersion.has_value())
	{
		rapidjson::Value NodeDefinitionsVersionValue(TypeToJsonValue(m_NodeDefinitionsVersion, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("nodeDefinitionsVersion", NodeDefinitionsVersionValue, JsonDoc.GetAllocator());
	}

	if (m_HuntRounds.has_value())
	{
		rapidjson::Value HuntRoundsValue(TypeToJsonValue(m_HuntRounds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("huntRounds", HuntRoundsValue, JsonDoc.GetAllocator());
	}

	if (m_RoundWaitSeconds.has_value())
	{
		rapidjson::Value RoundWaitSecondsValue(TypeToJsonValue(m_RoundWaitSeconds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("roundWaitSeconds", RoundWaitSecondsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void CreateMachineRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "CreateMachineRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("machineType"))
	{
		const rapidjson::Value& MachineTypeValue = JsonDoc["machineType"];

		if (MachineTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MachineTypeValue, m_MachineType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("purpose"))
	{
		const rapidjson::Value& PurposeValue = JsonDoc["purpose"];

		if (PurposeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PurposeValue, m_Purpose, LogSystem);
		}
	}

	if (JsonDoc.HasMember("leaseHours"))
	{
		const rapidjson::Value& LeaseHoursValue = JsonDoc["leaseHours"];

		if (LeaseHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaseHoursValue, m_LeaseHours, LogSystem);
		}
	}

	if (JsonDoc.HasMember("template"))
	{
		const rapidjson::Value& TemplateValue = JsonDoc["template"];

		if (TemplateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemplateValue, m_Template, LogSystem);
		}
	}

	if (JsonDoc.HasMember("imageVersion"))
	{
		const rapidjson::Value& ImageVersionValue = JsonDoc["imageVersion"];

		if (ImageVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageVersionValue, m_ImageVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("nodeDefinitionsVersion"))
	{
		const rapidjson::Value& NodeDefinitionsVersionValue = JsonDoc["nodeDefinitionsVersion"];

		if (NodeDefinitionsVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NodeDefinitionsVersionValue, m_NodeDefinitionsVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("huntRounds"))
	{
		const rapidjson::Value& HuntRoundsValue = JsonDoc["huntRounds"];

		if (HuntRoundsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HuntRoundsValue, m_HuntRounds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("roundWaitSeconds"))
	{
		const rapidjson::Value& RoundWaitSecondsValue = JsonDoc["roundWaitSeconds"];

		if (RoundWaitSecondsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoundWaitSecondsValue, m_RoundWaitSeconds, LogSystem);
		}
	}
}


utility::string_t CreateMachineRequest::GetName() const
{
	return m_Name.value();
}

bool CreateMachineRequest::HasName() const
{
	return m_Name.has_value();
}
void CreateMachineRequest::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t CreateMachineRequest::GetMachineType() const
{
	return m_MachineType.value();
}

bool CreateMachineRequest::HasMachineType() const
{
	return m_MachineType.has_value();
}
void CreateMachineRequest::SetMachineType(const utility::string_t& Value)
{
	m_MachineType = Value;
}
utility::string_t CreateMachineRequest::GetPurpose() const
{
	return m_Purpose.value();
}

bool CreateMachineRequest::HasPurpose() const
{
	return m_Purpose.has_value();
}
void CreateMachineRequest::SetPurpose(const utility::string_t& Value)
{
	m_Purpose = Value;
}
int32_t CreateMachineRequest::GetLeaseHours() const
{
	return m_LeaseHours.value();
}

bool CreateMachineRequest::HasLeaseHours() const
{
	return m_LeaseHours.has_value();
}
void CreateMachineRequest::SetLeaseHours(int32_t Value)
{
	m_LeaseHours = Value;
}
utility::string_t CreateMachineRequest::GetTemplate() const
{
	return m_Template.value();
}

bool CreateMachineRequest::HasTemplate() const
{
	return m_Template.has_value();
}
void CreateMachineRequest::SetTemplate(const utility::string_t& Value)
{
	m_Template = Value;
}
utility::string_t CreateMachineRequest::GetImageVersion() const
{
	return m_ImageVersion.value();
}

bool CreateMachineRequest::HasImageVersion() const
{
	return m_ImageVersion.has_value();
}
void CreateMachineRequest::SetImageVersion(const utility::string_t& Value)
{
	m_ImageVersion = Value;
}
utility::string_t CreateMachineRequest::GetNodeDefinitionsVersion() const
{
	return m_NodeDefinitionsVersion.value();
}

bool CreateMachineRequest::HasNodeDefinitionsVersion() const
{
	return m_NodeDefinitionsVersion.has_value();
}
void CreateMachineRequest::SetNodeDefinitionsVersion(const utility::string_t& Value)
{
	m_NodeDefinitionsVersion = Value;
}
int32_t CreateMachineRequest::GetHuntRounds() const
{
	return m_HuntRounds.value();
}

bool CreateMachineRequest::HasHuntRounds() const
{
	return m_HuntRounds.has_value();
}
void CreateMachineRequest::SetHuntRounds(int32_t Value)
{
	m_HuntRounds = Value;
}
int32_t CreateMachineRequest::GetRoundWaitSeconds() const
{
	return m_RoundWaitSeconds.value();
}

bool CreateMachineRequest::HasRoundWaitSeconds() const
{
	return m_RoundWaitSeconds.has_value();
}
void CreateMachineRequest::SetRoundWaitSeconds(int32_t Value)
{
	m_RoundWaitSeconds = Value;
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

void DaigramCreateRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramCreateRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
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

void DaigramDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("ownerId"))
	{
		const rapidjson::Value& OwnerIdValue = JsonDoc["ownerId"];

		if (OwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerIdValue, m_OwnerId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("scopeId"))
	{
		const rapidjson::Value& ScopeIdValue = JsonDoc["scopeId"];

		if (ScopeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeIdValue, m_ScopeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
		}
	}

	if (JsonDoc.HasMember("role"))
	{
		const rapidjson::Value& RoleValue = JsonDoc["role"];

		if (RoleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoleValue, m_Role, LogSystem);
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

void DaigramThumbnailRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramThumbnailRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member thumbnailPrototypeId is null!");
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

void DaigramUpdateRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DaigramUpdateRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
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

void DepartmentDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DepartmentDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sortOrder"))
	{
		const rapidjson::Value& SortOrderValue = JsonDoc["sortOrder"];

		if (SortOrderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SortOrderValue, m_SortOrder, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sortOrder is null!");
		}
	}

	if (JsonDoc.HasMember("titleLadder"))
	{
		const rapidjson::Value& TitleLadderValue = JsonDoc["titleLadder"];

		if (TitleLadderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleLadderValue, m_TitleLadder, LogSystem);
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

void DepartmentUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DepartmentUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("sortOrder"))
	{
		const rapidjson::Value& SortOrderValue = JsonDoc["sortOrder"];

		if (SortOrderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SortOrderValue, m_SortOrder, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sortOrder is null!");
		}
	}

	if (JsonDoc.HasMember("titleLadder"))
	{
		const rapidjson::Value& TitleLadderValue = JsonDoc["titleLadder"];

		if (TitleLadderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleLadderValue, m_TitleLadder, LogSystem);
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

DuplicateGroupPrototypesOptions::DuplicateGroupPrototypesOptions()
{
}
DuplicateGroupPrototypesOptions::~DuplicateGroupPrototypesOptions()
{
}

utility::string_t DuplicateGroupPrototypesOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_OriginalGroupId.has_value())
	{
		rapidjson::Value OriginalGroupIdValue(TypeToJsonValue(m_OriginalGroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalGroupId", OriginalGroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupId.has_value())
	{
		rapidjson::Value NewGroupIdValue(TypeToJsonValue(m_NewGroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupId", NewGroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_AdditionalFilters.has_value())
	{
		rapidjson::Value AdditionalFiltersValue(TypeToJsonValue(m_AdditionalFilters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("additionalFilters", AdditionalFiltersValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOf.has_value())
	{
		rapidjson::Value OnBehalfOfValue(TypeToJsonValue(m_OnBehalfOf, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOf", OnBehalfOfValue, JsonDoc.GetAllocator());
	}

	if (m_ShallowCopy.has_value())
	{
		rapidjson::Value ShallowCopyValue(TypeToJsonValue(m_ShallowCopy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("shallowCopy", ShallowCopyValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubiGeneratedAssets.has_value())
	{
		rapidjson::Value IncludeMusubiGeneratedAssetsValue(TypeToJsonValue(m_IncludeMusubiGeneratedAssets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubiGeneratedAssets", IncludeMusubiGeneratedAssetsValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescenceId.has_value())
	{
		rapidjson::Value CoalescenceIdValue(TypeToJsonValue(m_CoalescenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescenceId", CoalescenceIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void DuplicateGroupPrototypesOptions::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "DuplicateGroupPrototypesOptions::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("originalGroupId"))
	{
		const rapidjson::Value& OriginalGroupIdValue = JsonDoc["originalGroupId"];

		if (OriginalGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalGroupIdValue, m_OriginalGroupId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("newGroupId"))
	{
		const rapidjson::Value& NewGroupIdValue = JsonDoc["newGroupId"];

		if (NewGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupIdValue, m_NewGroupId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("additionalFilters"))
	{
		const rapidjson::Value& AdditionalFiltersValue = JsonDoc["additionalFilters"];

		if (AdditionalFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdditionalFiltersValue, m_AdditionalFilters, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member additionalFilters is null!");
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall, LogSystem);
		}
	}

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf, LogSystem);
		}
	}

	if (JsonDoc.HasMember("shallowCopy"))
	{
		const rapidjson::Value& ShallowCopyValue = JsonDoc["shallowCopy"];

		if (ShallowCopyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShallowCopyValue, m_ShallowCopy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets, LogSystem);
		}
	}

	if (JsonDoc.HasMember("coalescenceId"))
	{
		const rapidjson::Value& CoalescenceIdValue = JsonDoc["coalescenceId"];

		if (CoalescenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescenceIdValue, m_CoalescenceId, LogSystem);
		}
	}
}


utility::string_t DuplicateGroupPrototypesOptions::GetOriginalGroupId() const
{
	return m_OriginalGroupId.value();
}

bool DuplicateGroupPrototypesOptions::HasOriginalGroupId() const
{
	return m_OriginalGroupId.has_value();
}
void DuplicateGroupPrototypesOptions::SetOriginalGroupId(const utility::string_t& Value)
{
	m_OriginalGroupId = Value;
}
utility::string_t DuplicateGroupPrototypesOptions::GetNewGroupId() const
{
	return m_NewGroupId.value();
}

bool DuplicateGroupPrototypesOptions::HasNewGroupId() const
{
	return m_NewGroupId.has_value();
}
void DuplicateGroupPrototypesOptions::SetNewGroupId(const utility::string_t& Value)
{
	m_NewGroupId = Value;
}
std::shared_ptr<PrototypeFilters> DuplicateGroupPrototypesOptions::GetAdditionalFilters() const
{
	return m_AdditionalFilters.value();
}

bool DuplicateGroupPrototypesOptions::HasAdditionalFilters() const
{
	return m_AdditionalFilters.has_value();
}
void DuplicateGroupPrototypesOptions::SetAdditionalFilters(const std::shared_ptr<PrototypeFilters>& Value)
{
	m_AdditionalFilters = Value;
}
bool DuplicateGroupPrototypesOptions::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool DuplicateGroupPrototypesOptions::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void DuplicateGroupPrototypesOptions::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t DuplicateGroupPrototypesOptions::GetOnBehalfOf() const
{
	return m_OnBehalfOf.value();
}

bool DuplicateGroupPrototypesOptions::HasOnBehalfOf() const
{
	return m_OnBehalfOf.has_value();
}
void DuplicateGroupPrototypesOptions::SetOnBehalfOf(const utility::string_t& Value)
{
	m_OnBehalfOf = Value;
}
bool DuplicateGroupPrototypesOptions::GetShallowCopy() const
{
	return m_ShallowCopy.value();
}

bool DuplicateGroupPrototypesOptions::HasShallowCopy() const
{
	return m_ShallowCopy.has_value();
}
void DuplicateGroupPrototypesOptions::SetShallowCopy(const bool& Value)
{
	m_ShallowCopy = Value;
}
bool DuplicateGroupPrototypesOptions::GetIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.value();
}

bool DuplicateGroupPrototypesOptions::HasIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.has_value();
}
void DuplicateGroupPrototypesOptions::SetIncludeMusubiGeneratedAssets(const bool& Value)
{
	m_IncludeMusubiGeneratedAssets = Value;
}
utility::string_t DuplicateGroupPrototypesOptions::GetCoalescenceId() const
{
	return m_CoalescenceId.value();
}

bool DuplicateGroupPrototypesOptions::HasCoalescenceId() const
{
	return m_CoalescenceId.has_value();
}
void DuplicateGroupPrototypesOptions::SetCoalescenceId(const utility::string_t& Value)
{
	m_CoalescenceId = Value;
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

void EffortEdge::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortEdge::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From, LogSystem);
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To, LogSystem);
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

void EffortResourceBulkGetRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceBulkGetRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member keys is null!");
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

void EffortResourceDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
		}
	}

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key, LogSystem);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title, LogSystem);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary, LogSystem);
		}
	}

	if (JsonDoc.HasMember("genre"))
	{
		const rapidjson::Value& GenreValue = JsonDoc["genre"];

		if (GenreValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GenreValue, m_Genre, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory, LogSystem);
		}
	}

	if (JsonDoc.HasMember("owner"))
	{
		const rapidjson::Value& OwnerValue = JsonDoc["owner"];

		if (OwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerValue, m_Owner, LogSystem);
		}
	}

	if (JsonDoc.HasMember("occurredAt"))
	{
		const rapidjson::Value& OccurredAtValue = JsonDoc["occurredAt"];

		if (OccurredAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OccurredAtValue, m_OccurredAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourcePath"))
	{
		const rapidjson::Value& SourcePathValue = JsonDoc["sourcePath"];

		if (SourcePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourcePathValue, m_SourcePath, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceUrl"))
	{
		const rapidjson::Value& SourceUrlValue = JsonDoc["sourceUrl"];

		if (SourceUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUrlValue, m_SourceUrl, LogSystem);
		}
	}

	if (JsonDoc.HasMember("evidence"))
	{
		const rapidjson::Value& EvidenceValue = JsonDoc["evidence"];

		if (EvidenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EvidenceValue, m_Evidence, LogSystem);
		}
	}

	if (JsonDoc.HasMember("contentHash"))
	{
		const rapidjson::Value& ContentHashValue = JsonDoc["contentHash"];

		if (ContentHashValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentHashValue, m_ContentHash, LogSystem);
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member provenanceTier is null!");
		}
	}

	if (JsonDoc.HasMember("edges"))
	{
		const rapidjson::Value& EdgesValue = JsonDoc["edges"];

		if (EdgesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EdgesValue, m_Edges, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
		}
	}

	if (JsonDoc.HasMember("deletedAt"))
	{
		const rapidjson::Value& DeletedAtValue = JsonDoc["deletedAt"];

		if (DeletedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeletedAtValue, m_DeletedAt, LogSystem);
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

void EffortResourceRemoveRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceRemoveRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member keys is null!");
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member provenanceTier is null!");
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

void EffortResourceRemoveResult::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceRemoveResult::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("removed"))
	{
		const rapidjson::Value& RemovedValue = JsonDoc["removed"];

		if (RemovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RemovedValue, m_Removed, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member removed is null!");
		}
	}

	if (JsonDoc.HasMember("alreadyRemoved"))
	{
		const rapidjson::Value& AlreadyRemovedValue = JsonDoc["alreadyRemoved"];

		if (AlreadyRemovedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AlreadyRemovedValue, m_AlreadyRemoved, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member alreadyRemoved is null!");
		}
	}

	if (JsonDoc.HasMember("gatedKeys"))
	{
		const rapidjson::Value& GatedKeysValue = JsonDoc["gatedKeys"];

		if (GatedKeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GatedKeysValue, m_GatedKeys, LogSystem);
		}
	}

	if (JsonDoc.HasMember("missingKeys"))
	{
		const rapidjson::Value& MissingKeysValue = JsonDoc["missingKeys"];

		if (MissingKeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MissingKeysValue, m_MissingKeys, LogSystem);
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

void EffortResourceSearchRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceSearchRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since, LogSystem);
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

void EffortResourceSearchResponse::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceSearchResponse::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member since is null!");
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

void EffortResourceUpsertItem::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertItem::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member key is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title, LogSystem);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary, LogSystem);
		}
	}

	if (JsonDoc.HasMember("genre"))
	{
		const rapidjson::Value& GenreValue = JsonDoc["genre"];

		if (GenreValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GenreValue, m_Genre, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory, LogSystem);
		}
	}

	if (JsonDoc.HasMember("owner"))
	{
		const rapidjson::Value& OwnerValue = JsonDoc["owner"];

		if (OwnerValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OwnerValue, m_Owner, LogSystem);
		}
	}

	if (JsonDoc.HasMember("occurredAt"))
	{
		const rapidjson::Value& OccurredAtValue = JsonDoc["occurredAt"];

		if (OccurredAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OccurredAtValue, m_OccurredAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourcePath"))
	{
		const rapidjson::Value& SourcePathValue = JsonDoc["sourcePath"];

		if (SourcePathValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourcePathValue, m_SourcePath, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceUrl"))
	{
		const rapidjson::Value& SourceUrlValue = JsonDoc["sourceUrl"];

		if (SourceUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUrlValue, m_SourceUrl, LogSystem);
		}
	}

	if (JsonDoc.HasMember("evidence"))
	{
		const rapidjson::Value& EvidenceValue = JsonDoc["evidence"];

		if (EvidenceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EvidenceValue, m_Evidence, LogSystem);
		}
	}

	if (JsonDoc.HasMember("contentHash"))
	{
		const rapidjson::Value& ContentHashValue = JsonDoc["contentHash"];

		if (ContentHashValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentHashValue, m_ContentHash, LogSystem);
		}
	}

	if (JsonDoc.HasMember("provenanceTier"))
	{
		const rapidjson::Value& ProvenanceTierValue = JsonDoc["provenanceTier"];

		if (ProvenanceTierValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProvenanceTierValue, m_ProvenanceTier, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member provenanceTier is null!");
		}
	}

	if (JsonDoc.HasMember("edges"))
	{
		const rapidjson::Value& EdgesValue = JsonDoc["edges"];

		if (EdgesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EdgesValue, m_Edges, LogSystem);
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

void EffortResourceUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member items is null!");
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

void EffortResourceUpsertResult::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "EffortResourceUpsertResult::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member created is null!");
		}
	}

	if (JsonDoc.HasMember("updated"))
	{
		const rapidjson::Value& UpdatedValue = JsonDoc["updated"];

		if (UpdatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedValue, m_Updated, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updated is null!");
		}
	}

	if (JsonDoc.HasMember("skipped"))
	{
		const rapidjson::Value& SkippedValue = JsonDoc["skipped"];

		if (SkippedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkippedValue, m_Skipped, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skipped is null!");
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

ExportGroupPrototypesOptions::ExportGroupPrototypesOptions()
{
}
ExportGroupPrototypesOptions::~ExportGroupPrototypesOptions()
{
}

utility::string_t ExportGroupPrototypesOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_CoalesenceId.has_value())
	{
		rapidjson::Value CoalesenceIdValue(TypeToJsonValue(m_CoalesenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalesenceId", CoalesenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_OriginalGroupId.has_value())
	{
		rapidjson::Value OriginalGroupIdValue(TypeToJsonValue(m_OriginalGroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("originalGroupId", OriginalGroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_AdditionalFilters.has_value())
	{
		rapidjson::Value AdditionalFiltersValue(TypeToJsonValue(m_AdditionalFilters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("additionalFilters", AdditionalFiltersValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOf.has_value())
	{
		rapidjson::Value OnBehalfOfValue(TypeToJsonValue(m_OnBehalfOf, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOf", OnBehalfOfValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubiGeneratedAssets.has_value())
	{
		rapidjson::Value IncludeMusubiGeneratedAssetsValue(TypeToJsonValue(m_IncludeMusubiGeneratedAssets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubiGeneratedAssets", IncludeMusubiGeneratedAssetsValue, JsonDoc.GetAllocator());
	}

	if (m_CoalescenceId.has_value())
	{
		rapidjson::Value CoalescenceIdValue(TypeToJsonValue(m_CoalescenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalescenceId", CoalescenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_PassthroughData.has_value())
	{
		rapidjson::Value PassthroughDataValue(TypeToJsonValue(m_PassthroughData, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("passthroughData", PassthroughDataValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExportGroupPrototypesOptions::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExportGroupPrototypesOptions::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("coalesenceId"))
	{
		const rapidjson::Value& CoalesenceIdValue = JsonDoc["coalesenceId"];

		if (CoalesenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalesenceIdValue, m_CoalesenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("originalGroupId"))
	{
		const rapidjson::Value& OriginalGroupIdValue = JsonDoc["originalGroupId"];

		if (OriginalGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalGroupIdValue, m_OriginalGroupId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("additionalFilters"))
	{
		const rapidjson::Value& AdditionalFiltersValue = JsonDoc["additionalFilters"];

		if (AdditionalFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdditionalFiltersValue, m_AdditionalFilters, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member additionalFilters is null!");
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall, LogSystem);
		}
	}

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf, LogSystem);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets, LogSystem);
		}
	}

	if (JsonDoc.HasMember("coalescenceId"))
	{
		const rapidjson::Value& CoalescenceIdValue = JsonDoc["coalescenceId"];

		if (CoalescenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalescenceIdValue, m_CoalescenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("passthroughData"))
	{
		const rapidjson::Value& PassthroughDataValue = JsonDoc["passthroughData"];

		if (PassthroughDataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PassthroughDataValue, m_PassthroughData, LogSystem);
		}
	}
}


utility::string_t ExportGroupPrototypesOptions::GetExportId() const
{
	return m_ExportId.value();
}

bool ExportGroupPrototypesOptions::HasExportId() const
{
	return m_ExportId.has_value();
}
void ExportGroupPrototypesOptions::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
utility::string_t ExportGroupPrototypesOptions::GetCoalesenceId() const
{
	return m_CoalesenceId.value();
}

bool ExportGroupPrototypesOptions::HasCoalesenceId() const
{
	return m_CoalesenceId.has_value();
}
void ExportGroupPrototypesOptions::SetCoalesenceId(const utility::string_t& Value)
{
	m_CoalesenceId = Value;
}
utility::string_t ExportGroupPrototypesOptions::GetOriginalGroupId() const
{
	return m_OriginalGroupId.value();
}

bool ExportGroupPrototypesOptions::HasOriginalGroupId() const
{
	return m_OriginalGroupId.has_value();
}
void ExportGroupPrototypesOptions::SetOriginalGroupId(const utility::string_t& Value)
{
	m_OriginalGroupId = Value;
}
std::shared_ptr<PrototypeFilters> ExportGroupPrototypesOptions::GetAdditionalFilters() const
{
	return m_AdditionalFilters.value();
}

bool ExportGroupPrototypesOptions::HasAdditionalFilters() const
{
	return m_AdditionalFilters.has_value();
}
void ExportGroupPrototypesOptions::SetAdditionalFilters(const std::shared_ptr<PrototypeFilters>& Value)
{
	m_AdditionalFilters = Value;
}
bool ExportGroupPrototypesOptions::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool ExportGroupPrototypesOptions::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void ExportGroupPrototypesOptions::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t ExportGroupPrototypesOptions::GetOnBehalfOf() const
{
	return m_OnBehalfOf.value();
}

bool ExportGroupPrototypesOptions::HasOnBehalfOf() const
{
	return m_OnBehalfOf.has_value();
}
void ExportGroupPrototypesOptions::SetOnBehalfOf(const utility::string_t& Value)
{
	m_OnBehalfOf = Value;
}
bool ExportGroupPrototypesOptions::GetIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.value();
}

bool ExportGroupPrototypesOptions::HasIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.has_value();
}
void ExportGroupPrototypesOptions::SetIncludeMusubiGeneratedAssets(const bool& Value)
{
	m_IncludeMusubiGeneratedAssets = Value;
}
utility::string_t ExportGroupPrototypesOptions::GetCoalescenceId() const
{
	return m_CoalescenceId.value();
}

bool ExportGroupPrototypesOptions::HasCoalescenceId() const
{
	return m_CoalescenceId.has_value();
}
void ExportGroupPrototypesOptions::SetCoalescenceId(const utility::string_t& Value)
{
	m_CoalescenceId = Value;
}
const std::map<utility::string_t, utility::string_t>& ExportGroupPrototypesOptions::GetPassthroughData() const
{
	return m_PassthroughData.value();
}

bool ExportGroupPrototypesOptions::HasPassthroughData() const
{
	return m_PassthroughData.has_value();
}
void ExportGroupPrototypesOptions::SetPassthroughData(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_PassthroughData = Value;
}

ExtendMachineLeaseRequest::ExtendMachineLeaseRequest()
{
}
ExtendMachineLeaseRequest::~ExtendMachineLeaseRequest()
{
}

utility::string_t ExtendMachineLeaseRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_LeaseHours.has_value())
	{
		rapidjson::Value LeaseHoursValue(TypeToJsonValue(m_LeaseHours, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("leaseHours", LeaseHoursValue, JsonDoc.GetAllocator());
	}

	if (m_Reason.has_value())
	{
		rapidjson::Value ReasonValue(TypeToJsonValue(m_Reason, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("reason", ReasonValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExtendMachineLeaseRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ExtendMachineLeaseRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("leaseHours"))
	{
		const rapidjson::Value& LeaseHoursValue = JsonDoc["leaseHours"];

		if (LeaseHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LeaseHoursValue, m_LeaseHours, LogSystem);
		}
	}

	if (JsonDoc.HasMember("reason"))
	{
		const rapidjson::Value& ReasonValue = JsonDoc["reason"];

		if (ReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReasonValue, m_Reason, LogSystem);
		}
	}
}


int32_t ExtendMachineLeaseRequest::GetLeaseHours() const
{
	return m_LeaseHours.value();
}

bool ExtendMachineLeaseRequest::HasLeaseHours() const
{
	return m_LeaseHours.has_value();
}
void ExtendMachineLeaseRequest::SetLeaseHours(int32_t Value)
{
	m_LeaseHours = Value;
}
utility::string_t ExtendMachineLeaseRequest::GetReason() const
{
	return m_Reason.value();
}

bool ExtendMachineLeaseRequest::HasReason() const
{
	return m_Reason.has_value();
}
void ExtendMachineLeaseRequest::SetReason(const utility::string_t& Value)
{
	m_Reason = Value;
}

FileSource::FileSource()
{
}
FileSource::~FileSource()
{
}

utility::string_t FileSource::ToJson() const
{
	switch (Value)
	{
		case eFileSource::LOCAL:
			return "Local";
		case eFileSource::S3:
			return "S3";
		case eFileSource::WEB:
			return "Web";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void FileSource::FromJson(const utility::string_t& Val)
{
	if (Val == "Local")
	{
		Value = eFileSource::LOCAL;
	}
	else if (Val == "S3")
	{
		Value = eFileSource::S3;
	}
	else if (Val == "Web")
	{
		Value = eFileSource::WEB;
	}
}

FileSource::eFileSource FileSource::GetValue() const
{
	return Value;
}

void FileSource::SetValue(FileSource::eFileSource const InValue)
{
	Value = InValue;
}

GlobalScopeFilter::GlobalScopeFilter()
{
}
GlobalScopeFilter::~GlobalScopeFilter()
{
}

utility::string_t GlobalScopeFilter::ToJson() const
{
	switch (Value)
	{
		case eGlobalScopeFilter::BOTH:
			return "Both";
		case eGlobalScopeFilter::GLOBALONLY:
			return "GlobalOnly";
		case eGlobalScopeFilter::TENANTONLY:
			return "TenantOnly";

		default:
			throw std::runtime_error("Unknown enum value!");
	}
}

void GlobalScopeFilter::FromJson(const utility::string_t& Val)
{
	if (Val == "Both")
	{
		Value = eGlobalScopeFilter::BOTH;
	}
	else if (Val == "GlobalOnly")
	{
		Value = eGlobalScopeFilter::GLOBALONLY;
	}
	else if (Val == "TenantOnly")
	{
		Value = eGlobalScopeFilter::TENANTONLY;
	}
}

GlobalScopeFilter::eGlobalScopeFilter GlobalScopeFilter::GetValue() const
{
	return Value;
}

void GlobalScopeFilter::SetValue(GlobalScopeFilter::eGlobalScopeFilter const InValue)
{
	Value = InValue;
}

ImportGroupPrototypesOptions::ImportGroupPrototypesOptions()
{
}
ImportGroupPrototypesOptions::~ImportGroupPrototypesOptions()
{
}

utility::string_t ImportGroupPrototypesOptions::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_ExportId.has_value())
	{
		rapidjson::Value ExportIdValue(TypeToJsonValue(m_ExportId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("exportId", ExportIdValue, JsonDoc.GetAllocator());
	}

	if (m_CoalesenceId.has_value())
	{
		rapidjson::Value CoalesenceIdValue(TypeToJsonValue(m_CoalesenceId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("coalesenceId", CoalesenceIdValue, JsonDoc.GetAllocator());
	}

	if (m_NewGroupId.has_value())
	{
		rapidjson::Value NewGroupIdValue(TypeToJsonValue(m_NewGroupId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("newGroupId", NewGroupIdValue, JsonDoc.GetAllocator());
	}

	if (m_AsyncCall.has_value())
	{
		rapidjson::Value AsyncCallValue(TypeToJsonValue(m_AsyncCall, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("asyncCall", AsyncCallValue, JsonDoc.GetAllocator());
	}

	if (m_OnBehalfOf.has_value())
	{
		rapidjson::Value OnBehalfOfValue(TypeToJsonValue(m_OnBehalfOf, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("onBehalfOf", OnBehalfOfValue, JsonDoc.GetAllocator());
	}

	if (m_IncludeMusubiGeneratedAssets.has_value())
	{
		rapidjson::Value IncludeMusubiGeneratedAssetsValue(TypeToJsonValue(m_IncludeMusubiGeneratedAssets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("includeMusubiGeneratedAssets", IncludeMusubiGeneratedAssetsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ImportGroupPrototypesOptions::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ImportGroupPrototypesOptions::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("coalesenceId"))
	{
		const rapidjson::Value& CoalesenceIdValue = JsonDoc["coalesenceId"];

		if (CoalesenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalesenceIdValue, m_CoalesenceId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("newGroupId"))
	{
		const rapidjson::Value& NewGroupIdValue = JsonDoc["newGroupId"];

		if (NewGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupIdValue, m_NewGroupId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("asyncCall"))
	{
		const rapidjson::Value& AsyncCallValue = JsonDoc["asyncCall"];

		if (AsyncCallValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncCallValue, m_AsyncCall, LogSystem);
		}
	}

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf, LogSystem);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets, LogSystem);
		}
	}
}


utility::string_t ImportGroupPrototypesOptions::GetExportId() const
{
	return m_ExportId.value();
}

bool ImportGroupPrototypesOptions::HasExportId() const
{
	return m_ExportId.has_value();
}
void ImportGroupPrototypesOptions::SetExportId(const utility::string_t& Value)
{
	m_ExportId = Value;
}
utility::string_t ImportGroupPrototypesOptions::GetCoalesenceId() const
{
	return m_CoalesenceId.value();
}

bool ImportGroupPrototypesOptions::HasCoalesenceId() const
{
	return m_CoalesenceId.has_value();
}
void ImportGroupPrototypesOptions::SetCoalesenceId(const utility::string_t& Value)
{
	m_CoalesenceId = Value;
}
utility::string_t ImportGroupPrototypesOptions::GetNewGroupId() const
{
	return m_NewGroupId.value();
}

bool ImportGroupPrototypesOptions::HasNewGroupId() const
{
	return m_NewGroupId.has_value();
}
void ImportGroupPrototypesOptions::SetNewGroupId(const utility::string_t& Value)
{
	m_NewGroupId = Value;
}
bool ImportGroupPrototypesOptions::GetAsyncCall() const
{
	return m_AsyncCall.value();
}

bool ImportGroupPrototypesOptions::HasAsyncCall() const
{
	return m_AsyncCall.has_value();
}
void ImportGroupPrototypesOptions::SetAsyncCall(const bool& Value)
{
	m_AsyncCall = Value;
}
utility::string_t ImportGroupPrototypesOptions::GetOnBehalfOf() const
{
	return m_OnBehalfOf.value();
}

bool ImportGroupPrototypesOptions::HasOnBehalfOf() const
{
	return m_OnBehalfOf.has_value();
}
void ImportGroupPrototypesOptions::SetOnBehalfOf(const utility::string_t& Value)
{
	m_OnBehalfOf = Value;
}
bool ImportGroupPrototypesOptions::GetIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.value();
}

bool ImportGroupPrototypesOptions::HasIncludeMusubiGeneratedAssets() const
{
	return m_IncludeMusubiGeneratedAssets.has_value();
}
void ImportGroupPrototypesOptions::SetIncludeMusubiGeneratedAssets(const bool& Value)
{
	m_IncludeMusubiGeneratedAssets = Value;
}

InternalFileCopyRequest::InternalFileCopyRequest()
{
}
InternalFileCopyRequest::~InternalFileCopyRequest()
{
}

utility::string_t InternalFileCopyRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_SourceFileInfo.has_value())
	{
		rapidjson::Value SourceFileInfoValue(TypeToJsonValue(m_SourceFileInfo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("sourceFileInfo", SourceFileInfoValue, JsonDoc.GetAllocator());
	}

	if (m_DestinationFileInfo.has_value())
	{
		rapidjson::Value DestinationFileInfoValue(TypeToJsonValue(m_DestinationFileInfo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("destinationFileInfo", DestinationFileInfoValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void InternalFileCopyRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "InternalFileCopyRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("sourceFileInfo"))
	{
		const rapidjson::Value& SourceFileInfoValue = JsonDoc["sourceFileInfo"];

		if (SourceFileInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceFileInfoValue, m_SourceFileInfo, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member sourceFileInfo is null!");
		}
	}

	if (JsonDoc.HasMember("destinationFileInfo"))
	{
		const rapidjson::Value& DestinationFileInfoValue = JsonDoc["destinationFileInfo"];

		if (DestinationFileInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DestinationFileInfoValue, m_DestinationFileInfo, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member destinationFileInfo is null!");
		}
	}
}


std::shared_ptr<MusubiFileInfo> InternalFileCopyRequest::GetSourceFileInfo() const
{
	return m_SourceFileInfo.value();
}

bool InternalFileCopyRequest::HasSourceFileInfo() const
{
	return m_SourceFileInfo.has_value();
}
void InternalFileCopyRequest::SetSourceFileInfo(const std::shared_ptr<MusubiFileInfo>& Value)
{
	m_SourceFileInfo = Value;
}
std::shared_ptr<MusubiFileInfo> InternalFileCopyRequest::GetDestinationFileInfo() const
{
	return m_DestinationFileInfo.value();
}

bool InternalFileCopyRequest::HasDestinationFileInfo() const
{
	return m_DestinationFileInfo.has_value();
}
void InternalFileCopyRequest::SetDestinationFileInfo(const std::shared_ptr<MusubiFileInfo>& Value)
{
	m_DestinationFileInfo = Value;
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

void JiraCreateMetaDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
	}

	if (JsonDoc.HasMember("issueTypes"))
	{
		const rapidjson::Value& IssueTypesValue = JsonDoc["issueTypes"];

		if (IssueTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypesValue, m_IssueTypes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
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

void JiraCreateMetaField::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaField::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("fieldId"))
	{
		const rapidjson::Value& FieldIdValue = JsonDoc["fieldId"];

		if (FieldIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FieldIdValue, m_FieldId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("required"))
	{
		const rapidjson::Value& RequiredValue = JsonDoc["required"];

		if (RequiredValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RequiredValue, m_Required, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member required is null!");
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("custom"))
	{
		const rapidjson::Value& CustomValue = JsonDoc["custom"];

		if (CustomValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CustomValue, m_Custom, LogSystem);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System, LogSystem);
		}
	}

	if (JsonDoc.HasMember("autoComplete"))
	{
		const rapidjson::Value& AutoCompleteValue = JsonDoc["autoComplete"];

		if (AutoCompleteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AutoCompleteValue, m_AutoComplete, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member autoComplete is null!");
		}
	}

	if (JsonDoc.HasMember("hasDefaultValue"))
	{
		const rapidjson::Value& HasDefaultValueValue = JsonDoc["hasDefaultValue"];

		if (HasDefaultValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasDefaultValueValue, m_HasDefaultValue, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member hasDefaultValue is null!");
		}
	}

	if (JsonDoc.HasMember("ref"))
	{
		const rapidjson::Value& RefValue = JsonDoc["ref"];

		if (RefValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RefValue, m_Ref, LogSystem);
		}
	}

	if (JsonDoc.HasMember("allowedValues"))
	{
		const rapidjson::Value& AllowedValuesValue = JsonDoc["allowedValues"];

		if (AllowedValuesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AllowedValuesValue, m_AllowedValues, LogSystem);
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

void JiraCreateMetaIssueType::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaIssueType::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fields"))
	{
		const rapidjson::Value& FieldsValue = JsonDoc["fields"];

		if (FieldsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FieldsValue, m_Fields, LogSystem);
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

void JiraCreateMetaUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraCreateMetaUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member project is null!");
		}
	}

	if (JsonDoc.HasMember("issueTypes"))
	{
		const rapidjson::Value& IssueTypesValue = JsonDoc["issueTypes"];

		if (IssueTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypesValue, m_IssueTypes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member issueTypes is null!");
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

void JiraFieldOption::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraFieldOption::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("label"))
	{
		const rapidjson::Value& LabelValue = JsonDoc["label"];

		if (LabelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LabelValue, m_Label, LogSystem);
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

void JiraLink::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraLink::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("from"))
	{
		const rapidjson::Value& FromValue = JsonDoc["from"];

		if (FromValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FromValue, m_From, LogSystem);
		}
	}

	if (JsonDoc.HasMember("to"))
	{
		const rapidjson::Value& ToValue = JsonDoc["to"];

		if (ToValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ToValue, m_To, LogSystem);
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

void JiraReferenceListDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceListDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
		}
	}

	if (JsonDoc.HasMember("options"))
	{
		const rapidjson::Value& OptionsValue = JsonDoc["options"];

		if (OptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionsValue, m_Options, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
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

void JiraReferenceOption::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceOption::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("released"))
	{
		const rapidjson::Value& ReleasedValue = JsonDoc["released"];

		if (ReleasedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleasedValue, m_Released, LogSystem);
		}
	}

	if (JsonDoc.HasMember("archived"))
	{
		const rapidjson::Value& ArchivedValue = JsonDoc["archived"];

		if (ArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ArchivedValue, m_Archived, LogSystem);
		}
	}

	if (JsonDoc.HasMember("releaseDate"))
	{
		const rapidjson::Value& ReleaseDateValue = JsonDoc["releaseDate"];

		if (ReleaseDateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReleaseDateValue, m_ReleaseDate, LogSystem);
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

void JiraReferenceUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraReferenceUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member project is null!");
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member kind is null!");
		}
	}

	if (JsonDoc.HasMember("options"))
	{
		const rapidjson::Value& OptionsValue = JsonDoc["options"];

		if (OptionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OptionsValue, m_Options, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member options is null!");
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

void JiraResourceBulkGetRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceBulkGetRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("keys"))
	{
		const rapidjson::Value& KeysValue = JsonDoc["keys"];

		if (KeysValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeysValue, m_Keys, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member keys is null!");
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

void JiraResourceDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key, LogSystem);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assignee"))
	{
		const rapidjson::Value& AssigneeValue = JsonDoc["assignee"];

		if (AssigneeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeValue, m_Assignee, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assigneeAccountId"))
	{
		const rapidjson::Value& AssigneeAccountIdValue = JsonDoc["assigneeAccountId"];

		if (AssigneeAccountIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeAccountIdValue, m_AssigneeAccountId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("resolution"))
	{
		const rapidjson::Value& ResolutionValue = JsonDoc["resolution"];

		if (ResolutionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolutionValue, m_Resolution, LogSystem);
		}
	}

	if (JsonDoc.HasMember("issueType"))
	{
		const rapidjson::Value& IssueTypeValue = JsonDoc["issueType"];

		if (IssueTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypeValue, m_IssueType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
	}

	if (JsonDoc.HasMember("epic"))
	{
		const rapidjson::Value& EpicValue = JsonDoc["epic"];

		if (EpicValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EpicValue, m_Epic, LogSystem);
		}
	}

	if (JsonDoc.HasMember("links"))
	{
		const rapidjson::Value& LinksValue = JsonDoc["links"];

		if (LinksValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinksValue, m_Links, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceUpdatedAt"))
	{
		const rapidjson::Value& SourceUpdatedAtValue = JsonDoc["sourceUpdatedAt"];

		if (SourceUpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUpdatedAtValue, m_SourceUpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceCreatedAt"))
	{
		const rapidjson::Value& SourceCreatedAtValue = JsonDoc["sourceCreatedAt"];

		if (SourceCreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceCreatedAtValue, m_SourceCreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
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

void JiraResourceSearchRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceSearchRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member tags is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since, LogSystem);
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

void JiraResourceSearchResponse::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceSearchResponse::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("since"))
	{
		const rapidjson::Value& SinceValue = JsonDoc["since"];

		if (SinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SinceValue, m_Since, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member since is null!");
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

void JiraResourceUpsertItem::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertItem::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member key is null!");
		}
	}

	if (JsonDoc.HasMember("family"))
	{
		const rapidjson::Value& FamilyValue = JsonDoc["family"];

		if (FamilyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FamilyValue, m_Family, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("summary"))
	{
		const rapidjson::Value& SummaryValue = JsonDoc["summary"];

		if (SummaryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SummaryValue, m_Summary, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("statusCategory"))
	{
		const rapidjson::Value& StatusCategoryValue = JsonDoc["statusCategory"];

		if (StatusCategoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusCategoryValue, m_StatusCategory, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assignee"))
	{
		const rapidjson::Value& AssigneeValue = JsonDoc["assignee"];

		if (AssigneeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeValue, m_Assignee, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assigneeAccountId"))
	{
		const rapidjson::Value& AssigneeAccountIdValue = JsonDoc["assigneeAccountId"];

		if (AssigneeAccountIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssigneeAccountIdValue, m_AssigneeAccountId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("resolution"))
	{
		const rapidjson::Value& ResolutionValue = JsonDoc["resolution"];

		if (ResolutionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ResolutionValue, m_Resolution, LogSystem);
		}
	}

	if (JsonDoc.HasMember("issueType"))
	{
		const rapidjson::Value& IssueTypeValue = JsonDoc["issueType"];

		if (IssueTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IssueTypeValue, m_IssueType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
	}

	if (JsonDoc.HasMember("epic"))
	{
		const rapidjson::Value& EpicValue = JsonDoc["epic"];

		if (EpicValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EpicValue, m_Epic, LogSystem);
		}
	}

	if (JsonDoc.HasMember("links"))
	{
		const rapidjson::Value& LinksValue = JsonDoc["links"];

		if (LinksValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LinksValue, m_Links, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceUpdatedAt"))
	{
		const rapidjson::Value& SourceUpdatedAtValue = JsonDoc["sourceUpdatedAt"];

		if (SourceUpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceUpdatedAtValue, m_SourceUpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("sourceCreatedAt"))
	{
		const rapidjson::Value& SourceCreatedAtValue = JsonDoc["sourceCreatedAt"];

		if (SourceCreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceCreatedAtValue, m_SourceCreatedAt, LogSystem);
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

void JiraResourceUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member items is null!");
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

void JiraResourceUpsertResult::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraResourceUpsertResult::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member created is null!");
		}
	}

	if (JsonDoc.HasMember("updated"))
	{
		const rapidjson::Value& UpdatedValue = JsonDoc["updated"];

		if (UpdatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedValue, m_Updated, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updated is null!");
		}
	}

	if (JsonDoc.HasMember("skipped"))
	{
		const rapidjson::Value& SkippedValue = JsonDoc["skipped"];

		if (SkippedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkippedValue, m_Skipped, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skipped is null!");
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

void JiraSchemaUpsertResult::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JiraSchemaUpsertResult::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("project"))
	{
		const rapidjson::Value& ProjectValue = JsonDoc["project"];

		if (ProjectValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectValue, m_Project, LogSystem);
		}
	}

	if (JsonDoc.HasMember("kind"))
	{
		const rapidjson::Value& KindValue = JsonDoc["kind"];

		if (KindValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KindValue, m_Kind, LogSystem);
		}
	}

	if (JsonDoc.HasMember("created"))
	{
		const rapidjson::Value& CreatedValue = JsonDoc["created"];

		if (CreatedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedValue, m_Created, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member created is null!");
		}
	}

	if (JsonDoc.HasMember("count"))
	{
		const rapidjson::Value& CountValue = JsonDoc["count"];

		if (CountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CountValue, m_Count, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member count is null!");
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

void JoinQueueRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "JoinQueueRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note, LogSystem);
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

void LegacyObjectDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LegacyObjectDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("key"))
	{
		const rapidjson::Value& KeyValue = JsonDoc["key"];

		if (KeyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(KeyValue, m_Key, LogSystem);
		}
	}

	if (JsonDoc.HasMember("size"))
	{
		const rapidjson::Value& SizeValue = JsonDoc["size"];

		if (SizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SizeValue, m_Size, LogSystem);
		}
	}

	if (JsonDoc.HasMember("contentType"))
	{
		const rapidjson::Value& ContentTypeValue = JsonDoc["contentType"];

		if (ContentTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContentTypeValue, m_ContentType, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
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

void LegacyObjectPageDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LegacyObjectPageDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("bucket"))
	{
		const rapidjson::Value& BucketValue = JsonDoc["bucket"];

		if (BucketValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketValue, m_Bucket, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tenantOverride"))
	{
		const rapidjson::Value& TenantOverrideValue = JsonDoc["tenantOverride"];

		if (TenantOverrideValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantOverrideValue, m_TenantOverride, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member tenantOverride is null!");
		}
	}

	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("nextPageToken"))
	{
		const rapidjson::Value& NextPageTokenValue = JsonDoc["nextPageToken"];

		if (NextPageTokenValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NextPageTokenValue, m_NextPageToken, LogSystem);
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

void LlmGenerateRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmGenerateRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider, LogSystem);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemInstruction"))
	{
		const rapidjson::Value& SystemInstructionValue = JsonDoc["systemInstruction"];

		if (SystemInstructionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemInstructionValue, m_SystemInstruction, LogSystem);
		}
	}

	if (JsonDoc.HasMember("messages"))
	{
		const rapidjson::Value& MessagesValue = JsonDoc["messages"];

		if (MessagesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessagesValue, m_Messages, LogSystem);
		}
	}

	if (JsonDoc.HasMember("temperature"))
	{
		const rapidjson::Value& TemperatureValue = JsonDoc["temperature"];

		if (TemperatureValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TemperatureValue, m_Temperature, LogSystem);
		}
	}

	if (JsonDoc.HasMember("maxOutputTokens"))
	{
		const rapidjson::Value& MaxOutputTokensValue = JsonDoc["maxOutputTokens"];

		if (MaxOutputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxOutputTokensValue, m_MaxOutputTokens, LogSystem);
		}
	}

	if (JsonDoc.HasMember("jsonResponse"))
	{
		const rapidjson::Value& JsonResponseValue = JsonDoc["jsonResponse"];

		if (JsonResponseValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(JsonResponseValue, m_JsonResponse, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member jsonResponse is null!");
		}
	}

	if (JsonDoc.HasMember("agentId"))
	{
		const rapidjson::Value& AgentIdValue = JsonDoc["agentId"];

		if (AgentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AgentIdValue, m_AgentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
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

void LlmGenerateResponse::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmGenerateResponse::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("text"))
	{
		const rapidjson::Value& TextValue = JsonDoc["text"];

		if (TextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TextValue, m_Text, LogSystem);
		}
	}

	if (JsonDoc.HasMember("model"))
	{
		const rapidjson::Value& ModelValue = JsonDoc["model"];

		if (ModelValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelValue, m_Model, LogSystem);
		}
	}

	if (JsonDoc.HasMember("provider"))
	{
		const rapidjson::Value& ProviderValue = JsonDoc["provider"];

		if (ProviderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProviderValue, m_Provider, LogSystem);
		}
	}

	if (JsonDoc.HasMember("inputTokens"))
	{
		const rapidjson::Value& InputTokensValue = JsonDoc["inputTokens"];

		if (InputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InputTokensValue, m_InputTokens, LogSystem);
		}
	}

	if (JsonDoc.HasMember("outputTokens"))
	{
		const rapidjson::Value& OutputTokensValue = JsonDoc["outputTokens"];

		if (OutputTokensValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutputTokensValue, m_OutputTokens, LogSystem);
		}
	}

	if (JsonDoc.HasMember("finishReason"))
	{
		const rapidjson::Value& FinishReasonValue = JsonDoc["finishReason"];

		if (FinishReasonValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FinishReasonValue, m_FinishReason, LogSystem);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
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

void LlmMessage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmMessage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("role"))
	{
		const rapidjson::Value& RoleValue = JsonDoc["role"];

		if (RoleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(RoleValue, m_Role, LogSystem);
		}
	}

	if (JsonDoc.HasMember("text"))
	{
		const rapidjson::Value& TextValue = JsonDoc["text"];

		if (TextValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TextValue, m_Text, LogSystem);
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

void LlmProviderDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LlmProviderDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("configured"))
	{
		const rapidjson::Value& ConfiguredValue = JsonDoc["configured"];

		if (ConfiguredValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConfiguredValue, m_Configured, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member configured is null!");
		}
	}

	if (JsonDoc.HasMember("models"))
	{
		const rapidjson::Value& ModelsValue = JsonDoc["models"];

		if (ModelsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ModelsValue, m_Models, LogSystem);
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

void LocalizedString::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "LocalizedString::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("languageCode"))
	{
		const rapidjson::Value& LanguageCodeValue = JsonDoc["languageCode"];

		if (LanguageCodeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LanguageCodeValue, m_LanguageCode, LogSystem);
		}
	}

	if (JsonDoc.HasMember("value"))
	{
		const rapidjson::Value& ValueValue = JsonDoc["value"];

		if (ValueValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ValueValue, m_Value, LogSystem);
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

void MiningSessionDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("payload"))
	{
		const rapidjson::Value& PayloadValue = JsonDoc["payload"];

		if (PayloadValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadValue, m_Payload, LogSystem);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
		}
	}

	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("payloadLength"))
	{
		const rapidjson::Value& PayloadLengthValue = JsonDoc["payloadLength"];

		if (PayloadLengthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadLengthValue, m_PayloadLength, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member payloadLength is null!");
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
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

void MiningSessionSaveRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSaveRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("payload"))
	{
		const rapidjson::Value& PayloadValue = JsonDoc["payload"];

		if (PayloadValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadValue, m_Payload, LogSystem);
		}
	}

	if (JsonDoc.HasMember("encoding"))
	{
		const rapidjson::Value& EncodingValue = JsonDoc["encoding"];

		if (EncodingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EncodingValue, m_Encoding, LogSystem);
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

void MiningSessionSummaryDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSummaryDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("minedTenantName"))
	{
		const rapidjson::Value& MinedTenantNameValue = JsonDoc["minedTenantName"];

		if (MinedTenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MinedTenantNameValue, m_MinedTenantName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("filePrompt"))
	{
		const rapidjson::Value& FilePromptValue = JsonDoc["filePrompt"];

		if (FilePromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilePromptValue, m_FilePrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("miningPrompt"))
	{
		const rapidjson::Value& MiningPromptValue = JsonDoc["miningPrompt"];

		if (MiningPromptValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MiningPromptValue, m_MiningPrompt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("payloadLength"))
	{
		const rapidjson::Value& PayloadLengthValue = JsonDoc["payloadLength"];

		if (PayloadLengthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PayloadLengthValue, m_PayloadLength, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member payloadLength is null!");
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member createdAt is null!");
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member updatedAt is null!");
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

void MiningSessionSummaryDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MiningSessionSummaryDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
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

MusubiFileInfo::MusubiFileInfo()
{
}
MusubiFileInfo::~MusubiFileInfo()
{
}

utility::string_t MusubiFileInfo::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Source.has_value())
	{
		rapidjson::Value SourceValue(TypeToJsonValue(m_Source, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("source", SourceValue, JsonDoc.GetAllocator());
	}

	if (m_FileSource.has_value())
	{
		rapidjson::Value FileSourceValue(TypeToJsonValue(m_FileSource, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fileSource", FileSourceValue, JsonDoc.GetAllocator());
	}

	if (m_Directory.has_value())
	{
		rapidjson::Value DirectoryValue(TypeToJsonValue(m_Directory, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("directory", DirectoryValue, JsonDoc.GetAllocator());
	}

	if (m_Filename.has_value())
	{
		rapidjson::Value FilenameValue(TypeToJsonValue(m_Filename, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("filename", FilenameValue, JsonDoc.GetAllocator());
	}

	if (m_Extension.has_value())
	{
		rapidjson::Value ExtensionValue(TypeToJsonValue(m_Extension, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("extension", ExtensionValue, JsonDoc.GetAllocator());
	}

	if (m_Bucket.has_value())
	{
		rapidjson::Value BucketValue(TypeToJsonValue(m_Bucket, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("bucket", BucketValue, JsonDoc.GetAllocator());
	}

	if (m_BucketInfo.has_value())
	{
		rapidjson::Value BucketInfoValue(TypeToJsonValue(m_BucketInfo, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("bucketInfo", BucketInfoValue, JsonDoc.GetAllocator());
	}

	if (m_FullUrl.has_value())
	{
		rapidjson::Value FullUrlValue(TypeToJsonValue(m_FullUrl, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("fullUrl", FullUrlValue, JsonDoc.GetAllocator());
	}

	if (m_MimeType.has_value())
	{
		rapidjson::Value MimeTypeValue(TypeToJsonValue(m_MimeType, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("mimeType", MimeTypeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void MusubiFileInfo::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "MusubiFileInfo::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("source"))
	{
		const rapidjson::Value& SourceValue = JsonDoc["source"];

		if (SourceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceValue, m_Source, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fileSource"))
	{
		const rapidjson::Value& FileSourceValue = JsonDoc["fileSource"];

		if (FileSourceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileSourceValue, m_FileSource, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member fileSource is null!");
		}
	}

	if (JsonDoc.HasMember("directory"))
	{
		const rapidjson::Value& DirectoryValue = JsonDoc["directory"];

		if (DirectoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DirectoryValue, m_Directory, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member directory is null!");
		}
	}

	if (JsonDoc.HasMember("filename"))
	{
		const rapidjson::Value& FilenameValue = JsonDoc["filename"];

		if (FilenameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilenameValue, m_Filename, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member filename is null!");
		}
	}

	if (JsonDoc.HasMember("extension"))
	{
		const rapidjson::Value& ExtensionValue = JsonDoc["extension"];

		if (ExtensionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtensionValue, m_Extension, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member extension is null!");
		}
	}

	if (JsonDoc.HasMember("bucket"))
	{
		const rapidjson::Value& BucketValue = JsonDoc["bucket"];

		if (BucketValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketValue, m_Bucket, LogSystem);
		}
	}

	if (JsonDoc.HasMember("bucketInfo"))
	{
		const rapidjson::Value& BucketInfoValue = JsonDoc["bucketInfo"];

		if (BucketInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketInfoValue, m_BucketInfo, LogSystem);
		}
	}

	if (JsonDoc.HasMember("fullUrl"))
	{
		const rapidjson::Value& FullUrlValue = JsonDoc["fullUrl"];

		if (FullUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FullUrlValue, m_FullUrl, LogSystem);
		}
	}

	if (JsonDoc.HasMember("mimeType"))
	{
		const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

		if (MimeTypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MimeTypeValue, m_MimeType, LogSystem);
		}
	}
}


utility::string_t MusubiFileInfo::GetSource() const
{
	return m_Source.value();
}

bool MusubiFileInfo::HasSource() const
{
	return m_Source.has_value();
}
void MusubiFileInfo::SetSource(const utility::string_t& Value)
{
	m_Source = Value;
}
std::shared_ptr<FileSource> MusubiFileInfo::GetFileSource() const
{
	return m_FileSource.value();
}

bool MusubiFileInfo::HasFileSource() const
{
	return m_FileSource.has_value();
}
void MusubiFileInfo::SetFileSource(const std::shared_ptr<FileSource>& Value)
{
	m_FileSource = Value;
}
utility::string_t MusubiFileInfo::GetDirectory() const
{
	return m_Directory.value();
}

bool MusubiFileInfo::HasDirectory() const
{
	return m_Directory.has_value();
}
void MusubiFileInfo::SetDirectory(const utility::string_t& Value)
{
	m_Directory = Value;
}
utility::string_t MusubiFileInfo::GetFilename() const
{
	return m_Filename.value();
}

bool MusubiFileInfo::HasFilename() const
{
	return m_Filename.has_value();
}
void MusubiFileInfo::SetFilename(const utility::string_t& Value)
{
	m_Filename = Value;
}
utility::string_t MusubiFileInfo::GetExtension() const
{
	return m_Extension.value();
}

bool MusubiFileInfo::HasExtension() const
{
	return m_Extension.has_value();
}
void MusubiFileInfo::SetExtension(const utility::string_t& Value)
{
	m_Extension = Value;
}
utility::string_t MusubiFileInfo::GetBucket() const
{
	return m_Bucket.value();
}

bool MusubiFileInfo::HasBucket() const
{
	return m_Bucket.has_value();
}
void MusubiFileInfo::SetBucket(const utility::string_t& Value)
{
	m_Bucket = Value;
}
utility::string_t MusubiFileInfo::GetBucketInfo() const
{
	return m_BucketInfo.value();
}

bool MusubiFileInfo::HasBucketInfo() const
{
	return m_BucketInfo.has_value();
}
void MusubiFileInfo::SetBucketInfo(const utility::string_t& Value)
{
	m_BucketInfo = Value;
}
utility::string_t MusubiFileInfo::GetFullUrl() const
{
	return m_FullUrl.value();
}

bool MusubiFileInfo::HasFullUrl() const
{
	return m_FullUrl.has_value();
}
void MusubiFileInfo::SetFullUrl(const utility::string_t& Value)
{
	m_FullUrl = Value;
}
utility::string_t MusubiFileInfo::GetMimeType() const
{
	return m_MimeType.value();
}

bool MusubiFileInfo::HasMimeType() const
{
	return m_MimeType.has_value();
}
void MusubiFileInfo::SetMimeType(const utility::string_t& Value)
{
	m_MimeType = Value;
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

void NamedFunction::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "NamedFunction::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("functionName"))
	{
		const rapidjson::Value& FunctionNameValue = JsonDoc["functionName"];

		if (FunctionNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FunctionNameValue, m_FunctionName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("deprecationDatetime"))
	{
		const rapidjson::Value& DeprecationDatetimeValue = JsonDoc["deprecationDatetime"];

		if (DeprecationDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DeprecationDatetimeValue, m_DeprecationDatetime, LogSystem);
		}
	}

	if (JsonDoc.HasMember("endOfLifeDatetime"))
	{
		const rapidjson::Value& EndOfLifeDatetimeValue = JsonDoc["endOfLifeDatetime"];

		if (EndOfLifeDatetimeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EndOfLifeDatetimeValue, m_EndOfLifeDatetime, LogSystem);
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

void PersonDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PersonDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("departmentId"))
	{
		const rapidjson::Value& DepartmentIdValue = JsonDoc["departmentId"];

		if (DepartmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentIdValue, m_DepartmentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title, LogSystem);
		}
	}

	if (JsonDoc.HasMember("weeklyCapacityHours"))
	{
		const rapidjson::Value& WeeklyCapacityHoursValue = JsonDoc["weeklyCapacityHours"];

		if (WeeklyCapacityHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeeklyCapacityHoursValue, m_WeeklyCapacityHours, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member weeklyCapacityHours is null!");
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isActive is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location, LogSystem);
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

void PersonUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PersonUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("departmentId"))
	{
		const rapidjson::Value& DepartmentIdValue = JsonDoc["departmentId"];

		if (DepartmentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentIdValue, m_DepartmentId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member departmentId is null!");
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title, LogSystem);
		}
	}

	if (JsonDoc.HasMember("weeklyCapacityHours"))
	{
		const rapidjson::Value& WeeklyCapacityHoursValue = JsonDoc["weeklyCapacityHours"];

		if (WeeklyCapacityHoursValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeeklyCapacityHoursValue, m_WeeklyCapacityHours, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member weeklyCapacityHours is null!");
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isActive is null!");
		}
	}

	if (JsonDoc.HasMember("location"))
	{
		const rapidjson::Value& LocationValue = JsonDoc["location"];

		if (LocationValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationValue, m_Location, LogSystem);
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

void ProblemDetails::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProblemDetails::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("title"))
	{
		const rapidjson::Value& TitleValue = JsonDoc["title"];

		if (TitleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TitleValue, m_Title, LogSystem);
		}
	}

	if (JsonDoc.HasMember("status"))
	{
		const rapidjson::Value& StatusValue = JsonDoc["status"];

		if (StatusValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StatusValue, m_Status, LogSystem);
		}
	}

	if (JsonDoc.HasMember("detail"))
	{
		const rapidjson::Value& DetailValue = JsonDoc["detail"];

		if (DetailValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DetailValue, m_Detail, LogSystem);
		}
	}

	if (JsonDoc.HasMember("instance"))
	{
		const rapidjson::Value& InstanceValue = JsonDoc["instance"];

		if (InstanceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(InstanceValue, m_Instance, LogSystem);
		}
	}

	if (JsonDoc.HasMember("extensions"))
	{
		const rapidjson::Value& ExtensionsValue = JsonDoc["extensions"];

		if (ExtensionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtensionsValue, m_Extensions, LogSystem);
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

void ProjectDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProjectDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("colour"))
	{
		const rapidjson::Value& ColourValue = JsonDoc["colour"];

		if (ColourValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColourValue, m_Colour, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isActive is null!");
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

void ProjectUpsertRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ProjectUpsertRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("colour"))
	{
		const rapidjson::Value& ColourValue = JsonDoc["colour"];

		if (ColourValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ColourValue, m_Colour, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isActive"))
	{
		const rapidjson::Value& IsActiveValue = JsonDoc["isActive"];

		if (IsActiveValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsActiveValue, m_IsActive, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isActive is null!");
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

	if (m_IsGlobal.has_value())
	{
		rapidjson::Value IsGlobalValue(TypeToJsonValue(m_IsGlobal, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("isGlobal", IsGlobalValue, JsonDoc.GetAllocator());
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

void PrototypeDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PrototypeDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("metadata"))
	{
		const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

		if (MetadataValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MetadataValue, m_Metadata, LogSystem);
		}
	}

	if (JsonDoc.HasMember("uiStrings"))
	{
		const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

		if (UiStringsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UiStringsValue, m_UiStrings, LogSystem);
		}
	}

	if (JsonDoc.HasMember("state"))
	{
		const rapidjson::Value& StateValue = JsonDoc["state"];

		if (StateValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(StateValue, m_State, LogSystem);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestId"))
	{
		const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

		if (PointOfInterestIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAt"))
	{
		const rapidjson::Value& CreatedAtValue = JsonDoc["createdAt"];

		if (CreatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAtValue, m_CreatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedBy"))
	{
		const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

		if (UpdatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedByValue, m_UpdatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("updatedAt"))
	{
		const rapidjson::Value& UpdatedAtValue = JsonDoc["updatedAt"];

		if (UpdatedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UpdatedAtValue, m_UpdatedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("highlander"))
	{
		const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

		if (HighlanderValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighlanderValue, m_Highlander, LogSystem);
		}
	}

	if (JsonDoc.HasMember("type"))
	{
		const rapidjson::Value& TypeValue = JsonDoc["type"];

		if (TypeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypeValue, m_Type, LogSystem);
		}
	}

	if (JsonDoc.HasMember("systemOwned"))
	{
		const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

		if (SystemOwnedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemOwnedValue, m_SystemOwned, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerId"))
	{
		const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

		if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isGlobal"))
	{
		const rapidjson::Value& IsGlobalValue = JsonDoc["isGlobal"];

		if (IsGlobalValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsGlobalValue, m_IsGlobal, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isGlobal is null!");
		}
	}

	if (JsonDoc.HasMember("readAccess"))
	{
		const rapidjson::Value& ReadAccessValue = JsonDoc["readAccess"];

		if (ReadAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessValue, m_ReadAccess, LogSystem);
		}
	}

	if (JsonDoc.HasMember("writeAccess"))
	{
		const rapidjson::Value& WriteAccessValue = JsonDoc["writeAccess"];

		if (WriteAccessValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessValue, m_WriteAccess, LogSystem);
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
bool PrototypeDto::GetIsGlobal() const
{
	return m_IsGlobal.value();
}

bool PrototypeDto::HasIsGlobal() const
{
	return m_IsGlobal.has_value();
}
void PrototypeDto::SetIsGlobal(const bool& Value)
{
	m_IsGlobal = Value;
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

void PrototypeDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PrototypeDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
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

PrototypeFilters::PrototypeFilters()
{
}
PrototypeFilters::~PrototypeFilters()
{
}

utility::string_t PrototypeFilters::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Tags.has_value())
	{
		rapidjson::Value TagsValue(TypeToJsonValue(m_Tags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tags", TagsValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludedTags.has_value())
	{
		rapidjson::Value ExcludedTagsValue(TypeToJsonValue(m_ExcludedTags, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludedTags", ExcludedTagsValue, JsonDoc.GetAllocator());
	}

	if (m_TagsAll.has_value())
	{
		rapidjson::Value TagsAllValue(TypeToJsonValue(m_TagsAll, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tagsAll", TagsAllValue, JsonDoc.GetAllocator());
	}

	if (m_Ids.has_value())
	{
		rapidjson::Value IdsValue(TypeToJsonValue(m_Ids, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("ids", IdsValue, JsonDoc.GetAllocator());
	}

	if (m_Names.has_value())
	{
		rapidjson::Value NamesValue(TypeToJsonValue(m_Names, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("names", NamesValue, JsonDoc.GetAllocator());
	}

	if (m_PartialNames.has_value())
	{
		rapidjson::Value PartialNamesValue(TypeToJsonValue(m_PartialNames, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("partialNames", PartialNamesValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludedIds.has_value())
	{
		rapidjson::Value ExcludedIdsValue(TypeToJsonValue(m_ExcludedIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludedIds", ExcludedIdsValue, JsonDoc.GetAllocator());
	}

	if (m_PointOfInterestIds.has_value())
	{
		rapidjson::Value PointOfInterestIdsValue(TypeToJsonValue(m_PointOfInterestIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("pointOfInterestIds", PointOfInterestIdsValue, JsonDoc.GetAllocator());
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

	if (m_Types.has_value())
	{
		rapidjson::Value TypesValue(TypeToJsonValue(m_Types, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("types", TypesValue, JsonDoc.GetAllocator());
	}

	if (m_HasGroup.has_value())
	{
		rapidjson::Value HasGroupValue(TypeToJsonValue(m_HasGroup, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("hasGroup", HasGroupValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedBy.has_value())
	{
		rapidjson::Value CreatedByValue(TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdBy", CreatedByValue, JsonDoc.GetAllocator());
	}

	if (m_CreatedAfter.has_value())
	{
		rapidjson::Value CreatedAfterValue(TypeToJsonValue(m_CreatedAfter, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("createdAfter", CreatedAfterValue, JsonDoc.GetAllocator());
	}

	if (m_PrototypeOwnerIds.has_value())
	{
		rapidjson::Value PrototypeOwnerIdsValue(TypeToJsonValue(m_PrototypeOwnerIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypeOwnerIds", PrototypeOwnerIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ReadAccessFilters.has_value())
	{
		rapidjson::Value ReadAccessFiltersValue(TypeToJsonValue(m_ReadAccessFilters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("readAccessFilters", ReadAccessFiltersValue, JsonDoc.GetAllocator());
	}

	if (m_WriteAccessFilters.has_value())
	{
		rapidjson::Value WriteAccessFiltersValue(TypeToJsonValue(m_WriteAccessFilters, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("writeAccessFilters", WriteAccessFiltersValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludedTypes.has_value())
	{
		rapidjson::Value ExcludedTypesValue(TypeToJsonValue(m_ExcludedTypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludedTypes", ExcludedTypesValue, JsonDoc.GetAllocator());
	}

	if (m_Scope.has_value())
	{
		rapidjson::Value ScopeValue(TypeToJsonValue(m_Scope, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("scope", ScopeValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PrototypeFilters::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "PrototypeFilters::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("excludedTags"))
	{
		const rapidjson::Value& ExcludedTagsValue = JsonDoc["excludedTags"];

		if (ExcludedTagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedTagsValue, m_ExcludedTags, LogSystem);
		}
	}

	if (JsonDoc.HasMember("tagsAll"))
	{
		const rapidjson::Value& TagsAllValue = JsonDoc["tagsAll"];

		if (TagsAllValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsAllValue, m_TagsAll, LogSystem);
		}
	}

	if (JsonDoc.HasMember("ids"))
	{
		const rapidjson::Value& IdsValue = JsonDoc["ids"];

		if (IdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdsValue, m_Ids, LogSystem);
		}
	}

	if (JsonDoc.HasMember("names"))
	{
		const rapidjson::Value& NamesValue = JsonDoc["names"];

		if (NamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NamesValue, m_Names, LogSystem);
		}
	}

	if (JsonDoc.HasMember("partialNames"))
	{
		const rapidjson::Value& PartialNamesValue = JsonDoc["partialNames"];

		if (PartialNamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PartialNamesValue, m_PartialNames, LogSystem);
		}
	}

	if (JsonDoc.HasMember("excludedIds"))
	{
		const rapidjson::Value& ExcludedIdsValue = JsonDoc["excludedIds"];

		if (ExcludedIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedIdsValue, m_ExcludedIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestIds"))
	{
		const rapidjson::Value& PointOfInterestIdsValue = JsonDoc["pointOfInterestIds"];

		if (PointOfInterestIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdsValue, m_PointOfInterestIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("parentId"))
	{
		const rapidjson::Value& ParentIdValue = JsonDoc["parentId"];

		if (ParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ParentIdValue, m_ParentId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupIds"))
	{
		const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

		if (GroupIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdsValue, m_GroupIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("types"))
	{
		const rapidjson::Value& TypesValue = JsonDoc["types"];

		if (TypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypesValue, m_Types, LogSystem);
		}
	}

	if (JsonDoc.HasMember("hasGroup"))
	{
		const rapidjson::Value& HasGroupValue = JsonDoc["hasGroup"];

		if (HasGroupValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasGroupValue, m_HasGroup, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdBy"))
	{
		const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

		if (CreatedByValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedByValue, m_CreatedBy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("createdAfter"))
	{
		const rapidjson::Value& CreatedAfterValue = JsonDoc["createdAfter"];

		if (CreatedAfterValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAfterValue, m_CreatedAfter, LogSystem);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerIds"))
	{
		const rapidjson::Value& PrototypeOwnerIdsValue = JsonDoc["prototypeOwnerIds"];

		if (PrototypeOwnerIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdsValue, m_PrototypeOwnerIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("readAccessFilters"))
	{
		const rapidjson::Value& ReadAccessFiltersValue = JsonDoc["readAccessFilters"];

		if (ReadAccessFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessFiltersValue, m_ReadAccessFilters, LogSystem);
		}
	}

	if (JsonDoc.HasMember("writeAccessFilters"))
	{
		const rapidjson::Value& WriteAccessFiltersValue = JsonDoc["writeAccessFilters"];

		if (WriteAccessFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessFiltersValue, m_WriteAccessFilters, LogSystem);
		}
	}

	if (JsonDoc.HasMember("excludedTypes"))
	{
		const rapidjson::Value& ExcludedTypesValue = JsonDoc["excludedTypes"];

		if (ExcludedTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedTypesValue, m_ExcludedTypes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("scope"))
	{
		const rapidjson::Value& ScopeValue = JsonDoc["scope"];

		if (ScopeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ScopeValue, m_Scope, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member scope is null!");
		}
	}
}


const std::vector<utility::string_t>& PrototypeFilters::GetTags() const
{
	return m_Tags.value();
}

bool PrototypeFilters::HasTags() const
{
	return m_Tags.has_value();
}
void PrototypeFilters::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetExcludedTags() const
{
	return m_ExcludedTags.value();
}

bool PrototypeFilters::HasExcludedTags() const
{
	return m_ExcludedTags.has_value();
}
void PrototypeFilters::SetExcludedTags(const std::vector<utility::string_t>& Value)
{
	m_ExcludedTags = Value;
}
bool PrototypeFilters::GetTagsAll() const
{
	return m_TagsAll.value();
}

bool PrototypeFilters::HasTagsAll() const
{
	return m_TagsAll.has_value();
}
void PrototypeFilters::SetTagsAll(const bool& Value)
{
	m_TagsAll = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetIds() const
{
	return m_Ids.value();
}

bool PrototypeFilters::HasIds() const
{
	return m_Ids.has_value();
}
void PrototypeFilters::SetIds(const std::vector<utility::string_t>& Value)
{
	m_Ids = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetNames() const
{
	return m_Names.value();
}

bool PrototypeFilters::HasNames() const
{
	return m_Names.has_value();
}
void PrototypeFilters::SetNames(const std::vector<utility::string_t>& Value)
{
	m_Names = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetPartialNames() const
{
	return m_PartialNames.value();
}

bool PrototypeFilters::HasPartialNames() const
{
	return m_PartialNames.has_value();
}
void PrototypeFilters::SetPartialNames(const std::vector<utility::string_t>& Value)
{
	m_PartialNames = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetExcludedIds() const
{
	return m_ExcludedIds.value();
}

bool PrototypeFilters::HasExcludedIds() const
{
	return m_ExcludedIds.has_value();
}
void PrototypeFilters::SetExcludedIds(const std::vector<utility::string_t>& Value)
{
	m_ExcludedIds = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetPointOfInterestIds() const
{
	return m_PointOfInterestIds.value();
}

bool PrototypeFilters::HasPointOfInterestIds() const
{
	return m_PointOfInterestIds.has_value();
}
void PrototypeFilters::SetPointOfInterestIds(const std::vector<utility::string_t>& Value)
{
	m_PointOfInterestIds = Value;
}
utility::string_t PrototypeFilters::GetParentId() const
{
	return m_ParentId.value();
}

bool PrototypeFilters::HasParentId() const
{
	return m_ParentId.has_value();
}
void PrototypeFilters::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool PrototypeFilters::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void PrototypeFilters::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetTypes() const
{
	return m_Types.value();
}

bool PrototypeFilters::HasTypes() const
{
	return m_Types.has_value();
}
void PrototypeFilters::SetTypes(const std::vector<utility::string_t>& Value)
{
	m_Types = Value;
}
bool PrototypeFilters::GetHasGroup() const
{
	return m_HasGroup.value();
}

bool PrototypeFilters::HasHasGroup() const
{
	return m_HasGroup.has_value();
}
void PrototypeFilters::SetHasGroup(const bool& Value)
{
	m_HasGroup = Value;
}
utility::string_t PrototypeFilters::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool PrototypeFilters::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
void PrototypeFilters::SetCreatedBy(const utility::string_t& Value)
{
	m_CreatedBy = Value;
}
utility::string_t PrototypeFilters::GetCreatedAfter() const
{
	return m_CreatedAfter.value();
}

bool PrototypeFilters::HasCreatedAfter() const
{
	return m_CreatedAfter.has_value();
}
void PrototypeFilters::SetCreatedAfter(const utility::string_t& Value)
{
	m_CreatedAfter = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetPrototypeOwnerIds() const
{
	return m_PrototypeOwnerIds.value();
}

bool PrototypeFilters::HasPrototypeOwnerIds() const
{
	return m_PrototypeOwnerIds.has_value();
}
void PrototypeFilters::SetPrototypeOwnerIds(const std::vector<utility::string_t>& Value)
{
	m_PrototypeOwnerIds = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetReadAccessFilters() const
{
	return m_ReadAccessFilters.value();
}

bool PrototypeFilters::HasReadAccessFilters() const
{
	return m_ReadAccessFilters.has_value();
}
void PrototypeFilters::SetReadAccessFilters(const std::vector<utility::string_t>& Value)
{
	m_ReadAccessFilters = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetWriteAccessFilters() const
{
	return m_WriteAccessFilters.value();
}

bool PrototypeFilters::HasWriteAccessFilters() const
{
	return m_WriteAccessFilters.has_value();
}
void PrototypeFilters::SetWriteAccessFilters(const std::vector<utility::string_t>& Value)
{
	m_WriteAccessFilters = Value;
}
const std::vector<utility::string_t>& PrototypeFilters::GetExcludedTypes() const
{
	return m_ExcludedTypes.value();
}

bool PrototypeFilters::HasExcludedTypes() const
{
	return m_ExcludedTypes.has_value();
}
void PrototypeFilters::SetExcludedTypes(const std::vector<utility::string_t>& Value)
{
	m_ExcludedTypes = Value;
}
std::shared_ptr<GlobalScopeFilter> PrototypeFilters::GetScope() const
{
	return m_Scope.value();
}

bool PrototypeFilters::HasScope() const
{
	return m_Scope.has_value();
}
void PrototypeFilters::SetScope(const std::shared_ptr<GlobalScopeFilter>& Value)
{
	m_Scope = Value;
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

void QueueEntryDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueEntryDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("userId"))
	{
		const rapidjson::Value& UserIdValue = JsonDoc["userId"];

		if (UserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserIdValue, m_UserId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("userName"))
	{
		const rapidjson::Value& UserNameValue = JsonDoc["userName"];

		if (UserNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UserNameValue, m_UserName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("enqueuedAt"))
	{
		const rapidjson::Value& EnqueuedAtValue = JsonDoc["enqueuedAt"];

		if (EnqueuedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(EnqueuedAtValue, m_EnqueuedAt, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member enqueuedAt is null!");
		}
	}

	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note, LogSystem);
		}
	}

	if (JsonDoc.HasMember("position"))
	{
		const rapidjson::Value& PositionValue = JsonDoc["position"];

		if (PositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PositionValue, m_Position, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member position is null!");
		}
	}

	if (JsonDoc.HasMember("isReserved"))
	{
		const rapidjson::Value& IsReservedValue = JsonDoc["isReserved"];

		if (IsReservedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsReservedValue, m_IsReserved, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isReserved is null!");
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

void QueueOutcomeDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "QueueOutcomeDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("outcome"))
	{
		const rapidjson::Value& OutcomeValue = JsonDoc["outcome"];

		if (OutcomeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutcomeValue, m_Outcome, LogSystem);
		}
	}

	if (JsonDoc.HasMember("system"))
	{
		const rapidjson::Value& SystemValue = JsonDoc["system"];

		if (SystemValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SystemValue, m_System, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member system is null!");
		}
	}

	if (JsonDoc.HasMember("position"))
	{
		const rapidjson::Value& PositionValue = JsonDoc["position"];

		if (PositionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PositionValue, m_Position, LogSystem);
		}
	}

	if (JsonDoc.HasMember("queueDepth"))
	{
		const rapidjson::Value& QueueDepthValue = JsonDoc["queueDepth"];

		if (QueueDepthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueDepthValue, m_QueueDepth, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member queueDepth is null!");
		}
	}

	if (JsonDoc.HasMember("message"))
	{
		const rapidjson::Value& MessageValue = JsonDoc["message"];

		if (MessageValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MessageValue, m_Message, LogSystem);
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

RegisterOwnProjectRequest::RegisterOwnProjectRequest()
{
}
RegisterOwnProjectRequest::~RegisterOwnProjectRequest()
{
}

utility::string_t RegisterOwnProjectRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_GcpProjectId.has_value())
	{
		rapidjson::Value GcpProjectIdValue(TypeToJsonValue(m_GcpProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpProjectId", GcpProjectIdValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void RegisterOwnProjectRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RegisterOwnProjectRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("gcpProjectId"))
	{
		const rapidjson::Value& GcpProjectIdValue = JsonDoc["gcpProjectId"];

		if (GcpProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpProjectIdValue, m_GcpProjectId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member gcpProjectId is null!");
		}
	}
}


utility::string_t RegisterOwnProjectRequest::GetGcpProjectId() const
{
	return m_GcpProjectId.value();
}

bool RegisterOwnProjectRequest::HasGcpProjectId() const
{
	return m_GcpProjectId.has_value();
}
void RegisterOwnProjectRequest::SetGcpProjectId(const utility::string_t& Value)
{
	m_GcpProjectId = Value;
}

RegisterProjectRequest::RegisterProjectRequest()
{
}
RegisterProjectRequest::~RegisterProjectRequest()
{
}

utility::string_t RegisterProjectRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_GcpProjectId.has_value())
	{
		rapidjson::Value GcpProjectIdValue(TypeToJsonValue(m_GcpProjectId, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("gcpProjectId", GcpProjectIdValue, JsonDoc.GetAllocator());
	}

	if (m_TenantName.has_value())
	{
		rapidjson::Value TenantNameValue(TypeToJsonValue(m_TenantName, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("tenantName", TenantNameValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void RegisterProjectRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RegisterProjectRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("gcpProjectId"))
	{
		const rapidjson::Value& GcpProjectIdValue = JsonDoc["gcpProjectId"];

		if (GcpProjectIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GcpProjectIdValue, m_GcpProjectId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member gcpProjectId is null!");
		}
	}

	if (JsonDoc.HasMember("tenantName"))
	{
		const rapidjson::Value& TenantNameValue = JsonDoc["tenantName"];

		if (TenantNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TenantNameValue, m_TenantName, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member tenantName is null!");
		}
	}
}


utility::string_t RegisterProjectRequest::GetGcpProjectId() const
{
	return m_GcpProjectId.value();
}

bool RegisterProjectRequest::HasGcpProjectId() const
{
	return m_GcpProjectId.has_value();
}
void RegisterProjectRequest::SetGcpProjectId(const utility::string_t& Value)
{
	m_GcpProjectId = Value;
}
utility::string_t RegisterProjectRequest::GetTenantName() const
{
	return m_TenantName.value();
}

bool RegisterProjectRequest::HasTenantName() const
{
	return m_TenantName.has_value();
}
void RegisterProjectRequest::SetTenantName(const utility::string_t& Value)
{
	m_TenantName = Value;
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

void RosterConfigDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RosterConfigDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("weekStartDay"))
	{
		const rapidjson::Value& WeekStartDayValue = JsonDoc["weekStartDay"];

		if (WeekStartDayValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WeekStartDayValue, m_WeekStartDay, LogSystem);
		}
	}

	if (JsonDoc.HasMember("underUtilizedBelowPercent"))
	{
		const rapidjson::Value& UnderUtilizedBelowPercentValue = JsonDoc["underUtilizedBelowPercent"];

		if (UnderUtilizedBelowPercentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UnderUtilizedBelowPercentValue, m_UnderUtilizedBelowPercent, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member underUtilizedBelowPercent is null!");
		}
	}

	if (JsonDoc.HasMember("overBookedAbovePercent"))
	{
		const rapidjson::Value& OverBookedAbovePercentValue = JsonDoc["overBookedAbovePercent"];

		if (OverBookedAbovePercentValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OverBookedAbovePercentValue, m_OverBookedAbovePercent, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member overBookedAbovePercent is null!");
		}
	}

	if (JsonDoc.HasMember("locations"))
	{
		const rapidjson::Value& LocationsValue = JsonDoc["locations"];

		if (LocationsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LocationsValue, m_Locations, LogSystem);
		}
	}

	if (JsonDoc.HasMember("groupId"))
	{
		const rapidjson::Value& GroupIdValue = JsonDoc["groupId"];

		if (GroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GroupIdValue, m_GroupId, LogSystem);
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

void RosterSnapshotDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "RosterSnapshotDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("config"))
	{
		const rapidjson::Value& ConfigValue = JsonDoc["config"];

		if (ConfigValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ConfigValue, m_Config, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member config is null!");
		}
	}

	if (JsonDoc.HasMember("departments"))
	{
		const rapidjson::Value& DepartmentsValue = JsonDoc["departments"];

		if (DepartmentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DepartmentsValue, m_Departments, LogSystem);
		}
	}

	if (JsonDoc.HasMember("people"))
	{
		const rapidjson::Value& PeopleValue = JsonDoc["people"];

		if (PeopleValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PeopleValue, m_People, LogSystem);
		}
	}

	if (JsonDoc.HasMember("projects"))
	{
		const rapidjson::Value& ProjectsValue = JsonDoc["projects"];

		if (ProjectsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ProjectsValue, m_Projects, LogSystem);
		}
	}

	if (JsonDoc.HasMember("assignments"))
	{
		const rapidjson::Value& AssignmentsValue = JsonDoc["assignments"];

		if (AssignmentsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssignmentsValue, m_Assignments, LogSystem);
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

void ServiceVersionInfo::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "ServiceVersionInfo::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("containerVersion"))
	{
		const rapidjson::Value& ContainerVersionValue = JsonDoc["containerVersion"];

		if (ContainerVersionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ContainerVersionValue, m_ContainerVersion, LogSystem);
		}
	}

	if (JsonDoc.HasMember("serviceName"))
	{
		const rapidjson::Value& ServiceNameValue = JsonDoc["serviceName"];

		if (ServiceNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ServiceNameValue, m_ServiceName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("reverseProxy"))
	{
		const rapidjson::Value& ReverseProxyValue = JsonDoc["reverseProxy"];

		if (ReverseProxyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReverseProxyValue, m_ReverseProxy, LogSystem);
		}
	}

	if (JsonDoc.HasMember("versionedServices"))
	{
		const rapidjson::Value& VersionedServicesValue = JsonDoc["versionedServices"];

		if (VersionedServicesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionedServicesValue, m_VersionedServices, LogSystem);
		}
	}

	if (JsonDoc.HasMember("versionedFunctions"))
	{
		const rapidjson::Value& VersionedFunctionsValue = JsonDoc["versionedFunctions"];

		if (VersionedFunctionsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(VersionedFunctionsValue, m_VersionedFunctions, LogSystem);
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

void StringDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "StringDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
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

SubmitTerraformOutputRequest::SubmitTerraformOutputRequest()
{
}
SubmitTerraformOutputRequest::~SubmitTerraformOutputRequest()
{
}

utility::string_t SubmitTerraformOutputRequest::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Output.has_value())
	{
		rapidjson::Value OutputValue(TypeToJsonValue(m_Output, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("output", OutputValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void SubmitTerraformOutputRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SubmitTerraformOutputRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("output"))
	{
		const rapidjson::Value& OutputValue = JsonDoc["output"];

		if (OutputValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OutputValue, m_Output, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member output is null!");
		}
	}
}


utility::string_t SubmitTerraformOutputRequest::GetOutput() const
{
	return m_Output.value();
}

bool SubmitTerraformOutputRequest::HasOutput() const
{
	return m_Output.has_value();
}
void SubmitTerraformOutputRequest::SetOutput(const utility::string_t& Value)
{
	m_Output = Value;
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

void SystemCreateRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemCreateRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description, LogSystem);
		}
	}

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId, LogSystem);
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

void SystemDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id, LogSystem);
		}
	}

	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description, LogSystem);
		}
	}

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url, LogSystem);
		}
	}

	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("isArchived"))
	{
		const rapidjson::Value& IsArchivedValue = JsonDoc["isArchived"];

		if (IsArchivedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IsArchivedValue, m_IsArchived, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member isArchived is null!");
		}
	}

	if (JsonDoc.HasMember("currentHolderId"))
	{
		const rapidjson::Value& CurrentHolderIdValue = JsonDoc["currentHolderId"];

		if (CurrentHolderIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentHolderIdValue, m_CurrentHolderId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("currentHolderName"))
	{
		const rapidjson::Value& CurrentHolderNameValue = JsonDoc["currentHolderName"];

		if (CurrentHolderNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentHolderNameValue, m_CurrentHolderName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("currentNote"))
	{
		const rapidjson::Value& CurrentNoteValue = JsonDoc["currentNote"];

		if (CurrentNoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CurrentNoteValue, m_CurrentNote, LogSystem);
		}
	}

	if (JsonDoc.HasMember("heldSince"))
	{
		const rapidjson::Value& HeldSinceValue = JsonDoc["heldSince"];

		if (HeldSinceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HeldSinceValue, m_HeldSince, LogSystem);
		}
	}

	if (JsonDoc.HasMember("lastReleasedAt"))
	{
		const rapidjson::Value& LastReleasedAtValue = JsonDoc["lastReleasedAt"];

		if (LastReleasedAtValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LastReleasedAtValue, m_LastReleasedAt, LogSystem);
		}
	}

	if (JsonDoc.HasMember("reservedForUserId"))
	{
		const rapidjson::Value& ReservedForUserIdValue = JsonDoc["reservedForUserId"];

		if (ReservedForUserIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedForUserIdValue, m_ReservedForUserId, LogSystem);
		}
	}

	if (JsonDoc.HasMember("reservedUntil"))
	{
		const rapidjson::Value& ReservedUntilValue = JsonDoc["reservedUntil"];

		if (ReservedUntilValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedUntilValue, m_ReservedUntil, LogSystem);
		}
	}

	if (JsonDoc.HasMember("reservedForName"))
	{
		const rapidjson::Value& ReservedForNameValue = JsonDoc["reservedForName"];

		if (ReservedForNameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReservedForNameValue, m_ReservedForName, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member gracePeriodMinutes is null!");
		}
	}

	if (JsonDoc.HasMember("queueDepth"))
	{
		const rapidjson::Value& QueueDepthValue = JsonDoc["queueDepth"];

		if (QueueDepthValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueDepthValue, m_QueueDepth, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member queueDepth is null!");
		}
	}

	if (JsonDoc.HasMember("queueHeadNames"))
	{
		const rapidjson::Value& QueueHeadNamesValue = JsonDoc["queueHeadNames"];

		if (QueueHeadNamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueHeadNamesValue, m_QueueHeadNames, LogSystem);
		}
	}

	if (JsonDoc.HasMember("queueHeadUserIds"))
	{
		const rapidjson::Value& QueueHeadUserIdsValue = JsonDoc["queueHeadUserIds"];

		if (QueueHeadUserIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(QueueHeadUserIdsValue, m_QueueHeadUserIds, LogSystem);
		}
	}

	if (JsonDoc.HasMember("viewerQueued"))
	{
		const rapidjson::Value& ViewerQueuedValue = JsonDoc["viewerQueued"];

		if (ViewerQueuedValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ViewerQueuedValue, m_ViewerQueued, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member viewerQueued is null!");
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

void SystemDtoDataPage::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemDtoDataPage::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("items"))
	{
		const rapidjson::Value& ItemsValue = JsonDoc["items"];

		if (ItemsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemsValue, m_Items, LogSystem);
		}
	}

	if (JsonDoc.HasMember("skip"))
	{
		const rapidjson::Value& SkipValue = JsonDoc["skip"];

		if (SkipValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SkipValue, m_Skip, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member skip is null!");
		}
	}

	if (JsonDoc.HasMember("limit"))
	{
		const rapidjson::Value& LimitValue = JsonDoc["limit"];

		if (LimitValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LimitValue, m_Limit, LogSystem);
		}
	}

	if (JsonDoc.HasMember("itemCount"))
	{
		const rapidjson::Value& ItemCountValue = JsonDoc["itemCount"];

		if (ItemCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemCountValue, m_ItemCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemCount is null!");
		}
	}

	if (JsonDoc.HasMember("itemTotalCount"))
	{
		const rapidjson::Value& ItemTotalCountValue = JsonDoc["itemTotalCount"];

		if (ItemTotalCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ItemTotalCountValue, m_ItemTotalCount, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member itemTotalCount is null!");
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

void SystemThumbnailRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemThumbnailRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("thumbnailPrototypeId"))
	{
		const rapidjson::Value& ThumbnailPrototypeIdValue = JsonDoc["thumbnailPrototypeId"];

		if (ThumbnailPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailPrototypeIdValue, m_ThumbnailPrototypeId, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member thumbnailPrototypeId is null!");
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

void SystemUpdateRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "SystemUpdateRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("name"))
	{
		const rapidjson::Value& NameValue = JsonDoc["name"];

		if (NameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NameValue, m_Name, LogSystem);
		}
		else
		{
			LogSystem.LogMsg(csp::common::LogLevel::Error, "Error: Non-nullable member name is null!");
		}
	}

	if (JsonDoc.HasMember("description"))
	{
		const rapidjson::Value& DescriptionValue = JsonDoc["description"];

		if (DescriptionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DescriptionValue, m_Description, LogSystem);
		}
	}

	if (JsonDoc.HasMember("url"))
	{
		const rapidjson::Value& UrlValue = JsonDoc["url"];

		if (UrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(UrlValue, m_Url, LogSystem);
		}
	}

	if (JsonDoc.HasMember("gracePeriodMinutes"))
	{
		const rapidjson::Value& GracePeriodMinutesValue = JsonDoc["gracePeriodMinutes"];

		if (GracePeriodMinutesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(GracePeriodMinutesValue, m_GracePeriodMinutes, LogSystem);
		}
	}

	if (JsonDoc.HasMember("channelId"))
	{
		const rapidjson::Value& ChannelIdValue = JsonDoc["channelId"];

		if (ChannelIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ChannelIdValue, m_ChannelId, LogSystem);
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

void TakeBatonRequest::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "TakeBatonRequest::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("note"))
	{
		const rapidjson::Value& NoteValue = JsonDoc["note"];

		if (NoteValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NoteValue, m_Note, LogSystem);
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

void WazzupCapabilitiesDto::FromJson(const utility::string_t& Val, csp::common::LogSystem& LogSystem)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	rapidjson::ParseResult ok = csp::json::ParseWithErrorLogging(JsonDoc, Val, "WazzupCapabilitiesDto::FromJson", LogSystem);
	if (!ok)
	{
		return;
	}


	if (JsonDoc.HasMember("transitEncodings"))
	{
		const rapidjson::Value& TransitEncodingsValue = JsonDoc["transitEncodings"];

		if (TransitEncodingsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TransitEncodingsValue, m_TransitEncodings, LogSystem);
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


} // namespace csp::services::generated::prototypeservice