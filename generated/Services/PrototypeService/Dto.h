

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::prototypeservice
{

class AnalyticsRecord;
class ApiVersion;
class AssetDetailDto;
class AssetPipelineModelDto;
class AssetPipelineModelLodLevelDto;
class AssetPipelineStatus;
class AssetPipelineThumbnailDto;
class BulkUpsertAssetDetailDto;
class BulkUpsertPrototypeDto;
class ControllerVersions;
class CopiedAssetDetailDto;
class CopiedPrototypeDto;
class CopyPrototypesResult;
class DuplicateGroupPrototypesOptions;
class ExportGroupPrototypesOptions;
class FileSource;
class ImportGroupPrototypesOptions;
class InternalFileCopyRequest;
class LocalizedString;
class MusubiFileInfo;
class NamedFunction;
class PrototypeDto;
class PrototypeDtoDataPage;
class PrototypeFilters;
class ServiceVersionInfo;
class SortDirection;
class StringDataPage;



class AnalyticsRecord : public csp::services::DtoBase
{
public:
	AnalyticsRecord();
	virtual ~AnalyticsRecord();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetId() const;
	bool HasId() const;

	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	utility::string_t GetTimestamp() const;
	void SetTimestamp(const utility::string_t& Value);
	bool HasTimestamp() const;

	utility::string_t GetProductIdentifier() const;
	void SetProductIdentifier(const utility::string_t& Value);
	bool HasProductIdentifier() const;

	utility::string_t GetProductContext() const;
	void SetProductContext(const utility::string_t& Value);
	bool HasProductContext() const;

	utility::string_t GetProductContextSection() const;
	void SetProductContextSection(const utility::string_t& Value);
	bool HasProductContextSection() const;

	const std::vector<utility::string_t>& GetVersionMatrix() const;
	void SetVersionMatrix(const std::vector<utility::string_t>& Value);
	bool HasVersionMatrix() const;

	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	utility::string_t GetUserId() const;
	bool HasUserId() const;

	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	utility::string_t GetSubCategory() const;
	void SetSubCategory(const utility::string_t& Value);
	bool HasSubCategory() const;

	utility::string_t GetInteractionType() const;
	void SetInteractionType(const utility::string_t& Value);
	bool HasInteractionType() const;

	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;

	utility::string_t GetServiceName() const;
	void SetServiceName(const utility::string_t& Value);
	bool HasServiceName() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_Timestamp;
	std::optional<utility::string_t> m_ProductIdentifier;
	std::optional<utility::string_t> m_ProductContext;
	std::optional<utility::string_t> m_ProductContextSection;
	std::optional<std::vector<utility::string_t>> m_VersionMatrix;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_Category;
	std::optional<utility::string_t> m_SubCategory;
	std::optional<utility::string_t> m_InteractionType;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
	std::optional<utility::string_t> m_ServiceName;
};

/// <summary>
/// Version of an API
/// </summary>
class ApiVersion : public csp::services::DtoBase
{
public:
	ApiVersion();
	virtual ~ApiVersion();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the version
	/// </summary>
	utility::string_t GetVersion() const;
	void SetVersion(const utility::string_t& Value);
	bool HasVersion() const;

	/// <summary>
	/// when the version was deprecated, if known
	/// </summary>
	utility::string_t GetDeprecationDatetime() const;
	void SetDeprecationDatetime(const utility::string_t& Value);
	bool HasDeprecationDatetime() const;

	/// <summary>
	/// when the version will no longer be available, if determined
	/// </summary>
	utility::string_t GetEndOfLifeDatetime() const;
	void SetEndOfLifeDatetime(const utility::string_t& Value);
	bool HasEndOfLifeDatetime() const;


protected:
	std::optional<utility::string_t> m_Version;
	std::optional<utility::string_t> m_DeprecationDatetime;
	std::optional<utility::string_t> m_EndOfLifeDatetime;
};

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
	bool HasPrototypeId() const;

	/// <summary>
	/// The unique identifier for this asset
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Filename for the asset, mainly useful for unity side
	/// </summary>
	utility::string_t GetFileName() const;
	bool HasFileName() const;

	/// <summary>
	/// The name of the asset
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// LanguageCode for the asset defaults to en-us
	/// </summary>
	utility::string_t GetLanguageCode() const;
	void SetLanguageCode(const utility::string_t& Value);
	bool HasLanguageCode() const;

	/// <summary>
	/// Type of Asset
	/// </summary>
	utility::string_t GetAssetType() const;
	void SetAssetType(const utility::string_t& Value);
	bool HasAssetType() const;

	/// <summary>
	/// List of the Platforms this asset supports
	/// </summary>
	const std::vector<utility::string_t>& GetSupportedPlatforms() const;
	void SetSupportedPlatforms(const std::vector<utility::string_t>& Value);
	bool HasSupportedPlatforms() const;

	/// <summary>
	/// What style is this asset:
	/// Low-Res, High-Res, Low-Bandwidth etc
	/// </summary>
	const std::vector<utility::string_t>& GetStyle() const;
	void SetStyle(const std::vector<utility::string_t>& Value);
	bool HasStyle() const;

	/// <summary>
	/// The Unique Identifier for a specific AddressableItem within a package
	/// </summary>
	[[deprecated("'addressableId' has been deprecated!")]]
	utility::string_t GetAddressableId() const;
	[[deprecated("'addressableId' has been deprecated!")]]
	void SetAddressableId(const utility::string_t& Value);
	bool HasAddressableId() const;

	/// <summary>
	/// The Reference Id associated with an outside application
	/// </summary>
	utility::string_t GetThirdPartyReferenceId() const;
	void SetThirdPartyReferenceId(const utility::string_t& Value);
	bool HasThirdPartyReferenceId() const;

	/// <summary>
	/// Url where the asset is able to be retrieved from
	/// </summary>
	utility::string_t GetUri() const;
	bool HasUri() const;

	/// <summary>
	/// An MD5 Hash of the uploaded file used to determine if the client needs to
	/// get an updated version.
	/// </summary>
	utility::string_t GetChecksum() const;
	bool HasChecksum() const;

	/// <summary>
	/// Version number of the Asset, this is used mostly for debugging when checking to see
	/// if the client version details match the services at a quick glance.
	/// </summary>
	utility::string_t GetVersion() const;
	bool HasVersion() const;

	/// <summary>
	/// Mimetype of the AssetDetail for web base solutions to know what the file type is
	/// and be able to handle it correctly.
	/// </summary>
	utility::string_t GetMimeType() const;
	bool HasMimeType() const;

	/// <summary>
	/// The external full URI to the location of media - this will never be populated on objects
	/// returned from the server - it is meant to set the Uri field on updates.
	/// </summary>
	utility::string_t GetExternalUri() const;
	void SetExternalUri(const utility::string_t& Value);
	bool HasExternalUri() const;

	/// <summary>
	/// MIME type set on the data at the associated path - this will never be populated on objects
	/// returned from the server - it is meant to set the MimeType field on updates.
	/// </summary>
	utility::string_t GetExternalMimeType() const;
	void SetExternalMimeType(const utility::string_t& Value);
	bool HasExternalMimeType() const;

	/// <summary>
	/// Path to the original asset
	/// </summary>
	utility::string_t GetOriginalAssetUri() const;
	void SetOriginalAssetUri(const utility::string_t& Value);
	bool HasOriginalAssetUri() const;

	/// <summary>
	/// Tags for this asset-detail
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Size of the current version of the raw asset in bytes - 0 if external or no file uploaded
	/// </summary>
	int64_t GetSizeInBytes() const;
	bool HasSizeInBytes() const;

	/// <summary>
	/// The date and time this asset detail was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The userId that created this asset detail
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this asset detail was updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// The userId that updated this asset detail
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;


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
	std::optional<utility::string_t> m_OriginalAssetUri;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<int64_t> m_SizeInBytes;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_UpdatedBy;
};

