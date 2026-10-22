

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::trackingservice
{


class IAnalyticsApiBase : public csp::services::ApiBase
{
public:
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class IAssignmentsApiBase : public csp::services::ApiBase
{
public:
	IAssignmentsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IConfigApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IConfigurationApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IDaigramsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IDepartmentsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IEffortResourcesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IJiraResourcesApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IPeopleApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class IPingApiBase : public csp::services::ApiBase
{
public:
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class IProjectsApiBase : public csp::services::ApiBase
{
public:
	IProjectsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class IQuotaActivityApiBase : public csp::services::ApiBase
{
public:
	IQuotaActivityApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct usersUserIdQuota_progressGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& features;
	};


	/// <summary>
	/// Gets the user's progress toward quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdQuota_progressGet(const usersUserIdQuota_progressGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsGroupIdQuota_progressGetParams
	{
		const utility::string_t& groupId;
		const std::optional<std::vector<utility::string_t>>& features;
	};


	/// <summary>
	/// Gets the group's progress toward quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/quota-progress
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsGroupIdQuota_progressGet(const groupsGroupIdQuota_progressGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct userUserIdQuota_activityGetParams
	{
		const utility::string_t& userId;
		const std::optional<std::vector<utility::string_t>>& Features;
		const std::optional<utility::string_t>& StartDateTime;
		const std::optional<utility::string_t>& EndDateTime;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the individual activity toward a user's quota limits per feature
	/// </summary>
	/// <remarks>
	/// GET /api/v1/user/{userId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void userUserIdQuota_activityGet(const userUserIdQuota_activityGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupGroupIdQuota_activityGetParams
	{
		const utility::string_t& groupId;
		const std::optional<std::vector<utility::string_t>>& Features;
		const std::optional<utility::string_t>& StartDateTime;
		const std::optional<utility::string_t>& EndDateTime;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Gets the individual activity toward a group's quota limits per feature (tier assignment is by the group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/group/{groupId}/quota-activity
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupGroupIdQuota_activityGet(const groupGroupIdQuota_activityGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaActivityApiBase() = default;
};

class IQuotaManagementApiBase : public csp::services::ApiBase
{
public:
	IQuotaManagementApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct tiersGetParams
	{
	};


	/// <summary>
	/// Gets all distinct tier names across all feature-tier definitions
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersGet(const tiersGetParams& Params,
						  csp::services::ApiResponseHandlerBase* ResponseHandler,
						  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameQuotasGetParams
	{
		const utility::string_t& tierName;
	};


	/// <summary>
	/// Gets all feature quota definition at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/quotas
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tiersTierNameQuotasGet(const tiersTierNameQuotasGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameFeaturesFeatureNameQuotaGetParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
	};


	/// <summary>
	/// Gets a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaGet(const tiersTierNameFeaturesFeatureNameQuotaGetParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tiersTierNameFeaturesFeatureNameQuotaPutParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
		const std::shared_ptr<QuotaFeatureTierDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a quota definition for a feature at the specified tier
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaPut(const tiersTierNameFeaturesFeatureNameQuotaPutParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tiersTierNameFeaturesFeatureNameQuotaDeleteParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
	};


	/// <summary>
	/// Deletes a quota definition for a feature at the specified tier
	/// IMPORTANT NOTE: This does NOT make the feature amount unlimited at this tier.  Instead it reverts the quota to fall back to the default
	/// amount.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tiers/{tierName}/features/{featureName}/quota
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameQuotaDelete(const tiersTierNameFeaturesFeatureNameQuotaDeleteParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct quota_featuresGetParams
	{
	};


	/// <summary>
	/// Gets all implemented quota feature names from the registry.
	/// Useful for populating "Add Feature" dropdowns.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/quota-features
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void quota_featuresGet(const quota_featuresGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct quota_featuresFeatureNameRegisterPostParams
	{
		const utility::string_t& featureName;
		const std::optional<utility::string_t>& systemType;
	};


	/// <summary>
	/// Registers a feature name in the quota implementation registry.
	/// Idempotent — if the feature is already registered, this is a no-op.
	/// Called by the Aggregation service after creating a secret definition with a QuotaFeatureName.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/quota-features/{featureName}/register
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void quota_featuresFeatureNameRegisterPost(const quota_featuresFeatureNameRegisterPostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameFeaturesFeatureNameHistoryGetParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
	};


	/// <summary>
	/// Gets version history for a feature at a tier, ordered by version descending.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/features/{featureName}/history
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameHistoryGet(const tiersTierNameFeaturesFeatureNameHistoryGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameFeaturesFeatureNameHistoryVerGetParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
		const int32_t& ver;
	};


	/// <summary>
	/// Gets a specific version snapshot of a feature at a tier.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tiers/{tierName}/features/{featureName}/history/{ver}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameHistoryVerGet(const tiersTierNameFeaturesFeatureNameHistoryVerGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tiersTierNameFeaturesFeatureNameRestoreVerPostParams
	{
		const utility::string_t& tierName;
		const utility::string_t& featureName;
		const int32_t& ver;
	};


	/// <summary>
	/// Restores a feature at a tier to a previous version. Creates a new version from the old snapshot.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tiers/{tierName}/features/{featureName}/restore/{ver}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tiersTierNameFeaturesFeatureNameRestoreVerPost(const tiersTierNameFeaturesFeatureNameRestoreVerPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaManagementApiBase() = default;
};

class IQuotaTierApiBase : public csp::services::ApiBase
{
public:
	IQuotaTierApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct tier_definitionsGetParams
	{
	};


	/// <summary>
	/// Gets all tier definitions sorted by sort order, enriched with feature counts
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tier-definitions
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tier_definitionsGet(const tier_definitionsGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tier_definitionsTierNameGetParams
	{
		const utility::string_t& tierName;
	};


	/// <summary>
	/// Gets a single tier definition by its tier name, enriched with feature count
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tier-definitions/{tierName}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tier_definitionsTierNameGet(const tier_definitionsTierNameGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tier_definitionsTierNamePostParams
	{
		const utility::string_t& tierName;
		const std::shared_ptr<QuotaTierDto>& RequestBody;
	};


	/// <summary>
	/// Creates a new tier definition
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tier-definitions/{tierName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tier_definitionsTierNamePost(const tier_definitionsTierNamePostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tier_definitionsTierNamePutParams
	{
		const utility::string_t& tierName;
		const std::shared_ptr<QuotaTierDto>& RequestBody;
	};


	/// <summary>
	/// Updates an existing tier definition's metadata
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tier-definitions/{tierName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tier_definitionsTierNamePut(const tier_definitionsTierNamePutParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tier_definitionsTierNameDeleteParams
	{
		const utility::string_t& tierName;
	};


	/// <summary>
	/// Deletes a tier definition
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tier-definitions/{tierName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tier_definitionsTierNameDelete(const tier_definitionsTierNameDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tier_definitionsSeedPostParams
	{
	};


	/// <summary>
	/// Seeds tier definitions from existing tier names discovered in QuotaFeatureTierDocument and config.
	/// Skips tiers that already have a QuotaTierDocument. Safe to call multiple times.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tier-definitions/seed
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void tier_definitionsSeedPost(const tier_definitionsSeedPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaTierApiBase() = default;
};

class IQuotaTierAssignmentApiBase : public csp::services::ApiBase
{
public:
	IQuotaTierAssignmentApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
	{
	}



	struct tier_assignmentsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tier-assignments/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void tier_assignmentsIdGet(const tier_assignmentsIdGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersUserIdTier_assignmentGetParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Gets the user's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdTier_assignmentGet(const usersUserIdTier_assignmentGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdTier_assignmentPutParams
	{
		const utility::string_t& userId;
		const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody;
	};


	/// <summary>
	/// Updates the user's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/tier-assignment
	/// Authorization: magnopus-admin,magnopus-support,admin,internal-service
	/// </remarks>
	virtual void usersUserIdTier_assignmentPut(const usersUserIdTier_assignmentPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct usersUserIdTier_assignmentDeleteParams
	{
		const utility::string_t& userId;
	};


	/// <summary>
	/// Deletes the user's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the user's tier as unassigned.  This reverts the user to the default tier.
	/// </remarks>
	virtual void usersUserIdTier_assignmentDelete(const usersUserIdTier_assignmentDeleteParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameTier_assignmentGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Gets the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentGet(const tenantsTenantNameTier_assignmentGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsTenantNameTier_assignmentPutParams
	{
		const utility::string_t& tenantName;
		const std::shared_ptr<QuotaTierAssignmentDto>& RequestBody;
	};


	/// <summary>
	/// Updates the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/tenants/{tenantName}/tier-assignment
	/// Authorization: magnopus-admin,magnopus-support,internal-service
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentPut(const tenantsTenantNameTier_assignmentPutParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsTenantNameTier_assignmentDeleteParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Deletes the tenant's tier assignment
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/tenants/{tenantName}/tier-assignment
	/// IMPORTANT NOTE: This does NOT leave the tenant's tier as unassigned.  This reverts the tenant to the default tier.
	/// </remarks>
	virtual void tenantsTenantNameTier_assignmentDelete(const tenantsTenantNameTier_assignmentDeleteParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct usersTier_assignmentsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& userIds;
	};


	/// <summary>
	/// Gets the enforced tier assignments for multiple users.
	/// Resolution order per user: explicit user assignment → tenant assignment → default tier.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/tier-assignments
	/// Authorization: magnopus-admin,magnopus-support,admin
	/// </remarks>
	virtual void usersTier_assignmentsGet(const usersTier_assignmentsGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct groupsTier_assignmentsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& groupIds;
	};


	/// <summary>
	/// Gets the group(s) tier assignments (the tier assignment of each group owner)
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/tier-assignments
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void groupsTier_assignmentsGet(const groupsTier_assignmentsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IQuotaTierAssignmentApiBase() = default;
};

class ISnapshotApiBase : public csp::services::ApiBase
{
public:
	ISnapshotApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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

class ISystemClaimApiBase : public csp::services::ApiBase
{
public:
	ISystemClaimApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	ISystemHistoryApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	ISystemQueueApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	ISystemsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	ISystemThumbnailApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IWazzupAgentOverridesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IWazzupCapabilitiesApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IWazzupLlmApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IWazzupSessionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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
	IWazzupStorageApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().TrackingService)
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


} // namespace csp::services::generated::trackingservice