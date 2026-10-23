

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "ISpatialDataServiceApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::spatialdataservice
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

class AnchorsApi final : public IAnchorsApiBase
{
public:
	AnchorsApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~AnchorsApi();



	/// <summary>
	/// Locates the anchor data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsIdGet(const anchorsIdGetParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the anchor by its unique identifier id
	/// and updates the writable fields of that anchor with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsIdPut(const anchorsIdPutParams& Params,
					  csp::services::ApiResponseHandlerBase* ResponseHandler,
					  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes Anchors by its unique identifier id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/anchors/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsIdDelete(const anchorsIdDeleteParams& Params,
						 csp::services::ApiResponseHandlerBase* ResponseHandler,
						 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Adds an anchor key to the list of known anchor keys
	/// </summary>
	/// <remarks>
	/// POST /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsPost(const anchorsPostParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all Anchors by its unique identifier(s) ids
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsDelete(const anchorsDeleteParams& Params,
					   csp::services::ApiResponseHandlerBase* ResponseHandler,
					   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates all the anchors by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchors
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchorsGet(const anchorsGetParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates anchor resolution
	/// </summary>
	/// <remarks>
	/// POST /api/v1/anchor-resolutions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void anchor_resolutionsPost(const anchor_resolutionsPostParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates all the anchor resolutions by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchor-resolutions
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void anchor_resolutionsGet(const anchor_resolutionsGetParams& Params,
							   csp::services::ApiResponseHandlerBase* ResponseHandler,
							   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates anchor stats by filters
	/// </summary>
	/// <remarks>
	/// GET /api/v1/anchor-resolutions/stats
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void anchor_resolutionsStatsGet(const anchor_resolutionsStatsGetParams& Params,
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

class PersonalPointOfInterestApi final : public IPersonalPointOfInterestApiBase
{
public:
	PersonalPointOfInterestApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PersonalPointOfInterestApi();



	/// <summary>
	/// Gets the points of interest associated with user identified by userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPoiGet(const usersUserIdPoiGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Creates an association between a user and a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/poi/{poiId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPoiPoiIdPut(const usersUserIdPoiPoiIdPutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes an association between a user and a point of interest
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/poi/{poiId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPoiPoiIdDelete(const usersUserIdPoiPoiIdDeleteParams& Params,
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

class PointOfInterestApi final : public IPointOfInterestApiBase
{
public:
	PointOfInterestApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PointOfInterestApi();



	/// <summary>
	/// Locates the POI data by its unique identifier id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void poiIdGet(const poiIdGetParams& Params,
				  csp::services::ApiResponseHandlerBase* ResponseHandler,
				  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and updates the writable fields of that POI with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiIdPut(const poiIdPutParams& Params,
				  csp::services::ApiResponseHandlerBase* ResponseHandler,
				  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/poi/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiIdDelete(const poiIdDeleteParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the POI's for those that match the search criteria and gets simplified POI result
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi-lite
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void poi_liteGet(const poi_liteGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the POI's for those that match the search criteria and gets only the Ids as a result
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi-id
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void poi_idGet(const poi_idGetParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the POI's for those that match the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void poiGet(const poiGetParams& Params,
				csp::services::ApiResponseHandlerBase* ResponseHandler,
				csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Creates a new point of interest
	/// </summary>
	/// <remarks>
	/// POST /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiPost(const poiPostParams& Params,
				 csp::services::ApiResponseHandlerBase* ResponseHandler,
				 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Upserts a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiPut(const poiPutParams& Params,
				csp::services::ApiResponseHandlerBase* ResponseHandler,
				csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the POI by their unique identifier(s) ids
	/// and deletes them from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/poi
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiDelete(const poiDeleteParams& Params,
				   csp::services::ApiResponseHandlerBase* ResponseHandler,
				   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Upserts a point of interest
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/bulk
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiBulkPut(const poiBulkPutParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Locates the POI by its unique identifier id
	/// and updates only the fields specified in the request body on the POI.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/poi/{id}/partial-update
	/// Authorization: magnopus-admin,admin,support,internal-service,creator,limited-creator
	/// </remarks>
	void poiIdPartial_updatePut(const poiIdPartial_updatePutParams& Params,
								csp::services::ApiResponseHandlerBase* ResponseHandler,
								csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of the POI documents to get a collection of all distinct tags
	/// </summary>
	/// <remarks>
	/// GET /api/v1/poi/tags
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void poiTagsGet(const poiTagsGetParams& Params,
					csp::services::ApiResponseHandlerBase* ResponseHandler,
					csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PositionApi final : public IPositionApiBase
{
public:
	PositionApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PositionApi();



	/// <summary>
	/// Gets the position(s) history of the specified user by the search filter criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsGet(const usersUserIdPositionsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Persists a new position for the specified user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsPost(const usersUserIdPositionsPostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the latest position(s) history of all users by the search filter criteria
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersPositionsLatestGet(const usersPositionsLatestGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the latest position of the specified user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsLatestGet(const usersUserIdPositionsLatestGetParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the position of the specified user by the position id
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/{positionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsPositionIdGet(const usersUserIdPositionsPositionIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken
										   = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes the position of the specified user by the position id
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/positions/{positionId}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdPositionsPositionIdDelete(const usersUserIdPositionsPositionIdDeleteParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken
											  = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds the location of all members in a specific group by the group's groupId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/{groupId}/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsGroupIdPositionsLatestGet(const groupsGroupIdPositionsLatestGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds the location of all members in the list of groups specified in groupIds
	/// </summary>
	/// <remarks>
	/// GET /api/v1/groups/positions/latest
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void groupsPositionsLatestGet(const groupsPositionsLatestGetParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Finds the latest positions for user(s) and returns them as kml formmatted xml
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/positions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersPositionsGet(const usersPositionsGetParams& Params,
						   csp::services::ApiResponseHandlerBase* ResponseHandler,
						   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PositionSpoofingApi final : public IPositionSpoofingApiBase
{
public:
	PositionSpoofingApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~PositionSpoofingApi();



	/// <summary>
	/// Persists a new spoofed position for the specified user
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsSpoofPost(const usersUserIdPositionsSpoofPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Gets all the positions that are spoof positions for the specified userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsSpoofGet(const usersUserIdPositionsSpoofGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Deletes all the positions that are spoof positions for the specified userId
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/positions/spoof
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdPositionsSpoofDelete(const usersUserIdPositionsSpoofDeleteParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Gets the user ids for all users that currently have spoof data
	/// </summary>
	/// <remarks>
	/// GET /api/v1/positions/spoof/users
	/// Authorization: admin,tester
	/// </remarks>
	void positionsSpoofUsersGet(const positionsSpoofUsersGetParams& Params,
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

class SpaceTimeApi final : public ISpaceTimeApiBase
{
public:
	SpaceTimeApi(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition);
	virtual ~SpaceTimeApi();



	/// <summary>
	/// Locates the spacetime event data by its unique identifier id and associated  userId
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSpacetimeIdGet(const usersUserIdSpacetimeIdGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the SpaceTime Event by its unique identifier id and userId
	/// and deletes it from the data store.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdSpacetimeIdDelete(const usersUserIdSpacetimeIdDeleteParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;


	/// <summary>
	/// Locates the SpaceTime Event by its unique identifier id and the  userId
	/// and updates the writable fields of that SpaceTime event with the new values from the request body.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/spacetime/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	void usersUserIdSpacetimeIdPut(const usersUserIdSpacetimeIdPutParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Adds a spacetime event for a user by userId with associated  spaceTimeEventToCreate
	/// </summary>
	/// <remarks>
	/// POST /api/v1/users/{userId}/spacetime
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void usersUserIdSpacetimePost(const usersUserIdSpacetimePostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;



	/// <summary>
	/// Search across all of SpaceTime for those that match the search criteria using filters and pagination
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spacetime
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	void spacetimeGet(const spacetimeGetParams& Params,
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


} // namespace csp::services::generated::spatialdataservice