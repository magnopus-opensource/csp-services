

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::spatialdataservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct analyticsBulkPostParams
	{
		const std::vector<std::shared_ptr<AnalyticsRecord>>& RequestBody;
	};


	/// <summary>
	/// Create new analytics records using a list of Magnopus.Service.Common.Contracts.Analytics.AnalyticsRecord objects.
	/// Ideally, the requester would pass in a list of analytics records to be created in bulk.
	/// </summary>
	/// <remarks>
	/// POST /analytics/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsBulkPost(const analyticsBulkPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStreamPostParams
	{
	};


	/// <summary>
	/// Uploads a stream of gzipped analytics data. Creates many records in a bulk operation.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStreamPost(const analyticsStreamPostParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct analyticsStream_urlPostParams
	{
	};


	/// <summary>
	/// Returns a URL to the caller to use for analytics purposes.
	/// Randomizes the services so that not a single service is overloaded with requests.
	/// </summary>
	/// <remarks>
	/// POST /analytics/stream-url
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void analyticsStream_urlPost(const analyticsStream_urlPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAnalyticsApiBase() = default;
};

class IAnchorsApiBase : public csp::services::ApiBase
{
public:
	IAnchorsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct anchorsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the anchor data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsIdGet(const anchorsIdGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct anchorsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<AnchorDto>& RequestBody;
	};


	/// <summary>
	/// Locates the anchor by its unique identifier id
	/// and updates the writable fields of that anchor with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsIdPut(const anchorsIdPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct anchorsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes Anchors by its unique identifier id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsIdDelete(const anchorsIdDeleteParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct anchorsPostParams
	{
		const std::shared_ptr<AnchorDto>& RequestBody;
	};


