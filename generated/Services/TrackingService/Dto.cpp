

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Json/JsonParseHelper.h"
#include <optional>


using namespace csp::web;


namespace csp::services::generated::trackingservice
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


} // namespace csp::services::generated::trackingservice