/// <summary>
/// Represents the information about the parameters used to process a 3d model to generate associated assets
/// </summary>
class AssetPipelineModelDto : public csp::services::DtoBase
{
public:
	AssetPipelineModelDto();
	virtual ~AssetPipelineModelDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The ID of the prototype associated with the processed asset-detail
	/// </summary>
	utility::string_t GetPrototypeId() const;
	bool HasPrototypeId() const;

	/// <summary>
	/// The ID of the asset-detail processed to generate the associated assets
	/// </summary>
	utility::string_t GetAssetDetailId() const;
	bool HasAssetDetailId() const;

	/// <summary>
	/// The count of thumbnails generated
	/// When used in combination with Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.Thumbnails, this parameter takes precedence
	/// When used without Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.Thumbnails, the default options for each thumbnail is assumed
	/// When set to `null`, no change will be made to the existing thumbnail(s)
	/// When set to `0`, all existing thumbnail(s) will be deleted
	/// When set to a non-zero value, new thumbnails will be generated if existing thumbnails don't already exist with the same parameters
	///
	/// </summary>
	int32_t GetThumbnailsCount() const;
	void SetThumbnailsCount(int32_t Value);
	bool HasThumbnailsCount() const;

	/// <summary>
	/// The options for each thumbnail generated
	/// When set to `null`, no change will be made to existing thumbnail(s)
	/// When changing this list, the old list and new list will be merged using the
	/// Magnopus.Service.Prototype.Dtos.AssetPipelineThumbnailDto.ThumbnailNumber to match each value To overwrite all thumbnails, send a complete
	/// list and set Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.ThumbnailsCount to the length of the new list (to cut off the remaining
	/// existing thumbnails)
	///
	/// </summary>
	const std::vector<std::shared_ptr<AssetPipelineThumbnailDto>>& GetThumbnails() const;
	void SetThumbnails(const std::vector<std::shared_ptr<AssetPipelineThumbnailDto>>& Value);
	bool HasThumbnails() const;

	/// <summary>
	/// The count of LOD levels generated
	/// When used in combination with Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.LodLevels, this parameter takes precedence
	/// When used without Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.LodLevels, the default options for each LOD level is assumed
	/// When set to `null`, no change will be made to the existing LOD level(s)
	/// When set to `0`, all existing LOD level(s) will be deleted
	/// When set to a non-zero value, new LOD levels will be generated if existing LOD levels don't already exist with the same parameters
	///
	/// </summary>
	int32_t GetLodLevelsCount() const;
	void SetLodLevelsCount(int32_t Value);
	bool HasLodLevelsCount() const;

	/// <summary>
	/// The options for each LOD level generated
	/// When set to `null`, no change will be made to existing LOD level(s)
	/// When changing this list, the old list and new list will be merged using the
	/// Magnopus.Service.Prototype.Dtos.AssetPipelineModelLodLevelDto.LodLevelNumber to match each value To overwrite all LOD levels, send a complete
	/// list and set Magnopus.Service.Prototype.Dtos.AssetPipelineModelDto.LodLevelsCount to the length of the new list (to cut off the remaining
	/// existing LOD levels)
	///
	/// </summary>
	const std::vector<std::shared_ptr<AssetPipelineModelLodLevelDto>>& GetLodLevels() const;
	void SetLodLevels(const std::vector<std::shared_ptr<AssetPipelineModelLodLevelDto>>& Value);
	bool HasLodLevels() const;


protected:
	std::optional<utility::string_t> m_PrototypeId;
	std::optional<utility::string_t> m_AssetDetailId;
	std::optional<int32_t> m_ThumbnailsCount;
	std::optional<std::vector<std::shared_ptr<AssetPipelineThumbnailDto>>> m_Thumbnails;
	std::optional<int32_t> m_LodLevelsCount;
	std::optional<std::vector<std::shared_ptr<AssetPipelineModelLodLevelDto>>> m_LodLevels;
};

/// <summary>
/// Parameters used to generate an LOD level
/// </summary>
class AssetPipelineModelLodLevelDto : public csp::services::DtoBase
{
public:
	AssetPipelineModelLodLevelDto();
	virtual ~AssetPipelineModelLodLevelDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The ID of the prototype associated with the processed asset-detail
	/// </summary>
	utility::string_t GetPrototypeId() const;
	bool HasPrototypeId() const;

	/// <summary>
	/// Asset-detail associated with this LOD level
	/// </summary>
	utility::string_t GetAssetDetailId() const;
	bool HasAssetDetailId() const;

	std::shared_ptr<AssetPipelineStatus> GetStatus() const;
	void SetStatus(const std::shared_ptr<AssetPipelineStatus>& Value);
	bool HasStatus() const;

	/// <summary>
	/// The LOD level number
	/// </summary>
	int32_t GetLodLevelNumber() const;
	void SetLodLevelNumber(int32_t Value);
	bool HasLodLevelNumber() const;

	/// <summary>
	/// The target ratio to simplify the model's vertices and polygons
	/// </summary>
	float GetSimplifyRatio() const;
	void SetSimplifyRatio(float Value);
	bool HasSimplifyRatio() const;

	/// <summary>
	/// The error threshold to stop simplification before reaching the Magnopus.Service.Prototype.Dtos.AssetPipelineModelLodLevelDto.SimplifyRatio
	/// SimplifyRatio=0.0, ErrorTolerance=0.01: Aims for maximum simplification, constrained to 1% error.
	/// SimplifyRatio=0.5, ErrorTolerance=0.001: Aims for 50% simplification, constrained to 0.1% error.
	/// SimplifyRatio=0.5, ErrorTolerance=1: Aims for 50% simplification, unconstrained by error.
	///
	/// </summary>
	float GetErrorTolerance() const;
	void SetErrorTolerance(float Value);
	bool HasErrorTolerance() const;

	/// <summary>
	/// Color texture image max size (in the largest dimension)
	/// </summary>
	int32_t GetMaxTextureSize() const;
	void SetMaxTextureSize(int32_t Value);
	bool HasMaxTextureSize() const;

	/// <summary>
	/// Light map image max size (in the largest dimension)
	/// </summary>
	int32_t GetMaxLightMapSize() const;
	void SetMaxLightMapSize(int32_t Value);
	bool HasMaxLightMapSize() const;

	/// <summary>
	/// Compress the normals texture
	/// </summary>
	bool GetCompressNormals() const;
	void SetCompressNormals(const bool& Value);
	bool HasCompressNormals() const;

