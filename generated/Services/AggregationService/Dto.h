

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::aggregationservice
{

class ActivateChaosRequest;
class AloClassCompletedRequest;
class AloClassCompletedResponse;
class AltitudeMode;
class AnalyticsRecord;
class ApiVersion;
class ApplicationSettingsDto;
class AssetDetailDto;
class AuditTrailDto;
class AuditTrailDtoDataPage;
class AuthDto;
class BugReportAssignRequest;
class BugReportCreateRequest;
class BugReportDetailDto;
class BugReportListDto;
class BugReportListResponse;
class BugReportStatusUpdateRequest;
class CancelRedriveResult;
class ChaosMonkeyConfig;
class CheckpointStats;
class CoalescenceState;
class CoalescingFanOutDocument;
class CompletedNodeOutput;
class ControllerVersions;
class DailyExecutionCount;
class DailyKeyUsage;
class DailyNodeTypeUsage;
class DailyQueueUsage;
class DailySustainedActivityHours;
class DefaultSettings;
class DlqInfo;
class DuplicateSpaceOptions;
class ExecutionDetailDto;
class ExecutionDto;
class ExecutionListResponse;
class ExecutionLogsResponse;
class ExecutionStatusUpdateRequest;
class GacValidationBucketRule;
class GacValidationCheck;
class GacValidationRequest;
class GacValidationRequestConfig;
class GacValidationResult;
class GraphExecutionError;
class GraphExecutionRequest;
class GraphExecutionState;
class GraphExecutionStats;
class GraphExecutionSubmitResponse;
class GroupRoleDto;
class HarmonizeAloRequest;
class HarmonizeAloResponse;
class Icon;
class IconStyle;
class ImportSpaceOptions;
class Kml;
class LineString;
class LocalizedString;
class LogEntryDto;
class LookAt;
class Model;
class ModelLink;
class ModelLocation;
class ModelOrientation;
class ModelScale;
class NamedFunction;
class NodeDefinitionCreateRequest;
class NodeDefinitionDetailDto;
class NodeDefinitionListDto;
class NodeDefinitionListDtoDataPage;
class NodeDefinitionStatusRequest;
class NodeDefinitionUpdateRequest;
class NodeSummaryDto;
class ObserveResponse;
class Placemark;
class Point;
class PositionKml;
class ProblemDetails;
class ProcessingTimeEntry;
class PrototypeDto;
class PrototypeDtoDataPage;
class PurgeDlqResult;
class QueueBreakdownEntry;
class QueueConfigInfo;
class QueueDepthInfo;
class QueueHealthInfo;
class QueueHealthSnapshot;
class QueueHealthSummary;
class QueueWaitSummary;
class RedriveTaskInfo;
class SaveValidatedGacRequest;
class SaveValidatedSecretRequest;
class SecretValidationCheck;
class SecretValidationResult;
class SequenceDto;
class SequenceDtoDataPage;
class ServiceRequest;
class ServiceResponse;
class ServiceVersionInfo;
class SettingsDto;
class ShopifyCartDto;
class ShopifyCartLineDto;
class ShopifyCartUpdateDto;
class ShopifyCheckoutDto;
class ShopifyMoney;
class ShopifyProductDto;
class ShopifyProductMedia;
class ShopifyProductVariants;
class ShopifyStorefrontDto;
class ShopifyStorefrontDtoDataPage;
class ShopifyStorefrontValidationRequest;
class ShopifyVariantOption;
class SliceCompatibility;
class SpaceCheckpointOptions;
class SpaceCheckpointResponse;
class SpaceEventDto;
class SpaceEventDtoDataPage;
class SpaceExportDto;
class SpaceImportDto;
class SpaceOptions;
class SpaceTicketDto;
class StartObserveRequest;
class StartRedriveRequest;
class StartRedriveResult;
class StringDataPage;
class Style;
class TicketStatus;
class ValidateSecretRequest;
class VendorProviderInfo;
class VersionMatrix;



/// <summary>
/// Request body for activating the chaos monkey on a queue
/// </summary>
class ActivateChaosRequest : public csp::services::DtoBase
{
public:
	ActivateChaosRequest();
	virtual ~ActivateChaosRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Percentage chance (1-100) that a message will be failed. Defaults to 5.
	/// </summary>
	int32_t GetFailureLikelihood() const;
	void SetFailureLikelihood(int32_t Value);
	bool HasFailureLikelihood() const;

	/// <summary>
	/// How long the chaos monkey stays active, in minutes. Defaults to 30.
	/// </summary>
	int32_t GetDurationMinutes() const;
	void SetDurationMinutes(int32_t Value);
	bool HasDurationMinutes() const;


protected:
	std::optional<int32_t> m_FailureLikelihood;
	std::optional<int32_t> m_DurationMinutes;
};

/// <summary>
/// Request to server when class is completed
/// </summary>
class AloClassCompletedRequest : public csp::services::DtoBase
{
public:
	AloClassCompletedRequest();
	virtual ~AloClassCompletedRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the user who completed the class
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Id of the Class Definition Prototype
	/// </summary>
	utility::string_t GetClassDefinitionId() const;
	bool HasClassDefinitionId() const;

	/// <summary>
	/// Optional: Id of the parent Series (Plan)
	/// </summary>
	utility::string_t GetSeriesPlanId() const;
	void SetSeriesPlanId(const utility::string_t& Value);
	bool HasSeriesPlanId() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_ClassDefinitionId;
	std::optional<utility::string_t> m_SeriesPlanId;
};

/// <summary>
/// Response from server when class is completed
/// </summary>
class AloClassCompletedResponse : public csp::services::DtoBase
{
public:
	AloClassCompletedResponse();
	virtual ~AloClassCompletedResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Ids of the Badges earned
	/// </summary>
	const std::vector<utility::string_t>& GetBadgeIdsEarned() const;
	void SetBadgeIdsEarned(const std::vector<utility::string_t>& Value);
	bool HasBadgeIdsEarned() const;


protected:
	std::optional<std::vector<utility::string_t>> m_BadgeIdsEarned;
};

/// <summary>
/// An enum describing the different altitudes a line can inhabit
/// </summary>
class AltitudeMode : public csp::services::EnumBase
{
public:
	AltitudeMode();
	virtual ~AltitudeMode();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eAltitudeMode
	{
		RELATIVETOGROUND,
		ABSOLUTE,
		RELATIVETOSEAFLOOR,
		CLAMPTOGROUND,
		CLAMPTOSEAFLOOR

	};

	eAltitudeMode GetValue() const;
	void SetValue(eAltitudeMode const Value);

protected:
	eAltitudeMode Value = {};
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
/// Application Settings data transfer object
/// </summary>
class ApplicationSettingsDto : public csp::services::DtoBase
{
public:
	ApplicationSettingsDto();
	virtual ~ApplicationSettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the application for which these settings apply
	/// </summary>
	utility::string_t GetApplicationName() const;
	bool HasApplicationName() const;

	/// <summary>
	/// Context of the application settings
	/// </summary>
	utility::string_t GetContext() const;
	bool HasContext() const;

	/// <summary>
	/// Whether the settings can be retrieved anonymously
	/// </summary>
	bool GetAllowAnonymous() const;
	void SetAllowAnonymous(const bool& Value);
	bool HasAllowAnonymous() const;

	/// <summary>
	/// Settings of the application
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSettings() const;
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


protected:
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<utility::string_t> m_Context;
	std::optional<bool> m_AllowAnonymous;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
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
/// DTO for audit trail list/detail views in Inspector Musubi.
/// Normalizes pre-enrichment records (where UserEmail/TenantName may be in EventData)
/// with post-enrichment records (where they are top-level fields).
/// </summary>
class AuditTrailDto : public csp::services::DtoBase
{
public:
	AuditTrailDto();
	virtual ~AuditTrailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Document ID.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// When the audit record was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Event type (e.g., "SuperAdmin.LockAccount", "Auth.Login").
	/// </summary>
	utility::string_t GetEventType() const;
	void SetEventType(const utility::string_t& Value);
	bool HasEventType() const;

	/// <summary>
	/// ID of the acting user.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Email of the acting user.
	/// </summary>
	utility::string_t GetUserEmail() const;
	void SetUserEmail(const utility::string_t& Value);
	bool HasUserEmail() const;

	/// <summary>
	/// Tenant context for the action.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Client IP address.
	/// </summary>
	utility::string_t GetIpAddress() const;
	void SetIpAddress(const utility::string_t& Value);
	bool HasIpAddress() const;

	/// <summary>
	/// Controller that handled the request.
	/// </summary>
	utility::string_t GetController() const;
	void SetController(const utility::string_t& Value);
	bool HasController() const;

	/// <summary>
	/// Action method that handled the request.
	/// </summary>
	utility::string_t GetAction() const;
	void SetAction(const utility::string_t& Value);
	bool HasAction() const;

	/// <summary>
	/// HTTP method (GET, POST, PUT, DELETE).
	/// </summary>
	utility::string_t GetHttpMethod() const;
	void SetHttpMethod(const utility::string_t& Value);
	bool HasHttpMethod() const;

	/// <summary>
	/// Request path.
	/// </summary>
	utility::string_t GetRoute() const;
	void SetRoute(const utility::string_t& Value);
	bool HasRoute() const;

	/// <summary>
	/// HTTP response status code.
	/// </summary>
	int32_t GetStatusCode() const;
	void SetStatusCode(int32_t Value);
	bool HasStatusCode() const;

	/// <summary>
	/// Additional event-specific key-value data.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetEventData() const;
	void SetEventData(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasEventData() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_EventType;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_UserEmail;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_IpAddress;
	std::optional<utility::string_t> m_Controller;
	std::optional<utility::string_t> m_Action;
	std::optional<utility::string_t> m_HttpMethod;
	std::optional<utility::string_t> m_Route;
	std::optional<int32_t> m_StatusCode;
	std::optional<std::map<utility::string_t, utility::string_t>> m_EventData;
};

class AuditTrailDtoDataPage : public csp::services::DtoBase
{
public:
	AuditTrailDtoDataPage();
	virtual ~AuditTrailDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<AuditTrailDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<AuditTrailDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<AuditTrailDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// DTO for carrying authentication information.
/// </summary>
class AuthDto : public csp::services::DtoBase
{
public:
	AuthDto();
	virtual ~AuthDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for the user
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// The token for accessing the API
	/// </summary>
	utility::string_t GetAccessToken() const;
	void SetAccessToken(const utility::string_t& Value);
	bool HasAccessToken() const;

	/// <summary>
	/// The date and time the access token expires
	/// </summary>
	utility::string_t GetAccessTokenExpiresAt() const;
	void SetAccessTokenExpiresAt(const utility::string_t& Value);
	bool HasAccessTokenExpiresAt() const;

	/// <summary>
	/// The refresh token to use to request a new access token
	/// </summary>
	utility::string_t GetRefreshToken() const;
	void SetRefreshToken(const utility::string_t& Value);
	bool HasRefreshToken() const;

	/// <summary>
	/// The date and time the refresh token expires
	/// </summary>
	utility::string_t GetRefreshTokenExpiresAt() const;
	void SetRefreshTokenExpiresAt(const utility::string_t& Value);
	bool HasRefreshTokenExpiresAt() const;

	/// <summary>
	/// Ids of the user's organizations
	/// </summary>
	const std::vector<utility::string_t>& GetOrganizationIds() const;
	void SetOrganizationIds(const std::vector<utility::string_t>& Value);
	bool HasOrganizationIds() const;

	/// <summary>
	/// The ID of the device which has been granted access.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;

	std::shared_ptr<DefaultSettings> GetDefaultSettings() const;
	void SetDefaultSettings(const std::shared_ptr<DefaultSettings>& Value);
	bool HasDefaultSettings() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_AccessToken;
	std::optional<utility::string_t> m_AccessTokenExpiresAt;
	std::optional<utility::string_t> m_RefreshToken;
	std::optional<utility::string_t> m_RefreshTokenExpiresAt;
	std::optional<std::vector<utility::string_t>> m_OrganizationIds;
	std::optional<utility::string_t> m_DeviceId;
	std::optional<std::shared_ptr<DefaultSettings>> m_DefaultSettings;
};

/// <summary>
/// Request to assign or unassign a bug report.
/// </summary>
class BugReportAssignRequest : public csp::services::DtoBase
{
public:
	BugReportAssignRequest();
	virtual ~BugReportAssignRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Email of the magnopus-admin to assign, or null/empty to unassign.
	/// </summary>
	utility::string_t GetAssignTo() const;
	void SetAssignTo(const utility::string_t& Value);
	bool HasAssignTo() const;


protected:
	std::optional<utility::string_t> m_AssignTo;
};

/// <summary>
/// Request to create a bug report from Inspector Musubi.
/// </summary>
class BugReportCreateRequest : public csp::services::DtoBase
{
public:
	BugReportCreateRequest();
	virtual ~BugReportCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Short title of the bug.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Detailed description of the issue.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Steps to reproduce the bug.
	/// </summary>
	utility::string_t GetStepsToReproduce() const;
	void SetStepsToReproduce(const utility::string_t& Value);
	bool HasStepsToReproduce() const;

	/// <summary>
	/// Inspector hash route at the time of filing (auto-populated by frontend).
	/// </summary>
	utility::string_t GetRoute() const;
	void SetRoute(const utility::string_t& Value);
	bool HasRoute() const;

	/// <summary>
	/// Browser viewport dimensions (auto-populated by frontend).
	/// </summary>
	utility::string_t GetViewport() const;
	void SetViewport(const utility::string_t& Value);
	bool HasViewport() const;

	/// <summary>
	/// Screenshot as base64 JPEG string (nullable).
	/// </summary>
	utility::string_t GetScreenshotBase64() const;
	void SetScreenshotBase64(const utility::string_t& Value);
	bool HasScreenshotBase64() const;

	/// <summary>
	/// Report type: "Bug" or "Feature". Defaults to "Bug" if omitted.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;


protected:
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_StepsToReproduce;
	std::optional<utility::string_t> m_Route;
	std::optional<utility::string_t> m_Viewport;
	std::optional<utility::string_t> m_ScreenshotBase64;
	std::optional<utility::string_t> m_Type;
};

/// <summary>
/// Full bug report DTO for detail views.
/// </summary>
class BugReportDetailDto : public csp::services::DtoBase
{
public:
	BugReportDetailDto();
	virtual ~BugReportDetailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Detailed description of the issue.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Steps to reproduce the bug.
	/// </summary>
	utility::string_t GetStepsToReproduce() const;
	void SetStepsToReproduce(const utility::string_t& Value);
	bool HasStepsToReproduce() const;

	/// <summary>
	/// User ID from the reporter's JWT.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Browser User-Agent string.
	/// </summary>
	utility::string_t GetUserAgent() const;
	void SetUserAgent(const utility::string_t& Value);
	bool HasUserAgent() const;

	/// <summary>
	/// Browser viewport dimensions.
	/// </summary>
	utility::string_t GetViewport() const;
	void SetViewport(const utility::string_t& Value);
	bool HasViewport() const;

	/// <summary>
	/// Email of the admin who acknowledged the report.
	/// </summary>
	utility::string_t GetAcknowledgedBy() const;
	void SetAcknowledgedBy(const utility::string_t& Value);
	bool HasAcknowledgedBy() const;

	/// <summary>
	/// Email of the admin who resolved the report.
	/// </summary>
	utility::string_t GetResolvedBy() const;
	void SetResolvedBy(const utility::string_t& Value);
	bool HasResolvedBy() const;

	/// <summary>
	/// Email of who assigned the report.
	/// </summary>
	utility::string_t GetAssignedBy() const;
	void SetAssignedBy(const utility::string_t& Value);
	bool HasAssignedBy() const;

	/// <summary>
	/// When the report was assigned.
	/// </summary>
	utility::string_t GetAssignedAt() const;
	void SetAssignedAt(const utility::string_t& Value);
	bool HasAssignedAt() const;

	/// <summary>
	/// Unique identifier.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Short title of the bug.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Current status: Open, Acknowledged, or Resolved.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Report type: "Bug" or "Feature".
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Tenant name from the reporter's JWT.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Email of the user who filed the report.
	/// </summary>
	utility::string_t GetUserEmail() const;
	void SetUserEmail(const utility::string_t& Value);
	bool HasUserEmail() const;

	/// <summary>
	/// Inspector hash route at time of filing.
	/// </summary>
	utility::string_t GetRoute() const;
	void SetRoute(const utility::string_t& Value);
	bool HasRoute() const;

	/// <summary>
	/// Whether a screenshot is attached.
	/// </summary>
	bool GetHasScreenshot() const;
	void SetHasScreenshot(const bool& Value);
	bool HasHasScreenshot() const;

	/// <summary>
	/// When the report was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the report was acknowledged.
	/// </summary>
	utility::string_t GetAcknowledgedAt() const;
	void SetAcknowledgedAt(const utility::string_t& Value);
	bool HasAcknowledgedAt() const;

	/// <summary>
	/// When the report was resolved.
	/// </summary>
	utility::string_t GetResolvedAt() const;
	void SetResolvedAt(const utility::string_t& Value);
	bool HasResolvedAt() const;

	/// <summary>
	/// Email of the assigned magnopus-admin, or null.
	/// </summary>
	utility::string_t GetAssignedTo() const;
	void SetAssignedTo(const utility::string_t& Value);
	bool HasAssignedTo() const;


protected:
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_StepsToReproduce;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_UserAgent;
	std::optional<utility::string_t> m_Viewport;
	std::optional<utility::string_t> m_AcknowledgedBy;
	std::optional<utility::string_t> m_ResolvedBy;
	std::optional<utility::string_t> m_AssignedBy;
	std::optional<utility::string_t> m_AssignedAt;
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_UserEmail;
	std::optional<utility::string_t> m_Route;
	std::optional<bool> m_HasScreenshot;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_AcknowledgedAt;
	std::optional<utility::string_t> m_ResolvedAt;
	std::optional<utility::string_t> m_AssignedTo;
};

/// <summary>
/// Lightweight bug report DTO for list views (no screenshot data).
/// </summary>
class BugReportListDto : public csp::services::DtoBase
{
public:
	BugReportListDto();
	virtual ~BugReportListDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Short title of the bug.
	/// </summary>
	utility::string_t GetTitle() const;
	void SetTitle(const utility::string_t& Value);
	bool HasTitle() const;

	/// <summary>
	/// Current status: Open, Acknowledged, or Resolved.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Report type: "Bug" or "Feature".
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Tenant name from the reporter's JWT.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Email of the user who filed the report.
	/// </summary>
	utility::string_t GetUserEmail() const;
	void SetUserEmail(const utility::string_t& Value);
	bool HasUserEmail() const;

	/// <summary>
	/// Inspector hash route at time of filing.
	/// </summary>
	utility::string_t GetRoute() const;
	void SetRoute(const utility::string_t& Value);
	bool HasRoute() const;

	/// <summary>
	/// Whether a screenshot is attached.
	/// </summary>
	bool GetHasScreenshot() const;
	void SetHasScreenshot(const bool& Value);
	bool HasHasScreenshot() const;

	/// <summary>
	/// When the report was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the report was acknowledged.
	/// </summary>
	utility::string_t GetAcknowledgedAt() const;
	void SetAcknowledgedAt(const utility::string_t& Value);
	bool HasAcknowledgedAt() const;

	/// <summary>
	/// When the report was resolved.
	/// </summary>
	utility::string_t GetResolvedAt() const;
	void SetResolvedAt(const utility::string_t& Value);
	bool HasResolvedAt() const;

	/// <summary>
	/// Email of the assigned magnopus-admin, or null.
	/// </summary>
	utility::string_t GetAssignedTo() const;
	void SetAssignedTo(const utility::string_t& Value);
	bool HasAssignedTo() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_UserEmail;
	std::optional<utility::string_t> m_Route;
	std::optional<bool> m_HasScreenshot;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_AcknowledgedAt;
	std::optional<utility::string_t> m_ResolvedAt;
	std::optional<utility::string_t> m_AssignedTo;
};

/// <summary>
/// Paged response for bug report list queries.
/// </summary>
class BugReportListResponse : public csp::services::DtoBase
{
public:
	BugReportListResponse();
	virtual ~BugReportListResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Page of bug report items.
	/// </summary>
	const std::vector<std::shared_ptr<BugReportListDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<BugReportListDto>>& Value);
	bool HasItems() const;

	/// <summary>
	/// Total matching count (ignoring pagination).
	/// </summary>
	int64_t GetTotalCount() const;
	void SetTotalCount(int64_t Value);
	bool HasTotalCount() const;

	/// <summary>
	/// Number of items skipped.
	/// </summary>
	int32_t GetSkip() const;
	void SetSkip(int32_t Value);
	bool HasSkip() const;

	/// <summary>
	/// Page size.
	/// </summary>
	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;


protected:
	std::optional<std::vector<std::shared_ptr<BugReportListDto>>> m_Items;
	std::optional<int64_t> m_TotalCount;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
};

/// <summary>
/// Request to update the status of a bug report.
/// </summary>
class BugReportStatusUpdateRequest : public csp::services::DtoBase
{
public:
	BugReportStatusUpdateRequest();
	virtual ~BugReportStatusUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New status: "Acknowledged" or "Resolved".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// Result of cancelling a running redrive task.
/// </summary>
class CancelRedriveResult : public csp::services::DtoBase
{
public:
	CancelRedriveResult();
	virtual ~CancelRedriveResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the cancel was successful
	/// </summary>
	bool GetSuccess() const;
	void SetSuccess(const bool& Value);
	bool HasSuccess() const;

	/// <summary>
	/// Messages already moved before cancellation
	/// </summary>
	int64_t GetApproximateNumberOfMessagesMoved() const;
	void SetApproximateNumberOfMessagesMoved(int64_t Value);
	bool HasApproximateNumberOfMessagesMoved() const;

	/// <summary>
	/// Error message if the operation failed
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;


protected:
	std::optional<bool> m_Success;
	std::optional<int64_t> m_ApproximateNumberOfMessagesMoved;
	std::optional<utility::string_t> m_Error;
};

/// <summary>
/// Chaos monkey configuration for a single queue.
/// Stored in Redis via ILayeredCache with TTL matching the user-specified duration.
/// </summary>
class ChaosMonkeyConfig : public csp::services::DtoBase
{
public:
	ChaosMonkeyConfig();
	virtual ~ChaosMonkeyConfig();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Friendly queue name (e.g., "GenericNode")
	/// </summary>
	utility::string_t GetQn() const;
	void SetQn(const utility::string_t& Value);
	bool HasQn() const;

	/// <summary>
	/// Whether chaos is currently active for this queue
	/// </summary>
	bool GetEn() const;
	void SetEn(const bool& Value);
	bool HasEn() const;

	/// <summary>
	/// Failure likelihood 1–10 (maps to 10%–100%)
	/// </summary>
	int32_t GetFl() const;
	void SetFl(int32_t Value);
	bool HasFl() const;

	/// <summary>
	/// When the chaos was activated (UTC)
	/// </summary>
	utility::string_t GetAa() const;
	void SetAa(const utility::string_t& Value);
	bool HasAa() const;

	/// <summary>
	/// When it will auto-expire (UTC)
	/// </summary>
	utility::string_t GetEa() const;
	void SetEa(const utility::string_t& Value);
	bool HasEa() const;

	/// <summary>
	/// User who activated it
	/// </summary>
	utility::string_t GetAb() const;
	void SetAb(const utility::string_t& Value);
	bool HasAb() const;


protected:
	std::optional<utility::string_t> m_Qn;
	std::optional<bool> m_En;
	std::optional<int32_t> m_Fl;
	std::optional<utility::string_t> m_Aa;
	std::optional<utility::string_t> m_Ea;
	std::optional<utility::string_t> m_Ab;
};

/// <summary>
/// collection of stats about the checkpoint
/// </summary>
class CheckpointStats : public csp::services::DtoBase
{
public:
	CheckpointStats();
	virtual ~CheckpointStats();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Size of the uncompressed checkpoint file in kilobytes
	/// </summary>
	int64_t GetCheckpointSizeInKilobytes() const;
	void SetCheckpointSizeInKilobytes(int64_t Value);
	bool HasCheckpointSizeInKilobytes() const;

	/// <summary>
	/// Count of Prototypes, Asset Details, Multiplayer Objects, Scopes, Sequences, Anchors, etc
	/// </summary>
	const std::map<utility::string_t, int32_t>& GetTypeCounts() const;
	void SetTypeCounts(const std::map<utility::string_t, int32_t>& Value);
	bool HasTypeCounts() const;

	/// <summary>
	/// Sum of the total size in kilobytes of all uploaded files - ie, not external URI assets
	/// </summary>
	int64_t GetTotalSizeOfAssetsInKilobytes() const;
	void SetTotalSizeOfAssetsInKilobytes(int64_t Value);
	bool HasTotalSizeOfAssetsInKilobytes() const;

	/// <summary>
	/// Tally of how many asset details of each Magnopus.Service.Prototype.Dtos.AssetDetailDto.AssetType there are
	/// </summary>
	const std::map<utility::string_t, int32_t>& GetAssetTypeCounts() const;
	void SetAssetTypeCounts(const std::map<utility::string_t, int32_t>& Value);
	bool HasAssetTypeCounts() const;


protected:
	std::optional<int64_t> m_CheckpointSizeInKilobytes;
	std::optional<std::map<utility::string_t, int32_t>> m_TypeCounts;
	std::optional<int64_t> m_TotalSizeOfAssetsInKilobytes;
	std::optional<std::map<utility::string_t, int32_t>> m_AssetTypeCounts;
};

/// <summary>
/// State of the Coalescence
/// </summary>
class CoalescenceState : public csp::services::EnumBase
{
public:
	CoalescenceState();
	virtual ~CoalescenceState();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eCoalescenceState
	{
		NOTSTARTED,
		STARTED,
		COMPLETIONRAISED,
		COMPLETED,
		ERRORED,
		TIMEDOUT,
		COMPLETIONRAISEDAFTERTIMEOUT

	};

	eCoalescenceState GetValue() const;
	void SetValue(eCoalescenceState const Value);

protected:
	eCoalescenceState Value = {};
};

/// <summary>
/// Contains data to coalesce fan outs
/// </summary>
class CoalescingFanOutDocument : public csp::services::DtoBase
{
public:
	CoalescingFanOutDocument();
	virtual ~CoalescingFanOutDocument();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The type of operation - used to delegate the completion to a type-specific implementation
	/// </summary>
	utility::string_t GetType() const;
	bool HasType() const;

	/// <summary>
	/// Associated SpanId
	/// </summary>
	utility::string_t GetActivitySpanId() const;
	bool HasActivitySpanId() const;

	/// <summary>
	/// User Id who initiated the fan out
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Maximum amount of time to wait before considering the completion to be error
	/// </summary>
	utility::string_t GetMaximumRuntime() const;
	bool HasMaximumRuntime() const;

	/// <summary>
	/// Count of processes expected to report completion if "all goes well"
	/// </summary>
	int32_t GetExpectedCount() const;
	bool HasExpectedCount() const;

	/// <summary>
	/// Count of processes that reported their completion
	/// </summary>
	int32_t GetCompletedCount() const;
	void SetCompletedCount(int32_t Value);
	bool HasCompletedCount() const;

	std::shared_ptr<CoalescenceState> GetCoalescingState() const;
	void SetCoalescingState(const std::shared_ptr<CoalescenceState>& Value);
	bool HasCoalescingState() const;

	/// <summary>
	/// An attempt to capture relevant error data
	/// </summary>
	utility::string_t GetErrorReason() const;
	void SetErrorReason(const utility::string_t& Value);
	bool HasErrorReason() const;

	/// <summary>
	/// Any state that needs to be sent along
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetPipelineData() const;
	void SetPipelineData(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasPipelineData() const;

	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	bool GetIsSeeded() const;
	bool HasIsSeeded() const;

	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	utility::string_t GetId() const;
	bool HasId() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_ActivitySpanId;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_MaximumRuntime;
	std::optional<int32_t> m_ExpectedCount;
	std::optional<int32_t> m_CompletedCount;
	std::optional<std::shared_ptr<CoalescenceState>> m_CoalescingState;
	std::optional<utility::string_t> m_ErrorReason;
	std::optional<std::map<utility::string_t, utility::string_t>> m_PipelineData;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedBy;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<bool> m_IsSeeded;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_Id;
};

/// <summary>
/// Output data from a completed node
/// </summary>
class CompletedNodeOutput : public csp::services::DtoBase
{
public:
	CompletedNodeOutput();
	virtual ~CompletedNodeOutput();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node identifier
	/// </summary>
	utility::string_t GetNodeId() const;
	void SetNodeId(const utility::string_t& Value);
	bool HasNodeId() const;

	/// <summary>
	/// Node output data (URLs for large assets)
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& GetData() const;
	void SetData(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value);
	bool HasData() const;


protected:
	std::optional<utility::string_t> m_NodeId;
	std::optional<std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>> m_Data;
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
/// Daily execution count for usage charts
/// </summary>
class DailyExecutionCount : public csp::services::DtoBase
{
public:
	DailyExecutionCount();
	virtual ~DailyExecutionCount();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Number of executions on this date
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// Daily key usage count for usage charts (tenant-aware)
/// </summary>
class DailyKeyUsage : public csp::services::DtoBase
{
public:
	DailyKeyUsage();
	virtual ~DailyKeyUsage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Secret key name (e.g., "GOOGLE_APPLICATION_CREDENTIALS")
	/// </summary>
	utility::string_t GetSecretKey() const;
	void SetSecretKey(const utility::string_t& Value);
	bool HasSecretKey() const;

	/// <summary>
	/// Tenant that consumed this key
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Number of completed node executions requiring this key
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<utility::string_t> m_SecretKey;
	std::optional<utility::string_t> m_TenantName;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// Daily node type usage count for usage charts
/// </summary>
class DailyNodeTypeUsage : public csp::services::DtoBase
{
public:
	DailyNodeTypeUsage();
	virtual ~DailyNodeTypeUsage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Node type label (e.g., "Gemini Flash2.5 Image")
	/// </summary>
	utility::string_t GetNodeType() const;
	void SetNodeType(const utility::string_t& Value);
	bool HasNodeType() const;

	/// <summary>
	/// Number of node executions on this date for this node type
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<utility::string_t> m_NodeType;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// Daily queue usage count for usage charts
/// </summary>
class DailyQueueUsage : public csp::services::DtoBase
{
public:
	DailyQueueUsage();
	virtual ~DailyQueueUsage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Queue name (e.g., "GenericNode")
	/// </summary>
	utility::string_t GetQueue() const;
	void SetQueue(const utility::string_t& Value);
	bool HasQueue() const;

	/// <summary>
	/// Number of node executions on this date for this queue
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<utility::string_t> m_Queue;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// Daily sustained activity hours for usage charts.
/// Each entry represents the total sustained activity hours for a single day.
/// </summary>
class DailySustainedActivityHours : public csp::services::DtoBase
{
public:
	DailySustainedActivityHours();
	virtual ~DailySustainedActivityHours();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// Sustained activity hours for this date
	/// </summary>
	float GetHours() const;
	void SetHours(float Value);
	bool HasHours() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<float> m_Hours;
};

/// <summary>
/// Default settings of the tenant
/// </summary>
class DefaultSettings : public csp::services::DtoBase
{
public:
	DefaultSettings();
	virtual ~DefaultSettings();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Default application settings of the tenant
	/// </summary>
	const std::vector<std::shared_ptr<ApplicationSettingsDto>>& GetDefaultApplicationSettings() const;
	void SetDefaultApplicationSettings(const std::vector<std::shared_ptr<ApplicationSettingsDto>>& Value);
	bool HasDefaultApplicationSettings() const;

	/// <summary>
	/// Default user settings of the tenant
	/// </summary>
	const std::vector<std::shared_ptr<SettingsDto>>& GetDefaultUserSettings() const;
	void SetDefaultUserSettings(const std::vector<std::shared_ptr<SettingsDto>>& Value);
	bool HasDefaultUserSettings() const;


protected:
	std::optional<std::vector<std::shared_ptr<ApplicationSettingsDto>>> m_DefaultApplicationSettings;
	std::optional<std::vector<std::shared_ptr<SettingsDto>>> m_DefaultUserSettings;
};

/// <summary>
/// Dead-letter queue info for a parent queue.
/// </summary>
class DlqInfo : public csp::services::DtoBase
{
public:
	DlqInfo();
	virtual ~DlqInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Number of messages in the DLQ (permanently failed work)
	/// </summary>
	int32_t GetD() const;
	void SetD(int32_t Value);
	bool HasD() const;

	/// <summary>
	/// Full SQS URL of the DLQ
	/// </summary>
	utility::string_t GetQu() const;
	void SetQu(const utility::string_t& Value);
	bool HasQu() const;

	/// <summary>
	/// Full ARN of the DLQ (needed for StartMessageMoveTask)
	/// </summary>
	utility::string_t GetQa() const;
	void SetQa(const utility::string_t& Value);
	bool HasQa() const;


protected:
	std::optional<int32_t> m_D;
	std::optional<utility::string_t> m_Qu;
	std::optional<utility::string_t> m_Qa;
};

/// <summary>
/// A request that includes the needed data to duplicate a space
/// </summary>
class DuplicateSpaceOptions : public csp::services::DtoBase
{
public:
	DuplicateSpaceOptions();
	virtual ~DuplicateSpaceOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant name that the space belongs to
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// The id of the space to duplicate
	/// </summary>
	utility::string_t GetSpaceId() const;
	void SetSpaceId(const utility::string_t& Value);
	bool HasSpaceId() const;

	/// <summary>
	/// The id of the coalescence to duplicate
	/// </summary>
	utility::string_t GetCoalescingId() const;
	bool HasCoalescingId() const;

	/// <summary>
	/// The ownerId (userId) that this new space will be assigned to
	/// </summary>
	utility::string_t GetNewGroupOwnerId() const;
	void SetNewGroupOwnerId(const utility::string_t& Value);
	bool HasNewGroupOwnerId() const;

	/// <summary>
	/// The groupIds we wish to copy the userList from, to apply to the duplicated space
	/// </summary>
	const std::vector<utility::string_t>& GetMemberGroupIds() const;
	void SetMemberGroupIds(const std::vector<utility::string_t>& Value);
	bool HasMemberGroupIds() const;

	/// <summary>
	/// THe user that is requesting the space duplication
	/// </summary>
	utility::string_t GetRequestUserId() const;
	bool HasRequestUserId() const;

	/// <summary>
	/// The unique name for the new space
	/// </summary>
	utility::string_t GetNewUniqueName() const;
	void SetNewUniqueName(const utility::string_t& Value);
	bool HasNewUniqueName() const;

	/// <summary>
	/// If this space requires an invite to join
	/// </summary>
	bool GetRequiresInvite() const;
	void SetRequiresInvite(const bool& Value);
	bool HasRequiresInvite() const;

	/// <summary>
	/// If this space is discoverable
	/// </summary>
	bool GetDiscoverable() const;
	void SetDiscoverable(const bool& Value);
	bool HasDiscoverable() const;

	/// <summary>
	/// If true, the ExternalURLs of the copied assets will point to the original asset's URL and the actual files will not be copied
	/// </summary>
	bool GetShallowCopy() const;
	void SetShallowCopy(const bool& Value);
	bool HasShallowCopy() const;

	/// <summary>
	/// If true, the request is immediately responded with a 200 and a message is put on the queue
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_CoalescingId;
	std::optional<utility::string_t> m_NewGroupOwnerId;
	std::optional<std::vector<utility::string_t>> m_MemberGroupIds;
	std::optional<utility::string_t> m_RequestUserId;
	std::optional<utility::string_t> m_NewUniqueName;
	std::optional<bool> m_RequiresInvite;
	std::optional<bool> m_Discoverable;
	std::optional<bool> m_ShallowCopy;
	std::optional<bool> m_AsyncCall;
};

/// <summary>
/// Detailed DTO for execution detail view
/// </summary>
class ExecutionDetailDto : public csp::services::DtoBase
{
public:
	ExecutionDetailDto();
	virtual ~ExecutionDetailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Number of connections between nodes in the graph.
	/// </summary>
	int32_t GetCc() const;
	void SetCc(int32_t Value);
	bool HasCc() const;

	/// <summary>
	/// ID of the node that caused the failure, if any.
	/// </summary>
	utility::string_t GetFni() const;
	void SetFni(const utility::string_t& Value);
	bool HasFni() const;

	/// <summary>
	/// Error message if the execution failed.
	/// </summary>
	utility::string_t GetErr() const;
	void SetErr(const utility::string_t& Value);
	bool HasErr() const;

	/// <summary>
	/// S3 bucket where execution artifacts are stored.
	/// </summary>
	utility::string_t GetEb() const;
	void SetEb(const utility::string_t& Value);
	bool HasEb() const;

	/// <summary>
	/// S3 key prefix for execution artifacts.
	/// </summary>
	utility::string_t GetSp() const;
	void SetSp(const utility::string_t& Value);
	bool HasSp() const;

	/// <summary>
	/// Per-node execution summaries.
	/// </summary>
	const std::vector<std::shared_ptr<NodeSummaryDto>>& GetNs() const;
	void SetNs(const std::vector<std::shared_ptr<NodeSummaryDto>>& Value);
	bool HasNs() const;

	/// <summary>
	/// Input parameters supplied to the graph execution.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetPm() const;
	void SetPm(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasPm() const;

	/// <summary>
	/// Unique identifier for the execution.
	/// </summary>
	utility::string_t GetEid() const;
	void SetEid(const utility::string_t& Value);
	bool HasEid() const;

	/// <summary>
	/// Tenant that owns the execution.
	/// </summary>
	utility::string_t GetTn() const;
	void SetTn(const utility::string_t& Value);
	bool HasTn() const;

	/// <summary>
	/// ID of the user who triggered the execution.
	/// </summary>
	utility::string_t GetUid() const;
	void SetUid(const utility::string_t& Value);
	bool HasUid() const;

	/// <summary>
	/// Hash of the graph definition.
	/// </summary>
	utility::string_t GetGh() const;
	void SetGh(const utility::string_t& Value);
	bool HasGh() const;

	/// <summary>
	/// Human-readable name of the graph.
	/// </summary>
	utility::string_t GetGn() const;
	void SetGn(const utility::string_t& Value);
	bool HasGn() const;

	/// <summary>
	/// Total number of nodes in the graph.
	/// </summary>
	int32_t GetNc() const;
	void SetNc(int32_t Value);
	bool HasNc() const;

	/// <summary>
	/// Current execution status (e.g. running, completed, failed).
	/// </summary>
	utility::string_t GetS() const;
	void SetS(const utility::string_t& Value);
	bool HasS() const;

	/// <summary>
	/// Execution progress as a percentage (0-100).
	/// </summary>
	int32_t GetP() const;
	void SetP(int32_t Value);
	bool HasP() const;

	/// <summary>
	/// When the execution was created.
	/// </summary>
	utility::string_t GetCa() const;
	void SetCa(const utility::string_t& Value);
	bool HasCa() const;

	/// <summary>
	/// When the execution started running.
	/// </summary>
	utility::string_t GetSa() const;
	void SetSa(const utility::string_t& Value);
	bool HasSa() const;

	/// <summary>
	/// When the execution completed.
	/// </summary>
	utility::string_t GetCoa() const;
	void SetCoa(const utility::string_t& Value);
	bool HasCoa() const;

	/// <summary>
	/// Total wall-clock duration of the execution.
	/// </summary>
	utility::string_t GetDur() const;
	void SetDur(const utility::string_t& Value);
	bool HasDur() const;


protected:
	std::optional<int32_t> m_Cc;
	std::optional<utility::string_t> m_Fni;
	std::optional<utility::string_t> m_Err;
	std::optional<utility::string_t> m_Eb;
	std::optional<utility::string_t> m_Sp;
	std::optional<std::vector<std::shared_ptr<NodeSummaryDto>>> m_Ns;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Pm;
	std::optional<utility::string_t> m_Eid;
	std::optional<utility::string_t> m_Tn;
	std::optional<utility::string_t> m_Uid;
	std::optional<utility::string_t> m_Gh;
	std::optional<utility::string_t> m_Gn;
	std::optional<int32_t> m_Nc;
	std::optional<utility::string_t> m_S;
	std::optional<int32_t> m_P;
	std::optional<utility::string_t> m_Ca;
	std::optional<utility::string_t> m_Sa;
	std::optional<utility::string_t> m_Coa;
	std::optional<utility::string_t> m_Dur;
};

/// <summary>
/// Summary DTO for execution list display
/// </summary>
class ExecutionDto : public csp::services::DtoBase
{
public:
	ExecutionDto();
	virtual ~ExecutionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for the execution.
	/// </summary>
	utility::string_t GetEid() const;
	void SetEid(const utility::string_t& Value);
	bool HasEid() const;

	/// <summary>
	/// Tenant that owns the execution.
	/// </summary>
	utility::string_t GetTn() const;
	void SetTn(const utility::string_t& Value);
	bool HasTn() const;

	/// <summary>
	/// ID of the user who triggered the execution.
	/// </summary>
	utility::string_t GetUid() const;
	void SetUid(const utility::string_t& Value);
	bool HasUid() const;

	/// <summary>
	/// Hash of the graph definition.
	/// </summary>
	utility::string_t GetGh() const;
	void SetGh(const utility::string_t& Value);
	bool HasGh() const;

	/// <summary>
	/// Human-readable name of the graph.
	/// </summary>
	utility::string_t GetGn() const;
	void SetGn(const utility::string_t& Value);
	bool HasGn() const;

	/// <summary>
	/// Total number of nodes in the graph.
	/// </summary>
	int32_t GetNc() const;
	void SetNc(int32_t Value);
	bool HasNc() const;

	/// <summary>
	/// Current execution status (e.g. running, completed, failed).
	/// </summary>
	utility::string_t GetS() const;
	void SetS(const utility::string_t& Value);
	bool HasS() const;

	/// <summary>
	/// Execution progress as a percentage (0-100).
	/// </summary>
	int32_t GetP() const;
	void SetP(int32_t Value);
	bool HasP() const;

	/// <summary>
	/// When the execution was created.
	/// </summary>
	utility::string_t GetCa() const;
	void SetCa(const utility::string_t& Value);
	bool HasCa() const;

	/// <summary>
	/// When the execution started running.
	/// </summary>
	utility::string_t GetSa() const;
	void SetSa(const utility::string_t& Value);
	bool HasSa() const;

	/// <summary>
	/// When the execution completed.
	/// </summary>
	utility::string_t GetCoa() const;
	void SetCoa(const utility::string_t& Value);
	bool HasCoa() const;

	/// <summary>
	/// Total wall-clock duration of the execution.
	/// </summary>
	utility::string_t GetDur() const;
	void SetDur(const utility::string_t& Value);
	bool HasDur() const;


protected:
	std::optional<utility::string_t> m_Eid;
	std::optional<utility::string_t> m_Tn;
	std::optional<utility::string_t> m_Uid;
	std::optional<utility::string_t> m_Gh;
	std::optional<utility::string_t> m_Gn;
	std::optional<int32_t> m_Nc;
	std::optional<utility::string_t> m_S;
	std::optional<int32_t> m_P;
	std::optional<utility::string_t> m_Ca;
	std::optional<utility::string_t> m_Sa;
	std::optional<utility::string_t> m_Coa;
	std::optional<utility::string_t> m_Dur;
};

/// <summary>
/// Response containing a list of executions with pagination info
/// </summary>
class ExecutionListResponse : public csp::services::DtoBase
{
public:
	ExecutionListResponse();
	virtual ~ExecutionListResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// List of execution summaries.
	/// </summary>
	const std::vector<std::shared_ptr<ExecutionDto>>& GetI() const;
	void SetI(const std::vector<std::shared_ptr<ExecutionDto>>& Value);
	bool HasI() const;

	/// <summary>
	/// Total number of executions matching the filters.
	/// </summary>
	int64_t GetTc() const;
	void SetTc(int64_t Value);
	bool HasTc() const;

	/// <summary>
	/// Number of items skipped for pagination.
	/// </summary>
	int32_t GetSk() const;
	void SetSk(int32_t Value);
	bool HasSk() const;

	/// <summary>
	/// Maximum number of items returned.
	/// </summary>
	int32_t GetLm() const;
	void SetLm(int32_t Value);
	bool HasLm() const;

	/// <summary>
	/// Server timestamp (unix ms) for incremental polling. Pass as modifiedSince on next request.
	/// </summary>
	int64_t GetSt() const;
	void SetSt(int64_t Value);
	bool HasSt() const;


protected:
	std::optional<std::vector<std::shared_ptr<ExecutionDto>>> m_I;
	std::optional<int64_t> m_Tc;
	std::optional<int32_t> m_Sk;
	std::optional<int32_t> m_Lm;
	std::optional<int64_t> m_St;
};

/// <summary>
/// Response containing execution logs
/// </summary>
class ExecutionLogsResponse : public csp::services::DtoBase
{
public:
	ExecutionLogsResponse();
	virtual ~ExecutionLogsResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// ID of the execution these logs belong to.
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// List of log entries for the execution.
	/// </summary>
	const std::vector<std::shared_ptr<LogEntryDto>>& GetLogs() const;
	void SetLogs(const std::vector<std::shared_ptr<LogEntryDto>>& Value);
	bool HasLogs() const;

	/// <summary>
	/// Total number of log entries available.
	/// </summary>
	int32_t GetTotalCount() const;
	void SetTotalCount(int32_t Value);
	bool HasTotalCount() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<std::vector<std::shared_ptr<LogEntryDto>>> m_Logs;
	std::optional<int32_t> m_TotalCount;
};

/// <summary>
/// Request body for updating execution status (called by Graph Execution Runner)
/// </summary>
class ExecutionStatusUpdateRequest : public csp::services::DtoBase
{
public:
	ExecutionStatusUpdateRequest();
	virtual ~ExecutionStatusUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New status: running, completed, failed, cancelled
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Progress percentage (0-100), optional
	/// </summary>
	int32_t GetProgress() const;
	void SetProgress(int32_t Value);
	bool HasProgress() const;

	/// <summary>
	/// Error message if status is "failed"
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;

	/// <summary>
	/// Node ID that caused the failure (if applicable)
	/// </summary>
	utility::string_t GetFailedNodeId() const;
	void SetFailedNodeId(const utility::string_t& Value);
	bool HasFailedNodeId() const;

	/// <summary>
	/// Graph-level SQS queue wait time in milliseconds.
	/// </summary>
	double GetQueueWaitMs() const;
	void SetQueueWaitMs(double Value);
	bool HasQueueWaitMs() const;


protected:
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_Progress;
	std::optional<utility::string_t> m_Error;
	std::optional<utility::string_t> m_FailedNodeId;
	std::optional<double> m_QueueWaitMs;
};

/// <summary>
/// A bucket + permissions rule in the validation request.
/// </summary>
class GacValidationBucketRule : public csp::services::DtoBase
{
public:
	GacValidationBucketRule();
	virtual ~GacValidationBucketRule();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// GCS bucket name (supports {env} token).
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// Required IAM permissions.
	/// </summary>
	const std::vector<utility::string_t>& GetPermissions() const;
	void SetPermissions(const std::vector<utility::string_t>& Value);
	bool HasPermissions() const;


protected:
	std::optional<utility::string_t> m_BucketName;
	std::optional<std::vector<utility::string_t>> m_Permissions;
};

/// <summary>
/// Result of a single GAC validation check.
/// </summary>
class GacValidationCheck : public csp::services::DtoBase
{
public:
	GacValidationCheck();
	virtual ~GacValidationCheck();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Type of check: "key_validity", "billing", "api_enabled", "bucket_access", "project_permission".
	/// </summary>
	utility::string_t GetCheckType() const;
	void SetCheckType(const utility::string_t& Value);
	bool HasCheckType() const;

	/// <summary>
	/// Descriptive name (e.g., "aiplatform.googleapis.com", bucket name).
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Check status: "pass", "fail", "error", "skipped".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Human-readable message with details.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;

	/// <summary>
	/// Duration of the check in milliseconds.
	/// </summary>
	int64_t GetDurationMs() const;
	void SetDurationMs(int64_t Value);
	bool HasDurationMs() const;


protected:
	std::optional<utility::string_t> m_CheckType;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Message;
	std::optional<int64_t> m_DurationMs;
};

/// <summary>
/// Request body for GAC validation.
/// </summary>
class GacValidationRequest : public csp::services::DtoBase
{
public:
	GacValidationRequest();
	virtual ~GacValidationRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tenant that owns the secret.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The env var name (e.g., "GOOGLE_APPLICATION_CREDENTIALS").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// Application name (informational, e.g., "Nodey").
	/// </summary>
	utility::string_t GetApplicationName() const;
	void SetApplicationName(const utility::string_t& Value);
	bool HasApplicationName() const;

	std::shared_ptr<GacValidationRequestConfig> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationRequestConfig>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// Optional raw GAC JSON to validate without saving. When provided, bypasses encrypted storage lookup.
	/// </summary>
	utility::string_t GetGacJson() const;
	void SetGacJson(const utility::string_t& Value);
	bool HasGacJson() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<std::shared_ptr<GacValidationRequestConfig>> m_ValidationConfig;
	std::optional<utility::string_t> m_GacJson;
};

/// <summary>
/// Validation config passed from the frontend (mirrors the definition's validationConfig).
/// </summary>
class GacValidationRequestConfig : public csp::services::DtoBase
{
public:
	GacValidationRequestConfig();
	virtual ~GacValidationRequestConfig();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether to probe Vertex AI with a lightweight generateContent call.
	/// </summary>
	bool GetCheckVertexAi() const;
	void SetCheckVertexAi(const bool& Value);
	bool HasCheckVertexAi() const;

	/// <summary>
	/// Buckets and required permissions.
	/// </summary>
	const std::vector<std::shared_ptr<GacValidationBucketRule>>& GetRequiredBuckets() const;
	void SetRequiredBuckets(const std::vector<std::shared_ptr<GacValidationBucketRule>>& Value);
	bool HasRequiredBuckets() const;

	/// <summary>
	/// Project-level IAM permissions.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredProjectPermissions() const;
	void SetRequiredProjectPermissions(const std::vector<utility::string_t>& Value);
	bool HasRequiredProjectPermissions() const;


protected:
	std::optional<bool> m_CheckVertexAi;
	std::optional<std::vector<std::shared_ptr<GacValidationBucketRule>>> m_RequiredBuckets;
	std::optional<std::vector<utility::string_t>> m_RequiredProjectPermissions;
};

/// <summary>
/// Result of validating a GCP Service Account JSON (GAC) credential.
/// </summary>
class GacValidationResult : public csp::services::DtoBase
{
public:
	GacValidationResult();
	virtual ~GacValidationResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// GCP project ID from the credential.
	/// </summary>
	utility::string_t GetProjectId() const;
	void SetProjectId(const utility::string_t& Value);
	bool HasProjectId() const;

	/// <summary>
	/// Service account email from the credential.
	/// </summary>
	utility::string_t GetClientEmail() const;
	void SetClientEmail(const utility::string_t& Value);
	bool HasClientEmail() const;

	/// <summary>
	/// Overall validation status: "pass", "partial", or "fail".
	/// </summary>
	utility::string_t GetOverallStatus() const;
	void SetOverallStatus(const utility::string_t& Value);
	bool HasOverallStatus() const;

	/// <summary>
	/// Individual check results.
	/// </summary>
	const std::vector<std::shared_ptr<GacValidationCheck>>& GetChecks() const;
	void SetChecks(const std::vector<std::shared_ptr<GacValidationCheck>>& Value);
	bool HasChecks() const;


protected:
	std::optional<utility::string_t> m_ProjectId;
	std::optional<utility::string_t> m_ClientEmail;
	std::optional<utility::string_t> m_OverallStatus;
	std::optional<std::vector<std::shared_ptr<GacValidationCheck>>> m_Checks;
};

/// <summary>
/// Error information for failed executions
/// </summary>
class GraphExecutionError : public csp::services::DtoBase
{
public:
	GraphExecutionError();
	virtual ~GraphExecutionError();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node that caused the failure
	/// </summary>
	utility::string_t GetNodeId() const;
	void SetNodeId(const utility::string_t& Value);
	bool HasNodeId() const;

	/// <summary>
	/// Error message
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;


protected:
	std::optional<utility::string_t> m_NodeId;
	std::optional<utility::string_t> m_Error;
};

/// <summary>
/// Request body for graph execution
/// </summary>
class GraphExecutionRequest : public csp::services::DtoBase
{
public:
	GraphExecutionRequest();
	virtual ~GraphExecutionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The nodey graph JSON containing nodes, connections, and user values
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetGraph() const;
	void SetGraph(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasGraph() const;

	/// <summary>
	/// Node type definitions for nodes used in this graph
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetNodeDefinitions() const;
	void SetNodeDefinitions(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasNodeDefinitions() const;

	/// <summary>
	/// Optional execution parameters
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetOptions() const;
	void SetOptions(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasOptions() const;

	/// <summary>
	/// GCS bucket name for persistent node output assets (images, video, etc.).
	/// When provided, overrides the server-side GraphExecutionSettings.OutputBucket.
	/// Enables per-tenant bucket configuration.
	/// </summary>
	utility::string_t GetOutputBucket() const;
	void SetOutputBucket(const utility::string_t& Value);
	bool HasOutputBucket() const;

	/// <summary>
	/// GCS bucket name for temporary/working storage.
	/// When provided, overrides the server-side GraphExecutionSettings.TempBucket.
	/// </summary>
	utility::string_t GetTempBucket() const;
	void SetTempBucket(const utility::string_t& Value);
	bool HasTempBucket() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Graph;
	std::optional<std::shared_ptr<rapidjson::Document>> m_NodeDefinitions;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Options;
	std::optional<utility::string_t> m_OutputBucket;
	std::optional<utility::string_t> m_TempBucket;
};

/// <summary>
/// Current state of a graph execution
/// </summary>
class GraphExecutionState : public csp::services::DtoBase
{
public:
	GraphExecutionState();
	virtual ~GraphExecutionState();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique execution identifier
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Current status: queued, running, completed, failed
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Progress percentage (0-100)
	/// </summary>
	int32_t GetProgress() const;
	void SetProgress(int32_t Value);
	bool HasProgress() const;

	/// <summary>
	/// Tenant name
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Completed nodes with their outputs
	/// </summary>
	const std::vector<std::shared_ptr<CompletedNodeOutput>>& GetCompletedNodes() const;
	void SetCompletedNodes(const std::vector<std::shared_ptr<CompletedNodeOutput>>& Value);
	bool HasCompletedNodes() const;

	/// <summary>
	/// Node currently being executed
	/// </summary>
	utility::string_t GetCurrentNode() const;
	void SetCurrentNode(const utility::string_t& Value);
	bool HasCurrentNode() const;

	std::shared_ptr<GraphExecutionError> GetError() const;
	void SetError(const std::shared_ptr<GraphExecutionError>& Value);
	bool HasError() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_Progress;
	std::optional<utility::string_t> m_TenantName;
	std::optional<std::vector<std::shared_ptr<CompletedNodeOutput>>> m_CompletedNodes;
	std::optional<utility::string_t> m_CurrentNode;
	std::optional<std::shared_ptr<GraphExecutionError>> m_Error;
};

/// <summary>
/// Execution statistics summary
/// </summary>
class GraphExecutionStats : public csp::services::DtoBase
{
public:
	GraphExecutionStats();
	virtual ~GraphExecutionStats();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Total number of executions
	/// </summary>
	int64_t GetTotalExecutions() const;
	void SetTotalExecutions(int64_t Value);
	bool HasTotalExecutions() const;

	/// <summary>
	/// Number of completed executions
	/// </summary>
	int64_t GetCompletedExecutions() const;
	void SetCompletedExecutions(int64_t Value);
	bool HasCompletedExecutions() const;

	/// <summary>
	/// Number of failed executions
	/// </summary>
	int64_t GetFailedExecutions() const;
	void SetFailedExecutions(int64_t Value);
	bool HasFailedExecutions() const;

	/// <summary>
	/// Number of currently running executions
	/// </summary>
	int64_t GetRunningExecutions() const;
	void SetRunningExecutions(int64_t Value);
	bool HasRunningExecutions() const;

	/// <summary>
	/// Average execution duration in milliseconds
	/// </summary>
	double GetAverageDurationMs() const;
	void SetAverageDurationMs(double Value);
	bool HasAverageDurationMs() const;

	/// <summary>
	/// Success rate as a percentage
	/// </summary>
	double GetSuccessRate() const;
	void SetSuccessRate(double Value);
	bool HasSuccessRate() const;


protected:
	std::optional<int64_t> m_TotalExecutions;
	std::optional<int64_t> m_CompletedExecutions;
	std::optional<int64_t> m_FailedExecutions;
	std::optional<int64_t> m_RunningExecutions;
	std::optional<double> m_AverageDurationMs;
	std::optional<double> m_SuccessRate;
};

/// <summary>
/// Response from graph execution submission
/// </summary>
class GraphExecutionSubmitResponse : public csp::services::DtoBase
{
public:
	GraphExecutionSubmitResponse();
	virtual ~GraphExecutionSubmitResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for this execution, used for status polling
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Initial status (always "queued" on successful submission)
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// DTO containing group role info
/// </summary>
class GroupRoleDto : public csp::services::DtoBase
{
public:
	GroupRoleDto();
	virtual ~GroupRoleDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the user to which the role applies.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Id of the group to which the user has the role
	/// </summary>
	utility::string_t GetGroupId() const;
	void SetGroupId(const utility::string_t& Value);
	bool HasGroupId() const;

	/// <summary>
	/// Roles which the user has
	/// </summary>
	const std::vector<utility::string_t>& GetGroupRoles() const;
	void SetGroupRoles(const std::vector<utility::string_t>& Value);
	bool HasGroupRoles() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_GroupId;
	std::optional<std::vector<utility::string_t>> m_GroupRoles;
};

/// <summary>
/// Request to harmonize alo
/// </summary>
class HarmonizeAloRequest : public csp::services::DtoBase
{
public:
	HarmonizeAloRequest();
	virtual ~HarmonizeAloRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Nonce from Meta
	/// </summary>
	utility::string_t GetNonce() const;
	void SetNonce(const utility::string_t& Value);
	bool HasNonce() const;

	/// <summary>
	/// UserId from Meta
	/// </summary>
	utility::string_t GetMetaUserId() const;
	void SetMetaUserId(const utility::string_t& Value);
	bool HasMetaUserId() const;


protected:
	std::optional<utility::string_t> m_Nonce;
	std::optional<utility::string_t> m_MetaUserId;
};

/// <summary>
/// Response from harmonize
/// </summary>
class HarmonizeAloResponse : public csp::services::DtoBase
{
public:
	HarmonizeAloResponse();
	virtual ~HarmonizeAloResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<AuthDto> GetAuth() const;
	void SetAuth(const std::shared_ptr<AuthDto>& Value);
	bool HasAuth() const;


protected:
	std::optional<std::shared_ptr<AuthDto>> m_Auth;
};

/// <summary>
/// Xml definition for an Icon - the pin on a map
/// </summary>
class Icon : public csp::services::DtoBase
{
public:
	Icon();
	virtual ~Icon();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The url for the pin style for google earth
	/// </summary>
	utility::string_t GetHref() const;
	void SetHref(const utility::string_t& Value);
	bool HasHref() const;


protected:
	std::optional<utility::string_t> m_Href;
};

/// <summary>
/// The icon style for the kml document
/// </summary>
class IconStyle : public csp::services::DtoBase
{
public:
	IconStyle();
	virtual ~IconStyle();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the icon style
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The hexBinary color definition for the icon
	/// the first two letters are the opacity, from 00 (transparent) to ff (fully opaque)
	/// https://developers.google.com/kml/documentation/kmlreference#colorstyle
	/// </summary>
	utility::string_t GetColor() const;
	void SetColor(const utility::string_t& Value);
	bool HasColor() const;

	/// <summary>
	/// Normal or Random Color Mode
	/// </summary>
	utility::string_t GetColorMode() const;
	void SetColorMode(const utility::string_t& Value);
	bool HasColorMode() const;

	/// <summary>
	/// The scale of the icon. 1.0f is normal, you can define
	/// highlighted styles that are larger.
	/// </summary>
	float GetScale() const;
	void SetScale(float Value);
	bool HasScale() const;

	std::shared_ptr<Icon> GetIcon() const;
	void SetIcon(const std::shared_ptr<Icon>& Value);
	bool HasIcon() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Color;
	std::optional<utility::string_t> m_ColorMode;
	std::optional<float> m_Scale;
	std::optional<std::shared_ptr<Icon>> m_Icon;
};

/// <summary>
/// A request that includes the needed data to import a space
/// </summary>
class ImportSpaceOptions : public csp::services::DtoBase
{
public:
	ImportSpaceOptions();
	virtual ~ImportSpaceOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant name that the space belongs to
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// The id of the space to duplicate
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	/// <summary>
	/// The id of the coalescence to duplicate
	/// </summary>
	utility::string_t GetCoalescingId() const;
	bool HasCoalescingId() const;

	/// <summary>
	/// The ownerId (userId) that this new space will be assigned to
	/// </summary>
	utility::string_t GetNewGroupOwnerId() const;
	void SetNewGroupOwnerId(const utility::string_t& Value);
	bool HasNewGroupOwnerId() const;

	/// <summary>
	/// The groupIds we wish to copy the userList from, to apply to the duplicated space
	/// </summary>
	const std::vector<utility::string_t>& GetMemberGroupIds() const;
	void SetMemberGroupIds(const std::vector<utility::string_t>& Value);
	bool HasMemberGroupIds() const;

	/// <summary>
	/// THe user that is requesting the space duplication
	/// </summary>
	utility::string_t GetRequestUserId() const;
	bool HasRequestUserId() const;

	/// <summary>
	/// Roles of the User who made the original request when the request was made
	/// </summary>
	const std::vector<utility::string_t>& GetRequestUserRoles() const;
	bool HasRequestUserRoles() const;

	/// <summary>
	/// The unique name for the new space
	/// </summary>
	utility::string_t GetNewUniqueName() const;
	void SetNewUniqueName(const utility::string_t& Value);
	bool HasNewUniqueName() const;

	std::shared_ptr<SpaceOptions> GetOptions() const;
	void SetOptions(const std::shared_ptr<SpaceOptions>& Value);
	bool HasOptions() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_CoalescingId;
	std::optional<utility::string_t> m_NewGroupOwnerId;
	std::optional<std::vector<utility::string_t>> m_MemberGroupIds;
	std::optional<utility::string_t> m_RequestUserId;
	std::optional<std::vector<utility::string_t>> m_RequestUserRoles;
	std::optional<utility::string_t> m_NewUniqueName;
	std::optional<std::shared_ptr<SpaceOptions>> m_Options;
};

/// <summary>
/// Structure defining user position as Kml
/// </summary>
class Kml : public csp::services::DtoBase
{
public:
	Kml();
	virtual ~Kml();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<PositionKml> GetDocument() const;
	void SetDocument(const std::shared_ptr<PositionKml>& Value);
	bool HasDocument() const;


protected:
	std::optional<std::shared_ptr<PositionKml>> m_Document;
};

/// <summary>
/// The line string to draw in the placemark
/// </summary>
class LineString : public csp::services::DtoBase
{
public:
	LineString();
	virtual ~LineString();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Extrude the line to the ground
	/// </summary>
	bool GetExtrude() const;
	void SetExtrude(const bool& Value);
	bool HasExtrude() const;

	/// <summary>
	/// Tessellate breaks the line up into smaller chunks
	/// </summary>
	bool GetTessellate() const;
	void SetTessellate(const bool& Value);
	bool HasTessellate() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	/// <summary>
	/// The coordinates for this linestring
	/// </summary>
	utility::string_t GetCoordinates() const;
	void SetCoordinates(const utility::string_t& Value);
	bool HasCoordinates() const;


protected:
	std::optional<bool> m_Extrude;
	std::optional<bool> m_Tessellate;
	std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
	std::optional<utility::string_t> m_Coordinates;
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
/// A single log entry
/// </summary>
class LogEntryDto : public csp::services::DtoBase
{
public:
	LogEntryDto();
	virtual ~LogEntryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// When the log entry was recorded.
	/// </summary>
	utility::string_t GetTimestamp() const;
	void SetTimestamp(const utility::string_t& Value);
	bool HasTimestamp() const;

	/// <summary>
	/// Log level (e.g. Debug, Info, Warning, Error).
	/// </summary>
	utility::string_t GetLevel() const;
	void SetLevel(const utility::string_t& Value);
	bool HasLevel() const;

	/// <summary>
	/// Log message content.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;

	/// <summary>
	/// ID of the node that produced the log entry.
	/// </summary>
	utility::string_t GetNodeId() const;
	void SetNodeId(const utility::string_t& Value);
	bool HasNodeId() const;

	/// <summary>
	/// Type of the node that produced the log entry.
	/// </summary>
	utility::string_t GetNodeType() const;
	void SetNodeType(const utility::string_t& Value);
	bool HasNodeType() const;

	/// <summary>
	/// Name of the logger that produced the entry.
	/// </summary>
	utility::string_t GetLogger() const;
	void SetLogger(const utility::string_t& Value);
	bool HasLogger() const;


protected:
	std::optional<utility::string_t> m_Timestamp;
	std::optional<utility::string_t> m_Level;
	std::optional<utility::string_t> m_Message;
	std::optional<utility::string_t> m_NodeId;
	std::optional<utility::string_t> m_NodeType;
	std::optional<utility::string_t> m_Logger;
};

/// <summary>
/// The origin view for the scene
/// </summary>
class LookAt : public csp::services::DtoBase
{
public:
	LookAt();
	virtual ~LookAt();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Longitude
	/// </summary>
	double GetLongitude() const;
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// The Latitude
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;

	/// <summary>
	/// The Altitude
	/// </summary>
	int32_t GetAltitude() const;
	void SetAltitude(int32_t Value);
	bool HasAltitude() const;

	/// <summary>
	/// The Range
	/// </summary>
	double GetRange() const;
	void SetRange(double Value);
	bool HasRange() const;

	/// <summary>
	/// The Tilt
	/// </summary>
	double GetTilt() const;
	void SetTilt(double Value);
	bool HasTilt() const;

	/// <summary>
	/// The Heading
	/// </summary>
	double GetHeading() const;
	void SetHeading(double Value);
	bool HasHeading() const;


protected:
	std::optional<double> m_Longitude;
	std::optional<double> m_Latitude;
	std::optional<int32_t> m_Altitude;
	std::optional<double> m_Range;
	std::optional<double> m_Tilt;
	std::optional<double> m_Heading;
};

/// <summary>
/// The 3d model we are using as an icon
/// </summary>
class Model : public csp::services::DtoBase
{
public:
	Model();
	virtual ~Model();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the value of the Id attribute
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	std::shared_ptr<ModelLocation> GetLocation() const;
	void SetLocation(const std::shared_ptr<ModelLocation>& Value);
	bool HasLocation() const;

	std::shared_ptr<ModelOrientation> GetOrientation() const;
	void SetOrientation(const std::shared_ptr<ModelOrientation>& Value);
	bool HasOrientation() const;

	std::shared_ptr<ModelScale> GetScale() const;
	void SetScale(const std::shared_ptr<ModelScale>& Value);
	bool HasScale() const;

	std::shared_ptr<ModelLink> GetLink() const;
	void SetLink(const std::shared_ptr<ModelLink>& Value);
	bool HasLink() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
	std::optional<std::shared_ptr<ModelLocation>> m_Location;
	std::optional<std::shared_ptr<ModelOrientation>> m_Orientation;
	std::optional<std::shared_ptr<ModelScale>> m_Scale;
	std::optional<std::shared_ptr<ModelLink>> m_Link;
};

/// <summary>
/// The link to the 3d object
/// </summary>
class ModelLink : public csp::services::DtoBase
{
public:
	ModelLink();
	virtual ~ModelLink();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The location of the 3d object
	/// </summary>
	utility::string_t GetHref() const;
	void SetHref(const utility::string_t& Value);
	bool HasHref() const;


protected:
	std::optional<utility::string_t> m_Href;
};

/// <summary>
/// The location of the 3d object
/// </summary>
class ModelLocation : public csp::services::DtoBase
{
public:
	ModelLocation();
	virtual ~ModelLocation();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Longitude of the 3d object
	/// </summary>
	double GetLongitude() const;
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// The Latitude of the 3d object
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;

	/// <summary>
	/// The Altitude of the 3d object
	/// </summary>
	int32_t GetAltitude() const;
	void SetAltitude(int32_t Value);
	bool HasAltitude() const;


protected:
	std::optional<double> m_Longitude;
	std::optional<double> m_Latitude;
	std::optional<int32_t> m_Altitude;
};

/// <summary>
/// The orientation of the object
/// </summary>
class ModelOrientation : public csp::services::DtoBase
{
public:
	ModelOrientation();
	virtual ~ModelOrientation();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The heading for the orientation of the object
	/// </summary>
	float GetHeading() const;
	void SetHeading(float Value);
	bool HasHeading() const;

	/// <summary>
	/// The tilt of the object
	/// </summary>
	float GetTilt() const;
	void SetTilt(float Value);
	bool HasTilt() const;

	/// <summary>
	/// The roll of the object
	/// </summary>
	int32_t GetRoll() const;
	void SetRoll(int32_t Value);
	bool HasRoll() const;


protected:
	std::optional<float> m_Heading;
	std::optional<float> m_Tilt;
	std::optional<int32_t> m_Roll;
};

/// <summary>
/// The scale given to the 3d object
/// </summary>
class ModelScale : public csp::services::DtoBase
{
public:
	ModelScale();
	virtual ~ModelScale();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The X scale
	/// </summary>
	int32_t GetX() const;
	void SetX(int32_t Value);
	bool HasX() const;

	/// <summary>
	/// The Y scale
	/// </summary>
	int32_t GetY() const;
	void SetY(int32_t Value);
	bool HasY() const;

	/// <summary>
	/// The Z scale
	/// </summary>
	int32_t GetZ() const;
	void SetZ(int32_t Value);
	bool HasZ() const;


protected:
	std::optional<int32_t> m_X;
	std::optional<int32_t> m_Y;
	std::optional<int32_t> m_Z;
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
/// Request to create a new node definition.
/// </summary>
class NodeDefinitionCreateRequest : public csp::services::DtoBase
{
public:
	NodeDefinitionCreateRequest();
	virtual ~NodeDefinitionCreateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique node type identifier (e.g., "gemini-flash2-5-image").
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// Category path segments (e.g., ["GenAI", "Google"]).
	/// </summary>
	const std::vector<utility::string_t>& GetCategory() const;
	void SetCategory(const std::vector<utility::string_t>& Value);
	bool HasCategory() const;

	/// <summary>
	/// The full node definition JSON.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetDefinition() const;
	void SetDefinition(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasDefinition() const;

	/// <summary>
	/// Python function reference (e.g., "node_engine.node_sources.google_gemini_flash2_5_image.process").
	/// </summary>
	utility::string_t GetFunctionRef() const;
	void SetFunctionRef(const utility::string_t& Value);
	bool HasFunctionRef() const;

	/// <summary>
	/// Worker runtime identifier (e.g., "generic-cpu" or "local").
	/// </summary>
	utility::string_t GetRuntimeId() const;
	void SetRuntimeId(const utility::string_t& Value);
	bool HasRuntimeId() const;

	/// <summary>
	/// Initial status. Defaults to "active".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Description of this version.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// Searchable metadata tags.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Secret key names required by this node.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredSecrets() const;
	void SetRequiredSecrets(const std::vector<utility::string_t>& Value);
	bool HasRequiredSecrets() const;

	/// <summary>
	/// Provider name (e.g., "Google", "Topaz").
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// NodeTypeId of the definition this was cloned from (if any).
	/// </summary>
	utility::string_t GetClonedFromNodeTypeId() const;
	void SetClonedFromNodeTypeId(const utility::string_t& Value);
	bool HasClonedFromNodeTypeId() const;


protected:
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<std::vector<utility::string_t>> m_Category;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Definition;
	std::optional<utility::string_t> m_FunctionRef;
	std::optional<utility::string_t> m_RuntimeId;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<std::vector<utility::string_t>> m_RequiredSecrets;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_ClonedFromNodeTypeId;
};

/// <summary>
/// Full node definition DTO including the full definition JSON.
/// </summary>
class NodeDefinitionDetailDto : public csp::services::DtoBase
{
public:
	NodeDefinitionDetailDto();
	virtual ~NodeDefinitionDetailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The full node definition JSON.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetDefinition() const;
	void SetDefinition(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasDefinition() const;

	/// <summary>
	/// Source version pin (null = latest).
	/// </summary>
	utility::string_t GetSourceVersion() const;
	void SetSourceVersion(const utility::string_t& Value);
	bool HasSourceVersion() const;

	/// <summary>
	/// Searchable metadata tags.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// NodeTypeId of the definition this was cloned from (if any).
	/// </summary>
	utility::string_t GetClonedFromNodeTypeId() const;
	void SetClonedFromNodeTypeId(const utility::string_t& Value);
	bool HasClonedFromNodeTypeId() const;

	/// <summary>
	/// Unique node type identifier.
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// Display label from the definition.
	/// </summary>
	utility::string_t GetLabel() const;
	void SetLabel(const utility::string_t& Value);
	bool HasLabel() const;

	/// <summary>
	/// Category path segments.
	/// </summary>
	const std::vector<utility::string_t>& GetCategory() const;
	void SetCategory(const std::vector<utility::string_t>& Value);
	bool HasCategory() const;

	/// <summary>
	/// Worker runtime identifier.
	/// </summary>
	utility::string_t GetRuntimeId() const;
	void SetRuntimeId(const utility::string_t& Value);
	bool HasRuntimeId() const;

	/// <summary>
	/// Current status.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Current version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Python function reference.
	/// </summary>
	utility::string_t GetFunctionRef() const;
	void SetFunctionRef(const utility::string_t& Value);
	bool HasFunctionRef() const;

	/// <summary>
	/// Provider name.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Required secret key names.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredSecrets() const;
	void SetRequiredSecrets(const std::vector<utility::string_t>& Value);
	bool HasRequiredSecrets() const;

	/// <summary>
	/// When the definition was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// When the definition was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Definition;
	std::optional<utility::string_t> m_SourceVersion;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<utility::string_t> m_ClonedFromNodeTypeId;
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<utility::string_t> m_Label;
	std::optional<std::vector<utility::string_t>> m_Category;
	std::optional<utility::string_t> m_RuntimeId;
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_FunctionRef;
	std::optional<utility::string_t> m_Provider;
	std::optional<std::vector<utility::string_t>> m_RequiredSecrets;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_CreatedAt;
};

/// <summary>
/// Lightweight node definition DTO for list views.
/// </summary>
class NodeDefinitionListDto : public csp::services::DtoBase
{
public:
	NodeDefinitionListDto();
	virtual ~NodeDefinitionListDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique node type identifier.
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// Display label from the definition.
	/// </summary>
	utility::string_t GetLabel() const;
	void SetLabel(const utility::string_t& Value);
	bool HasLabel() const;

	/// <summary>
	/// Category path segments.
	/// </summary>
	const std::vector<utility::string_t>& GetCategory() const;
	void SetCategory(const std::vector<utility::string_t>& Value);
	bool HasCategory() const;

	/// <summary>
	/// Worker runtime identifier.
	/// </summary>
	utility::string_t GetRuntimeId() const;
	void SetRuntimeId(const utility::string_t& Value);
	bool HasRuntimeId() const;

	/// <summary>
	/// Current status.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Current version number.
	/// </summary>
	int32_t GetVersion() const;
	void SetVersion(int32_t Value);
	bool HasVersion() const;

	/// <summary>
	/// Python function reference.
	/// </summary>
	utility::string_t GetFunctionRef() const;
	void SetFunctionRef(const utility::string_t& Value);
	bool HasFunctionRef() const;

	/// <summary>
	/// Provider name.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Required secret key names.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredSecrets() const;
	void SetRequiredSecrets(const std::vector<utility::string_t>& Value);
	bool HasRequiredSecrets() const;

	/// <summary>
	/// When the definition was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// When the definition was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;


protected:
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<utility::string_t> m_Label;
	std::optional<std::vector<utility::string_t>> m_Category;
	std::optional<utility::string_t> m_RuntimeId;
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_Version;
	std::optional<utility::string_t> m_FunctionRef;
	std::optional<utility::string_t> m_Provider;
	std::optional<std::vector<utility::string_t>> m_RequiredSecrets;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_CreatedAt;
};

class NodeDefinitionListDtoDataPage : public csp::services::DtoBase
{
public:
	NodeDefinitionListDtoDataPage();
	virtual ~NodeDefinitionListDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<NodeDefinitionListDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<NodeDefinitionListDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<NodeDefinitionListDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Request to change the status of a node definition.
/// </summary>
class NodeDefinitionStatusRequest : public csp::services::DtoBase
{
public:
	NodeDefinitionStatusRequest();
	virtual ~NodeDefinitionStatusRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New status: "active", "draft", or "deprecated".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// Request to update an existing node definition. Creates a new version.
/// </summary>
class NodeDefinitionUpdateRequest : public csp::services::DtoBase
{
public:
	NodeDefinitionUpdateRequest();
	virtual ~NodeDefinitionUpdateRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Updated category path segments.
	/// </summary>
	const std::vector<utility::string_t>& GetCategory() const;
	void SetCategory(const std::vector<utility::string_t>& Value);
	bool HasCategory() const;

	/// <summary>
	/// Updated full node definition JSON.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetDefinition() const;
	void SetDefinition(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasDefinition() const;

	/// <summary>
	/// Updated Python function reference.
	/// </summary>
	utility::string_t GetFunctionRef() const;
	void SetFunctionRef(const utility::string_t& Value);
	bool HasFunctionRef() const;

	/// <summary>
	/// Updated worker runtime identifier.
	/// </summary>
	utility::string_t GetRuntimeId() const;
	void SetRuntimeId(const utility::string_t& Value);
	bool HasRuntimeId() const;

	/// <summary>
	/// Description of what changed in this version.
	/// </summary>
	utility::string_t GetChangeNote() const;
	void SetChangeNote(const utility::string_t& Value);
	bool HasChangeNote() const;

	/// <summary>
	/// Updated tags.
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;

	/// <summary>
	/// Updated required secrets.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredSecrets() const;
	void SetRequiredSecrets(const std::vector<utility::string_t>& Value);
	bool HasRequiredSecrets() const;

	/// <summary>
	/// Updated provider name.
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// Optional source version pin.
	/// </summary>
	utility::string_t GetSourceVersion() const;
	void SetSourceVersion(const utility::string_t& Value);
	bool HasSourceVersion() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Category;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Definition;
	std::optional<utility::string_t> m_FunctionRef;
	std::optional<utility::string_t> m_RuntimeId;
	std::optional<utility::string_t> m_ChangeNote;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<std::vector<utility::string_t>> m_RequiredSecrets;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_SourceVersion;
};

/// <summary>
/// Summary DTO for node execution state
/// </summary>
class NodeSummaryDto : public csp::services::DtoBase
{
public:
	NodeSummaryDto();
	virtual ~NodeSummaryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier for the node.
	/// </summary>
	utility::string_t GetNid() const;
	void SetNid(const utility::string_t& Value);
	bool HasNid() const;

	/// <summary>
	/// Type of the node (e.g. HTTP, Transform, LLM).
	/// </summary>
	utility::string_t GetNt() const;
	void SetNt(const utility::string_t& Value);
	bool HasNt() const;

	/// <summary>
	/// Current status of the node.
	/// </summary>
	utility::string_t GetS() const;
	void SetS(const utility::string_t& Value);
	bool HasS() const;

	/// <summary>
	/// When the node started executing.
	/// </summary>
	utility::string_t GetSa() const;
	void SetSa(const utility::string_t& Value);
	bool HasSa() const;

	/// <summary>
	/// When the node finished executing.
	/// </summary>
	utility::string_t GetCoa() const;
	void SetCoa(const utility::string_t& Value);
	bool HasCoa() const;

	/// <summary>
	/// Error message if the node failed.
	/// </summary>
	utility::string_t GetErr() const;
	void SetErr(const utility::string_t& Value);
	bool HasErr() const;


protected:
	std::optional<utility::string_t> m_Nid;
	std::optional<utility::string_t> m_Nt;
	std::optional<utility::string_t> m_S;
	std::optional<utility::string_t> m_Sa;
	std::optional<utility::string_t> m_Coa;
	std::optional<utility::string_t> m_Err;
};

/// <summary>
/// Response from starting a log observer
/// </summary>
class ObserveResponse : public csp::services::DtoBase
{
public:
	ObserveResponse();
	virtual ~ObserveResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// ID of the execution being observed.
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Session identifier for this observer.
	/// </summary>
	utility::string_t GetSessionId() const;
	void SetSessionId(const utility::string_t& Value);
	bool HasSessionId() const;

	/// <summary>
	/// Scope identifier for the observation.
	/// </summary>
	utility::string_t GetScopeId() const;
	void SetScopeId(const utility::string_t& Value);
	bool HasScopeId() const;

	/// <summary>
	/// Type of the scope reference (e.g. tenant, user).
	/// </summary>
	utility::string_t GetScopeReferenceType() const;
	void SetScopeReferenceType(const utility::string_t& Value);
	bool HasScopeReferenceType() const;

	/// <summary>
	/// ID of the scope reference entity.
	/// </summary>
	utility::string_t GetScopeReferenceId() const;
	void SetScopeReferenceId(const utility::string_t& Value);
	bool HasScopeReferenceId() const;

	/// <summary>
	/// Current status of the observer.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_SessionId;
	std::optional<utility::string_t> m_ScopeId;
	std::optional<utility::string_t> m_ScopeReferenceType;
	std::optional<utility::string_t> m_ScopeReferenceId;
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// Definition for a Placemark Inside a Kml Document
/// </summary>
class Placemark : public csp::services::DtoBase
{
public:
	Placemark();
	virtual ~Placemark();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the value of the Id attribute
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The name of the placemark
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The style associated with this placemark, defined by the
	/// Style on the root level of the document. If the root style name is
	/// "MyStyle", this would reference it with a string "#MyStyle"
	/// </summary>
	utility::string_t GetStyleUrl() const;
	void SetStyleUrl(const utility::string_t& Value);
	bool HasStyleUrl() const;

	/// <summary>
	/// The description of the placemark. This will show up on google earth
	/// as a description to the user
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	std::shared_ptr<LineString> GetLineString() const;
	void SetLineString(const std::shared_ptr<LineString>& Value);
	bool HasLineString() const;

	std::shared_ptr<Point> GetPoint() const;
	void SetPoint(const std::shared_ptr<Point>& Value);
	bool HasPoint() const;

	std::shared_ptr<Model> GetModel() const;
	void SetModel(const std::shared_ptr<Model>& Value);
	bool HasModel() const;

	std::shared_ptr<LookAt> GetLookAt() const;
	void SetLookAt(const std::shared_ptr<LookAt>& Value);
	bool HasLookAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_StyleUrl;
	std::optional<utility::string_t> m_Description;
	std::optional<std::shared_ptr<LineString>> m_LineString;
	std::optional<std::shared_ptr<Point>> m_Point;
	std::optional<std::shared_ptr<Model>> m_Model;
	std::optional<std::shared_ptr<LookAt>> m_LookAt;
};

/// <summary>
/// The individual point to draw in the placemark
/// </summary>
class Point : public csp::services::DtoBase
{
public:
	Point();
	virtual ~Point();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tessellate breaks the line up into smaller chunks
	/// </summary>
	bool GetTessellate() const;
	void SetTessellate(const bool& Value);
	bool HasTessellate() const;

	std::shared_ptr<AltitudeMode> GetAltitudeMode() const;
	void SetAltitudeMode(const std::shared_ptr<AltitudeMode>& Value);
	bool HasAltitudeMode() const;

	/// <summary>
	/// The coordinates for this linestring
	/// </summary>
	utility::string_t GetCoordinates() const;
	void SetCoordinates(const utility::string_t& Value);
	bool HasCoordinates() const;


protected:
	std::optional<bool> m_Tessellate;
	std::optional<std::shared_ptr<AltitudeMode>> m_AltitudeMode;
	std::optional<utility::string_t> m_Coordinates;
};

/// <summary>
/// Structure defining user position as Kml
/// </summary>
class PositionKml : public csp::services::DtoBase
{
public:
	PositionKml();
	virtual ~PositionKml();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the kml structure
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The style definition of the kml elements. These are used to define each point or set of points
	/// and how they are shown on a map (color, pin style, size, etc)
	/// </summary>
	const std::vector<std::shared_ptr<Style>>& GetStyle() const;
	void SetStyle(const std::vector<std::shared_ptr<Style>>& Value);
	bool HasStyle() const;

	/// <summary>
	/// The visibility of the structure, should usually be true
	/// </summary>
	bool GetVisibility() const;
	void SetVisibility(const bool& Value);
	bool HasVisibility() const;

	/// <summary>
	/// Camera operator - i believe
	/// </summary>
	bool GetOpen() const;
	void SetOpen(const bool& Value);
	bool HasOpen() const;

	/// <summary>
	/// The placemark, defines a point or a line on a map
	/// </summary>
	const std::vector<std::shared_ptr<Placemark>>& GetPlacemark() const;
	void SetPlacemark(const std::vector<std::shared_ptr<Placemark>>& Value);
	bool HasPlacemark() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<std::vector<std::shared_ptr<Style>>> m_Style;
	std::optional<bool> m_Visibility;
	std::optional<bool> m_Open;
	std::optional<std::vector<std::shared_ptr<Placemark>>> m_Placemark;
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
/// Processing time breakdown entry for usage charts
/// </summary>
class ProcessingTimeEntry : public csp::services::DtoBase
{
public:
	ProcessingTimeEntry();
	virtual ~ProcessingTimeEntry();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Group key (date string, queue name, or tier name depending on groupBy)
	/// </summary>
	utility::string_t GetGroupKey() const;
	void SetGroupKey(const utility::string_t& Value);
	bool HasGroupKey() const;

	/// <summary>
	/// Total processing time in milliseconds
	/// </summary>
	double GetTotalDurationMs() const;
	void SetTotalDurationMs(double Value);
	bool HasTotalDurationMs() const;

	/// <summary>
	/// Average processing time in milliseconds
	/// </summary>
	double GetAvgDurationMs() const;
	void SetAvgDurationMs(double Value);
	bool HasAvgDurationMs() const;

	/// <summary>
	/// Number of items in this group
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_GroupKey;
	std::optional<double> m_TotalDurationMs;
	std::optional<double> m_AvgDurationMs;
	std::optional<int32_t> m_Count;
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
/// Result of purging a DLQ.
/// </summary>
class PurgeDlqResult : public csp::services::DtoBase
{
public:
	PurgeDlqResult();
	virtual ~PurgeDlqResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the purge was successful
	/// </summary>
	bool GetSuccess() const;
	void SetSuccess(const bool& Value);
	bool HasSuccess() const;

	/// <summary>
	/// Error message if the operation failed
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;


protected:
	std::optional<bool> m_Success;
	std::optional<utility::string_t> m_Error;
};

/// <summary>
/// Per-queue breakdown of wait vs processing time
/// </summary>
class QueueBreakdownEntry : public csp::services::DtoBase
{
public:
	QueueBreakdownEntry();
	virtual ~QueueBreakdownEntry();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Queue name (e.g., "GenericNode")
	/// </summary>
	utility::string_t GetQueue() const;
	void SetQueue(const utility::string_t& Value);
	bool HasQueue() const;

	/// <summary>
	/// Average queue wait time in milliseconds
	/// </summary>
	double GetAvgQueueWaitMs() const;
	void SetAvgQueueWaitMs(double Value);
	bool HasAvgQueueWaitMs() const;

	/// <summary>
	/// Average processing time in milliseconds
	/// </summary>
	double GetAvgProcessingMs() const;
	void SetAvgProcessingMs(double Value);
	bool HasAvgProcessingMs() const;

	/// <summary>
	/// Average total wall-clock time in milliseconds
	/// </summary>
	double GetAvgTotalMs() const;
	void SetAvgTotalMs(double Value);
	bool HasAvgTotalMs() const;

	/// <summary>
	/// Number of node executions in this queue
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Queue;
	std::optional<double> m_AvgQueueWaitMs;
	std::optional<double> m_AvgProcessingMs;
	std::optional<double> m_AvgTotalMs;
	std::optional<int32_t> m_Count;
};

/// <summary>
/// Queue configuration attributes extracted from SQS GetQueueAttributes("All").
/// These are read-only, zero-cost fields already fetched but previously discarded.
/// </summary>
class QueueConfigInfo : public csp::services::DtoBase
{
public:
	QueueConfigInfo();
	virtual ~QueueConfigInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Full ARN of the queue
	/// </summary>
	utility::string_t GetQa() const;
	void SetQa(const utility::string_t& Value);
	bool HasQa() const;

	/// <summary>
	/// When the queue was provisioned (epoch seconds)
	/// </summary>
	int64_t GetCt() const;
	void SetCt(int64_t Value);
	bool HasCt() const;

	/// <summary>
	/// Last configuration change (epoch seconds)
	/// </summary>
	int64_t GetLmt() const;
	void SetLmt(int64_t Value);
	bool HasLmt() const;

	/// <summary>
	/// How long a consumer locks a message (seconds)
	/// </summary>
	int32_t GetVt() const;
	void SetVt(int32_t Value);
	bool HasVt() const;

	/// <summary>
	/// Maximum payload size (bytes, up to 256 KB)
	/// </summary>
	int32_t GetMms() const;
	void SetMms(int32_t Value);
	bool HasMms() const;

	/// <summary>
	/// How long messages are kept before auto-deletion (seconds)
	/// </summary>
	int32_t GetMrp() const;
	void SetMrp(int32_t Value);
	bool HasMrp() const;

	/// <summary>
	/// Default delivery delay for new messages (seconds)
	/// </summary>
	int32_t GetDs() const;
	void SetDs(int32_t Value);
	bool HasDs() const;

	/// <summary>
	/// Receive attempts before DLQ (parsed from RedrivePolicy)
	/// </summary>
	int32_t GetMrc() const;
	void SetMrc(int32_t Value);
	bool HasMrc() const;

	/// <summary>
	/// Whether SSE-SQS or KMS encryption is active
	/// </summary>
	bool GetEnc() const;
	void SetEnc(const bool& Value);
	bool HasEnc() const;


protected:
	std::optional<utility::string_t> m_Qa;
	std::optional<int64_t> m_Ct;
	std::optional<int64_t> m_Lmt;
	std::optional<int32_t> m_Vt;
	std::optional<int32_t> m_Mms;
	std::optional<int32_t> m_Mrp;
	std::optional<int32_t> m_Ds;
	std::optional<int32_t> m_Mrc;
	std::optional<bool> m_Enc;
};

/// <summary>
/// SQS queue depth breakdown.
/// </summary>
class QueueDepthInfo : public csp::services::DtoBase
{
public:
	QueueDepthInfo();
	virtual ~QueueDepthInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Messages waiting to be picked up (ApproximateNumberOfMessages)
	/// </summary>
	int32_t GetW() const;
	void SetW(int32_t Value);
	bool HasW() const;

	/// <summary>
	/// Messages currently being processed by a consumer (ApproximateNumberOfMessagesNotVisible)
	/// </summary>
	int32_t GetIf() const;
	void SetIf(int32_t Value);
	bool HasIf() const;

	/// <summary>
	/// Messages in delayed delivery (ApproximateNumberOfMessagesDelayed)
	/// </summary>
	int32_t GetDy() const;
	void SetDy(int32_t Value);
	bool HasDy() const;


protected:
	std::optional<int32_t> m_W;
	std::optional<int32_t> m_If;
	std::optional<int32_t> m_Dy;
};

/// <summary>
/// Health data for a single SQS queue and its optional DLQ.
/// </summary>
class QueueHealthInfo : public csp::services::DtoBase
{
public:
	QueueHealthInfo();
	virtual ~QueueHealthInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Friendly queue name extracted from the SQS queue name
	/// (e.g., "GenericNode", "HunyuanImage", "GraphExecutionTrigger")
	/// </summary>
	utility::string_t GetN() const;
	void SetN(const utility::string_t& Value);
	bool HasN() const;

	/// <summary>
	/// Full SQS queue URL
	/// </summary>
	utility::string_t GetQu() const;
	void SetQu(const utility::string_t& Value);
	bool HasQu() const;

	/// <summary>
	/// Queue classification: "system" for orchestration queues
	/// (GraphExecutionTrigger, GraphExecutionResult, etc.)
	/// or "node-worker" for distributed node processing queues.
	/// </summary>
	utility::string_t GetT() const;
	void SetT(const utility::string_t& Value);
	bool HasT() const;

	std::shared_ptr<QueueDepthInfo> GetD() const;
	void SetD(const std::shared_ptr<QueueDepthInfo>& Value);
	bool HasD() const;

	/// <summary>
	/// Age of the oldest message in seconds, from CloudWatch.
	/// Null if CloudWatch data is unavailable (e.g., local dev).
	/// </summary>
	double GetOa() const;
	void SetOa(double Value);
	bool HasOa() const;

	std::shared_ptr<DlqInfo> GetDlq() const;
	void SetDlq(const std::shared_ptr<DlqInfo>& Value);
	bool HasDlq() const;

	std::shared_ptr<QueueConfigInfo> GetCfg() const;
	void SetCfg(const std::shared_ptr<QueueConfigInfo>& Value);
	bool HasCfg() const;

	std::shared_ptr<ChaosMonkeyConfig> GetAc() const;
	void SetAc(const std::shared_ptr<ChaosMonkeyConfig>& Value);
	bool HasAc() const;

	/// <summary>
	/// When this queue's volatile data last changed (unix milliseconds).
	/// Compared against the previous cached snapshot to detect changes.
	/// Used by the frontend for incremental polling via modifiedSince.
	/// </summary>
	int64_t GetUa() const;
	void SetUa(int64_t Value);
	bool HasUa() const;

	/// <summary>
	/// True when this queue was discovered in a previous snapshot but is no longer
	/// present in SQS. The frontend removes it from its cache on receipt.
	/// Markers are carried forward for a short window (~30s) then dropped.
	/// </summary>
	bool GetDel() const;
	void SetDel(const bool& Value);
	bool HasDel() const;


protected:
	std::optional<utility::string_t> m_N;
	std::optional<utility::string_t> m_Qu;
	std::optional<utility::string_t> m_T;
	std::optional<std::shared_ptr<QueueDepthInfo>> m_D;
	std::optional<double> m_Oa;
	std::optional<std::shared_ptr<DlqInfo>> m_Dlq;
	std::optional<std::shared_ptr<QueueConfigInfo>> m_Cfg;
	std::optional<std::shared_ptr<ChaosMonkeyConfig>> m_Ac;
	std::optional<int64_t> m_Ua;
	std::optional<bool> m_Del;
};

/// <summary>
/// Top-level snapshot of all queue health data at a point in time.
/// </summary>
class QueueHealthSnapshot : public csp::services::DtoBase
{
public:
	QueueHealthSnapshot();
	virtual ~QueueHealthSnapshot();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// When this snapshot was captured (unix milliseconds)
	/// </summary>
	int64_t GetTs() const;
	void SetTs(int64_t Value);
	bool HasTs() const;

	/// <summary>
	/// Per-queue health data, sorted active-first then alphabetical
	/// </summary>
	const std::vector<std::shared_ptr<QueueHealthInfo>>& GetQs() const;
	void SetQs(const std::vector<std::shared_ptr<QueueHealthInfo>>& Value);
	bool HasQs() const;

	std::shared_ptr<QueueHealthSummary> GetSy() const;
	void SetSy(const std::shared_ptr<QueueHealthSummary>& Value);
	bool HasSy() const;


protected:
	std::optional<int64_t> m_Ts;
	std::optional<std::vector<std::shared_ptr<QueueHealthInfo>>> m_Qs;
	std::optional<std::shared_ptr<QueueHealthSummary>> m_Sy;
};

/// <summary>
/// Aggregate summary across all discovered queues.
/// </summary>
class QueueHealthSummary : public csp::services::DtoBase
{
public:
	QueueHealthSummary();
	virtual ~QueueHealthSummary();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Total messages waiting across all queues
	/// </summary>
	int32_t GetTw() const;
	void SetTw(int32_t Value);
	bool HasTw() const;

	/// <summary>
	/// Total messages in-flight across all queues
	/// </summary>
	int32_t GetTif() const;
	void SetTif(int32_t Value);
	bool HasTif() const;

	/// <summary>
	/// Total messages in all DLQs
	/// </summary>
	int32_t GetTdl() const;
	void SetTdl(int32_t Value);
	bool HasTdl() const;

	/// <summary>
	/// Number of queues with waiting > 0 or inFlight > 0
	/// </summary>
	int32_t GetAq() const;
	void SetAq(int32_t Value);
	bool HasAq() const;

	/// <summary>
	/// Total number of (non-DLQ) queues discovered
	/// </summary>
	int32_t GetTqd() const;
	void SetTqd(int32_t Value);
	bool HasTqd() const;


protected:
	std::optional<int32_t> m_Tw;
	std::optional<int32_t> m_Tif;
	std::optional<int32_t> m_Tdl;
	std::optional<int32_t> m_Aq;
	std::optional<int32_t> m_Tqd;
};

/// <summary>
/// Summary of queue wait times for the queue wait summary endpoint
/// </summary>
class QueueWaitSummary : public csp::services::DtoBase
{
public:
	QueueWaitSummary();
	virtual ~QueueWaitSummary();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Average graph-level queue wait in milliseconds
	/// </summary>
	double GetAvgGraphQueueWaitMs() const;
	void SetAvgGraphQueueWaitMs(double Value);
	bool HasAvgGraphQueueWaitMs() const;

	/// <summary>
	/// Median (P50) graph-level queue wait in milliseconds
	/// </summary>
	double GetP50() const;
	void SetP50(double Value);
	bool HasP50() const;

	/// <summary>
	/// 95th percentile graph-level queue wait in milliseconds
	/// </summary>
	double GetP95() const;
	void SetP95(double Value);
	bool HasP95() const;

	/// <summary>
	/// 99th percentile graph-level queue wait in milliseconds
	/// </summary>
	double GetP99() const;
	void SetP99(double Value);
	bool HasP99() const;

	/// <summary>
	/// Total graph-level queue wait in milliseconds
	/// </summary>
	double GetTotalGraphQueueWaitMs() const;
	void SetTotalGraphQueueWaitMs(double Value);
	bool HasTotalGraphQueueWaitMs() const;

	/// <summary>
	/// Number of executions with queue wait data
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;

	/// <summary>
	/// Per-queue breakdown of wait vs processing time
	/// </summary>
	const std::vector<std::shared_ptr<QueueBreakdownEntry>>& GetByQueue() const;
	void SetByQueue(const std::vector<std::shared_ptr<QueueBreakdownEntry>>& Value);
	bool HasByQueue() const;


protected:
	std::optional<double> m_AvgGraphQueueWaitMs;
	std::optional<double> m_P50;
	std::optional<double> m_P95;
	std::optional<double> m_P99;
	std::optional<double> m_TotalGraphQueueWaitMs;
	std::optional<int32_t> m_Count;
	std::optional<std::vector<std::shared_ptr<QueueBreakdownEntry>>> m_ByQueue;
};

/// <summary>
/// Info about a single redrive task from ListMessageMoveTasks.
/// </summary>
class RedriveTaskInfo : public csp::services::DtoBase
{
public:
	RedriveTaskInfo();
	virtual ~RedriveTaskInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Handle for the task (null if not RUNNING)
	/// </summary>
	utility::string_t GetTaskHandle() const;
	void SetTaskHandle(const utility::string_t& Value);
	bool HasTaskHandle() const;

	/// <summary>
	/// Task status: RUNNING, COMPLETED, CANCELLED, FAILED
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Messages moved so far
	/// </summary>
	int64_t GetApproximateNumberOfMessagesMoved() const;
	void SetApproximateNumberOfMessagesMoved(int64_t Value);
	bool HasApproximateNumberOfMessagesMoved() const;

	/// <summary>
	/// Total messages to move
	/// </summary>
	int64_t GetApproximateNumberOfMessagesToMove() const;
	void SetApproximateNumberOfMessagesToMove(int64_t Value);
	bool HasApproximateNumberOfMessagesToMove() const;

	/// <summary>
	/// When the task started (epoch ms)
	/// </summary>
	int64_t GetStartedTimestamp() const;
	void SetStartedTimestamp(int64_t Value);
	bool HasStartedTimestamp() const;

	/// <summary>
	/// Reason for failure if status is FAILED
	/// </summary>
	utility::string_t GetFailureReason() const;
	void SetFailureReason(const utility::string_t& Value);
	bool HasFailureReason() const;


protected:
	std::optional<utility::string_t> m_TaskHandle;
	std::optional<utility::string_t> m_Status;
	std::optional<int64_t> m_ApproximateNumberOfMessagesMoved;
	std::optional<int64_t> m_ApproximateNumberOfMessagesToMove;
	std::optional<int64_t> m_StartedTimestamp;
	std::optional<utility::string_t> m_FailureReason;
};

/// <summary>
/// Request body for saving a validated GAC credential.
/// </summary>
class SaveValidatedGacRequest : public csp::services::DtoBase
{
public:
	SaveValidatedGacRequest();
	virtual ~SaveValidatedGacRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tenant that owns the secret.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The env var name (e.g., "GOOGLE_APPLICATION_CREDENTIALS").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// The raw GAC JSON to save as the tenant secret.
	/// </summary>
	utility::string_t GetGacJson() const;
	void SetGacJson(const utility::string_t& Value);
	bool HasGacJson() const;

	std::shared_ptr<GacValidationResult> GetValidationResult() const;
	void SetValidationResult(const std::shared_ptr<GacValidationResult>& Value);
	bool HasValidationResult() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_GacJson;
	std::optional<std::shared_ptr<GacValidationResult>> m_ValidationResult;
};

/// <summary>
/// Request to save a secret that has already been validated.
/// </summary>
class SaveValidatedSecretRequest : public csp::services::DtoBase
{
public:
	SaveValidatedSecretRequest();
	virtual ~SaveValidatedSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tenant owning the secret.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Environment variable name.
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// The value to save.
	/// </summary>
	utility::string_t GetRawValue() const;
	void SetRawValue(const utility::string_t& Value);
	bool HasRawValue() const;

	std::shared_ptr<SecretValidationResult> GetValidationResult() const;
	void SetValidationResult(const std::shared_ptr<SecretValidationResult>& Value);
	bool HasValidationResult() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_RawValue;
	std::optional<std::shared_ptr<SecretValidationResult>> m_ValidationResult;
};

/// <summary>
/// An individual check within a secret validation.
/// </summary>
class SecretValidationCheck : public csp::services::DtoBase
{
public:
	SecretValidationCheck();
	virtual ~SecretValidationCheck();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Type of check: "authentication", "quota", "endpoint_reachable".
	/// </summary>
	utility::string_t GetCheckType() const;
	void SetCheckType(const utility::string_t& Value);
	bool HasCheckType() const;

	/// <summary>
	/// Check status: "pass", "fail", or "error".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Human-readable detail message.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;

	/// <summary>
	/// Check execution time in milliseconds.
	/// </summary>
	int64_t GetDurationMs() const;
	void SetDurationMs(int64_t Value);
	bool HasDurationMs() const;


protected:
	std::optional<utility::string_t> m_CheckType;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_Message;
	std::optional<int64_t> m_DurationMs;
};

/// <summary>
/// Result of validating a secret value against a provider-specific probe.
/// </summary>
class SecretValidationResult : public csp::services::DtoBase
{
public:
	SecretValidationResult();
	virtual ~SecretValidationResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Overall validation status: "pass", "fail", or "error".
	/// </summary>
	utility::string_t GetOverallStatus() const;
	void SetOverallStatus(const utility::string_t& Value);
	bool HasOverallStatus() const;

	/// <summary>
	/// Provider name (e.g., "FAL", "Meshy", "Topaz").
	/// </summary>
	utility::string_t GetProvider() const;
	void SetProvider(const utility::string_t& Value);
	bool HasProvider() const;

	/// <summary>
	/// When the validation was performed.
	/// </summary>
	utility::string_t GetValidatedAt() const;
	void SetValidatedAt(const utility::string_t& Value);
	bool HasValidatedAt() const;

	/// <summary>
	/// Individual check results.
	/// </summary>
	const std::vector<std::shared_ptr<SecretValidationCheck>>& GetChecks() const;
	void SetChecks(const std::vector<std::shared_ptr<SecretValidationCheck>>& Value);
	bool HasChecks() const;


protected:
	std::optional<utility::string_t> m_OverallStatus;
	std::optional<utility::string_t> m_Provider;
	std::optional<utility::string_t> m_ValidatedAt;
	std::optional<std::vector<std::shared_ptr<SecretValidationCheck>>> m_Checks;
};

/// <summary>
/// Contains information for sorting entities.
/// </summary>
class SequenceDto : public csp::services::DtoBase
{
public:
	SequenceDto();
	virtual ~SequenceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Id of this sequence. Can be at most 64 characters.
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The unique key used to identify this sequence. Can be at most 1000 characters.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// An ordered list of Ids in this sequence.
	/// </summary>
	const std::vector<utility::string_t>& GetItems() const;
	void SetItems(const std::vector<utility::string_t>& Value);
	bool HasItems() const;

	/// <summary>
	/// The type of entity that the Olympus.Service.Aggregation.Dtos.SequenceDto.ReferenceId identifies, e.g. "GroupId".
	/// Can be at most 64 characters.
	/// </summary>
	utility::string_t GetReferenceType() const;
	void SetReferenceType(const utility::string_t& Value);
	bool HasReferenceType() const;

	/// <summary>
	/// The Id of the entity that this sequence is associated with to, e.g. a group Id. Can
	/// be at most 64 characters.
	/// </summary>
	utility::string_t GetReferenceId() const;
	void SetReferenceId(const utility::string_t& Value);
	bool HasReferenceId() const;

	/// <summary>
	/// Optional metadata about the sequence. Can be used as the client sees fit for managing
	/// sequences. Keys and values can be at most 64 characters. The dictionary can have at most
	/// 25 entries.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetMetadata() const;
	void SetMetadata(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasMetadata() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Key;
	std::optional<std::vector<utility::string_t>> m_Items;
	std::optional<utility::string_t> m_ReferenceType;
	std::optional<utility::string_t> m_ReferenceId;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Metadata;
};

class SequenceDtoDataPage : public csp::services::DtoBase
{
public:
	SequenceDtoDataPage();
	virtual ~SequenceDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SequenceDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SequenceDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<SequenceDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Generic descriptor for a request to a service
/// </summary>
class ServiceRequest : public csp::services::DtoBase
{
public:
	ServiceRequest();
	virtual ~ServiceRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// A key that identifies the API
	/// </summary>
	utility::string_t GetServiceName() const;
	void SetServiceName(const utility::string_t& Value);
	bool HasServiceName() const;

	/// <summary>
	/// A key that identifies the Operation on the API
	/// </summary>
	utility::string_t GetOperationName() const;
	void SetOperationName(const utility::string_t& Value);
	bool HasOperationName() const;

	/// <summary>
	/// A flag indicating this request is actually a request
	/// for information about the operation identified by
	/// Magnopus.Service.ExternalServiceProxy.Dtos.ServiceRequest.OperationName
	/// </summary>
	bool GetHelp() const;
	void SetHelp(const bool& Value);
	bool HasHelp() const;

	/// <summary>
	/// A key/value store of input values that will be provided
	/// to the API
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetParameters() const;
	void SetParameters(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasParameters() const;


protected:
	std::optional<utility::string_t> m_ServiceName;
	std::optional<utility::string_t> m_OperationName;
	std::optional<bool> m_Help;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Parameters;
};

/// <summary>
/// Abstract representation of an API response
/// </summary>
class ServiceResponse : public csp::services::DtoBase
{
public:
	ServiceResponse();
	virtual ~ServiceResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the call can be considered a success
	/// </summary>
	bool GetSuccess() const;
	void SetSuccess(const bool& Value);
	bool HasSuccess() const;

	/// <summary>
	/// The numeric status of the call
	/// </summary>
	int32_t GetStatusCode() const;
	void SetStatusCode(int32_t Value);
	bool HasStatusCode() const;

	/// <summary>
	/// Some optional justification for the numeric status
	/// </summary>
	utility::string_t GetStatusReason() const;
	void SetStatusReason(const utility::string_t& Value);
	bool HasStatusReason() const;

	/// <summary>
	/// An optional error specific code
	/// </summary>
	utility::string_t GetErrorCode() const;
	void SetErrorCode(const utility::string_t& Value);
	bool HasErrorCode() const;

	/// <summary>
	/// The raw operation result
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetOperationResult() const;
	void SetOperationResult(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasOperationResult() const;


protected:
	std::optional<bool> m_Success;
	std::optional<int32_t> m_StatusCode;
	std::optional<utility::string_t> m_StatusReason;
	std::optional<utility::string_t> m_ErrorCode;
	std::optional<std::shared_ptr<rapidjson::Document>> m_OperationResult;
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

/// <summary>
/// User Settings data transform object
/// </summary>
class SettingsDto : public csp::services::DtoBase
{
public:
	SettingsDto();
	virtual ~SettingsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the User for whom these settings apply
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Context of the user settings
	/// </summary>
	utility::string_t GetContext() const;
	bool HasContext() const;

	/// <summary>
	/// Settings of the user
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetSettings() const;
	void SetSettings(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasSettings() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_Context;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Settings;
};

/// <summary>
/// Contains information contained within a Shopify Cart
/// </summary>
class ShopifyCartDto : public csp::services::DtoBase
{
public:
	ShopifyCartDto();
	virtual ~ShopifyCartDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the Space this cart is associated to
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Id of the Cart at Shopify
	/// </summary>
	utility::string_t GetShopifyCartId() const;
	bool HasShopifyCartId() const;

	/// <summary>
	/// Lines representing items in the Shopify Cart
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetLines() const;
	void SetLines(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);
	bool HasLines() const;

	/// <summary>
	/// Total quantity of all lines
	/// </summary>
	int32_t GetTotalQuantity() const;
	bool HasTotalQuantity() const;


protected:
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_ShopifyCartId;
	std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_Lines;
	std::optional<int32_t> m_TotalQuantity;
};

/// <summary>
/// Represents a line item in a Shopify Cart
/// </summary>
class ShopifyCartLineDto : public csp::services::DtoBase
{
public:
	ShopifyCartLineDto();
	virtual ~ShopifyCartLineDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the Cart Line in the Shopify Cart
	/// </summary>
	utility::string_t GetShopifyCartLineId() const;
	void SetShopifyCartLineId(const utility::string_t& Value);
	bool HasShopifyCartLineId() const;

	/// <summary>
	/// Id of the Product Variant in Shopify
	/// </summary>
	utility::string_t GetProductVariantId() const;
	void SetProductVariantId(const utility::string_t& Value);
	bool HasProductVariantId() const;

	/// <summary>
	/// Quantity of the item
	/// </summary>
	int32_t GetQuantity() const;
	void SetQuantity(int32_t Value);
	bool HasQuantity() const;


protected:
	std::optional<utility::string_t> m_ShopifyCartLineId;
	std::optional<utility::string_t> m_ProductVariantId;
	std::optional<int32_t> m_Quantity;
};

/// <summary>
/// Contains information contained within a Shopify Cart
/// </summary>
class ShopifyCartUpdateDto : public csp::services::DtoBase
{
public:
	ShopifyCartUpdateDto();
	virtual ~ShopifyCartUpdateDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the Space this cart is associated to
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Id of the Cart at Shopify
	/// </summary>
	utility::string_t GetShopifyCartId() const;
	bool HasShopifyCartId() const;

	/// <summary>
	/// Add line updates to make to the cart
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetAddLineCartChanges() const;
	void SetAddLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);
	bool HasAddLineCartChanges() const;

	/// <summary>
	/// Remove line updates to make to the cart
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetRemoveLineCartChanges() const;
	void SetRemoveLineCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);
	bool HasRemoveLineCartChanges() const;

	/// <summary>
	/// Update line quantity updates to make to the cart
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyCartLineDto>>& GetUpdateLineQtyCartChanges() const;
	void SetUpdateLineQtyCartChanges(const std::vector<std::shared_ptr<ShopifyCartLineDto>>& Value);
	bool HasUpdateLineQtyCartChanges() const;


protected:
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_ShopifyCartId;
	std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_AddLineCartChanges;
	std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_RemoveLineCartChanges;
	std::optional<std::vector<std::shared_ptr<ShopifyCartLineDto>>> m_UpdateLineQtyCartChanges;
};

/// <summary>
/// Contains information necessary to Navigate to a storefront on Shopify
/// </summary>
class ShopifyCheckoutDto : public csp::services::DtoBase
{
public:
	ShopifyCheckoutDto();
	virtual ~ShopifyCheckoutDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The url for the store
	/// </summary>
	utility::string_t GetStoreUrl() const;
	bool HasStoreUrl() const;

	/// <summary>
	/// The url for the store
	/// </summary>
	utility::string_t GetCheckoutUrl() const;
	bool HasCheckoutUrl() const;


protected:
	std::optional<utility::string_t> m_StoreUrl;
	std::optional<utility::string_t> m_CheckoutUrl;
};

/// <summary>
/// Represents a price in Shopify with currency code
/// </summary>
class ShopifyMoney : public csp::services::DtoBase
{
public:
	ShopifyMoney();
	virtual ~ShopifyMoney();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the option, Such as Size
	/// </summary>
	double GetAmount() const;
	bool HasAmount() const;

	/// <summary>
	/// The value of the option for this variant, such as Small
	/// </summary>
	utility::string_t GetCurrencyCode() const;
	bool HasCurrencyCode() const;


protected:
	std::optional<double> m_Amount;
	std::optional<utility::string_t> m_CurrencyCode;
};

/// <summary>
/// Object containing properties for space details.
/// </summary>
class ShopifyProductDto : public csp::services::DtoBase
{
public:
	ShopifyProductDto();
	virtual ~ShopifyProductDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The date the product was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The id of the product
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The title of the product
	/// </summary>
	utility::string_t GetTitle() const;
	bool HasTitle() const;

	/// <summary>
	/// The product description
	/// </summary>
	utility::string_t GetDescription() const;
	bool HasDescription() const;

	/// <summary>
	/// A list of available product tags
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	bool HasTags() const;

	/// <summary>
	/// A list of available variants
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyProductVariants>>& GetVariants() const;
	bool HasVariants() const;

	/// <summary>
	/// A list of available media
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyProductMedia>>& GetMedia() const;
	bool HasMedia() const;


protected:
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Title;
	std::optional<utility::string_t> m_Description;
	std::optional<std::vector<utility::string_t>> m_Tags;
	std::optional<std::vector<std::shared_ptr<ShopifyProductVariants>>> m_Variants;
	std::optional<std::vector<std::shared_ptr<ShopifyProductMedia>>> m_Media;
};

/// <summary>
/// A media item of the product
/// </summary>
class ShopifyProductMedia : public csp::services::DtoBase
{
public:
	ShopifyProductMedia();
	virtual ~ShopifyProductMedia();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Media's content type
	/// </summary>
	utility::string_t GetMediaContentType() const;
	bool HasMediaContentType() const;

	/// <summary>
	/// Media's 'alt' description
	/// </summary>
	utility::string_t GetAlt() const;
	bool HasAlt() const;

	/// <summary>
	/// Url of media
	/// </summary>
	utility::string_t GetUrl() const;
	bool HasUrl() const;

	/// <summary>
	/// The width of the media, if available
	/// </summary>
	int32_t GetWidth() const;
	bool HasWidth() const;

	/// <summary>
	/// The height of the media, if available
	/// </summary>
	int32_t GetHeight() const;
	bool HasHeight() const;


protected:
	std::optional<utility::string_t> m_MediaContentType;
	std::optional<utility::string_t> m_Alt;
	std::optional<utility::string_t> m_Url;
	std::optional<int32_t> m_Width;
	std::optional<int32_t> m_Height;
};

/// <summary>
/// A variant of the original product
/// </summary>
class ShopifyProductVariants : public csp::services::DtoBase
{
public:
	ShopifyProductVariants();
	virtual ~ShopifyProductVariants();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id of the product variant
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The title of the product variant
	/// </summary>
	utility::string_t GetTitle() const;
	bool HasTitle() const;

	/// <summary>
	/// If the product variant is actually available
	/// </summary>
	bool GetAvailableForSale() const;
	bool HasAvailableForSale() const;

	/// <summary>
	/// Inventory quantity available
	/// </summary>
	int32_t GetQuantityAvailable() const;
	bool HasQuantityAvailable() const;

	std::shared_ptr<ShopifyProductMedia> GetImage() const;
	void SetImage(const std::shared_ptr<ShopifyProductMedia>& Value);
	bool HasImage() const;

	/// <summary>
	/// Selected options, such as size, for the product, if any.
	/// </summary>
	const std::vector<std::shared_ptr<ShopifyVariantOption>>& GetSelectedOptions() const;
	bool HasSelectedOptions() const;

	std::shared_ptr<ShopifyMoney> GetUnitPrice() const;
	void SetUnitPrice(const std::shared_ptr<ShopifyMoney>& Value);
	bool HasUnitPrice() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Title;
	std::optional<bool> m_AvailableForSale;
	std::optional<int32_t> m_QuantityAvailable;
	std::optional<std::shared_ptr<ShopifyProductMedia>> m_Image;
	std::optional<std::vector<std::shared_ptr<ShopifyVariantOption>>> m_SelectedOptions;
	std::optional<std::shared_ptr<ShopifyMoney>> m_UnitPrice;
};

/// <summary>
/// Contains information necessary to integrate with a particular storefront
/// on the Storefront API as well as associates that info to a Space.
/// </summary>
class ShopifyStorefrontDto : public csp::services::DtoBase
{
public:
	ShopifyStorefrontDto();
	virtual ~ShopifyStorefrontDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the Record
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Name of the store, not including the URL portion,
	/// for instance 'magtesty' in 'magtesty.myshopify.com'
	/// </summary>
	utility::string_t GetStoreName() const;
	void SetStoreName(const utility::string_t& Value);
	bool HasStoreName() const;

	/// <summary>
	/// Unique identifier of the Olympus User who setup the store
	/// </summary>
	utility::string_t GetSpaceOwnerId() const;
	bool HasSpaceOwnerId() const;

	/// <summary>
	/// Unique identifier of the Olympus User who setup the store
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Whether or not the store integration is meant to be active
	/// </summary>
	bool GetIsEcommerceActive() const;
	void SetIsEcommerceActive(const bool& Value);
	bool HasIsEcommerceActive() const;

	/// <summary>
	/// The private access token for the storefront - stored as an encrypted value
	/// </summary>
	utility::string_t GetPrivateAccessToken() const;
	void SetPrivateAccessToken(const utility::string_t& Value);
	bool HasPrivateAccessToken() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_StoreName;
	std::optional<utility::string_t> m_SpaceOwnerId;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<bool> m_IsEcommerceActive;
	std::optional<utility::string_t> m_PrivateAccessToken;
};

class ShopifyStorefrontDtoDataPage : public csp::services::DtoBase
{
public:
	ShopifyStorefrontDtoDataPage();
	virtual ~ShopifyStorefrontDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ShopifyStorefrontDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ShopifyStorefrontDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Contains information to make a request on behalf of a storefront to validate a storename, token pair
/// </summary>
class ShopifyStorefrontValidationRequest : public csp::services::DtoBase
{
public:
	ShopifyStorefrontValidationRequest();
	virtual ~ShopifyStorefrontValidationRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Name of the store, not including the URL portion,
	/// for instance 'magtesty' in 'magtesty.myshopify.com'
	/// </summary>
	utility::string_t GetStoreName() const;
	void SetStoreName(const utility::string_t& Value);
	bool HasStoreName() const;

	/// <summary>
	/// The private access token for the storefront - stored as an encrypted value
	/// </summary>
	utility::string_t GetPrivateAccessToken() const;
	void SetPrivateAccessToken(const utility::string_t& Value);
	bool HasPrivateAccessToken() const;


protected:
	std::optional<utility::string_t> m_StoreName;
	std::optional<utility::string_t> m_PrivateAccessToken;
};

/// <summary>
/// An option of a product variant, such as size or color
/// </summary>
class ShopifyVariantOption : public csp::services::DtoBase
{
public:
	ShopifyVariantOption();
	virtual ~ShopifyVariantOption();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the option, Such as Size
	/// </summary>
	utility::string_t GetOptionName() const;
	bool HasOptionName() const;

	/// <summary>
	/// The value of the option for this variant, such as Small
	/// </summary>
	utility::string_t GetOptionValue() const;
	bool HasOptionValue() const;


protected:
	std::optional<utility::string_t> m_OptionName;
	std::optional<utility::string_t> m_OptionValue;
};

/// <summary>
/// Version info related to a named slice of functionality -
/// could be a subsystem or a whole (hotspots [CSP feature], CSP [entire client platform], stripe [3rd party api])
/// </summary>
class SliceCompatibility : public csp::services::DtoBase
{
public:
	SliceCompatibility();
	virtual ~SliceCompatibility();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The minimum, lowest, oldest version this slice is compatible with -
	/// ie, the first version to support this slice or the last breaking change.
	/// A value of '*' indicates total compatibility, should that exist.
	/// </summary>
	utility::string_t GetMinimumVersion() const;
	void SetMinimumVersion(const utility::string_t& Value);
	bool HasMinimumVersion() const;


protected:
	std::optional<utility::string_t> m_MinimumVersion;
};

/// <summary>
/// options related to creating a space checkpoint
/// </summary>
class SpaceCheckpointOptions : public csp::services::DtoBase
{
public:
	SpaceCheckpointOptions();
	virtual ~SpaceCheckpointOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the space that was exported
	/// </summary>
	utility::string_t GetSpaceId() const;
	void SetSpaceId(const utility::string_t& Value);
	bool HasSpaceId() const;

	/// <summary>
	/// Id of the export to use to generate the Checkpoint
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	/// <summary>
	/// the tenant of the space
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Whether to include musubi files in the export
	/// </summary>
	bool GetIncludeMusubi() const;
	void SetIncludeMusubi(const bool& Value);
	bool HasIncludeMusubi() const;

	/// <summary>
	/// The format or output scene description target
	/// </summary>
	utility::string_t GetFormat() const;
	void SetFormat(const utility::string_t& Value);
	bool HasFormat() const;


protected:
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_IncludeMusubi;
	std::optional<utility::string_t> m_Format;
};

/// <summary>
/// response from effort to checkpoint
/// </summary>
class SpaceCheckpointResponse : public csp::services::DtoBase
{
public:
	SpaceCheckpointResponse();
	virtual ~SpaceCheckpointResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// the requested space id
	/// </summary>
	utility::string_t GetSpaceId() const;
	void SetSpaceId(const utility::string_t& Value);
	bool HasSpaceId() const;

	/// <summary>
	/// the version that was created
	/// </summary>
	int32_t GetCheckpointVersion() const;
	void SetCheckpointVersion(int32_t Value);
	bool HasCheckpointVersion() const;

	/// <summary>
	/// the id of the export used to create the checkpoint
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	std::shared_ptr<CheckpointStats> GetStats() const;
	void SetStats(const std::shared_ptr<CheckpointStats>& Value);
	bool HasStats() const;

	std::shared_ptr<AssetDetailDto> GetCheckpointAsset() const;
	void SetCheckpointAsset(const std::shared_ptr<AssetDetailDto>& Value);
	bool HasCheckpointAsset() const;


protected:
	std::optional<utility::string_t> m_SpaceId;
	std::optional<int32_t> m_CheckpointVersion;
	std::optional<utility::string_t> m_ExportId;
	std::optional<std::shared_ptr<CheckpointStats>> m_Stats;
	std::optional<std::shared_ptr<AssetDetailDto>> m_CheckpointAsset;
};

/// <summary>
/// Object containing properties for space event details.
/// </summary>
class SpaceEventDto : public csp::services::DtoBase
{
public:
	SpaceEventDto();
	virtual ~SpaceEventDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique identifier of space
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Unique identifier of space owner
	/// </summary>
	utility::string_t GetSpaceOwnerId() const;
	bool HasSpaceOwnerId() const;

	/// <summary>
	/// Unique identifier of event created with event ticket vendor
	/// </summary>
	utility::string_t GetVendorEventId() const;
	void SetVendorEventId(const utility::string_t& Value);
	bool HasVendorEventId() const;

	/// <summary>
	/// The name of event ticket vendor
	/// </summary>
	utility::string_t GetVendorName() const;
	void SetVendorName(const utility::string_t& Value);
	bool HasVendorName() const;

	/// <summary>
	/// The link to the event with the event ticket vendor
	/// </summary>
	utility::string_t GetVendorEventUri() const;
	void SetVendorEventUri(const utility::string_t& Value);
	bool HasVendorEventUri() const;

	/// <summary>
	/// Flag to indicate if space is currently ticketed
	/// </summary>
	bool GetIsTicketingActive() const;
	void SetIsTicketingActive(const bool& Value);
	bool HasIsTicketingActive() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_SpaceOwnerId;
	std::optional<utility::string_t> m_VendorEventId;
	std::optional<utility::string_t> m_VendorName;
	std::optional<utility::string_t> m_VendorEventUri;
	std::optional<bool> m_IsTicketingActive;
};

class SpaceEventDtoDataPage : public csp::services::DtoBase
{
public:
	SpaceEventDtoDataPage();
	virtual ~SpaceEventDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SpaceEventDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SpaceEventDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<SpaceEventDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Space Export data
/// </summary>
class SpaceExportDto : public csp::services::DtoBase
{
public:
	SpaceExportDto();
	virtual ~SpaceExportDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the attempt to export a space
	/// </summary>
	utility::string_t GetExportId() const;
	bool HasExportId() const;

	/// <summary>
	/// Id of the space that was exported
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Tenant of the Space
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// Run this as an async call
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;

	/// <summary>
	/// Id of the User who made the original request
	/// </summary>
	utility::string_t GetRequestUserId() const;
	void SetRequestUserId(const utility::string_t& Value);
	bool HasRequestUserId() const;

	/// <summary>
	/// Roles of the User who made the original request when the request was made
	/// </summary>
	const std::vector<utility::string_t>& GetRequestUserRoles() const;
	void SetRequestUserRoles(const std::vector<utility::string_t>& Value);
	bool HasRequestUserRoles() const;

	/// <summary>
	/// Whether or not to include files generated by musubi
	/// </summary>
	bool GetIncludeMusubiGeneratedFiles() const;
	void SetIncludeMusubiGeneratedFiles(const bool& Value);
	bool HasIncludeMusubiGeneratedFiles() const;

	/// <summary>
	/// Whether or not to raise a completion event when the export has finished
	/// </summary>
	bool GetRaiseCompletion() const;
	void SetRaiseCompletion(const bool& Value);
	bool HasRaiseCompletion() const;

	/// <summary>
	/// Data to pass through to the completion event in the case it's configured to be raised
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetPassthroughData() const;
	void SetPassthroughData(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasPassthroughData() const;


protected:
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_RequestUserId;
	std::optional<std::vector<utility::string_t>> m_RequestUserRoles;
	std::optional<bool> m_IncludeMusubiGeneratedFiles;
	std::optional<bool> m_RaiseCompletion;
	std::optional<std::map<utility::string_t, utility::string_t>> m_PassthroughData;
};

/// <summary>
/// Space Export data
/// </summary>
class SpaceImportDto : public csp::services::DtoBase
{
public:
	SpaceImportDto();
	virtual ~SpaceImportDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the export we are attempting to import
	/// </summary>
	utility::string_t GetExportId() const;
	bool HasExportId() const;

	/// <summary>
	/// Id of the space that was created
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// Id of the coalescence that was created
	/// </summary>
	utility::string_t GetCoalescingId() const;
	bool HasCoalescingId() const;

	/// <summary>
	/// Run this as an async call
	/// </summary>
	bool GetAsyncCall() const;
	void SetAsyncCall(const bool& Value);
	bool HasAsyncCall() const;

	/// <summary>
	/// Tenant of the Space
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// Id of the User who made the original request
	/// </summary>
	utility::string_t GetRequestUserId() const;
	void SetRequestUserId(const utility::string_t& Value);
	bool HasRequestUserId() const;

	/// <summary>
	/// Roles of the User who made the original request
	/// </summary>
	const std::vector<utility::string_t>& GetRequestRoles() const;
	void SetRequestRoles(const std::vector<utility::string_t>& Value);
	bool HasRequestRoles() const;


protected:
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_CoalescingId;
	std::optional<bool> m_AsyncCall;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_RequestUserId;
	std::optional<std::vector<utility::string_t>> m_RequestRoles;
};

/// <summary>
/// Additional options for importing a space
/// </summary>
class SpaceOptions : public csp::services::DtoBase
{
public:
	SpaceOptions();
	virtual ~SpaceOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// If this space requires an invite to join
	/// </summary>
	bool GetRequiresInvite() const;
	void SetRequiresInvite(const bool& Value);
	bool HasRequiresInvite() const;

	/// <summary>
	/// If this space is discoverable
	/// </summary>
	bool GetDiscoverable() const;
	void SetDiscoverable(const bool& Value);
	bool HasDiscoverable() const;

	/// <summary>
	/// IncludeMusubiGeneratedAssets
	/// </summary>
	bool GetIncludeMusubiGeneratedAssets() const;
	void SetIncludeMusubiGeneratedAssets(const bool& Value);
	bool HasIncludeMusubiGeneratedAssets() const;


protected:
	std::optional<bool> m_RequiresInvite;
	std::optional<bool> m_Discoverable;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
};

/// <summary>
/// Object containing properties for event ticket order details.
/// </summary>
class SpaceTicketDto : public csp::services::DtoBase
{
public:
	SpaceTicketDto();
	virtual ~SpaceTicketDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique identifier of event created with event ticket vendor
	/// </summary>
	utility::string_t GetVendorEventId() const;
	bool HasVendorEventId() const;

	/// <summary>
	/// The name of event ticket vendor
	/// </summary>
	utility::string_t GetVendorName() const;
	bool HasVendorName() const;

	/// <summary>
	/// Order number of the ticket
	/// </summary>
	utility::string_t GetVendorTicketId() const;
	bool HasVendorTicketId() const;

	/// <summary>
	/// Unique identifier of space
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	std::shared_ptr<TicketStatus> GetTicketStatus() const;
	void SetTicketStatus(const std::shared_ptr<TicketStatus>& Value);
	bool HasTicketStatus() const;

	/// <summary>
	/// Unique identifier of the user associated with the ticket
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// Email address of the attendee in event ticket vendor
	/// </summary>
	utility::string_t GetEmailLower() const;
	bool HasEmailLower() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_VendorEventId;
	std::optional<utility::string_t> m_VendorName;
	std::optional<utility::string_t> m_VendorTicketId;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<std::shared_ptr<TicketStatus>> m_TicketStatus;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_EmailLower;
};

/// <summary>
/// Request to start observing an execution's logs
/// </summary>
class StartObserveRequest : public csp::services::DtoBase
{
public:
	StartObserveRequest();
	virtual ~StartObserveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Optional client session identifier for the observer.
	/// </summary>
	utility::string_t GetSessionId() const;
	void SetSessionId(const utility::string_t& Value);
	bool HasSessionId() const;


protected:
	std::optional<utility::string_t> m_SessionId;
};

/// <summary>
/// Request body for starting a DLQ redrive
/// </summary>
class StartRedriveRequest : public csp::services::DtoBase
{
public:
	StartRedriveRequest();
	virtual ~StartRedriveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Optional rate limit for the redrive in messages per second.
	/// </summary>
	int32_t GetMaxMessagesPerSecond() const;
	void SetMaxMessagesPerSecond(int32_t Value);
	bool HasMaxMessagesPerSecond() const;


protected:
	std::optional<int32_t> m_MaxMessagesPerSecond;
};

/// <summary>
/// Result of starting a DLQ redrive (StartMessageMoveTask).
/// </summary>
class StartRedriveResult : public csp::services::DtoBase
{
public:
	StartRedriveResult();
	virtual ~StartRedriveResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the redrive was started successfully
	/// </summary>
	bool GetSuccess() const;
	void SetSuccess(const bool& Value);
	bool HasSuccess() const;

	/// <summary>
	/// Handle for the started message move task
	/// </summary>
	utility::string_t GetTaskHandle() const;
	void SetTaskHandle(const utility::string_t& Value);
	bool HasTaskHandle() const;

	/// <summary>
	/// Error message if the operation failed
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;


protected:
	std::optional<bool> m_Success;
	std::optional<utility::string_t> m_TaskHandle;
	std::optional<utility::string_t> m_Error;
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
/// The style(s) associated with the document
/// </summary>
class Style : public csp::services::DtoBase
{
public:
	Style();
	virtual ~Style();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the style, to be referenced in the placemark
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	std::shared_ptr<IconStyle> GetIconStyle() const;
	void SetIconStyle(const std::shared_ptr<IconStyle>& Value);
	bool HasIconStyle() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<std::shared_ptr<IconStyle>> m_IconStyle;
};

/// <summary>
/// Possible ticket status
/// </summary>
class TicketStatus : public csp::services::EnumBase
{
public:
	TicketStatus();
	virtual ~TicketStatus();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eTicketStatus
	{
		PURCHASED,
		REDEEMED

	};

	eTicketStatus GetValue() const;
	void SetValue(eTicketStatus const Value);

protected:
	eTicketStatus Value = {};
};

/// <summary>
/// Request to validate an API key secret.
/// </summary>
class ValidateSecretRequest : public csp::services::DtoBase
{
public:
	ValidateSecretRequest();
	virtual ~ValidateSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tenant owning the secret.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Environment variable name (e.g., "MESHY_API_KEY").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// Secret type that determines which validator to use (e.g., "meshy", "fal", "api_key").
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	/// <summary>
	/// Optional raw value to validate (try-before-save). Omit to validate the saved value.
	/// </summary>
	utility::string_t GetRawValue() const;
	void SetRawValue(const utility::string_t& Value);
	bool HasRawValue() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_SecretType;
	std::optional<utility::string_t> m_RawValue;
};

/// <summary>
/// Contains info related to the vendor as a provider
/// </summary>
class VendorProviderInfo : public csp::services::DtoBase
{
public:
	VendorProviderInfo();
	virtual ~VendorProviderInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The name of the vendor provider
	/// </summary>
	utility::string_t GetVendorName() const;
	void SetVendorName(const utility::string_t& Value);
	bool HasVendorName() const;

	/// <summary>
	/// Application client ID with the vendor provider
	/// </summary>
	utility::string_t GetClientId() const;
	void SetClientId(const utility::string_t& Value);
	bool HasClientId() const;

	/// <summary>
	/// The base URL for the Eventbrite API
	/// </summary>
	utility::string_t GetAuthorizeEndpoint() const;
	bool HasAuthorizeEndpoint() const;

	/// <summary>
	/// The CHS hosted redirect URL for the Eventbrite oauth flow
	/// </summary>
	utility::string_t GetOAuthRedirectUrl() const;
	bool HasOAuthRedirectUrl() const;


protected:
	std::optional<utility::string_t> m_VendorName;
	std::optional<utility::string_t> m_ClientId;
	std::optional<utility::string_t> m_AuthorizeEndpoint;
	std::optional<utility::string_t> m_OAuthRedirectUrl;
};

/// <summary>
/// map of features/products/skus
/// </summary>
class VersionMatrix : public csp::services::DtoBase
{
public:
	VersionMatrix();
	virtual ~VersionMatrix();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Current version of the service deployment
	/// </summary>
	utility::string_t GetServiceVersion() const;
	void SetServiceVersion(const utility::string_t& Value);
	bool HasServiceVersion() const;

	/// <summary>
	/// matrix of slice version compatibilities
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& GetMatrix() const;
	void SetMatrix(const std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>& Value);
	bool HasMatrix() const;


protected:
	std::optional<utility::string_t> m_ServiceVersion;
	std::optional<std::map<utility::string_t, std::shared_ptr<SliceCompatibility>>> m_Matrix;
};


} // namespace csp::services::generated::aggregationservice