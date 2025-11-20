

#include "Dto.h"

#include "Common/Web/Json.h"
#include "Common/Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::prototypeservice
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

	JsonDoc.Parse(Val.c_str());


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

	JsonDoc.Parse(Val.c_str());


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

	JsonDoc.Parse(Val.c_str());


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

void AssetPipelineModelDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId);
		}
	}

	if (JsonDoc.HasMember("thumbnailsCount"))
	{
		const rapidjson::Value& ThumbnailsCountValue = JsonDoc["thumbnailsCount"];

		if (ThumbnailsCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailsCountValue, m_ThumbnailsCount);
		}
	}

	if (JsonDoc.HasMember("thumbnails"))
	{
		const rapidjson::Value& ThumbnailsValue = JsonDoc["thumbnails"];

		if (ThumbnailsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailsValue, m_Thumbnails);
		}
	}

	if (JsonDoc.HasMember("lodLevelsCount"))
	{
		const rapidjson::Value& LodLevelsCountValue = JsonDoc["lodLevelsCount"];

		if (LodLevelsCountValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelsCountValue, m_LodLevelsCount);
		}
	}

	if (JsonDoc.HasMember("lodLevels"))
	{
		const rapidjson::Value& LodLevelsValue = JsonDoc["lodLevels"];

		if (LodLevelsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelsValue, m_LodLevels);
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

void AssetPipelineModelLodLevelDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId);
		}
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

	if (JsonDoc.HasMember("lodLevelNumber"))
	{
		const rapidjson::Value& LodLevelNumberValue = JsonDoc["lodLevelNumber"];

		if (LodLevelNumberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(LodLevelNumberValue, m_LodLevelNumber);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member lodLevelNumber is null!");
		}
	}

	if (JsonDoc.HasMember("simplifyRatio"))
	{
		const rapidjson::Value& SimplifyRatioValue = JsonDoc["simplifyRatio"];

		if (SimplifyRatioValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SimplifyRatioValue, m_SimplifyRatio);
		}
	}

	if (JsonDoc.HasMember("errorTolerance"))
	{
		const rapidjson::Value& ErrorToleranceValue = JsonDoc["errorTolerance"];

		if (ErrorToleranceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ErrorToleranceValue, m_ErrorTolerance);
		}
	}

	if (JsonDoc.HasMember("maxTextureSize"))
	{
		const rapidjson::Value& MaxTextureSizeValue = JsonDoc["maxTextureSize"];

		if (MaxTextureSizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxTextureSizeValue, m_MaxTextureSize);
		}
	}

	if (JsonDoc.HasMember("maxLightMapSize"))
	{
		const rapidjson::Value& MaxLightMapSizeValue = JsonDoc["maxLightMapSize"];

		if (MaxLightMapSizeValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(MaxLightMapSizeValue, m_MaxLightMapSize);
		}
	}

	if (JsonDoc.HasMember("compressNormals"))
	{
		const rapidjson::Value& CompressNormalsValue = JsonDoc["compressNormals"];

		if (CompressNormalsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompressNormalsValue, m_CompressNormals);
		}
	}

	if (JsonDoc.HasMember("compressOcclusion"))
	{
		const rapidjson::Value& CompressOcclusionValue = JsonDoc["compressOcclusion"];

		if (CompressOcclusionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CompressOcclusionValue, m_CompressOcclusion);
		}
	}

	if (JsonDoc.HasMember("highQualityTextures"))
	{
		const rapidjson::Value& HighQualityTexturesValue = JsonDoc["highQualityTextures"];

		if (HighQualityTexturesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HighQualityTexturesValue, m_HighQualityTextures);
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

void AssetPipelineThumbnailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
		}
	}

	if (JsonDoc.HasMember("assetDetailId"))
	{
		const rapidjson::Value& AssetDetailIdValue = JsonDoc["assetDetailId"];

		if (AssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailIdValue, m_AssetDetailId);
		}
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

	if (JsonDoc.HasMember("thumbnailNumber"))
	{
		const rapidjson::Value& ThumbnailNumberValue = JsonDoc["thumbnailNumber"];

		if (ThumbnailNumberValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ThumbnailNumberValue, m_ThumbnailNumber);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member thumbnailNumber is null!");
		}
	}

	if (JsonDoc.HasMember("imageSizeX"))
	{
		const rapidjson::Value& ImageSizeXValue = JsonDoc["imageSizeX"];

		if (ImageSizeXValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageSizeXValue, m_ImageSizeX);
		}
	}

	if (JsonDoc.HasMember("imageSizeY"))
	{
		const rapidjson::Value& ImageSizeYValue = JsonDoc["imageSizeY"];

		if (ImageSizeYValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ImageSizeYValue, m_ImageSizeY);
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

void BulkUpsertAssetDetailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("id"))
	{
		const rapidjson::Value& IdValue = JsonDoc["id"];

		if (IdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdValue, m_Id);
		}
	}

	if (JsonDoc.HasMember("prototypeId"))
	{
		const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

		if (PrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeIdValue, m_PrototypeId);
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

void BulkUpsertPrototypeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


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
utility::string_t BulkUpsertPrototypeDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool BulkUpsertPrototypeDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
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

	JsonDoc.Parse(Val.c_str());


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

void CopiedAssetDetailDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("originalAssetDetailId"))
	{
		const rapidjson::Value& OriginalAssetDetailIdValue = JsonDoc["originalAssetDetailId"];

		if (OriginalAssetDetailIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalAssetDetailIdValue, m_OriginalAssetDetailId);
		}
	}

	if (JsonDoc.HasMember("originalPrototypeId"))
	{
		const rapidjson::Value& OriginalPrototypeIdValue = JsonDoc["originalPrototypeId"];

		if (OriginalPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalPrototypeIdValue, m_OriginalPrototypeId);
		}
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