	/// <summary>
	/// Compress the occlusion texture
	/// </summary>
	bool GetCompressOcclusion() const;
	void SetCompressOcclusion(const bool& Value);
	bool HasCompressOcclusion() const;

	/// <summary>
	/// Color textures to produce a higher quality image at the cost of less efficient compression (UASTC)
	/// </summary>
	bool GetHighQualityTextures() const;
	void SetHighQualityTextures(const bool& Value);
	bool HasHighQualityTextures() const;


protected:
	std::optional<utility::string_t> m_PrototypeId;
	std::optional<utility::string_t> m_AssetDetailId;
	std::optional<std::shared_ptr<AssetPipelineStatus>> m_Status;
	std::optional<int32_t> m_LodLevelNumber;
	std::optional<float> m_SimplifyRatio;
	std::optional<float> m_ErrorTolerance;
	std::optional<int32_t> m_MaxTextureSize;
	std::optional<int32_t> m_MaxLightMapSize;
	std::optional<bool> m_CompressNormals;
	std::optional<bool> m_CompressOcclusion;
	std::optional<bool> m_HighQualityTextures;
};

/// <summary>
/// Possible statuses of asset processing pipeline
/// </summary>
class AssetPipelineStatus : public csp::services::EnumBase
{
public:
	AssetPipelineStatus();
	virtual ~AssetPipelineStatus();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eAssetPipelineStatus
	{
		RUNNING,
		FAILED,
		SUCCEEDED

	};

	eAssetPipelineStatus GetValue() const;
	void SetValue(eAssetPipelineStatus const Value);

protected:
	eAssetPipelineStatus Value = {};
};

/// <summary>
/// Options for thumbnail generation
/// </summary>
class AssetPipelineThumbnailDto : public csp::services::DtoBase
{
public:
	AssetPipelineThumbnailDto();
	virtual ~AssetPipelineThumbnailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The ID of the prototype associated with the processed asset-detail
	/// </summary>
	utility::string_t GetPrototypeId() const;
	bool HasPrototypeId() const;

	/// <summary>
	/// Asset-detail associated with this thumbnail
	/// </summary>
	utility::string_t GetAssetDetailId() const;
	bool HasAssetDetailId() const;

	std::shared_ptr<AssetPipelineStatus> GetStatus() const;
	void SetStatus(const std::shared_ptr<AssetPipelineStatus>& Value);
	bool HasStatus() const;

	/// <summary>
	/// The thumbnail number
	/// </summary>
	int32_t GetThumbnailNumber() const;
	void SetThumbnailNumber(int32_t Value);
	bool HasThumbnailNumber() const;

	/// <summary>
	/// The image size of the generated thumbnail in the X dimension
	/// </summary>
	int32_t GetImageSizeX() const;
	void SetImageSizeX(int32_t Value);
	bool HasImageSizeX() const;

	/// <summary>
	/// The image size of the generated thumbnail in the Y dimension
	/// </summary>
	int32_t GetImageSizeY() const;
	void SetImageSizeY(int32_t Value);
	bool HasImageSizeY() const;


protected:
	std::optional<utility::string_t> m_PrototypeId;
	std::optional<utility::string_t> m_AssetDetailId;
	std::optional<std::shared_ptr<AssetPipelineStatus>> m_Status;
	std::optional<int32_t> m_ThumbnailNumber;
	std::optional<int32_t> m_ImageSizeX;
	std::optional<int32_t> m_ImageSizeY;
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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Prototype this Asset is assigned to
	/// </summary>
	utility::string_t GetPrototypeId() const;
	bool HasPrototypeId() const;

	/// <summary>
	/// Filename for the asset, mainly useful for unity side
	/// </summary>
	utility::string_t GetFileName() const;
	bool HasFileName() const;

	/// <summary>
	/// The name of the asset
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// LanguageCode for the asset defaults to en-us
	/// </summary>
	utility::string_t GetLanguageCode() const;
	void SetLanguageCode(const utility::string_t& Value);
	bool HasLanguageCode() const;

	/// <summary>
	/// Type of Asset
	/// </summary>
	utility::string_t GetAssetType() const;
	void SetAssetType(const utility::string_t& Value);
	bool HasAssetType() const;

	/// <summary>
	/// List of the Platforms this asset supports
	/// </summary>
	const std::vector<utility::string_t>& GetSupportedPlatforms() const;
	void SetSupportedPlatforms(const std::vector<utility::string_t>& Value);
	bool HasSupportedPlatforms() const;

	/// <summary>
	/// What style is this asset:
	/// Low-Res, High-Res, Low-Bandwidth etc
	/// </summary>
	const std::vector<utility::string_t>& GetStyle() const;
	void SetStyle(const std::vector<utility::string_t>& Value);
	bool HasStyle() const;

	/// <summary>
	/// The Unique Identifier for a specific AddressableItem within a package
	/// </summary>
	[[deprecated("'addressableId' has been deprecated!")]]
	utility::string_t GetAddressableId() const;
	[[deprecated("'addressableId' has been deprecated!")]]
	void SetAddressableId(const utility::string_t& Value);
	bool HasAddressableId() const;

	/// <summary>
	/// The Reference Id associated with an outside application
	/// </summary>
	utility::string_t GetThirdPartyReferenceId() const;
	void SetThirdPartyReferenceId(const utility::string_t& Value);
	bool HasThirdPartyReferenceId() const;

	/// <summary>
	/// Url where the asset is able to be retrieved from
	/// </summary>
	utility::string_t GetUri() const;
	bool HasUri() const;

	/// <summary>
	/// An MD5 Hash of the uploaded file used to determine if the client needs to
	/// get an updated version.
	/// </summary>
	utility::string_t GetChecksum() const;
	bool HasChecksum() const;

	/// <summary>
	/// Version number of the Asset, this is used mostly for debugging when checking to see
	/// if the client version details match the services at a quick glance.
	/// </summary>
	utility::string_t GetVersion() const;
	bool HasVersion() const;

	/// <summary>
	/// Mimetype of the AssetDetail for web base solutions to know what the file type is
	/// and be able to handle it correctly.
	/// </summary>
	utility::string_t GetMimeType() const;
	bool HasMimeType() const;

	/// <summary>
	/// The external full URI to the location of media - this will never be populated on objects
	/// returned from the server - it is meant to set the Uri field on updates.
	/// </summary>
	utility::string_t GetExternalUri() const;
	void SetExternalUri(const utility::string_t& Value);
	bool HasExternalUri() const;

	/// <summary>
	/// MIME type set on the data at the associated path - this will never be populated on objects
	/// returned from the server - it is meant to set the MimeType field on updates.
	/// </summary>
	utility::string_t GetExternalMimeType() const;
	void SetExternalMimeType(const utility::string_t& Value);
	bool HasExternalMimeType() const;

	/// <summary>
	/// Path to the original asset
	/// </summary>
	utility::string_t GetOriginalAssetUri() const;
	void SetOriginalAssetUri(const utility::string_t& Value);
	bool HasOriginalAssetUri() const;

