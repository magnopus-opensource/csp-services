

#pragma once

#include "Services/DtoBase/DtoBase.h"

#include <optional>


namespace csp::services::generated::multiplayerservice
{

class AreaOfInterestDto;
class BooleanUInt32NullableTuple;
class ClientConnectionDto;
class ClientConnectionDtoDataPage;
class ClientConnectionStatus;
class EventMessageDto;
class GeoCoord;
class IComponentData;
class ImportObjectMessageRequest;
class ObjectMessageDto;
class ObjectMessageDtoDataPage;
class ObjectMessagePatchDto;
class PubSubModel;
class ScopeDto;
class ScopeDtoDataPage;
class ScopeLeaderDto;



/// <summary>
/// Dto for data related to managing who is visible to a User
/// </summary>
class AreaOfInterestDto : public csp::services::DtoBase
{
public:
	AreaOfInterestDto();
	virtual ~AreaOfInterestDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for the document, which maps to a User's Profile ID
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The unique identifier for the creator of the record
	/// </summary>
	utility::string_t GetCreatedBy() const;
	bool HasCreatedBy() const;

	/// <summary>
	/// The unique identifier for the updater of the record
	/// </summary>
	utility::string_t GetUpdatedBy() const;
	bool HasUpdatedBy() const;

	/// <summary>
	/// The date the record was created
	/// </summary>
	utility::string_t GetCreatedAt() const;
	bool HasCreatedAt() const;

	/// <summary>
	/// The date the record was updated
	/// </summary>
	utility::string_t GetUpdatedAt() const;
	bool HasUpdatedAt() const;

	/// <summary>
	/// Whether the user is currently listening to Multiplayer messages
	/// </summary>
	bool GetIsListening() const;
	bool HasIsListening() const;

	/// <summary>
	/// Whether the user is a spectator
	/// </summary>
	bool GetIsSpectator() const;
	bool HasIsSpectator() const;

	std::shared_ptr<GeoCoord> GetPosition() const;
	void SetPosition(const std::shared_ptr<GeoCoord>& Value);
	bool HasPosition() const;

	/// <summary>
	/// The last time this area of interest was solved
	/// </summary>
	utility::string_t GetLastSolveTime() const;
	bool HasLastSolveTime() const;

	/// <summary>
	/// Global scopes in the user's area of interest
	/// </summary>
	const std::vector<utility::string_t>& GetGlobalScopes() const;
	bool HasGlobalScopes() const;

	/// <summary>
	/// Object scopes in the user's area of interest
	/// </summary>
	const std::vector<utility::string_t>& GetObjectScopes() const;
	bool HasObjectScopes() const;

	/// <summary>
	/// Ids of the Objects in the user's object scopes that the user subscribes to
	/// </summary>
	const std::vector<utility::string_t>& GetObjectIds() const;
	bool HasObjectIds() const;

	/// <summary>
	/// Combined collection of Magnopus.Service.Multiplayer.Dtos.AreaOfInterestDto.GlobalScopes and
	/// Magnopus.Service.Multiplayer.Dtos.AreaOfInterestDto.ObjectScopes
	/// </summary>
	const std::vector<utility::string_t>& GetEntourage() const;
	bool HasEntourage() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_CreatedBy;
	std::optional<utility::string_t> m_UpdatedBy;
	std::optional<utility::string_t> m_CreatedAt;
	std::optional<utility::string_t> m_UpdatedAt;
	std::optional<bool> m_IsListening;
	std::optional<bool> m_IsSpectator;
	std::optional<std::shared_ptr<GeoCoord>> m_Position;
	std::optional<utility::string_t> m_LastSolveTime;
	std::optional<std::vector<utility::string_t>> m_GlobalScopes;
	std::optional<std::vector<utility::string_t>> m_ObjectScopes;
	std::optional<std::vector<utility::string_t>> m_ObjectIds;
	std::optional<std::vector<utility::string_t>> m_Entourage;
};

class BooleanUInt32NullableTuple : public csp::services::DtoBase
{
public:
	BooleanUInt32NullableTuple();
	virtual ~BooleanUInt32NullableTuple();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	bool GetItem1() const;
	void SetItem1(const bool& Value);
	bool HasItem1() const;

	int32_t GetItem2() const;
	void SetItem2(int32_t Value);
	bool HasItem2() const;


protected:
	std::optional<bool> m_Item1;
	std::optional<int32_t> m_Item2;
};

/// <summary>
/// Represents Client connection information
/// </summary>
class ClientConnectionDto : public csp::services::DtoBase
{
public:
	ClientConnectionDto();
	virtual ~ClientConnectionDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The unique identifier for the document
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique identifier of the object
	/// </summary>
	utility::string_t GetUserId() const;
	bool HasUserId() const;

