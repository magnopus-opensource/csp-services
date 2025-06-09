

#include "Dto.h"

#include "Debug/Logging.h"
#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::prototypeservice
{


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

ExportPrototypesResponse::ExportPrototypesResponse()
{
}
ExportPrototypesResponse::~ExportPrototypesResponse()
{
}

utility::string_t ExportPrototypesResponse::ToJson() const
{
	rapidjson::Document JsonDoc(rapidjson::kObjectType);


	if (m_Prototypes.has_value())
	{
		rapidjson::Value PrototypesValue(TypeToJsonValue(m_Prototypes, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("prototypes", PrototypesValue, JsonDoc.GetAllocator());
	}

	if (m_Assets.has_value())
	{
		rapidjson::Value AssetsValue(TypeToJsonValue(m_Assets, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("assets", AssetsValue, JsonDoc.GetAllocator());
	}

	if (m_Denials.has_value())
	{
		rapidjson::Value DenialsValue(TypeToJsonValue(m_Denials, JsonDoc.GetAllocator()));
		JsonDoc.AddMember("denials", DenialsValue, JsonDoc.GetAllocator());
	}


	return JsonDocToString(JsonDoc);
}

void ExportPrototypesResponse::FromJson(const utility::string_t& Val)
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

	if (JsonDoc.HasMember("assets"))
	{
		const rapidjson::Value& AssetsValue = JsonDoc["assets"];

		if (AssetsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(AssetsValue, m_Assets);
		}
	}

	if (JsonDoc.HasMember("denials"))
	{
		const rapidjson::Value& DenialsValue = JsonDoc["denials"];

		if (DenialsValue != rapidjson::Type::kNullType)
		{
			JsonValueToType(DenialsValue, m_Denials);
		}
	}
}


const std::vector<std::shared_ptr<ExportedPrototypeDto>>& ExportPrototypesResponse::GetPrototypes() const
{
	return m_Prototypes.value();
}

bool ExportPrototypesResponse::HasPrototypes() const
{
	return m_Prototypes.has_value();
}
void ExportPrototypesResponse::SetPrototypes(const std::vector<std::shared_ptr<ExportedPrototypeDto>>& Value)
{
	m_Prototypes = Value;
}
const std::vector<std::shared_ptr<ExportedAssetDetailDto>>& ExportPrototypesResponse::GetAssets() const
{
	return m_Assets.value();
}

bool ExportPrototypesResponse::HasAssets() const
{
	return m_Assets.has_value();
}
void ExportPrototypesResponse::SetAssets(const std::vector<std::shared_ptr<ExportedAssetDetailDto>>& Value)
{
	m_Assets = Value;
}
const std::vector<utility::string_t>& ExportPrototypesResponse::GetDenials() const
{
	return m_Denials.value();
}

bool ExportPrototypesResponse::HasDenials() const
{
	return m_Denials.has_value();
}
void ExportPrototypesResponse::SetDenials(const std::vector<utility::string_t>& Value)
{
	m_Denials = Value;
}

ExportedAssetDetailDto::ExportedAssetDetailDto()
{
}
ExportedAssetDetailDto::~ExportedAssetDetailDto()
{
}

utility::string_t ExportedAssetDetailDto::ToJson() const
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


	return JsonDocToString(JsonDoc);
}

void ExportedAssetDetailDto::FromJson(const utility::string_t& Val)
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
}


utility::string_t ExportedAssetDetailDto::GetOriginalAssetDetailId() const
{
	return m_OriginalAssetDetailId.value();
}

bool ExportedAssetDetailDto::HasOriginalAssetDetailId() const
{
	return m_OriginalAssetDetailId.has_value();
}
utility::string_t ExportedAssetDetailDto::GetOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.value();
}

bool ExportedAssetDetailDto::HasOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.has_value();
}
utility::string_t ExportedAssetDetailDto::GetPrototypeId() const
{
	return m_PrototypeId.value();
}

bool ExportedAssetDetailDto::HasPrototypeId() const
{
	return m_PrototypeId.has_value();
}
utility::string_t ExportedAssetDetailDto::GetId() const
{
	return m_Id.value();
}

