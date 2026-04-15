

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
	AnalyticsApi(csp::web::WebClient* InWebClient);
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
	AnchorsApi(csp::web::WebClient* InWebClient);
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

class CacheApi final : public ICacheApiBase
{
public:
	CacheApi(csp::web::WebClient* InWebClient);
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

class ConfigurationApi final : public IConfigurationApiBase
{
public:
	ConfigurationApi(csp::web::WebClient* InWebClient);
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

class NtpApi final : public INtpApiBase
{
public:
	NtpApi(csp::web::WebClient* InWebClient);
	virtual ~NtpApi();



	/// <remarks>
	/// GET /datetime
	/// Authorization: Anonymous
	/// </remarks>
	void datetimeGet(const datetimeGetParams& Params,
					 csp::services::ApiResponseHandlerBase* ResponseHandler,
					 csp::common::CancellationToken& CancellationToken = csp::common::CancellationToken::Dummy()) const override;
};

class PersonalPointOfInterestApi final : public IPersonalPointOfInterestApiBase
{
public:
	PersonalPointOfInterestApi(csp::web::WebClient* InWebClient);
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
	PingApi(csp::web::WebClient* InWebClient);
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
	PointOfInterestApi(csp::web::WebClient* InWebClient);
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
	PositionApi(csp::web::WebClient* InWebClient);
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
	PositionSpoofingApi(csp::web::WebClient* InWebClient);
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

class SpaceTimeApi final : public ISpaceTimeApiBase
{
public:
	SpaceTimeApi(csp::web::WebClient* InWebClient);
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

class VersionsApi final : public IVersionsApiBase
{
public:
	VersionsApi(csp::web::WebClient* InWebClient);
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


} // namespace csp::services::generated::spatialdataservice