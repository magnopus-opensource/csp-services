

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::aggregationservice
{

class ActivateChaosRequest;
class AdminAccountActionResponse;
class AdminBootstrapFullResponse;
class AdminBootstrapRequest;
class AdminBootstrapResponse;
class AdminHostnameDeprovisionResponse;
class AdminInsertEntitlementRequest;
class AdminInsertEntitlementResponse;
class AdminResetAndDeleteTenantRequest;
class AdminResetAndDeleteTenantResponse;
class AgentOverrideDto;
class AgentOverrideRequest;
class AloClassCompletedRequest;
class AloClassCompletedResponse;
class AltitudeMode;
class AnalyticsRecord;
class ApiVersion;
class AppUrlOfferDto;
class AppUrlOffersResponse;
class AppUrlStatusResponse;
class ApplicationSecretDto;
class ApplicationSettingsDto;
class AssetDetailDto;
class AssignmentDto;
class AssignmentUpsertRequest;
class AuditTrailDto;
class AuditTrailDtoDataPage;
class AuditTrailFilterOptionsDto;
class AuthDto;
class BackfillExecutionDto;
class BackfillExecutionItemDto;
class BackfillExecutionsRequest;
class BackfillNodeSummaryDto;
class BackfillResultDto;
class BucketPermissionRuleDto;
class BugReportAssignRequest;
class BugReportCreateRequest;
class BugReportDetailDto;
class BugReportListDto;
class BugReportListResponse;
class BugReportStatusUpdateRequest;
class BulkAssignRequest;
class BulkAssignResultDto;
class CancelRedriveResult;
class CandidateNodeDto;
class CdnFetchRequest;
class ChaosMonkeyConfig;
class CheckpointStats;
class ClaimHistoryDto;
class ClaimHistoryDtoDataPage;
class ClaimOutcomeDto;
class CoalescenceState;
class CoalescingFanOutDocument;
class CompletedNodeOutput;
class ControllerVersions;
class CreateApplicationSecretRequest;
class CreateOrganizationRequest;
class DaigramCreateRequest;
class DaigramDto;
class DaigramThumbnailRequest;
class DaigramUpdateRequest;
class DailyExecutionCount;
class DailyKeyUsage;
class DailyNodeTypeUsage;
class DailyQueueUsage;
class DailySignupCountDto;
class DailySustainedActivityHours;
class DailyUserKeyUsage;
class DefaultSettings;
class DepartmentDto;
class DepartmentUpsertRequest;
class DlqInfo;
class DuplicateSpaceOptions;
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
class ExecutionDetailDto;
class ExecutionDto;
class ExecutionListResponse;
class ExecutionLogsResponse;
class ExecutionStatusUpdateRequest;
class GacValidationBucketRule;
class GacValidationCheck;
class GacValidationConfigDto;
class GacValidationRequest;
class GacValidationRequestConfig;
class GacValidationResult;
class GraphExecutionError;
class GraphExecutionRequest;
class GraphExecutionState;
class GraphExecutionStats;
class GraphExecutionSubmitResponse;
class GraphResultResponse;
class GroupRoleDto;
class HarmonizeAloRequest;
class HarmonizeAloResponse;
class Icon;
class IconStyle;
class ImportSpaceOptions;
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
class Kml;
class LegacyObjectDto;
class LegacyObjectPageDto;
class LineString;
class LlmGenerateRequest;
class LlmGenerateResponse;
class LlmMessage;
class LlmProviderDto;
class LocalizedString;
class LogEntryDto;
class LookAt;
class MarketplaceCustomerDetailDto;
class MarketplaceCustomerDto;
class MarketplaceCustomerDtoDataPage;
class MarketplaceEntitlementDto;
class MarketplaceOrganizationBackfillReport;
class MarketplaceStatsDto;
class McpStateDto;
class McpStateWriteRequest;
class MiningSessionDto;
class MiningSessionSaveRequest;
class MiningSessionSummaryDto;
class MiningSessionSummaryDtoDataPage;
class Model;
class ModelLink;
class ModelLocation;
class ModelOrientation;
class ModelScale;
class MyOrganizationDto;
class MyOrganizationTenantDto;
class NamedFunction;
class NodeCompleteRequest;
class NodeDefinitionCreateRequest;
class NodeDefinitionDetailDto;
class NodeDefinitionListDto;
class NodeDefinitionListDtoDataPage;
class NodeDefinitionStatusRequest;
class NodeDefinitionUpdateRequest;
class NodeErrorRequest;
class NodeLogsRequest;
class NodeSummaryDto;
class ObserveResponse;
class OnboardingAttemptDto;
class OnboardingAvailabilityResponse;
class OnboardingCallbackRequest;
class OnboardingCallbackResponse;
class OnboardingConsentResponse;
class OnboardingDetailsRequest;
class OnboardingProvisionRequest;
class OnboardingProvisionResponse;
class OnboardingStateCountDto;
class OnboardingStateResponse;
class OnboardingTransitionDto;
class OnboardingWorkspaceDto;
class OrgTenantAddressCheck;
class OrgTenantProvisionRequest;
class OrgTenantSpinUpRequest;
class OrgTenantSpinUpStatus;
class OrgTenantSpinUpTransition;
class OrgTenantTeardownResult;
class OrganizationDto;
class OrganizationDtoDataPage;
class OrganizationExternalRefDto;
class OrganizationTenantDto;
class OrganizationTenantRequest;
class PersonDto;
class PersonUpsertRequest;
class Placemark;
class Point;
class PositionKml;
class ProblemDetails;
class ProcessingTimeEntry;
class ProcurementCheckAccount;
class ProcurementCheckEntitlement;
class ProcurementCheckResult;
class ProcurementCheckSummary;
class ProjectDto;
class ProjectUpsertRequest;
class PrototypeDto;
class PrototypeDtoDataPage;
class ProvisionAppUrlRequest;
class PurgeDlqResult;
class QueueBreakdownEntry;
class QueueConfigInfo;
class QueueDepthInfo;
class QueueEntryDto;
class QueueHealthInfo;
class QueueHealthSnapshot;
class QueueHealthSummary;
class QueueOutcomeDto;
class QueueOverrideDto;
class QueueOverrideUpsertRequest;
class QueueWaitSummary;
class QuotaFeatureTierConfigItem;
class RedriveTaskInfo;
class RenameMyOrganizationRequest;
class RenameOrganizationRequest;
class RosterConfigDto;
class RosterSnapshotDto;
class SaveValidatedGacRequest;
class SaveValidatedSecretRequest;
class SecretValidationCheck;
class SecretValidationResult;
class SelfReportExecutionRequest;
class SelfReportExecutionResponse;
class SelfReportNodeSummary;
class SequenceDto;
class SequenceDtoDataPage;
class ServiceRequest;
class ServiceResponse;
class ServiceVersionInfo;
class SetOrganizationOwnerRequest;
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
class SortDirection;
class SpaceCheckpointOptions;
class SpaceCheckpointResponse;
class SpaceEventDto;
class SpaceEventDtoDataPage;
class SpaceExportDto;
class SpaceImportDto;
class SpaceOptions;
class SpaceSnapshotDto;
class SpaceSnapshotDtoDataPage;
class SpaceSnapshotOptions;
class SpaceSnapshotResponse;
class SpaceTicketDto;
class StartObserveRequest;
class StartRedriveRequest;
class StartRedriveResult;
class StringDataPage;
class Style;
class SystemCreateRequest;
class SystemDto;
class SystemDtoDataPage;
class SystemThumbnailRequest;
class SystemUpdateRequest;
class TakeBatonRequest;
class TenantAppStatusDto;
class TenantAppsResponse;
class TenantHostnamesDto;
class TicketStatus;
class TopUserKeyUsage;
class TopUsersPerKeyResult;
class TypedHostnameDto;
class UpdateApplicationSecretRequest;
class UsageLedgerGroupTotal;
class UsageLedgerRow;
class UsageLedgerRowDataPage;
class UsageLedgerTotals;
class ValidateSecretRequest;
class VendorProviderInfo;
class VersionMatrix;
class WazzupCapabilitiesDto;



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
/// Result of the QA account-admin actions `POST marketplace/admin/accounts/{accountId}/reset` and
/// `.../reject`: echoes the procurement account acted on and which action ran, so the operator can confirm
/// the call before re-running the buyer sign-up flow. See account-entitlement-testing-flow.md and
/// maggyver-default-page-and-procurement-reset-plan.md.
/// </summary>
class AdminAccountActionResponse : public csp::services::DtoBase
{
public:
	AdminAccountActionResponse();
	virtual ~AdminAccountActionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The procurement account id that was acted on.
	/// </summary>
	utility::string_t GetAccountId() const;
	void SetAccountId(const utility::string_t& Value);
	bool HasAccountId() const;

	/// <summary>
	/// The action performed — `reset` or `reject`.
	/// </summary>
	utility::string_t GetAction() const;
	void SetAction(const utility::string_t& Value);
	bool HasAction() const;

	/// <summary>
	/// A human-readable summary of what happened, for the operator's confirmation toast/log.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_AccountId;
	std::optional<utility::string_t> m_Action;
	std::optional<utility::string_t> m_Message;
};

/// <summary>
/// Result of the one-shot `POST marketplace/admin/bootstrap-full`: fabricates the customer, creates the
/// tenant + admin directly (skipping Google SSO), and inserts the ACTIVE entitlement — returning the new admin
/// session (token 3) so the operator can jump straight to `provisioning/prepare`. See
/// admin-onboarding-bootstrap-plan.md.
/// </summary>
class AdminBootstrapFullResponse : public csp::services::DtoBase
{
public:
	AdminBootstrapFullResponse();
	virtual ~AdminBootstrapFullResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The created marketplace customer's id.
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The synthetic `TEST-` prefixed procurement account id assigned to the customer.
	/// </summary>
	utility::string_t GetProcurementAccountId() const;
	void SetProcurementAccountId(const utility::string_t& Value);
	bool HasProcurementAccountId() const;

	/// <summary>
	/// The synthetic `TEST-` prefixed entitlement id inserted as ACTIVE (IsTestBootstrap).
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;

	/// <summary>
	/// The created tenant's name.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The admin email the tenant was created for.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// The customer's onboarding state after the one-shot (TenantCreated).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	std::shared_ptr<AuthDto> GetAuth() const;
	void SetAuth(const std::shared_ptr<AuthDto>& Value);
	bool HasAuth() const;


protected:
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_ProcurementAccountId;
	std::optional<utility::string_t> m_EntitlementId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<std::shared_ptr<AuthDto>> m_Auth;
};

/// <summary>
/// Body for the superuser-gated admin onboarding bootstrap (`POST marketplace/admin/bootstrap` and
/// `bootstrap-full`): fabricates a marketplace customer + an ACTIVE entitlement mirror without the real
/// Marketplace JWT front-door or Procurement, so the real provisioning flow can be exercised on a test
/// environment. See admin-onboarding-bootstrap-plan.md.
/// </summary>
class AdminBootstrapRequest : public csp::services::DtoBase
{
public:
	AdminBootstrapRequest();
	virtual ~AdminBootstrapRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Optional marketplace billing account id to record on the synthetic customer (for realism / matching).
	/// </summary>
	utility::string_t GetBillingAccountId() const;
	void SetBillingAccountId(const utility::string_t& Value);
	bool HasBillingAccountId() const;

	/// <summary>
	/// Optional workspace company URL fragment (DNS label, e.g. `acme`). When provided it is validated and
	/// captured up front (advancing the customer past the naming step); when omitted the customer is left at
	/// the naming step for the operator to name in the wizard. Required for `bootstrap-full`.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// Optional workspace project URL fragment (DNS label; defaults to `global`). Only used when
	/// Magnopus.Logic.GoogleMarketplace.Dtos.AdminBootstrapRequest.CompanyUrlFragment is provided.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The admin email for the workspace. Optional for `bootstrap` (the real SSO step captures it);
	/// REQUIRED for `bootstrap-full`, which creates the tenant + admin directly without SSO.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// Optional override for the initiating Google subject id — the Google `sub` of whoever will complete
	/// the wizard SSO (the `onboarding/callback` identity guard requires it to match). When omitted, the
	/// bootstrap resolves it from the CALLER's own linked Google identity (so the same superuser who bootstraps
	/// then completes SSO as themselves). Provide this to bootstrap on behalf of another tester.
	/// </summary>
	utility::string_t GetInitiatingGoogleSubjectId() const;
	void SetInitiatingGoogleSubjectId(const utility::string_t& Value);
	bool HasInitiatingGoogleSubjectId() const;

	/// <summary>
	/// The plan id to record on the synthetic entitlement. <b>Required</b>, and validated against
	/// `GcpMarketplace:PlanTierMap` before anything is created (G58).
	///
	/// It used to be optional and unvalidated, which let the bootstrap create a customer that provisioning
	/// must then refuse — discovered only at the consent-continue step, <b>after</b> real IAM roles had been
	/// granted in a real GCP project. It is refused up front instead, and deliberately not defaulted: the
	/// obvious default maps to `basic`, which is also the fallback tier, so a wrong tier and a right one
	/// would look identical.
	/// </summary>
	utility::string_t GetPlanId() const;
	void SetPlanId(const utility::string_t& Value);
	bool HasPlanId() const;

	/// <summary>
	/// Optional product id to record on the synthetic entitlement.
	/// </summary>
	utility::string_t GetProductId() const;
	void SetProductId(const utility::string_t& Value);
	bool HasProductId() const;


protected:
	std::optional<utility::string_t> m_BillingAccountId;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_InitiatingGoogleSubjectId;
	std::optional<utility::string_t> m_PlanId;
	std::optional<utility::string_t> m_ProductId;
};

/// <summary>
/// Result of `POST marketplace/admin/bootstrap`: the fabricated customer + ACTIVE entitlement, plus the
/// onboarding session token (token 2) and wizard URL the operator uses to drive the REAL wizard from the naming
/// step through SSO and provisioning. See admin-onboarding-bootstrap-plan.md.
/// </summary>
class AdminBootstrapResponse : public csp::services::DtoBase
{
public:
	AdminBootstrapResponse();
	virtual ~AdminBootstrapResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The created marketplace customer's id.
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The synthetic `TEST-` prefixed procurement account id assigned to the customer.
	/// </summary>
	utility::string_t GetProcurementAccountId() const;
	void SetProcurementAccountId(const utility::string_t& Value);
	bool HasProcurementAccountId() const;

	/// <summary>
	/// The synthetic `TEST-` prefixed entitlement id inserted as ACTIVE (IsTestBootstrap).
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;

	/// <summary>
	/// The initiating Google subject id recorded on the customer — the Google account that MUST complete the
	/// wizard SSO for the identity guard to pass. Echoed so the operator knows which account to sign in with.
	/// </summary>
	utility::string_t GetInitiatingGoogleSubjectId() const;
	void SetInitiatingGoogleSubjectId(const utility::string_t& Value);
	bool HasInitiatingGoogleSubjectId() const;

	/// <summary>
	/// The onboarding session token (token 2) that gates the wizard endpoints.
	/// </summary>
	utility::string_t GetOnboardingToken() const;
	void SetOnboardingToken(const utility::string_t& Value);
	bool HasOnboardingToken() const;

	/// <summary>
	/// The wizard URL to open (the onboarding redirect base carrying the token in the URL fragment), mirroring
	/// what `/marketplace/signup` redirects to.
	/// </summary>
	utility::string_t GetWizardUrl() const;
	void SetWizardUrl(const utility::string_t& Value);
	bool HasWizardUrl() const;

	/// <summary>
	/// The customer's onboarding state after bootstrap (AwaitingDetails, or DetailsCaptured when a company fragment was supplied).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;


protected:
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_ProcurementAccountId;
	std::optional<utility::string_t> m_EntitlementId;
	std::optional<utility::string_t> m_InitiatingGoogleSubjectId;
	std::optional<utility::string_t> m_OnboardingToken;
	std::optional<utility::string_t> m_WizardUrl;
	std::optional<utility::string_t> m_OnboardingState;
};

/// <summary>
/// Result of `DELETE marketplace/admin/tenants/{tenantName}/hostnames/{hostname}`: releasing <b>one</b>
/// hostname's resources across every service that owns part of it.
/// This exists because the User service's own delete route can only release the half of a host that lives in its
/// Route 53 hosted zone. For an `oko` host that happens to be all of it; a `nodey-next` host also owns a
/// GCP Certificate-Manager certificate and cert-map entry that only the Aggregation service can reach, so deleting
/// one through the User service alone always left the certificate behind — silently, because the DNS half
/// succeeded and reported success.
/// </summary>
class AdminHostnameDeprovisionResponse : public csp::services::DtoBase
{
public:
	AdminHostnameDeprovisionResponse();
	virtual ~AdminHostnameDeprovisionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The hostname that was de-provisioned.
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The serving type that was unwound (`oko`, `nodey`, `nodey-next`), as recorded on the tenant.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// Whether every resource the host owned was released (or was already gone). A hostname the tenant does not
	/// record is `true` — the operation is idempotent so a retry after a partial failure converges.
	/// </summary>
	bool GetReleased() const;
	void SetReleased(const bool& Value);
	bool HasReleased() const;

	/// <summary>
	/// Non-fatal problems encountered after the quota-consuming resources were released (e.g. a leftover DNS
	/// record, or an old certificate ACM would not delete yet). Empty on a fully clean teardown.
	/// </summary>
	const std::vector<utility::string_t>& GetWarnings() const;
	void SetWarnings(const std::vector<utility::string_t>& Value);
	bool HasWarnings() const;

	/// <summary>
	/// The cloud resources that were released, keyed by a mechanism-specific name (certificate ids, cert-map
	/// entry, reissued certificate ARN, remaining SAN / alias counts). Mirrors what the de-provisioning audit
	/// record carries, so an operator sees the same detail the trail will hold.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetReleasedResources() const;
	void SetReleasedResources(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasReleasedResources() const;

	/// <summary>
	/// A human-readable summary for the operator's toast.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
	std::optional<bool> m_Released;
	std::optional<std::vector<utility::string_t>> m_Warnings;
	std::optional<std::map<utility::string_t, utility::string_t>> m_ReleasedResources;
	std::optional<utility::string_t> m_Message;
};

/// <summary>
/// Body for `POST marketplace/admin/insert-entitlement`: inserts an additional ACTIVE synthetic
/// entitlement for an existing bootstrapped customer. Exists to exercise the "customer exists, entitlement
/// arrives later" case separately from `bootstrap` (which inserts one in the same call). See
/// admin-onboarding-bootstrap-plan.md.
/// </summary>
class AdminInsertEntitlementRequest : public csp::services::DtoBase
{
public:
	AdminInsertEntitlementRequest();
	virtual ~AdminInsertEntitlementRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id of the existing marketplace customer to link the synthetic entitlement to.
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The plan id to record on the synthetic entitlement. <b>Required</b> and validated against
	/// `GcpMarketplace:PlanTierMap` before the entitlement is written, for the same reason as the
	/// bootstrap's own (G58): an entitlement that cannot resolve a tier produces a customer whose refusal
	/// only surfaces after the consent step has granted real IAM roles.
	/// </summary>
	utility::string_t GetPlanId() const;
	void SetPlanId(const utility::string_t& Value);
	bool HasPlanId() const;

	/// <summary>
	/// Optional product id to record on the synthetic entitlement.
	/// </summary>
	utility::string_t GetProductId() const;
	void SetProductId(const utility::string_t& Value);
	bool HasProductId() const;

	/// <summary>
	/// Optional `usageReportingId` (the Service Control `consumerId`) to record on the synthetic
	/// entitlement. <b>Leave it unset in the normal case</b> — the bootstrap generates a
	/// `TEST-USAGE-<guid>` value, so the local metering proof is zero-friction. Supply one only
	/// when a specific value matters: giving two customers the same id, or reusing an id an earlier run
	/// already has `ReportedBatchDocument` rows for.
	/// ⚠ A fabricated id is only ever <em>metered</em> when
	/// `LocalOverrides:UsageReporting:AllowSyntheticEntitlements` is set in Local; the production
	/// resolver still refuses the entitlement for carrying `IsTestBootstrap`, whatever this says.
	/// </summary>
	utility::string_t GetUsageReportingId() const;
	void SetUsageReportingId(const utility::string_t& Value);
	bool HasUsageReportingId() const;


protected:
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_PlanId;
	std::optional<utility::string_t> m_ProductId;
	std::optional<utility::string_t> m_UsageReportingId;
};

/// <summary>
/// Result of `POST marketplace/admin/insert-entitlement`: the synthetic ACTIVE entitlement inserted for
/// the customer. See admin-onboarding-bootstrap-plan.md.
/// </summary>
class AdminInsertEntitlementResponse : public csp::services::DtoBase
{
public:
	AdminInsertEntitlementResponse();
	virtual ~AdminInsertEntitlementResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer the entitlement was linked to.
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The synthetic `TEST-` prefixed entitlement id.
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;

	/// <summary>
	/// The entitlement state it was inserted as (Active).
	/// </summary>
	utility::string_t GetEntitlementState() const;
	void SetEntitlementState(const utility::string_t& Value);
	bool HasEntitlementState() const;


protected:
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_EntitlementId;
	std::optional<utility::string_t> m_EntitlementState;
};

/// <summary>
/// Optional body for `POST marketplace/admin/accounts/{accountId}/reset-and-delete-tenant`. Every field is
/// optional and the whole body may be omitted, which reproduces the original behaviour exactly: resolve the local
/// marketplace customer for the account and tear down what it points at.
/// The fields exist for the population that behaviour cannot reach — customers whose local rows were deleted
/// <b>before</b> URL de-provisioning existed. Their tenants, DNS records, CloudFront aliases and certificates were
/// left behind, and with no customer row there is nothing to resolve a tenant name from, so the endpoint used to
/// 404 on precisely the accounts that most need cleaning up.
/// </summary>
class AdminResetAndDeleteTenantRequest : public csp::services::DtoBase
{
public:
	AdminResetAndDeleteTenantRequest();
	virtual ~AdminResetAndDeleteTenantRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant to tear down when no local marketplace customer exists for the account.
	/// A <b>fallback, not an override</b>: when a customer row is found, its own tenant is used and this is
	/// ignored. That ordering is deliberate — the customer row is authoritative, and letting a typed-in name
	/// redirect a teardown away from it would turn a typo into a deleted bystander tenant.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Explicit acknowledgement that the tenant may record no provenance, which the teardown otherwise refuses.
	/// Needed for the legacy population this whole DTO exists for: `TenantDocument.CreatedVia` post-dates
	/// those tenants, so they carry no stamp and failing closed would refuse them all. It widens <i>unknown</i>
	/// provenance to allowed and nothing else — a tenant that positively records a non-marketplace origin is still
	/// refused. Opt-in per call, recorded on the teardown audit, and irrelevant when a customer row is found (that
	/// path keeps its own predicate).
	/// </summary>
	bool GetAcknowledgeUnknownProvenance() const;
	void SetAcknowledgeUnknownProvenance(const bool& Value);
	bool HasAcknowledgeUnknownProvenance() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_AcknowledgeUnknownProvenance;
};

/// <summary>
/// Result of `POST marketplace/admin/accounts/{accountId}/reset-and-delete-tenant`: the most extreme QA
/// action, which de-provisions the tenant's app URLs, releases its GCP resources, deletes the tenant, purges the
/// local marketplace rows and (for a real procurement account) resets the account.
/// Reports <b>per step</b> rather than a single success flag, for two reasons. The steps are not equally
/// reversible — a URL can be re-provisioned, a deleted tenant cannot — so "it failed" is not actionable without
/// knowing where. And a partial run is expected rather than exceptional: the operation deliberately continues
/// past a URL failure, so a response that collapsed to one boolean would either hide a leaked certificate slot
/// or report a completed teardown as a failure.
/// </summary>
class AdminResetAndDeleteTenantResponse : public csp::services::DtoBase
{
public:
	AdminResetAndDeleteTenantResponse();
	virtual ~AdminResetAndDeleteTenantResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The procurement account id that was acted on.
	/// </summary>
	utility::string_t GetAccountId() const;
	void SetAccountId(const utility::string_t& Value);
	bool HasAccountId() const;

	/// <summary>
	/// The local marketplace customer id that was torn down, or `null` on the orphaned-tenant path (there was
	/// no customer row to tear down — that is the whole reason that path exists).
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The tenant that was deleted, or `null` if the customer had none.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// How the tenant was identified: `customer` when a local marketplace customer row supplied it, or
	/// `tenantName` when the operator supplied it directly because no such row exists.
	/// Reported because the two paths do materially different amounts of work — the orphaned path resets no
	/// entitlements, purges no local rows (there are none) and cannot delete a tenant admin it does not know
	/// about — so "the teardown succeeded" means something different in each, and the operator needs to know
	/// which one ran.
	/// </summary>
	utility::string_t GetResolvedVia() const;
	void SetResolvedVia(const utility::string_t& Value);
	bool HasResolvedVia() const;

	/// <summary>
	/// Whether the tenant <b>admin user</b> deletion was queued alongside the tenant. `false` when no admin
	/// user id was recorded — a stale admin account then survives the tenant and must be removed by hand.
	/// </summary>
	bool GetAdminUserDeletionQueued() const;
	void SetAdminUserDeletionQueued(const bool& Value);
	bool HasAdminUserDeletionQueued() const;

	/// <summary>
	/// Whether <b>every</b> app URL was released. When `false`, the teardown still completed but at least one
	/// CloudFront alias / certificate SAN / DNS record was left behind and is now orphaned — see
	/// Magnopus.Logic.GoogleMarketplace.Dtos.AdminResetAndDeleteTenantResponse.UrlErrors.
	/// </summary>
	bool GetUrlsReleased() const;
	void SetUrlsReleased(const bool& Value);
	bool HasUrlsReleased() const;

	/// <summary>
	/// The hostnames that were released (or were already absent).
	/// </summary>
	const std::vector<utility::string_t>& GetReleasedHostnames() const;
	void SetReleasedHostnames(const std::vector<utility::string_t>& Value);
	bool HasReleasedHostnames() const;

	/// <summary>
	/// Why any hostname could not be released. Empty when Magnopus.Logic.GoogleMarketplace.Dtos.AdminResetAndDeleteTenantResponse.UrlsReleased is
	/// `true`.
	/// </summary>
	const std::vector<utility::string_t>& GetUrlErrors() const;
	void SetUrlErrors(const std::vector<utility::string_t>& Value);
	bool HasUrlErrors() const;

	/// <summary>
	/// Non-fatal problems from the URL teardown (e.g. an orphaned old certificate).
	/// </summary>
	const std::vector<utility::string_t>& GetUrlWarnings() const;
	void SetUrlWarnings(const std::vector<utility::string_t>& Value);
	bool HasUrlWarnings() const;

	/// <summary>
	/// Whether the tenant's whole CDN leaf (the path rule on our shared URL map, its backend service, NEG and
	/// HMAC key) was released. When `false`, the teardown still completed but at least one of them is now
	/// orphaned in our host project — see Magnopus.Logic.GoogleMarketplace.Dtos.AdminResetAndDeleteTenantResponse.CdnLeafStranded. `true` when the
	/// tenant never had a leaf. Mirrors `OrgTenantTeardownResult.CdnLeafReleased`.
	/// </summary>
	bool GetCdnLeafReleased() const;
	void SetCdnLeafReleased(const bool& Value);
	bool HasCdnLeafReleased() const;

	/// <summary>
	/// Why any CDN-leaf resource could not be released. Empty when
	/// Magnopus.Logic.GoogleMarketplace.Dtos.AdminResetAndDeleteTenantResponse.CdnLeafReleased is `true`.
	/// </summary>
	const std::vector<utility::string_t>& GetCdnLeafStranded() const;
	void SetCdnLeafStranded(const std::vector<utility::string_t>& Value);
	bool HasCdnLeafStranded() const;

	/// <summary>
	/// Whether the tenant + admin deletion was queued.
	/// </summary>
	bool GetTenantDeletionQueued() const;
	void SetTenantDeletionQueued(const bool& Value);
	bool HasTenantDeletionQueued() const;

	/// <summary>
	/// Whether the Procurement account reset ran. `false` for a synthetic (`TEST-`) account, which has
	/// no Procurement-side account to reset — the local row purge is its equivalent.
	/// </summary>
	bool GetAccountReset() const;
	void SetAccountReset(const bool& Value);
	bool HasAccountReset() const;

	/// <summary>
	/// A human-readable summary for the operator's confirmation toast/log.
	/// </summary>
	utility::string_t GetMessage() const;
	void SetMessage(const utility::string_t& Value);
	bool HasMessage() const;


protected:
	std::optional<utility::string_t> m_AccountId;
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_ResolvedVia;
	std::optional<bool> m_AdminUserDeletionQueued;
	std::optional<bool> m_UrlsReleased;
	std::optional<std::vector<utility::string_t>> m_ReleasedHostnames;
	std::optional<std::vector<utility::string_t>> m_UrlErrors;
	std::optional<std::vector<utility::string_t>> m_UrlWarnings;
	std::optional<bool> m_CdnLeafReleased;
	std::optional<std::vector<utility::string_t>> m_CdnLeafStranded;
	std::optional<bool> m_TenantDeletionQueued;
	std::optional<bool> m_AccountReset;
	std::optional<utility::string_t> m_Message;
};

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
/// One provisionable app, and what provisioning it would produce for this tenant.
/// </summary>
class AppUrlOfferDto : public csp::services::DtoBase
{
public:
	AppUrlOfferDto();
	virtual ~AppUrlOfferDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The app key to POST to.
	/// </summary>
	utility::string_t GetAppKey() const;
	void SetAppKey(const utility::string_t& Value);
	bool HasAppKey() const;

	/// <summary>
	/// The app's human-facing name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The leftmost hostname label, for previewing the shape while fragments are being typed.
	/// </summary>
	utility::string_t GetHostnameLabel() const;
	void SetHostnameLabel(const utility::string_t& Value);
	bool HasHostnameLabel() const;

	/// <summary>
	/// The product domain suffix this environment builds app URLs under.
	/// </summary>
	utility::string_t GetDomainSuffix() const;
	void SetDomainSuffix(const utility::string_t& Value);
	bool HasDomainSuffix() const;

	/// <summary>
	/// The hostname provisioning would produce, or null when the tenant has no workspace address.
	/// </summary>
	utility::string_t GetHostnamePreview() const;
	void SetHostnamePreview(const utility::string_t& Value);
	bool HasHostnamePreview() const;

	/// <summary>
	/// True when the tenant already has a workspace address, so none need be collected.
	/// </summary>
	bool GetHasUrlFragments() const;
	void SetHasUrlFragments(const bool& Value);
	bool HasHasUrlFragments() const;


protected:
	std::optional<utility::string_t> m_AppKey;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_HostnameLabel;
	std::optional<utility::string_t> m_DomainSuffix;
	std::optional<utility::string_t> m_HostnamePreview;
	std::optional<bool> m_HasUrlFragments;
};

/// <summary>
/// The apps an operator may provision for a tenant in this environment.
/// </summary>
class AppUrlOffersResponse : public csp::services::DtoBase
{
public:
	AppUrlOffersResponse();
	virtual ~AppUrlOffersResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The offers. Empty when this environment offers no hand-provisioned app URLs.
	/// </summary>
	const std::vector<std::shared_ptr<AppUrlOfferDto>>& GetApps() const;
	void SetApps(const std::vector<std::shared_ptr<AppUrlOfferDto>>& Value);
	bool HasApps() const;


protected:
	std::optional<std::vector<std::shared_ptr<AppUrlOfferDto>>> m_Apps;
};

/// <summary>
/// Where one app URL has got to.
/// </summary>
class AppUrlStatusResponse : public csp::services::DtoBase
{
public:
	AppUrlStatusResponse();
	virtual ~AppUrlStatusResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The app this describes.
	/// </summary>
	utility::string_t GetAppKey() const;
	void SetAppKey(const utility::string_t& Value);
	bool HasAppKey() const;

	/// <summary>
	/// The app's human-facing name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The hostname, recorded if provisioning got that far and derived otherwise.
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// `unprovisioned`, `provisioning`, `ready`, `failed` or `cancelled`.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// True when the URL is provisioned and serving.
	/// </summary>
	bool GetReady() const;
	void SetReady(const bool& Value);
	bool HasReady() const;

	/// <summary>
	/// The last provisioning step that advanced.
	/// </summary>
	utility::string_t GetLastCompletedStep() const;
	void SetLastCompletedStep(const utility::string_t& Value);
	bool HasLastCompletedStep() const;

	/// <summary>
	/// Steps completed, of the recipe's total — the progress signal.
	/// </summary>
	int32_t GetStepsCompleted() const;
	void SetStepsCompleted(int32_t Value);
	bool HasStepsCompleted() const;

	int32_t GetStepCount() const;
	void SetStepCount(int32_t Value);
	bool HasStepCount() const;

	/// <summary>
	/// The most recent error recorded on the job.
	/// </summary>
	utility::string_t GetLastError() const;
	void SetLastError(const utility::string_t& Value);
	bool HasLastError() const;

	/// <summary>
	/// Consecutive failed attempts, and the cap after which the job stops retrying.
	/// </summary>
	int32_t GetAttemptCount() const;
	void SetAttemptCount(int32_t Value);
	bool HasAttemptCount() const;

	int32_t GetMaxAttempts() const;
	void SetMaxAttempts(int32_t Value);
	bool HasMaxAttempts() const;

	/// <summary>
	/// The recorded hostname's DNS-stage status, for continuity with the Hostnames table.
	/// </summary>
	utility::string_t GetDnsStatus() const;
	void SetDnsStatus(const utility::string_t& Value);
	bool HasDnsStatus() const;


protected:
	std::optional<utility::string_t> m_AppKey;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_State;
	std::optional<bool> m_Ready;
	std::optional<utility::string_t> m_LastCompletedStep;
	std::optional<int32_t> m_StepsCompleted;
	std::optional<int32_t> m_StepCount;
	std::optional<utility::string_t> m_LastError;
	std::optional<int32_t> m_AttemptCount;
	std::optional<int32_t> m_MaxAttempts;
	std::optional<utility::string_t> m_DnsStatus;
};

/// <summary>
/// Data transfer object for an application secret definition.
/// </summary>
class ApplicationSecretDto : public csp::services::DtoBase
{
public:
	ApplicationSecretDto();
	virtual ~ApplicationSecretDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier.
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Application name (e.g., "Nodey").
	/// </summary>
	utility::string_t GetApplicationName() const;
	bool HasApplicationName() const;

	/// <summary>
	/// Human-readable name (e.g., "Meshy API Key").
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Environment variable / secret key name (e.g., "MESHY_API_KEY").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	bool HasEnvVarName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac" (GCP Service Account JSON).
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants. Magnopus-admin only.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;

	/// <summary>
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

	/// <summary>
	/// When the definition was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// When the definition was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_ApplicationName;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
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

	/// <summary>
	/// Classification tags (e.g. "marketplace").
	/// </summary>
	const std::vector<utility::string_t>& GetTags() const;
	void SetTags(const std::vector<utility::string_t>& Value);
	bool HasTags() const;


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
	std::optional<std::vector<utility::string_t>> m_Tags;
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
/// The distinct values present in the audit trail, for the viewer's filter dropdowns.
/// Populated from the data rather than a hardcoded list, so a newly audited controller shows up
/// in the UI without a frontend change.
/// </summary>
class AuditTrailFilterOptionsDto : public csp::services::DtoBase
{
public:
	AuditTrailFilterOptionsDto();
	virtual ~AuditTrailFilterOptionsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Distinct controllers, sorted.
	/// </summary>
	const std::vector<utility::string_t>& GetControllers() const;
	void SetControllers(const std::vector<utility::string_t>& Value);
	bool HasControllers() const;

	/// <summary>
	/// Distinct actions, sorted.
	/// </summary>
	const std::vector<utility::string_t>& GetActions() const;
	void SetActions(const std::vector<utility::string_t>& Value);
	bool HasActions() const;

	/// <summary>
	/// Distinct tenant names, sorted.
	/// </summary>
	const std::vector<utility::string_t>& GetTenants() const;
	void SetTenants(const std::vector<utility::string_t>& Value);
	bool HasTenants() const;

	/// <summary>
	/// Distinct acting-user emails, sorted.
	/// </summary>
	const std::vector<utility::string_t>& GetUsers() const;
	void SetUsers(const std::vector<utility::string_t>& Value);
	bool HasUsers() const;

	/// <summary>
	/// Distinct HTTP status codes, ascending.
	/// </summary>
	const std::vector<int32_t>& GetStatusCodes() const;
	void SetStatusCodes(const std::vector<int32_t>& Value);
	bool HasStatusCodes() const;

	/// <summary>
	/// Column names the trail can be sorted by. Everything else falls back to newest-first.
	/// </summary>
	const std::vector<utility::string_t>& GetSortableColumns() const;
	void SetSortableColumns(const std::vector<utility::string_t>& Value);
	bool HasSortableColumns() const;

	/// <summary>
	/// True when at least one list hit its cap and is therefore not exhaustive.
	/// </summary>
	bool GetTruncated() const;
	void SetTruncated(const bool& Value);
	bool HasTruncated() const;


protected:
	std::optional<std::vector<utility::string_t>> m_Controllers;
	std::optional<std::vector<utility::string_t>> m_Actions;
	std::optional<std::vector<utility::string_t>> m_Tenants;
	std::optional<std::vector<utility::string_t>> m_Users;
	std::optional<std::vector<int32_t>> m_StatusCodes;
	std::optional<std::vector<utility::string_t>> m_SortableColumns;
	std::optional<bool> m_Truncated;
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
	std::optional<utility::string_t> m_DeviceId;
	std::optional<std::shared_ptr<DefaultSettings>> m_DefaultSettings;
};

/// <summary>
/// Compact view of a backfilled execution, for verification reads.
/// </summary>
class BackfillExecutionDto : public csp::services::DtoBase
{
public:
	BackfillExecutionDto();
	virtual ~BackfillExecutionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the document exists.
	/// </summary>
	bool GetExists() const;
	void SetExists(const bool& Value);
	bool HasExists() const;

	/// <summary>
	/// Execution id.
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Tenant name.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Status (lowercase).
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Historical CreatedAt as persisted.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Node count.
	/// </summary>
	int32_t GetNodeCount() const;
	void SetNodeCount(int32_t Value);
	bool HasNodeCount() const;

	/// <summary>
	/// Number of persisted node summaries.
	/// </summary>
	int32_t GetNodeSummaryCount() const;
	void SetNodeSummaryCount(int32_t Value);
	bool HasNodeSummaryCount() const;

	/// <summary>
	/// Persisted GenAI key requirements.
	/// </summary>
	const std::map<utility::string_t, std::vector<utility::string_t>>& GetNodeKeyRequirements() const;
	void SetNodeKeyRequirements(const std::map<utility::string_t, std::vector<utility::string_t>>& Value);
	bool HasNodeKeyRequirements() const;


protected:
	std::optional<bool> m_Exists;
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<int32_t> m_NodeCount;
	std::optional<int32_t> m_NodeSummaryCount;
	std::optional<std::map<utility::string_t, std::vector<utility::string_t>>> m_NodeKeyRequirements;
};

/// <summary>
/// A single reconstructed execution.
/// </summary>
class BackfillExecutionItemDto : public csp::services::DtoBase
{
public:
	BackfillExecutionItemDto();
	virtual ~BackfillExecutionItemDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Deterministic synthetic execution id (unique).
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Tenant the graph belongs to.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Optional user id (must be a 24-hex Mongo ObjectId, else dropped).
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Optional graph hash.
	/// </summary>
	utility::string_t GetGraphHash() const;
	void SetGraphHash(const utility::string_t& Value);
	bool HasGraphHash() const;

	/// <summary>
	/// Optional graph name.
	/// </summary>
	utility::string_t GetGraphName() const;
	void SetGraphName(const utility::string_t& Value);
	bool HasGraphName() const;

	/// <summary>
	/// Number of nodes in the graph.
	/// </summary>
	int32_t GetNodeCount() const;
	void SetNodeCount(int32_t Value);
	bool HasNodeCount() const;

	/// <summary>
	/// Number of connections in the graph.
	/// </summary>
	int32_t GetConnectionCount() const;
	void SetConnectionCount(int32_t Value);
	bool HasConnectionCount() const;

	/// <summary>
	/// Status string (defaults to "completed").
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Historical execution timestamp (drives the daily usage buckets).
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Optional start time.
	/// </summary>
	utility::string_t GetStartedAt() const;
	void SetStartedAt(const utility::string_t& Value);
	bool HasStartedAt() const;

	/// <summary>
	/// Optional completion time.
	/// </summary>
	utility::string_t GetCompletedAt() const;
	void SetCompletedAt(const utility::string_t& Value);
	bool HasCompletedAt() const;

	/// <summary>
	/// Optional duration in milliseconds.
	/// </summary>
	double GetDurationMs() const;
	void SetDurationMs(double Value);
	bool HasDurationMs() const;

	/// <summary>
	/// All nodes in the graph (every type) — drives node-type usage.
	/// </summary>
	const std::vector<std::shared_ptr<BackfillNodeSummaryDto>>& GetNodeSummaries() const;
	void SetNodeSummaries(const std::vector<std::shared_ptr<BackfillNodeSummaryDto>>& Value);
	bool HasNodeSummaries() const;

	/// <summary>
	/// GenAI node type -> required secret keys — drives key usage (GenAI only).
	/// </summary>
	const std::map<utility::string_t, std::vector<utility::string_t>>& GetNodeKeyRequirements() const;
	void SetNodeKeyRequirements(const std::map<utility::string_t, std::vector<utility::string_t>>& Value);
	bool HasNodeKeyRequirements() const;

	/// <summary>
	/// Optional parameters.
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetParameters() const;
	void SetParameters(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasParameters() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_GraphHash;
	std::optional<utility::string_t> m_GraphName;
	std::optional<int32_t> m_NodeCount;
	std::optional<int32_t> m_ConnectionCount;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_StartedAt;
	std::optional<utility::string_t> m_CompletedAt;
	std::optional<double> m_DurationMs;
	std::optional<std::vector<std::shared_ptr<BackfillNodeSummaryDto>>> m_NodeSummaries;
	std::optional<std::map<utility::string_t, std::vector<utility::string_t>>> m_NodeKeyRequirements;
	std::optional<std::map<utility::string_t, utility::string_t>> m_Parameters;
};

/// <summary>
/// Request body for backfilling a batch of reconstructed executions.
/// </summary>
class BackfillExecutionsRequest : public csp::services::DtoBase
{
public:
	BackfillExecutionsRequest();
	virtual ~BackfillExecutionsRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The reconstructed executions to insert/replace.
	/// </summary>
	const std::vector<std::shared_ptr<BackfillExecutionItemDto>>& GetExecutions() const;
	void SetExecutions(const std::vector<std::shared_ptr<BackfillExecutionItemDto>>& Value);
	bool HasExecutions() const;

	/// <summary>
	/// When true, existing documents (matched by ExecutionId) are replaced; otherwise skipped.
	/// </summary>
	bool GetOverwrite() const;
	void SetOverwrite(const bool& Value);
	bool HasOverwrite() const;


protected:
	std::optional<std::vector<std::shared_ptr<BackfillExecutionItemDto>>> m_Executions;
	std::optional<bool> m_Overwrite;
};

/// <summary>
/// A node within a backfilled execution.
/// </summary>
class BackfillNodeSummaryDto : public csp::services::DtoBase
{
public:
	BackfillNodeSummaryDto();
	virtual ~BackfillNodeSummaryDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node id.
	/// </summary>
	utility::string_t GetNodeId() const;
	void SetNodeId(const utility::string_t& Value);
	bool HasNodeId() const;

	/// <summary>
	/// Node type.
	/// </summary>
	utility::string_t GetNodeType() const;
	void SetNodeType(const utility::string_t& Value);
	bool HasNodeType() const;

	/// <summary>
	/// Node status (defaults to "completed"; must be "completed" to count toward key usage).
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_NodeId;
	std::optional<utility::string_t> m_NodeType;
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// Result of a backfill upsert batch.
/// </summary>
class BackfillResultDto : public csp::services::DtoBase
{
public:
	BackfillResultDto();
	virtual ~BackfillResultDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// New documents inserted.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// Existing documents replaced.
	/// </summary>
	int32_t GetUpdated() const;
	void SetUpdated(int32_t Value);
	bool HasUpdated() const;

	/// <summary>
	/// Existing documents left untouched.
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;

	/// <summary>
	/// Items that errored.
	/// </summary>
	int32_t GetFailed() const;
	void SetFailed(int32_t Value);
	bool HasFailed() const;

	/// <summary>
	/// Capped list of error messages.
	/// </summary>
	const std::vector<utility::string_t>& GetErrors() const;
	void SetErrors(const std::vector<utility::string_t>& Value);
	bool HasErrors() const;


protected:
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Updated;
	std::optional<int32_t> m_Skipped;
	std::optional<int32_t> m_Failed;
	std::optional<std::vector<utility::string_t>> m_Errors;
};

/// <summary>
/// DTO for a bucket permission rule.
/// </summary>
class BucketPermissionRuleDto : public csp::services::DtoBase
{
public:
	BucketPermissionRuleDto();
	virtual ~BucketPermissionRuleDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// GCS bucket name. Supports {env} token for environment substitution.
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// Required IAM permissions (e.g., "storage.objects.get").
	/// </summary>
	const std::vector<utility::string_t>& GetPermissions() const;
	void SetPermissions(const std::vector<utility::string_t>& Value);
	bool HasPermissions() const;


protected:
	std::optional<utility::string_t> m_BucketName;
	std::optional<std::vector<utility::string_t>> m_Permissions;
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
/// Result of cancelling a running redrive shovel.
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
/// A node type the admin may create a BYO-GPU queue override for. The picklist is the
/// constrained set of GPU-accelerated node definitions — never free text, never every node —
/// so a customer can only redirect work that could genuinely run on their own inference stack.
/// </summary>
class CandidateNodeDto : public csp::services::DtoBase
{
public:
	CandidateNodeDto();
	virtual ~CandidateNodeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node type identifier (the override key and match key at publish time).
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// Human-readable label for the picklist (falls back to the node type id).
	/// </summary>
	utility::string_t GetLabel() const;
	void SetLabel(const utility::string_t& Value);
	bool HasLabel() const;


protected:
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<utility::string_t> m_Label;
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
/// Request to create a new application secret definition.
/// </summary>
class CreateApplicationSecretRequest : public csp::services::DtoBase
{
public:
	CreateApplicationSecretRequest();
	virtual ~CreateApplicationSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable name (e.g., "Meshy API Key").
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Environment variable / secret key name (e.g., "MESHY_API_KEY").
	/// </summary>
	utility::string_t GetEnvVarName() const;
	void SetEnvVarName(const utility::string_t& Value);
	bool HasEnvVarName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category (e.g., "Google Cloud", "3D Generation").
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac".
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// If omitted, auto-populated with MusubiKey_{EnvVarName} convention.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;

	/// <summary>
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

	/// <summary>
	/// Optional per-tier quota limit configurations.
	/// Processed by Aggregation to upsert QuotaFeatureTier records in the Tracking service.
	/// </summary>
	const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& GetTierConfigs() const;
	void SetTierConfigs(const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& Value);
	bool HasTierConfigs() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_EnvVarName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
	std::optional<std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>> m_TierConfigs;
};

/// <summary>
/// Creates an organization over an existing tenant, which becomes its administrative tenant.
/// </summary>
class CreateOrganizationRequest : public csp::services::DtoBase
{
public:
	CreateOrganizationRequest();
	virtual ~CreateOrganizationRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The organization's name. Must be unique.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant that becomes the organization's administrative tenant. Must exist and be unowned.
	/// </summary>
	utility::string_t GetAdministrativeTenantName() const;
	void SetAdministrativeTenantName(const utility::string_t& Value);
	bool HasAdministrativeTenantName() const;

	/// <summary>
	/// The owning user's id. Optional — a Magnopus-internal organization need not have one.
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;

	/// <summary>
	/// The external reference's source, when the organization has one. Supply both this and
	/// Magnopus.Logic.Organization.Dtos.CreateOrganizationRequest.ExternalId or neither.
	/// </summary>
	utility::string_t GetExternalRefSource() const;
	void SetExternalRefSource(const utility::string_t& Value);
	bool HasExternalRefSource() const;

	/// <summary>
	/// The identifier the external system knows this organization by.
	/// </summary>
	utility::string_t GetExternalId() const;
	void SetExternalId(const utility::string_t& Value);
	bool HasExternalId() const;

	/// <summary>
	/// The company URL fragment every tenant this organization owns is addressed under (the
	/// `acme` in `nodey.global.acme.oko.live`). Optional here: an organization created by hand
	/// usually has none yet, and the spin-up flow falls back to its administrative tenant's.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;


protected:
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_AdministrativeTenantName;
	std::optional<utility::string_t> m_OwnerUserId;
	std::optional<utility::string_t> m_ExternalRefSource;
	std::optional<utility::string_t> m_ExternalId;
	std::optional<utility::string_t> m_CompanyUrlFragment;
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
/// A per-day signup count.
/// </summary>
class DailySignupCountDto : public csp::services::DtoBase
{
public:
	DailySignupCountDto();
	virtual ~DailySignupCountDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The calendar day (`yyyy-MM-dd`).
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// How many customers signed up that day.
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
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
/// Per-(date, user) activation count of a key, restricted to the top-N users.
/// Drives the per-day stacked-area chart (one band per user).
/// </summary>
class DailyUserKeyUsage : public csp::services::DtoBase
{
public:
	DailyUserKeyUsage();
	virtual ~DailyUserKeyUsage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Date string in "yyyy-MM-dd" format.
	/// </summary>
	utility::string_t GetDate() const;
	void SetDate(const utility::string_t& Value);
	bool HasDate() const;

	/// <summary>
	/// The user id this count belongs to.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// Number of completed node activations of the key by this user on this date.
	/// </summary>
	int32_t GetCount() const;
	void SetCount(int32_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_Date;
	std::optional<utility::string_t> m_UserId;
	std::optional<int32_t> m_Count;
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
	/// Raw RabbitMQ queue name of the DLQ
	/// </summary>
	utility::string_t GetQn() const;
	void SetQn(const utility::string_t& Value);
	bool HasQn() const;


protected:
	std::optional<int32_t> m_D;
	std::optional<utility::string_t> m_Qn;
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
/// DTO for GAC validation configuration.
/// </summary>
class GacValidationConfigDto : public csp::services::DtoBase
{
public:
	GacValidationConfigDto();
	virtual ~GacValidationConfigDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether to probe Vertex AI with a lightweight generateContent call.
	/// </summary>
	bool GetCheckVertexAi() const;
	void SetCheckVertexAi(const bool& Value);
	bool HasCheckVertexAi() const;

	/// <summary>
	/// Buckets and required permissions to verify.
	/// </summary>
	const std::vector<std::shared_ptr<BucketPermissionRuleDto>>& GetRequiredBuckets() const;
	void SetRequiredBuckets(const std::vector<std::shared_ptr<BucketPermissionRuleDto>>& Value);
	bool HasRequiredBuckets() const;

	/// <summary>
	/// Project-level IAM permissions to verify.
	/// </summary>
	const std::vector<utility::string_t>& GetRequiredProjectPermissions() const;
	void SetRequiredProjectPermissions(const std::vector<utility::string_t>& Value);
	bool HasRequiredProjectPermissions() const;


protected:
	std::optional<bool> m_CheckVertexAi;
	std::optional<std::vector<std::shared_ptr<BucketPermissionRuleDto>>> m_RequiredBuckets;
	std::optional<std::vector<utility::string_t>> m_RequiredProjectPermissions;
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
	/// Error detail. Either a plain string (top-level / system-level failures)
	/// or a structured object ({key, headline, action}) for per-node errors.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetError() const;
	void SetError(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasError() const;

	/// <summary>
	/// Partial outputs from whichever batch slots succeeded before the failure.
	/// Only present for batch nodes where some slots completed successfully.
	/// Values are storage keys (graph-executions/…) that are transformed to URLs
	/// by TransformCompletedNodeUrls before being returned to the frontend.
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& GetPartialData() const;
	void SetPartialData(const std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>& Value);
	bool HasPartialData() const;


protected:
	std::optional<utility::string_t> m_NodeId;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Error;
	std::optional<std::map<utility::string_t, std::shared_ptr<rapidjson::Document>>> m_PartialData;
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

	/// <summary>
	/// Per-node error details when multiple nodes failed (PartialExecutionError)
	/// </summary>
	const std::vector<std::shared_ptr<GraphExecutionError>>& GetFailedNodes() const;
	void SetFailedNodes(const std::vector<std::shared_ptr<GraphExecutionError>>& Value);
	bool HasFailedNodes() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_Status;
	std::optional<int32_t> m_Progress;
	std::optional<utility::string_t> m_TenantName;
	std::optional<std::vector<std::shared_ptr<CompletedNodeOutput>>> m_CompletedNodes;
	std::optional<utility::string_t> m_CurrentNode;
	std::optional<std::shared_ptr<GraphExecutionError>> m_Error;
	std::optional<std::vector<std::shared_ptr<GraphExecutionError>>> m_FailedNodes;
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
/// Response from the graph-result endpoint, containing the original graph and current execution state.
/// The frontend uses Graph for loadGraph() and State for processing completed node outputs.
/// </summary>
class GraphResultResponse : public csp::services::DtoBase
{
public:
	GraphResultResponse();
	virtual ~GraphResultResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The original graph JSON (nodes, connections, frames, options, etc.)
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetGraph() const;
	void SetGraph(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasGraph() const;

	std::shared_ptr<GraphExecutionState> GetState() const;
	void SetState(const std::shared_ptr<GraphExecutionState>& Value);
	bool HasState() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Graph;
	std::optional<std::shared_ptr<GraphExecutionState>> m_State;
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

	/// <summary>
	/// The coalescence id of the apply-snapshot operation that triggered this import.
	/// Set internally when the import is part of an apply-snapshot flow.
	/// </summary>
	utility::string_t GetApplySnapshotCoalescenceId() const;
	bool HasApplySnapshotCoalescenceId() const;


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
	std::optional<utility::string_t> m_ApplySnapshotCoalescenceId;
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
/// A customer with its entitlements, for the dashboard detail view.
/// </summary>
class MarketplaceCustomerDetailDto : public csp::services::DtoBase
{
public:
	MarketplaceCustomerDetailDto();
	virtual ~MarketplaceCustomerDetailDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	std::shared_ptr<MarketplaceCustomerDto> GetCustomer() const;
	void SetCustomer(const std::shared_ptr<MarketplaceCustomerDto>& Value);
	bool HasCustomer() const;

	/// <summary>
	/// The customer's entitlements (provisioning outputs live here).
	/// </summary>
	const std::vector<std::shared_ptr<MarketplaceEntitlementDto>>& GetEntitlements() const;
	void SetEntitlements(const std::vector<std::shared_ptr<MarketplaceEntitlementDto>>& Value);
	bool HasEntitlements() const;

	/// <summary>
	/// Every onboarding attempt this customer has made, oldest first, each with its full transition
	/// history. Usually one; a customer who was swept and then re-subscribed has two, the first terminal
	/// at `Abandoned` with its history intact.
	/// </summary>
	const std::vector<std::shared_ptr<OnboardingAttemptDto>>& GetOnboardingAttempts() const;
	void SetOnboardingAttempts(const std::vector<std::shared_ptr<OnboardingAttemptDto>>& Value);
	bool HasOnboardingAttempts() const;


protected:
	std::optional<std::shared_ptr<MarketplaceCustomerDto>> m_Customer;
	std::optional<std::vector<std::shared_ptr<MarketplaceEntitlementDto>>> m_Entitlements;
	std::optional<std::vector<std::shared_ptr<OnboardingAttemptDto>>> m_OnboardingAttempts;
};

/// <summary>
/// A marketplace customer row for the dashboard browser / detail view.
/// </summary>
class MarketplaceCustomerDto : public csp::services::DtoBase
{
public:
	MarketplaceCustomerDto();
	virtual ~MarketplaceCustomerDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The procurement account id (the marketplace JWT `sub`).
	/// </summary>
	utility::string_t GetProcurementAccountId() const;
	void SetProcurementAccountId(const utility::string_t& Value);
	bool HasProcurementAccountId() const;

	/// <summary>
	/// The marketplace billing account id.
	/// </summary>
	utility::string_t GetBillingAccountId() const;
	void SetBillingAccountId(const utility::string_t& Value);
	bool HasBillingAccountId() const;

	/// <summary>
	/// The current onboarding state (enum name).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	/// <summary>
	/// The company URL fragment, once captured.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment, once captured.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The admin's verified email, once captured via SSO.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// The created tenant's name, once the tenant exists.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Whether any entitlement has ever activated (the sticky teardown discriminator).
	/// </summary>
	bool GetHasEverActivated() const;
	void SetHasEverActivated(const bool& Value);
	bool HasHasEverActivated() const;

	/// <summary>
	/// The GCP project recorded for provisioning.
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// The onboarding state machine instance currently driving this customer, if any. Null for a customer
	/// created before the state machine shipped and not yet touched by a transition.
	/// </summary>
	utility::string_t GetStateMachineInstanceId() const;
	void SetStateMachineInstanceId(const utility::string_t& Value);
	bool HasStateMachineInstanceId() const;

	/// <summary>
	/// When the customer record was created (signup time).
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the customer record was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The customer's current entitlement state for the list column — the "active-wins" summary across
	/// all their entitlements (enum name). Null when the customer has no entitlements. Enrichment field:
	/// not set by
	/// M:Magnopus.Logic.GoogleMarketplace.Controllers.MarketplaceCustomerDto.FromDocument(Magnopus.Logic.GoogleMarketplace.DataAccess.Models.MarketplaceCustomerDocument)
	/// (entitlements are a separate collection); populated by the controller's batch enrichment.
	/// </summary>
	utility::string_t GetEntitlementStateSummary() const;
	void SetEntitlementStateSummary(const utility::string_t& Value);
	bool HasEntitlementStateSummary() const;

	/// <summary>
	/// How many entitlements the customer holds (0 if none). Enrichment field.
	/// </summary>
	int32_t GetEntitlementCount() const;
	void SetEntitlementCount(int32_t Value);
	bool HasEntitlementCount() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_ProcurementAccountId;
	std::optional<utility::string_t> m_BillingAccountId;
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_HasEverActivated;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_StateMachineInstanceId;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_EntitlementStateSummary;
	std::optional<int32_t> m_EntitlementCount;
};

class MarketplaceCustomerDtoDataPage : public csp::services::DtoBase
{
public:
	MarketplaceCustomerDtoDataPage();
	virtual ~MarketplaceCustomerDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<MarketplaceCustomerDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<MarketplaceCustomerDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<MarketplaceCustomerDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// A marketplace entitlement (the "order") for the detail view, including provisioning outputs.
/// </summary>
class MarketplaceEntitlementDto : public csp::services::DtoBase
{
public:
	MarketplaceEntitlementDto();
	virtual ~MarketplaceEntitlementDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The entitlement document id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The procurement entitlement id.
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;

	/// <summary>
	/// The marketplace order id.
	/// </summary>
	utility::string_t GetOrderId() const;
	void SetOrderId(const utility::string_t& Value);
	bool HasOrderId() const;

	/// <summary>
	/// The subscribed plan id.
	/// </summary>
	utility::string_t GetPlanId() const;
	void SetPlanId(const utility::string_t& Value);
	bool HasPlanId() const;

	/// <summary>
	/// The product id.
	/// </summary>
	utility::string_t GetProductId() const;
	void SetProductId(const utility::string_t& Value);
	bool HasProductId() const;

	/// <summary>
	/// The mirrored entitlement state (enum name).
	/// </summary>
	utility::string_t GetEntitlementState() const;
	void SetEntitlementState(const utility::string_t& Value);
	bool HasEntitlementState() const;

	/// <summary>
	/// Provisioning output: the GCP project the bucket lives in.
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// Provisioning output: the labeled bucket name.
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// Provisioning output: the per-customer service-account email.
	/// </summary>
	utility::string_t GetSaEmail() const;
	void SetSaEmail(const utility::string_t& Value);
	bool HasSaEmail() const;

	/// <summary>
	/// When the entitlement was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the entitlement was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_EntitlementId;
	std::optional<utility::string_t> m_OrderId;
	std::optional<utility::string_t> m_PlanId;
	std::optional<utility::string_t> m_ProductId;
	std::optional<utility::string_t> m_EntitlementState;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_BucketName;
	std::optional<utility::string_t> m_SaEmail;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// What one backfill run did. Reported straight back to the operator who invoked it, because a sweep that
/// silently skipped half the estate looks identical to one that had nothing to do.
/// </summary>
class MarketplaceOrganizationBackfillReport : public csp::services::DtoBase
{
public:
	MarketplaceOrganizationBackfillReport();
	virtual ~MarketplaceOrganizationBackfillReport();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// How many organizations were given a quota tier assignment of their own on this run.
	///
	/// ⚠ <b>Reported because its absence is silent.</b> Linking an organization never assigned its
	/// tier — `AssignTierForPlan` runs only at provisioning and on a plan change — so after
	/// <b>D7</b> every tenant spun up under a backfilled organization resolved to
	/// `Quotas:DefaultTierName` rather than to the plan its customer pays for. A wrong tier is
	/// not an error, so the only way an operator learns this happened is a number in this report.
	/// A second run reports <b>0</b>: the pass skips an organization that already has an assignment,
	/// so it cannot undo a deliberate MAG_SUP override (<b>G28</b>).
	/// </summary>
	int32_t GetTiersAssigned() const;
	void SetTiersAssigned(int32_t Value);
	bool HasTiersAssigned() const;

	/// <summary>
	/// How many customers carrying no organization were examined this run.
	/// </summary>
	int32_t GetExamined() const;
	void SetExamined(int32_t Value);
	bool HasExamined() const;

	/// <summary>
	/// How many organizations were created.
	/// </summary>
	int32_t GetCreated() const;
	void SetCreated(int32_t Value);
	bool HasCreated() const;

	/// <summary>
	/// How many customers were pointed at an organization that already existed — a customer whose
	/// organization was created but whose own pointer never got written, and every revived customer
	/// (the procurement account is stable across a revive, so the organization is reused rather than
	/// duplicated).
	/// </summary>
	int32_t GetLinked() const;
	void SetLinked(int32_t Value);
	bool HasLinked() const;

	/// <summary>
	/// How many were skipped. The expected reason is "no tenant yet" — a customer still mid-onboarding has
	/// no administrative tenant, so it cannot have an organization, and it will get one when its tenant is
	/// created. A skip is not a failure and the run is safe to repeat.
	/// </summary>
	int32_t GetSkipped() const;
	void SetSkipped(int32_t Value);
	bool HasSkipped() const;

	/// <summary>
	/// How many customers still carry no organization after this run. Non-zero either because the limit
	/// was reached (run it again) or because those customers have no tenant yet (nothing to do).
	/// </summary>
	int64_t GetRemaining() const;
	void SetRemaining(int64_t Value);
	bool HasRemaining() const;


protected:
	std::optional<int32_t> m_TiersAssigned;
	std::optional<int32_t> m_Examined;
	std::optional<int32_t> m_Created;
	std::optional<int32_t> m_Linked;
	std::optional<int32_t> m_Skipped;
	std::optional<int64_t> m_Remaining;
};

/// <summary>
/// Funnel / stuck-state stats for the dashboard: per-state counts + signups over time.
/// </summary>
class MarketplaceStatsDto : public csp::services::DtoBase
{
public:
	MarketplaceStatsDto();
	virtual ~MarketplaceStatsDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Customer counts per onboarding state (full funnel, including zeros).
	/// </summary>
	const std::vector<std::shared_ptr<OnboardingStateCountDto>>& GetStateCounts() const;
	void SetStateCounts(const std::vector<std::shared_ptr<OnboardingStateCountDto>>& Value);
	bool HasStateCounts() const;

	/// <summary>
	/// Signups per calendar day over the requested window.
	/// </summary>
	const std::vector<std::shared_ptr<DailySignupCountDto>>& GetSignupsPerDay() const;
	void SetSignupsPerDay(const std::vector<std::shared_ptr<DailySignupCountDto>>& Value);
	bool HasSignupsPerDay() const;


protected:
	std::optional<std::vector<std::shared_ptr<OnboardingStateCountDto>>> m_StateCounts;
	std::optional<std::vector<std::shared_ptr<DailySignupCountDto>>> m_SignupsPerDay;
};

/// <summary>
/// An entry read back from the MCP OAuth state store. Deliberately the same shape the write accepts,
/// so a caller can reconstruct an entry's expiry without a second request.
/// </summary>
class McpStateDto : public csp::services::DtoBase
{
public:
	McpStateDto();
	virtual ~McpStateDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The stored value, emitted as JSON exactly as it was stored — an object, not a string
	/// containing an escaped document.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetValue() const;
	void SetValue(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasValue() const;

	/// <summary>
	/// When the entry stops resolving, as an ISO 8601 UTC timestamp with a `Z` suffix.
	/// Null for a permanent entry.
	/// </summary>
	utility::string_t GetExpiresAt() const;
	void SetExpiresAt(const utility::string_t& Value);
	bool HasExpiresAt() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Value;
	std::optional<utility::string_t> m_ExpiresAt;
};

/// <summary>
/// The body of a write to the MCP OAuth state store.
/// </summary>
class McpStateWriteRequest : public csp::services::DtoBase
{
public:
	McpStateWriteRequest();
	virtual ~McpStateWriteRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The value to store. Any JSON is accepted and none of it is interpreted.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetValue() const;
	void SetValue(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasValue() const;

	/// <summary>
	/// When the entry should stop resolving. Omit (or send null) for a permanent entry.
	/// </summary>
	utility::string_t GetExpiresAt() const;
	void SetExpiresAt(const utility::string_t& Value);
	bool HasExpiresAt() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Value;
	std::optional<utility::string_t> m_ExpiresAt;
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
/// The organization as its own admin sees it.
///
/// A narrower projection than the operator's `OrganizationDto`, and narrowed on purpose: the
/// external references are billing-relationship internals that a customer has no use for and that name
/// other systems — Google Procurement and Stripe.
/// ⚠ <b>The owner was narrowed out with them and has been put back (D40) — one field, not a widening.</b>
/// The narrowing read as a single "billing-relationship internals" judgement, but the two halves are not
/// alike: the external refs name other systems, while the owner is simply who administers the thing the
/// customer is paying for, and "who administers it" is half of what the section exists to answer. The
/// external refs stay out, which is the whole of the original objection preserved.
/// </summary>
class MyOrganizationDto : public csp::services::DtoBase
{
public:
	MyOrganizationDto();
	virtual ~MyOrganizationDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The organization's id — needed to address the spin-up routes.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// Its human-facing name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The company half of every owned tenant's workspace address.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The tenant from which this organization may be administered — the caller's own.
	/// </summary>
	utility::string_t GetAdministrativeTenantName() const;
	void SetAdministrativeTenantName(const utility::string_t& Value);
	bool HasAdministrativeTenantName() const;

	/// <summary>
	/// The user who administers the organization, as an id. The client resolves it to a name through
	/// `users/lite`; a user it cannot resolve renders as the id, which is honest rather than blank.
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;

	/// <summary>
	/// Every tenant the organization owns.
	/// </summary>
	const std::vector<std::shared_ptr<MyOrganizationTenantDto>>& GetTenants() const;
	void SetTenants(const std::vector<std::shared_ptr<MyOrganizationTenantDto>>& Value);
	bool HasTenants() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_AdministrativeTenantName;
	std::optional<utility::string_t> m_OwnerUserId;
	std::optional<std::vector<std::shared_ptr<MyOrganizationTenantDto>>> m_Tenants;
};

/// <summary>
/// One tenant in the organization's list, as its own admin sees it.
/// </summary>
class MyOrganizationTenantDto : public csp::services::DtoBase
{
public:
	MyOrganizationTenantDto();
	virtual ~MyOrganizationTenantDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant's id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The tenant's system name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// Its display name, when it has one.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Whether the tenant is locked.
	/// </summary>
	bool GetLocked() const;
	void SetLocked(const bool& Value);
	bool HasLocked() const;

	/// <summary>
	/// Whether this is the organization's administrative tenant.
	/// </summary>
	bool GetIsAdministrativeTenant() const;
	void SetIsAdministrativeTenant(const bool& Value);
	bool HasIsAdministrativeTenant() const;

	/// <summary>
	/// Where this tenant's spin-up has got to, or `null` when it was not spun up through this flow.
	/// Lets the list show an in-flight workspace beside the finished ones rather than hiding it until done.
	/// </summary>
	utility::string_t GetSpinUpState() const;
	void SetSpinUpState(const utility::string_t& Value);
	bool HasSpinUpState() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<bool> m_Locked;
	std::optional<bool> m_IsAdministrativeTenant;
	std::optional<utility::string_t> m_SpinUpState;
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
/// Request body for a node's terminal success write (BYOGPU coordination facade).
/// Output, metadata and billing arrive together so MCS can order the writes and land the
/// _complete marker last.
/// </summary>
class NodeCompleteRequest : public csp::services::DtoBase
{
public:
	NodeCompleteRequest();
	virtual ~NodeCompleteRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The node's processed output. Required.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetOutput() const;
	void SetOutput(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasOutput() const;

	/// <summary>
	/// Optional execution metadata (timings, node type, and similar).
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetMetadata() const;
	void SetMetadata(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasMetadata() const;

	/// <summary>
	/// Optional node-emitted billing block.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetBilling() const;
	void SetBilling(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasBilling() const;


protected:
	std::optional<std::shared_ptr<rapidjson::Document>> m_Output;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Metadata;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Billing;
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
	/// Whether this node runs GPU-accelerated inference (BYO-GPU override eligible).
	/// </summary>
	bool GetGpuAccelerated() const;
	void SetGpuAccelerated(const bool& Value);
	bool HasGpuAccelerated() const;

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
	std::optional<bool> m_GpuAccelerated;
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
	/// Whether this node runs GPU-accelerated inference (BYO-GPU override eligible).
	/// </summary>
	bool GetGpuAccelerated() const;
	void SetGpuAccelerated(const bool& Value);
	bool HasGpuAccelerated() const;

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
	std::optional<bool> m_GpuAccelerated;
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
/// Request body for a node's terminal failure write (BYOGPU coordination facade).
/// </summary>
class NodeErrorRequest : public csp::services::DtoBase
{
public:
	NodeErrorRequest();
	virtual ~NodeErrorRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The error message. Required.
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;

	/// <summary>
	/// Optional execution metadata.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetMetadata() const;
	void SetMetadata(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasMetadata() const;


protected:
	std::optional<utility::string_t> m_Error;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Metadata;
};

/// <summary>
/// Request body for one batched log flush (BYOGPU coordination facade).
/// </summary>
class NodeLogsRequest : public csp::services::DtoBase
{
public:
	NodeLogsRequest();
	virtual ~NodeLogsRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Identifies the emitter, and therefore the log filename. Defaults to "default".
	/// </summary>
	utility::string_t GetEmitterId() const;
	void SetEmitterId(const utility::string_t& Value);
	bool HasEmitterId() const;

	/// <summary>
	/// The buffered log entries, stored verbatim as a JSON array so the file matches what a
	/// bucket-writing emitter produces and Inspector already parses.
	/// </summary>
	std::shared_ptr<rapidjson::Document> GetEntries() const;
	void SetEntries(const std::shared_ptr<rapidjson::Document>& Value);
	bool HasEntries() const;


protected:
	std::optional<utility::string_t> m_EmitterId;
	std::optional<std::shared_ptr<rapidjson::Document>> m_Entries;
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
/// One onboarding attempt — a state machine instance and every transition it took. This is the thing that
/// makes "how did this customer end up here?" answerable without reading six audit queries.
/// </summary>
class OnboardingAttemptDto : public csp::services::DtoBase
{
public:
	OnboardingAttemptDto();
	virtual ~OnboardingAttemptDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The instance id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The state it is in now.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// Whether this attempt can still move — false means it finished, one way or the other.
	/// </summary>
	bool GetIsTerminal() const;
	void SetIsTerminal(const bool& Value);
	bool HasIsTerminal() const;

	/// <summary>
	/// When the attempt started.
	/// </summary>
	utility::string_t GetStartedAt() const;
	void SetStartedAt(const utility::string_t& Value);
	bool HasStartedAt() const;

	/// <summary>
	/// When it last moved.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// Every transition, oldest first.
	/// </summary>
	const std::vector<std::shared_ptr<OnboardingTransitionDto>>& GetHistory() const;
	void SetHistory(const std::vector<std::shared_ptr<OnboardingTransitionDto>>& Value);
	bool HasHistory() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_State;
	std::optional<bool> m_IsTerminal;
	std::optional<utility::string_t> m_StartedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<std::vector<std::shared_ptr<OnboardingTransitionDto>>> m_History;
};

/// <summary>
/// The result of a live workspace-name availability check. A successful query always returns 200 — an
/// unavailable or malformed name is reported in Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingAvailabilityResponse.Available /
/// Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingAvailabilityResponse.UnavailableReason (not an HTTP error) so the wizard can show inline feedback
/// as the customer types.
/// </summary>
class OnboardingAvailabilityResponse : public csp::services::DtoBase
{
public:
	OnboardingAvailabilityResponse();
	virtual ~OnboardingAvailabilityResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the chosen workspace name is valid and not already taken.
	/// </summary>
	bool GetAvailable() const;
	void SetAvailable(const bool& Value);
	bool HasAvailable() const;

	/// <summary>
	/// A customer-facing explanation when Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingAvailabilityResponse.Available is false (invalid format, or
	/// already taken); null when available.
	/// </summary>
	utility::string_t GetUnavailableReason() const;
	void SetUnavailableReason(const utility::string_t& Value);
	bool HasUnavailableReason() const;

	std::shared_ptr<OnboardingWorkspaceDto> GetWorkspace() const;
	void SetWorkspace(const std::shared_ptr<OnboardingWorkspaceDto>& Value);
	bool HasWorkspace() const;


protected:
	std::optional<bool> m_Available;
	std::optional<utility::string_t> m_UnavailableReason;
	std::optional<std::shared_ptr<OnboardingWorkspaceDto>> m_Workspace;
};

/// <summary>
/// The SSO-return submission of the onboarding wizard: the Google authorization code the SPA received after
/// "Sign in with Google to finish". The customer is taken from the onboarding session token (token 2) in the
/// header, never from the body.
/// </summary>
class OnboardingCallbackRequest : public csp::services::DtoBase
{
public:
	OnboardingCallbackRequest();
	virtual ~OnboardingCallbackRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Google OAuth authorization code to exchange for the verified identity.
	/// </summary>
	utility::string_t GetCode() const;
	void SetCode(const utility::string_t& Value);
	bool HasCode() const;

	/// <summary>
	/// The redirect URI used in the SSO flow (must match what Google was given for the code exchange).
	/// </summary>
	utility::string_t GetOAuthRedirectUri() const;
	void SetOAuthRedirectUri(const utility::string_t& Value);
	bool HasOAuthRedirectUri() const;

	/// <summary>
	/// The SPA's device id, used to issue the post-tenant session (token 3). Carried now so the single
	/// callback can complete the whole bootstrap.
	/// </summary>
	utility::string_t GetDeviceId() const;
	void SetDeviceId(const utility::string_t& Value);
	bool HasDeviceId() const;


protected:
	std::optional<utility::string_t> m_Code;
	std::optional<utility::string_t> m_OAuthRedirectUri;
	std::optional<utility::string_t> m_DeviceId;
};

/// <summary>
/// The outcome of the onboarding SSO callback. The single callback drives the remaining bootstrap (capture
/// identity → create tenant → issue session); this response reflects how far it got. On full success
/// Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingCallbackResponse.Auth carries the new tenant admin's session for the SPA's federated-login path.
/// </summary>
class OnboardingCallbackResponse : public csp::services::DtoBase
{
public:
	OnboardingCallbackResponse();
	virtual ~OnboardingCallbackResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer's onboarding state after the callback (e.g. `IdentityCaptured`, `TenantCreated`).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	/// <summary>
	/// The verified admin email captured from Google SSO.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;

	/// <summary>
	/// The created tenant's system name; null until the tenant is created (slice 5).
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	std::shared_ptr<AuthDto> GetAuth() const;
	void SetAuth(const std::shared_ptr<AuthDto>& Value);
	bool HasAuth() const;


protected:
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<utility::string_t> m_AdminEmail;
	std::optional<utility::string_t> m_TenantName;
	std::optional<std::shared_ptr<AuthDto>> m_Auth;
};

/// <summary>
/// The outcome of the provisioning <em>prepare</em> step (consent-step-plan §3.4 Phase 1): the per-customer
/// service account has been created and its key stored, and the customer must now grant that SA access on their
/// project before the bucket can be created. Carries everything the wizard needs to render the consent step —
/// either a redirect to Google's hosted Service Account Authorization page
/// (Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingConsentResponse.ConsentMode = `google`, with
/// Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingConsentResponse.ConsentUrl set) or the built-in fallback instructions form
/// (Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingConsentResponse.ConsentMode = `manual`). No bucket has been created and no billing has started.
/// </summary>
class OnboardingConsentResponse : public csp::services::DtoBase
{
public:
	OnboardingConsentResponse();
	virtual ~OnboardingConsentResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer's onboarding state after prepare (typically `Provisioning`).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	/// <summary>
	/// The per-customer service account email the customer must grant the roles to.
	/// </summary>
	utility::string_t GetSaEmail() const;
	void SetSaEmail(const utility::string_t& Value);
	bool HasSaEmail() const;

	/// <summary>
	/// The customer's GCP project the bucket will be created in (and the roles granted on).
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// How consent is delivered: `google` (redirect to Google's hosted page via
	/// Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingConsentResponse.ConsentUrl) or `manual` (the built-in fallback form). See `TenantConsentMode`.
	/// </summary>
	utility::string_t GetConsentMode() const;
	void SetConsentMode(const utility::string_t& Value);
	bool HasConsentMode() const;

	/// <summary>
	/// The Google-hosted consent URL to redirect to. Null in `manual` mode.
	/// </summary>
	utility::string_t GetConsentUrl() const;
	void SetConsentUrl(const utility::string_t& Value);
	bool HasConsentUrl() const;

	/// <summary>
	/// The roles the customer is asked to grant the SA (short-names; shown in the fallback form).
	/// </summary>
	const std::vector<utility::string_t>& GetRequestedRoles() const;
	void SetRequestedRoles(const std::vector<utility::string_t>& Value);
	bool HasRequestedRoles() const;


protected:
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<utility::string_t> m_SaEmail;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_ConsentMode;
	std::optional<utility::string_t> m_ConsentUrl;
	std::optional<std::vector<utility::string_t>> m_RequestedRoles;
};

/// <summary>
/// The "name your workspace" submission of the marketplace onboarding wizard. The customer it applies to is
/// taken from the onboarding session token (token 2), never from the body.
/// </summary>
class OnboardingDetailsRequest : public csp::services::DtoBase
{
public:
	OnboardingDetailsRequest();
	virtual ~OnboardingDetailsRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The company URL fragment — a DNS label used in the product URLs (e.g. `acme` in
	/// `nodey.global.acme.oko.live`).
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment. Optional — defaults to `global` when omitted.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;


protected:
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
};

/// <summary>
/// The in-tenant provisioning request (§3 step 5): the target customer GCP project the labeled bucket is
/// created in. The tenant (and therefore the marketplace customer + entitlement) is resolved from the
/// authenticated admin's principal, never from the body.
/// </summary>
class OnboardingProvisionRequest : public csp::services::DtoBase
{
public:
	OnboardingProvisionRequest();
	virtual ~OnboardingProvisionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer's GCP project id the bucket is created in. <strong>Required</strong> — there is no default
	/// (we never silently provision the bucket into our own host project); a blank value is rejected. It must
	/// be in the server-side allowed set ({HostProjectId} ∪ AllowedProjectIds). Production will capture this via
	/// the Google consent flow; until then it is entered explicitly (incl. local testing).
	/// </summary>
	utility::string_t GetCustomerProjectId() const;
	void SetCustomerProjectId(const utility::string_t& Value);
	bool HasCustomerProjectId() const;


protected:
	std::optional<utility::string_t> m_CustomerProjectId;
};

/// <summary>
/// The outcome of in-tenant provisioning (§5.5): the per-customer service account, the labeled bucket, and
/// the entitlement that was approved (PENDING → ACTIVE, billing starts). Idempotent — re-running for an
/// already-provisioned tenant returns the same outputs.
/// </summary>
class OnboardingProvisionResponse : public csp::services::DtoBase
{
public:
	OnboardingProvisionResponse();
	virtual ~OnboardingProvisionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The customer's onboarding state after provisioning (e.g. `CdnReady`).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	/// <summary>
	/// The GCP project the bucket was created in.
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// The created bucket's name.
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// The per-customer service account's email.
	/// </summary>
	utility::string_t GetSaEmail() const;
	void SetSaEmail(const utility::string_t& Value);
	bool HasSaEmail() const;

	/// <summary>
	/// The procurement entitlement that was provisioned and approved.
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;


protected:
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_BucketName;
	std::optional<utility::string_t> m_SaEmail;
	std::optional<utility::string_t> m_EntitlementId;
};

/// <summary>
/// A customer count for a single onboarding state (enum name).
/// </summary>
class OnboardingStateCountDto : public csp::services::DtoBase
{
public:
	OnboardingStateCountDto();
	virtual ~OnboardingStateCountDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The onboarding state name.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// How many customers are in that state.
	/// </summary>
	int64_t GetCount() const;
	void SetCount(int64_t Value);
	bool HasCount() const;


protected:
	std::optional<utility::string_t> m_State;
	std::optional<int64_t> m_Count;
};

/// <summary>
/// The authenticated onboarding-state read (consent-step-plan §3.7): lets the wizard resume at the customer's
/// real step on a cold re-entry (a returning, already-authenticated customer with no fresh landing token), rather
/// than assuming they finished. Read-only — never kicks off cloud calls, safe to poll. For a tenant with no
/// marketplace customer, Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingStateResponse.IsMarketplaceTenant is false and the wizard keeps its default
/// behavior. When the state is mid-flow (`Provisioning`/`BlockedOrgPolicy`) the consent context is reconstructed so the wizard can re-render the
/// consent / blocked step directly.
/// </summary>
class OnboardingStateResponse : public csp::services::DtoBase
{
public:
	OnboardingStateResponse();
	virtual ~OnboardingStateResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the caller's tenant is a marketplace-onboarded tenant (has a marketplace customer row).
	/// </summary>
	bool GetIsMarketplaceTenant() const;
	void SetIsMarketplaceTenant(const bool& Value);
	bool HasIsMarketplaceTenant() const;

	/// <summary>
	/// The customer's real onboarding state (null when Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingStateResponse.IsMarketplaceTenant is false).
	/// </summary>
	utility::string_t GetOnboardingState() const;
	void SetOnboardingState(const utility::string_t& Value);
	bool HasOnboardingState() const;

	/// <summary>
	/// The per-customer service account email (when mid-flow; for re-rendering the consent step).
	/// </summary>
	utility::string_t GetSaEmail() const;
	void SetSaEmail(const utility::string_t& Value);
	bool HasSaEmail() const;

	/// <summary>
	/// The recorded customer GCP project (when set).
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// Consent delivery mode for re-rendering the consent step (`google`/`manual`; null when not mid-consent).
	/// </summary>
	utility::string_t GetConsentMode() const;
	void SetConsentMode(const utility::string_t& Value);
	bool HasConsentMode() const;

	/// <summary>
	/// The Google-hosted consent URL (when mid-consent in `google` mode).
	/// </summary>
	utility::string_t GetConsentUrl() const;
	void SetConsentUrl(const utility::string_t& Value);
	bool HasConsentUrl() const;

	/// <summary>
	/// The roles the customer is asked to grant (when mid-consent).
	/// </summary>
	const std::vector<utility::string_t>& GetRequestedRoles() const;
	void SetRequestedRoles(const std::vector<utility::string_t>& Value);
	bool HasRequestedRoles() const;

	/// <summary>
	/// Whether the wizard should still show its "you're all set" landing page for a <em>completed</em> customer on
	/// the onboarding host. True only when the state is a completed state (`EntitlementApproved`/`CdnReady`/
	/// `Complete`) and the post-onboarding grace window (`GcpMarketplaceSettings.OnboardingLandingWindow`,
	/// measured from `ActivatedAt`) has not yet elapsed. False once it elapses — the onboarding host then
	/// hands off to the normal MagGyver app. Irrelevant (false) for mid-flow states, which resume on
	/// Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingStateResponse.OnboardingState alone.
	/// </summary>
	bool GetShowWizardLanding() const;
	void SetShowWizardLanding(const bool& Value);
	bool HasShowWizardLanding() const;


protected:
	std::optional<bool> m_IsMarketplaceTenant;
	std::optional<utility::string_t> m_OnboardingState;
	std::optional<utility::string_t> m_SaEmail;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_ConsentMode;
	std::optional<utility::string_t> m_ConsentUrl;
	std::optional<std::vector<utility::string_t>> m_RequestedRoles;
	std::optional<bool> m_ShowWizardLanding;
};

/// <summary>
/// One transition within an onboarding attempt.
/// </summary>
class OnboardingTransitionDto : public csp::services::DtoBase
{
public:
	OnboardingTransitionDto();
	virtual ~OnboardingTransitionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The state moved from. Null on the first entry, which records the attempt starting.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The state moved to.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;

	/// <summary>
	/// When.
	/// </summary>
	utility::string_t GetAt() const;
	void SetAt(const utility::string_t& Value);
	bool HasAt() const;

	/// <summary>
	/// Who or what caused it — a user id, or the name of the subsystem that did.
	/// </summary>
	utility::string_t GetBy() const;
	void SetBy(const utility::string_t& Value);
	bool HasBy() const;

	/// <summary>
	/// Why, in a short phrase.
	/// </summary>
	utility::string_t GetReason() const;
	void SetReason(const utility::string_t& Value);
	bool HasReason() const;


protected:
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
	std::optional<utility::string_t> m_At;
	std::optional<utility::string_t> m_By;
	std::optional<utility::string_t> m_Reason;
};

/// <summary>
/// The normalized workspace fragments plus the derived customer-visible product URLs. Returned by both the
/// availability check and a successful details submission so the wizard can show the customer exactly what
/// their URLs will be. (Stage A renders these for confirmation only — DNS provisioning is a later stage.)
/// </summary>
class OnboardingWorkspaceDto : public csp::services::DtoBase
{
public:
	OnboardingWorkspaceDto();
	virtual ~OnboardingWorkspaceDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The normalized company URL fragment.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The normalized project URL fragment (`global` when not specified).
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The derived product URLs keyed by app name (e.g. `nodey` → `https://nodey.global.acme.oko.live`).
	/// </summary>
	const std::map<utility::string_t, utility::string_t>& GetProductUrls() const;
	void SetProductUrls(const std::map<utility::string_t, utility::string_t>& Value);
	bool HasProductUrls() const;


protected:
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<std::map<utility::string_t, utility::string_t>> m_ProductUrls;
};

/// <summary>
/// Whether a proposed workspace address is free — the answer to the question the stepper used to ask
/// by attempting the spin-up and reading the failure.
///
/// ⚠ <b>This is a 200 carrying a verdict, not a 4xx.</b> A probe that answered 400/409 would be
/// indistinguishable in the browser from the spin-up itself failing, and the whole point of the probe
/// is that it runs <i>before</i> anything exists to fail. The caller branches on
/// Magnopus.Logic.OrgOnboarding.Dtos.OrgTenantAddressCheck.Available; Magnopus.Logic.OrgOnboarding.Dtos.OrgTenantAddressCheck.Reason is the sentence
/// to show, already written for a customer because it is the <i>same</i> sentence `SpinUp` would have returned. <b>One authority, not
/// two.</b>`OrgTenantSpinUpLogic.CheckAddress` produces this and `SpinUp` calls it, so the rules cannot drift apart. The browser deliberately
/// re-implements none of them — `OnboardingFragmentRules` is shared with the marketplace wizard and the hostname repair path, and a copy in
/// JavaScript is how those drift.
/// </summary>
class OrgTenantAddressCheck : public csp::services::DtoBase
{
public:
	OrgTenantAddressCheck();
	virtual ~OrgTenantAddressCheck();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether a tenant can be spun up at this address right now.
	/// </summary>
	bool GetAvailable() const;
	void SetAvailable(const bool& Value);
	bool HasAvailable() const;

	/// <summary>
	/// The company half, inherited from the organization. Returned even on a refusal, because the
	/// address the customer is being told about is the whole pair, not the half they typed.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project half, <b>normalised</b> — so the caller shows what it would actually get.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// Why it is unavailable, in customer-facing words. Null when Magnopus.Logic.OrgOnboarding.Dtos.OrgTenantAddressCheck.Available.
	/// </summary>
	utility::string_t GetReason() const;
	void SetReason(const utility::string_t& Value);
	bool HasReason() const;

	/// <summary>
	/// True when the refusal is "someone already holds this address" (a 409 from `SpinUp`), false
	/// when it is "that is not a valid project name" (a 400). The two need different wording and
	/// different next actions, and collapsing them into one boolean was the original mistake.
	/// </summary>
	bool GetIsConflict() const;
	void SetIsConflict(const bool& Value);
	bool HasIsConflict() const;


protected:
	std::optional<bool> m_Available;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_Reason;
	std::optional<bool> m_IsConflict;
};

/// <summary>
/// The body of the two provisioning calls. One field, but a typed body rather than a query parameter
/// because a GCP project id is customer data that should not land in request logs or browser history.
/// </summary>
class OrgTenantProvisionRequest : public csp::services::DtoBase
{
public:
	OrgTenantProvisionRequest();
	virtual ~OrgTenantProvisionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The Google Cloud project the tenant's storage bucket is created in. Ignored once one is recorded —
	/// and a request naming a <i>different</i> one is refused rather than allowed to re-target storage.
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;


protected:
	std::optional<utility::string_t> m_GcpProjectId;
};

/// <summary>
/// What an org admin supplies to spin up a further tenant under their organization.
///
/// Short by design. The company URL fragment is <b>not</b> here because it is inherited from the
/// organization rather than chosen — that is what makes sibling tenants read as one company's projects —
/// and the tenant's internal name is derived, never supplied.
/// </summary>
class OrgTenantSpinUpRequest : public csp::services::DtoBase
{
public:
	OrgTenantSpinUpRequest();
	virtual ~OrgTenantSpinUpRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The project half of the new tenant's workspace address. Must be a valid DNS label under
	/// `OnboardingFragmentRules`, and must not collide with a pair the organization already holds.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The Google Cloud project the new tenant's storage bucket is created in. Recorded write-once per
	/// tenant (D24). Two sibling tenants may name the same project (D29).
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// The email address that becomes the new tenant's admin.
	///
	/// <b>Required, with no server-side fallback to the caller's own address</b>, and the omission is
	/// deliberate. Defaulting to the acting principal would be right for an org admin spinning up their
	/// own workspace and silently <i>wrong</i> for a Magnopus operator doing it on a customer's behalf —
	/// the workspace would be born owned by whoever happened to click the button. Both surfaces collect
	/// it; the org-admin one pre-fills the signed-in user's address so the common case is still one
	/// glance rather than one decision.
	/// </summary>
	utility::string_t GetAdminEmail() const;
	void SetAdminEmail(const utility::string_t& Value);
	bool HasAdminEmail() const;


protected:
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_AdminEmail;
};

/// <summary>
/// Where a spin-up has got to — the shape the UI polls. Deliberately one type for both the initial
/// response and every subsequent poll, so the client renders one thing rather than reconciling two.
/// </summary>
class OrgTenantSpinUpStatus : public csp::services::DtoBase
{
public:
	OrgTenantSpinUpStatus();
	virtual ~OrgTenantSpinUpStatus();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The spin-up record's id.
	/// </summary>
	utility::string_t GetSpinUpId() const;
	void SetSpinUpId(const utility::string_t& Value);
	bool HasSpinUpId() const;

	/// <summary>
	/// The organization the tenant was spun up under.
	/// </summary>
	utility::string_t GetOrganizationId() const;
	void SetOrganizationId(const utility::string_t& Value);
	bool HasOrganizationId() const;

	/// <summary>
	/// The created tenant's id.
	/// </summary>
	utility::string_t GetTenantId() const;
	void SetTenantId(const utility::string_t& Value);
	bool HasTenantId() const;

	/// <summary>
	/// The created tenant's derived system name.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The state, as a string from the `OrgInternal` vocabulary.
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// Whether the spin-up has finished (successfully or otherwise) and will not move again.
	/// </summary>
	bool GetIsTerminal() const;
	void SetIsTerminal(const bool& Value);
	bool HasIsTerminal() const;

	/// <summary>
	/// The company URL fragment inherited from the organization.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment chosen for this tenant.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;

	/// <summary>
	/// The GCP project the tenant provisions into, once recorded.
	/// </summary>
	utility::string_t GetGcpProjectId() const;
	void SetGcpProjectId(const utility::string_t& Value);
	bool HasGcpProjectId() const;

	/// <summary>
	/// The per-tenant service account, once it exists.
	/// </summary>
	utility::string_t GetServiceAccountEmail() const;
	void SetServiceAccountEmail(const utility::string_t& Value);
	bool HasServiceAccountEmail() const;

	/// <summary>
	/// The tenant's storage bucket, once it exists.
	/// </summary>
	utility::string_t GetBucketName() const;
	void SetBucketName(const utility::string_t& Value);
	bool HasBucketName() const;

	/// <summary>
	/// Where to send the admin to grant the service account access on their project, when the flow is
	/// waiting on consent. Null at every other point.
	/// </summary>
	utility::string_t GetConsentUrl() const;
	void SetConsentUrl(const utility::string_t& Value);
	bool HasConsentUrl() const;

	/// <summary>
	/// Which consent mechanism Magnopus.Logic.OrgOnboarding.Dtos.OrgTenantSpinUpStatus.ConsentUrl points at — Google's hosted form, or the fallback.
	/// </summary>
	utility::string_t GetConsentMode() const;
	void SetConsentMode(const utility::string_t& Value);
	bool HasConsentMode() const;

	/// <summary>
	/// The IAM roles the consent step asks the admin to grant.
	/// </summary>
	const std::vector<utility::string_t>& GetRequestedRoles() const;
	void SetRequestedRoles(const std::vector<utility::string_t>& Value);
	bool HasRequestedRoles() const;

	/// <summary>
	/// The transition history, oldest first — what the MagGyver history renderer draws. Populated only on
	/// the detail read, not on every poll.
	/// </summary>
	const std::vector<std::shared_ptr<OrgTenantSpinUpTransition>>& GetHistory() const;
	void SetHistory(const std::vector<std::shared_ptr<OrgTenantSpinUpTransition>>& Value);
	bool HasHistory() const;


protected:
	std::optional<utility::string_t> m_SpinUpId;
	std::optional<utility::string_t> m_OrganizationId;
	std::optional<utility::string_t> m_TenantId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_State;
	std::optional<bool> m_IsTerminal;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
	std::optional<utility::string_t> m_GcpProjectId;
	std::optional<utility::string_t> m_ServiceAccountEmail;
	std::optional<utility::string_t> m_BucketName;
	std::optional<utility::string_t> m_ConsentUrl;
	std::optional<utility::string_t> m_ConsentMode;
	std::optional<std::vector<utility::string_t>> m_RequestedRoles;
	std::optional<std::vector<std::shared_ptr<OrgTenantSpinUpTransition>>> m_History;
};

/// <summary>
/// One entry of a spin-up's transition history.
/// </summary>
class OrgTenantSpinUpTransition : public csp::services::DtoBase
{
public:
	OrgTenantSpinUpTransition();
	virtual ~OrgTenantSpinUpTransition();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The state moved from; null for the entry that records the spin-up starting.
	/// </summary>
	utility::string_t GetFrom() const;
	void SetFrom(const utility::string_t& Value);
	bool HasFrom() const;

	/// <summary>
	/// The state moved to.
	/// </summary>
	utility::string_t GetTo() const;
	void SetTo(const utility::string_t& Value);
	bool HasTo() const;

	/// <summary>
	/// When, as an ISO-8601 instant.
	/// </summary>
	utility::string_t GetAt() const;
	void SetAt(const utility::string_t& Value);
	bool HasAt() const;

	/// <summary>
	/// Who or what caused it.
	/// </summary>
	utility::string_t GetBy() const;
	void SetBy(const utility::string_t& Value);
	bool HasBy() const;

	/// <summary>
	/// Why, in a short human-readable phrase.
	/// </summary>
	utility::string_t GetReason() const;
	void SetReason(const utility::string_t& Value);
	bool HasReason() const;


protected:
	std::optional<utility::string_t> m_From;
	std::optional<utility::string_t> m_To;
	std::optional<utility::string_t> m_At;
	std::optional<utility::string_t> m_By;
	std::optional<utility::string_t> m_Reason;
};

/// <summary>
/// What a teardown released, what it kept, and what it could not reach.
///
/// <b>The stranded lists are the point of returning anything at all.</b> A teardown deletes the tenant
/// even when de-provisioning partially failed — leaving a half-torn-down workspace is worse than leaving
/// an orphaned hostname — so this, and the audit row beside it, are the only records of what leaked.
/// </summary>
class OrgTenantTeardownResult : public csp::services::DtoBase
{
public:
	OrgTenantTeardownResult();
	virtual ~OrgTenantTeardownResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The torn-down tenant's id.
	/// </summary>
	utility::string_t GetTenantId() const;
	void SetTenantId(const utility::string_t& Value);
	bool HasTenantId() const;

	/// <summary>
	/// The torn-down tenant's system name.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The organization it belonged to.
	/// </summary>
	utility::string_t GetOrganizationId() const;
	void SetOrganizationId(const utility::string_t& Value);
	bool HasOrganizationId() const;

	/// <summary>
	/// The hostnames that were released, or were already gone.
	/// </summary>
	const std::vector<utility::string_t>& GetUrlsReleased() const;
	void SetUrlsReleased(const std::vector<utility::string_t>& Value);
	bool HasUrlsReleased() const;

	/// <summary>
	/// ⚠ The hostnames that could <b>not</b> be released. Each one is a certificate SAN slot and an edge
	/// binding that no longer has a tenant to identify it from, and needs cleaning up by hand.
	/// </summary>
	const std::vector<utility::string_t>& GetUrlsStranded() const;
	void SetUrlsStranded(const std::vector<utility::string_t>& Value);
	bool HasUrlsStranded() const;

	/// <summary>
	/// Whether the tenant's CDN leaf — the path rule, backend service, NEG and HMAC key on our shared load
	/// balancer — was fully released (or had never been built).
	/// </summary>
	bool GetCdnLeafReleased() const;
	void SetCdnLeafReleased(const bool& Value);
	bool HasCdnLeafReleased() const;

	/// <summary>
	/// ⚠ The CDN-leaf resources that could <b>not</b> be released, one error each, naming the resource. They are
	/// still in our host project with no tenant left to derive their names from; the
	/// `CdnLeafDeprovisioningFailed` audit rows are the other record of them.
	/// </summary>
	const std::vector<utility::string_t>& GetCdnLeafStranded() const;
	void SetCdnLeafStranded(const std::vector<utility::string_t>& Value);
	bool HasCdnLeafStranded() const;

	/// <summary>
	/// Whether the per-tenant service account was released (or was never provisioned).
	/// </summary>
	bool GetServiceAccountReleased() const;
	void SetServiceAccountReleased(const bool& Value);
	bool HasServiceAccountReleased() const;

	/// <summary>
	/// The service account that was released, when there was one.
	/// </summary>
	utility::string_t GetServiceAccountEmail() const;
	void SetServiceAccountEmail(const utility::string_t& Value);
	bool HasServiceAccountEmail() const;

	/// <summary>
	/// The storage bucket that was deliberately <b>kept</b> (D33), when the tenant had one. It holds the
	/// customer's data, in the customer's own GCP project. ⚠ Nothing lists or reaps it afterwards (G37),
	/// so this field and the audit row are where its existence is recorded.
	/// </summary>
	utility::string_t GetBucketRetained() const;
	void SetBucketRetained(const utility::string_t& Value);
	bool HasBucketRetained() const;

	/// <summary>
	/// Whether a spin-up record was found and moved to `TornDown`. `false` for a tenant that is
	/// org-owned without having been spun up through this flow — hand-associated — which the teardown
	/// proceeds with rather than refusing.
	/// </summary>
	bool GetSpinUpRecordTornDown() const;
	void SetSpinUpRecordTornDown(const bool& Value);
	bool HasSpinUpRecordTornDown() const;


protected:
	std::optional<utility::string_t> m_TenantId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_OrganizationId;
	std::optional<std::vector<utility::string_t>> m_UrlsReleased;
	std::optional<std::vector<utility::string_t>> m_UrlsStranded;
	std::optional<bool> m_CdnLeafReleased;
	std::optional<std::vector<utility::string_t>> m_CdnLeafStranded;
	std::optional<bool> m_ServiceAccountReleased;
	std::optional<utility::string_t> m_ServiceAccountEmail;
	std::optional<utility::string_t> m_BucketRetained;
	std::optional<bool> m_SpinUpRecordTornDown;
};

/// <summary>
/// An organization row for the operator browser and detail view.
/// </summary>
class OrganizationDto : public csp::services::DtoBase
{
public:
	OrganizationDto();
	virtual ~OrganizationDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The organization id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The organization's name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The id of the organization's administrative tenant.
	/// </summary>
	utility::string_t GetAdministrativeTenantId() const;
	void SetAdministrativeTenantId(const utility::string_t& Value);
	bool HasAdministrativeTenantId() const;

	/// <summary>
	/// The name of the organization's administrative tenant.
	/// </summary>
	utility::string_t GetAdministrativeTenantName() const;
	void SetAdministrativeTenantName(const utility::string_t& Value);
	bool HasAdministrativeTenantName() const;

	/// <summary>
	/// The company URL fragment, when the organization has claimed one.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The owning user's id.
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;

	/// <summary>
	/// The organization's external references, by source.
	/// </summary>
	const std::vector<std::shared_ptr<OrganizationExternalRefDto>>& GetExternalRefs() const;
	void SetExternalRefs(const std::vector<std::shared_ptr<OrganizationExternalRefDto>>& Value);
	bool HasExternalRefs() const;

	/// <summary>
	/// How many tenants this organization owns. Only populated on the detail read.
	/// </summary>
	int32_t GetTenantCount() const;
	void SetTenantCount(int32_t Value);
	bool HasTenantCount() const;

	/// <summary>
	/// The tenants this organization owns. Only populated on the detail read.
	/// </summary>
	const std::vector<std::shared_ptr<OrganizationTenantDto>>& GetTenants() const;
	void SetTenants(const std::vector<std::shared_ptr<OrganizationTenantDto>>& Value);
	bool HasTenants() const;

	/// <summary>
	/// When the organization was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the organization was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;

	/// <summary>
	/// The tier assigned AT THIS ORGANIZATION, or null when it carries no assignment of its own.
	///
	/// ⚠⚠ <b>Null is a finding, not a blank.</b> Post-D7 the organization's tier is the tier every
	/// tenant under it resolves to — so an organization with no assignment means every workspace spun
	/// up under it falls through to `Quotas:DefaultTierName`, whatever the customer is paying.
	/// `MarketplacePlanTierService.AssignTierForPlan` has exactly two callers (provisioning, and a
	/// plan change) and the organization <b>backfill is neither</b>, so a backfilled organization is
	/// null here until its customer's next plan change. The view must say so rather than render an
	/// empty cell.
	/// <b>Read from the organization's own row, deliberately not the way tier 2 reads it.</b>`org-billing-tab.js` asks for the ADMINISTRATIVE
	/// TENANT's enforced tier, because `CanAccessOrganizationTierAssignment` refuses a tier-2 caller by design (D21 — a tenant admin reading their
	/// organization's tier is reading across their siblings). MAG_SUP is admitted, so tier 3 can ask the truthful question, and should: the two
	/// numbers are equal only BECAUSE D4 put the tier there, and pre-G73 they silently diverged.
	/// </summary>
	utility::string_t GetTierName() const;
	void SetTierName(const utility::string_t& Value);
	bool HasTierName() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_AdministrativeTenantId;
	std::optional<utility::string_t> m_AdministrativeTenantName;
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_OwnerUserId;
	std::optional<std::vector<std::shared_ptr<OrganizationExternalRefDto>>> m_ExternalRefs;
	std::optional<int32_t> m_TenantCount;
	std::optional<std::vector<std::shared_ptr<OrganizationTenantDto>>> m_Tenants;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<utility::string_t> m_TierName;
};

class OrganizationDtoDataPage : public csp::services::DtoBase
{
public:
	OrganizationDtoDataPage();
	virtual ~OrganizationDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<OrganizationDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<OrganizationDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<OrganizationDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// One external reference on an organization.
/// </summary>
class OrganizationExternalRefDto : public csp::services::DtoBase
{
public:
	OrganizationExternalRefDto();
	virtual ~OrganizationExternalRefDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The owning system.
	/// </summary>
	utility::string_t GetSource() const;
	void SetSource(const utility::string_t& Value);
	bool HasSource() const;

	/// <summary>
	/// The identifier that system knows the organization by.
	/// </summary>
	utility::string_t GetExternalId() const;
	void SetExternalId(const utility::string_t& Value);
	bool HasExternalId() const;


protected:
	std::optional<utility::string_t> m_Source;
	std::optional<utility::string_t> m_ExternalId;
};

/// <summary>
/// A tenant owned by an organization, as the organization view needs it.
/// </summary>
class OrganizationTenantDto : public csp::services::DtoBase
{
public:
	OrganizationTenantDto();
	virtual ~OrganizationTenantDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant id.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The tenant name.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The tenant's display name, when it has one.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Whether the tenant is locked.
	/// </summary>
	bool GetLocked() const;
	void SetLocked(const bool& Value);
	bool HasLocked() const;

	/// <summary>
	/// Whether this is the organization's administrative tenant.
	/// </summary>
	bool GetIsAdministrativeTenant() const;
	void SetIsAdministrativeTenant(const bool& Value);
	bool HasIsAdministrativeTenant() const;

	/// <summary>
	/// How far this workspace got through its spin-up, or null when it did not go through that flow —
	/// a marketplace-born tenant, or one associated by hand.
	///
	/// ⚠ <b>G81: this was absent from the tier-3 response entirely</b>, while `GET my-organization`
	/// has carried it since Lane E. So the customer could see a workspace stranded at
	/// `TenantCreated` and the operator supporting them could not. Same spelling as the tier-2
	/// field, deliberately, so the two surfaces cannot name one state two ways.
	/// </summary>
	utility::string_t GetSpinUpState() const;
	void SetSpinUpState(const utility::string_t& Value);
	bool HasSpinUpState() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<bool> m_Locked;
	std::optional<bool> m_IsAdministrativeTenant;
	std::optional<utility::string_t> m_SpinUpState;
};

/// <summary>
/// Names a tenant to associate with, or promote within, an organization.
/// </summary>
class OrganizationTenantRequest : public csp::services::DtoBase
{
public:
	OrganizationTenantRequest();
	virtual ~OrganizationTenantRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant's name.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;


protected:
	std::optional<utility::string_t> m_TenantName;
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
/// One procurement account in a Procurement check: who it is on our side, the context an operator needs to judge
/// a mismatch (teardown plan S19), and its entitlement rows.
/// </summary>
class ProcurementCheckAccount : public csp::services::DtoBase
{
public:
	ProcurementCheckAccount();
	virtual ~ProcurementCheckAccount();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The procurement account id.
	/// </summary>
	utility::string_t GetProcurementAccountId() const;
	void SetProcurementAccountId(const utility::string_t& Value);
	bool HasProcurementAccountId() const;

	/// <summary>
	/// Our marketplace customer for the account; `null` when we hold none.
	/// </summary>
	utility::string_t GetCustomerId() const;
	void SetCustomerId(const utility::string_t& Value);
	bool HasCustomerId() const;

	/// <summary>
	/// The customer's tenant; `null` when there is no customer or no tenant yet.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// `true` for a synthetic `TEST-` account, which was not sent to Procurement.
	/// </summary>
	bool GetSkipped() const;
	void SetSkipped(const bool& Value);
	bool HasSkipped() const;

	/// <summary>
	/// Why the account could not be checked; `null` when it was (or was skipped).
	/// </summary>
	utility::string_t GetError() const;
	void SetError(const utility::string_t& Value);
	bool HasError() const;

	/// <summary>
	/// The customer's `HasEverActivated`; `null` when there is no customer. It decides what a
	/// cancellation would do (Magnopus.Logic.GoogleMarketplace.Logic.ProcurementCheckAccount.OnCancellation), and it is why the teardown path refuses
	/// an activated customer (teardown plan §9 dangler 3).
	/// </summary>
	bool GetHasEverActivated() const;
	void SetHasEverActivated(const bool& Value);
	bool HasHasEverActivated() const;

	/// <summary>
	/// The tenant's `Locked` flag, read past the cache (saas G74); `null` when there is no tenant to
	/// read.
	/// </summary>
	bool GetTenantLocked() const;
	void SetTenantLocked(const bool& Value);
	bool HasTenantLocked() const;

	/// <summary>
	/// What replaying a missed cancellation would do now, one of Magnopus.Logic.GoogleMarketplace.Logic.ProcurementCheckOnCancellation;
	/// `null` when there is no customer.
	/// </summary>
	utility::string_t GetOnCancellation() const;
	void SetOnCancellation(const utility::string_t& Value);
	bool HasOnCancellation() const;

	/// <summary>
	/// The entitlement rows: mismatches only, unless matches were asked for.
	/// </summary>
	const std::vector<std::shared_ptr<ProcurementCheckEntitlement>>& GetEntitlements() const;
	void SetEntitlements(const std::vector<std::shared_ptr<ProcurementCheckEntitlement>>& Value);
	bool HasEntitlements() const;


protected:
	std::optional<utility::string_t> m_ProcurementAccountId;
	std::optional<utility::string_t> m_CustomerId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<bool> m_Skipped;
	std::optional<utility::string_t> m_Error;
	std::optional<bool> m_HasEverActivated;
	std::optional<bool> m_TenantLocked;
	std::optional<utility::string_t> m_OnCancellation;
	std::optional<std::vector<std::shared_ptr<ProcurementCheckEntitlement>>> m_Entitlements;
};

/// <summary>
/// One entitlement in a Procurement check, with both sides' values side by side so the operator can judge a
/// mismatch without a second lookup. A side the entitlement is missing from has all of its fields `null`.
/// Declared beside the comparison that produces it; the rest of the report's shape is in
/// `IMarketplaceProcurementCheckLogic.cs`.
/// </summary>
class ProcurementCheckEntitlement : public csp::services::DtoBase
{
public:
	ProcurementCheckEntitlement();
	virtual ~ProcurementCheckEntitlement();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The procurement entitlement id (the join key).
	/// </summary>
	utility::string_t GetEntitlementId() const;
	void SetEntitlementId(const utility::string_t& Value);
	bool HasEntitlementId() const;

	/// <summary>
	/// Whether both sides agree (see
	/// M:Magnopus.Logic.GoogleMarketplace.Logic.MarketplaceProcurementComparison.Compare(System.Collections.Generic.IReadOnlyCollection{Magnopus.Logic.GoogleMarketplace.DataAccess.Models.MarketplaceEntitlementDocument},System.Collections.Generic.IReadOnlyCollection{Magnopus.Logic.GoogleMarketplace.Clients.GcpMarketplace.ProcurementEntitlement})).
	/// </summary>
	bool GetMatch() const;
	void SetMatch(const bool& Value);
	bool HasMatch() const;

	/// <summary>
	/// What differs, one of Magnopus.Logic.GoogleMarketplace.Logic.ProcurementCheckDifference; `null` on a match.
	/// </summary>
	utility::string_t GetDifference() const;
	void SetDifference(const utility::string_t& Value);
	bool HasDifference() const;

	/// <summary>
	/// Our stored Magnopus.Logic.GoogleMarketplace.DataAccess.Models.MarketplaceEntitlementState, by name.
	/// </summary>
	utility::string_t GetOurState() const;
	void SetOurState(const utility::string_t& Value);
	bool HasOurState() const;

	/// <summary>
	/// Our stored plan id.
	/// </summary>
	utility::string_t GetOurPlanId() const;
	void SetOurPlanId(const utility::string_t& Value);
	bool HasOurPlanId() const;

	/// <summary>
	/// When our entitlement document was last written.
	/// </summary>
	utility::string_t GetOurUpdatedAt() const;
	void SetOurUpdatedAt(const utility::string_t& Value);
	bool HasOurUpdatedAt() const;

	/// <summary>
	/// Procurement's state string, raw rather than mapped, so a state our mapper does not know is still shown as
	/// Google wrote it.
	/// </summary>
	utility::string_t GetGoogleState() const;
	void SetGoogleState(const utility::string_t& Value);
	bool HasGoogleState() const;

	/// <summary>
	/// Procurement's plan.
	/// </summary>
	utility::string_t GetGooglePlan() const;
	void SetGooglePlan(const utility::string_t& Value);
	bool HasGooglePlan() const;

	/// <summary>
	/// When Procurement last changed the entitlement.
	/// </summary>
	utility::string_t GetGoogleUpdateTime() const;
	void SetGoogleUpdateTime(const utility::string_t& Value);
	bool HasGoogleUpdateTime() const;


protected:
	std::optional<utility::string_t> m_EntitlementId;
	std::optional<bool> m_Match;
	std::optional<utility::string_t> m_Difference;
	std::optional<utility::string_t> m_OurState;
	std::optional<utility::string_t> m_OurPlanId;
	std::optional<utility::string_t> m_OurUpdatedAt;
	std::optional<utility::string_t> m_GoogleState;
	std::optional<utility::string_t> m_GooglePlan;
	std::optional<utility::string_t> m_GoogleUpdateTime;
};

/// <summary>
/// What one Procurement check found. Returned straight to the operator and never stored (teardown plan S18): it
/// is on demand and report-only, so it needs no collection and no index.
/// </summary>
class ProcurementCheckResult : public csp::services::DtoBase
{
public:
	ProcurementCheckResult();
	virtual ~ProcurementCheckResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// When the check ran.
	/// </summary>
	utility::string_t GetCheckedAtUtc() const;
	void SetCheckedAtUtc(const utility::string_t& Value);
	bool HasCheckedAtUtc() const;

	/// <summary>
	/// `true` when there were more accounts to read from Procurement than one run may read
	///             (Magnopus.Logic.GoogleMarketplace.Logic.MarketplaceProcurementCheckLogic.MaxAccountsPerRun). The accounts past the cap were not
	///             checked and appear nowhere in this report.
	/// </summary>
	bool GetTruncated() const;
	void SetTruncated(const bool& Value);
	bool HasTruncated() const;

	std::shared_ptr<ProcurementCheckSummary> GetSummary() const;
	void SetSummary(const std::shared_ptr<ProcurementCheckSummary>& Value);
	bool HasSummary() const;

	/// <summary>
	/// The accounts, each with its entitlement rows. Unless matches were asked for, an account is listed only
	/// when it has something to look at: a mismatch, or a failed read. Skipped accounts are then only counted.
	/// </summary>
	const std::vector<std::shared_ptr<ProcurementCheckAccount>>& GetAccounts() const;
	void SetAccounts(const std::vector<std::shared_ptr<ProcurementCheckAccount>>& Value);
	bool HasAccounts() const;


protected:
	std::optional<utility::string_t> m_CheckedAtUtc;
	std::optional<bool> m_Truncated;
	std::optional<std::shared_ptr<ProcurementCheckSummary>> m_Summary;
	std::optional<std::vector<std::shared_ptr<ProcurementCheckAccount>>> m_Accounts;
};

/// <summary>
/// The counts for one Procurement check. Always the whole run, whether or not matched rows were returned.
/// </summary>
class ProcurementCheckSummary : public csp::services::DtoBase
{
public:
	ProcurementCheckSummary();
	virtual ~ProcurementCheckSummary();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Accounts read from Procurement and compared.
	/// </summary>
	int32_t GetAccountsChecked() const;
	void SetAccountsChecked(int32_t Value);
	bool HasAccountsChecked() const;

	/// <summary>
	/// Synthetic `TEST-` accounts, which do not exist in Procurement and so are never sent to it (S14).
	/// </summary>
	int32_t GetAccountsSkipped() const;
	void SetAccountsSkipped(int32_t Value);
	bool HasAccountsSkipped() const;

	/// <summary>
	/// Accounts that could not be checked; each carries its Magnopus.Logic.GoogleMarketplace.Logic.ProcurementCheckAccount.Error.
	/// </summary>
	int32_t GetAccountsFailed() const;
	void SetAccountsFailed(int32_t Value);
	bool HasAccountsFailed() const;

	/// <summary>
	/// Entitlement rows compared across every checked account, matched and mismatched alike.
	/// </summary>
	int32_t GetEntitlementsCompared() const;
	void SetEntitlementsCompared(int32_t Value);
	bool HasEntitlementsCompared() const;

	/// <summary>
	/// How many of those rows are mismatches.
	/// </summary>
	int32_t GetMismatches() const;
	void SetMismatches(int32_t Value);
	bool HasMismatches() const;


protected:
	std::optional<int32_t> m_AccountsChecked;
	std::optional<int32_t> m_AccountsSkipped;
	std::optional<int32_t> m_AccountsFailed;
	std::optional<int32_t> m_EntitlementsCompared;
	std::optional<int32_t> m_Mismatches;
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
/// The workspace address to give a tenant that does not have one yet. Both fields are optional.
/// </summary>
class ProvisionAppUrlRequest : public csp::services::DtoBase
{
public:
	ProvisionAppUrlRequest();
	virtual ~ProvisionAppUrlRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The company URL fragment, e.g. `acme`. Ignored when the tenant already has one.
	/// </summary>
	utility::string_t GetCompanyUrlFragment() const;
	void SetCompanyUrlFragment(const utility::string_t& Value);
	bool HasCompanyUrlFragment() const;

	/// <summary>
	/// The project URL fragment, e.g. `global`. Ignored when the tenant already has one.
	/// </summary>
	utility::string_t GetProjectUrlFragment() const;
	void SetProjectUrlFragment(const utility::string_t& Value);
	bool HasProjectUrlFragment() const;


protected:
	std::optional<utility::string_t> m_CompanyUrlFragment;
	std::optional<utility::string_t> m_ProjectUrlFragment;
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
/// Queue configuration attributes from the RabbitMQ Management API.
/// </summary>
class QueueConfigInfo : public csp::services::DtoBase
{
public:
	QueueConfigInfo();
	virtual ~QueueConfigInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Whether the queue survives broker restarts
	/// </summary>
	bool GetDur() const;
	void SetDur(const bool& Value);
	bool HasDur() const;

	/// <summary>
	/// Whether the queue is deleted when the last consumer unsubscribes
	/// </summary>
	bool GetAd() const;
	void SetAd(const bool& Value);
	bool HasAd() const;

	/// <summary>
	/// Per-message TTL in milliseconds (x-message-ttl argument). 0 = not set.
	/// </summary>
	int64_t GetTtl() const;
	void SetTtl(int64_t Value);
	bool HasTtl() const;

	/// <summary>
	/// Maximum queue depth in messages (x-max-length argument). 0 = not set.
	/// </summary>
	int32_t GetMl() const;
	void SetMl(int32_t Value);
	bool HasMl() const;

	/// <summary>
	/// Maximum delivery attempts before DLQ (x-delivery-limit argument). 0 = not set.
	/// </summary>
	int32_t GetMrc() const;
	void SetMrc(int32_t Value);
	bool HasMrc() const;


protected:
	std::optional<bool> m_Dur;
	std::optional<bool> m_Ad;
	std::optional<int64_t> m_Ttl;
	std::optional<int32_t> m_Ml;
	std::optional<int32_t> m_Mrc;
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
	/// Messages waiting to be picked up (messages_ready from Management API)
	/// </summary>
	int32_t GetW() const;
	void SetW(int32_t Value);
	bool HasW() const;

	/// <summary>
	/// Messages currently being processed by a consumer (messages_unacknowledged from Management API)
	/// </summary>
	int32_t GetIf() const;
	void SetIf(int32_t Value);
	bool HasIf() const;


protected:
	std::optional<int32_t> m_W;
	std::optional<int32_t> m_If;
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
/// Health data for a single RabbitMQ queue and its optional DLQ.
/// </summary>
class QueueHealthInfo : public csp::services::DtoBase
{
public:
	QueueHealthInfo();
	virtual ~QueueHealthInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Friendly queue name extracted from the RabbitMQ queue name
	/// (e.g., "GenericNodeTrigger", "HunyuanImageTrigger", "GraphExecutionTrigger")
	/// </summary>
	utility::string_t GetN() const;
	void SetN(const utility::string_t& Value);
	bool HasN() const;

	/// <summary>
	/// Raw RabbitMQ queue name (e.g., "local-Prototype-GenericNodeTriggerSubscriber")
	/// </summary>
	utility::string_t GetQn() const;
	void SetQn(const utility::string_t& Value);
	bool HasQn() const;

	/// <summary>
	/// Queue classification: "system" for orchestration queues or "node-worker" for distributed node processing queues.
	/// </summary>
	utility::string_t GetT() const;
	void SetT(const utility::string_t& Value);
	bool HasT() const;

	std::shared_ptr<QueueDepthInfo> GetD() const;
	void SetD(const std::shared_ptr<QueueDepthInfo>& Value);
	bool HasD() const;

	/// <summary>
	/// Age of the oldest message in seconds, derived from head_message_timestamp.
	/// Null if the queue is empty.
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
	/// </summary>
	int64_t GetUa() const;
	void SetUa(int64_t Value);
	bool HasUa() const;

	/// <summary>
	/// True when this queue was in a previous snapshot but is no longer present.
	/// </summary>
	bool GetDel() const;
	void SetDel(const bool& Value);
	bool HasDel() const;


protected:
	std::optional<utility::string_t> m_N;
	std::optional<utility::string_t> m_Qn;
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
/// Read model for a per-tenant, per-node queue override (BYOGPU) surfaced to the admin UI.
/// </summary>
class QueueOverrideDto : public csp::services::DtoBase
{
public:
	QueueOverrideDto();
	virtual ~QueueOverrideDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tenant the override applies to.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Node type the override targets.
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// Queue name this node type's work is published to for the tenant.
	/// </summary>
	utility::string_t GetOverrideQueueName() const;
	void SetOverrideQueueName(const utility::string_t& Value);
	bool HasOverrideQueueName() const;

	/// <summary>
	/// Whether the override is active (disabled overrides fall back to the declared queue).
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// When the override was created.
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// When the override was last updated.
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	void SetUpdatedAt(const utility::string_t& Value);
	bool HasUpdatedAt() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<utility::string_t> m_OverrideQueueName;
	std::optional<bool> m_Enabled;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
};

/// <summary>
/// Create-or-update request for a queue override. One override exists per (tenant, node type);
/// posting the same pair again updates it.
/// </summary>
class QueueOverrideUpsertRequest : public csp::services::DtoBase
{
public:
	QueueOverrideUpsertRequest();
	virtual ~QueueOverrideUpsertRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Target tenant. Required for Magnopus admins (who administer any tenant); ignored for
	/// tenant admins, who are always scoped to their own tenant.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// The node type to override (must match a node definition's NodeTypeId).
	/// </summary>
	utility::string_t GetNodeTypeId() const;
	void SetNodeTypeId(const utility::string_t& Value);
	bool HasNodeTypeId() const;

	/// <summary>
	/// The queue name to route this node type's work to for the tenant.
	/// </summary>
	utility::string_t GetOverrideQueueName() const;
	void SetOverrideQueueName(const utility::string_t& Value);
	bool HasOverrideQueueName() const;

	/// <summary>
	/// Whether the override is active. Defaults to true on create; when omitted on update the
	/// existing value is preserved.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_NodeTypeId;
	std::optional<utility::string_t> m_OverrideQueueName;
	std::optional<bool> m_Enabled;
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
/// Per-tier quota limit configuration for inline editing on secret definitions.
/// Used by the Inspector secret definition modal to bundle tier configs with the save request.
/// Aggregation maps these to QuotaFeatureTierDto and upserts via the Tracking service.
/// </summary>
class QuotaFeatureTierConfigItem : public csp::services::DtoBase
{
public:
	QuotaFeatureTierConfigItem();
	virtual ~QuotaFeatureTierConfigItem();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Tier name to apply this configuration to.
	/// </summary>
	utility::string_t GetTierName() const;
	void SetTierName(const utility::string_t& Value);
	bool HasTierName() const;

	/// <summary>
	/// Limit at this tier. Null = unlimited, 0 = blocked.
	/// </summary>
	int32_t GetLimit() const;
	void SetLimit(int32_t Value);
	bool HasLimit() const;

	/// <summary>
	/// Period for counting: 0 = Total (lifetime), 1 = CalendarMonth, 2 = Hours24.
	/// Matches QuotaSumByPeriod enum values.
	/// </summary>
	int32_t GetPeriod() const;
	void SetPeriod(int32_t Value);
	bool HasPeriod() const;

	/// <summary>
	/// Whether reductions count toward the limit.
	/// </summary>
	bool GetAllowReductions() const;
	void SetAllowReductions(const bool& Value);
	bool HasAllowReductions() const;

	/// <summary>
	/// Whether this feature is active at this tier.
	/// </summary>
	bool GetEnabled() const;
	void SetEnabled(const bool& Value);
	bool HasEnabled() const;

	/// <summary>
	/// Whether limits are enforced (vs. track-only / observing mode).
	/// </summary>
	bool GetLimitsEnforced() const;
	void SetLimitsEnforced(const bool& Value);
	bool HasLimitsEnforced() const;

	/// <summary>
	/// Optional category for UI grouping.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;


protected:
	std::optional<utility::string_t> m_TierName;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_Period;
	std::optional<bool> m_AllowReductions;
	std::optional<bool> m_Enabled;
	std::optional<bool> m_LimitsEnforced;
	std::optional<utility::string_t> m_Category;
};

/// <summary>
/// Info about a single redrive task (RabbitMQ Shovel) from the Management API.
/// </summary>
class RedriveTaskInfo : public csp::services::DtoBase
{
public:
	RedriveTaskInfo();
	virtual ~RedriveTaskInfo();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Shovel name (used as the task handle for cancel operations)
	/// </summary>
	utility::string_t GetTaskHandle() const;
	void SetTaskHandle(const utility::string_t& Value);
	bool HasTaskHandle() const;

	/// <summary>
	/// Shovel state: "starting", "running", "stopped", or "terminated"
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_TaskHandle;
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// The new name for the caller's own organization.
/// </summary>
class RenameMyOrganizationRequest : public csp::services::DtoBase
{
public:
	RenameMyOrganizationRequest();
	virtual ~RenameMyOrganizationRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The new name. Must not already be held by another organization.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
};

/// <summary>
/// Renames an organization.
/// </summary>
class RenameOrganizationRequest : public csp::services::DtoBase
{
public:
	RenameOrganizationRequest();
	virtual ~RenameOrganizationRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The new name. Must be unique.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;


protected:
	std::optional<utility::string_t> m_Name;
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
/// Body for
/// M:Olympus.Service.Aggregation.Controllers.InspectorExecutionsController.SelfReportExecution(Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest).
/// UserId and TenantName fields are not present — they are stamped from the JWT.
/// </summary>
class SelfReportExecutionRequest : public csp::services::DtoBase
{
public:
	SelfReportExecutionRequest();
	virtual ~SelfReportExecutionRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// SHA-256 hash of the graph structure (optional).
	/// </summary>
	utility::string_t GetGraphHash() const;
	void SetGraphHash(const utility::string_t& Value);
	bool HasGraphHash() const;

	/// <summary>
	/// Human-readable graph name (optional).
	/// </summary>
	utility::string_t GetGraphName() const;
	void SetGraphName(const utility::string_t& Value);
	bool HasGraphName() const;

	/// <summary>
	/// Total node count in the graph.
	/// </summary>
	int32_t GetNodeCount() const;
	void SetNodeCount(int32_t Value);
	bool HasNodeCount() const;

	/// <summary>
	/// Total connection count in the graph.
	/// </summary>
	int32_t GetConnectionCount() const;
	void SetConnectionCount(int32_t Value);
	bool HasConnectionCount() const;

	/// <summary>
	/// Execution outcome: "completed" or "failed".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Node ID that caused the failure (when Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest.Status is "failed").
	/// </summary>
	utility::string_t GetFailedNodeId() const;
	void SetFailedNodeId(const utility::string_t& Value);
	bool HasFailedNodeId() const;

	/// <summary>
	/// Error message (when Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest.Status is "failed").
	/// </summary>
	utility::string_t GetErrorMessage() const;
	void SetErrorMessage(const utility::string_t& Value);
	bool HasErrorMessage() const;

	/// <summary>
	/// Wall-clock time the execution began (caller-supplied).
	/// </summary>
	utility::string_t GetCreatedAt() const;
	void SetCreatedAt(const utility::string_t& Value);
	bool HasCreatedAt() const;

	/// <summary>
	/// Wall-clock time the execution finished (caller-supplied).
	/// </summary>
	utility::string_t GetCompletedAt() const;
	void SetCompletedAt(const utility::string_t& Value);
	bool HasCompletedAt() const;

	/// <summary>
	/// Per-node execution summaries. Capped at Olympus.Service.Aggregation.Controllers.InspectorExecutionsController.MaxNodeSummariesPerReport.
	/// </summary>
	const std::vector<std::shared_ptr<SelfReportNodeSummary>>& GetNodeSummaries() const;
	void SetNodeSummaries(const std::vector<std::shared_ptr<SelfReportNodeSummary>>& Value);
	bool HasNodeSummaries() const;

	/// <summary>
	/// Node type label → required secret key names. Used to debit quota for completed nodes.
	/// </summary>
	const std::map<utility::string_t, std::vector<utility::string_t>>& GetNodeKeyRequirements() const;
	void SetNodeKeyRequirements(const std::map<utility::string_t, std::vector<utility::string_t>>& Value);
	bool HasNodeKeyRequirements() const;


protected:
	std::optional<utility::string_t> m_GraphHash;
	std::optional<utility::string_t> m_GraphName;
	std::optional<int32_t> m_NodeCount;
	std::optional<int32_t> m_ConnectionCount;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_FailedNodeId;
	std::optional<utility::string_t> m_ErrorMessage;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_CompletedAt;
	std::optional<std::vector<std::shared_ptr<SelfReportNodeSummary>>> m_NodeSummaries;
	std::optional<std::map<utility::string_t, std::vector<utility::string_t>>> m_NodeKeyRequirements;
};

/// <summary>
/// Response body for
/// M:Olympus.Service.Aggregation.Controllers.InspectorExecutionsController.SelfReportExecution(Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest).
/// </summary>
class SelfReportExecutionResponse : public csp::services::DtoBase
{
public:
	SelfReportExecutionResponse();
	virtual ~SelfReportExecutionResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Server-generated execution ID.
	/// </summary>
	utility::string_t GetExecutionId() const;
	void SetExecutionId(const utility::string_t& Value);
	bool HasExecutionId() const;

	/// <summary>
	/// Always "recorded" on success.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;


protected:
	std::optional<utility::string_t> m_ExecutionId;
	std::optional<utility::string_t> m_Status;
};

/// <summary>
/// Per-node summary entry for Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest.
/// </summary>
class SelfReportNodeSummary : public csp::services::DtoBase
{
public:
	SelfReportNodeSummary();
	virtual ~SelfReportNodeSummary();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Node ID within the graph.
	/// </summary>
	utility::string_t GetNodeId() const;
	void SetNodeId(const utility::string_t& Value);
	bool HasNodeId() const;

	/// <summary>
	/// Node type label (matches keys in Olympus.Service.Aggregation.Controllers.SelfReportExecutionRequest.NodeKeyRequirements).
	/// </summary>
	utility::string_t GetNodeType() const;
	void SetNodeType(const utility::string_t& Value);
	bool HasNodeType() const;

	/// <summary>
	/// Node outcome: "completed", "failed", or "skipped".
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// Time the node started executing (optional).
	/// </summary>
	utility::string_t GetStartedAt() const;
	void SetStartedAt(const utility::string_t& Value);
	bool HasStartedAt() const;

	/// <summary>
	/// Time the node finished (optional).
	/// </summary>
	utility::string_t GetCompletedAt() const;
	void SetCompletedAt(const utility::string_t& Value);
	bool HasCompletedAt() const;

	/// <summary>
	/// Per-node error message (when status is "failed").
	/// </summary>
	utility::string_t GetErrorMessage() const;
	void SetErrorMessage(const utility::string_t& Value);
	bool HasErrorMessage() const;

	/// <summary>
	/// Queue name for distributed nodes; null for in-process nodes.
	/// </summary>
	utility::string_t GetQueue() const;
	void SetQueue(const utility::string_t& Value);
	bool HasQueue() const;

	/// <summary>
	/// Elapsed execution time in milliseconds (optional).
	/// </summary>
	double GetDurationMs() const;
	void SetDurationMs(double Value);
	bool HasDurationMs() const;

	/// <summary>
	/// Node-emitted billing signal (nodey-now path): invocation-key → emitted dimensions. The
	/// runner strips this from chained outputs and forwards it here; the usage-rating path prices it.
	/// </summary>
	const std::map<utility::string_t, std::map<utility::string_t, utility::string_t>>& GetBillingMetrics() const;
	void SetBillingMetrics(const std::map<utility::string_t, std::map<utility::string_t, utility::string_t>>& Value);
	bool HasBillingMetrics() const;


protected:
	std::optional<utility::string_t> m_NodeId;
	std::optional<utility::string_t> m_NodeType;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_StartedAt;
	std::optional<utility::string_t> m_CompletedAt;
	std::optional<utility::string_t> m_ErrorMessage;
	std::optional<utility::string_t> m_Queue;
	std::optional<double> m_DurationMs;
	std::optional<std::map<utility::string_t, std::map<utility::string_t, utility::string_t>>> m_BillingMetrics;
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
/// Transfers organization ownership.
/// </summary>
class SetOrganizationOwnerRequest : public csp::services::DtoBase
{
public:
	SetOrganizationOwnerRequest();
	virtual ~SetOrganizationOwnerRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The new owner's user id.
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;


protected:
	std::optional<utility::string_t> m_OwnerUserId;
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
	/// When true, a coalescence document will be created to track the two async export steps
	/// (ObjectMessages and Prototypes). Olympus.Service.Aggregation.Dtos.SpaceExportDto.CoalescenceId will be populated on the
	/// parameters dto after the coalescence is created.
	/// </summary>
	bool GetCreateCoalescence() const;
	void SetCreateCoalescence(const bool& Value);
	bool HasCreateCoalescence() const;

	/// <summary>
	/// The coalescence Id for this export, populated when Olympus.Service.Aggregation.Dtos.SpaceExportDto.CreateCoalescence is true.
	/// Passed downstream so async subscribers can call AdvanceAndComplete on the correct document.
	/// </summary>
	utility::string_t GetCoalescenceId() const;
	void SetCoalescenceId(const utility::string_t& Value);
	bool HasCoalescenceId() const;

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
	std::optional<bool> m_CreateCoalescence;
	std::optional<utility::string_t> m_CoalescenceId;
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

	/// <summary>
	/// When true (typically during snapshot apply operations), preserves the existing space's
	/// member group associations and does not replace them with those from the imported export.
	/// This ensures user permissions on the space do not change during the import process.
	/// </summary>
	bool GetPreserveExistingMemberPermissions() const;
	void SetPreserveExistingMemberPermissions(const bool& Value);
	bool HasPreserveExistingMemberPermissions() const;


protected:
	std::optional<bool> m_RequiresInvite;
	std::optional<bool> m_Discoverable;
	std::optional<bool> m_IncludeMusubiGeneratedAssets;
	std::optional<bool> m_PreserveExistingMemberPermissions;
};

/// <summary>
/// Represents a space snapshot record returned from the API.
/// </summary>
class SpaceSnapshotDto : public csp::services::DtoBase
{
public:
	SpaceSnapshotDto();
	virtual ~SpaceSnapshotDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier of the snapshot.
	/// </summary>
	utility::string_t GetId() const;
	void SetId(const utility::string_t& Value);
	bool HasId() const;

	/// <summary>
	/// The user-created name of the snapshot.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// The display name of the user who created the snapshot.
	/// </summary>
	utility::string_t GetUserDisplayName() const;
	void SetUserDisplayName(const utility::string_t& Value);
	bool HasUserDisplayName() const;

	/// <summary>
	/// The Id of the space that was snapshotted.
	/// </summary>
	utility::string_t GetSpaceId() const;
	void SetSpaceId(const utility::string_t& Value);
	bool HasSpaceId() const;

	/// <summary>
	/// The human-readable name of the space at the time of the snapshot.
	/// </summary>
	utility::string_t GetSpaceName() const;
	void SetSpaceName(const utility::string_t& Value);
	bool HasSpaceName() const;

	/// <summary>
	/// The export id generated during the snapshot export step.
	/// </summary>
	utility::string_t GetExportId() const;
	void SetExportId(const utility::string_t& Value);
	bool HasExportId() const;

	/// <summary>
	/// The semantic version of this snapshot in major.minor format.
	/// </summary>
	utility::string_t GetSnapshotVersion() const;
	void SetSnapshotVersion(const utility::string_t& Value);
	bool HasSnapshotVersion() const;

	/// <summary>
	/// The coalescence id of the export pipeline initiated during the snapshot.
	/// </summary>
	utility::string_t GetExportCoalescenceId() const;
	void SetExportCoalescenceId(const utility::string_t& Value);
	bool HasExportCoalescenceId() const;

	/// <summary>
	/// The coalescence id that tracked this snapshot operation end-to-end.
	/// </summary>
	utility::string_t GetCoalescenceId() const;
	void SetCoalescenceId(const utility::string_t& Value);
	bool HasCoalescenceId() const;

	/// <summary>
	/// The version number of the checkpoint asset written during this snapshot.
	/// </summary>
	int32_t GetCheckpointVersion() const;
	void SetCheckpointVersion(int32_t Value);
	bool HasCheckpointVersion() const;

	/// <summary>
	/// The date and time at which the snapshot was initiated.
	/// </summary>
	utility::string_t GetSnapshotStartedAt() const;
	void SetSnapshotStartedAt(const utility::string_t& Value);
	bool HasSnapshotStartedAt() const;

	/// <summary>
	/// The date and time at which the snapshot completed successfully.
	/// </summary>
	utility::string_t GetSnapshotCompletedAt() const;
	void SetSnapshotCompletedAt(const utility::string_t& Value);
	bool HasSnapshotCompletedAt() const;

	/// <summary>
	/// The id of the user who requested the snapshot.
	/// </summary>
	utility::string_t GetRequestedByUserId() const;
	void SetRequestedByUserId(const utility::string_t& Value);
	bool HasRequestedByUserId() const;

	/// <summary>
	/// The prototype id associated with the checkpoint created.
	/// </summary>
	utility::string_t GetCheckpointPrototypeId() const;
	void SetCheckpointPrototypeId(const utility::string_t& Value);
	bool HasCheckpointPrototypeId() const;

	/// <summary>
	/// The current status of the snapshot operation.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// An optional reason string populated when the snapshot fails.
	/// </summary>
	utility::string_t GetFailureReason() const;
	void SetFailureReason(const utility::string_t& Value);
	bool HasFailureReason() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_Name;
	std::optional<utility::string_t> m_UserDisplayName;
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_SpaceName;
	std::optional<utility::string_t> m_ExportId;
	std::optional<utility::string_t> m_SnapshotVersion;
	std::optional<utility::string_t> m_ExportCoalescenceId;
	std::optional<utility::string_t> m_CoalescenceId;
	std::optional<int32_t> m_CheckpointVersion;
	std::optional<utility::string_t> m_SnapshotStartedAt;
	std::optional<utility::string_t> m_SnapshotCompletedAt;
	std::optional<utility::string_t> m_RequestedByUserId;
	std::optional<utility::string_t> m_CheckpointPrototypeId;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_FailureReason;
};

class SpaceSnapshotDtoDataPage : public csp::services::DtoBase
{
public:
	SpaceSnapshotDtoDataPage();
	virtual ~SpaceSnapshotDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<SpaceSnapshotDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<SpaceSnapshotDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<SpaceSnapshotDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Options for taking a snapshot of a space.
/// </summary>
class SpaceSnapshotOptions : public csp::services::DtoBase
{
public:
	SpaceSnapshotOptions();
	virtual ~SpaceSnapshotOptions();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The ID of the space to take a snapshot of.
	/// </summary>
	utility::string_t GetSpaceId() const;
	bool HasSpaceId() const;

	/// <summary>
	/// The name of the tenant that owns the space.
	/// </summary>
	utility::string_t GetTenantName() const;
	bool HasTenantName() const;

	/// <summary>
	/// The name of the snapshot. A unique string that identifies the snapshot.
	/// This will be used to name the snapshot file in storage, and to identify the snapshot in lists of snapshots.
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	/// <summary>
	/// When `true`, the snapshot will be assigned the next major version with a minor version of 0
	/// (e.g. `1.3` → `2.0`). When `false` (default), the minor version is incremented
	/// (e.g. `1.3` → `1.4`). Has no effect on the first snapshot for a space, which always starts at `1.0`.
	/// </summary>
	bool GetIsMajorVersion() const;
	void SetIsMajorVersion(const bool& Value);
	bool HasIsMajorVersion() const;

	/// <summary>
	/// When `true`, this snapshot is being created as part of an apply-snapshot flow (pre-apply backup).
	/// Set internally by `ApplySnapshotAsync` when `backupInProgress` is requested.
	/// </summary>
	bool GetIsFromApply() const;
	bool HasIsFromApply() const;

	/// <summary>
	/// The coalescence id of the apply-snapshot operation that triggered this backup snapshot.
	/// Set internally when `IsFromApply` is `true`.
	/// </summary>
	utility::string_t GetApplyCoalescenceId() const;
	bool HasApplyCoalescenceId() const;


protected:
	std::optional<utility::string_t> m_SpaceId;
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_Name;
	std::optional<bool> m_IsMajorVersion;
	std::optional<bool> m_IsFromApply;
	std::optional<utility::string_t> m_ApplyCoalescenceId;
};

/// <summary>
/// Object containing properties of the response from creating a space snapshot job, which currently only contains the coalescence id to query the
/// status of the job with.
/// </summary>
class SpaceSnapshotResponse : public csp::services::DtoBase
{
public:
	SpaceSnapshotResponse();
	virtual ~SpaceSnapshotResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The coalescence id to query the status of the space snapshot job with.
	/// </summary>
	utility::string_t GetCoalescenceId() const;
	void SetCoalescenceId(const utility::string_t& Value);
	bool HasCoalescenceId() const;


protected:
	std::optional<utility::string_t> m_CoalescenceId;
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
/// Request body for starting a DLQ redrive operation.
/// </summary>
class StartRedriveRequest : public csp::services::DtoBase
{
public:
	StartRedriveRequest();
	virtual ~StartRedriveRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Optional rate limit for redriving messages (messages per second). Null means no limit.
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
/// The readiness of a single product (app) for a tenant. The Magnopus.Logic.GoogleMarketplace.Dtos.TenantAppStatusDto.State vocabulary is
/// deliberately cloud-agnostic (the same values whether status is produced from per-hostname DNS stages or coarsely from the marketplace onboarding
/// state), so nothing downstream forks per cloud.
/// </summary>
class TenantAppStatusDto : public csp::services::DtoBase
{
public:
	TenantAppStatusDto();
	virtual ~TenantAppStatusDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The hostname `type` this app maps to (`oko` for Spaces, `nodey` for Nodey). The join
	/// key to the frontend app catalog, which owns the display name / icon / blurb.
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;

	/// <summary>
	/// The product's fully-qualified hostname when known (either the live typed hostname, or the expected
	/// hostname derived from the tenant's URL fragments while still provisioning). `null` when nothing is
	/// known yet (a not-started / "in queue" app).
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// The cloud-agnostic readiness state: `ready` (launchable), `provisioning` (mid-flight),
	/// `queued` (not started), `error` (needs attention), or `removing` (the app's URL is being torn
	/// down).
	/// </summary>
	utility::string_t GetState() const;
	void SetState(const utility::string_t& Value);
	bool HasState() const;

	/// <summary>
	/// A coarse 0–100 progress indicator derived from the provisioning stage (a real stage label mapped to a
	/// bucket, not a fabricated percentage). `null` for the `error` and `removing` states.
	/// </summary>
	int32_t GetPercentComplete() const;
	void SetPercentComplete(int32_t Value);
	bool HasPercentComplete() const;

	/// <summary>
	/// A short, human-readable label for the current stage (e.g. "Deploying CDN", "Live").
	/// </summary>
	utility::string_t GetCurrentStageShortDescription() const;
	void SetCurrentStageShortDescription(const utility::string_t& Value);
	bool HasCurrentStageShortDescription() const;

	/// <summary>
	/// The URL to open the app — populated only when Magnopus.Logic.GoogleMarketplace.Dtos.TenantAppStatusDto.State is `ready`.
	/// </summary>
	utility::string_t GetLaunchUrl() const;
	void SetLaunchUrl(const utility::string_t& Value);
	bool HasLaunchUrl() const;

	/// <summary>
	/// Seconds elapsed since this app's provisioning was kicked off (measured from the provisioning job's
	/// creation, so it includes the "queued" wait). Populated only while the app is still coming online
	/// (`provisioning` / `queued`); `null` once ready/errored or for a non-provisioning tenant.
	/// The UI renders a live "provisioning for Xm Ys" timer, ticking locally between polls.
	/// </summary>
	int32_t GetElapsedSeconds() const;
	void SetElapsedSeconds(int32_t Value);
	bool HasElapsedSeconds() const;


protected:
	std::optional<utility::string_t> m_Type;
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_State;
	std::optional<int32_t> m_PercentComplete;
	std::optional<utility::string_t> m_CurrentStageShortDescription;
	std::optional<utility::string_t> m_LaunchUrl;
	std::optional<int32_t> m_ElapsedSeconds;
};

/// <summary>
/// The tenant's app launcher state (the MagGyver "Apps page"): one entry per product, each carrying a
/// cloud-agnostic readiness state so the UI can render a launchable, provisioning, queued, or errored card.
/// Sanitized — no certificate ARNs / change ids. Readable by any authenticated user, scoped to their own
/// tenant (see `MarketplaceController.GetApps`).
/// </summary>
class TenantAppsResponse : public csp::services::DtoBase
{
public:
	TenantAppsResponse();
	virtual ~TenantAppsResponse();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The per-product app statuses, in catalog order.
	/// </summary>
	const std::vector<std::shared_ptr<TenantAppStatusDto>>& GetApps() const;
	void SetApps(const std::vector<std::shared_ptr<TenantAppStatusDto>>& Value);
	bool HasApps() const;


protected:
	std::optional<std::vector<std::shared_ptr<TenantAppStatusDto>>> m_Apps;
};

/// <summary>
/// Lightweight DTO for tenant hostnames — no sensitive tenant data.
/// </summary>
class TenantHostnamesDto : public csp::services::DtoBase
{
public:
	TenantHostnamesDto();
	virtual ~TenantHostnamesDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Legacy mapped hostnames (plain strings).
	/// </summary>
	const std::vector<utility::string_t>& GetMappedHostnames() const;
	void SetMappedHostnames(const std::vector<utility::string_t>& Value);
	bool HasMappedHostnames() const;

	/// <summary>
	/// Typed hostnames with type metadata.
	/// </summary>
	const std::vector<std::shared_ptr<TypedHostnameDto>>& GetTypedHostnames() const;
	void SetTypedHostnames(const std::vector<std::shared_ptr<TypedHostnameDto>>& Value);
	bool HasTypedHostnames() const;


protected:
	std::optional<std::vector<utility::string_t>> m_MappedHostnames;
	std::optional<std::vector<std::shared_ptr<TypedHostnameDto>>> m_TypedHostnames;
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
/// Ranking + identity for one of the top users of a given key over a date range.
/// The repository fills Magnopus.Logic.Musubi.DataAccess.Models.TopUserKeyUsage.UserId,
/// Magnopus.Logic.Musubi.DataAccess.Models.TopUserKeyUsage.TenantName and Magnopus.Logic.Musubi.DataAccess.Models.TopUserKeyUsage.Total; the logic
/// layer enriches Magnopus.Logic.Musubi.DataAccess.Models.TopUserKeyUsage.Email and
/// Magnopus.Logic.Musubi.DataAccess.Models.TopUserKeyUsage.DisplayName via the profile service.
/// </summary>
class TopUserKeyUsage : public csp::services::DtoBase
{
public:
	TopUserKeyUsage();
	virtual ~TopUserKeyUsage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The user id.
	/// </summary>
	utility::string_t GetUserId() const;
	void SetUserId(const utility::string_t& Value);
	bool HasUserId() const;

	/// <summary>
	/// The user's email (enriched from the profile service; the required admin label).
	/// </summary>
	utility::string_t GetEmail() const;
	void SetEmail(const utility::string_t& Value);
	bool HasEmail() const;

	/// <summary>
	/// The user's display name (enriched from the profile service; often null).
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// The tenant this user most used the key under (dominant tenant over the range),
	/// sourced from the execution data — not the profile (profiles have no tenant field).
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// Total completed-node activations of the key by this user over the whole range.
	/// </summary>
	int64_t GetTotal() const;
	void SetTotal(int64_t Value);
	bool HasTotal() const;


protected:
	std::optional<utility::string_t> m_UserId;
	std::optional<utility::string_t> m_Email;
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_TenantName;
	std::optional<int64_t> m_Total;
};

/// <summary>
/// Result of the "top users per key" query: a ranking (Magnopus.Logic.Musubi.DataAccess.Models.TopUsersPerKeyResult.TopUsers) plus the
/// per-day series (Magnopus.Logic.Musubi.DataAccess.Models.TopUsersPerKeyResult.Series) restricted to those ranked users.
/// </summary>
class TopUsersPerKeyResult : public csp::services::DtoBase
{
public:
	TopUsersPerKeyResult();
	virtual ~TopUsersPerKeyResult();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The top users by total key activations over the range, sorted descending.
	/// </summary>
	const std::vector<std::shared_ptr<TopUserKeyUsage>>& GetTopUsers() const;
	void SetTopUsers(const std::vector<std::shared_ptr<TopUserKeyUsage>>& Value);
	bool HasTopUsers() const;

	/// <summary>
	/// Per-(date, user) counts restricted to Magnopus.Logic.Musubi.DataAccess.Models.TopUsersPerKeyResult.TopUsers.
	/// </summary>
	const std::vector<std::shared_ptr<DailyUserKeyUsage>>& GetSeries() const;
	void SetSeries(const std::vector<std::shared_ptr<DailyUserKeyUsage>>& Value);
	bool HasSeries() const;


protected:
	std::optional<std::vector<std::shared_ptr<TopUserKeyUsage>>> m_TopUsers;
	std::optional<std::vector<std::shared_ptr<DailyUserKeyUsage>>> m_Series;
};

/// <summary>
/// Typed hostname with its service type (e.g. "nodey", "oko").
/// </summary>
class TypedHostnameDto : public csp::services::DtoBase
{
public:
	TypedHostnameDto();
	virtual ~TypedHostnameDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The fully-qualified hostname.
	/// </summary>
	utility::string_t GetHostname() const;
	void SetHostname(const utility::string_t& Value);
	bool HasHostname() const;

	/// <summary>
	/// Service type (e.g. "nodey", "oko").
	/// </summary>
	utility::string_t GetType() const;
	void SetType(const utility::string_t& Value);
	bool HasType() const;


protected:
	std::optional<utility::string_t> m_Hostname;
	std::optional<utility::string_t> m_Type;
};

/// <summary>
/// Request to update an existing application secret definition.
/// </summary>
class UpdateApplicationSecretRequest : public csp::services::DtoBase
{
public:
	UpdateApplicationSecretRequest();
	virtual ~UpdateApplicationSecretRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Human-readable name.
	/// </summary>
	utility::string_t GetDisplayName() const;
	void SetDisplayName(const utility::string_t& Value);
	bool HasDisplayName() const;

	/// <summary>
	/// Description of what this secret is used for.
	/// </summary>
	utility::string_t GetDescription() const;
	void SetDescription(const utility::string_t& Value);
	bool HasDescription() const;

	/// <summary>
	/// Grouping category.
	/// </summary>
	utility::string_t GetCategory() const;
	void SetCategory(const utility::string_t& Value);
	bool HasCategory() const;

	/// <summary>
	/// Display ordering within category.
	/// </summary>
	int32_t GetSortOrder() const;
	void SetSortOrder(int32_t Value);
	bool HasSortOrder() const;

	/// <summary>
	/// Type of secret: "api_key" (default) or "gac".
	/// </summary>
	utility::string_t GetSecretType() const;
	void SetSecretType(const utility::string_t& Value);
	bool HasSecretType() const;

	std::shared_ptr<GacValidationConfigDto> GetValidationConfig() const;
	void SetValidationConfig(const std::shared_ptr<GacValidationConfigDto>& Value);
	bool HasValidationConfig() const;

	/// <summary>
	/// The quota feature this secret maps to. Null = no quota enforcement.
	/// </summary>
	utility::string_t GetQuotaFeatureName() const;
	void SetQuotaFeatureName(const utility::string_t& Value);
	bool HasQuotaFeatureName() const;

	/// <summary>
	/// Tenant allow-list. Null/empty = all tenants.
	/// </summary>
	const std::vector<utility::string_t>& GetAllowedTenants() const;
	void SetAllowedTenants(const std::vector<utility::string_t>& Value);
	bool HasAllowedTenants() const;

	/// <summary>
	/// Whether this secret incurs a per-cycle corkage fee (usage-corkage plan §2.1). Default false.
	/// </summary>
	bool GetChargeCorkage() const;
	void SetChargeCorkage(const bool& Value);
	bool HasChargeCorkage() const;

	/// <summary>
	/// Optional per-secret corkage fee override (units); null = price via the matrix / domain default.
	/// </summary>
	int64_t GetCorkageFeeUnits() const;
	void SetCorkageFeeUnits(int64_t Value);
	bool HasCorkageFeeUnits() const;

	/// <summary>
	/// Optional per-tier quota limit configurations.
	/// Processed by Aggregation to upsert QuotaFeatureTier records in the Tracking service.
	/// </summary>
	const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& GetTierConfigs() const;
	void SetTierConfigs(const std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>& Value);
	bool HasTierConfigs() const;


protected:
	std::optional<utility::string_t> m_DisplayName;
	std::optional<utility::string_t> m_Description;
	std::optional<utility::string_t> m_Category;
	std::optional<int32_t> m_SortOrder;
	std::optional<utility::string_t> m_SecretType;
	std::optional<std::shared_ptr<GacValidationConfigDto>> m_ValidationConfig;
	std::optional<utility::string_t> m_QuotaFeatureName;
	std::optional<std::vector<utility::string_t>> m_AllowedTenants;
	std::optional<bool> m_ChargeCorkage;
	std::optional<int64_t> m_CorkageFeeUnits;
	std::optional<std::vector<std::shared_ptr<QuotaFeatureTierConfigItem>>> m_TierConfigs;
};

/// <summary>
/// One "total cost for a thing" line — a tenant, a metric or a status.
/// </summary>
class UsageLedgerGroupTotal : public csp::services::DtoBase
{
public:
	UsageLedgerGroupTotal();
	virtual ~UsageLedgerGroupTotal();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The group's key. <b>Null is meaningful</b> and is not collapsed to a blank: a null tenant is
	/// an unattributed row, and a null metric is an unpriced one.
	/// </summary>
	utility::string_t GetKey() const;
	void SetKey(const utility::string_t& Value);
	bool HasKey() const;

	/// <summary>
	/// Summed `cost_units` across the group (unpriced rows contribute zero). <b>Lossy</b>: every
	/// sub-unit row in the group contributed `0` to this sum. Kept for continuity.
	/// </summary>
	int64_t GetCostUnits() const;
	void SetCostUnits(int64_t Value);
	bool HasCostUnits() const;

	/// <summary>
	/// Summed <b>unrounded</b> cost across the group — `COALESCE(cost_exact, cost_units)` per row,
	/// so rows predating the column still contribute. This is the honest total, and the one the
	/// grouping is ordered by.
	/// </summary>
	double GetCostExact() const;
	void SetCostExact(double Value);
	bool HasCostExact() const;

	/// <summary>
	/// How many ledger rows are in the group.
	/// </summary>
	int64_t GetRowCount() const;
	void SetRowCount(int64_t Value);
	bool HasRowCount() const;


protected:
	std::optional<utility::string_t> m_Key;
	std::optional<int64_t> m_CostUnits;
	std::optional<double> m_CostExact;
	std::optional<int64_t> m_RowCount;
};

/// <summary>
/// One usage-ledger row as finance reads it. A projection of the stored row, not the stored row:
/// the dimensions bag and the internal matched-entry / matrix-epoch audit fields are deliberately
/// left out of the list, which exists to answer "what did we bill this customer, and why".
/// </summary>
class UsageLedgerRow : public csp::services::DtoBase
{
public:
	UsageLedgerRow();
	virtual ~UsageLedgerRow();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The tenant the charge belongs to. <b>Null on an Unattributed row</b>, by design.
	/// </summary>
	utility::string_t GetTenantName() const;
	void SetTenantName(const utility::string_t& Value);
	bool HasTenantName() const;

	/// <summary>
	/// What produced the row — the cadence domain, or null for per-execution node usage.
	/// </summary>
	utility::string_t GetSource() const;
	void SetSource(const utility::string_t& Value);
	bool HasSource() const;

	/// <summary>
	/// Which of the Google metrics this cost rolls up into. Null while Pending.
	/// </summary>
	utility::string_t GetTargetMetric() const;
	void SetTargetMetric(const utility::string_t& Value);
	bool HasTargetMetric() const;

	/// <summary>
	/// The key the billing matrix was matched on (node type / `compute` / egress key / metric).
	/// </summary>
	utility::string_t GetMatrixKey() const;
	void SetMatrixKey(const utility::string_t& Value);
	bool HasMatrixKey() const;

	/// <summary>
	/// The entity the row is attributed to within its source (type-labeled).
	/// </summary>
	utility::string_t GetSourceIdentifier() const;
	void SetSourceIdentifier(const utility::string_t& Value);
	bool HasSourceIdentifier() const;

	/// <summary>
	/// Cost rounded to whole units, not dollars. Null while Pending, and null on an Unattributed row.
	/// <b>Lossy</b> — a sub-unit charge reads as `0` here. Kept for continuity;
	/// Magnopus.Logic.UsageBilling.Finance.UsageLedgerRow.CostExact is what should be displayed.
	/// </summary>
	int64_t GetCostUnits() const;
	void SetCostUnits(int64_t Value);
	bool HasCostUnits() const;

	/// <summary>
	/// The <b>unrounded</b> cost — what was actually accrued and billed, and what finance should read.
	/// Falls back to Magnopus.Logic.UsageBilling.Finance.UsageLedgerRow.CostUnits for rows priced before the `cost_exact` column
	/// existed, so a mixed history reads consistently rather than showing holes.
	/// </summary>
	double GetCostExact() const;
	void SetCostExact(double Value);
	bool HasCostExact() const;

	/// <summary>
	/// The pricing tier resolved at rating time. Null when no tier could be resolved.
	/// </summary>
	utility::string_t GetTier() const;
	void SetTier(const utility::string_t& Value);
	bool HasTier() const;

	/// <summary>
	/// Resolved / Pending / Unattributed — the stored name, passed through verbatim.
	/// </summary>
	utility::string_t GetStatus() const;
	void SetStatus(const utility::string_t& Value);
	bool HasStatus() const;

	/// <summary>
	/// The unit of work the charge is attributed to (type-labeled).
	/// </summary>
	utility::string_t GetWorkUnitId() const;
	void SetWorkUnitId(const utility::string_t& Value);
	bool HasWorkUnitId() const;

	/// <summary>
	/// When the work actually happened (event time).
	/// </summary>
	utility::string_t GetOccurredAt() const;
	void SetOccurredAt(const utility::string_t& Value);
	bool HasOccurredAt() const;

	/// <summary>
	/// When the row was priced (pricing time — what the window filters on).
	/// </summary>
	utility::string_t GetRecordedAt() const;
	void SetRecordedAt(const utility::string_t& Value);
	bool HasRecordedAt() const;


protected:
	std::optional<utility::string_t> m_TenantName;
	std::optional<utility::string_t> m_Source;
	std::optional<utility::string_t> m_TargetMetric;
	std::optional<utility::string_t> m_MatrixKey;
	std::optional<utility::string_t> m_SourceIdentifier;
	std::optional<int64_t> m_CostUnits;
	std::optional<double> m_CostExact;
	std::optional<utility::string_t> m_Tier;
	std::optional<utility::string_t> m_Status;
	std::optional<utility::string_t> m_WorkUnitId;
	std::optional<utility::string_t> m_OccurredAt;
	std::optional<utility::string_t> m_RecordedAt;
};

class UsageLedgerRowDataPage : public csp::services::DtoBase
{
public:
	UsageLedgerRowDataPage();
	virtual ~UsageLedgerRowDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<UsageLedgerRow>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<UsageLedgerRow>>& Value);
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
	std::optional<std::vector<std::shared_ptr<UsageLedgerRow>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Period totals for the same window + filters as the row list: grouped by tenant, by target metric
/// and by status. The status breakdown is the one that answers the operational question — how much
/// of this period is billing, how much is stuck `Pending`, and how much is correctly
/// `Unattributed`.
/// </summary>
class UsageLedgerTotals : public csp::services::DtoBase
{
public:
	UsageLedgerTotals();
	virtual ~UsageLedgerTotals();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Cost + row count per tenant, highest cost first. A null key is the unattributed bucket.
	/// </summary>
	const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& GetByTenant() const;
	void SetByTenant(const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& Value);
	bool HasByTenant() const;

	/// <summary>
	/// Cost + row count per Google target metric, highest cost first. A null key is unpriced.
	/// </summary>
	const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& GetByMetric() const;
	void SetByMetric(const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& Value);
	bool HasByMetric() const;

	/// <summary>
	/// Cost + row count per billing source (egress / corkage / platform-fee / …), highest cost
	/// first. A null key is a per-execution node-usage row, which is what an unset source means.
	/// </summary>
	const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& GetBySource() const;
	void SetBySource(const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& Value);
	bool HasBySource() const;

	/// <summary>
	/// Cost + row count per ledger status.
	/// </summary>
	const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& GetByStatus() const;
	void SetByStatus(const std::vector<std::shared_ptr<UsageLedgerGroupTotal>>& Value);
	bool HasByStatus() const;

	/// <summary>
	/// Total `cost_units` over the window (all statuses). <b>Lossy</b> — see
	/// Magnopus.Logic.UsageBilling.Finance.UsageLedgerTotals.TotalCostExact.
	/// </summary>
	int64_t GetTotalCostUnits() const;
	void SetTotalCostUnits(int64_t Value);
	bool HasTotalCostUnits() const;

	/// <summary>
	/// Total <b>unrounded</b> cost over the window (all statuses) — the honest figure.
	/// ⚠ This will not equal Magnopus.Logic.UsageBilling.Finance.UsageLedgerTotals.TotalCostUnits, and the difference is a <b>correction</b>,
	/// not a discrepancy. Compute and egress routinely price below one unit per row, so the rounded
	/// total has been understating them since the ledger existed; credit joins them now that a node
	/// can be priced at a fraction of a credit. Anything reconciled against the rounded figure will
	/// appear to move.
	/// </summary>
	double GetTotalCostExact() const;
	void SetTotalCostExact(double Value);
	bool HasTotalCostExact() const;

	/// <summary>
	/// Total ledger rows over the window.
	/// </summary>
	int64_t GetTotalRowCount() const;
	void SetTotalRowCount(int64_t Value);
	bool HasTotalRowCount() const;


protected:
	std::optional<std::vector<std::shared_ptr<UsageLedgerGroupTotal>>> m_ByTenant;
	std::optional<std::vector<std::shared_ptr<UsageLedgerGroupTotal>>> m_ByMetric;
	std::optional<std::vector<std::shared_ptr<UsageLedgerGroupTotal>>> m_BySource;
	std::optional<std::vector<std::shared_ptr<UsageLedgerGroupTotal>>> m_ByStatus;
	std::optional<int64_t> m_TotalCostUnits;
	std::optional<double> m_TotalCostExact;
	std::optional<int64_t> m_TotalRowCount;
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


} // namespace csp::services::generated::aggregationservice