	/// <summary>
	/// Tags for this asset-detail
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Size of the current version of the raw asset in bytes - 0 if external or no file uploaded
	/// </summary>
	int64_t GetSizeInBytes() const;
	bool HasSizeInBytes() const;

	/// <summary>
	/// The date and time this asset detail was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The userId that created this asset detail
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this asset detail was updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// The userId that updated this asset detail
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;


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
	std::optional<utility::string_t> m_OriginalAssetUri;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<int64_t> m_SizeInBytes;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_UpdatedBy;
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
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Name for the prototype
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Tags for this prototype
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Collection of metadata for this prototype
	/// or an empty dictionary if none
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;

	/// <summary>
	/// Collection of translations stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
	void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);
	bool HasUiStrings() const;

	/// <summary>
	/// Collection of default states for certain items such as reward items.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetState() const;
	void SetState(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasState() const;

	/// <summary>
	/// The Point of Interest ID that contains geospatial data related to this Prototype
	/// </summary>
	utility::string_t GetPointOfInterestId() const;
	void SetPointOfInterestId(const utility::string_t& Value);
	bool HasPointOfInterestId() const;

	/// <summary>
	/// The Parent PrototypeId to this particular record, if any
	/// </summary>
	utility::string_t GetParentId() const;
	void SetParentId(const utility::string_t& Value);
	bool HasParentId() const;

	/// <summary>
	/// If this prototype can only be viewed by a specific set of group ids
	/// </summary>
	const std::vector<utility::string_t>& GetGroupIds() const;
	void SetGroupIds(const std::vector<utility::string_t>& Value);
	bool HasGroupIds() const;

	/// <summary>
	/// The user identity which created this instance
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this prototype was first created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The user identity which last updated this instance
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	/// <summary>
	/// The date and time this prototype was last updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// There can be only one... instantiated prototype per user
	/// </summary>
	bool GetHighlander() const;
	void SetHighlander(const bool& Value);
	bool HasHighlander() const;

	/// <summary>
	/// Type of the prototype
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Whether the prototype is owned by the system
	/// </summary>
	bool GetSystemOwned() const;
	void SetSystemOwned(const bool& Value);
	bool HasSystemOwned() const;

	/// <summary>
	/// Whether the prototype is owned by the user who created it
	/// </summary>
	utility::string_t GetPrototypeOwnerId() const;
	void SetPrototypeOwnerId(const utility::string_t& Value);
	bool HasPrototypeOwnerId() const;

	/// <summary>
	/// The organizationId that the prototype belongs to
	/// </summary>
	utility::string_t GetOrganizationId() const;
	bool HasOrganizationId() const;

	/// <summary>
	/// Access restrictions for read, if none, publicly readable
	/// </summary>
	const std::vector<utility::string_t>& GetReadAccess() const;
	void SetReadAccess(const std::vector<utility::string_t>& Value);
	bool HasReadAccess() const;

	/// <summary>
	/// Access restrictions for write, if none, publicly writeable
	/// </summary>
	const std::vector<utility::string_t>& GetWriteAccess() const;
	void SetWriteAccess(const std::vector<utility::string_t>& Value);
	bool HasWriteAccess() const;


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
	std::optional<utility::string_t> m_OrganizationId;
	std::optional<std::vector<utility::string_t>> m_ReadAccess;
	std::optional<std::vector<utility::string_t>> m_WriteAccess;
};

/// <summary>
/// Versions of a specific controller
/// </summary>
class ControllerVersions : public csp::services::DtoBase
{
public:
	ControllerVersions();
	virtual ~ControllerVersions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Reverse proxy of the service
	/// </summary>
	utility::string_t GetReverseProxy() const;
	void SetReverseProxy(const utility::string_t& Value);
	bool HasReverseProxy() const;

	/// <summary>
	/// Name of the controller
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// supported versions
	/// </summary>
	const std::vector<std::shared_ptr<ApiVersion>>& GetApiVersions() const;
	void SetApiVersions(const std::vector<std::shared_ptr<ApiVersion>>& Value);
	bool HasApiVersions() const;

	/// <summary>
	/// currently adopted version
	/// </summary>
	utility::string_t GetCurrentApiVersion() const;
	void SetCurrentApiVersion(const utility::string_t& Value);
	bool HasCurrentApiVersion() const;


protected:
	std::optional<utility::string_t> m_ReverseProxy;
	std::optional<utility::string_t> m_Name;
	std::optional<std::vector<std::shared_ptr<ApiVersion>>> m_ApiVersions;
	std::optional<utility::string_t> m_CurrentApiVersion;
};

/// <summary>
/// The representation of an asset detail in the process of being copied somehow
/// </summary>
class CopiedAssetDetailDto : public csp::services::DtoBase
{
public:
	CopiedAssetDetailDto();
	virtual ~CopiedAssetDetailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id of the asset detail from which this was derived
	/// </summary>
	utility::string_t GetOriginalAssetDetailId() const;
	bool HasOriginalAssetDetailId() const;

	/// <summary>
	/// The id of the prototype to which the asset detail from which this was derived was attached
	/// </summary>
	utility::string_t GetOriginalPrototypeId() const;
	bool HasOriginalPrototypeId() const;

	/// <summary>
	/// Prototype this Asset is assigned to
	/// </summary>
	utility::string_t GetPrototypeId() const;
	bool HasPrototypeId() const;

	/// <summary>
	/// The unique identifier for this asset
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Filename for the asset, mainly useful for unity side
	/// </summary>
	utility::string_t GetFileName() const;
	bool HasFileName() const;

	/// <summary>
	/// The name of the asset
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// LanguageCode for the asset defaults to en-us
	/// </summary>
	utility::string_t GetLanguageCode() const;
	void SetLanguageCode(const utility::string_t& Value);
	bool HasLanguageCode() const;

	/// <summary>
	/// Type of Asset
	/// </summary>
	utility::string_t GetAssetType() const;
	void SetAssetType(const utility::string_t& Value);
	bool HasAssetType() const;

	/// <summary>
	/// List of the Platforms this asset supports
	/// </summary>
	const std::vector<utility::string_t>& GetSupportedPlatforms() const;
	void SetSupportedPlatforms(const std::vector<utility::string_t>& Value);
	bool HasSupportedPlatforms() const;

	/// <summary>
	/// What style is this asset:
	/// Low-Res, High-Res, Low-Bandwidth etc
	/// </summary>
	const std::vector<utility::string_t>& GetStyle() const;
	void SetStyle(const std::vector<utility::string_t>& Value);
	bool HasStyle() const;

	/// <summary>
	/// The Unique Identifier for a specific AddressableItem within a package
	/// </summary>
	[[deprecated("'addressableId' has been deprecated!")]]
	utility::string_t GetAddressableId() const;
	[[deprecated("'addressableId' has been deprecated!")]]
	void SetAddressableId(const utility::string_t& Value);
	bool HasAddressableId() const;

	/// <summary>
	/// The Reference Id associated with an outside application
	/// </summary>
	utility::string_t GetThirdPartyReferenceId() const;
	void SetThirdPartyReferenceId(const utility::string_t& Value);
	bool HasThirdPartyReferenceId() const;

	/// <summary>
	/// Url where the asset is able to be retrieved from
	/// </summary>
	utility::string_t GetUri() const;
	bool HasUri() const;