void CopiedPrototypeDto::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("originalPrototypeId"))
	{
		const rapidjson::Value& OriginalPrototypeIdValue = JsonDoc["originalPrototypeId"];

		if (OriginalPrototypeIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalPrototypeIdValue, m_OriginalPrototypeId);
		}
	}

	if (JsonDoc.HasMember("originalParentId"))
	{
		const rapidjson::Value& OriginalParentIdValue = JsonDoc["originalParentId"];

		if (OriginalParentIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalParentIdValue, m_OriginalParentId);
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
utility::string_t CopiedPrototypeDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool CopiedPrototypeDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
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

void CopyPrototypesResult::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("prototypes"))
	{
		const rapidjson::Value& PrototypesValue = JsonDoc["prototypes"];

		if (PrototypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypesValue, m_Prototypes);
		}
	}

	if (JsonDoc.HasMember("assetDetails"))
	{
		const rapidjson::Value& AssetDetailsValue = JsonDoc["assetDetails"];

		if (AssetDetailsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetDetailsValue, m_AssetDetails);
		}
	}

	if (JsonDoc.HasMember("idLookup"))
	{
		const rapidjson::Value& IdLookupValue = JsonDoc["idLookup"];

		if (IdLookupValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdLookupValue, m_IdLookup);
		}
	}

	if (JsonDoc.HasMember("asyncProcessing"))
	{
		const rapidjson::Value& AsyncProcessingValue = JsonDoc["asyncProcessing"];

		if (AsyncProcessingValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AsyncProcessingValue, m_AsyncProcessing);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member asyncProcessing is null!");
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


	return JsonDocToString(JsonDoc);
}

void DuplicateGroupPrototypesOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("originalGroupId"))
	{
		const rapidjson::Value& OriginalGroupIdValue = JsonDoc["originalGroupId"];

		if (OriginalGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalGroupIdValue, m_OriginalGroupId);
		}
	}

	if (JsonDoc.HasMember("newGroupId"))
	{
		const rapidjson::Value& NewGroupIdValue = JsonDoc["newGroupId"];

		if (NewGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupIdValue, m_NewGroupId);
		}
	}

	if (JsonDoc.HasMember("additionalFilters"))
	{
		const rapidjson::Value& AdditionalFiltersValue = JsonDoc["additionalFilters"];

		if (AdditionalFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdditionalFiltersValue, m_AdditionalFilters);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member additionalFilters is null!");
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

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf);
		}
	}

	if (JsonDoc.HasMember("shallowCopy"))
	{
		const rapidjson::Value& ShallowCopyValue = JsonDoc["shallowCopy"];

		if (ShallowCopyValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ShallowCopyValue, m_ShallowCopy);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets);
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


	return JsonDocToString(JsonDoc);
}

void ExportGroupPrototypesOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("coalesenceId"))
	{
		const rapidjson::Value& CoalesenceIdValue = JsonDoc["coalesenceId"];

		if (CoalesenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalesenceIdValue, m_CoalesenceId);
		}
	}

	if (JsonDoc.HasMember("originalGroupId"))
	{
		const rapidjson::Value& OriginalGroupIdValue = JsonDoc["originalGroupId"];

		if (OriginalGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OriginalGroupIdValue, m_OriginalGroupId);
		}
	}

	if (JsonDoc.HasMember("additionalFilters"))
	{
		const rapidjson::Value& AdditionalFiltersValue = JsonDoc["additionalFilters"];

		if (AdditionalFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AdditionalFiltersValue, m_AdditionalFilters);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member additionalFilters is null!");
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

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets);
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