bool ExportedAssetDetailDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ExportedAssetDetailDto::GetFileName() const
{
	return m_FileName.value();
}

bool ExportedAssetDetailDto::HasFileName() const
{
	return m_FileName.has_value();
}
utility::string_t ExportedAssetDetailDto::GetName() const
{
	return m_Name.value();
}

bool ExportedAssetDetailDto::HasName() const
{
	return m_Name.has_value();
}
void ExportedAssetDetailDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
utility::string_t ExportedAssetDetailDto::GetLanguageCode() const
{
	return m_LanguageCode.value();
}

bool ExportedAssetDetailDto::HasLanguageCode() const
{
	return m_LanguageCode.has_value();
}
void ExportedAssetDetailDto::SetLanguageCode(const utility::string_t& Value)
{
	m_LanguageCode = Value;
}
utility::string_t ExportedAssetDetailDto::GetAssetType() const
{
	return m_AssetType.value();
}

bool ExportedAssetDetailDto::HasAssetType() const
{
	return m_AssetType.has_value();
}
void ExportedAssetDetailDto::SetAssetType(const utility::string_t& Value)
{
	m_AssetType = Value;
}
const std::vector<utility::string_t>& ExportedAssetDetailDto::GetSupportedPlatforms() const
{
	return m_SupportedPlatforms.value();
}

bool ExportedAssetDetailDto::HasSupportedPlatforms() const
{
	return m_SupportedPlatforms.has_value();
}
void ExportedAssetDetailDto::SetSupportedPlatforms(const std::vector<utility::string_t>& Value)
{
	m_SupportedPlatforms = Value;
}
const std::vector<utility::string_t>& ExportedAssetDetailDto::GetStyle() const
{
	return m_Style.value();
}

bool ExportedAssetDetailDto::HasStyle() const
{
	return m_Style.has_value();
}
void ExportedAssetDetailDto::SetStyle(const std::vector<utility::string_t>& Value)
{
	m_Style = Value;
}
utility::string_t ExportedAssetDetailDto::GetAddressableId() const
{
	return m_AddressableId.value();
}

bool ExportedAssetDetailDto::HasAddressableId() const
{
	return m_AddressableId.has_value();
}
void ExportedAssetDetailDto::SetAddressableId(const utility::string_t& Value)
{
	m_AddressableId = Value;
}
utility::string_t ExportedAssetDetailDto::GetThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.value();
}

bool ExportedAssetDetailDto::HasThirdPartyReferenceId() const
{
	return m_ThirdPartyReferenceId.has_value();
}
void ExportedAssetDetailDto::SetThirdPartyReferenceId(const utility::string_t& Value)
{
	m_ThirdPartyReferenceId = Value;
}
utility::string_t ExportedAssetDetailDto::GetUri() const
{
	return m_Uri.value();
}

bool ExportedAssetDetailDto::HasUri() const
{
	return m_Uri.has_value();
}
utility::string_t ExportedAssetDetailDto::GetChecksum() const
{
	return m_Checksum.value();
}

bool ExportedAssetDetailDto::HasChecksum() const
{
	return m_Checksum.has_value();
}
utility::string_t ExportedAssetDetailDto::GetVersion() const
{
	return m_Version.value();
}

bool ExportedAssetDetailDto::HasVersion() const
{
	return m_Version.has_value();
}
utility::string_t ExportedAssetDetailDto::GetMimeType() const
{
	return m_MimeType.value();
}

bool ExportedAssetDetailDto::HasMimeType() const
{
	return m_MimeType.has_value();
}
utility::string_t ExportedAssetDetailDto::GetExternalUri() const
{
	return m_ExternalUri.value();
}

bool ExportedAssetDetailDto::HasExternalUri() const
{
	return m_ExternalUri.has_value();
}
void ExportedAssetDetailDto::SetExternalUri(const utility::string_t& Value)
{
	m_ExternalUri = Value;
}
utility::string_t ExportedAssetDetailDto::GetExternalMimeType() const
{
	return m_ExternalMimeType.value();
}