	/// <summary>
	/// An MD5 Hash of the uploaded file used to determine if the client needs to
	/// get an updated version.
	/// </summary>
	utility::string_t GetChecksum() const;
	bool HasChecksum() const;

	/// <summary>
	/// Version number of the Asset, this is used mostly for debugging when checking to see
	/// if the client version details match the services at a quick glance.
	/// </summary>
	utility::string_t GetVersion() const;
	bool HasVersion() const;

	/// <summary>
	/// Mimetype of the AssetDetail for web base solutions to know what the file type is
	/// and be able to handle it correctly.
	/// </summary>
	utility::string_t GetMimeType() const;
	bool HasMimeType() const;

	/// <summary>
	/// The external full URI to the location of media - this will never be populated on objects
	/// returned from the server - it is meant to set the Uri field on updates.
	/// </summary>
	utility::string_t GetExternalUri() const;
	void SetExternalUri(const utility::string_t& Value);
	bool HasExternalUri() const;

	/// <summary>
	/// MIME type set on the data at the associated path - this will never be populated on objects
	/// returned from the server - it is meant to set the MimeType field on updates.
	/// </summary>
	utility::string_t GetExternalMimeType() const;
	void SetExternalMimeType(const utility::string_t& Value);
	bool HasExternalMimeType() const;

	/// <summary>
	/// Path to the original asset
	/// </summary>
	utility::string_t GetOriginalAssetUri() const;
	void SetOriginalAssetUri(const utility::string_t& Value);
	bool HasOriginalAssetUri() const;

	/// <summary>
	/// Tags for this asset-detail
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Size of the current version of the raw asset in bytes - 0 if external or no file uploaded
	/// </summary>
	int64_t GetSizeInBytes() const;
	bool HasSizeInBytes() const;

	/// <summary>
	/// The date and time this asset detail was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The userId that created this asset detail
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this asset detail was updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// The userId that updated this asset detail
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;


protected:
	std::optional<utility::string_t> m_OriginalAssetDetailId;
	std::optional<utility::string_t> m_OriginalPrototypeId;
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
	std::optional<utility::string_t> m_OriginalAssetUri;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<int64_t> m_SizeInBytes;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_UpdatedBy;
};

/// <summary>
/// The representation of a prototype in the process of being copied somehow
/// </summary>
class CopiedPrototypeDto : public csp::services::DtoBase
{
public:
	CopiedPrototypeDto();
	virtual ~CopiedPrototypeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id of the prototype from which this was derived
	/// </summary>
	utility::string_t GetOriginalPrototypeId() const;
	bool HasOriginalPrototypeId() const;

	/// <summary>
	/// The id of the prototype to which this object was originally parented
	/// </summary>
	utility::string_t GetOriginalParentId() const;
	bool HasOriginalParentId() const;

	/// <summary>
	/// The unique identifier for this instance
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Name for the prototype
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Tags for this prototype
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Collection of metadata for this prototype
	/// or an empty dictionary if none
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;

	/// <summary>
	/// Collection of translations stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
	void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);
	bool HasUiStrings() const;

	/// <summary>
	/// Collection of default states for certain items such as reward items.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetState() const;
	void SetState(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasState() const;

	/// <summary>
	/// The Point of Interest ID that contains geospatial data related to this Prototype
	/// </summary>
	utility::string_t GetPointOfInterestId() const;
	void SetPointOfInterestId(const utility::string_t& Value);
	bool HasPointOfInterestId() const;

	/// <summary>
	/// The Parent PrototypeId to this particular record, if any
	/// </summary>
	utility::string_t GetParentId() const;
	void SetParentId(const utility::string_t& Value);
	bool HasParentId() const;

	/// <summary>
	/// If this prototype can only be viewed by a specific set of group ids
	/// </summary>
	const std::vector<utility::string_t>& GetGroupIds() const;
	void SetGroupIds(const std::vector<utility::string_t>& Value);
	bool HasGroupIds() const;

	/// <summary>
	/// The user identity which created this instance
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this prototype was first created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The user identity which last updated this instance
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	/// <summary>
	/// The date and time this prototype was last updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// There can be only one... instantiated prototype per user
	/// </summary>
	bool GetHighlander() const;
	void SetHighlander(const bool& Value);
	bool HasHighlander() const;

	/// <summary>
	/// Type of the prototype
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Whether the prototype is owned by the system
	/// </summary>
	bool GetSystemOwned() const;
	void SetSystemOwned(const bool& Value);
	bool HasSystemOwned() const;

	/// <summary>
	/// Whether the prototype is owned by the user who created it
	/// </summary>
	utility::string_t GetPrototypeOwnerId() const;
	void SetPrototypeOwnerId(const utility::string_t& Value);
	bool HasPrototypeOwnerId() const;

	/// <summary>
	/// The organizationId that the prototype belongs to
	/// </summary>
	utility::string_t GetOrganizationId() const;
	bool HasOrganizationId() const;

	/// <summary>
	/// Access restrictions for read, if none, publicly readable
	/// </summary>
	const std::vector<utility::string_t>& GetReadAccess() const;
	void SetReadAccess(const std::vector<utility::string_t>& Value);
	bool HasReadAccess() const;

	/// <summary>
	/// Access restrictions for write, if none, publicly writeable
	/// </summary>
	const std::vector<utility::string_t>& GetWriteAccess() const;
	void SetWriteAccess(const std::vector<utility::string_t>& Value);
	bool HasWriteAccess() const;


protected:
	std::optional<utility::string_t> m_OriginalPrototypeId;
	std::optional<utility::string_t> m_OriginalParentId;
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
	std::optional<utility::string_t> m_OrganizationId;
	std::optional<std::vector<utility::string_t>> m_ReadAccess;
	std::optional<std::vector<utility::string_t>> m_WriteAccess;
};

/// <summary>
/// result of an attempt to import group prototypes
/// </summary>
class CopyPrototypesResult : public csp::services::DtoBase
{
public:
	CopyPrototypesResult();
	virtual ~CopyPrototypesResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the prototypes that were created
	/// </summary>
	const std::vector<std::shared_ptr<CopiedPrototypeDto>>& GetPrototypes() const;
	void SetPrototypes(const std::vector<std::shared_ptr<CopiedPrototypeDto>>& Value);
	bool HasPrototypes() const;

	/// <summary>
	/// the assets that were created
	/// </summary>
	const std::vector<std::shared_ptr<CopiedAssetDetailDto>>& GetAssetDetails() const;
	void SetAssetDetails(const std::vector<std::shared_ptr<CopiedAssetDetailDto>>& Value);
	bool HasAssetDetails() const;