void ImportGroupPrototypesOptions::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("exportId"))
	{
		const rapidjson::Value& ExportIdValue = JsonDoc["exportId"];

		if (ExportIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExportIdValue, m_ExportId);
		}
	}

	if (JsonDoc.HasMember("coalesenceId"))
	{
		const rapidjson::Value& CoalesenceIdValue = JsonDoc["coalesenceId"];

		if (CoalesenceIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CoalesenceIdValue, m_CoalesenceId);
		}
	}

	if (JsonDoc.HasMember("newGroupId"))
	{
		const rapidjson::Value& NewGroupIdValue = JsonDoc["newGroupId"];

		if (NewGroupIdValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NewGroupIdValue, m_NewGroupId);
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

	if (JsonDoc.HasMember("onBehalfOf"))
	{
		const rapidjson::Value& OnBehalfOfValue = JsonDoc["onBehalfOf"];

		if (OnBehalfOfValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(OnBehalfOfValue, m_OnBehalfOf);
		}
	}

	if (JsonDoc.HasMember("includeMusubiGeneratedAssets"))
	{
		const rapidjson::Value& IncludeMusubiGeneratedAssetsValue = JsonDoc["includeMusubiGeneratedAssets"];

		if (IncludeMusubiGeneratedAssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IncludeMusubiGeneratedAssetsValue, m_IncludeMusubiGeneratedAssets);
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

void InternalFileCopyRequest::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("sourceFileInfo"))
	{
		const rapidjson::Value& SourceFileInfoValue = JsonDoc["sourceFileInfo"];

		if (SourceFileInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceFileInfoValue, m_SourceFileInfo);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member sourceFileInfo is null!");
		}
	}

	if (JsonDoc.HasMember("destinationFileInfo"))
	{
		const rapidjson::Value& DestinationFileInfoValue = JsonDoc["destinationFileInfo"];

		if (DestinationFileInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DestinationFileInfoValue, m_DestinationFileInfo);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member destinationFileInfo is null!");
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

	JsonDoc.Parse(Val.c_str());


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

void MusubiFileInfo::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("source"))
	{
		const rapidjson::Value& SourceValue = JsonDoc["source"];

		if (SourceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(SourceValue, m_Source);
		}
	}

	if (JsonDoc.HasMember("fileSource"))
	{
		const rapidjson::Value& FileSourceValue = JsonDoc["fileSource"];

		if (FileSourceValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FileSourceValue, m_FileSource);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member fileSource is null!");
		}
	}

	if (JsonDoc.HasMember("directory"))
	{
		const rapidjson::Value& DirectoryValue = JsonDoc["directory"];

		if (DirectoryValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DirectoryValue, m_Directory);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member directory is null!");
		}
	}

	if (JsonDoc.HasMember("filename"))
	{
		const rapidjson::Value& FilenameValue = JsonDoc["filename"];

		if (FilenameValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FilenameValue, m_Filename);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member filename is null!");
		}
	}

	if (JsonDoc.HasMember("extension"))
	{
		const rapidjson::Value& ExtensionValue = JsonDoc["extension"];

		if (ExtensionValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExtensionValue, m_Extension);
		}
		else
		{
			CSP_LOG_ERROR_MSG("Error: Non-nullable member extension is null!");
		}
	}

	if (JsonDoc.HasMember("bucket"))
	{
		const rapidjson::Value& BucketValue = JsonDoc["bucket"];

		if (BucketValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketValue, m_Bucket);
		}
	}

	if (JsonDoc.HasMember("bucketInfo"))
	{
		const rapidjson::Value& BucketInfoValue = JsonDoc["bucketInfo"];

		if (BucketInfoValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(BucketInfoValue, m_BucketInfo);
		}
	}

	if (JsonDoc.HasMember("fullUrl"))
	{
		const rapidjson::Value& FullUrlValue = JsonDoc["fullUrl"];

		if (FullUrlValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(FullUrlValue, m_FullUrl);
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

void NamedFunction::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


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

	JsonDoc.Parse(Val.c_str());


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

	JsonDoc.Parse(Val.c_str());


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

	if (m_OrganizationIds.has_value())
	{
		rapidjson::Value OrganizationIdsValue(TypeToJsonValue(m_OrganizationIds, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("organizationIds", OrganizationIdsValue, JsonDoc.GetAllocator());
	}

	if (m_ExcludedTypes.has_value())
	{
		rapidjson::Value ExcludedTypesValue(TypeToJsonValue(m_ExcludedTypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("excludedTypes", ExcludedTypesValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void PrototypeFilters::FromJson(const utility::string_t& Val)
{
	rapidjson::Document JsonDoc;

	if (Val.c_str() == nullptr)
	{
		return;
	}

	JsonDoc.Parse(Val.c_str());


	if (JsonDoc.HasMember("tags"))
	{
		const rapidjson::Value& TagsValue = JsonDoc["tags"];

		if (TagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsValue, m_Tags);
		}
	}

	if (JsonDoc.HasMember("excludedTags"))
	{
		const rapidjson::Value& ExcludedTagsValue = JsonDoc["excludedTags"];

		if (ExcludedTagsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedTagsValue, m_ExcludedTags);
		}
	}

	if (JsonDoc.HasMember("tagsAll"))
	{
		const rapidjson::Value& TagsAllValue = JsonDoc["tagsAll"];

		if (TagsAllValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TagsAllValue, m_TagsAll);
		}
	}

	if (JsonDoc.HasMember("ids"))
	{
		const rapidjson::Value& IdsValue = JsonDoc["ids"];

		if (IdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(IdsValue, m_Ids);
		}
	}

	if (JsonDoc.HasMember("names"))
	{
		const rapidjson::Value& NamesValue = JsonDoc["names"];

		if (NamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(NamesValue, m_Names);
		}
	}

	if (JsonDoc.HasMember("partialNames"))
	{
		const rapidjson::Value& PartialNamesValue = JsonDoc["partialNames"];

		if (PartialNamesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PartialNamesValue, m_PartialNames);
		}
	}

	if (JsonDoc.HasMember("excludedIds"))
	{
		const rapidjson::Value& ExcludedIdsValue = JsonDoc["excludedIds"];

		if (ExcludedIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedIdsValue, m_ExcludedIds);
		}
	}

	if (JsonDoc.HasMember("pointOfInterestIds"))
	{
		const rapidjson::Value& PointOfInterestIdsValue = JsonDoc["pointOfInterestIds"];

		if (PointOfInterestIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PointOfInterestIdsValue, m_PointOfInterestIds);
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

	if (JsonDoc.HasMember("types"))
	{
		const rapidjson::Value& TypesValue = JsonDoc["types"];

		if (TypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(TypesValue, m_Types);
		}
	}

	if (JsonDoc.HasMember("hasGroup"))
	{
		const rapidjson::Value& HasGroupValue = JsonDoc["hasGroup"];

		if (HasGroupValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(HasGroupValue, m_HasGroup);
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

	if (JsonDoc.HasMember("createdAfter"))
	{
		const rapidjson::Value& CreatedAfterValue = JsonDoc["createdAfter"];

		if (CreatedAfterValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(CreatedAfterValue, m_CreatedAfter);
		}
	}

	if (JsonDoc.HasMember("prototypeOwnerIds"))
	{
		const rapidjson::Value& PrototypeOwnerIdsValue = JsonDoc["prototypeOwnerIds"];

		if (PrototypeOwnerIdsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(PrototypeOwnerIdsValue, m_PrototypeOwnerIds);
		}
	}

	if (JsonDoc.HasMember("readAccessFilters"))
	{
		const rapidjson::Value& ReadAccessFiltersValue = JsonDoc["readAccessFilters"];

		if (ReadAccessFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ReadAccessFiltersValue, m_ReadAccessFilters);
		}
	}

	if (JsonDoc.HasMember("writeAccessFilters"))
	{
		const rapidjson::Value& WriteAccessFiltersValue = JsonDoc["writeAccessFilters"];

		if (WriteAccessFiltersValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(WriteAccessFiltersValue, m_WriteAccessFilters);
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

	if (JsonDoc.HasMember("excludedTypes"))
	{
		const rapidjson::Value& ExcludedTypesValue = JsonDoc["excludedTypes"];

		if (ExcludedTypesValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(ExcludedTypesValue, m_ExcludedTypes);
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
const std::vector<utility::string_t>& PrototypeFilters::GetOrganizationIds() const
{
	return m_OrganizationIds.value();
}

bool PrototypeFilters::HasOrganizationIds() const
{
	return m_OrganizationIds.has_value();
}
void PrototypeFilters::SetOrganizationIds(const std::vector<utility::string_t>& Value)
{
	m_OrganizationIds = Value;
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

	JsonDoc.Parse(Val.c_str());


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

	JsonDoc.Parse(Val.c_str());


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


} // namespace csp::services::generated::prototypeservice