bool ExportedAssetDetailDto::HasExternalMimeType() const
{
	return m_ExternalMimeType.has_value();
}
void ExportedAssetDetailDto::SetExternalMimeType(const utility::string_t& Value)
{
	m_ExternalMimeType = Value;
}
utility::string_t ExportedAssetDetailDto::GetOriginalAssetUri() const
{
	return m_OriginalAssetUri.value();
}

bool ExportedAssetDetailDto::HasOriginalAssetUri() const
{
	return m_OriginalAssetUri.has_value();
}
void ExportedAssetDetailDto::SetOriginalAssetUri(const utility::string_t& Value)
{
	m_OriginalAssetUri = Value;
}
const std::vector<utility::string_t>& ExportedAssetDetailDto::GetTags() const
{
	return m_Tags.value();
}

bool ExportedAssetDetailDto::HasTags() const
{
	return m_Tags.has_value();
}
void ExportedAssetDetailDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
int64_t ExportedAssetDetailDto::GetSizeInBytes() const
{
	return m_SizeInBytes.value();
}

bool ExportedAssetDetailDto::HasSizeInBytes() const
{
	return m_SizeInBytes.has_value();
}

ExportedPrototypeDto::ExportedPrototypeDto()
{
}
ExportedPrototypeDto::~ExportedPrototypeDto()
{
}

utility::string_t ExportedPrototypeDto::ToJson() const
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

void ExportedPrototypeDto::FromJson(const utility::string_t& Val)
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


utility::string_t ExportedPrototypeDto::GetOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.value();
}

bool ExportedPrototypeDto::HasOriginalPrototypeId() const
{
	return m_OriginalPrototypeId.has_value();
}
utility::string_t ExportedPrototypeDto::GetOriginalParentId() const
{
	return m_OriginalParentId.value();
}

bool ExportedPrototypeDto::HasOriginalParentId() const
{
	return m_OriginalParentId.has_value();
}
utility::string_t ExportedPrototypeDto::GetId() const
{
	return m_Id.value();
}

bool ExportedPrototypeDto::HasId() const
{
	return m_Id.has_value();
}
utility::string_t ExportedPrototypeDto::GetName() const
{
	return m_Name.value();
}

bool ExportedPrototypeDto::HasName() const
{
	return m_Name.has_value();
}
void ExportedPrototypeDto::SetName(const utility::string_t& Value)
{
	m_Name = Value;
}
const std::vector<utility::string_t>& ExportedPrototypeDto::GetTags() const
{
	return m_Tags.value();
}

bool ExportedPrototypeDto::HasTags() const
{
	return m_Tags.has_value();
}
void ExportedPrototypeDto::SetTags(const std::vector<utility::string_t>& Value)
{
	m_Tags = Value;
}
const std::map<utility::string_t, utility::string_t>& ExportedPrototypeDto::GetMetadata() const
{
	return m_Metadata.value();
}

bool ExportedPrototypeDto::HasMetadata() const
{
	return m_Metadata.has_value();
}
void ExportedPrototypeDto::SetMetadata(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_Metadata = Value;
}
const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& ExportedPrototypeDto::GetUiStrings() const
{
	return m_UiStrings.value();
}

bool ExportedPrototypeDto::HasUiStrings() const
{
	return m_UiStrings.has_value();
}
void ExportedPrototypeDto::SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value)
{
	m_UiStrings = Value;
}
const std::map<utility::string_t, utility::string_t>& ExportedPrototypeDto::GetState() const
{
	return m_State.value();
}

bool ExportedPrototypeDto::HasState() const
{
	return m_State.has_value();
}
void ExportedPrototypeDto::SetState(const std::map<utility::string_t, utility::string_t>& Value)
{
	m_State = Value;
}
utility::string_t ExportedPrototypeDto::GetPointOfInterestId() const
{
	return m_PointOfInterestId.value();
}

