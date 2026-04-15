

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
	IAnalyticsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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
	IAnchorsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class ICacheApiBase : public csp::services::ApiBase
{
public:
	ICacheApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class IConfigurationApiBase : public csp::services::ApiBase
{
public:
	IConfigurationApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class INtpApiBase : public csp::services::ApiBase
{
public:
	INtpApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class IPersonalPointOfInterestApiBase : public csp::services::ApiBase
{
public:
	IPersonalPointOfInterestApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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
	IPingApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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
	IPointOfInterestApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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
	IPositionApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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
	IPositionSpoofingApiBase(csp::web::WebClient* InWebClient)
		: csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class ISpaceTimeApiBase : public csp::services::ApiBase
{
public:
	ISpaceTimeApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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

class IVersionsApiBase : public csp::services::ApiBase
{
public:
	IVersionsApiBase(csp::web::WebClient* InWebClient) : csp::services::ApiBase(InWebClient, csp::CSPFoundation::GetEndpoints().SpatialDataService)
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


} // namespace csp::services::generated::spatialdataservice