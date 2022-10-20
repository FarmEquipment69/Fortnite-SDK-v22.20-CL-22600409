// ScriptStruct McpProfileSys.ProfileUpdateSingle
// Size: 0x50 (Inherited: 0x00)
struct FProfileUpdateSingle {
	int64_t ProfileRevision; // 0x00(0x08)
	struct FString ProfileId; // 0x08(0x10)
	int64_t ProfileChangesBaseRevision; // 0x18(0x08)
	struct TArray<struct FJsonObjectWrapper> ProfileChanges; // 0x20(0x10)
	struct FDateTime LockExpiration; // 0x30(0x08)
	struct TArray<struct FJsonObjectWrapper> Notifications; // 0x38(0x10)
	int32_t ProfileCommandRevision; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct McpProfileSys.McpLootEntry
// Size: 0x58 (Inherited: 0x00)
struct FMcpLootEntry {
	struct FString ItemType; // 0x00(0x10)
	struct FString ItemGuid; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FJsonObjectWrapper Attributes; // 0x28(0x20)
	struct FString ItemProfile; // 0x48(0x10)
};

// ScriptStruct McpProfileSys.BaseUrlContext
// Size: 0x80 (Inherited: 0x00)
struct FBaseUrlContext {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct McpProfileSys.ClientUrlContext
// Size: 0x80 (Inherited: 0x80)
struct FClientUrlContext : FBaseUrlContext {
};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// Size: 0x80 (Inherited: 0x80)
struct FDedicatedServerUrlContext : FBaseUrlContext {
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// Size: 0x58 (Inherited: 0x00)
struct FMcpProfileChangeRequest {
	int32_t BaseCommandRevision; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FMcpAddItemRequest> AddRequests; // 0x08(0x10)
	struct TArray<struct FMcpRemoveItemRequest> RemoveRequests; // 0x18(0x10)
	struct TArray<struct FMcpChangeQuantityRequest> ChangeQuantityRequests; // 0x28(0x10)
	struct TArray<struct FMcpChangeAttributesRequest> ChangeAttributesRequests; // 0x38(0x10)
	struct TArray<struct FJsonObjectWrapper> ChangeStatRequests; // 0x48(0x10)
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// Size: 0x30 (Inherited: 0x00)
struct FMcpChangeAttributesRequest {
	struct FString ItemId; // 0x00(0x10)
	struct FJsonObjectWrapper Attributes; // 0x10(0x20)
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// Size: 0x18 (Inherited: 0x00)
struct FMcpChangeQuantityRequest {
	struct FString ItemId; // 0x00(0x10)
	int32_t DeltaQuantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// Size: 0x10 (Inherited: 0x00)
struct FMcpRemoveItemRequest {
	struct FString ItemId; // 0x00(0x10)
};

// ScriptStruct McpProfileSys.McpAddItemRequest
// Size: 0x48 (Inherited: 0x00)
struct FMcpAddItemRequest {
	struct FString ItemId; // 0x00(0x10)
	struct FString TemplateId; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FJsonObjectWrapper Attributes; // 0x28(0x20)
};

// ScriptStruct McpProfileSys.PublicUrlContext
// Size: 0x80 (Inherited: 0x80)
struct FPublicUrlContext : FBaseUrlContext {
};

// ScriptStruct McpProfileSys.ProfileEntry
// Size: 0x20 (Inherited: 0x00)
struct FProfileEntry {
	struct FString ProfileId; // 0x00(0x10)
	struct UMcpProfile* ProfileObject; // 0x10(0x08)
	bool bWaitingForRefreshAllProfilesResponse; // 0x18(0x01)
	bool bForwardUpdatesToClient; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// Size: 0x28 (Inherited: 0x00)
struct FProfileGroupEntry {
	char pad_0[0x20]; // 0x00(0x20)
	struct UMcpProfileGroup* ProfileGroup; // 0x20(0x08)
};

// ScriptStruct McpProfileSys.ProfileUpdate
// Size: 0x70 (Inherited: 0x50)
struct FProfileUpdate : FProfileUpdateSingle {
	int32_t ResponseVersion; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FDateTime ServerTime; // 0x58(0x08)
	struct TArray<struct FProfileUpdateSingle> MultiUpdate; // 0x60(0x10)
};

// ScriptStruct McpProfileSys.AccountIdAndProfileResponse
// Size: 0x80 (Inherited: 0x00)
struct FAccountIdAndProfileResponse {
	struct FString AccountId; // 0x00(0x10)
	struct FProfileUpdate Response; // 0x10(0x70)
};

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// Size: 0x28 (Inherited: 0x00)
struct FProfileUpdateNotification {
	struct TArray<struct FJsonObjectWrapper> Changes; // 0x00(0x10)
	struct FDateTime LockExpiration; // 0x10(0x08)
	int32_t CommandRevision; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t Revision; // 0x20(0x08)
};

// ScriptStruct McpProfileSys.McpLootResult
// Size: 0x20 (Inherited: 0x00)
struct FMcpLootResult {
	struct FString TierGroupName; // 0x00(0x10)
	struct TArray<struct FMcpLootEntry> Items; // 0x10(0x10)
};

// ScriptStruct McpProfileSys.McpItemIdAndQuantity
// Size: 0x58 (Inherited: 0x58)
struct FMcpItemIdAndQuantity : FMcpLootEntry {
};

// ScriptStruct McpProfileSys.GiftBoxInfo
// Size: 0x48 (Inherited: 0x00)
struct FGiftBoxInfo {
	struct FDateTime GiftedOn; // 0x00(0x08)
	struct FString FromAccountId; // 0x08(0x10)
	struct TArray<struct FMcpLootEntry> LootList; // 0x18(0x10)
	struct FJsonObjectWrapper Params; // 0x28(0x20)
};