	/// <summary>
	/// The uniquely generated id for this user
	/// </summary>
	int32_t GetClientId() const;
	bool HasClientId() const;

	/// <summary>
	/// List of scopes the user is subscribed to
	/// </summary>
	const std::vector<utility::string_t>& GetScopeIds() const;
	bool HasScopeIds() const;

	std::shared_ptr<ClientConnectionStatus> GetConnectionStatus() const;
	void SetConnectionStatus(const std::shared_ptr<ClientConnectionStatus>& Value);
	bool HasConnectionStatus() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_UserId;
	std::optional<int32_t> m_ClientId;
	std::optional<std::vector<utility::string_t>> m_ScopeIds;
	std::optional<std::shared_ptr<ClientConnectionStatus>> m_ConnectionStatus;
};

class ClientConnectionDtoDataPage : public csp::services::DtoBase
{
public:
	ClientConnectionDtoDataPage();
	virtual ~ClientConnectionDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ClientConnectionDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ClientConnectionDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ClientConnectionDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Possible client connection states
/// </summary>
class ClientConnectionStatus : public csp::services::EnumBase
{
public:
	ClientConnectionStatus();
	virtual ~ClientConnectionStatus();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class eClientConnectionStatus
	{
		DISCONNECTED,
		CONNECTED

	};

	eClientConnectionStatus GetValue() const;
	void SetValue(eClientConnectionStatus const Value);

protected:
	eClientConnectionStatus Value = {};
};

/// <summary>
/// Represents a multiplayer event to send
/// </summary>
class EventMessageDto : public csp::services::DtoBase
{
public:
	EventMessageDto();
	virtual ~EventMessageDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The System.Type.FullName of the type this event can be convert to
	/// </summary>
	utility::string_t GetEventType() const;
	void SetEventType(const utility::string_t& Value);
	bool HasEventType() const;

	/// <summary>
	/// User unique identifier of the individual sending this event <br />
	/// Note: `null` will use the current user
	/// </summary>
	utility::string_t GetSenderUserId() const;
	void SetSenderUserId(const utility::string_t& Value);
	bool HasSenderUserId() const;

	/// <summary>
	/// User unique identifier of the intended recipient
	/// or `null` to send to everyone
	/// </summary>
	utility::string_t GetRecipientUserId() const;
	void SetRecipientUserId(const utility::string_t& Value);
	bool HasRecipientUserId() const;

	/// <summary>
	/// List of components that are associated with this event
	/// or `null` if no data is necessary
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<IComponentData>>& GetComponents() const;
	void SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value);
	bool HasComponents() const;

	/// <summary>
	/// The list of scopes this event will be sent to
	/// Note: `null` will use the sender's scopes
	/// </summary>
	const std::vector<utility::string_t>& GetScopeIds() const;
	void SetScopeIds(const std::vector<utility::string_t>& Value);
	bool HasScopeIds() const;


protected:
	std::optional<utility::string_t> m_EventType;
	std::optional<utility::string_t> m_SenderUserId;
	std::optional<utility::string_t> m_RecipientUserId;
	std::optional<std::map<utility::string_t, std::shared_ptr<IComponentData>>> m_Components;
	std::optional<std::vector<utility::string_t>> m_ScopeIds;
};

/// <summary>
/// Geographical coordinate transfer object
/// </summary>
class GeoCoord : public csp::services::DtoBase
{
public:
	GeoCoord();
	virtual ~GeoCoord();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Longitude of the coordinate
	/// </summary>
	double GetLongitude() const;
	void SetLongitude(double Value);
	bool HasLongitude() const;

	/// <summary>
	/// Latitude of the coordinate
	/// </summary>
	double GetLatitude() const;
	void SetLatitude(double Value);
	bool HasLatitude() const;


protected:
	std::optional<double> m_Longitude;
	std::optional<double> m_Latitude;
};

/// <summary>
/// ComponentData interface for Object data
/// </summary>
class IComponentData : public csp::services::DtoBase
{
public:
	IComponentData();
	virtual ~IComponentData();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;



protected:
};

/// <summary>
/// Defines a structure required for importing object messages from an external source
/// </summary>
class ImportObjectMessageRequest : public csp::services::DtoBase
{
public:
	ImportObjectMessageRequest();
	virtual ~ImportObjectMessageRequest();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The scope reference Id associated with these object messages
	/// </summary>
	utility::string_t GetScopeReferenceId() const;
	void SetScopeReferenceId(const utility::string_t& Value);
	bool HasScopeReferenceId() const;

