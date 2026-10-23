

#pragma once

#include "CSP/Common/CancellationToken.h"
#include "Common/Web/HttpPayload.h"
#include "Dto.h"
#include "Services/ApiBase/ApiBase.h"

#include <optional>
#include <string>


namespace csp::services::generated::aggregationservice
{


class IAloMovesApiBase : public csp::services::ApiBase
{
public:
	IAloMovesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct aloHarmonizePostParams
	{
		const std::shared_ptr<HarmonizeAloRequest>& RequestBody;
	};


	/// <summary>
	/// Harmonize with Meta
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/harmonize
	/// Authorization: Anonymous
	/// </remarks>
	virtual void aloHarmonizePost(const aloHarmonizePostParams& Params,
								  csp::services::ApiResponseHandlerBase* ResponseHandler,
								  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloVersions_matrixPostParams
	{
	};


	/// <summary>
	/// Get min compatible versions
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/versions-matrix
	/// Authorization: Anonymous
	/// </remarks>
	virtual void aloVersions_matrixPost(const aloVersions_matrixPostParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloUserIdClassesClassDefinitionIdCompletedPostParams
	{
		const utility::string_t& userId;
		const utility::string_t& classDefinitionId;
		const std::shared_ptr<AloClassCompletedRequest>& RequestBody;
	};


	/// <summary>
	/// Class Completed
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/{userId}/classes/{classDefinitionId}/completed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloUserIdClassesClassDefinitionIdCompletedPost(const aloUserIdClassesClassDefinitionIdCompletedPostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloQaUserIdBadge_expressionsPostParams
	{
		const utility::string_t& userId;
		const std::optional<utility::string_t>& classDefinitionId;
		const std::optional<utility::string_t>& expression;
		const std::optional<bool>& createFinalClass;
		const std::optional<bool>& deletePreviousData;
	};


	/// <summary>
	/// QA test function to setup the scenario to test a specific badge.  Note Bene!!!: this contract
	/// you are accepting when calling this function is that it will delete all your class and badge data.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/alo/qa/{userId}/badge-expressions
	/// ```markdown
	/// ### Badge Creation DSL Documentation
	///
	/// This guide explains how to use the Badge Creation DSL to simulate class completions and test badge awarding in our application.You’ll use
	/// these expressions in Swagger to automate the creation of class records.
	///
	/// #### DSL Format
	///
	/// The DSL expression follows this format:
	///
	/// ```
	/// [total_classes] [frequency] [interval] [consecutive | flexible][across_year]
	/// ```
	///
	/// - **total_classes**: The number of classes to be completed.
	/// - **frequency**: The time unit for class completions :
	///   - `D` for daily
	///   - `W` for weekly
	///   - `M` for monthly
	///   - `Y` for yearly
	/// - **interval**: The number of days, weeks, months, or years over which the classes are spread.
	/// - **consecutive | flexible** (optional):
	///   - `consecutive`: Classes must occur on consecutive days/weeks/months.
	///   - `flexible`: Classes can be spread out within the interval(default if not specified).
	/// - **across_year** (optional): Use this if the interval crosses from one year into the next.
	///
	/// #### Examples
	///
	/// 1. **7 consecutive days in a row**:
	///    ```
	///    7 D 1 consecutive
	///    ```
	///    - Simulates 7 classes completed on consecutive days.
	///
	/// 2. **5 classes within one week**:
	///    ```
	///    5 W 1 flexible
	///    ```
	///    - Simulates 5 classes spread out within a single week.
	///
	/// 3. **1 class per month for 3 consecutive months**:
	///    ```
	///    1 M 3 consecutive
	///    ```
	///    - Simulates 1 class each month for 3 consecutive months.
	///
	/// 4. **15 classes in one month**:
	///    ```
	///    15 M 1 flexible
	///    ```
	///    - Simulates 15 classes within a single month.
	///
	/// 5. **5 classes across a week that crosses into the next year**:
	///    ```
	///    5 W 1 flexible across_year
	///    ```
	///    - Simulates 5 classes within a week that spans the end of one year and the beginning of the next.
	///
	/// #### How to Use in Swagger
	///
	/// 1. Enter the expression into the designated field in Swagger.
	/// 2. The system will automatically create the necessary class completions according to the rules defined in your DSL expression.
	/// 3. Verify that the appropriate badge is awarded as expected.
	///
	/// #### Tips
	///
	/// - Use `consecutive` when you need classes to be back-to-back.
	/// - Use `flexible` for more relaxed scheduling within the specified interval.
	/// - Use `across_year` if your scenario involves a time period that spans two years.
	///
	/// This DSL simplifies your testing by automating class creation. If you encounter any issues or need help, refer back to this guide or contact
	/// the development team.
	/// ```
	/// </remarks>
	virtual void aloQaUserIdBadge_expressionsPost(const aloQaUserIdBadge_expressionsPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloUserIdClassesRecommendationsGetParams
	{
		const utility::string_t& userId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
		const std::optional<bool>& isSeries;
	};


	/// <summary>
	/// Gets recommended classes for the user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/alo/{userId}/classes/recommendations
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloUserIdClassesRecommendationsGet(const aloUserIdClassesRecommendationsGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloQaSyncClass_dataPutParams
	{
	};


	/// <summary>
	/// QA method for asynchronously syncing class data manually
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/alo/qa/sync/class-data
	/// Authorization: admin
	/// </remarks>
	virtual void aloQaSyncClass_dataPut(const aloQaSyncClass_dataPutParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct aloClassesMost_visitedGetParams
	{
		const std::optional<int32_t>& maxResults;
	};


	/// <summary>
	/// Gets the X most visited class definitions
	/// </summary>
	/// <remarks>
	/// GET /api/v1/alo/classes/most-visited
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void aloClassesMost_visitedGet(const aloClassesMost_visitedGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IAloMovesApiBase() = default;
};

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

class IBillingCadenceDevApiBase : public csp::services::ApiBase
{
public:
	IBillingCadenceDevApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct billingDevCadence_triggerPostParams
	{
	};


	/// <summary>
	/// Runs every registered cadence emitter once for "now" — the local equivalent of a scheduler
	/// tick. Idempotent per (tenant, metric, cycle, secret): re-running within the same billing cycle
	/// won't double-charge (the framework's cycle-charge-log unique key guards it), so it's safe to
	/// call repeatedly. Returns 404 outside Local.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing/dev/cadence-trigger
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billingDevCadence_triggerPost(const billingDevCadence_triggerPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IBillingCadenceDevApiBase() = default;
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

class ICoalescenceApiBase : public csp::services::ApiBase
{
public:
	ICoalescenceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct coalescenceIdPostParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Returns a coalescence object by its id.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/coalescence/{id}
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void coalescenceIdPost(const coalescenceIdPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ICoalescenceApiBase() = default;
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

class IExternalServiceProxyApiBase : public csp::services::ApiBase
{
public:
	IExternalServiceProxyApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct service_proxyPostParams
	{
		const std::shared_ptr<ServiceRequest>& RequestBody;
	};


	/// <summary>
	/// Used to make a call to an external API
	/// </summary>
	/// <remarks>
	/// POST /service-proxy
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void service_proxyPost(const service_proxyPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IExternalServiceProxyApiBase() = default;
};

class IGroupRolesApiBase : public csp::services::ApiBase
{
public:
	IGroupRolesApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersUserIdGroupsGroupIdRolesPutParams
	{
		const utility::string_t& userId;
		const utility::string_t& groupId;
		const std::shared_ptr<GroupRoleDto>& RequestBody;
	};


	/// <summary>
	/// Set a user's group role in a group they're already a member of.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/users/{userId}/groups/{groupId}/roles
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void usersUserIdGroupsGroupIdRolesPut(const usersUserIdGroupsGroupIdRolesPutParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IGroupRolesApiBase() = default;
};

class IInspectorApiBase : public csp::services::ApiBase
{
public:
	IInspectorApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorExecutionsGetParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& graphHash;
		const std::optional<utility::string_t>& graphName;
		const std::optional<utility::string_t>& createdAfter;
		const std::optional<utility::string_t>& createdBefore;
		const std::optional<int64_t>& minDurationMs;
		const std::optional<int64_t>& maxDurationMs;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List graph executions with optional filters and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsGet(const inspectorExecutionsGetParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsFailed_nodesCsvGetParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& graphHash;
		const std::optional<utility::string_t>& graphName;
		const std::optional<utility::string_t>& createdAfter;
		const std::optional<utility::string_t>& createdBefore;
		const std::optional<int64_t>& minDurationMs;
		const std::optional<int64_t>& maxDurationMs;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& uiBaseUrl;
		const std::optional<int32_t>& maxExecutions;
	};


	/// <summary>
	/// Export every failed node execution matching the Graph Executions list filters as CSV.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/failed-nodes.csv
	///
	/// One row per failed node execution — not per graph — carrying the node's identity, its
	///             resolved inputs (prompt text in full, asset references as `gs://` URIs where they can
	///             be located), the errors recorded against it, and a MagGyver deep link to the execution.
	/// The filter parameters mirror
	/// M:Olympus.Service.Aggregation.Controllers.InspectorController.ListExecutions(System.String,System.String,System.String,System.String,System.String,System.Nullable{System.DateTimeOffset},System.Nullable{System.DateTimeOffset},System.Nullable{System.Int64},System.Nullable{System.Int64},System.Nullable{System.Int64},System.Int32,System.Int32)'s,
	/// so the UI can hand over
	///             whatever it has active and the export narrows the same way the list does.
	///             `from`/`to` are the export's own range and are intersected with any
	///             `createdAfter`/`createdBefore` already in force — an export cannot widen a filter.
	/// <b>
	///     `status` is deliberately absent.</b> A failed node execution can sit inside an
	///             execution of any status — a Completed one, when a batch node lost some slots — so honoring
	///             the list's execution-status filter here could only ever hide rows the report exists to
	///             surface. Every other filter narrows an axis this report does not itself constrain.
	/// Gated at Magnopus.Backend.Security.Principal.RolesConstants.SuperUsers rather than `Everyone`: this is a bulk
	///             extraction of prompt text and asset locations across a tenant, which is a different act from
	///             reading one execution you already have open. Tenant scope is still enforced in the logic
	///             layer, so a tenant admin exports only their own tenant. Audited as a read for the same
	///             reason — the class-level filter skips GETs, so this action opts in explicitly.
	/// </remarks>
	virtual void inspectorExecutionsFailed_nodesCsvGet(const inspectorExecutionsFailed_nodesCsvGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get details of a specific execution by execution ID.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdGet(const inspectorExecutionsExecutionIdGetParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdStateGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get real-time state from S3 for an execution.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdStateGet(const inspectorExecutionsExecutionIdStateGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdGraphGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get the graph definition from S3 for an execution.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/graph
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdGraphGet(const inspectorExecutionsExecutionIdGraphGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsExecutionIdLogsGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Get all logs for an execution from S3.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/{executionId}/logs
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsExecutionIdLogsGet(const inspectorExecutionsExecutionIdLogsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorStatsGetParams
	{
		const std::optional<utility::string_t>& tenant;
		const std::optional<int32_t>& sinceDays;
	};


	/// <summary>
	/// Get execution statistics summary.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/stats
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorStatsGet(const inspectorStatsGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorExecutionsRunningGetParams
	{
		const std::optional<utility::string_t>& tenant;
	};


	/// <summary>
	/// Get currently running executions.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/executions/running
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsRunningGet(const inspectorExecutionsRunningGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorObserveExecutionIdPostParams
	{
		const utility::string_t& executionId;
		const std::shared_ptr<StartObserveRequest>& RequestBody;
	};


	/// <summary>
	/// Start observing an execution's logs in real-time.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/observe/{executionId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorObserveExecutionIdPost(const inspectorObserveExecutionIdPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthGetParams
	{
		const std::optional<int64_t>& modifiedSince;
	};


	/// <summary>
	/// Returns a snapshot of queue health data for all discovered RabbitMQ queues.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-health
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorQueue_healthGet(const inspectorQueue_healthGetParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqPurgePostParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Purge all messages from a queue's DLQ.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/purge
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqPurgePost(const inspectorQueue_healthQueueNameDlqPurgePostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedrivePostParams
	{
		const utility::string_t& queueName;
		const std::shared_ptr<StartRedriveRequest>& RequestBody;
	};


	/// <summary>
	/// Start a redrive to move messages from a queue's DLQ back to the source queue.
	/// For RabbitMQ, this consumes messages from the dead-letter queue and republishes
	/// them to the original queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/redrive
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqRedrivePost(const inspectorQueue_healthQueueNameDlqRedrivePostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// List recent redrive tasks for a queue's DLQ.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-health/{queueName}/dlq/redrive-tasks
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_healthQueueNameDlqRedrive_tasksGet(const inspectorQueue_healthQueueNameDlqRedrive_tasksGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams
	{
		const utility::string_t& queueName;
		const utility::string_t& taskHandle;
	};


	/// <summary>
	/// Cancel a running redrive task.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-health/{queueName}/dlq/redrive/{taskHandle}/cancel
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPost(const inspectorQueue_healthQueueNameDlqRedriveTaskHandleCancelPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosQueueNameActivatePostParams
	{
		const utility::string_t& queueName;
		const std::shared_ptr<ActivateChaosRequest>& RequestBody;
	};


	/// <summary>
	/// Activate the chaos monkey for a queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/chaos/{queueName}/activate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorChaosQueueNameActivatePost(const inspectorChaosQueueNameActivatePostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosQueueNameDeactivatePostParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Deactivate the chaos monkey for a queue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/chaos/{queueName}/deactivate
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorChaosQueueNameDeactivatePost(const inspectorChaosQueueNameDeactivatePostParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorChaosGetParams
	{
	};


	/// <summary>
	/// Get all active chaos monkey configs across all known queues.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/chaos
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorChaosGet(const inspectorChaosGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageExecutions_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily execution counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/executions-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageExecutions_per_dayGet(const inspectorUsageExecutions_per_dayGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageQueues_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily distributed queue usage counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/queues-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageQueues_per_dayGet(const inspectorUsageQueues_per_dayGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageNode_types_per_dayGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily node type usage counts for usage charts.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/node-types-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageNode_types_per_dayGet(const inspectorUsageNode_types_per_dayGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageKey_usage_per_dayGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenantNames;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily key usage counts (tenant-aware).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/key-usage-per-day
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageKey_usage_per_dayGet(const inspectorUsageKey_usage_per_dayGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageTop_users_per_keyGetParams
	{
		const std::optional<utility::string_t>& secretKey;
		const std::optional<std::vector<utility::string_t>>& tenantNames;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<int32_t>& topN;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Rank the top users of a single key over the page date range and return each ranked
	/// user's per-day usage series (users identified by email). Cross-tenant user attribution
	/// is admin-sensitive, so this is MagnopusSuperUsers-only — stricter than the per-day
	/// key-usage endpoint, and the gate lives here on the backend, not just in the UI.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/top-users-per-key
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsageTop_users_per_keyGet(const inspectorUsageTop_users_per_keyGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageNode_type_keysGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get node-type -> required secret keys map, aggregated from NodeKeyRequirements on
	/// completed executions in the filter window. Used by the Inspector "Node Type Usage"
	/// CSV export to group node types by the API key they consume.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/node-type-keys
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageNode_type_keysGet(const inspectorUsageNode_type_keysGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageProcessing_timeGetParams
	{
		const std::optional<utility::string_t>& groupBy;
		const std::optional<utility::string_t>& metric;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get processing time breakdown grouped by day, queue, or node type.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/processing-time
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageProcessing_timeGet(const inspectorUsageProcessing_timeGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageQueue_wait_summaryGetParams
	{
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& userId;
		const std::optional<std::vector<utility::string_t>>& userIds;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get queue wait summary with percentiles and per-queue breakdown.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/queue-wait-summary
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorUsageQueue_wait_summaryGet(const inspectorUsageQueue_wait_summaryGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageUser_sparklinesGetParams
	{
		const std::optional<utility::string_t>& userIds;
		const std::optional<int32_t>& days;
	};


	/// <summary>
	/// Get 7-day execution sparkline data for multiple users (batch endpoint).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/user-sparklines
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorUsageUser_sparklinesGet(const inspectorUsageUser_sparklinesGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageSustained_activity_per_dayGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenantNames;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tz;
	};


	/// <summary>
	/// Get daily sustained activity hours for one or more tenants.
	/// Returns a dictionary of tenant name to daily hour entries.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/sustained-activity-per-day
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorUsageSustained_activity_per_dayGet(const inspectorUsageSustained_activity_per_dayGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsageTenant_activity_sparklinesGetParams
	{
		const std::optional<utility::string_t>& tenantNames;
		const std::optional<int32_t>& days;
	};


	/// <summary>
	/// Get 7-day sustained activity sparkline data for multiple tenants (batch endpoint).
	/// Returns a dictionary of tenant name to an array of daily hours (zero-filled, length = days).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage/tenant-activity-sparklines
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsageTenant_activity_sparklinesGet(const inspectorUsageTenant_activity_sparklinesGetParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorValidate_gacPostParams
	{
		const std::shared_ptr<GacValidationRequest>& RequestBody;
	};


	/// <summary>
	/// Validate a GAC (GCP Service Account JSON) credential against configured checks.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/validate-gac
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorValidate_gacPost(const inspectorValidate_gacPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSave_validated_gacPostParams
	{
		const std::shared_ptr<SaveValidatedGacRequest>& RequestBody;
	};


	/// <summary>
	/// Save a GAC credential that has already been validated, persisting both the
	/// value and the validation result to metadata.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/save-validated-gac
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSave_validated_gacPost(const inspectorSave_validated_gacPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorGac_validation_metadataGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Returns persisted GAC validation metadata for a tenant's secrets.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/gac-validation-metadata
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorGac_validation_metadataGet(const inspectorGac_validation_metadataGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorValidate_secretPostParams
	{
		const std::shared_ptr<ValidateSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Validate a secret value against the registered provider probe.
	/// Supports both saved values (omit rawValue) and try-before-save (provide rawValue).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/validate-secret
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorValidate_secretPost(const inspectorValidate_secretPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSave_validated_secretPostParams
	{
		const std::shared_ptr<SaveValidatedSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Save a secret value that has already been validated, persisting both
	/// the value and the validation result atomically.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/save-validated-secret
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSave_validated_secretPost(const inspectorSave_validated_secretPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSecret_validation_metadataGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Returns persisted validation metadata for a tenant's secrets (both GAC and API key types).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/secret-validation-metadata
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void inspectorSecret_validation_metadataGet(const inspectorSecret_validation_metadataGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorPlus_addressingAllowed_providersGetParams
	{
	};


	/// <summary>
	/// Returns the list of SSO providers allowed for plus-address identity switching.
	/// Used by the tenant settings editor to populate the provider dropdown.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/plus-addressing/allowed-providers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorPlus_addressingAllowed_providersGet(const inspectorPlus_addressingAllowed_providersGetParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorMigration_statusGetParams
	{
	};


	/// <summary>
	/// Probe all environments to detect AWS vs GCP by checking response headers.
	/// The `via: 1.1 google` header is injected by GCP load balancers.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/migration-status
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorMigration_statusGet(const inspectorMigration_statusGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorTenant_hostnamesGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Returns the mapped hostnames for a tenant. Used by the Inspector frontend
	/// to construct "Open in Nodey" links. Accepts an optional tenantName parameter
	/// for cross-tenant lookups (magnopus-admin/support viewing other tenants' executions);
	/// defaults to the caller's JWT tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/tenant-hostnames
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorTenant_hostnamesGet(const inspectorTenant_hostnamesGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSecret_definitionsApplicationNamePostParams
	{
		const utility::string_t& applicationName;
		const std::shared_ptr<CreateApplicationSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Creates an application secret definition, registers the associated quota feature
	/// in the Tracking service (if QuotaFeatureName is set), and refreshes the local
	/// quota-feature and key-name caches.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/secret-definitions/{applicationName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorSecret_definitionsApplicationNamePost(const inspectorSecret_definitionsApplicationNamePostParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorSecret_definitionsApplicationNameEnvVarNamePutParams
	{
		const utility::string_t& applicationName;
		const utility::string_t& envVarName;
		const std::shared_ptr<UpdateApplicationSecretRequest>& RequestBody;
	};


	/// <summary>
	/// Updates an application secret definition, registers the associated quota feature
	/// in the Tracking service (if QuotaFeatureName is set), and refreshes the local
	/// quota-feature and key-name caches.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/secret-definitions/{applicationName}/{envVarName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorSecret_definitionsApplicationNameEnvVarNamePut(const inspectorSecret_definitionsApplicationNameEnvVarNamePutParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorApiBase() = default;
};

class IInspectorAuditTrailApiBase : public csp::services::ApiBase
{
public:
	IInspectorAuditTrailApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorAudit_trailGetParams
	{
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& eventType;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& userEmail;
		const std::optional<utility::string_t>& controller;
		const std::optional<utility::string_t>& action;
		const std::optional<utility::string_t>& ipAddress;
		const std::optional<int32_t>& statusCode;
		const std::optional<std::vector<utility::string_t>>& tags;
		const std::optional<bool>& tagsAll;
		const std::optional<int64_t>& from;
		const std::optional<int64_t>& to;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<utility::string_t>& sortBy;
		const std::optional<std::shared_ptr<SortDirection>>& sortDirection;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// Search audit records with optional filters and pagination.
	/// Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/audit-trail
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorAudit_trailGet(const inspectorAudit_trailGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorAudit_trailFilter_optionsGetParams
	{
	};


	/// <summary>
	/// Returns the distinct Controller / Action / tenant / user / status values actually present in
	/// the trail, plus the sortable-column contract, so the viewer's filter dropdowns are derived
	/// from the data rather than hardcoded. Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/audit-trail/filter-options
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorAudit_trailFilter_optionsGet(const inspectorAudit_trailFilter_optionsGetParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorAuditTrailApiBase() = default;
};

class IInspectorBackfillApiBase : public csp::services::ApiBase
{
public:
	IInspectorBackfillApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorBackfillExecutionsPostParams
	{
		const std::shared_ptr<BackfillExecutionsRequest>& RequestBody;
	};


	/// <summary>
	/// Insert (or, with overwrite=true, replace) a batch of reconstructed executions.
	/// Idempotent by ExecutionId. Preserves each item's historical CreatedAt.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/backfill/executions
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBackfillExecutionsPost(const inspectorBackfillExecutionsPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBackfillExecutionsExecutionIdGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Fetch a single (backfilled) execution by ExecutionId — used for verification.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/backfill/executions/{executionId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBackfillExecutionsExecutionIdGet(const inspectorBackfillExecutionsExecutionIdGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorBackfillExecutionsExecutionIdDeleteParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Hard-delete a (backfilled) execution by ExecutionId — used to clean up after a run.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/backfill/executions/{executionId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBackfillExecutionsExecutionIdDelete(const inspectorBackfillExecutionsExecutionIdDeleteParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorBackfillApiBase() = default;
};

class IInspectorBugReportApiBase : public csp::services::ApiBase
{
public:
	IInspectorBugReportApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorBug_reportsPostParams
	{
		const std::shared_ptr<BugReportCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a new bug report. Any authenticated user.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/bug-reports
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorBug_reportsPost(const inspectorBug_reportsPostParams& Params,
										  csp::services::ApiResponseHandlerBase* ResponseHandler,
										  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorBug_reportsGetParams
	{
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& assignedTo;
		const std::optional<bool>& unassigned;
		const std::optional<utility::string_t>& type;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List bug reports with optional filters. Magnopus-admin/magnopus-support only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsGet(const inspectorBug_reportsGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get a single bug report by ID. Magnopus-admin/magnopus-support only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports/{id}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdGet(const inspectorBug_reportsIdGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdStatusPatchParams
	{
		const utility::string_t& id;
		const std::shared_ptr<BugReportStatusUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Update the status of a bug report (Open → Acknowledged → Resolved).
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/bug-reports/{id}/status
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdStatusPatch(const inspectorBug_reportsIdStatusPatchParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdAssignmentPatchParams
	{
		const utility::string_t& id;
		const std::shared_ptr<BugReportAssignRequest>& RequestBody;
	};


	/// <summary>
	/// Assign or unassign a bug report. Null/empty AssignTo = unassign.
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/bug-reports/{id}/assignment
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdAssignmentPatch(const inspectorBug_reportsIdAssignmentPatchParams& Params,
													   csp::services::ApiResponseHandlerBase* ResponseHandler,
													   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorBug_reportsIdScreenshotGetParams
	{
		const utility::string_t& id;
	};


	/// <summary>
	/// Get the screenshot for a bug report. Returns image/jpeg bytes.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/bug-reports/{id}/screenshot
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorBug_reportsIdScreenshotGet(const inspectorBug_reportsIdScreenshotGetParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorBugReportApiBase() = default;
};

class IInspectorExecutionsApiBase : public csp::services::ApiBase
{
public:
	IInspectorExecutionsApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorExecutionsSelf_reportPostParams
	{
		const std::shared_ptr<SelfReportExecutionRequest>& RequestBody;
	};


	/// <summary>
	/// Self-report a completed graph execution. The server stamps UserId and TenantName
	/// from the caller's principal; any matching body fields are ignored.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/executions/self-report
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorExecutionsSelf_reportPost(const inspectorExecutionsSelf_reportPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorExecutionsApiBase() = default;
};

class IInspectorMarketplaceApiBase : public csp::services::ApiBase
{
public:
	IInspectorMarketplaceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorMarketplaceCustomersGetParams
	{
		const std::optional<utility::string_t>& state;
		const std::optional<utility::string_t>& entitlementState;
		const std::optional<utility::string_t>& billingAccountId;
		const std::optional<utility::string_t>& search;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List / search marketplace customers across all tenants, with optional filters and pagination.
	/// Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/marketplace/customers
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorMarketplaceCustomersGet(const inspectorMarketplaceCustomersGetParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorMarketplaceCustomersCustomerIdGetParams
	{
		const utility::string_t& customerId;
	};


	/// <summary>
	/// Get one customer with its entitlements + provisioning outputs. The per-account audit trail
	/// is fetched separately by the frontend from the audit endpoint, filtered by tenant + the
	/// `marketplace` tag. Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/marketplace/customers/{customerId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorMarketplaceCustomersCustomerIdGet(const inspectorMarketplaceCustomersCustomerIdGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorMarketplaceStatsGetParams
	{
		const std::optional<int64_t>& from;
		const std::optional<int64_t>& to;
		const std::optional<utility::string_t>& timezone;
	};


	/// <summary>
	/// Funnel / stuck-state stats: customer counts per onboarding state, plus signups per day over an
	/// optional window. Server-side aggregation — correct under the frontend's infinite scroll, which
	/// only loads one page at a time. Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/marketplace/stats
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorMarketplaceStatsGet(const inspectorMarketplaceStatsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorMarketplaceApiBase() = default;
};

class IInspectorNodeDefinitionApiBase : public csp::services::ApiBase
{
public:
	IInspectorNodeDefinitionApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorNode_definitionsGetParams
	{
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& category;
		const std::optional<utility::string_t>& search;
		const std::optional<utility::string_t>& runtimeId;
		const std::optional<utility::string_t>& provider;
		const std::optional<utility::string_t>& tag;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// List node definitions with optional filters and pagination.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorNode_definitionsGet(const inspectorNode_definitionsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorNode_definitionsPostParams
	{
		const std::shared_ptr<NodeDefinitionCreateRequest>& RequestBody;
	};


	/// <summary>
	/// Create a new node definition (version 1).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/node-definitions
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsPost(const inspectorNode_definitionsPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdGetParams
	{
		const utility::string_t& nodeTypeId;
	};


	/// <summary>
	/// Get a single node definition by its type ID.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdGet(const inspectorNode_definitionsNodeTypeIdGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorNode_definitionsNodeTypeIdPutParams
	{
		const utility::string_t& nodeTypeId;
		const std::shared_ptr<NodeDefinitionUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Update an existing node definition. Creates a new version.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/node-definitions/{nodeTypeId}
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdPut(const inspectorNode_definitionsNodeTypeIdPutParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdStatusPatchParams
	{
		const utility::string_t& nodeTypeId;
		const std::shared_ptr<NodeDefinitionStatusRequest>& RequestBody;
	};


	/// <summary>
	/// Change the status of a node definition (active/draft/deprecated).
	/// </summary>
	/// <remarks>
	/// PATCH /api/v1/inspector/node-definitions/{nodeTypeId}/status
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdStatusPatch(const inspectorNode_definitionsNodeTypeIdStatusPatchParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdHistoryGetParams
	{
		const utility::string_t& nodeTypeId;
	};


	/// <summary>
	/// Get version history for a node definition.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}/history
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdHistoryGet(const inspectorNode_definitionsNodeTypeIdHistoryGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdHistoryVerGetParams
	{
		const utility::string_t& nodeTypeId;
		const int32_t& ver;
	};


	/// <summary>
	/// Get a specific version snapshot of a node definition.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/node-definitions/{nodeTypeId}/history/{ver}
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdHistoryVerGet(const inspectorNode_definitionsNodeTypeIdHistoryVerGetParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorNode_definitionsNodeTypeIdRestoreVerPostParams
	{
		const utility::string_t& nodeTypeId;
		const int32_t& ver;
	};


	/// <summary>
	/// Restore a previous version (creates a new version from the old snapshot).
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/node-definitions/{nodeTypeId}/restore/{ver}
	/// Authorization: magnopus-admin,magnopus-support,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorNode_definitionsNodeTypeIdRestoreVerPost(const inspectorNode_definitionsNodeTypeIdRestoreVerPostParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorNodeDefinitionApiBase() = default;
};

class IInspectorOrganizationApiBase : public csp::services::ApiBase
{
public:
	IInspectorOrganizationApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorOrganizationsGetParams
	{
		const std::optional<utility::string_t>& search;
		const std::optional<int64_t>& modifiedSince;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// List / search organizations across all tenants. Only accessible from the MAG_SUP tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/organizations
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsGet(const inspectorOrganizationsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorOrganizationsPostParams
	{
		const std::shared_ptr<CreateOrganizationRequest>& RequestBody;
	};


	/// <summary>
	/// Create an organization over an existing, unowned tenant, which becomes its administrative tenant.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/organizations
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsPost(const inspectorOrganizationsPostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorOrganizationsOrganizationIdGetParams
	{
		const utility::string_t& organizationId;
	};


	/// <summary>
	/// Read one organization with the tenants it owns.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/organizations/{organizationId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsOrganizationIdGet(const inspectorOrganizationsOrganizationIdGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorOrganizationsOrganizationIdPutParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<RenameOrganizationRequest>& RequestBody;
	};


	/// <summary>
	/// Rename an organization.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/organizations/{organizationId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsOrganizationIdPut(const inspectorOrganizationsOrganizationIdPutParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorOrganizationsOrganizationIdTenantsPostParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<OrganizationTenantRequest>& RequestBody;
	};


	/// <summary>
	/// Bring an existing tenant under this organization.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/organizations/{organizationId}/tenants
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsOrganizationIdTenantsPost(const inspectorOrganizationsOrganizationIdTenantsPostParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorOrganizationsOrganizationIdTenantsTenantNameDeleteParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// Remove a tenant from this organization. Refused for the administrative tenant while others remain.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/organizations/{organizationId}/tenants/{tenantName}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		inspectorOrganizationsOrganizationIdTenantsTenantNameDelete(const inspectorOrganizationsOrganizationIdTenantsTenantNameDeleteParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorOrganizationsOrganizationIdAdministrative_tenantPutParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<OrganizationTenantRequest>& RequestBody;
	};


	/// <summary>
	/// Repoint the organization's administrative tenant at another tenant it already owns.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/organizations/{organizationId}/administrative-tenant
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		inspectorOrganizationsOrganizationIdAdministrative_tenantPut(const inspectorOrganizationsOrganizationIdAdministrative_tenantPutParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorOrganizationsOrganizationIdOwnerPutParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<SetOrganizationOwnerRequest>& RequestBody;
	};


	/// <summary>
	/// Transfer ownership of the organization to another user.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/inspector/organizations/{organizationId}/owner
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorOrganizationsOrganizationIdOwnerPut(const inspectorOrganizationsOrganizationIdOwnerPutParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorOrganizationApiBase() = default;
};

class IInspectorQueueOverrideApiBase : public csp::services::ApiBase
{
public:
	IInspectorQueueOverrideApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorQueue_overridesGetParams
	{
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// List queue overrides. Magnopus admins may pass tenantName to filter
	/// to one tenant, or omit it to list across all tenants; tenant admins are always scoped to
	/// their own tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-overrides
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_overridesGet(const inspectorQueue_overridesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorQueue_overridesPostParams
	{
		const std::shared_ptr<QueueOverrideUpsertRequest>& RequestBody;
	};


	/// <summary>
	/// Create or update a queue override for a (tenant, node type) pair.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/queue-overrides
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_overridesPost(const inspectorQueue_overridesPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct inspectorQueue_overridesDeleteParams
	{
		const std::optional<utility::string_t>& nodeTypeId;
		const std::optional<utility::string_t>& tenantName;
	};


	/// <summary>
	/// Delete a queue override for a (tenant, node type) pair. Tenant is required for Magnopus
	/// admins; tenant admins are forced to their own tenant.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/inspector/queue-overrides
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_overridesDelete(const inspectorQueue_overridesDeleteParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorQueue_overridesCandidate_nodesGetParams
	{
	};


	/// <summary>
	/// List the GPU-accelerated node types available as override candidates (the constrained
	/// picklist for the admin UI). The node catalog is global, so this read is not tenant
	/// scoped — the admin-role gate is the only guard.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/queue-overrides/candidate-nodes
	/// Authorization: admin,magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorQueue_overridesCandidate_nodesGet(const inspectorQueue_overridesCandidate_nodesGetParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorQueueOverrideApiBase() = default;
};

class IInspectorUsageLedgerApiBase : public csp::services::ApiBase
{
public:
	IInspectorUsageLedgerApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorUsage_ledgerRowsGetParams
	{
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& source;
		const std::optional<utility::string_t>& targetMetric;
		const std::optional<utility::string_t>& metricBaseType;
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& tier;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// One page of ledger rows for a window, newest first. All filters are optional except the
	/// window, which is defaulted rather than omitted.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-ledger/rows
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_ledgerRowsGet(const inspectorUsage_ledgerRowsGetParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsage_ledgerTotalsGetParams
	{
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& tenantName;
		const std::optional<utility::string_t>& source;
		const std::optional<utility::string_t>& targetMetric;
		const std::optional<utility::string_t>& metricBaseType;
		const std::optional<utility::string_t>& status;
		const std::optional<utility::string_t>& tier;
	};


	/// <summary>
	/// Period totals for the same window + filters as
	/// M:Olympus.Service.Aggregation.Controllers.InspectorUsageLedgerController.GetRows(System.Nullable{System.DateTimeOffset},System.Nullable{System.DateTimeOffset},System.String,System.String,System.String,System.String,System.String,System.String,System.Nullable{System.Int32},System.Nullable{System.Int32},System.Threading.CancellationToken):
	/// cost and row counts grouped by tenant, by target metric and by status. Paging does not apply — totals always cover the whole window, which is
	/// what makes them reconcilable against an invoice.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-ledger/totals
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_ledgerTotalsGet(const inspectorUsage_ledgerTotalsGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorUsageLedgerApiBase() = default;
};

class IInspectorUsageReportingApiBase : public csp::services::ApiBase
{
public:
	IInspectorUsageReportingApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorUsage_reportingDry_runGetParams
	{
		const std::optional<utility::string_t>& start;
		const std::optional<utility::string_t>& end;
	};


	/// <summary>
	/// Dry-runs the reporter over a window. Both bounds are optional (UTC); defaults to the last hour
	/// (`[now-1h, now)`). Read-only — never reports to Google or advances the watermark.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-reporting/dry-run
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_reportingDry_runGet(const inspectorUsage_reportingDry_runGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsage_reportingRunsGetParams
	{
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// Reporter runs, newest first. The response carries the scheduler's expected tick interval so the
	/// caller can render the runs that are <b>absent</b> — which is the finding a list of what happened
	/// structurally cannot show.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-reporting/runs
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_reportingRunsGet(const inspectorUsage_reportingRunsGetParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsage_reportingRunsRunIdGetParams
	{
		const utility::string_t& runId;
	};


	/// <summary>
	/// One run and every `(tenant, metric, hour)` outcome it produced.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-reporting/runs/{runId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_reportingRunsRunIdGet(const inspectorUsage_reportingRunsRunIdGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsage_reportingTenantsTenantNameBatchesGetParams
	{
		const utility::string_t& tenantName;
		const std::optional<utility::string_t>& from;
		const std::optional<utility::string_t>& to;
		const std::optional<utility::string_t>& state;
		const std::optional<int32_t>& skip;
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// One tenant's reporting outcomes across every run in a window, newest hour first. Both bounds are
	/// optional (UTC) and default to the last 24 hours, which is the span the question is usually asked
	/// over: "I used the product an hour ago — is my tenant's data reported?"
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/usage-reporting/tenants/{tenantName}/batches
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_reportingTenantsTenantNameBatchesGet(const inspectorUsage_reportingTenantsTenantNameBatchesGetParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct inspectorUsage_reportingBackfillPostParams
	{
		const std::optional<utility::string_t>& start;
		const std::optional<utility::string_t>& end;
	};


	/// <summary>
	/// Re-drives the reporter over a named window (aug-12 cleanup §3.7). <b>The only write on this
	/// controller</b>, and the only one that talks to Google, which is why it is the only one that is
	/// `[Audited]`.
	/// This exists for hours that left nothing to sweep. Before the durable claim state, a failed
	/// report hard-deleted its claim, so an hour that failed and then aged out of the lookback is
	/// invisible to every automatic path — the ledger rows still exist, but nothing points at them. The
	/// recovery sweep can re-drive a `Failed` or `Held` record; only naming the window
	/// recovers an hour with no record at all.
	/// Safe to run repeatedly, and safe while the scheduler is running: the claim guard skips anything
	/// already reported, and the operation ids are deterministic so a re-send dedups at Google rather
	/// than double-billing. It is <b>not</b> safe to assume it is cheap — every hour in the window is
	/// an analytics query.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/inspector/usage-reporting/backfill
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void inspectorUsage_reportingBackfillPost(const inspectorUsage_reportingBackfillPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorUsageReportingApiBase() = default;
};

class IInspectorWorkerRuntimeApiBase : public csp::services::ApiBase
{
public:
	IInspectorWorkerRuntimeApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct inspectorWorker_runtimesGetParams
	{
	};


	/// <summary>
	/// List all active worker runtimes.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/inspector/worker-runtimes
	/// Authorization: magnopus-admin,magnopus-nodey-developer
	/// </remarks>
	virtual void inspectorWorker_runtimesGet(const inspectorWorker_runtimesGetParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IInspectorWorkerRuntimeApiBase() = default;
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

class IMarketplaceApiBase : public csp::services::ApiBase
{
public:
	IMarketplaceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct marketplaceSignupGetParams
	{
	};


	/// <summary>
	/// The marketplace <em>Sign up URL</em> landing endpoint. Verifies the marketplace JWT (the
	/// `x-gcp-marketplace-token` value), enforces single-use, resolves or creates the customer, and
	/// redirects to the onboarding wizard. Accepts both <strong>POST</strong> — how Google Marketplace delivers
	/// the JWT to the registered Sign up URL — and <strong>GET</strong> (the local onboarding harness). The token
	/// is read from whichever transport carries it: Google POSTs it as an `application/x-www-form-urlencoded`<strong>body
	/// field</strong>`x-gcp-marketplace-token`; the local harness sends it as the matching <strong>header</strong>; a query-string fallback is also
	/// accepted. The distinct <em>Login URL</em> (returning users) is the static onboarding landing, not this endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/signup
	/// Authorization: Anonymous
	/// </remarks>
	virtual void marketplaceSignupGet(const marketplaceSignupGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct marketplaceSignupPostParams
	{
	};


	/// <summary>
	/// The marketplace <em>Sign up URL</em> landing endpoint. Verifies the marketplace JWT (the
	/// `x-gcp-marketplace-token` value), enforces single-use, resolves or creates the customer, and
	/// redirects to the onboarding wizard. Accepts both <strong>POST</strong> — how Google Marketplace delivers
	/// the JWT to the registered Sign up URL — and <strong>GET</strong> (the local onboarding harness). The token
	/// is read from whichever transport carries it: Google POSTs it as an `application/x-www-form-urlencoded`<strong>body
	/// field</strong>`x-gcp-marketplace-token`; the local harness sends it as the matching <strong>header</strong>; a query-string fallback is also
	/// accepted. The distinct <em>Login URL</em> (returning users) is the static onboarding landing, not this endpoint.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/signup
	/// Authorization: Anonymous
	/// </remarks>
	virtual void marketplaceSignupPost(const marketplaceSignupPostParams& Params,
									   csp::services::ApiResponseHandlerBase* ResponseHandler,
									   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceOnboardingDetailsPostParams
	{
		const std::shared_ptr<OnboardingDetailsRequest>& RequestBody;
	};


	/// <summary>
	/// Onboarding wizard step "name your workspace": validates the company/project URL fragments, checks
	/// availability, and advances the customer. Gated by the onboarding session token (token 2) in the
	/// `x-onboarding-session-token` header.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/onboarding/details
	/// Authorization: Anonymous
	/// </remarks>
	virtual void marketplaceOnboardingDetailsPost(const marketplaceOnboardingDetailsPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceOnboardingAvailabilityGetParams
	{
		const std::optional<utility::string_t>& company;
		const std::optional<utility::string_t>& project;
	};


	/// <summary>
	/// A live availability check for a candidate workspace name. A well-formed query always returns 200 — an
	/// invalid or taken name is reported in the body. Gated by the onboarding session token (token 2).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/onboarding/availability
	/// Authorization: Anonymous
	/// </remarks>
	virtual void marketplaceOnboardingAvailabilityGet(const marketplaceOnboardingAvailabilityGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceOnboardingCallbackPostParams
	{
		const std::shared_ptr<OnboardingCallbackRequest>& RequestBody;
	};


	/// <summary>
	/// Onboarding wizard SSO return: exchanges the Google authorization code for a verified identity,
	/// asserts it matches the identity that initiated signup, and continues the bootstrap (create tenant +
	/// issue session). Gated by the onboarding session token (token 2) in the `x-onboarding-session-token`
	/// header.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/onboarding/callback
	/// Authorization: Anonymous
	/// </remarks>
	virtual void marketplaceOnboardingCallbackPost(const marketplaceOnboardingCallbackPostParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceProvisioningPreparePostParams
	{
		const std::shared_ptr<OnboardingProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// Provisioning <em>prepare</em> (§3 step 5, phase 1 / consent-step-plan §3.4): creates the per-customer
	/// service account + JSON key and returns the consent step the customer must complete — granting that SA
	/// access on their project — before
	/// M:Magnopus.Logic.GoogleMarketplace.Controllers.MarketplaceController.Provision(Magnopus.Logic.GoogleMarketplace.Dtos.OnboardingProvisionRequest,System.Threading.CancellationToken)
	/// creates the bucket. Returns either a redirect to Google's hosted Service Account Authorization page or the built-in fallback form. No bucket
	/// is created and no billing starts. Authenticated normally; tenant taken from the session. Idempotent.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/provisioning/prepare
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void marketplaceProvisioningPreparePost(const marketplaceProvisioningPreparePostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceProvisioningPostParams
	{
		const std::shared_ptr<OnboardingProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// In-tenant provisioning <em>continue</em> (§3 step 5, phase 2 / consent-step-plan §3.4): runs after the
	/// customer has granted consent. Creates the labeled bucket in the customer's GCP project <em>authenticating
	/// as the per-customer service account</em>, then approves the entitlement (billing starts). Authenticated
	/// normally — the caller's tenant is taken from their session, so an admin can only provision their own
	/// workspace. Idempotent: re-running for an already-provisioned tenant returns the same outputs. A
	/// permission-denied bucket create is returned as a <strong>200</strong> with onboarding state
	/// `BlockedOrgPolicy` (resumable), not an error.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/provisioning
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void marketplaceProvisioningPost(const marketplaceProvisioningPostParams& Params,
											 csp::services::ApiResponseHandlerBase* ResponseHandler,
											 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceOnboardingStateGetParams
	{
	};


	/// <summary>
	/// The authenticated onboarding-state read (consent-step-plan §3.7): lets the wizard resume a cold re-entry
	/// at the customer's real step rather than assuming completion. Read-only — never kicks off cloud calls, safe
	/// to poll. Scoped to the caller's own tenant (resolved from the principal; no tenant route param). For a
	/// non-marketplace tenant it returns a benign marker rather than 404.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/onboarding/state
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void marketplaceOnboardingStateGet(const marketplaceOnboardingStateGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAppsGetParams
	{
	};


	/// <summary>
	/// The tenant's app-launcher state for the MagGyver Apps page: one status-aware entry per product
	/// (Spaces / Nodey). Readable by <em>any</em> authenticated user — it is sanitized (no certificate ARNs /
	/// change ids) and scoped to the caller's own tenant (resolved from the principal; there is no tenant
	/// route param, so a user can never read another tenant's apps). Reads stored state only — it never kicks
	/// off cloud calls — so it is safe to poll. Per-app readiness comes from the tenant's live typed hostnames
	/// when present, otherwise falls back to a coarse reading of the marketplace onboarding state.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/apps
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void marketplaceAppsGet(const marketplaceAppsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMarketplaceApiBase() = default;
};

class IMarketplaceAdminApiBase : public csp::services::ApiBase
{
public:
	IMarketplaceAdminApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct marketplaceAdminProcurement_checkGetParams
	{
		const std::optional<bool>& includeMatches;
	};


	/// <summary>
	/// Checks our entitlement records against Procurement for <b>every</b> procurement account we hold a marketplace
	/// customer for, and reports each entitlement as a match or a mismatch with both sides' state, plan and update
	/// time. Synthetic `TEST-` accounts are counted as skipped and never sent to Procurement.
	/// <b>Read-only and report-only.</b> It corrects nothing: a dropped Pub/Sub event and a stale read look
	/// identical from here, so what to do about a mismatch is the operator's call. Not feature-flag gated (see the
	/// class remarks): it fabricates and destroys nothing, and a production estate is exactly where a missed
	/// event matters. Superuser-only, because it calls Google as the partner service account.
	/// <b>Audited although it is a GET</b> (`IncludeReads`): every run reads every customer's billing state
	/// from Google, so who ran it is worth keeping. Synchronous and sequential, capped at
	/// Magnopus.Logic.GoogleMarketplace.Logic.MarketplaceProcurementCheckLogic.MaxAccountsPerRun accounts; `truncated` says the cap
	/// was hit. A failed Procurement read fails that account only.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/admin/procurement-check
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminProcurement_checkGet(const marketplaceAdminProcurement_checkGetParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminAccountsAccountIdProcurement_checkGetParams
	{
		const utility::string_t& accountId;
		const std::optional<bool>& includeMatches;
	};


	/// <summary>
	/// Checks one procurement account's entitlements against Procurement: the single-account form of
	/// M:Magnopus.Logic.GoogleMarketplace.Controllers.MarketplaceAdminController.CheckAllAgainstProcurement(System.Boolean,System.Threading.CancellationToken),
	/// with the same controls. A `TEST-` account returns a skipped result. An account we hold no customer for is still read from Google, and every
	/// entitlement it has is then reported as not in our records.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/marketplace/admin/accounts/{accountId}/procurement-check
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminAccountsAccountIdProcurement_checkGet(const marketplaceAdminAccountsAccountIdProcurement_checkGetParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminOrganizationsBackfillPostParams
	{
		const std::optional<int32_t>& limit;
	};


	/// <summary>
	/// Gives every marketplace customer that predates organizations the one its billing now resolves
	/// through. One shot, idempotent, and safe to re-run: the work list is "customers with no organization",
	/// so a second run over a swept estate does nothing.
	/// <b>Not</b> feature-flag gated, and deliberately so. It fabricates nothing and destroys nothing — it
	/// creates the organization the onboarding path would have created had it existed at the time — and it
	/// is a production repair action: a customer with no organization keeps billing (the resolver falls back
	/// to its own tenant) but cannot yet own a second tenant, which is the whole point of the effort.
	/// Superuser-only and audited.
	/// A `skipped` count is normal rather than a failure: a customer still mid-onboarding has no
	/// administrative tenant, so it cannot have an organization, and it gets one when its tenant is created.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/organizations/backfill
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminOrganizationsBackfillPost(const marketplaceAdminOrganizationsBackfillPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminBootstrapPostParams
	{
		const std::shared_ptr<AdminBootstrapRequest>& RequestBody;
	};


	/// <summary>
	/// Fabricates a customer + ACTIVE entitlement and returns the onboarding session token (token 2) + wizard URL
	/// so the operator can drive the REAL wizard (name → SSO → provisioning). Returns 404 when the bootstrap
	/// feature flag is off.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/bootstrap
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminBootstrapPost(const marketplaceAdminBootstrapPostParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminBootstrap_fullPostParams
	{
		const std::shared_ptr<AdminBootstrapRequest>& RequestBody;
	};


	/// <summary>
	/// One-shot: fabricates the customer, creates the tenant + admin directly (no SSO), inserts the ACTIVE
	/// entitlement, and returns the new admin session (token 3) so the operator jumps straight to
	/// `provisioning/prepare`. Requires `adminEmail` + `companyUrlFragment`. 404 when the flag is off.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/bootstrap-full
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminBootstrap_fullPost(const marketplaceAdminBootstrap_fullPostParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminInsert_entitlementPostParams
	{
		const std::shared_ptr<AdminInsertEntitlementRequest>& RequestBody;
	};


	/// <summary>
	/// Inserts an additional ACTIVE synthetic entitlement for an existing bootstrapped customer (to test the
	/// "customer exists, entitlement arrives later" case). 404 when the flag is off.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/insert-entitlement
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminInsert_entitlementPost(const marketplaceAdminInsert_entitlementPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminCustomerCustomerIdDeleteParams
	{
		const utility::string_t& customerId;
	};


	/// <summary>
	/// Tears down a synthetic bootstrapped customer: releases the real GCP resources, deletes the tenant + admin,
	/// and hard-deletes the customer + entitlement rows (bypassing the `HasEverActivated` guard, which would
	/// otherwise refuse to delete a provisioned tenant). Refuses non-bootstrap customers. 404 when the flag is off.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/marketplace/admin/customer/{customerId}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminCustomerCustomerIdDelete(const marketplaceAdminCustomerCustomerIdDeleteParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminAccountsAccountIdResetPostParams
	{
		const utility::string_t& accountId;
	};


	/// <summary>
	/// Resets a TEST procurement account: cancels its entitlements and returns it to pending-approval so QA can
	/// re-run the first-time buyer sign-up flow against the same test billing account. Unlike the bootstrap
	/// actions above, this calls the REAL Partner Procurement API and is NOT feature-flag gated —
	/// Magnopus.Backend.Security.Principal.RolesConstants.MagnopusSuperUsers is the only guard, and the call only succeeds where the
	/// marketplace SA has been granted billing-admin on the account (see account-entitlement-testing-flow.md).
	/// Reset fires no Pub/Sub, so the account's local marketplace records are purged here instead.
	/// For a marketplace-created tenant, the reset also releases the tenant's app URLs, CDN leaf and service
	/// account, after the Procurement reset succeeds. For any other tenant it skips that, and the message says
	/// why. Either way the tenant, its bucket and its organization are kept.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/accounts/{accountId}/reset
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminAccountsAccountIdResetPost(const marketplaceAdminAccountsAccountIdResetPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminAccountsAccountIdReset_and_delete_tenantPostParams
	{
		const utility::string_t& accountId;
		const std::shared_ptr<AdminResetAndDeleteTenantRequest>& RequestBody;
	};


	/// <summary>
	/// The most extreme QA action: de-provisions the tenant's app URLs, releases its GCP resources, deletes the
	/// tenant + admin, purges the local marketplace rows, and — for a real procurement account — resets the
	/// account. Returns the environment to a genuinely clean state. A plain reset releases an eligible tenant's
	/// URLs, CDN leaf and service account too, but keeps the tenant; this deletes it.
	/// <b>Feature-flag gated</b> (unlike reset/reject): `AdminBootstrapEnabled` is off everywhere
	/// except o2gcmp, and that flag — not the eligibility predicate — is what keeps a tenant-deleting endpoint out
	/// of production. Additionally refuses anything that is not safely disposable: a synthetic `TEST-`
	/// customer whose entitlements are all test-bootstrap, or a real customer whose tenant carries marketplace
	/// provenance.
	/// <b>Not repeatable.</b> Reset and reject can be safely re-run; this cannot, because the tenant is gone after
	/// the first call. A partial failure is reported per step in the response rather than as a bare error.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/accounts/{accountId}/reset-and-delete-tenant
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		marketplaceAdminAccountsAccountIdReset_and_delete_tenantPost(const marketplaceAdminAccountsAccountIdReset_and_delete_tenantPostParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminCustomerCustomerIdLockPostParams
	{
		const utility::string_t& customerId;
		const std::optional<utility::string_t>& reason;
	};


	/// <summary>
	/// Locks a marketplace customer's tenant: sign-in is refused, but the tenant, its data and its provisioned app
	/// URLs are all retained. The reversible counterpart to
	/// M:Magnopus.Logic.GoogleMarketplace.Controllers.MarketplaceAdminController.ResetAccountAndDeleteTenant(System.String,Magnopus.Logic.GoogleMarketplace.Dtos.AdminResetAndDeleteTenantRequest,System.Threading.CancellationToken),
	/// and the manual pair of the lock applied automatically when an entitlement is cancelled. <b>Not</b> feature-flag gated, unlike the teardown:
	/// this destroys nothing and is fully reversible, and an operator may legitimately need it in production — e.g. to suspend a customer whose
	/// cancellation event never arrived. Superuser-only and audited.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/customer/{customerId}/lock
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminCustomerCustomerIdLockPost(const marketplaceAdminCustomerCustomerIdLockPostParams& Params,
															csp::services::ApiResponseHandlerBase* ResponseHandler,
															csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminCustomerCustomerIdUnlockPostParams
	{
		const utility::string_t& customerId;
		const std::optional<utility::string_t>& reason;
	};


	/// <summary>
	/// Unlocks a marketplace customer's tenant, restoring sign-in.
	/// This is the escape hatch that makes locking safe to apply automatically. The event-driven unlock only fires
	/// on a Procurement cancellation-reverted notification; a tenant locked in error — or by a cancellation the
	/// customer resolved outside Procurement — would otherwise stay locked out of a fully intact workspace with no
	/// way back.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/customer/{customerId}/unlock
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminCustomerCustomerIdUnlockPost(const marketplaceAdminCustomerCustomerIdUnlockPostParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminAccountsAccountIdRejectPostParams
	{
		const utility::string_t& accountId;
		const std::optional<utility::string_t>& reason;
	};


	/// <summary>
	/// Rejects a TEST procurement account's `signup` approval (repeatable — preferred over approve when
	/// testing the first-time sign-up flow). Same controls as
	/// M:Magnopus.Logic.GoogleMarketplace.Controllers.MarketplaceAdminController.ResetAccount(System.String,System.Threading.CancellationToken): real
	/// Procurement, MagnopusSuperUsers only, ungated. An optional reason is forwarded to Procurement.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/marketplace/admin/accounts/{accountId}/reject
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void marketplaceAdminAccountsAccountIdRejectPost(const marketplaceAdminAccountsAccountIdRejectPostParams& Params,
															 csp::services::ApiResponseHandlerBase* ResponseHandler,
															 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct marketplaceAdminTenantsTenantNameHostnamesHostnameDeleteParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& hostname;
	};


	/// <summary>
	/// De-provisions <b>one</b> tenant hostname across every service that owns part of it, dispatching on the
	/// serving type recorded on the tenant.
	/// The MagGyver Hostnames tab must use this rather than the User service's own delete route. That route owns
	/// only the Route 53 half of a host — which is all of an `oko` host, but for `nodey-next` leaves the
	/// per-host Certificate-Manager certificate and cert-map entry in place, reported as a clean success because
	/// the DNS half genuinely succeeded. Only this service can reach those, so only this route can release a
	/// nodey-next host completely. For `oko` it delegates straight back over the same S2S seam, so that
	/// behaviour is unchanged.
	/// <b>Not</b> feature-flag gated (see the class remarks): superuser-only and `[Audited]`. Idempotent — a
	/// hostname the tenant does not record returns 200 with `released: true` and nothing released, so a retry
	/// after a partial failure converges.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/marketplace/admin/tenants/{tenantName}/hostnames/{hostname}
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void
		marketplaceAdminTenantsTenantNameHostnamesHostnameDelete(const marketplaceAdminTenantsTenantNameHostnamesHostnameDeleteParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMarketplaceAdminApiBase() = default;
};

class IMcpStateApiBase : public csp::services::ApiBase
{
public:
	IMcpStateApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct mcp_oauthStateCollectionKeyGetParams
	{
		const utility::string_t& collection;
		const utility::string_t& key;
	};


	/// <summary>
	/// Reads the entry stored at a collection and key.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/mcp-oauth/state/{collection}/{key}
	/// An expired entry is treated as absent. The response carries the same shape the write accepts, so
	/// the entry's expiry can be reconstructed without a second call.
	/// </remarks>
	virtual void mcp_oauthStateCollectionKeyGet(const mcp_oauthStateCollectionKeyGetParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct mcp_oauthStateCollectionKeyPutParams
	{
		const utility::string_t& collection;
		const utility::string_t& key;
		const std::shared_ptr<McpStateWriteRequest>& RequestBody;
	};


	/// <summary>
	/// Stores an entry at a collection and key, replacing whatever was there.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/mcp-oauth/state/{collection}/{key}
	/// Idempotent: writing the same key twice replaces the entry rather than creating a second one.
	/// </remarks>
	virtual void mcp_oauthStateCollectionKeyPut(const mcp_oauthStateCollectionKeyPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct mcp_oauthStateCollectionKeyDeleteParams
	{
		const utility::string_t& collection;
		const utility::string_t& key;
	};


	/// <summary>
	/// Removes the entry stored at a collection and key.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/mcp-oauth/state/{collection}/{key}
	/// Removing an entry that is not there succeeds. The caller's intent is that the key is gone, and it
	/// already is.
	/// </remarks>
	virtual void mcp_oauthStateCollectionKeyDelete(const mcp_oauthStateCollectionKeyDeleteParams& Params,
												   csp::services::ApiResponseHandlerBase* ResponseHandler,
												   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMcpStateApiBase() = default;
};

class IMusubiGraphApiBase : public csp::services::ApiBase
{
public:
	IMusubiGraphApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct musubiExecute_graphPostParams
	{
		const std::shared_ptr<GraphExecutionRequest>& RequestBody;
	};


	/// <summary>
	/// Submits a graph for execution via Musubi pipeline.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void musubiExecute_graphPost(const musubiExecute_graphPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdStatusGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Gets the status of a graph execution
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/execute-graph/{executionId}/status
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdStatusGet(const musubiExecute_graphExecutionIdStatusGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct musubiExecute_graphExecutionIdStatusPostParams
	{
		const utility::string_t& executionId;
		const std::shared_ptr<ExecutionStatusUpdateRequest>& RequestBody;
	};


	/// <summary>
	/// Updates the status of a graph execution. Called by the Graph Execution Runner.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph/{executionId}/status
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdStatusPost(const musubiExecute_graphExecutionIdStatusPostParams& Params,
														  csp::services::ApiResponseHandlerBase* ResponseHandler,
														  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdGraph_resultGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Gets the original graph definition and current execution state for loading in Nodey.
	/// Returns the graph JSON (for loadGraph()) and the state (for processing completed nodes / resuming polling).
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/execute-graph/{executionId}/graph-result
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdGraph_resultGet(const musubiExecute_graphExecutionIdGraph_resultGetParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdNode_inputNodeIdGetParams
	{
		const utility::string_t& executionId;
		const utility::string_t& nodeId;
	};


	/// <summary>
	/// Reads the staged per-node input for a BYOGPU worker that cannot reach the execution bucket.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/execute-graph/{executionId}/node-input/{nodeId}
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdNode_inputNodeIdGet(const musubiExecute_graphExecutionIdNode_inputNodeIdGetParams& Params,
																   csp::services::ApiResponseHandlerBase* ResponseHandler,
																   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdGraphGetParams
	{
		const utility::string_t& executionId;
	};


	/// <summary>
	/// Reads the URL-normalized execution graph (graph_processed.json) for a BYOGPU worker.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/execute-graph/{executionId}/graph
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdGraphGet(const musubiExecute_graphExecutionIdGraphGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdNode_completeNodeIdPostParams
	{
		const utility::string_t& executionId;
		const utility::string_t& nodeId;
		const std::shared_ptr<NodeCompleteRequest>& RequestBody;
	};


	/// <summary>
	/// Writes a node's terminal success state in one call: output, then optional metadata and
	/// billing, then the _complete marker last. Idempotent, so a client may safely retry.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph/{executionId}/node-complete/{nodeId}
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdNode_completeNodeIdPost(const musubiExecute_graphExecutionIdNode_completeNodeIdPostParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdNode_errorNodeIdPostParams
	{
		const utility::string_t& executionId;
		const utility::string_t& nodeId;
		const std::shared_ptr<NodeErrorRequest>& RequestBody;
	};


	/// <summary>
	/// Writes a node's terminal failure state: optional metadata first, then the _error marker last.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph/{executionId}/node-error/{nodeId}
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdNode_errorNodeIdPost(const musubiExecute_graphExecutionIdNode_errorNodeIdPostParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiExecute_graphExecutionIdLogsPostParams
	{
		const utility::string_t& executionId;
		const std::shared_ptr<NodeLogsRequest>& RequestBody;
	};


	/// <summary>
	/// Accepts one batched log flush from a BYOGPU worker. Called once per emitter per flush
	/// interval (5s by default), carrying every buffered entry, not once per line.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/musubi/execute-graph/{executionId}/logs
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiExecute_graphExecutionIdLogsPost(const musubiExecute_graphExecutionIdLogsPostParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct musubiChaosQueueNameActiveGetParams
	{
		const utility::string_t& queueName;
	};


	/// <summary>
	/// Checks if the chaos monkey is still active for a given queue.
	/// Called once per graph execution by the runner to verify stale signals.
	/// Uses the same scoped callback JWT as UpdateExecutionStatus.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/musubi/chaos/{queueName}/active
	/// Authorization: graph-status-update
	/// </remarks>
	virtual void musubiChaosQueueNameActiveGet(const musubiChaosQueueNameActiveGetParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMusubiGraphApiBase() = default;
};

class IMyOrganizationApiBase : public csp::services::ApiBase
{
public:
	IMyOrganizationApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct my_organizationGetParams
	{
	};


	/// <summary>
	/// The organization the caller's current tenant administers, with the tenants it owns and any
	/// in-flight spin-ups.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/my-organization
	/// <b>404 is the ordinary answer, not an error.</b> Almost every tenant administers no organization —
	///             only a customer with a subscription has one at all, and only its <i>administrative</i> tenant
	///             administers it. The client uses this to decide whether to show the section, which is exactly why
	///             the question has to be asked of the server: "is my tenant the administrative one?" is data, and
	///             nothing in the JWT can answer it.
	/// </remarks>
	virtual void my_organizationGet(const my_organizationGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct my_organizationPutParams
	{
		const std::shared_ptr<RenameMyOrganizationRequest>& RequestBody;
	};


	/// <summary>
	/// Rename the organization the caller's current tenant administers.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/my-organization
	///
	/// <b>The same call the operator's surface makes</b> — `InspectorOrganizationController`'s
	///             `RenameOrganization` reaches the identical `IOrganizationLogic.Rename`. What differs is
	///             which principal may make it, and for which organization. ⚠ Do not relax that controller to serve
	///             this audience instead: it also carries `Search`, which returns every organization in the
	///             estate.
	/// <b>Why the customer needs this at all.</b> A marketplace signup names the organization by code —
	///             the company URL fragment, falling back to the tenant name — so a real customer's organization may
	///             currently be called something they did not choose. ⚠ Nothing renames it back: the marketplace
	///             processor calls `Create`, `SetCompanyUrlFragment`, `AssociateTenant` and
	///             `SetAdministrativeTenant`, and `Rename` has exactly two callers, both of them a human
	///             asking for it. Verified 2026-09-28; worth re-checking if the processor grows an update path.
	/// ⚠ <b>Every refusal is 403, including the case where the caller administers nothing.</b> The GET
	///             answers 404 there because answering "do I administer one?" is its whole job. A write has no such
	///             job: there is no resource named in the route to be absent, and telling an unauthorized caller
	///             whether their tenant administers something is the disclosure
	///             M:Magnopus.Logic.Organization.Logic.IOrganizationAccessPolicy.Evaluate(System.String) already refuses to make.
	/// </remarks>
	virtual void my_organizationPut(const my_organizationPutParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IMyOrganizationApiBase() = default;
};

class INodeDefinitionApiBase : public csp::services::ApiBase
{
public:
	INodeDefinitionApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct node_definitionsFlatGetParams
	{
	};


	/// <summary>
	/// Get all active node definitions as a flat map keyed by node type ID.
	/// Replaces Nodey's filesystem-based /nodes endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/node-definitions/flat
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void node_definitionsFlatGet(const node_definitionsFlatGetParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct node_definitionsNestedGetParams
	{
	};


	/// <summary>
	/// Get all active node definitions as a nested map grouped by category.
	/// Replaces Nodey's filesystem-based /nested_nodes endpoint.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/node-definitions/nested
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void node_definitionsNestedGet(const node_definitionsNestedGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~INodeDefinitionApiBase() = default;
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

class IOrganizationTenantApiBase : public csp::services::ApiBase
{
public:
	IOrganizationTenantApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct organizationsOrganizationIdTenantsSpin_upPostParams
	{
		const utility::string_t& organizationId;
		const std::shared_ptr<OrgTenantSpinUpRequest>& RequestBody;
	};


	/// <summary>
	/// Creates a further tenant under this organization and starts provisioning it.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/tenants/spin-up
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsSpin_upPost(const organizationsOrganizationIdTenantsSpin_upPostParams& Params,
															   csp::services::ApiResponseHandlerBase* ResponseHandler,
															   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdTenantsCheck_addressGetParams
	{
		const utility::string_t& organizationId;
		const std::optional<utility::string_t>& projectUrlFragment;
	};


	/// <summary>
	/// Whether a proposed workspace address is free. Read-only — nothing is created.
	///
	/// ⚠ <b>A refusal is a 200 carrying `available: false`, not a 4xx.</b> This is a probe the
	/// stepper runs on step 1, before it has collected enough to attempt anything, and a probe that
	/// answered 409 would be indistinguishable in the browser from the spin-up itself failing. The
	/// 4xx codes stay on
	/// M:Olympus.Service.Aggregation.Controllers.OrganizationTenantController.SpinUp(System.String,Magnopus.Logic.OrgOnboarding.Dtos.OrgTenantSpinUpRequest,System.Threading.CancellationToken),
	/// where they describe an attempt that was actually made. It exists because the stepper used to discover a taken address by creating a tenant and
	/// reading the failure — and the one refusal that lands <i>after</i> the tenant exists left the address held for ever by a workspace the customer
	/// never saw. <b>G77.</b>
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/tenants/check-address
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsCheck_addressGet(const organizationsOrganizationIdTenantsCheck_addressGetParams& Params,
																	csp::services::ApiResponseHandlerBase* ResponseHandler,
																	csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdTenantsTenantIdPreparePostParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& tenantId;
		const std::shared_ptr<OrgTenantProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// The consent step: ensures the per-tenant service account and returns where to grant it access.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/tenants/{tenantId}/prepare
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsTenantIdPreparePost(const organizationsOrganizationIdTenantsTenantIdPreparePostParams& Params,
																	   csp::services::ApiResponseHandlerBase* ResponseHandler,
																	   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdTenantsTenantIdProvisionPostParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& tenantId;
		const std::shared_ptr<OrgTenantProvisionRequest>& RequestBody;
	};


	/// <summary>
	/// The back half: creates the bucket, publishes the tenant secrets, and queues the CDN work.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/organizations/{organizationId}/tenants/{tenantId}/provision
	/// A consent block comes back as <b>success</b> with a `BlockedOrgPolicy` state, not as a failure —
	/// the grant is a human step the caller can go and complete, then call this again.
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsTenantIdProvisionPost(const organizationsOrganizationIdTenantsTenantIdProvisionPostParams& Params,
																		 csp::services::ApiResponseHandlerBase* ResponseHandler,
																		 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdTenantsTenantIdStatusGetParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& tenantId;
		const std::optional<bool>& includeHistory;
	};


	/// <summary>
	/// Where a spin-up has got to. The endpoint the stepper polls.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/organizations/{organizationId}/tenants/{tenantId}/status
	/// !AUTHORIZATION REQUIREMENTS NOT SET!
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsTenantIdStatusGet(const organizationsOrganizationIdTenantsTenantIdStatusGetParams& Params,
																	 csp::services::ApiResponseHandlerBase* ResponseHandler,
																	 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct organizationsOrganizationIdTenantsTenantIdDeleteParams
	{
		const utility::string_t& organizationId;
		const utility::string_t& tenantId;
	};


	/// <summary>
	/// Tears down one of this organization's workspaces: releases its URLs and its service account, and
	/// deletes the tenant, its admin and its data. <b>Immediate and irreversible</b> (D32).
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/organizations/{organizationId}/tenants/{tenantId}
	/// <b>One endpoint, two principals, identical semantics.</b> A Magnopus operator reaches it from the
	///              Organizations section and an organization's own admin from `my-organization`; the gate
	///              already distinguishes them and nothing below it needs to. That is what collapses Lane F's three
	///              customer-facing stories onto one verb.
	///
	///
	/// ⚠ <b>The refusal rule is not the gate and does not overlap with it.</b> The gate answers "may this
	///              caller act on this organization, and does it own this tenant" — a tenant belonging to someone else
	///              is a <b>403 from `OwnsTenant`</b>, before the logic is reached at all. The rule answers "may
	///              this tenant be torn down by anyone" — the administrative tenant and a marketplace-provenance
	///              tenant are <b>403s from Magnopus.Logic.OrgOnboarding.Logic.OrgTenantTeardownEligibility</b>. The two must not be
	///              confusable, which is why `OrganizationTenantControllerTests` asserts each one separately.
	/// <b>On the audit prefix.</b> This action is recorded by the controller's existing
	///              `[Audited(EventTypePrefix = "OrgTenantSpinUp")]` as `OrgTenantSpinUp.TearDown`, and it
	///              deliberately does <b>not</b> carry a method-level `[Audited]` of its own. An
	///              `AuditedAttribute` is an `IFilterFactory`, so a second one at method scope adds a second
	///              filter rather than replacing the first — two rows for one destructive call, which is a worse
	///              outcome than a prefix that reads as the section it lives in. The detail lives on the
	///              `OrgOnboarding.TenantTornDown` row the logic writes, which is also the row that names the
	///              retained bucket.
	/// </remarks>
	virtual void organizationsOrganizationIdTenantsTenantIdDelete(const organizationsOrganizationIdTenantsTenantIdDeleteParams& Params,
																  csp::services::ApiResponseHandlerBase* ResponseHandler,
																  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IOrganizationTenantApiBase() = default;
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

class ISequenceApiBase : public csp::services::ApiBase
{
public:
	ISequenceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct sequencesGetParams
	{
		const std::optional<std::vector<utility::string_t>>& Keys;
		const std::optional<utility::string_t>& KeyLikeRegex;
		const std::optional<utility::string_t>& ReferenceType;
		const std::optional<std::vector<utility::string_t>>& ReferenceIds;
		const std::optional<std::vector<utility::string_t>>& Items;
		const std::optional<std::map<utility::string_t, utility::string_t>>& Metadata;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Finds all matching sequences.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences
	/// Requests may leverage any of the available search criteria to find sequences. The one
	/// caveat is that if you are searching by reference then you must specify both a `ReferenceType`
	/// (e.g. the literal string "GroupId") and at least one `ReferenceId` (e.g. the Id of the group).
	/// If multiple criteria are supplied (e.g. `KeyLikeRegex`, `Metadata`, and `ReferenceType` +
	/// `ReferenceIds`), this endpoint will return sequences that match ALL specified criteria.
	///
	/// This search is paginated. To page through the search results, call this endpoint multiple
	/// times with the same search criteria and different `Skip` and `Limit` values. If no pagination is
	/// specified, it will default to the first 10 results.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences?Keys=key1&Keys=key2
	///
	///     GET /oly-aggregations/api/v1/sequences?KeyLikeRegEx=key%5Cd%2B
	///
	///     GET /oly-aggregations/api/v1/sequences?ReferenceType=GroupId&ReferenceIds=000000000000000000000000
	///
	///     GET /oly-aggregations/api/v1/sequences?Metadata[key1]=value1&Metadata[key2]=value2
	/// </remarks>
	virtual void sequencesGet(const sequencesGetParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct sequencesPutParams
	{
		const std::optional<utility::string_t>& newKey;
		const std::shared_ptr<SequenceDto>& RequestBody;
	};


	/// <summary>
	/// Creates or updates a sequence.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences
	/// If a sequence with this key already exists and the current user has permission to modify
	/// the sequence then update the sequence. If the sequence does not exist and the current user
	/// has permission to create the specified sequence then create the sequence. Otherwise, return
	/// 403 Forbidden. See the description of the 403 Forbidden response for more details.
	///
	/// If a sequence is created or updated and the `ReferenceType` is "GroupId" then a multiplayer
	/// message will be sent to clients via the Global scope for the group.
	///
	/// If you include a new key in the query string, and key in the querystring doesn't already exist
	/// on another document, this will update the key for an existing document to the new key.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences?newKey=newKey
	///     {
	///         "key": "key1",
	///         "referenceType": "GroupId",
	///         "referenceId": "000000000000000000000000",
	///         "items": [
	///             "item1",
	///             "item2",
	///             "item3"
	///         ],
	///         "metadata": {
	///             "property1": "value1",
	///             "property2": "value2"
	///         }
	///     }
	/// </remarks>
	virtual void sequencesPut(const sequencesPutParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysKeyGetParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// Gets a sequence by key.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/sequences/keys/{key}
	/// Returns the sequence with the specified `key`, if it exists. Otherwise, return 404 NotFound.
	///
	/// <b>Sample Requests:</b>
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key1
	///
	///     GET /oly-aggregations/api/v1/sequences/keys/key2
	/// </remarks>
	virtual void sequencesKeysKeyGet(const sequencesKeysKeyGetParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct sequencesKeysKeyDeleteParams
	{
		const utility::string_t& key;
	};


	/// <summary>
	/// Deletes a sequence with the given key.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys/{key}
	/// Returns 204 No Content regardless of whether or not a sequence with the specified `key`
	/// existed or not.
	///
	/// If a sequence is deleted with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/keys/key1
	/// </remarks>
	virtual void sequencesKeysKeyDelete(const sequencesKeysKeyDeleteParams& Params,
										csp::services::ApiResponseHandlerBase* ResponseHandler,
										csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysOldKeyKeyPutParams
	{
		const utility::string_t& oldKey;
		const utility::string_t& newKey;
	};


	/// <summary>
	/// Moves a sequence from one key to another.
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/sequences/keys/{oldKey}/key
	/// If the a sequence with the `oldKey` exists and a sequence with the `newKey` does not exist
	/// and the current user has permission to modify the sequence then update the key of the
	/// sequence to `newKey`. If no sequence with `oldKey` exists then return 404 NotFound. If a
	/// sequence with `newKey` already exists then return 409 Conflict.
	///
	/// If a sequence is moved with the `ReferenceType` of "GroupId" then a multiplayer message will
	/// be sent to clients via the Global scope for the group.
	///
	/// <b>Sample Requests:</b>
	///
	///     PUT /oly-aggregations/api/v1/sequences/keys/key1/key/key2
	/// </remarks>
	[[deprecated("'PUT /api/v1/sequences/keys/{oldKey}/key' is deprecated!")]]
	virtual void sequencesKeysOldKeyKeyPut(const sequencesKeysOldKeyKeyPutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesKeysDeleteParams
	{
		const std::vector<utility::string_t>& keys;
	};


	/// <summary>
	/// Deletes all sequences with the given keys.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/keys
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `keys`
	/// existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` of "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences?keys=key1&keys=key2
	/// </remarks>
	virtual void sequencesKeysDelete(const sequencesKeysDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams
	{
		const utility::string_t& referenceType;
		const utility::string_t& referenceId;
	};


	/// <summary>
	/// Deletes all sequences with the given reference.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/sequences/reference-type/{referenceType}/reference-id/{referenceId}
	/// Returns 204 No Content regardless of whether or not any sequences with the specified `referenceType`
	/// and `referenceId` existed or not.
	///
	/// Each sequence that is deleted with the `ReferenceType` is "GroupId" will result in a multiplayer
	/// message being sent to clients via the Global scope for that group.
	///
	/// <b>Sample Requests:</b>
	///
	///     DELETE /oly-aggregations/api/v1/sequences/reference-type/GroupId/reference-id/000000000000000000000000
	/// </remarks>
	virtual void sequencesReference_typeReferenceTypeReference_idReferenceIdDelete(
		const sequencesReference_typeReferenceTypeReference_idReferenceIdDeleteParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISequenceApiBase() = default;
};

class IShopifyApiBase : public csp::services::ApiBase
{
public:
	IShopifyApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct spacesSpaceIdVendorsShopifyProductsProductIdGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& productId;
	};


	/// <summary>
	/// Find one product and return it and all its variants
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/{productId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyProductsProductIdGet(const spacesSpaceIdVendorsShopifyProductsProductIdGetParams& Params,
																 csp::services::ApiResponseHandlerBase* ResponseHandler,
																 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyProductsVariantsGetParams
	{
		const utility::string_t& spaceId;
		const std::optional<std::vector<utility::string_t>>& ids;
	};


	/// <summary>
	/// Find one or more products by variant ids and include the variant data too
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/products/variants
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyProductsVariantsGet(const spacesSpaceIdVendorsShopifyProductsVariantsGetParams& Params,
																csp::services::ApiResponseHandlerBase* ResponseHandler,
																csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyPutParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<ShopifyStorefrontDto>& RequestBody;
	};


	/// <summary>
	/// Creates an record that contains the Shopify integration info
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyPut(const spacesSpaceIdVendorsShopifyPutParams& Params,
												csp::services::ApiResponseHandlerBase* ResponseHandler,
												csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsShopifyValidatePutParams
	{
		const std::shared_ptr<ShopifyStorefrontValidationRequest>& RequestBody;
	};


	/// <summary>
	/// Tests the provided info against Shopify to verify it's validity
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/vendors/shopify/validate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsShopifyValidatePut(const vendorsShopifyValidatePutParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsShopifyUsersUserIdStorefrontsGetParams
	{
		const utility::string_t& userId;
		const std::optional<bool>& active;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Returns all storefronts for the provided user
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/shopify/users/{userId}/storefronts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsShopifyUsersUserIdStorefrontsGet(const vendorsShopifyUsersUserIdStorefrontsGetParams& Params,
														 csp::services::ApiResponseHandlerBase* ResponseHandler,
														 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsPostParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Creates a Cart at Shopify for the store associated to the provided SpaceId
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/vendors/shopify/carts
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsPost(const spacesSpaceIdVendorsShopifyCartsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsCartIdGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
	};


	/// <summary>
	/// Uses the CartId to reach out to Shopify and get Cart Data.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdGet(const spacesSpaceIdVendorsShopifyCartsCartIdGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct spacesSpaceIdVendorsShopifyCartsCartIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
		const std::shared_ptr<ShopifyCartUpdateDto>& RequestBody;
	};


	/// <summary>
	/// Updates the Cart
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdPut(const spacesSpaceIdVendorsShopifyCartsCartIdPutParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& cartId;
	};


	/// <summary>
	/// Get shopify cart checkout info
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/vendors/shopify/carts/{cartId}/checkout-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGet(const spacesSpaceIdVendorsShopifyCartsCartIdCheckout_infoGetParams& Params,
																		csp::services::ApiResponseHandlerBase* ResponseHandler,
																		csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IShopifyApiBase() = default;
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

class ISpaceApiBase : public csp::services::ApiBase
{
public:
	ISpaceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct spacesSpaceIdDeleteParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces/{spaceId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	[[deprecated("'DELETE /api/v1/spaces/{spaceId}' is deprecated!")]]
	virtual void spacesSpaceIdDelete(const spacesSpaceIdDeleteParams& Params,
									 csp::services::ApiResponseHandlerBase* ResponseHandler,
									 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesDeleteParams
	{
		const std::optional<std::vector<utility::string_t>>& spaceIds;
		const std::optional<bool>& asyncCall;
	};


	/// <summary>
	/// Locates the Spaces by their unique groupIds represented here as spaceIds and the associated objects that belong to it
	/// and deletes it from the data store.
	/// This Function will search for items related to a spaceId even if the spaceId itself has already been deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesDelete(const spacesDeleteParams& Params,
							  csp::services::ApiResponseHandlerBase* ResponseHandler,
							  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdMultiplayer_objectsKmlGetParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Locates the Space by its unique groupId represented here as spaceId and the associated objects that belong to it
	/// and returns those objects as KML style XML for google earth
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/multiplayer-objects/kml
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdMultiplayer_objectsKmlGet(const spacesSpaceIdMultiplayer_objectsKmlGetParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdDuplicatePostParams
	{
		const utility::string_t& spaceId;
		const std::optional<bool>& asyncCall;
		const std::shared_ptr<DuplicateSpaceOptions>& RequestBody;
	};


	/// <summary>
	/// Creates a duplicate of a space and assigns it to a specific group
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/duplicate
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdDuplicatePost(const spacesSpaceIdDuplicatePostParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdExportPostParams
	{
		const utility::string_t& spaceId;
		const std::optional<bool>& asyncCall;
		const std::optional<bool>& includeMusubi;
	};


	/// <summary>
	/// Extracts the quintessence of the referenced Space to be compressed and distilled into a pair of Artifacts
	/// accessible in other places and times.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/export
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void spacesSpaceIdExportPost(const spacesSpaceIdExportPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesExportsExportIdImportPostParams
	{
		const utility::string_t& exportId;
		const std::optional<bool>& asyncCall;
		const std::shared_ptr<ImportSpaceOptions>& RequestBody;
	};


	/// <summary>
	/// Takes an exported space, that has been saved in a location accessible to all environments. Translates it, and imports it into an environment
	/// as a new space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/exports/{exportId}/import
	/// Authorization: magnopus-admin,magnopus-support,admin,support,internal-service
	/// </remarks>
	virtual void spacesExportsExportIdImportPost(const spacesExportsExportIdImportPostParams& Params,
												 csp::services::ApiResponseHandlerBase* ResponseHandler,
												 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdCheckpointsPostParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<SpaceCheckpointOptions>& RequestBody;
	};


	/// <summary>
	/// Creates an export of the space and associated records in a single file for optimized space-load flows
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/checkpoints
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdCheckpointsPost(const spacesSpaceIdCheckpointsPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdSnapshotPostParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<SpaceSnapshotOptions>& RequestBody;
	};


	/// <summary>
	/// Creates a snapshot of the space and associated records
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/snapshot
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdSnapshotPost(const spacesSpaceIdSnapshotPostParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdSnapshotsGetParams
	{
		const utility::string_t& spaceId;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Returns all snapshots for the given space
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/{spaceId}/snapshots
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdSnapshotsGet(const spacesSpaceIdSnapshotsGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSnapshotsGetParams
	{
		const std::optional<utility::string_t>& SpaceId;
		const std::optional<utility::string_t>& ExportId;
		const std::optional<utility::string_t>& CoalescenceId;
		const std::optional<utility::string_t>& Status;
		const std::optional<utility::string_t>& CreatedAfter;
		const std::optional<utility::string_t>& CreatedBefore;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Searches snapshots using the provided filters and pagination
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/snapshots
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSnapshotsGet(const spacesSnapshotsGetParams& Params,
									csp::services::ApiResponseHandlerBase* ResponseHandler,
									csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdSnapshotsCancelPostParams
	{
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Requests cancellation of any in-progress snapshots for the given space.
	/// If more than one in-progress snapshot is found they will all be cancelled.
	/// Marks each snapshot as cancelled and errors the underlying coalescences so that any
	/// pending pipeline steps (including asset-file copying) exit without performing work.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/snapshots/cancel
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdSnapshotsCancelPost(const spacesSpaceIdSnapshotsCancelPostParams& Params,
												  csp::services::ApiResponseHandlerBase* ResponseHandler,
												  csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdSnapshotsSnapshotIdDeleteParams
	{
		const utility::string_t& snapshotId;
		const utility::string_t& spaceId;
	};


	/// <summary>
	/// Deletes a snapshot record by its unique identifier.
	/// Only snapshots that are not currently in progress may be deleted.
	/// </summary>
	/// <remarks>
	/// DELETE /api/v1/spaces/{spaceId}/snapshots/{snapshotId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdSnapshotsSnapshotIdDelete(const spacesSpaceIdSnapshotsSnapshotIdDeleteParams& Params,
														csp::services::ApiResponseHandlerBase* ResponseHandler,
														csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdSnapshotsSnapshotIdApplyPostParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& snapshotId;
		const std::optional<bool>& nonDestructive;
		const std::optional<bool>& backupInProgress;
	};


	/// <summary>
	/// Applies a previously completed snapshot by re-importing its export into the space.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/snapshots/{snapshotId}/apply
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdSnapshotsSnapshotIdApplyPost(const spacesSpaceIdSnapshotsSnapshotIdApplyPostParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISpaceApiBase() = default;
};

class ISupportApiBase : public csp::services::ApiBase
{
public:
	ISupportApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct supportIssuesPostParams
	{
	};


	/// <summary>
	/// Create a support issue. The raw request body is forwarded to the issue tracker unchanged.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/support/issues
	/// Authorization: Anonymous
	/// </remarks>
	virtual void supportIssuesPost(const supportIssuesPostParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct supportIssuesIssueKeyAttachmentsPostParams
	{
		const utility::string_t& issueKey;
	};


	/// <summary>
	/// Upload one or more attachments to an existing support issue.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/support/issues/{issueKey}/attachments
	/// Authorization: Anonymous
	/// </remarks>
	virtual void supportIssuesIssueKeyAttachmentsPost(const supportIssuesIssueKeyAttachmentsPostParams& Params,
													  csp::services::ApiResponseHandlerBase* ResponseHandler,
													  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ISupportApiBase() = default;
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

class ITenantAppUrlApiBase : public csp::services::ApiBase
{
public:
	ITenantAppUrlApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct tenantsTenantNameApp_urlsProvisionableGetParams
	{
		const utility::string_t& tenantName;
	};


	/// <summary>
	/// The apps this environment lets an operator provision for the tenant, with the hostname each would
	/// produce.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/app-urls/provisionable
	/// An empty list is a normal answer, not an error: it means this environment offers no hand-provisioned
	/// app URLs. The UI uses it to decide whether to render the button at all, which is what keeps the
	/// environment check out of the front end.
	/// </remarks>
	virtual void tenantsTenantNameApp_urlsProvisionableGet(const tenantsTenantNameApp_urlsProvisionableGetParams& Params,
														   csp::services::ApiResponseHandlerBase* ResponseHandler,
														   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct tenantsTenantNameApp_urlsAppKeyPostParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& appKey;
		const std::shared_ptr<ProvisionAppUrlRequest>& RequestBody;
	};


	/// <summary>
	/// Starts provisioning one app's URL for the tenant, returning immediately with its status.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/tenants/{tenantName}/app-urls/{appKey}
	/// Safe to call twice. A job already in flight is returned untouched — restarting it would orphan whatever
	/// the current reconcile sweep is part-way through — while a finished, failed or cancelled one is requeued,
	/// because pressing the button again is the intent to run it again.
	/// The workspace address (company + project fragments) is required only when the tenant does not already
	/// have one, and is written <b>once</b>: the hostname derived from it becomes a certificate subject, so a
	/// later change would strand the certificate rather than rename anything.
	/// </remarks>
	virtual void tenantsTenantNameApp_urlsAppKeyPost(const tenantsTenantNameApp_urlsAppKeyPostParams& Params,
													 csp::services::ApiResponseHandlerBase* ResponseHandler,
													 csp::common::CancellationToken& CancellationToken) const
		= 0;

	struct tenantsTenantNameApp_urlsAppKeyGetParams
	{
		const utility::string_t& tenantName;
		const utility::string_t& appKey;
	};


	/// <summary>
	/// Where one app's URL provisioning has got to for this tenant.
	/// </summary>
	/// <remarks>
	/// GET /api/v1/tenants/{tenantName}/app-urls/{appKey}
	/// Reports `unprovisioned` rather than 404 when nothing has been provisioned, so a poller can be
	/// started before the first provision without special-casing the missing case.
	/// ⚠ Progress comes from the job's step checkpoint, <b>not</b> from the hostname's DNS status. A per-host
	/// static-site hostname is recorded at `dns_pending` by the first step and does not move again until
	/// the last, so a DNS-status poll would show a flat bar for the whole certificate wait.
	/// </remarks>
	virtual void tenantsTenantNameApp_urlsAppKeyGet(const tenantsTenantNameApp_urlsAppKeyGetParams& Params,
													csp::services::ApiResponseHandlerBase* ResponseHandler,
													csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITenantAppUrlApiBase() = default;
};

class ITicketedSpaceApiBase : public csp::services::ApiBase
{
public:
	ITicketedSpaceApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct spacesSpaceIdEventsPostParams
	{
		const utility::string_t& spaceId;
		const std::shared_ptr<SpaceEventDto>& RequestBody;
	};


	/// <summary>
	/// Creates an event associated with a space
	/// </summary>
	/// <remarks>
	/// POST /api/v1/spaces/{spaceId}/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdEventsPost(const spacesSpaceIdEventsPostParams& Params,
										 csp::services::ApiResponseHandlerBase* ResponseHandler,
										 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdEventsEventIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& eventId;
		const std::shared_ptr<SpaceEventDto>& RequestBody;
	};


	/// <summary>
	/// Updates an event associated with a space
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/events/{eventId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdEventsEventIdPut(const spacesSpaceIdEventsEventIdPutParams& Params,
											   csp::services::ApiResponseHandlerBase* ResponseHandler,
											   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesEventsGetParams
	{
		const std::optional<std::vector<utility::string_t>>& VendorEventIds;
		const std::optional<utility::string_t>& VendorName;
		const std::optional<std::vector<utility::string_t>>& SpaceIds;
		const std::optional<std::vector<utility::string_t>>& UserIds;
		const std::optional<bool>& IsTicketingActive;
		const std::optional<int32_t>& Skip;
		const std::optional<int32_t>& Limit;
	};


	/// <summary>
	/// Search space events that matches the search criteria
	/// or an empty list if none found
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/events
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesEventsGet(const spacesEventsGetParams& Params,
								 csp::services::ApiResponseHandlerBase* ResponseHandler,
								 csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams
	{
		const utility::string_t& spaceId;
		const utility::string_t& vendorName;
		const utility::string_t& vendorEventId;
		const utility::string_t& vendorTicketId;
		const std::optional<utility::string_t>& onBehalfOfUserId;
	};


	/// <summary>
	/// Applies the ticket purchased from 3rd party event ticket vendor to enter a space event
	/// </summary>
	/// <remarks>
	/// PUT /api/v1/spaces/{spaceId}/vendors/{vendorName}/events/{vendorEventId}/tickets/{vendorTicketId}
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPut(
		const spacesSpaceIdVendorsVendorNameEventsVendorEventIdTicketsVendorTicketIdPutParams& Params,
		csp::services::ApiResponseHandlerBase* ResponseHandler,
		csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct spacesTicketedGetParams
	{
		const std::optional<std::vector<utility::string_t>>& spaceIds;
	};


	/// <summary>
	/// Returns which spaces have active ticketing and which do not
	/// </summary>
	/// <remarks>
	/// GET /api/v1/spaces/ticketed
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void spacesTicketedGet(const spacesTicketedGetParams& Params,
								   csp::services::ApiResponseHandlerBase* ResponseHandler,
								   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsVendorNameOauthGetParams
	{
		const utility::string_t& vendorName;
		const std::optional<utility::string_t>& code;
		const std::optional<utility::string_t>& userId;
		const std::optional<utility::string_t>& tenant;
		const std::optional<utility::string_t>& error_code;
	};


	/// <summary>
	/// OAuth endpoint for exchanging vendor provider auth code for an API bearer token.
	/// returns a redirect to a client-provided server-approved redirect URL
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/oauth
	/// Authorization: Anonymous
	/// </remarks>
	virtual void vendorsVendorNameOauthGet(const vendorsVendorNameOauthGetParams& Params,
										   csp::services::ApiResponseHandlerBase* ResponseHandler,
										   csp::common::CancellationToken& CancellationToken) const
		= 0;



	struct vendorsVendorNameUsersUserIdProvider_infoGetParams
	{
		const utility::string_t& vendorName;
		const utility::string_t& userId;
		const std::optional<utility::string_t>& tenant;
	};


	/// <summary>
	/// Returns info related to initiating oauth flow with a specific vendor
	/// </summary>
	/// <remarks>
	/// GET /api/v1/vendors/{vendorName}/users/{userId}/provider-info
	/// Authorization: magnopus-admin,admin,support,internal-service,external-service,monitor,creator,enduser,tester,account-manager,limited-creator
	/// </remarks>
	virtual void vendorsVendorNameUsersUserIdProvider_infoGet(const vendorsVendorNameUsersUserIdProvider_infoGetParams& Params,
															  csp::services::ApiResponseHandlerBase* ResponseHandler,
															  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~ITicketedSpaceApiBase() = default;
};

class IUsageReporterDevApiBase : public csp::services::ApiBase
{
public:
	IUsageReporterDevApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct billingDevReport_triggerPostParams
	{
	};


	/// <summary>
	/// Runs the reporter once for "now" — the local equivalent of a scheduler tick. Returns 404 outside Local.
	/// </summary>
	/// <remarks>
	/// POST /api/v1/billing/dev/report-trigger
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void billingDevReport_triggerPost(const billingDevReport_triggerPostParams& Params,
											  csp::services::ApiResponseHandlerBase* ResponseHandler,
											  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IUsageReporterDevApiBase() = default;
};

class IUserSustainedActivityApiBase : public csp::services::ApiBase
{
public:
	IUserSustainedActivityApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct usersSustained_activityGetParams
	{
		const std::optional<std::vector<utility::string_t>>& tenants;
		const std::optional<utility::string_t>& start;
		const std::optional<utility::string_t>& end;
	};


	/// <summary>
	/// Get the all users' sustained activity of the given tenants within a time range - inclusive of the start time and exclusive of the end time
	/// </summary>
	/// <remarks>
	/// GET /api/v1/users/sustained-activity
	/// Authorization: magnopus-admin,magnopus-support
	/// </remarks>
	virtual void usersSustained_activityGet(const usersSustained_activityGetParams& Params,
											csp::services::ApiResponseHandlerBase* ResponseHandler,
											csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IUserSustainedActivityApiBase() = default;
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

class IVersionsAggregatorApiBase : public csp::services::ApiBase
{
public:
	IVersionsAggregatorApiBase(csp::web::WebClient* InWebClient, const csp::ServiceDefinition& InServiceDefinition)
		: csp::services::ApiBase(InWebClient, InServiceDefinition)
	{
	}



	struct rsions_aggregatedGetParams
	{
	};


	/// <summary>
	/// Aggregate the versions from this and downstream services
	/// </summary>
	/// <remarks>
	/// GET /api/versions-aggregated
	/// Authorization: Anonymous
	/// </remarks>
	virtual void rsions_aggregatedGet(const rsions_aggregatedGetParams& Params,
									  csp::services::ApiResponseHandlerBase* ResponseHandler,
									  csp::common::CancellationToken& CancellationToken) const
		= 0;



protected:
	virtual ~IVersionsAggregatorApiBase() = default;
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


} // namespace csp::services::generated::aggregationservice