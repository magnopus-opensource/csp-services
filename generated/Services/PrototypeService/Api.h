

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "IPrototypeServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::prototypeservice
{


class AnalyticsApi final : public IAnalyticsApiBase
{
public:
	AnalyticsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~AnalyticsApi();



	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsBulkPost(const analyticsBulkPostParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStreamPost(const analyticsStreamPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class AssetDetailApi final : public IAssetDetailApiBase
{
public:
	AssetDetailApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~AssetDetailApi();



	/// <summary>
	/// Creates a new AssetBundle linked to a Prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsPost(const prototypesPrototypeIdAsset_detailsPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetail by its unique identifier prototypeId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsGet(const prototypesPrototypeIdAsset_detailsGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk Upsert for a set of AssetDetails linked to a Prototype
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/bulk
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsBulkPut(const prototypesPrototypeIdAsset_detailsBulkPutParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the assetDetail by its unique identifier prototype
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdGet(const prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetail by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and updates the writable fields of that assetDetail with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdPut(const prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the assetDetails by its unique identifier  assetDetailId and the prototype  prototypeId it belongs to
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(const prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken
															   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Lists the stored versions of an asset-detail's file, newest first. Every upload creates a version.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/versions
	/// Readable by anyone who can read the parent prototype. Each version carries a `Uri` to fetch it with,
	/// exactly as the asset-detail's own `Uri`. Versions saved before version history was recorded are
	/// included, reconstructed on first listing and marked `IsBackfilled`.
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsGet(const prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken
																	= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets one stored version of an asset-detail's file, with the `Uri` to fetch it
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/versions/{versionNumber}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsVersionNumberGet(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsVersionNumberGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Makes an earlier version of an asset-detail's file current again
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/versions/{versionNumber}/restore
	/// Requires write access to the parent prototype. The version's file is copied into a new version, which
	/// becomes current; the restored version stays in the history unchanged. Like an upload, this re-runs the
	/// asset pipeline where one applies and counts toward upload quota.
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsVersionNumberRestorePost(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdVersionsVersionNumberRestorePostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the assetDetails by asset detail filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesAsset_detailsGet(const prototypesAsset_detailsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns the distinct set of Magnopus.Service.Prototype.Dtos.AssetDetailDto.AssetType values currently in
	/// use. The isGlobal query parameter controls scope: `true` = globals
	/// only, `false` = caller's tenant only, omitted = both. Sorted case-insensitively. Used
	/// by the Inspector "asset type" combobox so admins can pick from existing types rather than
	/// typing free-form.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/types/distinct
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesAsset_detailsTypesDistinctGet(const prototypesAsset_detailsTypesDistinctGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken
												 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads AssetDetail file to S3 Bucket
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(const prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken
																 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Copies AssetDetail file from source file to destination file
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/internal-copy
	/// Authorization: internal-service
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPost(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdInternal_copyPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates an addressable id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	[[deprecated("'PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an AddressableId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	[[deprecated("'DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{addressableId}' is deprecated!")]]
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableAddressableIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Updates a Third Party Reference Id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes/Clears the string which associates this asset with an ThirdPartyReferenceId.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/addressable/{thirdPartyReferenceId}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDelete(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAddressableThirdPartyReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk endpoint to get the parameters for all generated assets of a 3d models.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/asset-details/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesAsset_detailsAsset_pipeline_modelGet(const prototypesAsset_detailsAsset_pipeline_modelGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the parameters for generated assets of a 3d model.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGet(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Sets or updates the parameters for generated assets of a 3d model.
	/// If the parameters are different than the existing generated assets, a job will start to create/update/delete the assets with parameter
	/// differences. Note: This does NOT wait for the generated job to complete, this endpoint returns when the job is just started
	///
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/asset-details/{assetDetailId}/asset-pipeline-model
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPut(
		const prototypesPrototypeIdAsset_detailsAssetDetailIdAsset_pipeline_modelPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class AssignmentsApi final : public IAssignmentsApiBase
{
public:
	AssignmentsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~AssignmentsApi();



	/// <summary>
	/// ★ <b>THE GRID'S ONE READ</b> (roster-experiment-plan.md §4).
	///
	/// `?from=` and `?to=` are inclusive `yyyy-MM-dd` days and are required;
	/// `?personId=` and `?projectId=` narrow it. Everything the week draws comes from
	/// this call plus the roster, and the client computes utilization from exactly this set —
	/// there is no aggregate endpoint until something proves one is needed (§3.3).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterAssignmentsGet(const productionrosterAssignmentsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Upserts ONE grid cell, keyed on `(personId, date)`.
	///
	/// <b>Zero hours clears the cell</b> and comes back with a `null` body, which is the
	/// honest answer to "what is in that cell now". 409 when the person-day already carries more
	/// than one row — unreachable from the v1 UI, and refused rather than collapsed (DG-2).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/assignments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterAssignmentsPut(const productionrosterAssignmentsPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Clears one cell by id.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterAssignmentsIdDelete(const productionrosterAssignmentsIdDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// ★ <b>THE SPAN WRITE</b> (§3.4). Producers think "three weeks at half time", so the write
	/// is a span and the server expands it into per-day rows in one call.
	///
	/// ⚠ <b>200 even when it declines to write</b>, and that is deliberate. §10 D2's
	/// recommendation is taken — with `overwrite: false` it REPORTS what it would replace
	/// and writes nothing — and the platform's 409 body is a bare string, so a structured
	/// conflict list has nowhere to ride on a conflict response. The client branches on
	/// `applied`. Frozen in the S0 contract fixture.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/assignments/bulk
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterAssignmentsBulkPost(const productionrosterAssignmentsBulkPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;
};

class ByoProvisioningAdminMachineActionsApi final : public IByoProvisioningAdminMachineActionsApiBase
{
public:
	ByoProvisioningAdminMachineActionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ByoProvisioningAdminMachineActionsApi();



	/// <summary>
	/// Creates a machine in a project: records it and its create job, and answers <b>202</b> with the machine. The hunt
	/// runs afterwards; its progress is on the machine's job in flight. <b>400</b> for a bad request; <b>409</b> when the
	/// project's access is not ready, the name is taken, or the project is at its ceiling.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{projectId}/machines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminProjectsProjectIdMachinesPost(const byo_provisioningAdminProjectsProjectIdMachinesPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken
															= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Asks a create in flight to stop. An insert already running finishes first, and anything it made is deleted.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/cancel
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdCancelPost(const byo_provisioningAdminMachinesIdCancelPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Starts the machine's last failed action again, as a new job.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/retry
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdRetryPost(const byo_provisioningAdminMachinesIdRetryPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Puts away a create that ended without making a machine. It moves to the Gone view, with its reason.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/dismiss
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdDismissPost(const byo_provisioningAdminMachinesIdDismissPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken
													= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Starts a stopped machine Magnopus created or took over. <b>409</b> while another action is in progress, or
	/// unless it is stopped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/start
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdStartPost(const byo_provisioningAdminMachinesIdStartPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Stops a running machine Magnopus created or took over. <b>409</b> unless it is running.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/stop
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdStopPost(const byo_provisioningAdminMachinesIdStopPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken
												 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Deletes a machine Magnopus created or took over, and the spike's firewall rules for it. Work in flight on it is
	/// lost. <b>409</b> for an orphan, which must be adopted first.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/delete
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdDeletePost(const byo_provisioningAdminMachinesIdDeletePostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Takes ownership of an orphan: labels it as ours, with a purpose and a lease. <b>400</b> without a purpose;
	/// <b>409</b> unless it is a present orphan.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/adopt
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdAdoptPost(const byo_provisioningAdminMachinesIdAdoptPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Moves a machine's lease, on its record and its label. The reason is audited with who asked. <b>400</b> without
	/// a reason, or for a lease outside 1 hour to the environment's maximum.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/lease
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdLeasePost(const byo_provisioningAdminMachinesIdLeasePostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken
												  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// The machine's jobs, newest first, with every hunt attempt: where it tried and why each failed (S5).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/{id}/jobs
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdJobsGet(const byo_provisioningAdminMachinesIdJobsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;
};

class ByoProvisioningAdminMachinesApi final : public IByoProvisioningAdminMachinesApiBase
{
public:
	ByoProvisioningAdminMachinesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ByoProvisioningAdminMachinesApi();



	/// <summary>
	/// Every tenant's machines, or one tenant's when tenantName is given, in one view and sort.
	/// Reads our records only; Google is never called per page.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesGet(const byo_provisioningAdminMachinesGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// What the sweep last found in each project, every tenant's or one's: when, what failed, which zones Google could
	/// not answer for, and the counts. The list's banner and the project's machines card read it.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/inventory
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesInventoryGet(const byo_provisioningAdminMachinesInventoryGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken
												   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// <b>Sweep now</b>: lists one project's machines straight away rather than at its next turn, and returns what the
	///             sweep found. It takes the same claim the timer does. <b>409</b> while a sweep holds the project, within 30 seconds
	///             of the last attempt, or when the project's access is not ready. A Google failure is still <b>200</b>: it is
	///             recorded on the returned row, as the timer records it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/inventory/{projectId}/sweep
	/// Takes no request cancellation token, like the access check: the sweep changes nothing in Google, but finishing it
	/// records its result and releases its claim for whoever looks next.
	/// </remarks>
	void byo_provisioningAdminMachinesInventoryProjectIdSweepPost(const byo_provisioningAdminMachinesInventoryProjectIdSweepPostParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken
																  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One machine, in any tenant, with its project's state for the link back.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminMachinesIdGet(const byo_provisioningAdminMachinesIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;
};

class ByoProvisioningAdminProjectsApi final : public IByoProvisioningAdminProjectsApiBase
{
public:
	ByoProvisioningAdminProjectsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ByoProvisioningAdminProjectsApi();



	/// <summary>
	/// Every tenant's projects, or one tenant's when tenantName is given. Paged, most recently
	/// changed first; search is a contains-match on the GCP project id and tenant name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminProjectsGet(const byo_provisioningAdminProjectsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Connects a GCP project to a tenant and starts its setup. <b>201</b> with the project; <b>409</b> when the
	/// project is already connected (decided by the unique index), with the existing project in the body, owning
	/// tenant included, so the operator can see where it went.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminProjectsPost(const byo_provisioningAdminProjectsPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One project, in any tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminProjectsIdGet(const byo_provisioningAdminProjectsIdGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Offboards a project in any tenant: moves it to `Removing`, deletes its operator account, then moves it to
	/// `Removed`. <b>200</b> with the removed project. Idempotent: a removal that failed partway (<b>500</b>, the
	/// project left in `Removing` with its last error) is finished by calling this again. <b>409</b> while another
	/// change to the project is in progress.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/byo-provisioning/admin/projects/{id}
	/// Takes no request cancellation token, like the operator step: a client that disconnects must not leave a GCP
	/// delete half done. Removing again would finish it, but finishing it now saves the retry.
	/// </remarks>
	void byo_provisioningAdminProjectsIdDelete(const byo_provisioningAdminProjectsIdDeleteParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 2, in any tenant: ensures the project's operator account exists and returns what step 3 shows. Idempotent;
	/// a project already past this step gets its details back unchanged. <b>409</b> while the project is being removed.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{id}/operator
	/// Takes no request cancellation token on purpose: a client that disconnects must not abandon a GCP create
	/// halfway. The step is idempotent either way, but finishing it saves a retry.
	/// </remarks>
	void byo_provisioningAdminProjectsIdOperatorPost(const byo_provisioningAdminProjectsIdOperatorPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken
													 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 4, in any tenant: validates and stores the customer's `terraform output -json`. <b>200</b> whether or
	/// not it validated: the returned project's state and `outputValidationErrors` say which. <b>409</b> when
	/// the project is not at a step that accepts an output, or another change to it is in progress.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{id}/terraform-output
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningAdminProjectsIdTerraform_outputPost(const byo_provisioningAdminProjectsIdTerraform_outputPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken
															 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 5, in any tenant: checks every permission the project's operator account needs, acting as that account.
	/// <b>200</b> whether or not access is complete: the returned project's `lastAccessCheck` says which.
	/// <b>409</b> before an output has been accepted, while the project is being removed, or while another change to
	/// it is in progress. <b>500</b> when the check could not run at all, recorded as the project's last error.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{id}/access-check
	/// Takes no request cancellation token, like the operator step: the check is read-only, but finishing it records
	/// its result for whoever looks next.
	/// </remarks>
	void byo_provisioningAdminProjectsIdAccess_checkPost(const byo_provisioningAdminProjectsIdAccess_checkPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken
														 = csp::common::CancellationToken::Dummy()) const override;
};

class ByoProvisioningMachinesApi final : public IByoProvisioningMachinesApiBase
{
public:
	ByoProvisioningMachinesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ByoProvisioningMachinesApi();



	/// <summary>
	/// The caller's tenant's machines, in one view and sort.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningMachinesGet(const byo_provisioningMachinesGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// What the sweep last found in each of the caller's tenant's projects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines/inventory
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningMachinesInventoryGet(const byo_provisioningMachinesInventoryGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One of the caller's tenant's machines. Another tenant's id is 404, not 403.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines/{id}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningMachinesIdGet(const byo_provisioningMachinesIdGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ByoProvisioningProjectsApi final : public IByoProvisioningProjectsApiBase
{
public:
	ByoProvisioningProjectsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ByoProvisioningProjectsApi();



	/// <summary>
	/// The caller's tenant's projects. Paged, most recently changed first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/projects
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningProjectsGet(const byo_provisioningProjectsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Connects a GCP project to the caller's tenant. <b>201</b> with the project. <b>409</b> when it is already
	/// connected: with the project in the body when it is this tenant's (so setup resumes), and with no body when
	/// it is another tenant's, which this surface is never told (Q7).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningProjectsPost(const byo_provisioningProjectsPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One of the caller's tenant's projects. Another tenant's id is 404, not 403.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/projects/{id}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningProjectsIdGet(const byo_provisioningProjectsIdGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Offboards one of the caller's tenant's projects: deletes our operator account for it and marks it removed,
	/// which frees the slot it took under the tenant's cap. <b>200</b> with the removed project. Idempotent; a removal
	/// that failed partway is finished by calling this again. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/byo-provisioning/projects/{id}
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	void byo_provisioningProjectsIdDelete(const byo_provisioningProjectsIdDeleteParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 2, for one of the caller's tenant's projects: ensures its operator account exists and returns what step 3
	/// shows. Idempotent. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/operator
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	void byo_provisioningProjectsIdOperatorPost(const byo_provisioningProjectsIdOperatorPostParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken
												= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 4, for one of the caller's tenant's projects: validates and stores the pasted `terraform output -json`.
	/// <b>200</b> whether or not it validated; the returned state and errors say which. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/terraform-output
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	void byo_provisioningProjectsIdTerraform_outputPost(const byo_provisioningProjectsIdTerraform_outputPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken
														= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Step 5, for one of the caller's tenant's projects: checks every permission our operator account needs in it.
	/// <b>200</b> whether or not access is complete; the returned project's `lastAccessCheck` lists each
	/// permission and how to fix a missing one. Also how "Check again" re-checks. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/access-check
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	void byo_provisioningProjectsIdAccess_checkPost(const byo_provisioningProjectsIdAccess_checkPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken
													= csp::common::CancellationToken::Dummy()) const override;
};

class CacheApi final : public ICacheApiBase
{
public:
	CacheApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~CacheApi();



	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysGet(const cache_keysGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	void cache_keysDelete(const cache_keysDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ConfigApi final : public IConfigApiBase
{
public:
	ConfigApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ConfigApi();



	/// <summary>
	/// The utilization thresholds, the week start day, and the multiplayer Group id.
	///
	/// ★ <b>Served, not duplicated into the client</b> (§3.3). The thresholds are a studio policy
	/// that will be argued about, and the argument should happen in one place.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/config
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterConfigGet(const productionrosterConfigGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// ★ <b>Provisions the studio's one presence Group and its Global Scope</b>, and records
	/// both (§7.4). Returns the same config `GET` serves, with `groupId` populated.
	///
	/// <b>Idempotent, and called by the client.</b> A roster client that reads a config with no
	/// `groupId` calls this once on mount; everybody after the first gets the existing
	/// record back untouched. That is what makes presence work on a fresh environment without
	/// anybody remembering a manual step — and it is why this is a `POST` of its own rather
	/// than a lazy write inside `GET /config`, which stays a read.
	/// ⚠ <b>A Scope is not optional.</b> The client resolves what to listen on from the Group's
	/// scopes, so a Group provisioned without one attaches to nothing. Both are created here, in
	/// that order, with the Group rolled back if the Scope fails.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/config/group
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterConfigGroupPost(const productionrosterConfigGroupPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Records a Group somebody provisioned by hand (§7.4).
	///
	/// ⚠ <b>Conditional on one not already being set</b>, so a second call cannot repoint the
	/// studio at a Group the already-attached clients are not in. The winner's id comes back
	/// either way, which is why this is not an error.
	/// ★ <b>Prefer `POST /config/group`.</b> This route records a Group id and provisions
	/// nothing, so it cannot know whether a Scope exists — and a Group without one attaches to
	/// an empty scope list and fails as an opaque hub error. Kept for the case where the Group
	/// already exists and only needs recording.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/config/group/{groupId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterConfigGroupGroupIdPut(const productionrosterConfigGroupGroupIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;
};

class ConfigurationApi final : public IConfigurationApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ConfigurationApi();



	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsGet(const appsettingsGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	void featureflagsGet(const featureflagsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class DaigramsApi final : public IDaigramsApiBase
{
public:
	DaigramsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~DaigramsApi();



	/// <summary>
	/// Create a daigram (provisions the backing group + scope) owned by the caller.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsPost(const daigramsPostParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// List the daigrams the caller owns or can access via group membership.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsGet(const daigramsGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Get a single daigram by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsIdGet(const daigramsIdGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Rename a daigram (metadata-only; caller must be owner or a group member/creator).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsIdPut(const daigramsIdPutParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Delete a daigram and tear down its group + scope + objects. Owner-only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsIdDelete(const daigramsIdDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Set a daigram's thumbnail Prototype id (capture-on-save). Owner or any group member —
	/// every member is a group creator, so any editor can capture the snapshot.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}/thumbnail
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void daigramsIdThumbnailPut(const daigramsIdThumbnailPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class DepartmentsApi final : public IDepartmentsApiBase
{
public:
	DepartmentsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~DepartmentsApi();



	/// <summary>
	/// Every department with its ladder, in grid order.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterDepartmentsGet(const productionrosterDepartmentsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Registers a department. <b>409 when the name is taken</b> — the unique index decides it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterDepartmentsPost(const productionrosterDepartmentsPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Edits a department, ladder included.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterDepartmentsIdPut(const productionrosterDepartmentsIdPutParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Removes a department. <b>409 while people still belong to it.</b>
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterDepartmentsIdDelete(const productionrosterDepartmentsIdDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;
};

class EffortResourcesApi final : public IEffortResourcesApiBase
{
public:
	EffortResourcesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~EffortResourcesApi();



	/// <summary>
	/// Bulk-upsert effort nodes (the write path for both the historical reconstructor and the live
	/// observer/agent). Super-user / agent gated. Provenance-gated: a lower-tier write never clobbers a
	/// higher-tier one.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerEffortBulk_upsertPost(const watchtowerEffortBulk_upsertPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Tombstone effort nodes by key — the removal verb for source units that have vanished. Keys only:
	/// the producer proposes a removal precisely because it no longer holds the payload. Soft: the entries
	/// keep their content and stay readable, marked `removed`, so the board draws them struck-through.
	/// Idempotent and provenance-gated; refused keys come back named. Same gate as bulk-upsert — this is a
	/// write.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-remove
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerEffortBulk_removePost(const watchtowerEffortBulk_removePostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Fetch effort nodes by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerEffortBulk_getPost(const watchtowerEffortBulk_getPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// The liveness search — nodes tagged with any of the requested daigram ids that changed since the
	/// caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerEffortSearchPost(const watchtowerEffortSearchPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class InspectorGlobalAssetDetailApi final : public IInspectorGlobalAssetDetailApiBase
{
public:
	InspectorGlobalAssetDetailApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~InspectorGlobalAssetDetailApi();



	/// <summary>
	/// Lists asset-details that belong to a global prototype. Returns 404 if the parent
	/// prototype is tenant-scoped or doesn't exist.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsGet(const inspectorGlobal_prototypesPrototypeIdAsset_detailsGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken
															   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates a new asset-detail under a global parent. The parent's `TenantName=""`
	/// is automatically inherited by the new asset (globals-plan §8 / step 6), which routes
	/// the create through the global write path. Returns 404 if the parent is tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes/{prototypeId}/asset-details
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsPost(const inspectorGlobal_prototypesPrototypeIdAsset_detailsPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken
																= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates a single asset-detail. Returns 404 if the parent prototype is tenant-scoped
	/// or the asset-detail does not belong to the parent.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGet(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdGetParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates an existing asset-detail under a global parent. Returns 404 if the parent is
	/// tenant-scoped or the asset does not belong to the parent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPut(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes an asset-detail under a global parent. Returns 404 if the parent is
	/// tenant-scoped or the asset does not exist.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDelete(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Uploads a binary file for a global asset. Returns 404 if the parent is tenant-scoped.
	/// Delegates to the same logic path as the public `AssetDetailController.UploadAssetDetailFile`;
	/// the Inspector wrapper exists so the surface is symmetric with the rest of the Inspector
	/// globals API and the parent-is-global precondition is enforced consistently.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes/{prototypeId}/asset-details/{assetDetailId}/blob
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPost(
		const inspectorGlobal_prototypesPrototypeIdAsset_detailsAssetDetailIdBlobPostParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class InspectorGlobalPrototypeApi final : public IInspectorGlobalPrototypeApiBase
{
public:
	InspectorGlobalPrototypeApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~InspectorGlobalPrototypeApi();



	/// <summary>
	/// Searches global prototypes. The Inspector surface is always scoped to globals
	/// regardless of any caller-supplied Magnopus.Service.Prototype.Structures.PrototypeFilters.Scope value.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesGet(const inspectorGlobal_prototypesGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates a new global prototype. The Inspector surface force-sets `IsGlobal=true`
	/// on the inbound DTO before mapping, so callers cannot accidentally create a tenant
	/// record through this endpoint.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/global-prototypes
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesPost(const inspectorGlobal_prototypesPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates a single global prototype by id. Returns 404 if the record exists but is
	/// tenant-scoped (defense against id-smuggling from another surface).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesIdGet(const inspectorGlobal_prototypesIdGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Updates an existing global prototype. Returns 404 if the id resolves to a tenant
	/// record (defense against id-smuggling). Force-sets `IsGlobal=true` on the inbound
	/// DTO; attempting to demote to a tenant record is rejected by the logic layer.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesIdPut(const inspectorGlobal_prototypesIdPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a global prototype and its hierarchy. Returns 404 if the id resolves to a
	/// tenant record (defense against id-smuggling).
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/global-prototypes/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void inspectorGlobal_prototypesIdDelete(const inspectorGlobal_prototypesIdDeleteParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;
};

class JiraResourcesApi final : public IJiraResourcesApiBase
{
public:
	JiraResourcesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~JiraResourcesApi();



	/// <summary>
	/// Bulk-upsert read-model entries (the collector/agent write path). Super-user gated — this is a
	/// collector seam, not a user action. Callers should send only changed entries (the poller diffs).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraBulk_upsertPost(const watchtowerJiraBulk_upsertPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Fetch read-model entries by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraBulk_getPost(const watchtowerJiraBulk_getPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// The liveness search — entries tagged with any of the requested daigram ids that changed since
	/// the caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraSearchPost(const watchtowerJiraSearchPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// The stored create schema for a project (all creatable issue types + projected fields) — the
	/// inline-create form reads this. Null/no-content when not yet seeded (the form falls back to a
	/// summary-only create). Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/createmeta/{project}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraCreatemetaProjectGet(const watchtowerJiraCreatemetaProjectGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Refresh a project's create schema (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/createmeta/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraCreatemetaUpsertPost(const watchtowerJiraCreatemetaUpsertPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// A project-scoped reference list (`components`/`versions`) for a typeahead — the big
	/// option sets kept out of the create schema. Null/no-content when not yet seeded. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/reference/{project}/{kind}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraReferenceProjectKindGet(const watchtowerJiraReferenceProjectKindGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken
											   = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Refresh a project's reference list (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/reference/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	void watchtowerJiraReferenceUpsertPost(const watchtowerJiraReferenceUpsertPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;
};

class NtpApi final : public INtpApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(const datetimeGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PeopleApi final : public IPeopleApiBase
{
public:
	PeopleApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PeopleApi();



	/// <summary>
	/// The whole roster, by name.
	///
	/// ⚠ <b>Unpaged, deliberately</b> (§3.3): the grid groups by department, divides by title
	/// ladder and totals utilization across the studio, all of which need every row.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterPeopleGet(const productionrosterPeopleGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Adds a person. 409 on a duplicate name; 400 when the title is off the department's ladder.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterPeoplePost(const productionrosterPeoplePostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Edits a person.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterPeopleIdPut(const productionrosterPeopleIdPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Removes a person <b>and every assignment they hold</b>.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterPeopleIdDelete(const productionrosterPeopleIdDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PingApi final : public IPingApiBase
{
public:
	PingApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PingApi();



	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	void pingGet(const pingGetParams& Params,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class ProjectsApi final : public IProjectsApiBase
{
public:
	ProjectsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~ProjectsApi();



	/// <summary>
	/// Every project, by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterProjectsGet(const productionrosterProjectsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates a project. <b>409 on a duplicate name</b> — see Magnopus.Logic.ProductionRoster.IProjectLogic.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterProjectsPost(const productionrosterProjectsPostParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Renames or recolours a project. Every assignment follows, because they carry the id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterProjectsIdPut(const productionrosterProjectsIdPutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Removes a project and every assignment on it.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterProjectsIdDelete(const productionrosterProjectsIdDeleteParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PrototypeApi final : public IPrototypeApiBase
{
public:
	PrototypeApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PrototypeApi();



	/// <summary>
	/// Creates a new prototype
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPost(const prototypesPostParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesGet(const prototypesGetParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates all prototypes by their unique identifier(s) ids
	/// and deletes them from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesDelete(const prototypesDeleteParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Duplicates prototype(s) to a new group by filters
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/duplicate/{newGroupId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPost(const prototypesGroup_ownedOriginalGroupIdDuplicateNewGroupIdPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken
																	 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Create and return new prototype(s) that have not been saved to the database
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{originalGroupId}/exports/{exportId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void prototypesGroup_ownedOriginalGroupIdExportsExportIdPost(const prototypesGroup_ownedOriginalGroupIdExportsExportIdPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken
																 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Imports a set of prototypes and assigns them to a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/group-owned/{newGroupId}/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void prototypesGroup_ownedNewGroupIdExportsExportIdImportPost(const prototypesGroup_ownedNewGroupIdExportsExportIdImportPostParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken
																  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Bulk upsert operation for prototypes
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/bulk
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesBulkPut(const prototypesBulkPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across the prototypes for those that match the search criteria and returns the id's
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/ids
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesIdsGet(const prototypesIdsGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the prototypes for those that match the search criteria
	/// and return the count of those that match.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/count
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesCountGet(const prototypesCountGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Returns the distinct set of prototype `Type` values currently in use. The
	/// isGlobal query parameter controls scope: `true` = globals only,
	/// `false` = caller's tenant only, omitted = both. Sorted case-insensitively. Used by
	/// the Inspector "type" combobox so admins can pick from existing types rather than typing
	/// free-form.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/types/distinct
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesTypesDistinctGet(const prototypesTypesDistinctGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{id}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesIdGet(const prototypesIdGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and updates the writable fields of that prototype with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{id}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesIdPut(const prototypesIdPutParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the prototype by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/prototypes/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesIdDelete(const prototypesIdDeleteParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the prototype by its unique name
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/name/{name}
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesNameNameGet(const prototypesNameNameGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates all prototypes by their unique identifier(s) ids
	/// POST Endpoint so that we can send large lists of ids in the body
	/// </summary>
	/// <remarks>
	/// POST /api/v1/prototypes/delete
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void prototypesDeletePost(const prototypesDeletePostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates state key value pairs or updates existing - any previously existing state
	/// not referenced in the call are left unchanged.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/prototypes/{prototypeId}/state
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdStatePut(const prototypesPrototypeIdStatePutParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets the state of a prototype.  If keys are provided
	/// then only values for those keys will be returned, otherwise all key/value pairs are returned
	/// </summary>
	/// <remarks>
	/// GET /api/v1/prototypes/{prototypeId}/state
	/// Authorization:
	/// magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator,graph-status-update
	/// </remarks>
	void prototypesPrototypeIdStateGet(const prototypesPrototypeIdStateGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SnapshotApi final : public ISnapshotApiBase
{
public:
	SnapshotApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SnapshotApi();



	/// <summary>
	/// The requested slices of the roster, in one response.
	///
	/// ★ <b>Why this exists.</b> The grid's first load and its refresh pulse both need the same
	/// five things, and they were five parallel requests — per tick, per open client. Beyond the
	/// obvious cost, five requests are <b>five independently-timed reads of one logical state</b>:
	/// a person deleted between the people read and the assignment read leaves the client holding
	/// bookings for somebody who is no longer on the roster.
	/// `?types=people&types=projects` names what to include; omitting it returns
	/// everything, because a request that names nothing is far likelier to be a caller that
	/// forgot the parameter than one that wants an empty object. A type that was not requested
	/// comes back as an <b>absent key</b>, which is deliberately distinguishable from an empty
	/// list — see Magnopus.Logic.ProductionRoster.Dtos.RosterSnapshotDto.
	/// ⚠ `from` and `to` are <b>required</b> when `assignments` is requested. The
	/// roster is a studio's whole history and an unbounded read is never what a caller meant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/snapshot
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void productionrosterSnapshotGet(const productionrosterSnapshotGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SystemClaimApi final : public ISystemClaimApiBase
{
public:
	SystemClaimApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SystemClaimApi();



	/// <summary>
	/// <b>Take the baton.</b> 200 with the system as it now stands, or <b>409 with the current
	///             holder in the body</b> so the UI can say "Matt took it a moment ago" rather than
	///             "something went wrong".
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdClaimPost(const batonSystemsSystemIdClaimPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// <b>Pass the baton.</b> Releases the caller's own hold; `?force=true` releases
	///              whoever is holding it.
	///
	///
	/// The force is gated by <b>accountability, not by role</b> (D24). Three real controls:
	///              the query parameter has to be asked for explicitly, so nobody forces by accident and the
	///              API cannot be misread as "release whatever is there"; the forcer's id lands on the closed
	///              claim, where differing from the holder <i>is</i> the record; and an audit record is
	///              written outside the tool, where the forced party can find it without Baton's cooperation.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdClaimDelete(const batonSystemsSystemIdClaimDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SystemHistoryApi final : public ISystemHistoryApiBase
{
public:
	SystemHistoryApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SystemHistoryApi();



	/// <summary>
	/// One page of a system's holds, <b>newest first</b>, each with the duration computed at
	/// release. <b>Archived systems still answer</b> — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdHistoryGet(const batonSystemsSystemIdHistoryGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SystemQueueApi final : public ISystemQueueApiBase
{
public:
	SystemQueueApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SystemQueueApi();



	/// <summary>
	/// One system's queue, in order, with each person's place in line.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdQueueGet(const batonSystemsSystemIdQueueGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// <b>Get in line.</b> 200 with your place in it, <b>409 if you are already in</b> — decided
	///             by the unique `(SystemId, UserId)` index at insert time, never by a preceding read —
	///             and <b>404 if the system has been archived</b>, because it is gone rather than in a
	///             conflicting state (D26).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdQueuePost(const batonSystemsSystemIdQueuePostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// <b>Leave the line.</b> Removes the caller; `?force=true&userId=…` removes
	///              somebody else.
	///
	///
	/// ⚠ <b>Without `force`, userId is ignored entirely</b> and the
	///              caller is removed — the same shape as a plain pass being unable to touch somebody else's
	///              hold. A parameter that quietly becomes destructive when a second one is present is how an
	///              API gets misread; here the flag has to be asked for, and the person removed is told it
	///              happened.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsSystemIdQueueDelete(const batonSystemsSystemIdQueueDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SystemsApi final : public ISystemsApiBase
{
public:
	SystemsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SystemsApi();



	/// <summary>
	/// One page of the tenant's systems — held first, then most recently released.
	///
	/// `?search=` is a contains-match across name, description and the current holder's
	/// name; `?sortBy=name` switches to alphabetical; `?skip=` / `?limit=` are the
	/// infinite scroll's page. Paging, filtering and sorting are all server-side because a paged
	/// list cannot be ordered or filtered on the client (baton-plan.md D7).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsGet(const batonSystemsGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Registers a system. <b>409 when this tenant already has one by that name</b> — decided by
	/// the unique index at insert time, never by a preceding read.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsPost(const batonSystemsPostParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// A single system by id. Archived systems still resolve — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsIdGet(const batonSystemsIdGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Edits a system's name, description, console link and grace window. 409 on a name that is
	/// already taken. <b>Never touches the hold</b> — that is Lane B's conditional update.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsIdPut(const batonSystemsIdPutParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Archives a system: it leaves the list, its history stays.
	///
	/// ⚠ <b>`?confirm=true` is required</b>, the same shape as Lane B's `?force=true`
	/// (baton-plan.md §8.1). Nobody retires a shared system by accident, and the API cannot be
	/// misread as "remove whatever is at this id".
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsIdDelete(const batonSystemsIdDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class SystemThumbnailApi final : public ISystemThumbnailApiBase
{
public:
	SystemThumbnailApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SystemThumbnailApi();



	/// <summary>
	/// Point a system at the Prototype holding its picture. The bytes themselves are uploaded
	/// straight to the Prototype service by the client; this records the reference.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}/thumbnail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void batonSystemsIdThumbnailPut(const batonSystemsIdThumbnailPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class VersionsApi final : public IVersionsApiBase
{
public:
	VersionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~VersionsApi();



	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	void rsionsGet(const rsionsGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class WazzupAgentOverridesApi final : public IWazzupAgentOverridesApiBase
{
public:
	WazzupAgentOverridesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~WazzupAgentOverridesApi();



	/// <summary>
	/// Every override the caller has stored.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupAgent_overridesGet(const wazzupAgent_overridesGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Resets every agent to its defaults. `confirm=true` is required.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupAgent_overridesDelete(const wazzupAgent_overridesDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates or replaces the caller's override for one agent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupAgent_overridesAgentIdPut(const wazzupAgent_overridesAgentIdPutParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Resets one agent to its defaults.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupAgent_overridesAgentIdDelete(const wazzupAgent_overridesAgentIdDeleteParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;
};

class WazzupCapabilitiesApi final : public IWazzupCapabilitiesApiBase
{
public:
	WazzupCapabilitiesApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~WazzupCapabilitiesApi();



	/// <summary>
	/// The transit encodings the prompt-bearing request fields may use.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/capabilities
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupCapabilitiesGet(const wazzupCapabilitiesGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class WazzupLlmApi final : public IWazzupLlmApiBase
{
public:
	WazzupLlmApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~WazzupLlmApi();



	/// <summary>
	/// The providers this environment offers.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/llm/providers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupLlmProvidersGet(const wazzupLlmProvidersGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Runs one generation for one swarm agent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/llm/generate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupLlmGeneratePost(const wazzupLlmGeneratePostParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class WazzupSessionsApi final : public IWazzupSessionsApiBase
{
public:
	WazzupSessionsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~WazzupSessionsApi();



	/// <summary>
	/// One page of the caller's sessions, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupSessionsGet(const wazzupSessionsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Saves a new session.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupSessionsPost(const wazzupSessionsPostParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One session with its payload.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupSessionsIdGet(const wazzupSessionsIdGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Overwrites a session.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupSessionsIdPut(const wazzupSessionsIdPutParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes a session.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupSessionsIdDelete(const wazzupSessionsIdDeleteParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class WazzupStorageApi final : public IWazzupStorageApiBase
{
public:
	WazzupStorageApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~WazzupStorageApi();



	/// <summary>
	/// Fetches one CDN asset with the mined tenant's token. POST rather than GET so neither the URI
	/// nor the token lands in an access log.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/storage/cdn-fetch
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupStorageCdn_fetchPost(const wazzupStorageCdn_fetchPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// One page of a tenant's legacy Nodey objects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/objects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupStorageLegacyTenantObjectsGet(const wazzupStorageLegacyTenantObjectsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken
											 = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Reads one legacy Nodey object.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/object
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	void wazzupStorageLegacyTenantObjectGet(const wazzupStorageLegacyTenantObjectGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken
											= csp::common::CancellationToken::Dummy()) const override;
};


} // namespace csp::services::generated::prototypeservice