	/// <summary>
	/// The type of reference the ScopeReferenceId is associated with
	/// </summary>
	utility::string_t GetScopeReferenceType() const;
	void SetScopeReferenceType(const utility::string_t& Value);
	bool HasScopeReferenceType() const;


protected:
	std::optional<utility::string_t> m_ScopeReferenceId;
	std::optional<utility::string_t> m_ScopeReferenceType;
};

/// <summary>
/// Represents an object in multiplayer that can be interacted with by multiple users
/// </summary>
class ObjectMessageDto : public csp::services::DtoBase
{
public:
	ObjectMessageDto();
	virtual ~ObjectMessageDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Unique identifier of the object
	/// </summary>
	int32_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// Unique identifier for the prefab that represents this object
	/// </summary>
	int32_t GetPrefabId() const;
	void SetPrefabId(int32_t Value);
	bool HasPrefabId() const;

	/// <summary>
	/// Can this object be transferred between owners
	/// </summary>
	bool GetIsTransferable() const;
	void SetIsTransferable(const bool& Value);
	bool HasIsTransferable() const;

	/// <summary>
	/// Is this a persistent object
	/// </summary>
	bool GetIsPersistent() const;
	void SetIsPersistent(const bool& Value);
	bool HasIsPersistent() const;

	/// <summary>
	/// The user that is the current owner of the object <br />
	/// Note: `null` will use the current user
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;

	/// <summary>
	/// The scope reference id of the scopes this object is published to
	/// </summary>
	utility::string_t GetScopeReferenceId() const;
	void SetScopeReferenceId(const utility::string_t& Value);
	bool HasScopeReferenceId() const;

	/// <summary>
	/// The scope reference type of the scopes this object is published to
	/// </summary>
	utility::string_t GetScopeReferenceType() const;
	void SetScopeReferenceType(const utility::string_t& Value);
	bool HasScopeReferenceType() const;

	/// <summary>
	/// The user unique identifier for a user that is an owner of the object,
	/// but for authorization purposes, the owner of the object is actually Magnopus.Service.Multiplayer.Dtos.ObjectMessageDto.OwnerUserId.
	/// If set, this user will override Magnopus.Service.Multiplayer.Dtos.ObjectMessageDto.OwnerUserId for lookups of the assigned scopes and groups
	/// to propagate messages.
	/// </summary>
	utility::string_t GetOnBehalfOfUserId() const;
	void SetOnBehalfOfUserId(const utility::string_t& Value);
	bool HasOnBehalfOfUserId() const;

	/// <summary>
	/// ObjectId of the parent object this is linked to
	/// </summary>
	int32_t GetParentId() const;
	void SetParentId(int32_t Value);
	bool HasParentId() const;

	/// <summary>
	/// List of components that are associated with this object
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<IComponentData>>& GetComponents() const;
	void SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value);
	bool HasComponents() const;

	/// <summary>
	/// The scopes this object is visible within
	/// </summary>
	const std::vector<utility::string_t>& GetScopeIds() const;
	void SetScopeIds(const std::vector<utility::string_t>& Value);
	bool HasScopeIds() const;

	/// <summary>
	/// Is this object a user centerpoint for AOI calculations
	/// </summary>
	bool GetAoiCenter() const;
	void SetAoiCenter(const bool& Value);
	bool HasAoiCenter() const;

	/// <summary>
	/// optional identifier used by the duplication process
	/// </summary>
	utility::string_t GetDuplicatedFrom() const;
	void SetDuplicatedFrom(const utility::string_t& Value);
	bool HasDuplicatedFrom() const;


protected:
	std::optional<int32_t> m_Id;
	std::optional<int32_t> m_PrefabId;
	std::optional<bool> m_IsTransferable;
	std::optional<bool> m_IsPersistent;
	std::optional<utility::string_t> m_OwnerUserId;
	std::optional<utility::string_t> m_ScopeReferenceId;
	std::optional<utility::string_t> m_ScopeReferenceType;
	std::optional<utility::string_t> m_OnBehalfOfUserId;
	std::optional<int32_t> m_ParentId;
	std::optional<std::map<utility::string_t, std::shared_ptr<IComponentData>>> m_Components;
	std::optional<std::vector<utility::string_t>> m_ScopeIds;
	std::optional<bool> m_AoiCenter;
	std::optional<utility::string_t> m_DuplicatedFrom;
};

class ObjectMessageDtoDataPage : public csp::services::DtoBase
{
public:
	ObjectMessageDtoDataPage();
	virtual ~ObjectMessageDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ObjectMessageDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ObjectMessageDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ObjectMessageDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Represents a partial update to a multiplayer object
/// </summary>
class ObjectMessagePatchDto : public csp::services::DtoBase
{
public:
	ObjectMessagePatchDto();
	virtual ~ObjectMessagePatchDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Request to transfer ownership of this object <br />
	/// Note: `null` will use the current user
	/// </summary>
	utility::string_t GetOwnerUserId() const;
	void SetOwnerUserId(const utility::string_t& Value);
	bool HasOwnerUserId() const;

	std::shared_ptr<BooleanUInt32NullableTuple> GetParentId() const;
	void SetParentId(const std::shared_ptr<BooleanUInt32NullableTuple>& Value);
	bool HasParentId() const;

