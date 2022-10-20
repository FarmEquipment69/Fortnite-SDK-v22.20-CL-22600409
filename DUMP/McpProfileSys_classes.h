// Class McpProfileSys.McpItemAware
// Size: 0x28 (Inherited: 0x28)
struct UMcpItemAware : UInterface {
};

// Class McpProfileSys.McpItemDefinitionBase
// Size: 0x30 (Inherited: 0x30)
struct UMcpItemDefinitionBase : UPrimaryDataAsset {
};

// Class McpProfileSys.McpProfile
// Size: 0x140 (Inherited: 0x28)
struct UMcpProfile : UObject {
	bool AllowSubscriptionToNotificationsService; // 0x28(0x01)
	char pad_29[0x77]; // 0x29(0x77)
	struct FString DebugName; // 0xa0(0x10)
	bool bProfileLockOperationPending; // 0xb0(0x01)
	bool bProfileUnlockOperationPending; // 0xb1(0x01)
	bool bEnableMocks; // 0xb2(0x01)
	char pad_B3[0x15]; // 0xb3(0x15)
	struct UMcpProfileGroup* ProfileGroup; // 0xc8(0x08)
	struct FString ProfileId; // 0xd0(0x10)
	int64_t ProfileRevision; // 0xe0(0x08)
	int32_t FullProfileQueryQueued; // 0xe8(0x04)
	bool bProfileWriteLocked; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FDateTime ProfileWriteLockExpireTime; // 0xf0(0x08)
	bool QueuedProfileUpdatingEnabled; // 0xf8(0x01)
	char pad_F9[0x47]; // 0xf9(0x47)

	void UnlockProfileForWrite(struct FString Code, struct FDedicatedServerUrlContext& Context); // Function McpProfileSys.McpProfile.UnlockProfileForWrite // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
	void QueryPublicProfile(struct FBaseUrlContext& Context); // Function McpProfileSys.McpProfile.QueryPublicProfile // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
	void QueryProfile(struct FBaseUrlContext& Context); // Function McpProfileSys.McpProfile.QueryProfile // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
	void LockProfileForWrite(struct FString Code, int32_t Timeout, struct FDedicatedServerUrlContext& Context); // Function McpProfileSys.McpProfile.LockProfileForWrite // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
	void DeleteProfile(struct FClientUrlContext& Context); // Function McpProfileSys.McpProfile.DeleteProfile // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
	void DeleteAllProfiles(struct FClientUrlContext& Context); // Function McpProfileSys.McpProfile.DeleteAllProfiles // (Final|Net|NetReliableNetRequest|Native|Event|Private|HasOutParms) // @ game+0xffff80089d620000
};

// Class McpProfileSys.McpProfileGroup
// Size: 0x280 (Inherited: 0x28)
struct UMcpProfileGroup : UObject {
	char pad_28[0xb4]; // 0x28(0xb4)
	int32_t DelayMcpResults; // 0xdc(0x04)
	int32_t WeeklyIntervalStartDay; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FProfileEntry> ProfileList; // 0xe8(0x10)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FString PlayerName; // 0x100(0x10)
	bool bIsServer; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString ProfileNotificationsStompTopic; // 0x118(0x10)
	char pad_128[0x50]; // 0x128(0x50)
	struct FString LastMcpVersion; // 0x178(0x10)
	struct FString LastContentVersion; // 0x188(0x10)
	struct FString LastMinBuild; // 0x198(0x10)
	struct FTimespan LocalTimeOffset; // 0x1a8(0x08)
	char pad_1B0[0x8]; // 0x1b0(0x08)
	struct FString LockCode; // 0x1b8(0x10)
	struct TArray<struct UMcpProfile*> LockedProfiles; // 0x1c8(0x10)
	struct FString LockedProfilesString; // 0x1d8(0x10)
	int32_t ProfileWriteLockTimeoutSecs; // 0x1e8(0x04)
	bool bSubscribedToNotifications; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	struct FString ApplyStashEndPoint; // 0x1f0(0x10)
	char pad_200[0x8]; // 0x200(0x08)
	bool bSendProfileCommandRevisions; // 0x208(0x01)
	bool bAsyncParseProfileUpdates; // 0x209(0x01)
	char pad_20A[0x56]; // 0x20a(0x56)
	int32_t MaxChangesToForwardInUpdate; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TArray<struct FString> ForwardToClientExclusions; // 0x268(0x10)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class McpProfileSys.McpProfileManager
// Size: 0x68 (Inherited: 0x28)
struct UMcpProfileManager : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct FProfileGroupEntry> ServerProfileGroups; // 0x38(0x10)
	struct TArray<struct FProfileGroupEntry> ClientProfileGroups; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	int32_t MaxItemsProcessedInInitialUpdatesPerTick; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

