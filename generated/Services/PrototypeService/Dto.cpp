

#include "Web/Json.h"
#include "Web/Json_HttpPayload.h"
#include "Debug/Logging.h"

#include "Dto.h"

#include <optional>


using namespace csp::web;


namespace csp::services::generated::prototypeservice
{


    AssetDetailDto::AssetDetailDto() { }
    AssetDetailDto::~AssetDetailDto() { }

    utility::string_t AssetDetailDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_PrototypeId.has_value())
                {
                    rapidjson::Value PrototypeIdValue(
                        TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "prototypeId",
                        PrototypeIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_FileName.has_value())
                {
                    rapidjson::Value FileNameValue(
                        TypeToJsonValue(m_FileName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "fileName",
                        FileNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LanguageCode.has_value())
                {
                    rapidjson::Value LanguageCodeValue(
                        TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "languageCode",
                        LanguageCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AssetType.has_value())
                {
                    rapidjson::Value AssetTypeValue(
                        TypeToJsonValue(m_AssetType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "assetType",
                        AssetTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SupportedPlatforms.has_value())
                {
                    rapidjson::Value SupportedPlatformsValue(
                        TypeToJsonValue(m_SupportedPlatforms, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "supportedPlatforms",
                        SupportedPlatformsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Style.has_value())
                {
                    rapidjson::Value StyleValue(
                        TypeToJsonValue(m_Style, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "style",
                        StyleValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AddressableId.has_value())
                {
                    rapidjson::Value AddressableIdValue(
                        TypeToJsonValue(m_AddressableId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "addressableId",
                        AddressableIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ThirdPartyReferenceId.has_value())
                {
                    rapidjson::Value ThirdPartyReferenceIdValue(
                        TypeToJsonValue(m_ThirdPartyReferenceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "thirdPartyReferenceId",
                        ThirdPartyReferenceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Uri.has_value())
                {
                    rapidjson::Value UriValue(
                        TypeToJsonValue(m_Uri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "uri",
                        UriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Checksum.has_value())
                {
                    rapidjson::Value ChecksumValue(
                        TypeToJsonValue(m_Checksum, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "checksum",
                        ChecksumValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Version.has_value())
                {
                    rapidjson::Value VersionValue(
                        TypeToJsonValue(m_Version, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "version",
                        VersionValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_MimeType.has_value())
                {
                    rapidjson::Value MimeTypeValue(
                        TypeToJsonValue(m_MimeType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "mimeType",
                        MimeTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExternalUri.has_value())
                {
                    rapidjson::Value ExternalUriValue(
                        TypeToJsonValue(m_ExternalUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "externalUri",
                        ExternalUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExternalMimeType.has_value())
                {
                    rapidjson::Value ExternalMimeTypeValue(
                        TypeToJsonValue(m_ExternalMimeType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "externalMimeType",
                        ExternalMimeTypeValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member prototypeId is null!");
                    }
                    
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("fileName"))
                {
                    const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

                    if (FileNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FileNameValue, m_FileName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member fileName is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member languageCode is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member assetType is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member supportedPlatforms is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member style is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("addressableId"))
                {
                    const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

                    if (AddressableIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AddressableIdValue, m_AddressableId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member addressableId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("thirdPartyReferenceId"))
                {
                    const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

                    if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member thirdPartyReferenceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("uri"))
                {
                    const rapidjson::Value& UriValue = JsonDoc["uri"];

                    if (UriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UriValue, m_Uri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member uri is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("checksum"))
                {
                    const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

                    if (ChecksumValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ChecksumValue, m_Checksum);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member checksum is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member version is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("mimeType"))
                {
                    const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

                    if (MimeTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MimeTypeValue, m_MimeType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member mimeType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("externalUri"))
                {
                    const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

                    if (ExternalUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExternalUriValue, m_ExternalUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member externalUri is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("externalMimeType"))
                {
                    const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

                    if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member externalMimeType is null!");
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

            void AssetDetailDto::SetPrototypeId(
                    const utility::string_t& Value
                )
            {
                    m_PrototypeId = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetId() const
            {
                    return m_Id.value();
                }

            bool AssetDetailDto::HasId() const
            {
                return m_Id.has_value();
            }

            void AssetDetailDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetFileName() const
            {
                    return m_FileName.value();
                }

            bool AssetDetailDto::HasFileName() const
            {
                return m_FileName.has_value();
            }

            void AssetDetailDto::SetFileName(
                    const utility::string_t& Value
                )
            {
                    m_FileName = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetName() const
            {
                    return m_Name.value();
                }

            bool AssetDetailDto::HasName() const
            {
                return m_Name.has_value();
            }

            void AssetDetailDto::SetName(
                    const utility::string_t& Value
                )
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

            void AssetDetailDto::SetLanguageCode(
                    const utility::string_t& Value
                )
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

            void AssetDetailDto::SetAssetType(
                    const utility::string_t& Value
                )
            {
                    m_AssetType = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    AssetDetailDto::GetSupportedPlatforms() const
            {
                    return m_SupportedPlatforms.value();
                }

            bool AssetDetailDto::HasSupportedPlatforms() const
            {
                return m_SupportedPlatforms.has_value();
            }

            void AssetDetailDto::SetSupportedPlatforms(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_SupportedPlatforms = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    AssetDetailDto::GetStyle() const
            {
                    return m_Style.value();
                }

            bool AssetDetailDto::HasStyle() const
            {
                return m_Style.has_value();
            }

            void AssetDetailDto::SetStyle(
                    const std::vector<utility::string_t>& Value
                )
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

            void AssetDetailDto::SetAddressableId(
                    const utility::string_t& Value
                )
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

            void AssetDetailDto::SetThirdPartyReferenceId(
                    const utility::string_t& Value
                )
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

            void AssetDetailDto::SetUri(
                    const utility::string_t& Value
                )
            {
                    m_Uri = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetChecksum() const
            {
                    return m_Checksum.value();
                }

            bool AssetDetailDto::HasChecksum() const
            {
                return m_Checksum.has_value();
            }

            void AssetDetailDto::SetChecksum(
                    const utility::string_t& Value
                )
            {
                    m_Checksum = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetVersion() const
            {
                    return m_Version.value();
                }

            bool AssetDetailDto::HasVersion() const
            {
                return m_Version.has_value();
            }

            void AssetDetailDto::SetVersion(
                    const utility::string_t& Value
                )
            {
                    m_Version = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetMimeType() const
            {
                    return m_MimeType.value();
                }

            bool AssetDetailDto::HasMimeType() const
            {
                return m_MimeType.has_value();
            }

            void AssetDetailDto::SetMimeType(
                    const utility::string_t& Value
                )
            {
                    m_MimeType = Value;
                }
                
        
            utility::string_t AssetDetailDto::GetExternalUri() const
            {
                    return m_ExternalUri.value();
                }

            bool AssetDetailDto::HasExternalUri() const
            {
                return m_ExternalUri.has_value();
            }

            void AssetDetailDto::SetExternalUri(
                    const utility::string_t& Value
                )
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

            void AssetDetailDto::SetExternalMimeType(
                    const utility::string_t& Value
                )
            {
                    m_ExternalMimeType = Value;
                }
                
        

    BulkUpsertAssetDetailDto::BulkUpsertAssetDetailDto() { }
    BulkUpsertAssetDetailDto::~BulkUpsertAssetDetailDto() { }

    utility::string_t BulkUpsertAssetDetailDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PrototypeId.has_value())
                {
                    rapidjson::Value PrototypeIdValue(
                        TypeToJsonValue(m_PrototypeId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "prototypeId",
                        PrototypeIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_FileName.has_value())
                {
                    rapidjson::Value FileNameValue(
                        TypeToJsonValue(m_FileName, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "fileName",
                        FileNameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_LanguageCode.has_value())
                {
                    rapidjson::Value LanguageCodeValue(
                        TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "languageCode",
                        LanguageCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AssetType.has_value())
                {
                    rapidjson::Value AssetTypeValue(
                        TypeToJsonValue(m_AssetType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "assetType",
                        AssetTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SupportedPlatforms.has_value())
                {
                    rapidjson::Value SupportedPlatformsValue(
                        TypeToJsonValue(m_SupportedPlatforms, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "supportedPlatforms",
                        SupportedPlatformsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Style.has_value())
                {
                    rapidjson::Value StyleValue(
                        TypeToJsonValue(m_Style, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "style",
                        StyleValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_AddressableId.has_value())
                {
                    rapidjson::Value AddressableIdValue(
                        TypeToJsonValue(m_AddressableId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "addressableId",
                        AddressableIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ThirdPartyReferenceId.has_value())
                {
                    rapidjson::Value ThirdPartyReferenceIdValue(
                        TypeToJsonValue(m_ThirdPartyReferenceId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "thirdPartyReferenceId",
                        ThirdPartyReferenceIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Uri.has_value())
                {
                    rapidjson::Value UriValue(
                        TypeToJsonValue(m_Uri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "uri",
                        UriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Checksum.has_value())
                {
                    rapidjson::Value ChecksumValue(
                        TypeToJsonValue(m_Checksum, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "checksum",
                        ChecksumValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Version.has_value())
                {
                    rapidjson::Value VersionValue(
                        TypeToJsonValue(m_Version, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "version",
                        VersionValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_MimeType.has_value())
                {
                    rapidjson::Value MimeTypeValue(
                        TypeToJsonValue(m_MimeType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "mimeType",
                        MimeTypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExternalUri.has_value())
                {
                    rapidjson::Value ExternalUriValue(
                        TypeToJsonValue(m_ExternalUri, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "externalUri",
                        ExternalUriValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ExternalMimeType.has_value())
                {
                    rapidjson::Value ExternalMimeTypeValue(
                        TypeToJsonValue(m_ExternalMimeType, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "externalMimeType",
                        ExternalMimeTypeValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("prototypeId"))
                {
                    const rapidjson::Value& PrototypeIdValue = JsonDoc["prototypeId"];

                    if (PrototypeIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PrototypeIdValue, m_PrototypeId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member prototypeId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("fileName"))
                {
                    const rapidjson::Value& FileNameValue = JsonDoc["fileName"];

                    if (FileNameValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(FileNameValue, m_FileName);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member fileName is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member languageCode is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member assetType is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member supportedPlatforms is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member style is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("addressableId"))
                {
                    const rapidjson::Value& AddressableIdValue = JsonDoc["addressableId"];

                    if (AddressableIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(AddressableIdValue, m_AddressableId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member addressableId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("thirdPartyReferenceId"))
                {
                    const rapidjson::Value& ThirdPartyReferenceIdValue = JsonDoc["thirdPartyReferenceId"];

                    if (ThirdPartyReferenceIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ThirdPartyReferenceIdValue, m_ThirdPartyReferenceId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member thirdPartyReferenceId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("uri"))
                {
                    const rapidjson::Value& UriValue = JsonDoc["uri"];

                    if (UriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UriValue, m_Uri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member uri is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("checksum"))
                {
                    const rapidjson::Value& ChecksumValue = JsonDoc["checksum"];

                    if (ChecksumValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ChecksumValue, m_Checksum);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member checksum is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member version is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("mimeType"))
                {
                    const rapidjson::Value& MimeTypeValue = JsonDoc["mimeType"];

                    if (MimeTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MimeTypeValue, m_MimeType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member mimeType is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("externalUri"))
                {
                    const rapidjson::Value& ExternalUriValue = JsonDoc["externalUri"];

                    if (ExternalUriValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExternalUriValue, m_ExternalUri);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member externalUri is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("externalMimeType"))
                {
                    const rapidjson::Value& ExternalMimeTypeValue = JsonDoc["externalMimeType"];

                    if (ExternalMimeTypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ExternalMimeTypeValue, m_ExternalMimeType);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member externalMimeType is null!");
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

            void BulkUpsertAssetDetailDto::SetId(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetPrototypeId(
                    const utility::string_t& Value
                )
            {
                    m_PrototypeId = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetFileName() const
            {
                    return m_FileName.value();
                }

            bool BulkUpsertAssetDetailDto::HasFileName() const
            {
                return m_FileName.has_value();
            }

            void BulkUpsertAssetDetailDto::SetFileName(
                    const utility::string_t& Value
                )
            {
                    m_FileName = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetName() const
            {
                    return m_Name.value();
                }

            bool BulkUpsertAssetDetailDto::HasName() const
            {
                return m_Name.has_value();
            }

            void BulkUpsertAssetDetailDto::SetName(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetLanguageCode(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetAssetType(
                    const utility::string_t& Value
                )
            {
                    m_AssetType = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    BulkUpsertAssetDetailDto::GetSupportedPlatforms() const
            {
                    return m_SupportedPlatforms.value();
                }

            bool BulkUpsertAssetDetailDto::HasSupportedPlatforms() const
            {
                return m_SupportedPlatforms.has_value();
            }

            void BulkUpsertAssetDetailDto::SetSupportedPlatforms(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_SupportedPlatforms = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    BulkUpsertAssetDetailDto::GetStyle() const
            {
                    return m_Style.value();
                }

            bool BulkUpsertAssetDetailDto::HasStyle() const
            {
                return m_Style.has_value();
            }

            void BulkUpsertAssetDetailDto::SetStyle(
                    const std::vector<utility::string_t>& Value
                )
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

            void BulkUpsertAssetDetailDto::SetAddressableId(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetThirdPartyReferenceId(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetUri(
                    const utility::string_t& Value
                )
            {
                    m_Uri = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetChecksum() const
            {
                    return m_Checksum.value();
                }

            bool BulkUpsertAssetDetailDto::HasChecksum() const
            {
                return m_Checksum.has_value();
            }

            void BulkUpsertAssetDetailDto::SetChecksum(
                    const utility::string_t& Value
                )
            {
                    m_Checksum = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetVersion() const
            {
                    return m_Version.value();
                }

            bool BulkUpsertAssetDetailDto::HasVersion() const
            {
                return m_Version.has_value();
            }

            void BulkUpsertAssetDetailDto::SetVersion(
                    const utility::string_t& Value
                )
            {
                    m_Version = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetMimeType() const
            {
                    return m_MimeType.value();
                }

            bool BulkUpsertAssetDetailDto::HasMimeType() const
            {
                return m_MimeType.has_value();
            }

            void BulkUpsertAssetDetailDto::SetMimeType(
                    const utility::string_t& Value
                )
            {
                    m_MimeType = Value;
                }
                
        
            utility::string_t BulkUpsertAssetDetailDto::GetExternalUri() const
            {
                    return m_ExternalUri.value();
                }

            bool BulkUpsertAssetDetailDto::HasExternalUri() const
            {
                return m_ExternalUri.has_value();
            }

            void BulkUpsertAssetDetailDto::SetExternalUri(
                    const utility::string_t& Value
                )
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

            void BulkUpsertAssetDetailDto::SetExternalMimeType(
                    const utility::string_t& Value
                )
            {
                    m_ExternalMimeType = Value;
                }
                
        

    BulkUpsertPrototypeDto::BulkUpsertPrototypeDto() { }
    BulkUpsertPrototypeDto::~BulkUpsertPrototypeDto() { }

    utility::string_t BulkUpsertPrototypeDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tags.has_value())
                {
                    rapidjson::Value TagsValue(
                        TypeToJsonValue(m_Tags, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tags",
                        TagsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Metadata.has_value())
                {
                    rapidjson::Value MetadataValue(
                        TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "metadata",
                        MetadataValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UiStrings.has_value())
                {
                    rapidjson::Value UiStringsValue(
                        TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "uiStrings",
                        UiStringsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_State.has_value())
                {
                    rapidjson::Value StateValue(
                        TypeToJsonValue(m_State, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "state",
                        StateValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PointOfInterestId.has_value())
                {
                    rapidjson::Value PointOfInterestIdValue(
                        TypeToJsonValue(m_PointOfInterestId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "pointOfInterestId",
                        PointOfInterestIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ParentId.has_value())
                {
                    rapidjson::Value ParentIdValue(
                        TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "parentId",
                        ParentIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupIds.has_value())
                {
                    rapidjson::Value GroupIdsValue(
                        TypeToJsonValue(m_GroupIds, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupIds",
                        GroupIdsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedBy.has_value())
                {
                    rapidjson::Value UpdatedByValue(
                        TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedBy",
                        UpdatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedAt.has_value())
                {
                    rapidjson::Value UpdatedAtValue(
                        TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedAt",
                        UpdatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Highlander.has_value())
                {
                    rapidjson::Value HighlanderValue(
                        TypeToJsonValue(m_Highlander, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "highlander",
                        HighlanderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Type.has_value())
                {
                    rapidjson::Value TypeValue(
                        TypeToJsonValue(m_Type, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "type",
                        TypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SystemOwned.has_value())
                {
                    rapidjson::Value SystemOwnedValue(
                        TypeToJsonValue(m_SystemOwned, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "systemOwned",
                        SystemOwnedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PrototypeOwnerId.has_value())
                {
                    rapidjson::Value PrototypeOwnerIdValue(
                        TypeToJsonValue(m_PrototypeOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "prototypeOwnerId",
                        PrototypeOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("metadata"))
                {
                    const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

                    if (MetadataValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MetadataValue, m_Metadata);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member metadata is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("uiStrings"))
                {
                    const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

                    if (UiStringsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UiStringsValue, m_UiStrings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member uiStrings is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("state"))
                {
                    const rapidjson::Value& StateValue = JsonDoc["state"];

                    if (StateValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StateValue, m_State);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member state is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("pointOfInterestId"))
                {
                    const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

                    if (PointOfInterestIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member pointOfInterestId is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member parentId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupIds"))
                {
                    const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

                    if (GroupIdsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupIdsValue, m_GroupIds);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupIds is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedBy"))
                {
                    const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

                    if (UpdatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedByValue, m_UpdatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedBy is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("highlander"))
                {
                    const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

                    if (HighlanderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(HighlanderValue, m_Highlander);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member highlander is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("type"))
                {
                    const rapidjson::Value& TypeValue = JsonDoc["type"];

                    if (TypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TypeValue, m_Type);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member type is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("systemOwned"))
                {
                    const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

                    if (SystemOwnedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SystemOwnedValue, m_SystemOwned);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member systemOwned is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("prototypeOwnerId"))
                {
                    const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

                    if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member prototypeOwnerId is null!");
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

            void BulkUpsertPrototypeDto::SetId(
                    const utility::string_t& Value
                )
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

            void BulkUpsertPrototypeDto::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    BulkUpsertPrototypeDto::GetTags() const
            {
                    return m_Tags.value();
                }

            bool BulkUpsertPrototypeDto::HasTags() const
            {
                return m_Tags.has_value();
            }

            void BulkUpsertPrototypeDto::SetTags(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Tags = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    BulkUpsertPrototypeDto::GetMetadata() const
            {
                    return m_Metadata.value();
                }

            bool BulkUpsertPrototypeDto::HasMetadata() const
            {
                return m_Metadata.has_value();
            }

            void BulkUpsertPrototypeDto::SetMetadata(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Metadata = Value;
                }
                
        
            const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>&
                    BulkUpsertPrototypeDto::GetUiStrings() const
            {
                    return m_UiStrings.value();
                }

            bool BulkUpsertPrototypeDto::HasUiStrings() const
            {
                return m_UiStrings.has_value();
            }

            void BulkUpsertPrototypeDto::SetUiStrings(
                    const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value
                )
            {
                    m_UiStrings = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    BulkUpsertPrototypeDto::GetState() const
            {
                    return m_State.value();
                }

            bool BulkUpsertPrototypeDto::HasState() const
            {
                return m_State.has_value();
            }

            void BulkUpsertPrototypeDto::SetState(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
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

            void BulkUpsertPrototypeDto::SetPointOfInterestId(
                    const utility::string_t& Value
                )
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

            void BulkUpsertPrototypeDto::SetParentId(
                    const utility::string_t& Value
                )
            {
                    m_ParentId = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    BulkUpsertPrototypeDto::GetGroupIds() const
            {
                    return m_GroupIds.value();
                }

            bool BulkUpsertPrototypeDto::HasGroupIds() const
            {
                return m_GroupIds.has_value();
            }

            void BulkUpsertPrototypeDto::SetGroupIds(
                    const std::vector<utility::string_t>& Value
                )
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

            void BulkUpsertPrototypeDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t BulkUpsertPrototypeDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool BulkUpsertPrototypeDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void BulkUpsertPrototypeDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t BulkUpsertPrototypeDto::GetUpdatedBy() const
            {
                    return m_UpdatedBy.value();
                }

            bool BulkUpsertPrototypeDto::HasUpdatedBy() const
            {
                return m_UpdatedBy.has_value();
            }

            void BulkUpsertPrototypeDto::SetUpdatedBy(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedBy = Value;
                }
                
        
            utility::string_t BulkUpsertPrototypeDto::GetUpdatedAt() const
            {
                    return m_UpdatedAt.value();
                }

            bool BulkUpsertPrototypeDto::HasUpdatedAt() const
            {
                return m_UpdatedAt.has_value();
            }

            void BulkUpsertPrototypeDto::SetUpdatedAt(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedAt = Value;
                }
                
        
            bool BulkUpsertPrototypeDto::GetHighlander() const
            {
                    return m_Highlander.value();
                }

            bool BulkUpsertPrototypeDto::HasHighlander() const
            {
                return m_Highlander.has_value();
            }

            void BulkUpsertPrototypeDto::SetHighlander(
                    const bool& Value
                )
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

            void BulkUpsertPrototypeDto::SetType(
                    const utility::string_t& Value
                )
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

            void BulkUpsertPrototypeDto::SetSystemOwned(
                    const bool& Value
                )
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

            void BulkUpsertPrototypeDto::SetPrototypeOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_PrototypeOwnerId = Value;
                }
                
        

    LocalizedString::LocalizedString() { }
    LocalizedString::~LocalizedString() { }

    utility::string_t LocalizedString::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_LanguageCode.has_value())
                {
                    rapidjson::Value LanguageCodeValue(
                        TypeToJsonValue(m_LanguageCode, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "languageCode",
                        LanguageCodeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Value.has_value())
                {
                    rapidjson::Value ValueValue(
                        TypeToJsonValue(m_Value, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "value",
                        ValueValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member languageCode is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("value"))
                {
                    const rapidjson::Value& ValueValue = JsonDoc["value"];

                    if (ValueValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(ValueValue, m_Value);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member value is null!");
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

            void LocalizedString::SetLanguageCode(
                    const utility::string_t& Value
                )
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

            void LocalizedString::SetValue(
                    const utility::string_t& Value
                )
            {
                    m_Value = Value;
                }
                
        

    PrototypeDto::PrototypeDto() { }
    PrototypeDto::~PrototypeDto() { }

    utility::string_t PrototypeDto::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Id.has_value())
                {
                    rapidjson::Value IdValue(
                        TypeToJsonValue(m_Id, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "id",
                        IdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Name.has_value())
                {
                    rapidjson::Value NameValue(
                        TypeToJsonValue(m_Name, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "name",
                        NameValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Tags.has_value())
                {
                    rapidjson::Value TagsValue(
                        TypeToJsonValue(m_Tags, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "tags",
                        TagsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Metadata.has_value())
                {
                    rapidjson::Value MetadataValue(
                        TypeToJsonValue(m_Metadata, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "metadata",
                        MetadataValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UiStrings.has_value())
                {
                    rapidjson::Value UiStringsValue(
                        TypeToJsonValue(m_UiStrings, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "uiStrings",
                        UiStringsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_State.has_value())
                {
                    rapidjson::Value StateValue(
                        TypeToJsonValue(m_State, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "state",
                        StateValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PointOfInterestId.has_value())
                {
                    rapidjson::Value PointOfInterestIdValue(
                        TypeToJsonValue(m_PointOfInterestId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "pointOfInterestId",
                        PointOfInterestIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ParentId.has_value())
                {
                    rapidjson::Value ParentIdValue(
                        TypeToJsonValue(m_ParentId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "parentId",
                        ParentIdValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_GroupIds.has_value())
                {
                    rapidjson::Value GroupIdsValue(
                        TypeToJsonValue(m_GroupIds, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "groupIds",
                        GroupIdsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedBy.has_value())
                {
                    rapidjson::Value CreatedByValue(
                        TypeToJsonValue(m_CreatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdBy",
                        CreatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_CreatedAt.has_value())
                {
                    rapidjson::Value CreatedAtValue(
                        TypeToJsonValue(m_CreatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "createdAt",
                        CreatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedBy.has_value())
                {
                    rapidjson::Value UpdatedByValue(
                        TypeToJsonValue(m_UpdatedBy, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedBy",
                        UpdatedByValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_UpdatedAt.has_value())
                {
                    rapidjson::Value UpdatedAtValue(
                        TypeToJsonValue(m_UpdatedAt, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "updatedAt",
                        UpdatedAtValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Highlander.has_value())
                {
                    rapidjson::Value HighlanderValue(
                        TypeToJsonValue(m_Highlander, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "highlander",
                        HighlanderValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Type.has_value())
                {
                    rapidjson::Value TypeValue(
                        TypeToJsonValue(m_Type, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "type",
                        TypeValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_SystemOwned.has_value())
                {
                    rapidjson::Value SystemOwnedValue(
                        TypeToJsonValue(m_SystemOwned, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "systemOwned",
                        SystemOwnedValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_PrototypeOwnerId.has_value())
                {
                    rapidjson::Value PrototypeOwnerIdValue(
                        TypeToJsonValue(m_PrototypeOwnerId, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "prototypeOwnerId",
                        PrototypeOwnerIdValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member id is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member name is null!");
                    }
                    
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member tags is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("metadata"))
                {
                    const rapidjson::Value& MetadataValue = JsonDoc["metadata"];

                    if (MetadataValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(MetadataValue, m_Metadata);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member metadata is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("uiStrings"))
                {
                    const rapidjson::Value& UiStringsValue = JsonDoc["uiStrings"];

                    if (UiStringsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UiStringsValue, m_UiStrings);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member uiStrings is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("state"))
                {
                    const rapidjson::Value& StateValue = JsonDoc["state"];

                    if (StateValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(StateValue, m_State);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member state is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("pointOfInterestId"))
                {
                    const rapidjson::Value& PointOfInterestIdValue = JsonDoc["pointOfInterestId"];

                    if (PointOfInterestIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PointOfInterestIdValue, m_PointOfInterestId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member pointOfInterestId is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member parentId is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("groupIds"))
                {
                    const rapidjson::Value& GroupIdsValue = JsonDoc["groupIds"];

                    if (GroupIdsValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(GroupIdsValue, m_GroupIds);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member groupIds is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("createdBy"))
                {
                    const rapidjson::Value& CreatedByValue = JsonDoc["createdBy"];

                    if (CreatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(CreatedByValue, m_CreatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdBy is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member createdAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("updatedBy"))
                {
                    const rapidjson::Value& UpdatedByValue = JsonDoc["updatedBy"];

                    if (UpdatedByValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(UpdatedByValue, m_UpdatedBy);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedBy is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member updatedAt is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("highlander"))
                {
                    const rapidjson::Value& HighlanderValue = JsonDoc["highlander"];

                    if (HighlanderValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(HighlanderValue, m_Highlander);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member highlander is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("type"))
                {
                    const rapidjson::Value& TypeValue = JsonDoc["type"];

                    if (TypeValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(TypeValue, m_Type);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member type is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("systemOwned"))
                {
                    const rapidjson::Value& SystemOwnedValue = JsonDoc["systemOwned"];

                    if (SystemOwnedValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(SystemOwnedValue, m_SystemOwned);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member systemOwned is null!");
                    }
                    
                }
            
                if (JsonDoc.HasMember("prototypeOwnerId"))
                {
                    const rapidjson::Value& PrototypeOwnerIdValue = JsonDoc["prototypeOwnerId"];

                    if (PrototypeOwnerIdValue != rapidjson::Type::kNullType)
                    {
                        JsonValueToType(PrototypeOwnerIdValue, m_PrototypeOwnerId);
                    }
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member prototypeOwnerId is null!");
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

            void PrototypeDto::SetId(
                    const utility::string_t& Value
                )
            {
                    m_Id = Value;
                }
                
        
            utility::string_t PrototypeDto::GetName() const
            {
                    return m_Name.value();
                }

            bool PrototypeDto::HasName() const
            {
                return m_Name.has_value();
            }

            void PrototypeDto::SetName(
                    const utility::string_t& Value
                )
            {
                    m_Name = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    PrototypeDto::GetTags() const
            {
                    return m_Tags.value();
                }

            bool PrototypeDto::HasTags() const
            {
                return m_Tags.has_value();
            }

            void PrototypeDto::SetTags(
                    const std::vector<utility::string_t>& Value
                )
            {
                    m_Tags = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    PrototypeDto::GetMetadata() const
            {
                    return m_Metadata.value();
                }

            bool PrototypeDto::HasMetadata() const
            {
                return m_Metadata.has_value();
            }

            void PrototypeDto::SetMetadata(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
            {
                    m_Metadata = Value;
                }
                
        
            const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>&
                    PrototypeDto::GetUiStrings() const
            {
                    return m_UiStrings.value();
                }

            bool PrototypeDto::HasUiStrings() const
            {
                return m_UiStrings.has_value();
            }

            void PrototypeDto::SetUiStrings(
                    const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value
                )
            {
                    m_UiStrings = Value;
                }
                
        
            const std::map<utility::string_t, utility::string_t>&
                    PrototypeDto::GetState() const
            {
                    return m_State.value();
                }

            bool PrototypeDto::HasState() const
            {
                return m_State.has_value();
            }

            void PrototypeDto::SetState(
                    const std::map<utility::string_t, utility::string_t>& Value
                )
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

            void PrototypeDto::SetPointOfInterestId(
                    const utility::string_t& Value
                )
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

            void PrototypeDto::SetParentId(
                    const utility::string_t& Value
                )
            {
                    m_ParentId = Value;
                }
                
        
            const std::vector<utility::string_t>&
                    PrototypeDto::GetGroupIds() const
            {
                    return m_GroupIds.value();
                }

            bool PrototypeDto::HasGroupIds() const
            {
                return m_GroupIds.has_value();
            }

            void PrototypeDto::SetGroupIds(
                    const std::vector<utility::string_t>& Value
                )
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

            void PrototypeDto::SetCreatedBy(
                    const utility::string_t& Value
                )
            {
                    m_CreatedBy = Value;
                }
                
        
            utility::string_t PrototypeDto::GetCreatedAt() const
            {
                    return m_CreatedAt.value();
                }

            bool PrototypeDto::HasCreatedAt() const
            {
                return m_CreatedAt.has_value();
            }

            void PrototypeDto::SetCreatedAt(
                    const utility::string_t& Value
                )
            {
                    m_CreatedAt = Value;
                }
                
        
            utility::string_t PrototypeDto::GetUpdatedBy() const
            {
                    return m_UpdatedBy.value();
                }

            bool PrototypeDto::HasUpdatedBy() const
            {
                return m_UpdatedBy.has_value();
            }

            void PrototypeDto::SetUpdatedBy(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedBy = Value;
                }
                
        
            utility::string_t PrototypeDto::GetUpdatedAt() const
            {
                    return m_UpdatedAt.value();
                }

            bool PrototypeDto::HasUpdatedAt() const
            {
                return m_UpdatedAt.has_value();
            }

            void PrototypeDto::SetUpdatedAt(
                    const utility::string_t& Value
                )
            {
                    m_UpdatedAt = Value;
                }
                
        
            bool PrototypeDto::GetHighlander() const
            {
                    return m_Highlander.value();
                }

            bool PrototypeDto::HasHighlander() const
            {
                return m_Highlander.has_value();
            }

            void PrototypeDto::SetHighlander(
                    const bool& Value
                )
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

            void PrototypeDto::SetType(
                    const utility::string_t& Value
                )
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

            void PrototypeDto::SetSystemOwned(
                    const bool& Value
                )
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

            void PrototypeDto::SetPrototypeOwnerId(
                    const utility::string_t& Value
                )
            {
                    m_PrototypeOwnerId = Value;
                }
                
        

    PrototypeDtoDataPage::PrototypeDtoDataPage() { }
    PrototypeDtoDataPage::~PrototypeDtoDataPage() { }

    utility::string_t PrototypeDtoDataPage::ToJson() const
        {
            rapidjson::Document JsonDoc(rapidjson::kObjectType);

            
                if (m_Items.has_value())
                {
                    rapidjson::Value ItemsValue(
                        TypeToJsonValue(m_Items, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "items",
                        ItemsValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Skip.has_value())
                {
                    rapidjson::Value SkipValue(
                        TypeToJsonValue(m_Skip, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "skip",
                        SkipValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_Limit.has_value())
                {
                    rapidjson::Value LimitValue(
                        TypeToJsonValue(m_Limit, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "limit",
                        LimitValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemCount.has_value())
                {
                    rapidjson::Value ItemCountValue(
                        TypeToJsonValue(m_ItemCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemCount",
                        ItemCountValue,
                        JsonDoc.GetAllocator()
                    );
                }
            
                if (m_ItemTotalCount.has_value())
                {
                    rapidjson::Value ItemTotalCountValue(
                        TypeToJsonValue(m_ItemTotalCount, JsonDoc.GetAllocator())
                    );
                    JsonDoc.AddMember(
                        "itemTotalCount",
                        ItemTotalCountValue,
                        JsonDoc.GetAllocator()
                    );
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
                    else
                    {
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member items is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member skip is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member limit is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemCount is null!");
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
                        FOUNDATION_LOG_ERROR_MSG("Error: Non-nullable member itemTotalCount is null!");
                    }
                    
                }
            
        }

        
            const std::vector<std::shared_ptr<PrototypeDto>>&
                    PrototypeDtoDataPage::GetItems() const
            {
                    return m_Items.value();
                }

            bool PrototypeDtoDataPage::HasItems() const
            {
                return m_Items.has_value();
            }

            void PrototypeDtoDataPage::SetItems(
                    const std::vector<std::shared_ptr<PrototypeDto>>& Value
                )
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
                
        

    SortDirection::SortDirection() { }
    SortDirection::~SortDirection() { }

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


} // namespace csp::services::prototypeservice