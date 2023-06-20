

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::prototypeservice
{

class AssetDetailDto;
class BulkUpsertAssetDetailDto;
class BulkUpsertPrototypeDto;
class LocalizedString;
class PrototypeDto;
class PrototypeDtoDataPage;
class SortDirection;



    /// <summary>
        /// Contains the details of An Asset File and what platforms it supports.
        /// </summary>
    class AssetDetailDto : public csp::services::DtoBase
        {
        public:
            AssetDetailDto();
            virtual ~AssetDetailDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// Prototype this Asset is assigned to
                    /// </summary>
                utility::string_t GetPrototypeId() const;
                void SetPrototypeId(const utility::string_t& Value);bool HasPrototypeId() const;
            
                /// <summary>
                    /// The unique identifier for this asset
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// Filename for the asset, mainly useful for unity side
                    /// </summary>
                utility::string_t GetFileName() const;
                void SetFileName(const utility::string_t& Value);bool HasFileName() const;
            
                /// <summary>
                    /// The name of the asset
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// LanguageCode for the asset defaults to en-us
                    /// </summary>
                utility::string_t GetLanguageCode() const;
                void SetLanguageCode(const utility::string_t& Value);bool HasLanguageCode() const;
            
                /// <summary>
                    /// Type of Asset
                    /// </summary>
                utility::string_t GetAssetType() const;
                void SetAssetType(const utility::string_t& Value);bool HasAssetType() const;
            
                /// <summary>
                    /// List of the Platforms this asset supports
                    /// </summary>
                const std::vector<utility::string_t>& GetSupportedPlatforms() const;
                void SetSupportedPlatforms(const std::vector<utility::string_t>& Value);bool HasSupportedPlatforms() const;
            
                /// <summary>
                    /// What style is this asset:
                    /// Low-Res, High-Res, Low-Bandwidth etc
                    /// </summary>
                const std::vector<utility::string_t>& GetStyle() const;
                void SetStyle(const std::vector<utility::string_t>& Value);bool HasStyle() const;
            
                /// <summary>
                    /// The Unique Identifier for a specific AddressableItem within a package
                    /// </summary>
                utility::string_t GetAddressableId() const;
                void SetAddressableId(const utility::string_t& Value);bool HasAddressableId() const;
            
                /// <summary>
                    /// The Reference Id associated with an outside application
                    /// </summary>
                utility::string_t GetThirdPartyReferenceId() const;
                void SetThirdPartyReferenceId(const utility::string_t& Value);bool HasThirdPartyReferenceId() const;
            
                /// <summary>
                    /// Url where the asset is able to be retrieved from
                    /// </summary>
                utility::string_t GetUri() const;
                void SetUri(const utility::string_t& Value);bool HasUri() const;
            
                /// <summary>
                    /// An MD5 Hash of the uploaded file used to determine if the client needs to
                    /// get an updated version.
                    /// </summary>
                utility::string_t GetChecksum() const;
                void SetChecksum(const utility::string_t& Value);bool HasChecksum() const;
            
                /// <summary>
                    /// Version number of the Asset, this is used mostly for debugging when checking to see
                    /// if the client version details match the services at a quick glance.
                    /// </summary>
                utility::string_t GetVersion() const;
                void SetVersion(const utility::string_t& Value);bool HasVersion() const;
            
                /// <summary>
                    /// Mimetype of the AssetDetail for web base solutions to know what the file type is
                    /// and be able to handle it correctly.
                    /// </summary>
                utility::string_t GetMimeType() const;
                void SetMimeType(const utility::string_t& Value);bool HasMimeType() const;
            
                /// <summary>
                    /// The external full URI to the location of media - this will never be populated on objects
                    /// returned from the server - it is meant to set the Uri field on updates.
                    /// </summary>
                utility::string_t GetExternalUri() const;
                void SetExternalUri(const utility::string_t& Value);bool HasExternalUri() const;
            
                /// <summary>
                    /// MIME type set on the data at the associated path - this will never be populated on objects
                    /// returned from the server - it is meant to set the MimeType field on updates.
                    /// </summary>
                utility::string_t GetExternalMimeType() const;
                void SetExternalMimeType(const utility::string_t& Value);bool HasExternalMimeType() const;
            

        protected:
            std::optional<utility::string_t> m_PrototypeId;
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_FileName;
            std::optional<utility::string_t> m_Name;
            std::optional<utility::string_t> m_LanguageCode;
            std::optional<utility::string_t> m_AssetType;
            std::optional<std::vector<utility::string_t>> m_SupportedPlatforms;
            std::optional<std::vector<utility::string_t>> m_Style;
            std::optional<utility::string_t> m_AddressableId;
            std::optional<utility::string_t> m_ThirdPartyReferenceId;
            std::optional<utility::string_t> m_Uri;
            std::optional<utility::string_t> m_Checksum;
            std::optional<utility::string_t> m_Version;
            std::optional<utility::string_t> m_MimeType;
            std::optional<utility::string_t> m_ExternalUri;
            std::optional<utility::string_t> m_ExternalMimeType;
            };

    /// <summary>
        /// Contains the details of An Asset File and what platforms it supports.
        /// </summary>
    class BulkUpsertAssetDetailDto : public csp::services::DtoBase
        {
        public:
            BulkUpsertAssetDetailDto();
            virtual ~BulkUpsertAssetDetailDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this asset
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// Prototype this Asset is assigned to
                    /// </summary>
                utility::string_t GetPrototypeId() const;
                void SetPrototypeId(const utility::string_t& Value);bool HasPrototypeId() const;
            
                /// <summary>
                    /// Filename for the asset, mainly useful for unity side
                    /// </summary>
                utility::string_t GetFileName() const;
                void SetFileName(const utility::string_t& Value);bool HasFileName() const;
            
                /// <summary>
                    /// The name of the asset
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// LanguageCode for the asset defaults to en-us
                    /// </summary>
                utility::string_t GetLanguageCode() const;
                void SetLanguageCode(const utility::string_t& Value);bool HasLanguageCode() const;
            
                /// <summary>
                    /// Type of Asset
                    /// </summary>
                utility::string_t GetAssetType() const;
                void SetAssetType(const utility::string_t& Value);bool HasAssetType() const;
            
                /// <summary>
                    /// List of the Platforms this asset supports
                    /// </summary>
                const std::vector<utility::string_t>& GetSupportedPlatforms() const;
                void SetSupportedPlatforms(const std::vector<utility::string_t>& Value);bool HasSupportedPlatforms() const;
            
                /// <summary>
                    /// What style is this asset:
                    /// Low-Res, High-Res, Low-Bandwidth etc
                    /// </summary>
                const std::vector<utility::string_t>& GetStyle() const;
                void SetStyle(const std::vector<utility::string_t>& Value);bool HasStyle() const;
            
                /// <summary>
                    /// The Unique Identifier for a specific AddressableItem within a package
                    /// </summary>
                utility::string_t GetAddressableId() const;
                void SetAddressableId(const utility::string_t& Value);bool HasAddressableId() const;
            
                /// <summary>
                    /// The Reference Id associated with an outside application
                    /// </summary>
                utility::string_t GetThirdPartyReferenceId() const;
                void SetThirdPartyReferenceId(const utility::string_t& Value);bool HasThirdPartyReferenceId() const;
            
                /// <summary>
                    /// Url where the asset is able to be retrieved from
                    /// </summary>
                utility::string_t GetUri() const;
                void SetUri(const utility::string_t& Value);bool HasUri() const;
            
                /// <summary>
                    /// An MD5 Hash of the uploaded file used to determine if the client needs to
                    /// get an updated version.
                    /// </summary>
                utility::string_t GetChecksum() const;
                void SetChecksum(const utility::string_t& Value);bool HasChecksum() const;
            
                /// <summary>
                    /// Version number of the Asset, this is used mostly for debugging when checking to see
                    /// if the client version details match the services at a quick glance.
                    /// </summary>
                utility::string_t GetVersion() const;
                void SetVersion(const utility::string_t& Value);bool HasVersion() const;
            
                /// <summary>
                    /// Mimetype of the AssetDetail for web base solutions to know what the file type is
                    /// and be able to handle it correctly.
                    /// </summary>
                utility::string_t GetMimeType() const;
                void SetMimeType(const utility::string_t& Value);bool HasMimeType() const;
            
                /// <summary>
                    /// The external full URI to the location of media - this will never be populated on objects
                    /// returned from the server - it is meant to set the Uri field on updates.
                    /// </summary>
                utility::string_t GetExternalUri() const;
                void SetExternalUri(const utility::string_t& Value);bool HasExternalUri() const;
            
                /// <summary>
                    /// MIME type set on the data at the associated path - this will never be populated on objects
                    /// returned from the server - it is meant to set the MimeType field on updates.
                    /// </summary>
                utility::string_t GetExternalMimeType() const;
                void SetExternalMimeType(const utility::string_t& Value);bool HasExternalMimeType() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_PrototypeId;
            std::optional<utility::string_t> m_FileName;
            std::optional<utility::string_t> m_Name;
            std::optional<utility::string_t> m_LanguageCode;
            std::optional<utility::string_t> m_AssetType;
            std::optional<std::vector<utility::string_t>> m_SupportedPlatforms;
            std::optional<std::vector<utility::string_t>> m_Style;
            std::optional<utility::string_t> m_AddressableId;
            std::optional<utility::string_t> m_ThirdPartyReferenceId;
            std::optional<utility::string_t> m_Uri;
            std::optional<utility::string_t> m_Checksum;
            std::optional<utility::string_t> m_Version;
            std::optional<utility::string_t> m_MimeType;
            std::optional<utility::string_t> m_ExternalUri;
            std::optional<utility::string_t> m_ExternalMimeType;
            };

    /// <summary>
        /// Bulk Prototype Create DTO
        /// </summary>
    class BulkUpsertPrototypeDto : public csp::services::DtoBase
        {
        public:
            BulkUpsertPrototypeDto();
            virtual ~BulkUpsertPrototypeDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this instance
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// Name for the prototype
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// Tags for this prototype
                    /// or an empty list if none
                    /// </summary>
                const std::vector<utility::string_t>& GetTags() const;
                void SetTags(const std::vector<utility::string_t>& Value);bool HasTags() const;
            
                /// <summary>
                    /// Collection of metadata for this prototype
                    /// or an empty dictionary if none
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
                void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);bool HasMetadata() const;
            
                /// <summary>
                    /// Collection of translations stored per key meant to be shown in localized user interfaces.
                    /// </summary>
                const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
                void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);bool HasUiStrings() const;
            
                /// <summary>
                    /// Collection of default states for certain items such as reward items.
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetState() const;
                void SetState(const std::map<utility::string_t, utility::string_t>& Value);bool HasState() const;
            
                /// <summary>
                    /// The Point of Interest ID that contains geospatial data related to this Prototype
                    /// </summary>
                utility::string_t GetPointOfInterestId() const;
                void SetPointOfInterestId(const utility::string_t& Value);bool HasPointOfInterestId() const;
            
                /// <summary>
                    /// The Parent PrototypeId to this particular record, if any
                    /// </summary>
                utility::string_t GetParentId() const;
                void SetParentId(const utility::string_t& Value);bool HasParentId() const;
            
                /// <summary>
                    /// If this prototype can only be viewed by a specific set of group ids
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupIds() const;
                void SetGroupIds(const std::vector<utility::string_t>& Value);bool HasGroupIds() const;
            
                /// <summary>
                    /// The user identity which created this instance
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                void SetCreatedBy(const utility::string_t& Value);bool HasCreatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                void SetCreatedAt(const utility::string_t& Value);bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                void SetUpdatedBy(const utility::string_t& Value);bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                void SetUpdatedAt(const utility::string_t& Value);bool HasUpdatedAt() const;
            
                /// <summary>
                    /// There can be only one... instantiated prototype per user
                    /// </summary>
                bool GetHighlander() const;
                void SetHighlander(const bool& Value);bool HasHighlander() const;
            
                /// <summary>
                    /// Type of the prototype
                    /// </summary>
                utility::string_t GetType() const;
                void SetType(const utility::string_t& Value);bool HasType() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the system
                    /// </summary>
                bool GetSystemOwned() const;
                void SetSystemOwned(const bool& Value);bool HasSystemOwned() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the user who created it
                    /// </summary>
                utility::string_t GetPrototypeOwnerId() const;
                void SetPrototypeOwnerId(const utility::string_t& Value);bool HasPrototypeOwnerId() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Name;
            std::optional<std::vector<utility::string_t>> m_Tags;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
            std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>> m_UiStrings;
            std::optional<std::map<utility::string_t, utility::string_t>> m_State;
            std::optional<utility::string_t> m_PointOfInterestId;
            std::optional<utility::string_t> m_ParentId;
            std::optional<std::vector<utility::string_t>> m_GroupIds;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            std::optional<bool> m_Highlander;
            std::optional<utility::string_t> m_Type;
            std::optional<bool> m_SystemOwned;
            std::optional<utility::string_t> m_PrototypeOwnerId;
            };

    class LocalizedString : public csp::services::DtoBase
        {
        public:
            LocalizedString();
            virtual ~LocalizedString();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                utility::string_t GetLanguageCode() const;
                void SetLanguageCode(const utility::string_t& Value);bool HasLanguageCode() const;
            
                utility::string_t GetValue() const;
                void SetValue(const utility::string_t& Value);bool HasValue() const;
            

        protected:
            std::optional<utility::string_t> m_LanguageCode;
            std::optional<utility::string_t> m_Value;
            };

    /// <summary>
        /// Prototype data transform object
        /// </summary>
    class PrototypeDto : public csp::services::DtoBase
        {
        public:
            PrototypeDto();
            virtual ~PrototypeDto();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                /// <summary>
                    /// The unique identifier for this instance
                    /// </summary>
                utility::string_t GetId() const;
                void SetId(const utility::string_t& Value);bool HasId() const;
            
                /// <summary>
                    /// Name for the prototype
                    /// </summary>
                utility::string_t GetName() const;
                void SetName(const utility::string_t& Value);bool HasName() const;
            
                /// <summary>
                    /// Tags for this prototype
                    /// or an empty list if none
                    /// </summary>
                const std::vector<utility::string_t>& GetTags() const;
                void SetTags(const std::vector<utility::string_t>& Value);bool HasTags() const;
            
                /// <summary>
                    /// Collection of metadata for this prototype
                    /// or an empty dictionary if none
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
                void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);bool HasMetadata() const;
            
                /// <summary>
                    /// Collection of translations stored per key meant to be shown in localized user interfaces.
                    /// </summary>
                const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
                void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);bool HasUiStrings() const;
            
                /// <summary>
                    /// Collection of default states for certain items such as reward items.
                    /// </summary>
                const std::map<utility::string_t, utility::string_t>& GetState() const;
                void SetState(const std::map<utility::string_t, utility::string_t>& Value);bool HasState() const;
            
                /// <summary>
                    /// The Point of Interest ID that contains geospatial data related to this Prototype
                    /// </summary>
                utility::string_t GetPointOfInterestId() const;
                void SetPointOfInterestId(const utility::string_t& Value);bool HasPointOfInterestId() const;
            
                /// <summary>
                    /// The Parent PrototypeId to this particular record, if any
                    /// </summary>
                utility::string_t GetParentId() const;
                void SetParentId(const utility::string_t& Value);bool HasParentId() const;
            
                /// <summary>
                    /// If this prototype can only be viewed by a specific set of group ids
                    /// </summary>
                const std::vector<utility::string_t>& GetGroupIds() const;
                void SetGroupIds(const std::vector<utility::string_t>& Value);bool HasGroupIds() const;
            
                /// <summary>
                    /// The user identity which created this instance
                    /// </summary>
                utility::string_t GetCreatedBy() const;
                void SetCreatedBy(const utility::string_t& Value);bool HasCreatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was first created
                    /// </summary>
                utility::string_t GetCreatedAt() const;
                void SetCreatedAt(const utility::string_t& Value);bool HasCreatedAt() const;
            
                /// <summary>
                    /// The user identity which last updated this instance
                    /// </summary>
                utility::string_t GetUpdatedBy() const;
                void SetUpdatedBy(const utility::string_t& Value);bool HasUpdatedBy() const;
            
                /// <summary>
                    /// The date and time this prototype was last updated
                    /// </summary>
                utility::string_t GetUpdatedAt() const;
                void SetUpdatedAt(const utility::string_t& Value);bool HasUpdatedAt() const;
            
                /// <summary>
                    /// There can be only one... instantiated prototype per user
                    /// </summary>
                bool GetHighlander() const;
                void SetHighlander(const bool& Value);bool HasHighlander() const;
            
                /// <summary>
                    /// Type of the prototype
                    /// </summary>
                utility::string_t GetType() const;
                void SetType(const utility::string_t& Value);bool HasType() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the system
                    /// </summary>
                bool GetSystemOwned() const;
                void SetSystemOwned(const bool& Value);bool HasSystemOwned() const;
            
                /// <summary>
                    /// Whether the prototype is owned by the user who created it
                    /// </summary>
                utility::string_t GetPrototypeOwnerId() const;
                void SetPrototypeOwnerId(const utility::string_t& Value);bool HasPrototypeOwnerId() const;
            

        protected:
            std::optional<utility::string_t> m_Id;
            std::optional<utility::string_t> m_Name;
            std::optional<std::vector<utility::string_t>> m_Tags;
            std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
            std::optional<std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>> m_UiStrings;
            std::optional<std::map<utility::string_t, utility::string_t>> m_State;
            std::optional<utility::string_t> m_PointOfInterestId;
            std::optional<utility::string_t> m_ParentId;
            std::optional<std::vector<utility::string_t>> m_GroupIds;
            std::optional<utility::string_t> m_CreatedBy;
            std::optional<utility::string_t> m_CreatedAt;
            std::optional<utility::string_t> m_UpdatedBy;
            std::optional<utility::string_t> m_UpdatedAt;
            std::optional<bool> m_Highlander;
            std::optional<utility::string_t> m_Type;
            std::optional<bool> m_SystemOwned;
            std::optional<utility::string_t> m_PrototypeOwnerId;
            };

    class PrototypeDtoDataPage : public csp::services::DtoBase
        {
        public:
            PrototypeDtoDataPage();
            virtual ~PrototypeDtoDataPage();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            
                const std::vector<std::shared_ptr<PrototypeDto>>& GetItems() const;
                void SetItems(const std::vector<std::shared_ptr<PrototypeDto>>& Value);bool HasItems() const;
            
                int32_t GetSkip() const;
                void SetSkip(int32_t Value);bool HasSkip() const;
            
                int32_t GetLimit() const;
                void SetLimit(int32_t Value);bool HasLimit() const;
            
                int32_t GetItemCount() const;
                void SetItemCount(int32_t Value);bool HasItemCount() const;
            
                int64_t GetItemTotalCount() const;
                void SetItemTotalCount(int64_t Value);bool HasItemTotalCount() const;
            

        protected:
            std::optional<std::vector<std::shared_ptr<PrototypeDto>>> m_Items;
            std::optional<int32_t> m_Skip;
            std::optional<int32_t> m_Limit;
            std::optional<int32_t> m_ItemCount;
            std::optional<int64_t> m_ItemTotalCount;
            };

    class SortDirection : public csp::services::EnumBase
        {
        public:
            SortDirection();
            virtual ~SortDirection();

            utility::string_t ToJson() const override;
            void FromJson(const utility::string_t& Json) override;

            enum class eSortDirection
            {
                ASCENDING,
                DESCENDING
                
            };

            eSortDirection GetValue() const;
            void SetValue(eSortDirection const Value);

        protected:
            eSortDirection Value = {};
        };


}   // namespace csp::services::prototypeservice