	/// <summary>
	/// Adds an anchor key to the list of known anchor keys
	/// </summary>
	/// <remarks>
	/// POST /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsPost(const anchorsPostParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct anchorsDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Deletes all Anchors by its unique identifier(s) ids
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsDelete(const anchorsDeleteParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct anchorsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Keys;
		const std::optional<std::vector<utility::string_t>>& Values;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<std::vector<utility::string_t>>& ThirdPartyProviderNames;
		const std::optional<std::vector<utility::string_t>>& ThirdPartyAnchorIds;
		const std::optional<std::vector<utility::string_t>>& ReferenceIds;
		const std::optional<std::vector<utility::string_t>>& AnchoredObjectIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Locates all the anchors by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchorsGet(const anchorsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct anchor_resolutionsPostParams
	{
		const std::shared_ptr<AnchorResolutionDto>& RequestBody;
	};


	/// <summary>
	/// Creates anchor resolution
	/// </summary>
	/// <remarks>
	/// POST /api/v1/anchor-resolutions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void anchor_resolutionsPost(const anchor_resolutionsPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct anchor_resolutionsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& AnchorIds;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<bool>& SuccessfullyResolved;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Locates all the anchor resolutions by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchor-resolutions
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void anchor_resolutionsGet(const anchor_resolutionsGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct anchor_resolutionsStatsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& AnchorIds;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<bool>& SuccessfullyResolved;
	};


	/// <summary>
	/// Locates anchor stats by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchor-resolutions/stats
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void anchor_resolutionsStatsGet(const anchor_resolutionsStatsGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAnchorsApiBase() = default;
};

class IAssignmentsApiBase : public csp::services::ApiBase
{
public:
	IAssignmentsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterAssignmentsGetParams
	{
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& personId;
		const std::optional<utility::string_t>& projectId;
	};


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
	virtual void productionrosterAssignmentsGet(const productionrosterAssignmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterAssignmentsPutParams
	{
		const std::shared_ptr<AssignmentUpsertRequest>& RequestBody;
	};


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
	virtual void productionrosterAssignmentsPut(const productionrosterAssignmentsPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Clears one cell by id.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterAssignmentsIdDelete(const productionrosterAssignmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterAssignmentsBulkPostParams
	{
		const std::shared_ptr<BulkAssignRequest>& RequestBody;
	};


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
	virtual void productionrosterAssignmentsBulkPost(const productionrosterAssignmentsBulkPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAssignmentsApiBase() = default;
};

class IByoProvisioningAdminMachineActionsApiBase : public csp::services::ApiBase
{
public:
	IByoProvisioningAdminMachineActionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct byo_provisioningAdminProjectsProjectIdMachinesPostParams
	{
		const utility::string_t& projectId;
		const std::shared_ptr<CreateMachineRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a machine in a project: records it and its create job, and answers <b>202</b> with the machine. The hunt
	/// runs afterwards; its progress is on the machine's job in flight. <b>400</b> for a bad request; <b>409</b> when the
	/// project's access is not ready, the name is taken, or the project is at its ceiling.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{projectId}/machines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminProjectsProjectIdMachinesPost(const byo_provisioningAdminProjectsProjectIdMachinesPostParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdCancelPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Asks a create in flight to stop. An insert already running finishes first, and anything it made is deleted.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/cancel
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdCancelPost(const byo_provisioningAdminMachinesIdCancelPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdRetryPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Starts the machine's last failed action again, as a new job.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/retry
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdRetryPost(const byo_provisioningAdminMachinesIdRetryPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdDismissPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Puts away a create that ended without making a machine. It moves to the Gone view, with its reason.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/dismiss
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdDismissPost(const byo_provisioningAdminMachinesIdDismissPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdStartPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Starts a stopped machine Magnopus created or took over. <b>409</b> while another action is in progress, or
	/// unless it is stopped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/start
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdStartPost(const byo_provisioningAdminMachinesIdStartPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdStopPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Stops a running machine Magnopus created or took over. <b>409</b> unless it is running.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/stop
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdStopPost(const byo_provisioningAdminMachinesIdStopPostParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdDeletePostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes a machine Magnopus created or took over, and the spike's firewall rules for it. Work in flight on it is
	/// lost. <b>409</b> for an orphan, which must be adopted first.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/delete
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdDeletePost(const byo_provisioningAdminMachinesIdDeletePostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdAdoptPostParams
	{
		const utility::string_t& id;
		const std::shared_ptr<AdoptMachineRequest>& RequestBody;
	};


	/// <summary>
	/// Takes ownership of an orphan: labels it as ours, with a purpose and a lease. <b>400</b> without a purpose;
	/// <b>409</b> unless it is a present orphan.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/adopt
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdAdoptPost(const byo_provisioningAdminMachinesIdAdoptPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdLeasePostParams
	{
		const utility::string_t& id;
		const std::shared_ptr<ExtendMachineLeaseRequest>& RequestBody;
	};


	/// <summary>
	/// Moves a machine's lease, on its record and its label. The reason is audited with who asked. <b>400</b> without
	/// a reason, or for a lease outside 1 hour to the environment's maximum.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/machines/{id}/lease
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdLeasePost(const byo_provisioningAdminMachinesIdLeasePostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdJobsGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// The machine's jobs, newest first, with every hunt attempt: where it tried and why each failed (S5).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/{id}/jobs
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdJobsGet(const byo_provisioningAdminMachinesIdJobsGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IByoProvisioningAdminMachineActionsApiBase() = default;
};

class IByoProvisioningAdminMachinesApiBase : public csp::services::ApiBase
{
public:
	IByoProvisioningAdminMachinesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct byo_provisioningAdminMachinesGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& View;
		const std::optional<utility::string_t>& Sort;
		const std::optional<utility::string_t>& Search;
		const std::optional<utility::string_t>& ProjectId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Every tenant's machines, or one tenant's when tenantName is given, in one view and sort.
	/// Reads our records only; Google is never called per page.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesGet(const byo_provisioningAdminMachinesGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesInventoryGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// What the sweep last found in each project, every tenant's or one's: when, what failed, which zones Google could
	/// not answer for, and the counts. The list's banner and the project's machines card read it.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/inventory
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesInventoryGet(const byo_provisioningAdminMachinesInventoryGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesInventoryProjectIdSweepPostParams
	{
		const utility::string_t& projectId;
	};


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
	virtual void
		byo_provisioningAdminMachinesInventoryProjectIdSweepPost(const byo_provisioningAdminMachinesInventoryProjectIdSweepPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminMachinesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One machine, in any tenant, with its project's state for the link back.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/machines/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminMachinesIdGet(const byo_provisioningAdminMachinesIdGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IByoProvisioningAdminMachinesApiBase() = default;
};

class IByoProvisioningAdminProjectsApiBase : public csp::services::ApiBase
{
public:
	IByoProvisioningAdminProjectsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct byo_provisioningAdminProjectsGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& search;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Every tenant's projects, or one tenant's when tenantName is given. Paged, most recently
	/// changed first; search is a contains-match on the GCP project id and tenant name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminProjectsGet(const byo_provisioningAdminProjectsGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct byo_provisioningAdminProjectsPostParams
	{
		const std::shared_ptr<RegisterProjectRequest>& RequestBody;
	};


	/// <summary>
	/// Connects a GCP project to a tenant and starts its setup. <b>201</b> with the project; <b>409</b> when the
	/// project is already connected (decided by the unique index), with the existing project in the body, owning
	/// tenant included, so the operator can see where it went.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminProjectsPost(const byo_provisioningAdminProjectsPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminProjectsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One project, in any tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/admin/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminProjectsIdGet(const byo_provisioningAdminProjectsIdGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct byo_provisioningAdminProjectsIdDeleteParams
	{
		const utility::string_t& id;
		const std::optional<bool>& confirm;
	};


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
	virtual void byo_provisioningAdminProjectsIdDelete(const byo_provisioningAdminProjectsIdDeleteParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminProjectsIdOperatorPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Step 2, in any tenant: ensures the project's operator account exists and returns what step 3 shows. Idempotent;
	/// a project already past this step gets its details back unchanged. <b>409</b> while the project is being removed.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{id}/operator
	/// Takes no request cancellation token on purpose: a client that disconnects must not abandon a GCP create
	/// halfway. The step is idempotent either way, but finishing it saves a retry.
	/// </remarks>
	virtual void byo_provisioningAdminProjectsIdOperatorPost(const byo_provisioningAdminProjectsIdOperatorPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminProjectsIdTerraform_outputPostParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SubmitTerraformOutputRequest>& RequestBody;
	};


	/// <summary>
	/// Step 4, in any tenant: validates and stores the customer's `terraform output -json`. <b>200</b> whether or
	/// not it validated: the returned project's state and `outputValidationErrors` say which. <b>409</b> when
	/// the project is not at a step that accepts an output, or another change to it is in progress.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/admin/projects/{id}/terraform-output
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningAdminProjectsIdTerraform_outputPost(const byo_provisioningAdminProjectsIdTerraform_outputPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningAdminProjectsIdAccess_checkPostParams
	{
		const utility::string_t& id;
	};


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
	virtual void byo_provisioningAdminProjectsIdAccess_checkPost(const byo_provisioningAdminProjectsIdAccess_checkPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IByoProvisioningAdminProjectsApiBase() = default;
};

class IByoProvisioningMachinesApiBase : public csp::services::ApiBase
{
public:
	IByoProvisioningMachinesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct byo_provisioningMachinesGetParams
	{
		const std::optional<utility::string_t>& View;
		const std::optional<utility::string_t>& Sort;
		const std::optional<utility::string_t>& Search;
		const std::optional<utility::string_t>& ProjectId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// The caller's tenant's machines, in one view and sort.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningMachinesGet(const byo_provisioningMachinesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningMachinesInventoryGetParams
	{
	};


	/// <summary>
	/// What the sweep last found in each of the caller's tenant's projects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines/inventory
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningMachinesInventoryGet(const byo_provisioningMachinesInventoryGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningMachinesIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One of the caller's tenant's machines. Another tenant's id is 404, not 403.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/machines/{id}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningMachinesIdGet(const byo_provisioningMachinesIdGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IByoProvisioningMachinesApiBase() = default;
};

class IByoProvisioningProjectsApiBase : public csp::services::ApiBase
{
public:
	IByoProvisioningProjectsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct byo_provisioningProjectsGetParams
	{
		const std::optional<utility::string_t>& search;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// The caller's tenant's projects. Paged, most recently changed first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/projects
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningProjectsGet(const byo_provisioningProjectsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct byo_provisioningProjectsPostParams
	{
		const std::shared_ptr<RegisterOwnProjectRequest>& RequestBody;
	};


	/// <summary>
	/// Connects a GCP project to the caller's tenant. <b>201</b> with the project. <b>409</b> when it is already
	/// connected: with the project in the body when it is this tenant's (so setup resumes), and with no body when
	/// it is another tenant's, which this surface is never told (Q7).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningProjectsPost(const byo_provisioningProjectsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningProjectsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One of the caller's tenant's projects. Another tenant's id is 404, not 403.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/byo-provisioning/projects/{id}
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningProjectsIdGet(const byo_provisioningProjectsIdGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct byo_provisioningProjectsIdDeleteParams
	{
		const utility::string_t& id;
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Offboards one of the caller's tenant's projects: deletes our operator account for it and marks it removed,
	/// which frees the slot it took under the tenant's cap. <b>200</b> with the removed project. Idempotent; a removal
	/// that failed partway is finished by calling this again. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/byo-provisioning/projects/{id}
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	virtual void byo_provisioningProjectsIdDelete(const byo_provisioningProjectsIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningProjectsIdOperatorPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Step 2, for one of the caller's tenant's projects: ensures its operator account exists and returns what step 3
	/// shows. Idempotent. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/operator
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	virtual void byo_provisioningProjectsIdOperatorPost(const byo_provisioningProjectsIdOperatorPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningProjectsIdTerraform_outputPostParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SubmitTerraformOutputRequest>& RequestBody;
	};


	/// <summary>
	/// Step 4, for one of the caller's tenant's projects: validates and stores the pasted `terraform output -json`.
	/// <b>200</b> whether or not it validated; the returned state and errors say which. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/terraform-output
	/// Authorization: admin,support,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void byo_provisioningProjectsIdTerraform_outputPost(const byo_provisioningProjectsIdTerraform_outputPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct byo_provisioningProjectsIdAccess_checkPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Step 5, for one of the caller's tenant's projects: checks every permission our operator account needs in it.
	/// <b>200</b> whether or not access is complete; the returned project's `lastAccessCheck` lists each
	/// permission and how to fix a missing one. Also how "Check again" re-checks. Another tenant's id is 404.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/byo-provisioning/projects/{id}/access-check
	/// No request cancellation token, for the reason the operator surface's twin gives.
	/// </remarks>
	virtual void byo_provisioningProjectsIdAccess_checkPost(const byo_provisioningProjectsIdAccess_checkPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IByoProvisioningProjectsApiBase() = default;
};

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct cache_keysGetParams
	{
		const std::optional<utility::string_t>& pattern;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// GET /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysGet(const cache_keysGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct cache_keysDeleteParams
	{
		const std::optional<utility::string_t>& pattern;
	};


	/// <summary>
	/// Deletes the distributed cache keys that match the pattern (use * for wildcard)
	/// </summary>
	/// <remarks>
	/// DELETE /cache-keys
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void cache_keysDelete(const cache_keysDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICacheApiBase() = default;
};

class IConfigApiBase : public csp::services::ApiBase
{
public:
	IConfigApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterConfigGetParams
	{
	};


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
	virtual void productionrosterConfigGet(const productionrosterConfigGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupPostParams
	{
	};


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
	virtual void productionrosterConfigGroupPost(const productionrosterConfigGroupPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterConfigGroupGroupIdPutParams
	{
		const utility::string_t& groupId;
	};


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
	virtual void productionrosterConfigGroupGroupIdPut(const productionrosterConfigGroupGroupIdPutParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigApiBase() = default;
};

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct appsettingsGetParams
	{
	};

	/// <remarks>
	/// GET /appsettings
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsGet(const appsettingsGetParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct appsettingsReloadPostParams
	{
	};

	/// <remarks>
	/// POST /appsettings/reload
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void appsettingsReloadPost(const appsettingsReloadPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct featureflagsGetParams
	{
	};

	/// <remarks>
	/// GET /featureflags
	/// Authorization: magnopus-admin
	/// </remarks>
	virtual void featureflagsGet(const featureflagsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IConfigurationApiBase() = default;
};

class IDaigramsApiBase : public csp::services::ApiBase
{
public:
	IDaigramsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct daigramsPostParams
	{
		const std::shared_ptr<DaigramCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a daigram (provisions the backing group + scope) owned by the caller.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsPost(const daigramsPostParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsGetParams
	{
	};


	/// <summary>
	/// List the daigrams the caller owns or can access via group membership.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsGet(const daigramsGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single daigram by id.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdGet(const daigramsIdGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Rename a daigram (metadata-only; caller must be owner or a group member/creator).
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdPut(const daigramsIdPutParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct daigramsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Delete a daigram and tear down its group + scope + objects. Owner-only.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/daigrams/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdDelete(const daigramsIdDeleteParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct daigramsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DaigramThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Set a daigram's thumbnail Prototype id (capture-on-save). Owner or any group member —
	/// every member is a group creator, so any editor can capture the snapshot.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/daigrams/{id}/thumbnail
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void daigramsIdThumbnailPut(const daigramsIdThumbnailPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDaigramsApiBase() = default;
};

class IDepartmentsApiBase : public csp::services::ApiBase
{
public:
	IDepartmentsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterDepartmentsGetParams
	{
	};


	/// <summary>
	/// Every department with its ladder, in grid order.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsGet(const productionrosterDepartmentsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsPostParams
	{
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a department. <b>409 when the name is taken</b> — the unique index decides it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/departments
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsPost(const productionrosterDepartmentsPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterDepartmentsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<DepartmentUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a department, ladder included.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdPut(const productionrosterDepartmentsIdPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterDepartmentsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a department. <b>409 while people still belong to it.</b>
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/departments/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterDepartmentsIdDelete(const productionrosterDepartmentsIdDeleteParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IDepartmentsApiBase() = default;
};

class IEffortResourcesApiBase : public csp::services::ApiBase
{
public:
	IEffortResourcesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct watchtowerEffortBulk_upsertPostParams
	{
		const std::shared_ptr<EffortResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert effort nodes (the write path for both the historical reconstructor and the live
	/// observer/agent). Super-user / agent gated. Provenance-gated: a lower-tier write never clobbers a
	/// higher-tier one.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_upsertPost(const watchtowerEffortBulk_upsertPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_removePostParams
	{
		const std::shared_ptr<EffortResourceRemoveRequest>& RequestBody;
	};


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
	virtual void watchtowerEffortBulk_removePost(const watchtowerEffortBulk_removePostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortBulk_getPostParams
	{
		const std::shared_ptr<EffortResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch effort nodes by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortBulk_getPost(const watchtowerEffortBulk_getPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerEffortSearchPostParams
	{
		const std::shared_ptr<EffortResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — nodes tagged with any of the requested daigram ids that changed since the
	/// caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/effort/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerEffortSearchPost(const watchtowerEffortSearchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IEffortResourcesApiBase() = default;
};

class IJiraResourcesApiBase : public csp::services::ApiBase
{
public:
	IJiraResourcesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct watchtowerJiraBulk_upsertPostParams
	{
		const std::shared_ptr<JiraResourceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Bulk-upsert read-model entries (the collector/agent write path). Super-user gated — this is a
	/// collector seam, not a user action. Callers should send only changed entries (the poller diffs).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_upsertPost(const watchtowerJiraBulk_upsertPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraBulk_getPostParams
	{
		const std::shared_ptr<JiraResourceBulkGetRequest>& RequestBody;
	};


	/// <summary>
	/// Fetch read-model entries by key — the client hydration read. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/bulk-get
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraBulk_getPost(const watchtowerJiraBulk_getPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraSearchPostParams
	{
		const std::shared_ptr<JiraResourceSearchRequest>& RequestBody;
	};


	/// <summary>
	/// The liveness search — entries tagged with any of the requested daigram ids that changed since
	/// the caller's cursor, plus the cursor to pass next poll. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/search
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraSearchPost(const watchtowerJiraSearchPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaProjectGetParams
	{
		const utility::string_t& project;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// The stored create schema for a project (all creatable issue types + projected fields) — the
	/// inline-create form reads this. Null/no-content when not yet seeded (the form falls back to a
	/// summary-only create). Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/createmeta/{project}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaProjectGet(const watchtowerJiraCreatemetaProjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraCreatemetaUpsertPostParams
	{
		const std::shared_ptr<JiraCreateMetaUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's create schema (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/createmeta/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraCreatemetaUpsertPost(const watchtowerJiraCreatemetaUpsertPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceProjectKindGetParams
	{
		const utility::string_t& project;
		const utility::string_t& kind;
		const std::optional<utility::string_t>& family;
	};


	/// <summary>
	/// A project-scoped reference list (`components`/`versions`) for a typeahead — the big
	/// option sets kept out of the create schema. Null/no-content when not yet seeded. Tenant-scoped.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/watchtower/jira/reference/{project}/{kind}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceProjectKindGet(const watchtowerJiraReferenceProjectKindGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct watchtowerJiraReferenceUpsertPostParams
	{
		const std::shared_ptr<JiraReferenceUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Refresh a project's reference list (the collector write path). Super-user gated.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/watchtower/jira/reference/upsert
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service,magnopus-agent
	/// </remarks>
	virtual void watchtowerJiraReferenceUpsertPost(const watchtowerJiraReferenceUpsertPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IJiraResourcesApiBase() = default;
};

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct datetimeGetParams
	{
	};

	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	virtual void datetimeGet(const datetimeGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~INtpApiBase() = default;
};

class IPeopleApiBase : public csp::services::ApiBase
{
public:
	IPeopleApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterPeopleGetParams
	{
	};


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
	virtual void productionrosterPeopleGet(const productionrosterPeopleGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeoplePostParams
	{
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Adds a person. 409 on a duplicate name; 400 when the title is off the department's ladder.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/people
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeoplePost(const productionrosterPeoplePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterPeopleIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PersonUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a person.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdPut(const productionrosterPeopleIdPutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterPeopleIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a person <b>and every assignment they hold</b>.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/people/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterPeopleIdDelete(const productionrosterPeopleIdDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPeopleApiBase() = default;
};

class IPersonalPointOfInterestApiBase : public csp::services::ApiBase
{
public:
	IPersonalPointOfInterestApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdPoiGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the points of interest associated with user identified by userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPoiGet(const usersUserIdPoiGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdPoiPoiIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& poiId;
	};


	/// <summary>
	/// Creates an association between a user and a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/poi/{poiId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPoiPoiIdPut(const usersUserIdPoiPoiIdPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdPoiPoiIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& poiId;
	};


	/// <summary>
	/// Deletes an association between a user and a point of interest
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/poi/{poiId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPoiPoiIdDelete(const usersUserIdPoiPoiIdDeleteParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPersonalPointOfInterestApiBase() = default;
};

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct pingGetParams
	{
	};

	/// <remarks>
	/// GET /ping
	/// Authorization: Anonymous
	/// </remarks>
	virtual void pingGet(const pingGetParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPingApiBase() = default;
};

class IPointOfInterestApiBase : public csp::services::ApiBase
{
public:
	IPointOfInterestApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct poiIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the POI data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void poiIdGet(const poiIdGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct poiIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PointOfInterestDto>& RequestBody;
	};


	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and updates the writable fields of that POI with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiIdPut(const poiIdPutParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct poiIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiIdDelete(const poiIdDeleteParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poi_liteGetParams
	{
		const std::optional<utility::string_t>& ppoiUserId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<utility::string_t>& Type;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence;
		const std::optional<utility::string_t>& Name;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& Title;
		const std::optional<int32_t>& ZoomLevel;
		const std::optional<utility::string_t>& EventStartTime;
		const std::optional<utility::string_t>& EventEndTime;
		const std::optional<std::vector<utility::string_t>>& ReferenceLookups;
		const std::optional<bool>& IncludeHidden;
		const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes;
		const std::optional<bool>& HasSchedule;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the POI's for those that match the search criteria and gets simplified POI result
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi-lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void poi_liteGet(const poi_liteGetParams& Params,
							 csp::services::ApiResponseHandlerBase* ResponseHandler,
							 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poi_idGetParams
	{
		const std::optional<utility::string_t>& ppoiUserId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<utility::string_t>& Type;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence;
		const std::optional<utility::string_t>& Name;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& Title;
		const std::optional<int32_t>& ZoomLevel;
		const std::optional<utility::string_t>& EventStartTime;
		const std::optional<utility::string_t>& EventEndTime;
		const std::optional<std::vector<utility::string_t>>& ReferenceLookups;
		const std::optional<bool>& IncludeHidden;
		const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes;
		const std::optional<bool>& HasSchedule;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the POI's for those that match the search criteria and gets only the Ids as a result
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi-id
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void poi_idGet(const poi_idGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poiGetParams
	{
		const std::optional<utility::string_t>& ppoiUserId;
		const std::optional<std::vector<utility::string_t>>& Ids;
		const std::optional<utility::string_t>& Type;
		const std::optional<std::vector<utility::string_t>>& Types;
		const std::optional<std::vector<utility::string_t>>& Tags;
		const std::optional<bool>& TagsAll;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<std::vector<std::shared_ptr<GeoCoord>>>& Geofence;
		const std::optional<utility::string_t>& Name;
		const std::optional<std::vector<utility::string_t>>& Names;
		const std::optional<utility::string_t>& Title;
		const std::optional<int32_t>& ZoomLevel;
		const std::optional<utility::string_t>& EventStartTime;
		const std::optional<utility::string_t>& EventEndTime;
		const std::optional<std::vector<utility::string_t>>& ReferenceLookups;
		const std::optional<bool>& IncludeHidden;
		const std::optional<std::vector<std::shared_ptr<MediaType>>>& MediaTypes;
		const std::optional<bool>& HasSchedule;
		const std::optional<std::vector<utility::string_t>>& PrototypeNames;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of the POI's for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void poiGet(const poiGetParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct poiPostParams
	{
		const std::shared_ptr<PointOfInterestDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new point of interest
	/// </summary>
	/// <remarks>
	/// POST /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiPost(const poiPostParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct poiPutParams
	{
		const std::shared_ptr<PointOfInterestDto>& RequestBody;
	};


	/// <summary>
	/// Upserts a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiPut(const poiPutParams& Params,
						csp::services::ApiResponseHandlerBase* ResponseHandler,
						csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct poiDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Locates the POI by their unique identifier(s) ids
	/// and deletes them from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiDelete(const poiDeleteParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poiBulkPutParams
	{
		const std::vector<std::shared_ptr<BulkUpsertPointOfInterestDto>>& RequestBody;
	};


	/// <summary>
	/// Upserts a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiBulkPut(const poiBulkPutParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poiIdPartial_updatePutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<PoiPartialUpdate>& RequestBody;
	};


	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and updates only the fields specified in the request body on the POI.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/{id}/partial-update
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	virtual void poiIdPartial_updatePut(const poiIdPartial_updatePutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct poiTagsGetParams
	{
		const std::optional<utility::string_t>& tagNameWith;
	};


	/// <summary>
	/// Search across all of the POI documents to get a collection of all distinct tags
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi/tags
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void poiTagsGet(const poiTagsGetParams& Params,
							csp::services::ApiResponseHandlerBase* ResponseHandler,
							csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPointOfInterestApiBase() = default;
};

class IPositionApiBase : public csp::services::ApiBase
{
public:
	IPositionApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdPositionsGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::vector<utility::string_t>>& DeviceIds;
		const std::optional<std::vector<utility::string_t>>& PositionIds;
		const std::optional<utility::string_t>& StartTimestamp;
		const std::optional<utility::string_t>& EndTimestamp;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<bool>& FindUsersOutsideGeoSphere;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the position(s) history of the specified user by the search filter criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsGet(const usersUserIdPositionsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdPositionsPostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<PositionDto>& RequestBody;
	};


	/// <summary>
	/// Persists a new position for the specified user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsPost(const usersUserIdPositionsPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersPositionsLatestGetParams
	{
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::vector<utility::string_t>>& DeviceIds;
		const std::optional<std::vector<utility::string_t>>& PositionIds;
		const std::optional<utility::string_t>& StartTimestamp;
		const std::optional<utility::string_t>& EndTimestamp;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<bool>& FindUsersOutsideGeoSphere;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the latest position(s) history of all users by the search filter criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersPositionsLatestGet(const usersPositionsLatestGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdPositionsLatestGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the latest position of the specified user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsLatestGet(const usersUserIdPositionsLatestGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdPositionsPositionIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& positionId;
	};


	/// <summary>
	/// Gets the position of the specified user by the position id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/{positionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsPositionIdGet(const usersUserIdPositionsPositionIdGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdPositionsPositionIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& positionId;
	};


	/// <summary>
	/// Deletes the position of the specified user by the position id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/positions/{positionId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdPositionsPositionIdDelete(const usersUserIdPositionsPositionIdDeleteParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdPositionsLatestGetParams
	{
		const utility::string_t& groupId;
		const std::optional<std::vector<utility::string_t>>& UserIds;
	};


	/// <summary>
	/// Finds the location of all members in a specific group by the group's groupId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdPositionsLatestGet(const groupsGroupIdPositionsLatestGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsPositionsLatestGetParams
	{
		const std::optional<std::vector<utility::string_t>>& groupIds;
		const std::optional<std::vector<utility::string_t>>& UserIds;
	};


	/// <summary>
	/// Finds the location of all members in the list of groups specified in groupIds
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsPositionsLatestGet(const groupsPositionsLatestGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersPositionsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<std::vector<utility::string_t>>& DeviceIds;
		const std::optional<std::vector<utility::string_t>>& PositionIds;
		const std::optional<utility::string_t>& StartTimestamp;
		const std::optional<utility::string_t>& EndTimestamp;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<bool>& FindUsersOutsideGeoSphere;
		const std::optional<bool>& onlyLatestPosition;
	};


	/// <summary>
	/// Finds the latest positions for user(s) and returns them as kml formmatted xml
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersPositionsGet(const usersPositionsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPositionApiBase() = default;
};

class IPositionSpoofingApiBase : public csp::services::ApiBase
{
public:
	IPositionSpoofingApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdPositionsSpoofPostParams
	{
		const utility::string_t& userId;
		const std::optional<utility::string_t>& duration;
		const std::shared_ptr<PositionDto>& RequestBody;
	};


	/// <summary>
	/// Persists a new spoofed position for the specified user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsSpoofPost(const usersUserIdPositionsSpoofPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdPositionsSpoofGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets all the positions that are spoof positions for the specified userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsSpoofGet(const usersUserIdPositionsSpoofGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdPositionsSpoofDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Deletes all the positions that are spoof positions for the specified userId
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdPositionsSpoofDelete(const usersUserIdPositionsSpoofDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct positionsSpoofUsersGetParams
	{
	};


	/// <summary>
	/// Gets the user ids for all users that currently have spoof data
	/// </summary>
	/// <remarks>
	/// GET /api/v1/positions/spoof/users
	/// Authorization: admin,tester
	/// </remarks>
	virtual void positionsSpoofUsersGet(const positionsSpoofUsersGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IPositionSpoofingApiBase() = default;
};

class IProjectsApiBase : public csp::services::ApiBase
{
public:
	IProjectsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterProjectsGetParams
	{
	};


	/// <summary>
	/// Every project, by name.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsGet(const productionrosterProjectsGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsPostParams
	{
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a project. <b>409 on a duplicate name</b> — see Magnopus.Logic.ProductionRoster.IProjectLogic.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/productionroster/projects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsPost(const productionrosterProjectsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct productionrosterProjectsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<ProjectUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Renames or recolours a project. Every assignment follows, because they carry the id.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdPut(const productionrosterProjectsIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct productionrosterProjectsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Removes a project and every assignment on it.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/productionroster/projects/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void productionrosterProjectsIdDelete(const productionrosterProjectsIdDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IProjectsApiBase() = default;
};

class ISnapshotApiBase : public csp::services::ApiBase
{
public:
	ISnapshotApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct productionrosterSnapshotGetParams
	{
		const std::optional<std::vector<utility::string_t>>& types;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
	};


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
	virtual void productionrosterSnapshotGet(const productionrosterSnapshotGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISnapshotApiBase() = default;
};

class ISpaceTimeApiBase : public csp::services::ApiBase
{
public:
	ISpaceTimeApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdSpacetimeIdGetParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the spacetime event data by its unique identifier id and associated  userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSpacetimeIdGet(const usersUserIdSpacetimeIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSpacetimeIdDeleteParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
	};


	/// <summary>
	/// Locates the SpaceTime Event by its unique identifier id and userId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdSpacetimeIdDelete(const usersUserIdSpacetimeIdDeleteParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdSpacetimeIdPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& id;
		const std::shared_ptr<SpaceTimeDto>& RequestBody;
	};


	/// <summary>
	/// Locates the SpaceTime Event by its unique identifier id and the  userId
	/// and updates the writable fields of that SpaceTime event with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void usersUserIdSpacetimeIdPut(const usersUserIdSpacetimeIdPutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdSpacetimePostParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<SpaceTimeDto>& RequestBody;
	};


	/// <summary>
	/// Adds a spacetime event for a user by userId with associated  spaceTimeEventToCreate
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/spacetime
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdSpacetimePost(const usersUserIdSpacetimePostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacetimeGetParams
	{
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<utility::string_t>& StartTimestamp;
		const std::optional<utility::string_t>& EndTimestamp;
		const std::optional<std::vector<utility::string_t>>& GroupIds;
		const std::optional<double>& Coordinate_Longitude;
		const std::optional<double>& Coordinate_Latitude;
		const std::optional<double>& Coordinate_Radius;
		const std::optional<std::vector<utility::string_t>>& PoiIds;
		const std::optional<std::vector<utility::string_t>>& PrototypeIds;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search across all of SpaceTime for those that match the search criteria using filters and pagination
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spacetime
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacetimeGet(const spacetimeGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISpaceTimeApiBase() = default;
};

class ISystemClaimApiBase : public csp::services::ApiBase
{
public:
	ISystemClaimApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdClaimPostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<TakeBatonRequest>& RequestBody;
	};


	/// <summary>
	/// <b>Take the baton.</b> 200 with the system as it now stands, or <b>409 with the current
	///             holder in the body</b> so the UI can say "Matt took it a moment ago" rather than
	///             "something went wrong".
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems/{systemId}/claim
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdClaimPost(const batonSystemsSystemIdClaimPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdClaimDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<bool>& force;
		const std::optional<utility::string_t>& note;
	};


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
	virtual void batonSystemsSystemIdClaimDelete(const batonSystemsSystemIdClaimDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemClaimApiBase() = default;
};

class ISystemHistoryApiBase : public csp::services::ApiBase
{
public:
	ISystemHistoryApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdHistoryGetParams
	{
		const utility::string_t& systemId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of a system's holds, <b>newest first</b>, each with the duration computed at
	/// release. <b>Archived systems still answer</b> — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdHistoryGet(const batonSystemsSystemIdHistoryGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemHistoryApiBase() = default;
};

class ISystemQueueApiBase : public csp::services::ApiBase
{
public:
	ISystemQueueApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsSystemIdQueueGetParams
	{
		const utility::string_t& systemId;
	};


	/// <summary>
	/// One system's queue, in order, with each person's place in line.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{systemId}/queue
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsSystemIdQueueGet(const batonSystemsSystemIdQueueGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueuePostParams
	{
		const utility::string_t& systemId;
		const std::shared_ptr<JoinQueueRequest>& RequestBody;
	};


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
	virtual void batonSystemsSystemIdQueuePost(const batonSystemsSystemIdQueuePostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsSystemIdQueueDeleteParams
	{
		const utility::string_t& systemId;
		const std::optional<utility::string_t>& userId;
		const std::optional<bool>& force;
	};


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
	virtual void batonSystemsSystemIdQueueDelete(const batonSystemsSystemIdQueueDeleteParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemQueueApiBase() = default;
};

class ISystemsApiBase : public csp::services::ApiBase
{
public:
	ISystemsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<bool>& Archived;
		const std::optional<utility::string_t>& SortBy;
		const std::optional<std::shared_ptr<SortDirection>>& SortDirection;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


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
	virtual void batonSystemsGet(const batonSystemsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsPostParams
	{
		const std::shared_ptr<SystemCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Registers a system. <b>409 when this tenant already has one by that name</b> — decided by
	/// the unique index at insert time, never by a preceding read.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/baton/systems
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsPost(const batonSystemsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct batonSystemsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// A single system by id. Archived systems still resolve — history outlives them.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdGet(const batonSystemsIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Edits a system's name, description, console link and grace window. 409 on a name that is
	/// already taken. <b>Never touches the hold</b> — that is Lane B's conditional update.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdPut(const batonSystemsIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct batonSystemsIdDeleteParams
	{
		const utility::string_t& id;
		const std::optional<bool>& confirm;
	};


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
	virtual void batonSystemsIdDelete(const batonSystemsIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemsApiBase() = default;
};

class ISystemThumbnailApiBase : public csp::services::ApiBase
{
public:
	ISystemThumbnailApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct batonSystemsIdThumbnailPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<SystemThumbnailRequest>& RequestBody;
	};


	/// <summary>
	/// Point a system at the Prototype holding its picture. The bytes themselves are uploaded
	/// straight to the Prototype service by the client; this records the reference.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/baton/systems/{id}/thumbnail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void batonSystemsIdThumbnailPut(const batonSystemsIdThumbnailPutParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISystemThumbnailApiBase() = default;
};

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct rsionsGetParams
	{
	};


	/// <summary>
	/// Get Versions of available Controllers and versioned types
	/// </summary>
	/// <remarks>
	/// GET /api/versions
	/// Authorization: Anonymous
	/// </remarks>
	virtual void rsionsGet(const rsionsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IVersionsApiBase() = default;
};

class IWazzupAgentOverridesApiBase : public csp::services::ApiBase
{
public:
	IWazzupAgentOverridesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupAgent_overridesGetParams
	{
	};


	/// <summary>
	/// Every override the caller has stored.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesGet(const wazzupAgent_overridesGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesDeleteParams
	{
		const std::optional<bool>& confirm;
	};


	/// <summary>
	/// Resets every agent to its defaults. `confirm=true` is required.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesDelete(const wazzupAgent_overridesDeleteParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupAgent_overridesAgentIdPutParams
	{
		const utility::string_t& agentId;
		const std::shared_ptr<AgentOverrideRequest>& RequestBody;
	};


	/// <summary>
	/// Creates or replaces the caller's override for one agent.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdPut(const wazzupAgent_overridesAgentIdPutParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupAgent_overridesAgentIdDeleteParams
	{
		const utility::string_t& agentId;
	};


	/// <summary>
	/// Resets one agent to its defaults.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/agent-overrides/{agentId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupAgent_overridesAgentIdDelete(const wazzupAgent_overridesAgentIdDeleteParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupAgentOverridesApiBase() = default;
};

class IWazzupCapabilitiesApiBase : public csp::services::ApiBase
{
public:
	IWazzupCapabilitiesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupCapabilitiesGetParams
	{
	};


	/// <summary>
	/// The transit encodings the prompt-bearing request fields may use.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/capabilities
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupCapabilitiesGet(const wazzupCapabilitiesGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupCapabilitiesApiBase() = default;
};

class IWazzupLlmApiBase : public csp::services::ApiBase
{
public:
	IWazzupLlmApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupLlmProvidersGetParams
	{
	};


	/// <summary>
	/// The providers this environment offers.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/llm/providers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmProvidersGet(const wazzupLlmProvidersGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupLlmGeneratePostParams
	{
		const std::shared_ptr<LlmGenerateRequest>& RequestBody;
	};


	/// <summary>
	/// Runs one generation for one swarm agent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/llm/generate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupLlmGeneratePost(const wazzupLlmGeneratePostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupLlmApiBase() = default;
};

class IWazzupSessionsApiBase : public csp::services::ApiBase
{
public:
	IWazzupSessionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupSessionsGetParams
	{
		const std::optional<utility::string_t>& Search;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// One page of the caller's sessions, newest first.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsGet(const wazzupSessionsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsPostParams
	{
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Saves a new session.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/sessions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsPost(const wazzupSessionsPostParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupSessionsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// One session with its payload.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdGet(const wazzupSessionsIdGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdPutParams
	{
		const utility::string_t& id;
		const std::shared_ptr<MiningSessionSaveRequest>& RequestBody;
	};


	/// <summary>
	/// Overwrites a session.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdPut(const wazzupSessionsIdPutParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct wazzupSessionsIdDeleteParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Deletes a session.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/wazzup/sessions/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupSessionsIdDelete(const wazzupSessionsIdDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupSessionsApiBase() = default;
};

class IWazzupStorageApiBase : public csp::services::ApiBase
{
public:
	IWazzupStorageApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct wazzupStorageCdn_fetchPostParams
	{
		const std::shared_ptr<CdnFetchRequest>& RequestBody;
	};


	/// <summary>
	/// Fetches one CDN asset with the mined tenant's token. POST rather than GET so neither the URI
	/// nor the token lands in an access log.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/wazzup/storage/cdn-fetch
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageCdn_fetchPost(const wazzupStorageCdn_fetchPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectsGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& prefix;
		const std::optional<utility::string_t>& pageToken;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// One page of a tenant's legacy Nodey objects.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/objects
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectsGet(const wazzupStorageLegacyTenantObjectsGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct wazzupStorageLegacyTenantObjectGetParams
	{
		const utility::string_t& tenant;
		const std::optional<utility::string_t>& key;
	};


	/// <summary>
	/// Reads one legacy Nodey object.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/wazzup/storage/legacy/{tenant}/object
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void wazzupStorageLegacyTenantObjectGet(const wazzupStorageLegacyTenantObjectGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IWazzupStorageApiBase() = default;
};


} // namespace csp::services::generated::spatialdataservice