	/// <summary>
	/// The old ID as key and the new ID as value
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetIdLookup() const;
	void SetIdLookup(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasIdLookup() const;

	/// <summary>
	/// Whether the call is async processing - if yes, then the expectation is that the other properties are empty
	/// </summary>
	bool GetAsyncProcessing() const;
	void SetAsyncProcessing(const bool& Value);
	bool HasAsyncProcessing() const;


protected:
	std::optional<std::vector<std::shared_ptr<CopiedPrototypeDto>>> m_Prototypes;
	std::optional<std::vector<std::shared_ptr<CopiedAssetDetailDto>>> m_AssetDetails;
	std::optional<std::map<utility::string_t, utility::string_t>> m_IdLookup;
	std::optional<bool> m_AsyncProcessing;
};

/// <summary>
/// Options related to exporting group prototypes
/// </summary>
class DuplicateGroupPrototypesOptions : public csp::services::DtoBase
{
public:
	DuplicateGroupPrototypesOptions();
	virtual ~DuplicateGroupPrototypesOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The groupId to which the original Prototypes are associated
	/// </summary>
	utility::string_t GetOriginalGroupId() const;
	void SetOriginalGroupId(const utility::string_t& Value);
	bool HasOriginalGroupId() const;

	/// <summary>
	/// The groupId to which the new Prototypes should be associated
	/// </summary>
	utility::string_t GetNewGroupId() const;
	void SetNewGroupId(const utility::string_t& Value);
	bool HasNewGroupId() const;

	std::shared_ptr<PrototypeFilters> GetAdditionalFilters() const;
	void SetAdditionalFilters(const std::shared_ptr<PrototypeFilters>& Value);
	bool HasAdditionalFilters() const;

	/// <summary>
	/// Whether to perform the operation synchronously nor not
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;

	/// <summary>
	/// SuperUsers can duplicate prototypes on behalf of another user, ensuring access for that user
	/// </summary>
	utility::string_t GetOnBehalfOf() const;
	void SetOnBehalfOf(const utility::string_t& Value);
	bool HasOnBehalfOf() const;

	/// <summary>
	/// Whether to do a shallow copy and reference original assets vs copy them
	/// </summary>
	bool GetShallowCopy() const;
	void SetShallowCopy(const bool& Value);
	bool HasShallowCopy() const;

	/// <summary>
	/// Whether to include assets generated by musubi or not
	/// </summary>
	bool GetIncludeMusubiGeneratedAssets() const;
	void SetIncludeMusubiGeneratedAssets(const bool& Value);
	bool HasIncludeMusubiGeneratedAssets() const;


protected:
	std::optional<utility::string_t> m_OriginalGroupId;
	std::optional<utility::string_t> m_NewGroupId;
	std::optional<std::shared_ptr<PrototypeFilters>> m_AdditionalFilters;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_OnBehalfOf;
	std::optional<bool> m_ShallowCopy;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
};

/// <summary>
/// Options related to exporting group prototypes
/// </summary>
class ExportGroupPrototypesOptions : public csp::services::DtoBase
{
public:
	ExportGroupPrototypesOptions();
	virtual ~ExportGroupPrototypesOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id to which the export records created at a point in time are associated
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	/// <summary>
	/// The id to which the export records created at a point in time are associated
	/// </summary>
	utility::string_t GetCoalesenceId() const;
	void SetCoalesenceId(const utility::string_t& Value);
	bool HasCoalesenceId() const;

	/// <summary>
	/// The groupId to which the original Prototypes are associated
	/// </summary>
	utility::string_t GetOriginalGroupId() const;
	void SetOriginalGroupId(const utility::string_t& Value);
	bool HasOriginalGroupId() const;

	std::shared_ptr<PrototypeFilters> GetAdditionalFilters() const;
	void SetAdditionalFilters(const std::shared_ptr<PrototypeFilters>& Value);
	bool HasAdditionalFilters() const;

	/// <summary>
	/// Whether to perform the operation synchronously nor not
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;

	/// <summary>
	/// SuperUsers can duplicate prototypes on behalf of another user, ensuring access for that user
	/// </summary>
	utility::string_t GetOnBehalfOf() const;
	void SetOnBehalfOf(const utility::string_t& Value);
	bool HasOnBehalfOf() const;

	/// <summary>
	/// Whether to include assets generated by musubi or not
	/// </summary>
	bool GetIncludeMusubiGeneratedAssets() const;
	void SetIncludeMusubiGeneratedAssets(const bool& Value);
	bool HasIncludeMusubiGeneratedAssets() const;


protected:
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_CoalesenceId;
	std::optional<utility::string_t> m_OriginalGroupId;
	std::optional<std::shared_ptr<PrototypeFilters>> m_AdditionalFilters;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_OnBehalfOf;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
};

class FileSource : public csp::services::EnumBase
{
public:
	FileSource();
	virtual ~FileSource();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eFileSource
	{
		LOCAL,
		S3,
		WEB

	};

	eFileSource GetValue() const;
	void SetValue(eFileSource const Value);

protected:
	eFileSource Value = {};
};

/// <summary>
/// Options related to exporting group prototypes
/// </summary>
class ImportGroupPrototypesOptions : public csp::services::DtoBase
{
public:
	ImportGroupPrototypesOptions();
	virtual ~ImportGroupPrototypesOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id to which the export records created at a point in time are associated
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	/// <summary>
	/// The id to which the export records created at a point in time are associated
	/// </summary>
	utility::string_t GetCoalesenceId() const;
	void SetCoalesenceId(const utility::string_t& Value);
	bool HasCoalesenceId() const;

	/// <summary>
	/// The groupId to which the original Prototypes are associated
	/// </summary>
	utility::string_t GetNewGroupId() const;
	void SetNewGroupId(const utility::string_t& Value);
	bool HasNewGroupId() const;

	/// <summary>
	/// Whether to perform the operation synchronously nor not
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;

	/// <summary>
	/// SuperUsers can duplicate prototypes on behalf of another user, ensuring access for that user
	/// </summary>
	utility::string_t GetOnBehalfOf() const;
	void SetOnBehalfOf(const utility::string_t& Value);
	bool HasOnBehalfOf() const;

	/// <summary>
	/// Whether to include assets generated by musubi or not
	/// </summary>
	bool GetIncludeMusubiGeneratedAssets() const;
	void SetIncludeMusubiGeneratedAssets(const bool& Value);
	bool HasIncludeMusubiGeneratedAssets() const;


protected:
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_CoalesenceId;
	std::optional<utility::string_t> m_NewGroupId;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_OnBehalfOf;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
};

class InternalFileCopyRequest : public csp::services::DtoBase
{
public:
	InternalFileCopyRequest();
	virtual ~InternalFileCopyRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<MusubiFileInfo> GetSourceFileInfo() const;
	void SetSourceFileInfo(const std::shared_ptr<MusubiFileInfo>& Value);
	bool HasSourceFileInfo() const;

	std::shared_ptr<MusubiFileInfo> GetDestinationFileInfo() const;
	void SetDestinationFileInfo(const std::shared_ptr<MusubiFileInfo>& Value);
	bool HasDestinationFileInfo() const;


protected:
	std::optional<std::shared_ptr<MusubiFileInfo>> m_SourceFileInfo;
	std::optional<std::shared_ptr<MusubiFileInfo>> m_DestinationFileInfo;
};

class LocalizedString : public csp::services::DtoBase
{
public:
	LocalizedString();
	virtual ~LocalizedString();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetLanguageCode() const;
	void SetLanguageCode(const utility::string_t& Value);
	bool HasLanguageCode() const;

