// Class SidecarSys.SidecarDss
// Size: 0xd8 (Inherited: 0x28)
struct USidecarDss : UObject {
	struct TMap<struct FString, struct FSidecarFileInfo> FileInfoMap; // 0x28(0x50)
	struct FString DssDownloadUrl; // 0x78(0x10)
	struct FString DssCheckoutUrl; // 0x88(0x10)
	struct FString DssUploadUrl; // 0x98(0x10)
	struct FString DssRestoreUrl; // 0xa8(0x10)
	struct FString DssCheckinUrl; // 0xb8(0x10)
	struct FString DssListFilesUrl; // 0xc8(0x10)
};

// Class SidecarSys.SidecarInventorySys
// Size: 0xd0 (Inherited: 0x28)
struct USidecarInventorySys : UObject {
	struct FString InventoryDownloadUrl; // 0x28(0x10)
	struct FString InventoryLockUrl; // 0x38(0x10)
	struct FString ItemUpdateUrl; // 0x48(0x10)
	char pad_58[0x78]; // 0x58(0x78)
};

// Class SidecarSys.SidecarSys
// Size: 0x58 (Inherited: 0x28)
struct USidecarSys : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct USidecarDss* SidecarDss; // 0x38(0x08)
	struct USidecarInventorySys* SidecarInventory; // 0x40(0x08)
	char pad_48[0x10]; // 0x48(0x10)
};

