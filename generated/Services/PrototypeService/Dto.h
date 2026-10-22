

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::prototypeservice
{

class AgentOverrideDto;
class AgentOverrideRequest;
class AnalyticsRecord;
class ApiVersion;
class AssetDetailDto;
class AssetPipelineModelDto;
class AssetPipelineModelLodLevelDto;
class AssetPipelineStatus;
class AssetPipelineThumbnailDto;
class AssignmentDto;
class AssignmentUpsertRequest;
class BulkAssignRequest;
class BulkAssignResultDto;
class BulkUpsertAssetDetailDto;
class BulkUpsertPrototypeDto;
class CdnFetchRequest;
class ClaimHistoryDto;
class ClaimHistoryDtoDataPage;
class ClaimOutcomeDto;
class ControllerVersions;
class CopiedAssetDetailDto;
class CopiedPrototypeDto;
class CopyPrototypesResult;
class DaigramCreateRequest;
class DaigramDto;
class DaigramThumbnailRequest;
class DaigramUpdateRequest;
class DepartmentDto;
class DepartmentUpsertRequest;
class DuplicateGroupPrototypesOptions;
class EffortEdge;
class EffortResourceBulkGetRequest;
class EffortResourceDto;
class EffortResourceRemoveRequest;
class EffortResourceRemoveResult;
class EffortResourceSearchRequest;
class EffortResourceSearchResponse;
class EffortResourceUpsertItem;
class EffortResourceUpsertRequest;
class EffortResourceUpsertResult;
class ExportGroupPrototypesOptions;
class FileSource;
class GlobalScopeFilter;
class ImportGroupPrototypesOptions;
class InternalFileCopyRequest;
class JiraCreateMetaDto;
class JiraCreateMetaField;
class JiraCreateMetaIssueType;
class JiraCreateMetaUpsertRequest;
class JiraFieldOption;
class JiraLink;
class JiraReferenceListDto;
class JiraReferenceOption;
class JiraReferenceUpsertRequest;
class JiraResourceBulkGetRequest;
class JiraResourceDto;
class JiraResourceSearchRequest;
class JiraResourceSearchResponse;
class JiraResourceUpsertItem;
class JiraResourceUpsertRequest;
class JiraResourceUpsertResult;
class JiraSchemaUpsertResult;
class JoinQueueRequest;
class LegacyObjectDto;
class LegacyObjectPageDto;
class LlmGenerateRequest;
class LlmGenerateResponse;
class LlmMessage;
class LlmProviderDto;
class LocalizedString;
class MiningSessionDto;
class MiningSessionSaveRequest;
class MiningSessionSummaryDto;
class MiningSessionSummaryDtoDataPage;
class MusubiFileInfo;
class NamedFunction;
class PersonDto;
class PersonUpsertRequest;
class ProblemDetails;
class ProjectDto;
class ProjectUpsertRequest;
class PrototypeDto;
class PrototypeDtoDataPage;
class PrototypeFilters;
class QueueEntryDto;
class QueueOutcomeDto;
class RosterConfigDto;
class RosterSnapshotDto;
class ServiceVersionInfo;
class SortDirection;
class StringDataPage;
class SystemCreateRequest;
class SystemDto;
class SystemDtoDataPage;
class SystemThumbnailRequest;
class SystemUpdateRequest;
class TakeBatonRequest;
class WazzupCapabilitiesDto;



/// <summary>
/// One user's stored edit to one agent. Null fields mean "use the default".
/// </summary>
class AgentOverrideDto : public csp::services::DtoBase
{
public:
	AgentOverrideDto();
	virtual ~AgentOverrideDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The agent id.
	/// </summary>
	utility::string_t GetAgentId() const;
	void SetAgentId(const utility::string_t& Value);
	bool HasAgentId() const;

	/// <summary>
	/// Provider id, or null for the default.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id, or null for the default.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// System instruction, or null for the default.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// Temperature, or null for the default.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back; absent on a build that
	/// does not decode. Null when the request was plain text. See Magnopus.Logic.Wazzup.Dtos.MiningSessionDto.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_AgentId;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<double> m_Temperature;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// Body of an override PUT. Every field optional; null clears that field back to the default.
/// </summary>
class AgentOverrideRequest : public csp::services::DtoBase
{
public:
	AgentOverrideRequest();
	virtual ~AgentOverrideRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// System instruction.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// Temperature, 0–2.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<double> m_Temperature;
	std::optional<utility::string_t> m_Encoding;
};

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
	/// Fully-qualified cloud-storage path of the current version of the asset
	/// (`gs://{bucket}/{object}`), for callers that hold their own credentials to the bucket and so
	/// cannot authenticate against the CDN that fronts Magnopus.Service.Prototype.Dtos.AssetDetailDto.Uri.
	/// </summary>
	utility::string_t GetCloudStoragePath() const;
	bool HasCloudStoragePath() const;

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

	/// <summary>
	/// Whether this asset detail belongs to a global (cross-tenant) prototype.
	/// </summary>
	bool GetIsGlobal() const;
	bool HasIsGlobal() const;


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
	std::optional<utility::string_t> m_CloudStoragePath;
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
	std::optional<bool> m_IsGlobal;
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
/// One person, one project, one day, some hours.
/// </summary>
class AssignmentDto : public csp::services::DtoBase
{
public:
	AssignmentDto();
	virtual ~AssignmentDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The assignment's id. The grid needs it to clear a cell.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Who is booked.
	/// </summary>
	utility::string_t GetPersonId() const;
	void SetPersonId(const utility::string_t& Value);
	bool HasPersonId() const;

	/// <summary>
	/// What they are booked onto. ⚠ <b>Absent on a PTO row</b>, which is the one kind with no
	/// project — so a client that assumes this key exists renders "(unknown project)" over
	/// every holiday in the studio.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// The day, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Hours booked that day.
	/// </summary>
	double GetHours() const;
	void SetHours(double Value);
	bool HasHours() const;

	/// <summary>
	/// How firm this booking is — `"Booked"`, `"Held"` or `"Pto"`.
	///
	/// ★ <b>A string, for the same reason Magnopus.Logic.ProductionRoster.Dtos.RosterConfigDto.WeekStartDay is one</b>:
	/// the wire form of a C# enum depends on serializer settings the client cannot see, and a
	/// silent switch from `"Held"` to `1` would not fail anywhere — it would just
	/// stop matching, and every hold in the studio would render as a booking.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_PersonId;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_Date;
	std::optional<double> m_Hours;
	std::optional<utility::string_t> m_Kind;
};

/// <summary>
/// Request body for upserting ONE grid cell.
///
/// ⚠ <b>The key is (PersonId, Date), because a cell is a person-day.</b> §10 D1's
/// recommendation is that the model allows many rows per person-day while the v1 UI writes one,
/// so this endpoint replaces the person's row for that day — changing the project on a cell is
/// one call, not a delete plus a create. A person-day already carrying more than one row is
/// refused rather than collapsed (DG-2).
/// </summary>
class AssignmentUpsertRequest : public csp::services::DtoBase
{
public:
	AssignmentUpsertRequest();
	virtual ~AssignmentUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Who is booked. Required.
	/// </summary>
	utility::string_t GetPersonId() const;
	void SetPersonId(const utility::string_t& Value);
	bool HasPersonId() const;

	/// <summary>
	/// What they are booked onto. Required for `Booked` and `Held`; <b>must be absent
	/// for `Pto`</b>, which is the one kind with no project.
	///
	/// ⚠ <b>`[Required]` was deliberately REMOVED when PTO arrived</b>, and that changes
	/// the failure SHAPE on the wire. `[ApiController]` validation runs before the action
	/// and answers `{"errors":{"ProjectId":[…]}}`; a logic check answers
	/// `{"logic":[…]}`. `rosterErrors.js` reads both (roster-system.md §6.3), so this
	/// is safe — but an attribute that cannot express "required unless Kind is Pto" would have
	/// refused every PTO write before the logic ever saw it.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// The day, as `yyyy-MM-dd`. Required.
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Hours booked that day. <b>Zero clears the cell</b>, which is what an emptied hours box
	/// means — the prototype's own cell editor deletes on an empty entry.
	/// </summary>
	double GetHours() const;
	void SetHours(double Value);
	bool HasHours() const;

	/// <summary>
	/// The assignment this write REPLACES, when an editor is retargeting an existing row at a
	/// different project. Optional, and omitted for every other write.
	///
	/// ★ Why it exists at all: this endpoint keys on (personId, projectId, date), so a PUT that
	/// changes a row's project no longer matches the row being edited — it creates a second row
	/// and strands the first, silently doubling the day. Naming the row being vacated turns
	/// "swap this booking's project" back into ONE request that cannot half-fail, and it merges
	/// correctly when the target project is already on that day.
	/// It is deliberately NOT a general "delete this too": the row must belong to the same
	/// person on the same day, or the request is refused.
	/// </summary>
	utility::string_t GetReplacesAssignmentId() const;
	void SetReplacesAssignmentId(const utility::string_t& Value);
	bool HasReplacesAssignmentId() const;

	/// <summary>
	/// How firm this booking is — `"Booked"`, `"Held"` or `"Pto"`. Optional, and
	/// an omitted or empty value means `"Booked"`.
	///
	/// ★ <b>Defaulting rather than requiring it is what keeps every existing caller working</b>
	/// — the seed script, `verify_split_days.py` and any producer's bookmarked request all
	/// pre-date this field, and the kind they meant is the one they have always written.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<utility::string_t> m_PersonId;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_Date;
	std::optional<double> m_Hours;
	std::optional<utility::string_t> m_ReplacesAssignmentId;
	std::optional<utility::string_t> m_Kind;
};

/// <summary>
/// ★ Request body for the <b>span write</b> (§3.4).
///
/// Producers do not think in days, they think "Chuy is on Aurora for three weeks at half time".
/// So the write is a span and the <b>server</b> expands it into per-day rows — which gives the
/// authoring model producers actually want while keeping the read model flat and queryable, and
/// makes bulk assign a real endpoint rather than a client-side loop that half-fails.
/// </summary>
class BulkAssignRequest : public csp::services::DtoBase
{
public:
	BulkAssignRequest();
	virtual ~BulkAssignRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Everyone the span applies to. Required, and at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetPersonIds() const;
	void SetPersonIds(const std::vector<utility::string_t>& Value);
	bool HasPersonIds() const;

	/// <summary>
	/// The project they all go on. Required for `Booked` and `Held`; <b>must be absent
	/// for `Pto`</b>. Same conditional shape, and the same removed `[Required]`, as
	/// Magnopus.Logic.ProductionRoster.Dtos.AssignmentUpsertRequest.ProjectId.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// First day of the span, inclusive, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// Last day of the span, <b>inclusive</b>, as `yyyy-MM-dd`.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;

	/// <summary>
	/// Hours to book on each day of the span.
	/// </summary>
	double GetHoursPerDay() const;
	void SetHoursPerDay(double Value);
	bool HasHoursPerDay() const;

	/// <summary>
	/// Skip Saturdays and Sundays. On by default is the producer's normal case.
	/// </summary>
	bool GetWeekdaysOnly() const;
	void SetWeekdaysOnly(const bool& Value);
	bool HasWeekdaysOnly() const;

	/// <summary>
	/// Replace existing rows in the span rather than reporting them.
	///
	/// ★ <b>Defaults to false, which is §10 D2's recommendation taken.</b> The first call
	/// reports what is in the way and writes nothing; the client shows that and re-sends with
	/// this set. A destructive default is how somebody's week disappears without anyone deciding.
	/// </summary>
	bool GetOverwrite() const;
	void SetOverwrite(const bool& Value);
	bool HasOverwrite() const;

	/// <summary>
	/// How firm the whole span is — `"Booked"`, `"Held"` or `"Pto"`. Optional,
	/// defaulting to `"Booked"`.
	///
	/// ⚠ <b>The kind does NOT widen what a span may replace.</b>`conflicts` is still "rows
	/// on this span's own project" and `shared` is still "rows on other projects, left
	/// alone, always". A span of holds over a week of bookings replaces those bookings on the
	/// same project — which is a producer downgrading a commitment, and is exactly what they
	/// asked for by sending it.
	/// ★ A `Pto` span has no project, so its conflicts are the other PTO rows on those
	/// days and nothing else. A holiday never silently eats somebody's project work.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;


protected:
	std::optional<std::vector<utility::string_t>> m_PersonIds;
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
	std::optional<double> m_HoursPerDay;
	std::optional<bool> m_WeekdaysOnly;
	std::optional<bool> m_Overwrite;
	std::optional<utility::string_t> m_Kind;
};

/// <summary>
/// What a bulk span write did, or would do.
///
/// ★ <b>§10 D2's recommendation, taken: REPORT rather than overwrite.</b> The prototype
/// overwrites and says so in its own modal, which is honest — but with presence arriving (§7)
/// the better behaviour is to show what would be replaced and let the producer decide. So a
/// request with `overwrite: false` comes back Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied`false` with
/// Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Conflicts filled and <b>nothing written</b>; re-sent with
/// `overwrite: true` it writes and Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Replaced says what it took out.
/// ⚠ <b>Why a 200 rather than a 409:</b> the platform's conflict response body is a bare string
/// (`ToFailureActionResult`), so a structured conflict list has nowhere to ride on a 409.
/// Reporting is therefore a successful answer to the question that was asked, and the client
/// branches on Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied. Frozen in the contract fixture's `errors` note.
/// </summary>
class BulkAssignResultDto : public csp::services::DtoBase
{
public:
	BulkAssignResultDto();
	virtual ~BulkAssignResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether anything was written. `false` means the span was reported, not applied.
	/// </summary>
	bool GetApplied() const;
	void SetApplied(const bool& Value);
	bool HasApplied() const;

	/// <summary>
	/// The rows now in place. Empty when Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Applied is `false`.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetWritten() const;
	void SetWritten(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasWritten() const;

	/// <summary>
	/// The rows that were overwritten, in the state they were in before the write.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetReplaced() const;
	void SetReplaced(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasReplaced() const;

	/// <summary>
	/// Existing rows standing in the way of a non-overwriting apply, <b>on this span's own
	/// project</b>. These are the rows an apply would REPLACE, and what the client shows the
	/// producer before asking "replace these?".
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetConflicts() const;
	void SetConflicts(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasConflicts() const;

	/// <summary>
	/// Rows on OTHER projects that already sit on the span's days. These are reported and
	/// <b>never deleted</b>, whatever `overwrite` says.
	///
	/// ★ Separate from Magnopus.Logic.ProductionRoster.Dtos.BulkAssignResultDto.Conflicts because the two ask the producer for different
	/// things. A conflict is "I will replace this"; a shared row is "this stays put, and the day
	/// will hold both". Calling them both conflicts would make the modal lie about what Apply
	/// does — the same failure as the bulk modal's selection count (S2), and the stakes are
	/// higher here because the span write is the one write that can destroy somebody's week.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetShared() const;
	void SetShared(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasShared() const;


protected:
	std::optional<bool> m_Applied;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Written;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Replaced;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Conflicts;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Shared;
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
	/// Fully-qualified cloud-storage path of the current version of the asset
	/// (`gs://{bucket}/{object}`), for callers that hold their own credentials to the bucket and so
	/// cannot authenticate against the CDN that fronts Magnopus.Service.Prototype.Dtos.AssetDetailDto.Uri.
	/// </summary>
	utility::string_t GetCloudStoragePath() const;
	bool HasCloudStoragePath() const;

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

	/// <summary>
	/// Whether this asset detail belongs to a global (cross-tenant) prototype.
	/// </summary>
	bool GetIsGlobal() const;
	bool HasIsGlobal() const;


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
	std::optional<utility::string_t> m_CloudStoragePath;
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
	std::optional<bool> m_IsGlobal;
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
	/// Whether this prototype is a global (cross-tenant) platform record.
	/// </summary>
	bool GetIsGlobal() const;
	void SetIsGlobal(const bool& Value);
	bool HasIsGlobal() const;

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
	std::optional<bool> m_IsGlobal;
	std::optional<std::vector<utility::string_t>> m_ReadAccess;
	std::optional<std::vector<utility::string_t>> m_WriteAccess;
};

/// <summary>
/// Body of a CDN fetch.
/// </summary>
class CdnFetchRequest : public csp::services::DtoBase
{
public:
	CdnFetchRequest();
	virtual ~CdnFetchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The asset URI (an https URL on an allowed CDN host).
	/// </summary>
	utility::string_t GetUri() const;
	void SetUri(const utility::string_t& Value);
	bool HasUri() const;

	/// <summary>
	/// An access token for the MINED tenant (from the SPA's tenant connection). In the body rather
	/// than a header so no CORS policy has to learn a custom header name. Never logged.
	/// </summary>
	utility::string_t GetTenantToken() const;
	void SetTenantToken(const utility::string_t& Value);
	bool HasTenantToken() const;

	/// <summary>
	/// The MINED tenant's name. Optional: the tenant is taken from the validated token, and when this
	/// is given it must match. When that tenant has a storage override, the asset is read from its own
	/// bucket with its service account rather than through the CDN.
	/// </summary>
	utility::string_t GetTenant() const;
	void SetTenant(const utility::string_t& Value);
	bool HasTenant() const;


protected:
	std::optional<utility::string_t> m_Uri;
	std::optional<utility::string_t> m_TenantToken;
	std::optional<utility::string_t> m_Tenant;
};

/// <summary>
/// One hold, as the history list sees it — story S7: <i>"who had it on Tuesday"</i> and
/// <i>"we hold this for six hours at a time"</i>, both answerable.
///
/// ⚠ <b>Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.HolderName is a SNAPSHOT, and here that is not the same compromise it is
/// on the row.</b> Everywhere else in Baton a name is resolved client-side so a renamed
/// colleague shows their new name (D21). History is the exception on purpose: it should say who
/// held it <i>under the name they had at the time</i>. A record that quietly rewrites itself
/// when somebody changes their display name is not a record.
/// </summary>
class ClaimHistoryDto : public csp::services::DtoBase
{
public:
	ClaimHistoryDto();
	virtual ~ClaimHistoryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The claim's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The system it was a hold on.
	/// </summary>
	utility::string_t GetSystemId() const;
	void SetSystemId(const utility::string_t& Value);
	bool HasSystemId() const;

	/// <summary>
	/// Who held it.
	/// </summary>
	utility::string_t GetHolderId() const;
	void SetHolderId(const utility::string_t& Value);
	bool HasHolderId() const;

	/// <summary>
	/// Their name at the time. See the class remarks for why this one is not resolved.
	/// </summary>
	utility::string_t GetHolderName() const;
	void SetHolderName(const utility::string_t& Value);
	bool HasHolderName() const;

	/// <summary>
	/// Why they took it, if they said. Supplied by API and agent callers (§14); the SPA never asks.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;

	/// <summary>
	/// What they did, if they said, given when the hold ended.
	///
	/// ★ This is what the history's notes column actually renders (day-1-followup item H). The
	/// column existed end to end and was blank on every row because nothing ever asked for
	/// Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.Note — and asking on the take was the wrong answer, because a take must
	/// stay one click. Asking on the <b>pass</b> costs nothing, and turns the column from a
	/// promise about intent into a log of what happened, which is what somebody reading history
	/// wants.
	/// </summary>
	utility::string_t GetReleaseNote() const;
	void SetReleaseNote(const utility::string_t& Value);
	bool HasReleaseNote() const;

	/// <summary>
	/// When the hold started.
	/// </summary>
	utility::string_t GetTakenAt() const;
	void SetTakenAt(const utility::string_t& Value);
	bool HasTakenAt() const;

	/// <summary>
	/// When it ended, or `null` while the hold is still open.
	/// </summary>
	utility::string_t GetReleasedAt() const;
	void SetReleasedAt(const utility::string_t& Value);
	bool HasReleasedAt() const;

	/// <summary>
	/// How long it was held. <b>Computed once at release and stored</b>, so history sorts and
	/// aggregates without a `$expr` — and so the answer cannot drift as clocks do.
	/// `null` while the hold is open.
	/// </summary>
	int64_t GetDurationMs() const;
	void SetDurationMs(int64_t Value);
	bool HasDurationMs() const;

	/// <summary>
	/// Who ended it. `null` while the hold is open.
	///
	/// ⚠ <b>Differing from Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.HolderId IS the force-release record</b> — that
	/// difference is the whole audit signal (baton-plan.md §13.1), and it is rendered as such:
	/// <i>"forced by Jerome"</i>, never as a silent gap in the timeline. The name is resolved
	/// client-side, because unlike the holder this is not a snapshot the record has to preserve.
	/// </summary>
	utility::string_t GetReleasedByUserId() const;
	void SetReleasedByUserId(const utility::string_t& Value);
	bool HasReleasedByUserId() const;

	/// <summary>
	/// `true` when somebody other than the holder ended the hold.
	///
	///
	/// Derived here rather than left to the client, because the comparison IS the audit signal
	///              and a UI that reimplemented it could get it subtly wrong — most obviously by treating an
	///              <i>open</i> hold, which has no Magnopus.Logic.Baton.Dtos.ClaimHistoryDto.ReleasedByUserId at all, as a force.
	/// </summary>
	bool GetForced() const;
	void SetForced(const bool& Value);
	bool HasForced() const;

	/// <summary>
	/// Whether a person or a process held it (Magnopus.Logic.Baton.DataAccess.Model.HolderKinds, §14).
	/// </summary>
	utility::string_t GetHolderKind() const;
	void SetHolderKind(const utility::string_t& Value);
	bool HasHolderKind() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_SystemId;
	std::optional<utility::string_t> m_HolderId;
	std::optional<utility::string_t> m_HolderName;
	std::optional<utility::string_t> m_Note;
	std::optional<utility::string_t> m_ReleaseNote;
	std::optional<utility::string_t> m_TakenAt;
	std::optional<utility::string_t> m_ReleasedAt;
	std::optional<int64_t> m_DurationMs;
	std::optional<utility::string_t> m_ReleasedByUserId;
	std::optional<bool> m_Forced;
	std::optional<utility::string_t> m_HolderKind;
};

class ClaimHistoryDtoDataPage : public csp::services::DtoBase
{
public:
	ClaimHistoryDtoDataPage();
	virtual ~ClaimHistoryDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ClaimHistoryDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ClaimHistoryDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ClaimHistoryDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// <b>What happened</b> — the body of both the 200 and the 409, deliberately the same shape.
///
///
/// The UI renders the immediate result <b>from this response</b> rather than from what it sent.
///              That is a considered exception to the SPA's "don't trust PUT/DELETE responses for state"
///              rule (D11, baton-plan.md §11): that rule assumes you already know the outcome, and take and
///              pass are exactly the case where you do not. Constructing "you have it" from what we sent
///              would assert the one thing we cannot know, which is the defect this whole feature exists to
///              prevent.
/// Magnopus.Logic.Baton.Dtos.ClaimOutcomeDto.System is the authoritative state as the server sees it right now: on a
///              success it is the document the conditional update returned; on a conflict it is a re-read,
///              taken <b>after</b> the outcome was already decided, purely so the message can name a person.
/// </summary>
class ClaimOutcomeDto : public csp::services::DtoBase
{
public:
	ClaimOutcomeDto();
	virtual ~ClaimOutcomeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// What happened, as one of Magnopus.Logic.Baton.Dtos.ClaimOutcomes. The UI branches on this, not on the message.
	/// </summary>
	utility::string_t GetOutcome() const;
	void SetOutcome(const utility::string_t& Value);
	bool HasOutcome() const;

	std::shared_ptr<SystemDto> GetSystem() const;
	void SetSystem(const std::shared_ptr<SystemDto>& Value);
	bool HasSystem() const;

	/// <summary>
	/// The claim opened by a take, or closed by a pass. `null` on a conflict.
	/// </summary>
	utility::string_t GetClaimId() const;
	void SetClaimId(const utility::string_t& Value);
	bool HasClaimId() const;

	/// <summary>
	/// How long ago the winning claim was taken, in milliseconds — the losing message's number
	/// (D20, baton-plan.md §6.1). Present only on Magnopus.Logic.Baton.Dtos.ClaimOutcomes.HeldByAnother.
	///
	/// ⚠ <b>Which digits are real:</b>`DateTimeOffset` ticks are 100 ns, so this is genuine to
	/// about <b>four decimal places</b>. The SPA appends more for the joke, and generates them
	/// client-side rather than the server pretending to know them.
	/// ⚠⚠ <b>Nothing may ever build on this number.</b> Two takes can land on different pods,
	/// so it carries whatever clock skew exists between them. Who won is decided by the atomic
	/// update in the repository and by <b>nothing else</b>; this is computed afterwards, for
	/// flavour, from data the winner already wrote.
	/// </summary>
	double GetMissedByMs() const;
	void SetMissedByMs(double Value);
	bool HasMissedByMs() const;

	/// <summary>
	/// `true` when this pass took somebody else's hold. The record of it is
	///             `ClaimDocument.ReleasedByUserId` differing from `HolderId`, plus an audit
	///             record outside the tool (D8/D24) — this flag is only so the UI can say so out loud.
	/// </summary>
	bool GetForced() const;
	void SetForced(const bool& Value);
	bool HasForced() const;

	/// <summary>
	/// A plain sentence describing the outcome, for API and agent callers (§14 — the REST API
	/// <i>is</i> the agent surface). The SPA composes its own copy from the fields above; it
	/// does not parse this.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_Outcome;
	std::optional<std::shared_ptr<SystemDto>> m_System;
	std::optional<utility::string_t> m_ClaimId;
	std::optional<double> m_MissedByMs;
	std::optional<bool> m_Forced;
	std::optional<utility::string_t> m_Message;
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
	/// Fully-qualified cloud-storage path of the current version of the asset
	/// (`gs://{bucket}/{object}`), for callers that hold their own credentials to the bucket and so
	/// cannot authenticate against the CDN that fronts Magnopus.Service.Prototype.Dtos.AssetDetailDto.Uri.
	/// </summary>
	utility::string_t GetCloudStoragePath() const;
	bool HasCloudStoragePath() const;

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

	/// <summary>
	/// Whether this asset detail belongs to a global (cross-tenant) prototype.
	/// </summary>
	bool GetIsGlobal() const;
	bool HasIsGlobal() const;


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
	std::optional<utility::string_t> m_CloudStoragePath;
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
	std::optional<bool> m_IsGlobal;
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
	/// Whether this prototype is a global (cross-tenant) platform record.
	/// </summary>
	bool GetIsGlobal() const;
	void SetIsGlobal(const bool& Value);
	bool HasIsGlobal() const;

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
	std::optional<bool> m_IsGlobal;
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
/// Request body for creating a new daigram (which provisions a group + scope).
/// </summary>
class DaigramCreateRequest : public csp::services::DtoBase
{
public:
	DaigramCreateRequest();
	virtual ~DaigramCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram title. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
};

/// <summary>
/// A daigram as seen by the client: metadata + the caller's relationship to it.
/// Shapes are NOT here — they live in the Multiplayer object store, reached via Magnopus.Logic.Daigrammar.Dtos.DaigramDto.GroupId.
/// </summary>
class DaigramDto : public csp::services::DtoBase
{
public:
	DaigramDto();
	virtual ~DaigramDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// User-facing title.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The owner's user id.
	/// </summary>
	utility::string_t GetOwnerId() const;
	void SetOwnerId(const utility::string_t& Value);
	bool HasOwnerId() const;

	/// <summary>
	/// The backing Group id — the client connects to multiplayer by this reference id.
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// The Global Scope id whose object store holds the shapes (convenience; re-resolved at connect).
	/// </summary>
	utility::string_t GetScopeId() const;
	void SetScopeId(const utility::string_t& Value);
	bool HasScopeId() const;

	/// <summary>
	/// Optional thumbnail Prototype id (deferred feature; null for now).
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;

	/// <summary>
	/// When the daigram was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the daigram was last updated (rename, thumbnail, …). Not shape edits.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The caller's role on this daigram — see Magnopus.Logic.Daigrammar.Dtos.DaigramRoles.
	/// </summary>
	utility::string_t GetRole() const;
	void SetRole(const utility::string_t& Value);
	bool HasRole() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_OwnerId;
	std::optional<utility::string_t> m_GroupId;
	std::optional<utility::string_t> m_ScopeId;
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_Role;
};

/// <summary>
/// Request body for setting a daigram's thumbnail Prototype id (capture-on-save). Metadata-only;
/// the snapshot image itself is a Thumbnail AssetDetail on the referenced (group-owned) Prototype.
/// </summary>
class DaigramThumbnailRequest : public csp::services::DtoBase
{
public:
	DaigramThumbnailRequest();
	virtual ~DaigramThumbnailRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Prototype id whose Thumbnail asset holds the snapshot. Required.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;


protected:
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
};

/// <summary>
/// Request body for renaming a daigram (metadata-only; does not touch the shape store).
/// </summary>
class DaigramUpdateRequest : public csp::services::DtoBase
{
public:
	DaigramUpdateRequest();
	virtual ~DaigramUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The new daigram title. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
};

/// <summary>
/// A department as the grid sees it.
///
/// ⚠ <b>Every property here is frozen by S0</b> — the contract fixture at
/// `wwwroot/inspector/test/docs/fixtures/roster/contract.json` carries a worked example and
/// `ProductionRosterContractTests` fails the build if the two drift. Adding a property here
/// without adding it there is the exact failure §8.1 exists to prevent.
/// </summary>
class DepartmentDto : public csp::services::DtoBase
{
public:
	DepartmentDto();
	virtual ~DepartmentDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The department's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Its name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Where it sits in the grid, low first.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Its titles, in seniority order. The grid's title dividers render in this order.
	/// </summary>
	const std::vector<utility::string_t>& GetTitleLadder() const;
	void SetTitleLadder(const std::vector<utility::string_t>& Value);
	bool HasTitleLadder() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<int32_t> m_SortOrder;
	std::optional<std::vector<utility::string_t>> m_TitleLadder;
};

/// <summary>
/// Request body for creating or editing a department.
///
/// ⚠ <b>The duplicate-name guard is the unique index, not this class.</b> ASP.NET validation
/// runs before the action, so a blank name is a 400 from here — but "Studio QA already exists"
/// is decided by `Unique_Tenant_Name` when the insert lands.
/// One request type for both create and edit, rather than two near-identical ones: every field
/// is settable at create and editable afterwards, so a second class would be a copy that drifts.
/// </summary>
class DepartmentUpsertRequest : public csp::services::DtoBase
{
public:
	DepartmentUpsertRequest();
	virtual ~DepartmentUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The department's name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Where it sits in the grid, low first.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// The department's titles, <b>in seniority order</b>. Order is meaningful — see
	/// `DepartmentDocument.TitleLadder`.
	/// </summary>
	const std::vector<utility::string_t>& GetTitleLadder() const;
	void SetTitleLadder(const std::vector<utility::string_t>& Value);
	bool HasTitleLadder() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<int32_t> m_SortOrder;
	std::optional<std::vector<utility::string_t>> m_TitleLadder;
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

	/// <summary>
	/// The id of the overall distributed operation
	/// </summary>
	utility::string_t GetCoalescenceId() const;
	void SetCoalescenceId(const utility::string_t& Value);
	bool HasCoalescenceId() const;


protected:
	std::optional<utility::string_t> m_OriginalGroupId;
	std::optional<utility::string_t> m_NewGroupId;
	std::optional<std::shared_ptr<PrototypeFilters>> m_AdditionalFilters;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_OnBehalfOf;
	std::optional<bool> m_ShallowCopy;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
	std::optional<utility::string_t> m_CoalescenceId;
};

/// <summary>
/// A directed edge between two effort-graph nodes, stored inline on the source node's
/// `EffortResourceDocument.Edges` (mirroring how a JIRA issue carries its Magnopus.Logic.WatchTower.Structures.JiraLink
/// relationships, so the effort family reuses the same read/hydrate contract). Magnopus.Logic.WatchTower.Structures.EffortEdge.From and
/// Magnopus.Logic.WatchTower.Structures.EffortEdge.To are node `Key`s, e.g. `"epic:stage-a"` → `"task:<norm-title>"`.
/// </summary>
class EffortEdge : public csp::services::DtoBase
{
public:
	EffortEdge();
	virtual ~EffortEdge();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The edge kind: `contains` (effort→doc, epic→workitem) / `references` (doc↔doc) /
	/// `completes` (event→workitem — its absence is what makes a work item "dangling") /
	/// `touches` (effort/workitem→system) / `depends` (workitem→workitem).
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The source node key.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The target node key.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
};

/// <summary>
/// Request body for bulk-get-by-keys (the client hydration read).
/// </summary>
class EffortResourceBulkGetRequest : public csp::services::DtoBase
{
public:
	EffortResourceBulkGetRequest();
	virtual ~EffortResourceBulkGetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node keys to fetch. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
};

/// <summary>
/// A WatchTower effort-family read-model entry as seen by a client hydrating a daigram: the out-of-band
/// record a durable element points at via its `contentRef { family:"effort", key }`. The client
/// renders shape/colour off Magnopus.Logic.WatchTower.Dtos.EffortResourceDto.Kind + Magnopus.Logic.WatchTower.Dtos.EffortResourceDto.StatusCategory
/// as a client-side overlay — this state never lands on the multiplayer object stream (decision #2). Mirrors
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.
/// </summary>
class EffortResourceDto : public csp::services::DtoBase
{
public:
	EffortResourceDto();
	virtual ~EffortResourceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family — always `"effort"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node kind (`effort` / `system` / `doc` / `section` / `epic` / `workitem` / `event`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The stable node key.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The node's display title / label.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// A longer description / summary, or null.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// For `doc` nodes: the genre. Null otherwise.
	/// </summary>
	utility::string_t GetGenre() const;
	void SetGenre(const utility::string_t& Value);
	bool HasGenre() const;

	/// <summary>
	/// For `epic` / `workitem` nodes: the status name. Null otherwise.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category (`new` / `indeterminate` / `done` / `removed`) — drives the
	/// status colour; non-`done` = dangling, `removed` = tombstoned (render struck-through).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The owner / assignee display name, or null.
	/// </summary>
	utility::string_t GetOwner() const;
	void SetOwner(const utility::string_t& Value);
	bool HasOwner() const;

	/// <summary>
	/// For `event` nodes: when the work occurred (the timeline axis), or null.
	/// </summary>
	utility::string_t GetOccurredAt() const;
	void SetOccurredAt(const utility::string_t& Value);
	bool HasOccurredAt() const;

	/// <summary>
	/// The node's source path in the docs repo, or null.
	/// </summary>
	utility::string_t GetSourcePath() const;
	void SetSourcePath(const utility::string_t& Value);
	bool HasSourcePath() const;

	/// <summary>
	/// The node's source GitHub URL, or null.
	/// </summary>
	utility::string_t GetSourceUrl() const;
	void SetSourceUrl(const utility::string_t& Value);
	bool HasSourceUrl() const;

	/// <summary>
	/// Free-text evidence for a status/event, or null.
	/// </summary>
	utility::string_t GetEvidence() const;
	void SetEvidence(const utility::string_t& Value);
	bool HasEvidence() const;

	/// <summary>
	/// A short digest of the producer's source content (e.g. `"sha256:1f3b…"`), or null. The client can
	/// use it as a cheap "did this actually change" comparison alongside the keyed push.
	/// </summary>
	utility::string_t GetContentHash() const;
	void SetContentHash(const utility::string_t& Value);
	bool HasContentHash() const;

	/// <summary>
	/// The provenance tier of this node's facts (`0` reconstructor / `10` agent / `100` human).
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;

	/// <summary>
	/// This node's outbound edges (containment / references / completes / touches / depends).
	/// </summary>
	const std::vector<std::shared_ptr<EffortEdge>>& GetEdges() const;
	void SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value);
	bool HasEdges() const;

	/// <summary>
	/// The daigram ids this node is referenced by.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// When this read-model entry was last written by the platform (the liveness cursor axis).
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// When this node was tombstoned (its source unit vanished), or null while it is live. A tombstone is
	/// still returned by every read on purpose — the board renders it struck-through rather than letting it
	/// disappear silently. `Status` and `StatusCategory` both read `removed` alongside it.
	/// </summary>
	utility::string_t GetDeletedAt() const;
	void SetDeletedAt(const utility::string_t& Value);
	bool HasDeletedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Kind;
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Genre;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Owner;
	std::optional<utility::string_t> m_OccurredAt;
	std::optional<utility::string_t> m_SourcePath;
	std::optional<utility::string_t> m_SourceUrl;
	std::optional<utility::string_t> m_Evidence;
	std::optional<utility::string_t> m_ContentHash;
	std::optional<int32_t> m_ProvenanceTier;
	std::optional<std::vector<std::shared_ptr<EffortEdge>>> m_Edges;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_DeletedAt;
};

/// <summary>
/// Request body for a bulk-remove — the tombstone verb. Keys only, deliberately: the producer proposes a
/// removal precisely because the source unit has VANISHED, so it no longer holds a payload to send. Sending
/// a sparse upsert item instead would blank the record's title, summary and edges, which is exactly the
/// content the struck-through render needs to keep.
/// </summary>
class EffortResourceRemoveRequest : public csp::services::DtoBase
{
public:
	EffortResourceRemoveRequest();
	virtual ~EffortResourceRemoveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node keys to tombstone. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;

	/// <summary>
	/// The provenance tier asserting the removal (`0` reconstructor / `10` agent / `100`
	/// human). Defaults to `0`. Gated exactly like an upsert: a key whose stored tier is HIGHER is
	/// refused and named in Magnopus.Logic.WatchTower.Dtos.EffortResourceRemoveResult.GatedKeys — that is how a human's
	/// pinned work item survives a sync that no longer sees it in the file.
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
	std::optional<int32_t> m_ProvenanceTier;
};

/// <summary>
/// Outcome of a bulk-remove: what was tombstoned, what was refused, and what was not there.
/// </summary>
class EffortResourceRemoveResult : public csp::services::DtoBase
{
public:
	EffortResourceRemoveResult();
	virtual ~EffortResourceRemoveResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Entries tombstoned by this call (`Status`/`StatusCategory` set to `removed`, `DeletedAt` stamped).
	/// </summary>
	int32_t GetRemoved() const;
	void SetRemoved(int32_t Value);
	bool HasRemoved() const;

	/// <summary>
	/// Entries already carrying a tombstone, left completely untouched. This is the idempotence that
	/// matters: the watcher re-proposes every vanished key on every tick, and re-stamping would move
	/// `UpdatedAt` forever — the tombstone would resurface on every liveness poll and glow for ever.
	/// </summary>
	int32_t GetAlreadyRemoved() const;
	void SetAlreadyRemoved(int32_t Value);
	bool HasAlreadyRemoved() const;

	/// <summary>
	/// The keys refused because their stored provenance tier is higher than the incoming one — named, not
	/// just counted, so the caller can report the refusal rather than swallowing it. Never null.
	/// </summary>
	const std::vector<utility::string_t>& GetGatedKeys() const;
	void SetGatedKeys(const std::vector<utility::string_t>& Value);
	bool HasGatedKeys() const;

	/// <summary>
	/// The requested keys that have no entry in this family/tenant — the caller's view and the server's
	/// have diverged. Reported, not an error. Never null.
	/// </summary>
	const std::vector<utility::string_t>& GetMissingKeys() const;
	void SetMissingKeys(const std::vector<utility::string_t>& Value);
	bool HasMissingKeys() const;


protected:
	std::optional<int32_t> m_Removed;
	std::optional<int32_t> m_AlreadyRemoved;
	std::optional<std::vector<utility::string_t>> m_GatedKeys;
	std::optional<std::vector<utility::string_t>> m_MissingKeys;
};

/// <summary>
/// Request body for the liveness search — nodes tagged with any of Magnopus.Logic.WatchTower.Dtos.EffortResourceSearchRequest.Tags, changed since
/// Magnopus.Logic.WatchTower.Dtos.EffortResourceSearchRequest.Since.
/// </summary>
class EffortResourceSearchRequest : public csp::services::DtoBase
{
public:
	EffortResourceSearchRequest();
	virtual ~EffortResourceSearchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram ids to match (ANY). Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The cursor from the previous poll (exclusive). Null = full set.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// Response for the liveness search: the changed nodes plus the cursor to pass as `since` next poll.
/// </summary>
class EffortResourceSearchResponse : public csp::services::DtoBase
{
public:
	EffortResourceSearchResponse();
	virtual ~EffortResourceSearchResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The matching nodes (newest-written first).
	/// </summary>
	const std::vector<std::shared_ptr<EffortResourceDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<EffortResourceDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// The cursor for the next poll — captured server-side before the query, so nothing is missed.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<std::shared_ptr<EffortResourceDto>>> m_Items;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// A single node in a bulk-upsert. Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Tags are ADDED to any existing tags (merge, not replace).
/// </summary>
class EffortResourceUpsertItem : public csp::services::DtoBase
{
public:
	EffortResourceUpsertItem();
	virtual ~EffortResourceUpsertItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The stable node key, e.g. `"task:<norm-title>"`. Required.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The element-family. Defaults to `"effort"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The node kind (`effort` / `system` / `doc` / `section` / `epic` / `workitem` / `event`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// Daigram ids to associate this node with (merged into the existing tag set).
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The node's display title / label.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// A longer description / summary, or null.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// For `doc` nodes: the genre.
	/// </summary>
	utility::string_t GetGenre() const;
	void SetGenre(const utility::string_t& Value);
	bool HasGenre() const;

	/// <summary>
	/// For `epic` / `workitem` nodes: the status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category (`new` / `indeterminate` / `done`).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The owner / assignee display name, or null.
	/// </summary>
	utility::string_t GetOwner() const;
	void SetOwner(const utility::string_t& Value);
	bool HasOwner() const;

	/// <summary>
	/// For `event` nodes: when the work occurred (the timeline axis), or null.
	/// </summary>
	utility::string_t GetOccurredAt() const;
	void SetOccurredAt(const utility::string_t& Value);
	bool HasOccurredAt() const;

	/// <summary>
	/// The node's source path in the docs repo, or null.
	/// </summary>
	utility::string_t GetSourcePath() const;
	void SetSourcePath(const utility::string_t& Value);
	bool HasSourcePath() const;

	/// <summary>
	/// The node's source GitHub URL, or null.
	/// </summary>
	utility::string_t GetSourceUrl() const;
	void SetSourceUrl(const utility::string_t& Value);
	bool HasSourceUrl() const;

	/// <summary>
	/// Free-text evidence for a status/event, or null.
	/// </summary>
	utility::string_t GetEvidence() const;
	void SetEvidence(const utility::string_t& Value);
	bool HasEvidence() const;

	/// <summary>
	/// A short digest of the producer's source content for this node (e.g. `"sha256:1f3b…"`), or null.
	/// Opaque to the server — it is compared, never parsed. It exists so a content edit that does not surface
	/// in any other field (a change past the 400-char Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Summary cut, or a section body the
	/// read-model does not carry) still classifies as an update: it is part of the upsert signature, so it
	/// moves `UpdatedAt` and enters the liveness notify set. Retires the convention of smuggling a
	/// `sha256:` marker through Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.Evidence.
	/// </summary>
	utility::string_t GetContentHash() const;
	void SetContentHash(const utility::string_t& Value);
	bool HasContentHash() const;

	/// <summary>
	/// The provenance tier of this write (`0` reconstructor / `10` agent / `100` human). Defaults to `0`.
	/// </summary>
	int32_t GetProvenanceTier() const;
	void SetProvenanceTier(int32_t Value);
	bool HasProvenanceTier() const;

	/// <summary>
	/// This node's outbound edges (containment / references / completes / touches / depends).
	/// </summary>
	const std::vector<std::shared_ptr<EffortEdge>>& GetEdges() const;
	void SetEdges(const std::vector<std::shared_ptr<EffortEdge>>& Value);
	bool HasEdges() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Genre;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Owner;
	std::optional<utility::string_t> m_OccurredAt;
	std::optional<utility::string_t> m_SourcePath;
	std::optional<utility::string_t> m_SourceUrl;
	std::optional<utility::string_t> m_Evidence;
	std::optional<utility::string_t> m_ContentHash;
	std::optional<int32_t> m_ProvenanceTier;
	std::optional<std::vector<std::shared_ptr<EffortEdge>>> m_Edges;
};

/// <summary>
/// Request body for a bulk-upsert of effort read-model entries — the write path for BOTH producers (the
/// historical reconstructor and the live observer/agent). Each item carries a
/// Magnopus.Logic.WatchTower.Dtos.EffortResourceUpsertItem.ProvenanceTier; the upsert only overwrites stored fields when
/// the incoming tier is ≥ the stored tier (a tier-0 re-parse never clobbers a human/agent edit).
/// </summary>
class EffortResourceUpsertRequest : public csp::services::DtoBase
{
public:
	EffortResourceUpsertRequest();
	virtual ~EffortResourceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The nodes to upsert. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<EffortResourceUpsertItem>>& Value);
	bool HasItems() const;


protected:
	std::optional<std::vector<std::shared_ptr<EffortResourceUpsertItem>>> m_Items;
};

/// <summary>
/// Outcome of a bulk-upsert: how many nodes were created / updated / left unchanged (incl. provenance-gated skips).
/// </summary>
class EffortResourceUpsertResult : public csp::services::DtoBase
{
public:
	EffortResourceUpsertResult();
	virtual ~EffortResourceUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New read-model entries inserted.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing entries whose fields, tier, or tags changed.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing entries left untouched (nothing changed, or the incoming tier was below the stored tier).
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
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

	/// <summary>
	/// Optional export coalescence Id. When set, the export prototype logic will advance
	/// the coalescence when it completes and publish an event if all steps are done.
	/// </summary>
	utility::string_t GetCoalescenceId() const;
	void SetCoalescenceId(const utility::string_t& Value);
	bool HasCoalescenceId() const;

	/// <summary>
	/// Data to pass through to the event.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetPassthroughData() const;
	void SetPassthroughData(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasPassthroughData() const;


protected:
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_CoalesenceId;
	std::optional<utility::string_t> m_OriginalGroupId;
	std::optional<std::shared_ptr<PrototypeFilters>> m_AdditionalFilters;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_OnBehalfOf;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
	std::optional<utility::string_t> m_CoalescenceId;
	std::optional<std::map<utility::string_t, utility::string_t>> m_PassthroughData;
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
/// Search-time toggle for how cross-tenant ("global") records combine with the caller's tenant data.
/// See Section 9 of mcs-global-prototypes-plan.md.
/// </summary>
class GlobalScopeFilter : public csp::services::EnumBase
{
public:
	GlobalScopeFilter();
	virtual ~GlobalScopeFilter();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eGlobalScopeFilter
	{
		BOTH,
		GLOBALONLY,
		TENANTONLY

	};

	eGlobalScopeFilter GetValue() const;
	void SetValue(eGlobalScopeFilter const Value);

protected:
	eGlobalScopeFilter Value = {};
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

/// <summary>
/// The stored JIRA create schema for a project as seen by a client building the inline-create form:
/// every creatable issue type and its (projected) create fields. The browser maps each field's JIRA
/// schema type to a control (decision A). Magnopus.Logic.WatchTower.Dtos.JiraCreateMetaDto.UpdatedAt is the last refresh time (staleness).
/// </summary>
class JiraCreateMetaDto : public csp::services::DtoBase
{
public:
	JiraCreateMetaDto();
	virtual ~JiraCreateMetaDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key, e.g. `"CHS"`.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The creatable issue types and their create fields.
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& GetIssueTypes() const;
	void SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value);
	bool HasIssueTypes() const;

	/// <summary>
	/// When the collector last refreshed this schema.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaIssueType>>> m_IssueTypes;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// One create field's metadata, projected from a createmeta field entry. Carries the raw JIRA schema
/// bits
/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Type/Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Items/Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AutoComplete)
/// the browser maps to a control; the fat option lists (Components/Versions) are NOT inlined — they carry a
/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Ref pointing at a project-scoped reference list instead (kept small; the byte policy
/// lives in the collector).
/// </summary>
class JiraCreateMetaField : public csp::services::DtoBase
{
public:
	JiraCreateMetaField();
	virtual ~JiraCreateMetaField();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The field id you submit on create, e.g. `"summary"` or `"customfield_10005"`.
	/// </summary>
	utility::string_t GetFieldId() const;
	void SetFieldId(const utility::string_t& Value);
	bool HasFieldId() const;

	/// <summary>
	/// The human field name, e.g. `"Story Points"`.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Whether create requires this field (on CHS only `summary`/`project`/`issuetype` are).
	/// </summary>
	bool GetRequired() const;
	void SetRequired(const bool& Value);
	bool HasRequired() const;

	/// <summary>
	/// The JIRA schema type, e.g. `"string"` / `"number"` / `"option"` / `"user"` / `"array"`.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// For an array field, the element type (schema.items), e.g. `"option"` / `"component"` / `"version"`.
	/// </summary>
	utility::string_t GetItems() const;
	void SetItems(const utility::string_t& Value);
	bool HasItems() const;

	/// <summary>
	/// The custom-field type uri (schema.custom), or null for a system field.
	/// </summary>
	utility::string_t GetCustom() const;
	void SetCustom(const utility::string_t& Value);
	bool HasCustom() const;

	/// <summary>
	/// The system-field name (schema.system), or null for a custom field.
	/// </summary>
	utility::string_t GetSystem() const;
	void SetSystem(const utility::string_t& Value);
	bool HasSystem() const;

	/// <summary>
	/// True when the field enumerates candidates via a live search (createmeta's `autoCompleteUrl`, e.g. assignee) rather than inline
	/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AllowedValues.
	/// </summary>
	bool GetAutoComplete() const;
	void SetAutoComplete(const bool& Value);
	bool HasAutoComplete() const;

	/// <summary>
	/// Whether JIRA supplies a default value for this field on create.
	/// </summary>
	bool GetHasDefaultValue() const;
	void SetHasDefaultValue(const bool& Value);
	bool HasHasDefaultValue() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`) whose options this field draws from, or null when options are inline in
	/// Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AllowedValues (or the field has none).
	/// </summary>
	utility::string_t GetRef() const;
	void SetRef(const utility::string_t& Value);
	bool HasRef() const;

	/// <summary>
	/// The inline option set for a SMALL select (priority, team, severity, urgency). Empty when the field is free-text, a search
	/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.AutoComplete), or externalized
	/// (Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField.Ref).
	/// </summary>
	const std::vector<std::shared_ptr<JiraFieldOption>>& GetAllowedValues() const;
	void SetAllowedValues(const std::vector<std::shared_ptr<JiraFieldOption>>& Value);
	bool HasAllowedValues() const;


protected:
	std::optional<utility::string_t> m_FieldId;
	std::optional<utility::string_t> m_Name;
	std::optional<bool> m_Required;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Items;
	std::optional<utility::string_t> m_Custom;
	std::optional<utility::string_t> m_System;
	std::optional<bool> m_AutoComplete;
	std::optional<bool> m_HasDefaultValue;
	std::optional<utility::string_t> m_Ref;
	std::optional<std::vector<std::shared_ptr<JiraFieldOption>>> m_AllowedValues;
};

/// <summary>
/// One creatable issue type's create schema (a projection of JIRA's split createmeta
/// `/issue/createmeta/{project}/issuetypes/{id}`). Shared verbatim by the storage document, the
/// client Dto, and the collector upsert request (like Magnopus.Logic.WatchTower.Structures.JiraLink) — it is inert data the
/// collector projects down and the browser maps to form controls (decision A: the control vocabulary
/// lives in JS, not here).
/// </summary>
class JiraCreateMetaIssueType : public csp::services::DtoBase
{
public:
	JiraCreateMetaIssueType();
	virtual ~JiraCreateMetaIssueType();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The issue type name, e.g. `"Task"` / `"Story"` / `"Bug"` / `"Epic"`.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The JIRA issue type id, e.g. `"3"` for Task.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The create fields available for this issue type (projected — see Magnopus.Logic.WatchTower.Structures.JiraCreateMetaField).
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaField>>& GetFields() const;
	void SetFields(const std::vector<std::shared_ptr<JiraCreateMetaField>>& Value);
	bool HasFields() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Id;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaField>>> m_Fields;
};

/// <summary>
/// Request body for the collector's createmeta refresh (find-then-replace by family+project).
/// </summary>
class JiraCreateMetaUpsertRequest : public csp::services::DtoBase
{
public:
	JiraCreateMetaUpsertRequest();
	virtual ~JiraCreateMetaUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key. Required.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The creatable issue types + projected fields to store. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& GetIssueTypes() const;
	void SetIssueTypes(const std::vector<std::shared_ptr<JiraCreateMetaIssueType>>& Value);
	bool HasIssueTypes() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<std::vector<std::shared_ptr<JiraCreateMetaIssueType>>> m_IssueTypes;
};

/// <summary>
/// A single selectable option (projected to just id + label; the fat source fields are dropped by the collector).
/// </summary>
class JiraFieldOption : public csp::services::DtoBase
{
public:
	JiraFieldOption();
	virtual ~JiraFieldOption();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The option id submitted on create.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The human label shown in the picker.
	/// </summary>
	utility::string_t GetLabel() const;
	void SetLabel(const utility::string_t& Value);
	bool HasLabel() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Label;
};

/// <summary>
/// A directed relationship between two JIRA issues, stored on the read-model and surfaced to the
/// client so a daigram can draw the edge without a second fetch. For a "Blocks" link,
/// Magnopus.Logic.WatchTower.Structures.JiraLink.From is the blocker key and Magnopus.Logic.WatchTower.Structures.JiraLink.To is the blocked key
/// (see the Phase-0 `blocks_edges` extraction).
/// </summary>
class JiraLink : public csp::services::DtoBase
{
public:
	JiraLink();
	virtual ~JiraLink();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The link type, e.g. `"blocks"`.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The source issue key (for a Blocks link, the blocker).
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The target issue key (for a Blocks link, the blocked issue).
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
};

/// <summary>
/// A project-scoped reference list (components/versions) as seen by a client typeahead.
/// </summary>
class JiraReferenceListDto : public csp::services::DtoBase
{
public:
	JiraReferenceListDto();
	virtual ~JiraReferenceListDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key, e.g. `"CHS"`.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The projected options.
	/// </summary>
	const std::vector<std::shared_ptr<JiraReferenceOption>>& GetOptions() const;
	void SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value);
	bool HasOptions() const;

	/// <summary>
	/// When the collector last refreshed this list.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<std::shared_ptr<JiraReferenceOption>>> m_Options;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// A single reference-list option, projected by the collector from its JIRA source (the fat
/// `self`/`ari`/`metadata` fields are dropped). One shape covers every kind — the nullable
/// extras are per-kind: versions carry
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Released/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Archived/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.ReleaseDate;
/// components carry Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Description; sprints carry
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.State; users reuse
/// Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Id(=accountId)/Magnopus.Logic.WatchTower.Structures.JiraReferenceOption.Name(=displayName).
/// Shared by the storage document, Dto, and upsert request.
/// </summary>
class JiraReferenceOption : public csp::services::DtoBase
{
public:
	JiraReferenceOption();
	virtual ~JiraReferenceOption();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The option id submitted on create.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// An optional description (components) — a tooltip candidate.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// The sprint state — `"active"` or `"future"` (sprints only; null otherwise). Lets the picker group/label active vs future sprints.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// Whether the version is released (versions only; null for components).
	/// </summary>
	bool GetReleased() const;
	void SetReleased(const bool& Value);
	bool HasReleased() const;

	/// <summary>
	/// Whether the version is archived (versions only; null for components).
	/// </summary>
	bool GetArchived() const;
	void SetArchived(const bool& Value);
	bool HasArchived() const;

	/// <summary>
	/// The version release date as JIRA's date string (`"yyyy-MM-dd"`), or null.
	/// </summary>
	utility::string_t GetReleaseDate() const;
	void SetReleaseDate(const utility::string_t& Value);
	bool HasReleaseDate() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_State;
	std::optional<bool> m_Released;
	std::optional<bool> m_Archived;
	std::optional<utility::string_t> m_ReleaseDate;
};

/// <summary>
/// Request body for the collector's reference-list refresh (find-then-replace by family+project+kind).
/// </summary>
class JiraReferenceUpsertRequest : public csp::services::DtoBase
{
public:
	JiraReferenceUpsertRequest();
	virtual ~JiraReferenceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The project key. Required.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (`"components"`/`"versions"`). Required.
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// The projected options to store (may be empty for a project with none). Non-null.
	/// </summary>
	const std::vector<std::shared_ptr<JiraReferenceOption>>& GetOptions() const;
	void SetOptions(const std::vector<std::shared_ptr<JiraReferenceOption>>& Value);
	bool HasOptions() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<std::vector<std::shared_ptr<JiraReferenceOption>>> m_Options;
};

/// <summary>
/// Request body for bulk-get-by-keys (the client hydration read).
/// </summary>
class JiraResourceBulkGetRequest : public csp::services::DtoBase
{
public:
	JiraResourceBulkGetRequest();
	virtual ~JiraResourceBulkGetRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The resource keys to fetch. Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetKeys() const;
	void SetKeys(const std::vector<utility::string_t>& Value);
	bool HasKeys() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Keys;
};

/// <summary>
/// A WatchTower read-model entry as seen by a client hydrating a daigram: the out-of-band record a
/// durable element points at via its `contentRef { family, key }`. The client maps
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.Status/Magnopus.Logic.WatchTower.Dtos.JiraResourceDto.StatusCategory to a colour/label as a
/// client-side overlay — this state never lands on the multiplayer object stream (decision #2).
/// </summary>
class JiraResourceDto : public csp::services::DtoBase
{
public:
	JiraResourceDto();
	virtual ~JiraResourceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The element-family, e.g. `"jira"`.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The external resource key, e.g. `"CHS-123"`.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The issue summary / title.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// The workflow status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category key (`new` / `indeterminate` / `done`) — drives the status colour.
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The assignee display name, or null if unassigned.
	/// </summary>
	utility::string_t GetAssignee() const;
	void SetAssignee(const utility::string_t& Value);
	bool HasAssignee() const;

	/// <summary>
	/// The assignee's JIRA account id, or null if unassigned.
	/// </summary>
	utility::string_t GetAssigneeAccountId() const;
	void SetAssigneeAccountId(const utility::string_t& Value);
	bool HasAssigneeAccountId() const;

	/// <summary>
	/// The resolution name (e.g. `"Won't Do"`), or null while unresolved.
	/// </summary>
	utility::string_t GetResolution() const;
	void SetResolution(const utility::string_t& Value);
	bool HasResolution() const;

	/// <summary>
	/// The issue type (e.g. `"Story"`).
	/// </summary>
	utility::string_t GetIssueType() const;
	void SetIssueType(const utility::string_t& Value);
	bool HasIssueType() const;

	/// <summary>
	/// The project key prefix (e.g. `"CHS"`).
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The parent epic key, or null.
	/// </summary>
	utility::string_t GetEpic() const;
	void SetEpic(const utility::string_t& Value);
	bool HasEpic() const;

	/// <summary>
	/// The issue's relationships (e.g. Blocks edges).
	/// </summary>
	const std::vector<std::shared_ptr<JiraLink>>& GetLinks() const;
	void SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value);
	bool HasLinks() const;

	/// <summary>
	/// The daigram ids this resource is referenced by.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The source last-changed timestamp (JIRA's `fields.updated`), or null.
	/// </summary>
	utility::string_t GetSourceUpdatedAt() const;
	void SetSourceUpdatedAt(const utility::string_t& Value);
	bool HasSourceUpdatedAt() const;

	/// <summary>
	/// The source creation timestamp (JIRA's `fields.created`), or null for entries written
	/// before the field existed. The Today band's "created today" bucket reads this; when EVERY
	/// entry on a board is null the client omits the bucket rather than drawing an empty one.
	/// </summary>
	utility::string_t GetSourceCreatedAt() const;
	void SetSourceCreatedAt(const utility::string_t& Value);
	bool HasSourceCreatedAt() const;

	/// <summary>
	/// When this read-model entry was last written by the platform (the liveness cursor axis).
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Assignee;
	std::optional<utility::string_t> m_AssigneeAccountId;
	std::optional<utility::string_t> m_Resolution;
	std::optional<utility::string_t> m_IssueType;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Epic;
	std::optional<std::vector<std::shared_ptr<JiraLink>>> m_Links;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_SourceUpdatedAt;
	std::optional<utility::string_t> m_SourceCreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// Request body for the liveness search — resources tagged with any of Magnopus.Logic.WatchTower.Dtos.JiraResourceSearchRequest.Tags, changed since
/// Magnopus.Logic.WatchTower.Dtos.JiraResourceSearchRequest.Since.
/// </summary>
class JiraResourceSearchRequest : public csp::services::DtoBase
{
public:
	JiraResourceSearchRequest();
	virtual ~JiraResourceSearchRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The daigram ids to match (ANY). Required, at least one.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// The cursor from the previous poll (exclusive). Null = full set.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Family;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// Response for the liveness search: the changed items plus the cursor to pass as `since` next poll.
/// </summary>
class JiraResourceSearchResponse : public csp::services::DtoBase
{
public:
	JiraResourceSearchResponse();
	virtual ~JiraResourceSearchResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The matching resources (newest-written first).
	/// </summary>
	const std::vector<std::shared_ptr<JiraResourceDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<JiraResourceDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// The cursor for the next poll — captured server-side before the query, so nothing is missed.
	/// </summary>
	utility::string_t GetSince() const;
	void SetSince(const utility::string_t& Value);
	bool HasSince() const;


protected:
	std::optional<std::vector<std::shared_ptr<JiraResourceDto>>> m_Items;
	std::optional<utility::string_t> m_Since;
};

/// <summary>
/// A single resource in a bulk-upsert. Magnopus.Logic.WatchTower.Dtos.JiraResourceUpsertItem.Tags are ADDED to any existing tags (merge, not
/// replace).
/// </summary>
class JiraResourceUpsertItem : public csp::services::DtoBase
{
public:
	JiraResourceUpsertItem();
	virtual ~JiraResourceUpsertItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The external resource key, e.g. `"CHS-123"`. Required.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// The element-family. Defaults to `"jira"` when omitted.
	/// </summary>
	utility::string_t GetFamily() const;
	void SetFamily(const utility::string_t& Value);
	bool HasFamily() const;

	/// <summary>
	/// Daigram ids to associate this resource with (merged into the existing tag set).
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// The issue summary / title.
	/// </summary>
	utility::string_t GetSummary() const;
	void SetSummary(const utility::string_t& Value);
	bool HasSummary() const;

	/// <summary>
	/// The workflow status name.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The status category key (`new` / `indeterminate` / `done`).
	/// </summary>
	utility::string_t GetStatusCategory() const;
	void SetStatusCategory(const utility::string_t& Value);
	bool HasStatusCategory() const;

	/// <summary>
	/// The assignee display name, or null.
	/// </summary>
	utility::string_t GetAssignee() const;
	void SetAssignee(const utility::string_t& Value);
	bool HasAssignee() const;

	/// <summary>
	/// The assignee's JIRA account id, or null.
	/// </summary>
	utility::string_t GetAssigneeAccountId() const;
	void SetAssigneeAccountId(const utility::string_t& Value);
	bool HasAssigneeAccountId() const;

	/// <summary>
	/// The resolution name, or null.
	/// </summary>
	utility::string_t GetResolution() const;
	void SetResolution(const utility::string_t& Value);
	bool HasResolution() const;

	/// <summary>
	/// The issue type.
	/// </summary>
	utility::string_t GetIssueType() const;
	void SetIssueType(const utility::string_t& Value);
	bool HasIssueType() const;

	/// <summary>
	/// The project key prefix.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The parent epic key, or null.
	/// </summary>
	utility::string_t GetEpic() const;
	void SetEpic(const utility::string_t& Value);
	bool HasEpic() const;

	/// <summary>
	/// The issue's relationships (e.g. Blocks edges).
	/// </summary>
	const std::vector<std::shared_ptr<JiraLink>>& GetLinks() const;
	void SetLinks(const std::vector<std::shared_ptr<JiraLink>>& Value);
	bool HasLinks() const;

	/// <summary>
	/// The source last-changed timestamp (JIRA's `fields.updated`), or null.
	/// </summary>
	utility::string_t GetSourceUpdatedAt() const;
	void SetSourceUpdatedAt(const utility::string_t& Value);
	bool HasSourceUpdatedAt() const;

	/// <summary>
	/// The source creation timestamp (JIRA's `fields.created`), or null for older producers.
	/// </summary>
	utility::string_t GetSourceCreatedAt() const;
	void SetSourceCreatedAt(const utility::string_t& Value);
	bool HasSourceCreatedAt() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<utility::string_t> m_Family;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_Summary;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StatusCategory;
	std::optional<utility::string_t> m_Assignee;
	std::optional<utility::string_t> m_AssigneeAccountId;
	std::optional<utility::string_t> m_Resolution;
	std::optional<utility::string_t> m_IssueType;
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Epic;
	std::optional<std::vector<std::shared_ptr<JiraLink>>> m_Links;
	std::optional<utility::string_t> m_SourceUpdatedAt;
	std::optional<utility::string_t> m_SourceCreatedAt;
};

/// <summary>
/// Request body for a bulk-upsert of read-model entries (the collector/agent write path). Callers
/// should send only entries that actually changed — the poller diffs vs the read-model — because
/// every upsert advances the platform `UpdatedAt` that drives the liveness cursor.
/// </summary>
class JiraResourceUpsertRequest : public csp::services::DtoBase
{
public:
	JiraResourceUpsertRequest();
	virtual ~JiraResourceUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The resources to upsert. Required, at least one.
	/// </summary>
	const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<JiraResourceUpsertItem>>& Value);
	bool HasItems() const;


protected:
	std::optional<std::vector<std::shared_ptr<JiraResourceUpsertItem>>> m_Items;
};

/// <summary>
/// Outcome of a bulk-upsert: how many entries were created / updated / left unchanged.
/// </summary>
class JiraResourceUpsertResult : public csp::services::DtoBase
{
public:
	JiraResourceUpsertResult();
	virtual ~JiraResourceUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New read-model entries inserted.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing entries whose fields or tags changed.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing entries left untouched (nothing changed, tags already present).
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
};

/// <summary>
/// Outcome of a schema/reference upsert: whether the document was newly created + how many entries it now holds.
/// </summary>
class JiraSchemaUpsertResult : public csp::services::DtoBase
{
public:
	JiraSchemaUpsertResult();
	virtual ~JiraSchemaUpsertResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project the upsert targeted.
	/// </summary>
	utility::string_t GetProject() const;
	void SetProject(const utility::string_t& Value);
	bool HasProject() const;

	/// <summary>
	/// The reference-list kind (null for a createmeta upsert).
	/// </summary>
	utility::string_t GetKind() const;
	void SetKind(const utility::string_t& Value);
	bool HasKind() const;

	/// <summary>
	/// True if a new document was inserted; false if an existing one was replaced.
	/// </summary>
	bool GetCreated() const;
	void SetCreated(const bool& Value);
	bool HasCreated() const;

	/// <summary>
	/// The number of issue types (createmeta) or options (reference) stored.
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Project;
	std::optional<utility::string_t> m_Kind;
	std::optional<bool> m_Created;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// The body of a join. One optional field, and it answers the same question the claim note
/// does — <i>why do you want it?</i> — so that whoever is holding the baton can see what they
/// are holding somebody up for.
///
/// ⚠ Nothing identity-shaped lives here. Who is getting in line comes from the token via
/// `AmbientContext`, never from the body.
/// </summary>
class JoinQueueRequest : public csp::services::DtoBase
{
public:
	JoinQueueRequest();
	virtual ~JoinQueueRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Why they want it. Free text, optional, trimmed and length-capped by the logic layer.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;


protected:
	std::optional<utility::string_t> m_Note;
};

/// <summary>
/// One object in a legacy Nodey bucket.
/// </summary>
class LegacyObjectDto : public csp::services::DtoBase
{
public:
	LegacyObjectDto();
	virtual ~LegacyObjectDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Object key, including the tenant prefix.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// Size in bytes.
	/// </summary>
	int64_t GetSize() const;
	void SetSize(int64_t Value);
	bool HasSize() const;

	/// <summary>
	/// Content type.
	/// </summary>
	utility::string_t GetContentType() const;
	void SetContentType(const utility::string_t& Value);
	bool HasContentType() const;

	/// <summary>
	/// Last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<int64_t> m_Size;
	std::optional<utility::string_t> m_ContentType;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// A page of a legacy bucket listing.
/// </summary>
class LegacyObjectPageDto : public csp::services::DtoBase
{
public:
	LegacyObjectPageDto();
	virtual ~LegacyObjectPageDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The bucket listed (a tenant override, or the platform default).
	/// </summary>
	utility::string_t GetBucket() const;
	void SetBucket(const utility::string_t& Value);
	bool HasBucket() const;

	/// <summary>
	/// Whether the bucket is the tenant's own override.
	/// </summary>
	bool GetTenantOverride() const;
	void SetTenantOverride(const bool& Value);
	bool HasTenantOverride() const;

	/// <summary>
	/// Objects on this page.
	/// </summary>
	const std::vector<std::shared_ptr<LegacyObjectDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<LegacyObjectDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// Token for the next page, or null at the end.
	/// </summary>
	utility::string_t GetNextPageToken() const;
	void SetNextPageToken(const utility::string_t& Value);
	bool HasNextPageToken() const;


protected:
	std::optional<utility::string_t> m_Bucket;
	std::optional<bool> m_TenantOverride;
	std::optional<std::vector<std::shared_ptr<LegacyObjectDto>>> m_Items;
	std::optional<utility::string_t> m_NextPageToken;
};

/// <summary>
/// A provider-neutral generation request.
/// </summary>
class LlmGenerateRequest : public csp::services::DtoBase
{
public:
	LlmGenerateRequest();
	virtual ~LlmGenerateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Model id.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// The agent's system instruction.
	/// </summary>
	utility::string_t GetSystemInstruction() const;
	void SetSystemInstruction(const utility::string_t& Value);
	bool HasSystemInstruction() const;

	/// <summary>
	/// The conversation, oldest first. Must end with a user turn.
	/// </summary>
	const std::vector<std::shared_ptr<LlmMessage>>& GetMessages() const;
	void SetMessages(const std::vector<std::shared_ptr<LlmMessage>>& Value);
	bool HasMessages() const;

	/// <summary>
	/// Sampling temperature; null = provider default.
	/// </summary>
	double GetTemperature() const;
	void SetTemperature(double Value);
	bool HasTemperature() const;

	/// <summary>
	/// Output token cap; null = gateway default.
	/// </summary>
	int32_t GetMaxOutputTokens() const;
	void SetMaxOutputTokens(int32_t Value);
	bool HasMaxOutputTokens() const;

	/// <summary>
	/// Ask the provider for a JSON object response where it supports that.
	/// </summary>
	bool GetJsonResponse() const;
	void SetJsonResponse(const bool& Value);
	bool HasJsonResponse() const;

	/// <summary>
	/// Which swarm agent is calling — logged, so a runaway agent is attributable.
	/// </summary>
	utility::string_t GetAgentId() const;
	void SetAgentId(const utility::string_t& Value);
	bool HasAgentId() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_SystemInstruction;
	std::optional<std::vector<std::shared_ptr<LlmMessage>>> m_Messages;
	std::optional<double> m_Temperature;
	std::optional<int32_t> m_MaxOutputTokens;
	std::optional<bool> m_JsonResponse;
	std::optional<utility::string_t> m_AgentId;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// A provider-neutral generation result.
/// </summary>
class LlmGenerateResponse : public csp::services::DtoBase
{
public:
	LlmGenerateResponse();
	virtual ~LlmGenerateResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The generated text.
	/// </summary>
	utility::string_t GetText() const;
	void SetText(const utility::string_t& Value);
	bool HasText() const;

	/// <summary>
	/// The model that answered.
	/// </summary>
	utility::string_t GetModel() const;
	void SetModel(const utility::string_t& Value);
	bool HasModel() const;

	/// <summary>
	/// Provider id.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Prompt tokens, when the provider reports them.
	/// </summary>
	int32_t GetInputTokens() const;
	void SetInputTokens(int32_t Value);
	bool HasInputTokens() const;

	/// <summary>
	/// Output tokens, when the provider reports them.
	/// </summary>
	int32_t GetOutputTokens() const;
	void SetOutputTokens(int32_t Value);
	bool HasOutputTokens() const;

	/// <summary>
	/// Why generation stopped, in the provider's words.
	/// </summary>
	utility::string_t GetFinishReason() const;
	void SetFinishReason(const utility::string_t& Value);
	bool HasFinishReason() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back; absent on a build that
	/// does not decode, which is how the SPA notices that the model was shown base64. Null when the
	/// request was plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Text;
	std::optional<utility::string_t> m_Model;
	std::optional<utility::string_t> m_Provider;
	std::optional<int32_t> m_InputTokens;
	std::optional<int32_t> m_OutputTokens;
	std::optional<utility::string_t> m_FinishReason;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// One turn in an LLM conversation.
/// </summary>
class LlmMessage : public csp::services::DtoBase
{
public:
	LlmMessage();
	virtual ~LlmMessage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// `user` or `assistant`.
	/// </summary>
	utility::string_t GetRole() const;
	void SetRole(const utility::string_t& Value);
	bool HasRole() const;

	/// <summary>
	/// Plain text content.
	/// </summary>
	utility::string_t GetText() const;
	void SetText(const utility::string_t& Value);
	bool HasText() const;


protected:
	std::optional<utility::string_t> m_Role;
	std::optional<utility::string_t> m_Text;
};

/// <summary>
/// One provider as the UI sees it.
/// </summary>
class LlmProviderDto : public csp::services::DtoBase
{
public:
	LlmProviderDto();
	virtual ~LlmProviderDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Provider id: `google`, `anthropic` or `openai`.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Whether a key is configured in this environment.
	/// </summary>
	bool GetConfigured() const;
	void SetConfigured(const bool& Value);
	bool HasConfigured() const;

	/// <summary>
	/// Suggested model ids.
	/// </summary>
	const std::vector<utility::string_t>& GetModels() const;
	void SetModels(const std::vector<utility::string_t>& Value);
	bool HasModels() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<bool> m_Configured;
	std::optional<std::vector<utility::string_t>> m_Models;
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

/// <summary>
/// A saved session with its payload.
/// </summary>
class MiningSessionDto : public csp::services::DtoBase
{
public:
	MiningSessionDto();
	virtual ~MiningSessionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The SPA's session JSON, verbatim.
	/// </summary>
	utility::string_t GetPayload() const;
	void SetPayload(const utility::string_t& Value);
	bool HasPayload() const;

	/// <summary>
	/// The transit encoding this build decoded on the request, echoed back. A build that does not
	/// decode leaves it absent, which is how the SPA notices a replica that ignored the marker and
	/// stored base64 where the text should be. Null when the request was plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;

	/// <summary>
	/// Session id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status at save time.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Payload size in characters.
	/// </summary>
	int64_t GetPayloadLength() const;
	void SetPayloadLength(int64_t Value);
	bool HasPayloadLength() const;

	/// <summary>
	/// Created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Payload;
	std::optional<utility::string_t> m_Encoding;
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<int64_t> m_PayloadLength;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// Body of a session create or update.
/// </summary>
class MiningSessionSaveRequest : public csp::services::DtoBase
{
public:
	MiningSessionSaveRequest();
	virtual ~MiningSessionSaveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Display name. Required.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The SPA's session JSON. Required.
	/// </summary>
	utility::string_t GetPayload() const;
	void SetPayload(const utility::string_t& Value);
	bool HasPayload() const;

	/// <summary>
	/// `base64` when the prompt-bearing fields are base64-encoded UTF-8 for transit (see
	///             `Transit.TransitEncoding`); null or absent for plain text.
	/// </summary>
	utility::string_t GetEncoding() const;
	void SetEncoding(const utility::string_t& Value);
	bool HasEncoding() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Payload;
	std::optional<utility::string_t> m_Encoding;
};

/// <summary>
/// A saved session as it appears in the list — no payload.
/// </summary>
class MiningSessionSummaryDto : public csp::services::DtoBase
{
public:
	MiningSessionSummaryDto();
	virtual ~MiningSessionSummaryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Session id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Display name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant whose storage was mined.
	/// </summary>
	utility::string_t GetMinedTenantName() const;
	void SetMinedTenantName(const utility::string_t& Value);
	bool HasMinedTenantName() const;

	/// <summary>
	/// The "which files" prompt.
	/// </summary>
	utility::string_t GetFilePrompt() const;
	void SetFilePrompt(const utility::string_t& Value);
	bool HasFilePrompt() const;

	/// <summary>
	/// The "what to compute" prompt.
	/// </summary>
	utility::string_t GetMiningPrompt() const;
	void SetMiningPrompt(const utility::string_t& Value);
	bool HasMiningPrompt() const;

	/// <summary>
	/// Run status at save time.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Payload size in characters.
	/// </summary>
	int64_t GetPayloadLength() const;
	void SetPayloadLength(int64_t Value);
	bool HasPayloadLength() const;

	/// <summary>
	/// Created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Last saved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_MinedTenantName;
	std::optional<utility::string_t> m_FilePrompt;
	std::optional<utility::string_t> m_MiningPrompt;
	std::optional<utility::string_t> m_Status;
	std::optional<int64_t> m_PayloadLength;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

class MiningSessionSummaryDtoDataPage : public csp::services::DtoBase
{
public:
	MiningSessionSummaryDtoDataPage();
	virtual ~MiningSessionSummaryDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<MiningSessionSummaryDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<MiningSessionSummaryDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
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
/// Somebody on the roster, as the grid sees them.
/// </summary>
class PersonDto : public csp::services::DtoBase
{
public:
	PersonDto();
	virtual ~PersonDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Their id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Their name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The department they sit in.
	/// </summary>
	utility::string_t GetDepartmentId() const;
	void SetDepartmentId(const utility::string_t& Value);
	bool HasDepartmentId() const;

	/// <summary>
	/// Their title, one of their department's ladder entries (or blank).
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Expected weekly hours — the denominator of every utilization figure.
	/// </summary>
	double GetWeeklyCapacityHours() const;
	void SetWeeklyCapacityHours(double Value);
	bool HasWeeklyCapacityHours() const;

	/// <summary>
	/// Whether they are on the roster today.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;

	/// <summary>
	/// Where they are based — one of Magnopus.Logic.ProductionRoster.Dtos.RosterConfigDto.Locations, or absent for
	/// Unspecified.
	///
	/// ⚠ <b>Absent, not empty string.</b> The API omits nulls on the wire, so most people have
	/// no `location` key at all until the import script runs. The client must read a
	/// missing key as Unspecified rather than as a filter miss — the contract records this in
	/// `nullsAreOmittedOnTheWire`.
	/// </summary>
	utility::string_t GetLocation() const;
	void SetLocation(const utility::string_t& Value);
	bool HasLocation() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DepartmentId;
	std::optional<utility::string_t> m_Title;
	std::optional<double> m_WeeklyCapacityHours;
	std::optional<bool> m_IsActive;
	std::optional<utility::string_t> m_Location;
};

/// <summary>
/// Request body for creating or editing a person.
/// </summary>
class PersonUpsertRequest : public csp::services::DtoBase
{
public:
	PersonUpsertRequest();
	virtual ~PersonUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Their name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The department they sit in. Required — the grid groups by it.
	/// </summary>
	utility::string_t GetDepartmentId() const;
	void SetDepartmentId(const utility::string_t& Value);
	bool HasDepartmentId() const;

	/// <summary>
	/// Their title. Optional, and <b>validated against their department's ladder</b> when
	/// present (§3.1) — a title that is not on the ladder would render under a divider the
	/// department does not have.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Expected weekly hours.
	///
	/// ⚠ <b>No default, deliberately</b> (§5.4): capacity is not uniform — there are 16h and
	/// 37.5h people among the 40h majority — and a default here is how that becomes uniform by
	/// accident.
	/// </summary>
	double GetWeeklyCapacityHours() const;
	void SetWeeklyCapacityHours(double Value);
	bool HasWeeklyCapacityHours() const;

	/// <summary>
	/// Whether they are on the roster today.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;

	/// <summary>
	/// Where they are based. Optional, and <b>validated against the list `GET /config`
	/// serves</b> when present — the same shape as Magnopus.Logic.ProductionRoster.Dtos.PersonUpsertRequest.Title, which is validated
	/// against its department's ladder rather than accepted as free text.
	///
	/// An empty string and a null both mean Unspecified, and both are stored as null so there
	/// is one representation of "nobody has said". Two would make the import script's
	/// "unmatched" report lie.
	/// </summary>
	utility::string_t GetLocation() const;
	void SetLocation(const utility::string_t& Value);
	bool HasLocation() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DepartmentId;
	std::optional<utility::string_t> m_Title;
	std::optional<double> m_WeeklyCapacityHours;
	std::optional<bool> m_IsActive;
	std::optional<utility::string_t> m_Location;
};

class ProblemDetails : public csp::services::DtoBase
{
public:
	ProblemDetails();
	virtual ~ProblemDetails();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	int32_t GetStatus() const;
	void SetStatus(int32_t Value);
	bool HasStatus() const;

	utility::string_t GetDetail() const;
	void SetDetail(const utility::string_t& Value);
	bool HasDetail() const;

	utility::string_t GetInstance() const;
	void SetInstance(const utility::string_t& Value);
	bool HasInstance() const;

	const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& GetExtensions() const;
	void SetExtensions(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value);
	bool HasExtensions() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Title;
	std::optional<int32_t> m_Status;
	std::optional<utility::string_t> m_Detail;
	std::optional<utility::string_t> m_Instance;
	std::optional<std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>> m_Extensions;
};

/// <summary>
/// A project, as the picker and the by-project view see it.
/// </summary>
class ProjectDto : public csp::services::DtoBase
{
public:
	ProjectDto();
	virtual ~ProjectDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Its name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The swatch the grid tints its cells with, as `#RRGGBB`.
	/// </summary>
	utility::string_t GetColour() const;
	void SetColour(const utility::string_t& Value);
	bool HasColour() const;

	/// <summary>
	/// Whether the project is still live.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Colour;
	std::optional<bool> m_IsActive;
};

/// <summary>
/// Request body for creating or editing a project.
/// </summary>
class ProjectUpsertRequest : public csp::services::DtoBase
{
public:
	ProjectUpsertRequest();
	virtual ~ProjectUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project's name. Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The swatch, as `#RGB` or `#RRGGBB`. Optional; the client falls back to a
	/// derived colour.
	///
	/// ⚠ <b>Validated in the logic layer, not just length-capped here</b>: it is written into a
	/// style attribute on the client, so anything that is not a hex colour is a string a
	/// coworker typed reaching a CSS context.
	/// </summary>
	utility::string_t GetColour() const;
	void SetColour(const utility::string_t& Value);
	bool HasColour() const;

	/// <summary>
	/// Whether the project is still live.
	/// </summary>
	bool GetIsActive() const;
	void SetIsActive(const bool& Value);
	bool HasIsActive() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Colour;
	std::optional<bool> m_IsActive;
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
	/// Whether this prototype is a global (cross-tenant) platform record.
	/// </summary>
	bool GetIsGlobal() const;
	void SetIsGlobal(const bool& Value);
	bool HasIsGlobal() const;

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
	std::optional<bool> m_IsGlobal;
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
	/// The types of prototypes to exclude from the search
	/// </summary>
	const std::vector<utility::string_t>& GetExcludedTypes() const;
	void SetExcludedTypes(const std::vector<utility::string_t>& Value);
	bool HasExcludedTypes() const;

	std::shared_ptr<GlobalScopeFilter> GetScope() const;
	void SetScope(const std::shared_ptr<GlobalScopeFilter>& Value);
	bool HasScope() const;


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
	std::optional<std::vector<utility::string_t>> m_ExcludedTypes;
	std::optional<std::shared_ptr<GlobalScopeFilter>> m_Scope;
};

/// <summary>
/// One person waiting, as the detail view's queue card sees them.
///
/// ⚠ <b>Magnopus.Logic.Baton.Dtos.QueueEntryDto.Position is DERIVED and never stored</b> (baton-plan.md §5.3). It is the
/// index in an `EnqueuedAt` ordering, computed when the queue is read. Storing an integer
/// position turns every leave into a renumbering write across the whole queue, and renumbering
/// is where these systems corrupt.
/// </summary>
class QueueEntryDto : public csp::services::DtoBase
{
public:
	QueueEntryDto();
	virtual ~QueueEntryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The queue entry's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Who is waiting.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Their name as the queue snapshotted it. Rendered through `user-name-cache.js` like
	/// every other name in Baton, so this is the immediate value rather than the final one (D21).
	/// </summary>
	utility::string_t GetUserName() const;
	void SetUserName(const utility::string_t& Value);
	bool HasUserName() const;

	/// <summary>
	/// When they joined. <b>This is the ordering.</b>
	/// </summary>
	utility::string_t GetEnqueuedAt() const;
	void SetEnqueuedAt(const utility::string_t& Value);
	bool HasEnqueuedAt() const;

	/// <summary>
	/// Why they want it, if they said.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;

	/// <summary>
	/// Their place in line, 1-based. Derived — see the class remarks.
	/// </summary>
	int32_t GetPosition() const;
	void SetPosition(int32_t Value);
	bool HasPosition() const;

	/// <summary>
	/// `true` when the baton is currently being held open for this person. Exactly one
	///             entry in a queue can carry it, and only while the window is live.
	/// </summary>
	bool GetIsReserved() const;
	void SetIsReserved(const bool& Value);
	bool HasIsReserved() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_UserName;
	std::optional<utility::string_t> m_EnqueuedAt;
	std::optional<utility::string_t> m_Note;
	std::optional<int32_t> m_Position;
	std::optional<bool> m_IsReserved;
};

/// <summary>
/// <b>What happened</b> — the body of a join or a leave, and of the 409 that refuses one.
///             Deliberately the same shape as Magnopus.Logic.Baton.Dtos.ClaimOutcomeDto: the UI branches on
///             Magnopus.Logic.Baton.Dtos.QueueOutcomeDto.Outcome and renders the system from Magnopus.Logic.Baton.Dtos.QueueOutcomeDto.System, never
///             from what it sent.
/// </summary>
class QueueOutcomeDto : public csp::services::DtoBase
{
public:
	QueueOutcomeDto();
	virtual ~QueueOutcomeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// What happened, as one of Magnopus.Logic.Baton.Dtos.QueueOutcomes.
	/// </summary>
	utility::string_t GetOutcome() const;
	void SetOutcome(const utility::string_t& Value);
	bool HasOutcome() const;

	std::shared_ptr<SystemDto> GetSystem() const;
	void SetSystem(const std::shared_ptr<SystemDto>& Value);
	bool HasSystem() const;

	/// <summary>
	/// The caller's place in line after the operation, 1-based, or `null` when they are no
	/// longer in it. <b>"Where do I stand" is half of story S3</b>, so a join that could not say
	/// it would have delivered the list and not the promise.
	/// </summary>
	int32_t GetPosition() const;
	void SetPosition(int32_t Value);
	bool HasPosition() const;

	/// <summary>
	/// How many people are waiting, after the operation.
	/// </summary>
	int32_t GetQueueDepth() const;
	void SetQueueDepth(int32_t Value);
	bool HasQueueDepth() const;

	/// <summary>
	/// A plain sentence, for API and agent callers. The SPA composes its own copy.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_Outcome;
	std::optional<std::shared_ptr<SystemDto>> m_System;
	std::optional<int32_t> m_Position;
	std::optional<int32_t> m_QueueDepth;
	std::optional<utility::string_t> m_Message;
};

/// <summary>
/// Studio policy the client renders by, served from one place.
///
/// ★ <b>The utilization thresholds are served, not duplicated into the client</b> (§3.3). They
/// are a studio policy that will be argued about, and the argument should happen in one place.
/// They are <b>not</b> a feature flag and <b>not</b> environment-gated — they are configuration
/// data, which is a different thing.
/// </summary>
class RosterConfigDto : public csp::services::DtoBase
{
public:
	RosterConfigDto();
	virtual ~RosterConfigDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The day a week starts on, as a name (`"Monday"`).
	///
	/// §10 D5's recommendation, taken: <b>Monday, served from here</b> rather than configurable.
	/// It is served rather than hardcoded in the client so that making it configurable later is
	/// a change to one value, not a hunt for the places that assumed Monday. A string rather
	/// than a `DayOfWeek` because the wire form of an enum depends on serializer settings
	/// the client cannot see.
	/// </summary>
	utility::string_t GetWeekStartDay() const;
	void SetWeekStartDay(const utility::string_t& Value);
	bool HasWeekStartDay() const;

	/// <summary>
	/// Below this percentage of capacity a person reads as under-utilized. 70 today.
	/// </summary>
	int32_t GetUnderUtilizedBelowPercent() const;
	void SetUnderUtilizedBelowPercent(int32_t Value);
	bool HasUnderUtilizedBelowPercent() const;

	/// <summary>
	/// Above this percentage a person reads as over-booked. 115 today.
	/// </summary>
	int32_t GetOverBookedAbovePercent() const;
	void SetOverBookedAbovePercent(int32_t Value);
	bool HasOverBookedAbovePercent() const;

	/// <summary>
	/// The locations a person can be based in, in the order the form and the filter pills
	/// render them. `["US", "UK", "Remote"]` today.
	///
	/// ★ <b>Served rather than hardcoded in the client</b>, on exactly the argument that put the
	/// thresholds here (§3.3): it is studio policy, the studio will argue about it, and the
	/// argument should happen in one place. A fourth office is then one constant rather than a
	/// hunt through a form, a filter row and a validator.
	/// ⚠ <b>"Unspecified" is NOT in this list.</b> It is the absence of a value, and the client
	/// adds it to the form and the filter itself. Putting it here would make it assignable, and
	/// a person explicitly set to Unspecified is indistinguishable from one nobody has got to
	/// yet — which is the distinction the import script's report depends on.
	/// </summary>
	const std::vector<utility::string_t>& GetLocations() const;
	void SetLocations(const std::vector<utility::string_t>& Value);
	bool HasLocations() const;

	/// <summary>
	/// The one multiplayer Group every roster client attaches to, or `null` until one is
	/// provisioned (§7.4). The client needs it to know what to attach to; it is served here
	/// rather than discovered so that there is exactly one answer.
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;


protected:
	std::optional<utility::string_t> m_WeekStartDay;
	std::optional<int32_t> m_UnderUtilizedBelowPercent;
	std::optional<int32_t> m_OverBookedAbovePercent;
	std::optional<std::vector<utility::string_t>> m_Locations;
	std::optional<utility::string_t> m_GroupId;
};

/// <summary>
/// ★ <b>Everything the grid draws, in ONE response</b> (§4.3).
///
/// The grid's first load and its refresh pulse both need the same five things, and they used to
/// be five parallel requests. One per tick per open client is five times the connections, five
/// sets of auth and rate-limit accounting, and — the part that actually matters — <b>five
/// independently-timed reads of one logical state</b>. A person deleted between the people read
/// and the assignments read leaves the client holding bookings for somebody who is not on the
/// roster. Collecting them server-side makes the tick one request and one answer.
/// ⚠ <b>Every list is nullable, and absence is meaningful.</b> The caller names which types it
/// wants; a type it did not ask for comes back as an <b>absent key</b> (the API omits nulls on
/// the wire), which is deliberately distinguishable from an empty list — "I did not ask" and
/// "there are none" must not collapse, or a client that requested only assignments would read
/// the missing people as <i>the studio is empty</i> and blank the grid.
/// </summary>
class RosterSnapshotDto : public csp::services::DtoBase
{
public:
	RosterSnapshotDto();
	virtual ~RosterSnapshotDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<RosterConfigDto> GetConfig() const;
	void SetConfig(const std::shared_ptr<RosterConfigDto>& Value);
	bool HasConfig() const;

	/// <summary>
	/// The departments with their ordered title ladders, when `departments` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<DepartmentDto>>& GetDepartments() const;
	void SetDepartments(const std::vector<std::shared_ptr<DepartmentDto>>& Value);
	bool HasDepartments() const;

	/// <summary>
	/// The whole roster, when `people` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<PersonDto>>& GetPeople() const;
	void SetPeople(const std::vector<std::shared_ptr<PersonDto>>& Value);
	bool HasPeople() const;

	/// <summary>
	/// The projects, when `projects` was requested.
	/// </summary>
	const std::vector<std::shared_ptr<ProjectDto>>& GetProjects() const;
	void SetProjects(const std::vector<std::shared_ptr<ProjectDto>>& Value);
	bool HasProjects() const;

	/// <summary>
	/// The bookings in the requested day range, when `assignments` was requested.
	///
	/// ⚠ Requesting this type without `from`/`to` is a <b>400</b>, not an unbounded
	/// read: the roster is a studio's whole history and "every assignment ever" is never what a
	/// caller meant.
	/// </summary>
	const std::vector<std::shared_ptr<AssignmentDto>>& GetAssignments() const;
	void SetAssignments(const std::vector<std::shared_ptr<AssignmentDto>>& Value);
	bool HasAssignments() const;


protected:
	std::optional<std::shared_ptr<RosterConfigDto>> m_Config;
	std::optional<std::vector<std::shared_ptr<DepartmentDto>>> m_Departments;
	std::optional<std::vector<std::shared_ptr<PersonDto>>> m_People;
	std::optional<std::vector<std::shared_ptr<ProjectDto>>> m_Projects;
	std::optional<std::vector<std::shared_ptr<AssignmentDto>>> m_Assignments;
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

/// <summary>
/// Request body for registering a system.
///
/// ⚠ <b>The duplicate-name guard is the unique index, not this class.</b> ASP.NET validation runs
/// before the action, so a blank name is a 400 from here — but "a system called SPHERE-01 already
/// exists" is decided by `Unique_Tenant_Name` when the insert lands. Checking first and then
/// inserting is the same race as a read-then-write take (baton-plan.md §5.1, §6).
/// </summary>
class SystemCreateRequest : public csp::services::DtoBase
{
public:
	SystemCreateRequest();
	virtual ~SystemCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The thing people say out loud ("SPHERE-01"). Required, unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is, so the list reads as our estate rather than a set of hostnames.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// How long the queue head's exclusive window lasts. Omit for
	/// Magnopus.Logic.Baton.DataAccess.Model.SystemDocument.DefaultGracePeriodMinutes (an hour — people are in meetings).
	///
	/// ⚠ <b>Lane C consumes this</b>, so it is settable from the first create rather than
	/// retro-fitted later (baton-plan.md D18, §15.2).
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// Optional. A Slack channel id (`C0123ABCD`) or `#name` for this system's
	/// notifications. Empty or absent means the app-wide default channel.
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<utility::string_t> m_ChannelId;
};

/// <summary>
/// A system as the list and detail views see it. One of these renders a whole row — the system,
/// its holder, its queue depth and the first few names in line — so a page is one round trip
/// rather than an N+1 across collections (baton-plan.md §8.2).
///
/// ⚠ <b>Display names here are a snapshot, and the client does not render them directly.</b>
/// The SPA resolves ids through `user-name-cache.js` so a renamed user shows their new
/// name; Magnopus.Logic.Baton.Dtos.SystemDto.CurrentHolderName exists because it is the server-side <i>filter</i> key
/// (baton-plan.md D21).
/// </summary>
class SystemDto : public csp::services::DtoBase
{
public:
	SystemDto();
	virtual ~SystemDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The system's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The thing people say out loud. Unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// Optional thumbnail Prototype id.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;

	/// <summary>
	/// Optional Slack channel for this system's notifications, or `null` for the app-wide
	/// default. See `SystemDocument.ChannelId`.
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;

	/// <summary>
	/// Whether this system has been retired. Archiving is a <b>soft</b> delete — history has to
	/// outlive the system — so an archived system is absent from the list but still resolvable
	/// by id, and a detail view reached from history needs to be able to say so.
	/// </summary>
	bool GetIsArchived() const;
	void SetIsArchived(const bool& Value);
	bool HasIsArchived() const;

	/// <summary>
	/// Who holds the baton, or `null` when it is free.
	/// </summary>
	utility::string_t GetCurrentHolderId() const;
	void SetCurrentHolderId(const utility::string_t& Value);
	bool HasCurrentHolderId() const;

	/// <summary>
	/// The holder's name as snapshotted at take time. See the class remarks.
	/// </summary>
	utility::string_t GetCurrentHolderName() const;
	void SetCurrentHolderName(const utility::string_t& Value);
	bool HasCurrentHolderName() const;

	/// <summary>
	/// Why they have it.
	/// </summary>
	utility::string_t GetCurrentNote() const;
	void SetCurrentNote(const utility::string_t& Value);
	bool HasCurrentNote() const;

	/// <summary>
	/// When the current hold started.
	/// </summary>
	utility::string_t GetHeldSince() const;
	void SetHeldSince(const utility::string_t& Value);
	bool HasHeldSince() const;

	/// <summary>
	/// When the baton was last passed. The free-row sort key.
	/// </summary>
	utility::string_t GetLastReleasedAt() const;
	void SetLastReleasedAt(const utility::string_t& Value);
	bool HasLastReleasedAt() const;

	/// <summary>
	/// Who the baton is currently being held open for, or `null`.
	/// </summary>
	utility::string_t GetReservedForUserId() const;
	void SetReservedForUserId(const utility::string_t& Value);
	bool HasReservedForUserId() const;

	/// <summary>
	/// When that exclusive window lapses.
	/// </summary>
	utility::string_t GetReservedUntil() const;
	void SetReservedUntil(const utility::string_t& Value);
	bool HasReservedUntil() const;

	/// <summary>
	/// The reserved person's snapshotted name, so a reserved row reads as a person rather than
	/// as an id in the microtask before `user-name-cache.js` answers (D21).
	/// </summary>
	utility::string_t GetReservedForName() const;
	void SetReservedForName(const utility::string_t& Value);
	bool HasReservedForName() const;

	/// <summary>
	/// How long this system's queue-head window lasts.
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// How many people are waiting.
	/// </summary>
	int32_t GetQueueDepth() const;
	void SetQueueDepth(int32_t Value);
	bool HasQueueDepth() const;

	/// <summary>
	/// The first three names in line, for the row's "next up" summary.
	/// </summary>
	const std::vector<utility::string_t>& GetQueueHeadNames() const;
	void SetQueueHeadNames(const std::vector<utility::string_t>& Value);
	bool HasQueueHeadNames() const;

	/// <summary>
	/// The ids behind Magnopus.Logic.Baton.Dtos.SystemDto.QueueHeadNames, in the same order — <b>what lets the row's
	/// queue faces be pictures rather than monograms</b>. Lane E's face factory skips the
	/// lookup when it has no id, so before this the queue was monograms by data gap rather than
	/// by choice.
	/// </summary>
	const std::vector<utility::string_t>& GetQueueHeadUserIds() const;
	void SetQueueHeadUserIds(const std::vector<utility::string_t>& Value);
	bool HasQueueHeadUserIds() const;

	/// <summary>
	/// Whether the <b>caller</b> is in this system's queue.
	///
	/// ⚠ <b>Per-request, and computed for a whole page in ONE query</b> — the alternative is an
	/// N+1 across the list, which is the thing the denormalized summary above exists to avoid.
	/// It is a boolean rather than a position on purpose: an exact position needs the whole
	/// queue of every system on the page, and the row does not need it. "Where do I stand" is
	/// answered exactly by the join response and by the detail view's queue card, and
	/// approximately — for free — by the caller finding itself in
	/// Magnopus.Logic.Baton.Dtos.SystemDto.QueueHeadUserIds.
	/// </summary>
	bool GetViewerQueued() const;
	void SetViewerQueued(const bool& Value);
	bool HasViewerQueued() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
	std::optional<utility::string_t> m_ChannelId;
	std::optional<bool> m_IsArchived;
	std::optional<utility::string_t> m_CurrentHolderId;
	std::optional<utility::string_t> m_CurrentHolderName;
	std::optional<utility::string_t> m_CurrentNote;
	std::optional<utility::string_t> m_HeldSince;
	std::optional<utility::string_t> m_LastReleasedAt;
	std::optional<utility::string_t> m_ReservedForUserId;
	std::optional<utility::string_t> m_ReservedUntil;
	std::optional<utility::string_t> m_ReservedForName;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<int32_t> m_QueueDepth;
	std::optional<std::vector<utility::string_t>> m_QueueHeadNames;
	std::optional<std::vector<utility::string_t>> m_QueueHeadUserIds;
	std::optional<bool> m_ViewerQueued;
};

class SystemDtoDataPage : public csp::services::DtoBase
{
public:
	SystemDtoDataPage();
	virtual ~SystemDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SystemDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SystemDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<SystemDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Request body for setting a system's picture: the id of the Prototype whose Thumbnail asset
/// holds the image.
///
/// <b>Metadata only — the image itself never passes through Baton.</b> The SPA uploads the
/// bytes straight to the Prototype service and then tells Baton which prototype to point at.
/// That keeps this assembly free of a Prototype client (and of the blob-handling that comes with
/// one), and it is the same division daigrammar's thumbnail uses.
/// ⚠ <b>The access control that makes the picture visible to a second person lives on the
/// PROTOTYPE, not here</b> (baton-plan.md D19: read AND write set to everyone, so a system needs
/// no owner concept). Baton stores a reference; it cannot widen or narrow who can see the image,
/// and it should not try.
/// </summary>
class SystemThumbnailRequest : public csp::services::DtoBase
{
public:
	SystemThumbnailRequest();
	virtual ~SystemThumbnailRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Prototype id whose `Thumbnail` asset detail holds the picture. Required, and
	/// validated as a well-formed id — a junk value here would be stored happily and then render
	/// as a permanently absent picture that nothing explains.
	/// </summary>
	utility::string_t GetThumbnailPrototypeId() const;
	void SetThumbnailPrototypeId(const utility::string_t& Value);
	bool HasThumbnailPrototypeId() const;


protected:
	std::optional<utility::string_t> m_ThumbnailPrototypeId;
};

/// <summary>
/// Request body for editing a system's metadata: name, description, url and the grace window.
///
/// ⚠ <b>The grace window is editable, and the endpoint table in baton-plan.md §8.1 says
/// "Name / description / url".</b> §7 and D18 are explicit that `GracePeriodMinutes` is
/// "set at create, editable per system" — a rig that turns over in minutes wants a short window
/// and a box someone needs a morning on wants a long one. The table is the stale half; it was
/// written before D18. Flagged rather than silently resolved.
/// </summary>
class SystemUpdateRequest : public csp::services::DtoBase
{
public:
	SystemUpdateRequest();
	virtual ~SystemUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The system's name. Required, and still unique per tenant.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// What this system is.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Optional link to the console / host / dashboard.
	/// </summary>
	utility::string_t GetUrl() const;
	void SetUrl(const utility::string_t& Value);
	bool HasUrl() const;

	/// <summary>
	/// The queue head's exclusive window. Omit to leave the current value alone.
	/// </summary>
	int32_t GetGracePeriodMinutes() const;
	void SetGracePeriodMinutes(int32_t Value);
	bool HasGracePeriodMinutes() const;

	/// <summary>
	/// Optional Slack channel. <b>Sent empty, it clears the override</b> and the system falls back
	/// to the default channel — the same shape as the other editable fields, where absent means
	/// "make it absent".
	/// </summary>
	utility::string_t GetChannelId() const;
	void SetChannelId(const utility::string_t& Value);
	bool HasChannelId() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Url;
	std::optional<int32_t> m_GracePeriodMinutes;
	std::optional<utility::string_t> m_ChannelId;
};

/// <summary>
/// The body of a take. One field, and it is optional — <b>the note answers "why do you have
/// it?"</b>, which is the question a coworker who finds a system held for three days actually
/// has (story S5).
///
/// ⚠ Nothing identity-shaped lives here. Who is taking the baton comes from the token via
/// `AmbientContext`, never from the body — a lock whose holder is whatever the client
/// claimed is not a lock.
/// </summary>
class TakeBatonRequest : public csp::services::DtoBase
{
public:
	TakeBatonRequest();
	virtual ~TakeBatonRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Why the caller wants it. Free text, optional, trimmed and length-capped by the logic layer.
	/// </summary>
	utility::string_t GetNote() const;
	void SetNote(const utility::string_t& Value);
	bool HasNote() const;


protected:
	std::optional<utility::string_t> m_Note;
};

/// <summary>
/// What this build of the Wazzup service supports.
/// </summary>
class WazzupCapabilitiesDto : public csp::services::DtoBase
{
public:
	WazzupCapabilitiesDto();
	virtual ~WazzupCapabilitiesDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Transit encodings accepted on prompt-bearing fields (see `Transit.TransitEncoding`).
	/// </summary>
	const std::vector<utility::string_t>& GetTransitEncodings() const;
	void SetTransitEncodings(const std::vector<utility::string_t>& Value);
	bool HasTransitEncodings() const;


protected:
	std::optional<std::vector<utility::string_t>> m_TransitEncodings;
};


} // namespace csp::services::generated::prototypeservice