	utility::string_t GetValue() const;
	void SetValue(const utility::string_t& Value);
	bool HasValue() const;


protected:
	std::optional<utility::string_t> m_LanguageCode;
	std::optional<utility::string_t> m_Value;
};

class MusubiFileInfo : public csp::services::DtoBase
{
public:
	MusubiFileInfo();
	virtual ~MusubiFileInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetSource() const;
	void SetSource(const utility::string_t& Value);
	bool HasSource() const;

	std::shared_ptr<FileSource> GetFileSource() const;
	void SetFileSource(const std::shared_ptr<FileSource>& Value);
	bool HasFileSource() const;

	utility::string_t GetDirectory() const;
	void SetDirectory(const utility::string_t& Value);
	bool HasDirectory() const;

	utility::string_t GetFilename() const;
	void SetFilename(const utility::string_t& Value);
	bool HasFilename() const;

	utility::string_t GetExtension() const;
	void SetExtension(const utility::string_t& Value);
	bool HasExtension() const;

	utility::string_t GetBucket() const;
	void SetBucket(const utility::string_t& Value);
	bool HasBucket() const;

	utility::string_t GetBucketInfo() const;
	void SetBucketInfo(const utility::string_t& Value);
	bool HasBucketInfo() const;

	utility::string_t GetFullUrl() const;
	void SetFullUrl(const utility::string_t& Value);
	bool HasFullUrl() const;

	utility::string_t GetMimeType() const;
	void SetMimeType(const utility::string_t& Value);
	bool HasMimeType() const;


protected:
	std::optional<utility::string_t> m_Source;
	std::optional<std::shared_ptr<FileSource>> m_FileSource;
	std::optional<utility::string_t> m_Directory;
	std::optional<utility::string_t> m_Filename;
	std::optional<utility::string_t> m_Extension;
	std::optional<utility::string_t> m_Bucket;
	std::optional<utility::string_t> m_BucketInfo;
	std::optional<utility::string_t> m_FullUrl;
	std::optional<utility::string_t> m_MimeType;
};

/// <summary>
/// Versioned function by name
/// </summary>
class NamedFunction : public csp::services::DtoBase
{
public:
	NamedFunction();
	virtual ~NamedFunction();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the function that serves as its version
	/// </summary>
	utility::string_t GetFunctionName() const;
	void SetFunctionName(const utility::string_t& Value);
	bool HasFunctionName() const;

	/// <summary>
	/// date of deprecation, if known
	/// </summary>
	utility::string_t GetDeprecationDatetime() const;
	void SetDeprecationDatetime(const utility::string_t& Value);
	bool HasDeprecationDatetime() const;

	/// <summary>
	/// when the version will no longer be available, if determined
	/// </summary>
	utility::string_t GetEndOfLifeDatetime() const;
	void SetEndOfLifeDatetime(const utility::string_t& Value);
	bool HasEndOfLifeDatetime() const;


protected:
	std::optional<utility::string_t> m_FunctionName;
	std::optional<utility::string_t> m_DeprecationDatetime;
	std::optional<utility::string_t> m_EndOfLifeDatetime;
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
	bool HasId() const;

	/// <summary>
	/// Name for the prototype
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Tags for this prototype
	/// or an empty list if none
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Collection of metadata for this prototype
	/// or an empty dictionary if none
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;

	/// <summary>
	/// Collection of translations stored per key meant to be shown in localized user interfaces.
	/// </summary>
	const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& GetUiStrings() const;
	void SetUiStrings(const std::map<utility::string_t, std::vector<std::shared_ptr<LocalizedString>>>& Value);
	bool HasUiStrings() const;

	/// <summary>
	/// Collection of default states for certain items such as reward items.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetState() const;
	void SetState(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasState() const;

	/// <summary>
	/// The Point of Interest ID that contains geospatial data related to this Prototype
	/// </summary>
	utility::string_t GetPointOfInterestId() const;
	void SetPointOfInterestId(const utility::string_t& Value);
	bool HasPointOfInterestId() const;

	/// <summary>
	/// The Parent PrototypeId to this particular record, if any
	/// </summary>
	utility::string_t GetParentId() const;
	void SetParentId(const utility::string_t& Value);
	bool HasParentId() const;

	/// <summary>
	/// If this prototype can only be viewed by a specific set of group ids
	/// </summary>
	const std::vector<utility::string_t>& GetGroupIds() const;
	void SetGroupIds(const std::vector<utility::string_t>& Value);
	bool HasGroupIds() const;

	/// <summary>
	/// The user identity which created this instance
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The date and time this prototype was first created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The user identity which last updated this instance
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	/// <summary>
	/// The date and time this prototype was last updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// There can be only one... instantiated prototype per user
	/// </summary>
	bool GetHighlander() const;
	void SetHighlander(const bool& Value);
	bool HasHighlander() const;

	/// <summary>
	/// Type of the prototype
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Whether the prototype is owned by the system
	/// </summary>
	bool GetSystemOwned() const;
	void SetSystemOwned(const bool& Value);
	bool HasSystemOwned() const;

	/// <summary>
	/// Whether the prototype is owned by the user who created it
	/// </summary>
	utility::string_t GetPrototypeOwnerId() const;
	void SetPrototypeOwnerId(const utility::string_t& Value);
	bool HasPrototypeOwnerId() const;

	/// <summary>
	/// The organizationId that the prototype belongs to
	/// </summary>
	utility::string_t GetOrganizationId() const;
	bool HasOrganizationId() const;

	/// <summary>
	/// Access restrictions for read, if none, publicly readable
	/// </summary>
	const std::vector<utility::string_t>& GetReadAccess() const;
	void SetReadAccess(const std::vector<utility::string_t>& Value);
	bool HasReadAccess() const;

	/// <summary>
	/// Access restrictions for write, if none, publicly writeable
	/// </summary>
	const std::vector<utility::string_t>& GetWriteAccess() const;
	void SetWriteAccess(const std::vector<utility::string_t>& Value);
	bool HasWriteAccess() const;


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
	std::optional<utility::string_t> m_OrganizationId;
	std::optional<std::vector<utility::string_t>> m_ReadAccess;
	std::optional<std::vector<utility::string_t>> m_WriteAccess;
};

class PrototypeDtoDataPage : public csp::services::DtoBase
{
public:
	PrototypeDtoDataPage();
	virtual ~PrototypeDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<PrototypeDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<PrototypeDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<PrototypeDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Filters to search for prototypes
/// </summary>
class PrototypeFilters : public csp::services::DtoBase
{
public:
	PrototypeFilters();
	virtual ~PrototypeFilters();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tags the prototype must contain
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The tags the prototype must not contain
	/// </summary>
	const std::vector<utility::string_t>& GetExcludedTags() const;
	void SetExcludedTags(const std::vector<utility::string_t>& Value);
	bool HasExcludedTags() const;

	/// <summary>
	/// Each prototype must contain ALL listed Magnopus.Service.Prototype.Structures.PrototypeFilters.Tags
	/// (default is false - ANY)
	/// </summary>
	bool GetTagsAll() const;
	void SetTagsAll(const bool& Value);
	bool HasTagsAll() const;