	/// <summary>
	/// List of components that have changed.
	/// </summary>
	const std::map<utility::string_t, std::shared_ptr<IComponentData>>& GetComponents() const;
	void SetComponents(const std::map<utility::string_t, std::shared_ptr<IComponentData>>& Value);
	bool HasComponents() const;


protected:
	std::optional<utility::string_t> m_OwnerUserId;
	std::optional<std::shared_ptr<BooleanUInt32NullableTuple>> m_ParentId;
	std::optional<std::map<utility::string_t, std::shared_ptr<IComponentData>>> m_Components;
};

/// <summary>
/// Possible pub/sub models
/// </summary>
class PubSubModel : public csp::services::EnumBase
{
public:
	PubSubModel();
	virtual ~PubSubModel();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;

	enum class ePubSubModel
	{
		OBJECT,
		GLOBAL

	};

	ePubSubModel GetValue() const;
	void SetValue(ePubSubModel const Value);

protected:
	ePubSubModel Value = {};
};

/// <summary>
/// Represents a scope and defines its behavior
/// </summary>
class ScopeDto : public csp::services::DtoBase
{
public:
	ScopeDto();
	virtual ~ScopeDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// The id of the scope
	/// </summary>
	utility::string_t GetId() const;
	bool HasId() const;

	/// <summary>
	/// The id of the parent scope object
	/// </summary>
	utility::string_t GetReferenceId() const;
	void SetReferenceId(const utility::string_t& Value);
	bool HasReferenceId() const;

	/// <summary>
	/// The type of the reference with this scope
	/// </summary>
	utility::string_t GetReferenceType() const;
	void SetReferenceType(const utility::string_t& Value);
	bool HasReferenceType() const;

	/// <summary>
	/// The name of the scope
	/// </summary>
	utility::string_t GetName() const;
	void SetName(const utility::string_t& Value);
	bool HasName() const;

	std::shared_ptr<PubSubModel> GetPubSubModel() const;
	void SetPubSubModel(const std::shared_ptr<PubSubModel>& Value);
	bool HasPubSubModel() const;

	/// <summary>
	/// Solve radius for scope in meters, only useful on object scopes
	/// </summary>
	double GetSolveRadius() const;
	void SetSolveRadius(double Value);
	bool HasSolveRadius() const;

	/// <summary>
	/// Whether the scope requires a managed leader election
	/// </summary>
	bool GetManagedLeaderElection() const;
	void SetManagedLeaderElection(const bool& Value);
	bool HasManagedLeaderElection() const;


protected:
	std::optional<utility::string_t> m_Id;
	std::optional<utility::string_t> m_ReferenceId;
	std::optional<utility::string_t> m_ReferenceType;
	std::optional<utility::string_t> m_Name;
	std::optional<std::shared_ptr<PubSubModel>> m_PubSubModel;
	std::optional<double> m_SolveRadius;
	std::optional<bool> m_ManagedLeaderElection;
};

class ScopeDtoDataPage : public csp::services::DtoBase
{
public:
	ScopeDtoDataPage();
	virtual ~ScopeDtoDataPage();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	const std::vector<std::shared_ptr<ScopeDto>>& GetItems() const;
	void SetItems(const std::vector<std::shared_ptr<ScopeDto>>& Value);
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
	std::optional<std::vector<std::shared_ptr<ScopeDto>>> m_Items;
	std::optional<int32_t> m_Skip;
	std::optional<int32_t> m_Limit;
	std::optional<int32_t> m_ItemCount;
	std::optional<int64_t> m_ItemTotalCount;
};

/// <summary>
/// Document containing data related to managing a scope leader
/// </summary>
class ScopeLeaderDto : public csp::services::DtoBase
{
public:
	ScopeLeaderDto();
	virtual ~ScopeLeaderDto();

	utility::string_t ToJson() const override;
	void FromJson(const utility::string_t& Json) override;


	/// <summary>
	/// Id of the scope
	/// </summary>
	utility::string_t GetScopeId() const;
	void SetScopeId(const utility::string_t& Value);
	bool HasScopeId() const;

	/// <summary>
	/// id of user who's connection is currently leader
	/// </summary>
	utility::string_t GetLeaderUserId() const;
	void SetLeaderUserId(const utility::string_t& Value);
	bool HasLeaderUserId() const;

	/// <summary>
	/// Set to true while an election is being actively managed
	/// </summary>
	bool GetElectionInProgress() const;
	void SetElectionInProgress(const bool& Value);
	bool HasElectionInProgress() const;


protected:
	std::optional<utility::string_t> m_ScopeId;
	std::optional<utility::string_t> m_LeaderUserId;
	std::optional<bool> m_ElectionInProgress;
};


} // namespace csp::services::generated::multiplayerservice