bool ExportedPrototypeDto::HasPointOfInterestId() const
{
	return m_PointOfInterestId.has_value();
}
void ExportedPrototypeDto::SetPointOfInterestId(const utility::string_t& Value)
{
	m_PointOfInterestId = Value;
}
utility::string_t ExportedPrototypeDto::GetParentId() const
{
	return m_ParentId.value();
}

bool ExportedPrototypeDto::HasParentId() const
{
	return m_ParentId.has_value();
}
void ExportedPrototypeDto::SetParentId(const utility::string_t& Value)
{
	m_ParentId = Value;
}
const std::vector<utility::string_t>& ExportedPrototypeDto::GetGroupIds() const
{
	return m_GroupIds.value();
}

bool ExportedPrototypeDto::HasGroupIds() const
{
	return m_GroupIds.has_value();
}
void ExportedPrototypeDto::SetGroupIds(const std::vector<utility::string_t>& Value)
{
	m_GroupIds = Value;
}
utility::string_t ExportedPrototypeDto::GetCreatedBy() const
{
	return m_CreatedBy.value();
}

bool ExportedPrototypeDto::HasCreatedBy() const
{
	return m_CreatedBy.has_value();
}
utility::string_t ExportedPrototypeDto::GetCreatedAt() const
{
	return m_CreatedAt.value();
}

bool ExportedPrototypeDto::HasCreatedAt() const
{
	return m_CreatedAt.has_value();
}
utility::string_t ExportedPrototypeDto::GetUpdatedBy() const
{
	return m_UpdatedBy.value();
}

bool ExportedPrototypeDto::HasUpdatedBy() const
{
	return m_UpdatedBy.has_value();
}
utility::string_t ExportedPrototypeDto::GetUpdatedAt() const
{
	return m_UpdatedAt.value();
}

bool ExportedPrototypeDto::HasUpdatedAt() const
{
	return m_UpdatedAt.has_value();
}
bool ExportedPrototypeDto::GetHighlander() const
{
	return m_Highlander.value();
}

bool ExportedPrototypeDto::HasHighlander() const
{
	return m_Highlander.has_value();
}
void ExportedPrototypeDto::SetHighlander(const bool& Value)
{
	m_Highlander = Value;
}
utility::string_t ExportedPrototypeDto::GetType() const
{
	return m_Type.value();
}

bool ExportedPrototypeDto::HasType() const
{
	return m_Type.has_value();
}
void ExportedPrototypeDto::SetType(const utility::string_t& Value)
{
	m_Type = Value;
}
bool ExportedPrototypeDto::GetSystemOwned() const
{
	return m_SystemOwned.value();
}

bool ExportedPrototypeDto::HasSystemOwned() const
{
	return m_SystemOwned.has_value();
}
void ExportedPrototypeDto::SetSystemOwned(const bool& Value)
{
	m_SystemOwned = Value;
}
utility::string_t ExportedPrototypeDto::GetPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.value();
}

bool ExportedPrototypeDto::HasPrototypeOwnerId() const
{
	return m_PrototypeOwnerId.has_value();
}
void ExportedPrototypeDto::SetPrototypeOwnerId(const utility::string_t& Value)
{
	m_PrototypeOwnerId = Value;
}
utility::string_t ExportedPrototypeDto::GetOrganizationId() const
{
	return m_OrganizationId.value();
}

bool ExportedPrototypeDto::HasOrganizationId() const
{
	return m_OrganizationId.has_value();
}
const std::vector<utility::string_t>& ExportedPrototypeDto::GetReadAccess() const
{
	return m_ReadAccess.value();
}

bool ExportedPrototypeDto::HasReadAccess() const
{
	return m_ReadAccess.has_value();
}
void ExportedPrototypeDto::SetReadAccess(const std::vector<utility::string_t>& Value)
{
	m_ReadAccess = Value;
}
const std::vector<utility::string_t>& ExportedPrototypeDto::GetWriteAccess() const
{
	return m_WriteAccess.value();
}

bool ExportedPrototypeDto::HasWriteAccess() const
{
	return m_WriteAccess.has_value();
}
void ExportedPrototypeDto::SetWriteAccess(const std::vector<utility::string_t>& Value)
{
	m_WriteAccess = Value;
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