	/// <summary>
	/// Unique identifiers of associated prototypes
	/// </summary>
	const std::vector<utility::string_t>& GetIds() const;
	void SetIds(const std::vector<utility::string_t>& Value);
	bool HasIds() const;

	/// <summary>
	/// Unique names of associated prototypes
	/// </summary>
	const std::vector<utility::string_t>& GetNames() const;
	void SetNames(const std::vector<utility::string_t>& Value);
	bool HasNames() const;

	/// <summary>
	/// Partial Name(s) used for searching
	/// </summary>
	const std::vector<utility::string_t>& GetPartialNames() const;
	void SetPartialNames(const std::vector<utility::string_t>& Value);
	bool HasPartialNames() const;

	/// <summary>
	/// Unique identifiers of associated prototypes to be excluded
	/// </summary>
	const std::vector<utility::string_t>& GetExcludedIds() const;
	void SetExcludedIds(const std::vector<utility::string_t>& Value);
	bool HasExcludedIds() const;

	/// <summary>
	/// Unique identifiers of associated points of interest
	/// </summary>
	const std::vector<utility::string_t>& GetPointOfInterestIds() const;
	void SetPointOfInterestIds(const std::vector<utility::string_t>& Value);
	bool HasPointOfInterestIds() const;

	/// <summary>
	/// The ParentId of the Prototype
	/// </summary>
	utility::string_t GetParentId() const;
	void SetParentId(const utility::string_t& Value);
	bool HasParentId() const;

	/// <summary>
	/// The GroupIds of the prototype (if any)
	/// </summary>
	const std::vector<utility::string_t>& GetGroupIds() const;
	void SetGroupIds(const std::vector<utility::string_t>& Value);
	bool HasGroupIds() const;

	/// <summary>
	/// The types of prototypes to search for
	/// </summary>
	const std::vector<utility::string_t>& GetTypes() const;
	void SetTypes(const std::vector<utility::string_t>& Value);
	bool HasTypes() const;

	/// <summary>
	/// Search for prototypes with or without associated groups
	/// </summary>
	bool GetHasGroup() const;
	void SetHasGroup(const bool& Value);
	bool HasHasGroup() const;

	/// <summary>
	/// Search for prototypes created by the UserId
	/// </summary>
	utility::string_t GetCreatedBy() const;
	void SetCreatedBy(const utility::string_t& Value);
	bool HasCreatedBy() const;

	/// <summary>
	/// Search for prototypes created after this date (including this date)
	/// </summary>
	utility::string_t GetCreatedAfter() const;
	void SetCreatedAfter(const utility::string_t& Value);
	bool HasCreatedAfter() const;

	/// <summary>
	/// Owning User Ids
	/// </summary>
	const std::vector<utility::string_t>& GetPrototypeOwnerIds() const;
	void SetPrototypeOwnerIds(const std::vector<utility::string_t>& Value);
	bool HasPrototypeOwnerIds() const;

	/// <summary>
	/// Filters on read access
	/// </summary>
	const std::vector<utility::string_t>& GetReadAccessFilters() const;
	void SetReadAccessFilters(const std::vector<utility::string_t>& Value);
	bool HasReadAccessFilters() const;

	/// <summary>
	/// Filters on write access
	/// </summary>
	const std::vector<utility::string_t>& GetWriteAccessFilters() const;
	void SetWriteAccessFilters(const std::vector<utility::string_t>& Value);
	bool HasWriteAccessFilters() const;

	/// <summary>
	/// Unique identifier of the organization prototype belongs to
	/// </summary>
	const std::vector<utility::string_t>& GetOrganizationIds() const;
	void SetOrganizationIds(const std::vector<utility::string_t>& Value);
	bool HasOrganizationIds() const;

	/// <summary>
	/// The types of prototypes to exclude from the search
	/// </summary>
	const std::vector<utility::string_t>& GetExcludedTypes() const;
	void SetExcludedTypes(const std::vector<utility::string_t>& Value);
	bool HasExcludedTypes() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<std::vector<utility::string_t>> m_ExcludedTags;
	std::optional<bool> m_TagsAll;
	std::optional<std::vector<utility::string_t>> m_Ids;
	std::optional<std::vector<utility::string_t>> m_Names;
	std::optional<std::vector<utility::string_t>> m_PartialNames;
	std::optional<std::vector<utility::string_t>> m_ExcludedIds;
	std::optional<std::vector<utility::string_t>> m_PointOfInterestIds;
	std::optional<utility::string_t> m_ParentId;
	std::optional<std::vector<utility::string_t>> m_GroupIds;
	std::optional<std::vector<utility::string_t>> m_Types;
	std::optional<bool> m_HasGroup;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAfter;
	std::optional<std::vector<utility::string_t>> m_PrototypeOwnerIds;
	std::optional<std::vector<utility::string_t>> m_ReadAccessFilters;
	std::optional<std::vector<utility::string_t>> m_WriteAccessFilters;
	std::optional<std::vector<utility::string_t>> m_OrganizationIds;
	std::optional<std::vector<utility::string_t>> m_ExcludedTypes;
};

/// <summary>
/// Wrapper for versioned API in the Service
/// </summary>
class ServiceVersionInfo : public csp::services::DtoBase
{
public:
	ServiceVersionInfo();
	virtual ~ServiceVersionInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Version of the service container
	/// </summary>
	utility::string_t GetContainerVersion() const;
	void SetContainerVersion(const utility::string_t& Value);
	bool HasContainerVersion() const;

	/// <summary>
	/// Name of the service
	/// </summary>
	utility::string_t GetServiceName() const;
	void SetServiceName(const utility::string_t& Value);
	bool HasServiceName() const;

	/// <summary>
	/// The associated reverse proxy for the service
	/// </summary>
	utility::string_t GetReverseProxy() const;
	void SetReverseProxy(const utility::string_t& Value);
	bool HasReverseProxy() const;

	/// <summary>
	/// Services that are versioned (eg ASP.NET Controllers)
	/// </summary>
	const std::vector<std::shared_ptr<ControllerVersions>>& GetVersionedServices() const;
	void SetVersionedServices(const std::vector<std::shared_ptr<ControllerVersions>>& Value);
	bool HasVersionedServices() const;

	/// <summary>
	/// Named Functions that are versioned (eg Multiplayer SignalR Hub)
	/// </summary>
	const std::vector<std::shared_ptr<NamedFunction>>& GetVersionedFunctions() const;
	void SetVersionedFunctions(const std::vector<std::shared_ptr<NamedFunction>>& Value);
	bool HasVersionedFunctions() const;


protected:
	std::optional<utility::string_t> m_ContainerVersion;
	std::optional<utility::string_t> m_ServiceName;
	std::optional<utility::string_t> m_ReverseProxy;
	std::optional<std::vector<std::shared_ptr<ControllerVersions>>> m_VersionedServices;
	std::optional<std::vector<std::shared_ptr<NamedFunction>>> m_VersionedFunctions;
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

class StringDataPage : public csp::services::DtoBase
{
public:
	StringDataPage();
	virtual ~StringDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<utility::string_t>& GetItems() const;
	void SetItems(const std::vector<utility::string_t>& Value);
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
	std::optional<std::vector<utility::string_t>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};


} // namespace csp::services::generated::prototypeservice