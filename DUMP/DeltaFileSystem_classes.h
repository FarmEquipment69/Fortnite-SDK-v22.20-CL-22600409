// Class DeltaFileSystem.DeltaFile
// Size: 0x28 (Inherited: 0x28)
struct UDeltaFile : UInterface {
};

// Class DeltaFileSystem.DeltaFileApplier
// Size: 0x28 (Inherited: 0x28)
struct UDeltaFileApplier : UInterface {
};

// Class DeltaFileSystem.DeltaComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UDeltaComponent : UActorComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class DeltaFileSystem.DeltaFileSaveHandler
// Size: 0xd8 (Inherited: 0x28)
struct UDeltaFileSaveHandler : UObject {
	char pad_28[0xb0]; // 0x28(0xb0)
};

// Class DeltaFileSystem.DeltaFileSaveHandlerTestContext
// Size: 0x30 (Inherited: 0x28)
struct UDeltaFileSaveHandlerTestContext : UObject {
	struct UDeltaFileSaveHandler* SaveHandler; // 0x28(0x08)
};

// Class DeltaFileSystem.DeltaFileSubsystem
// Size: 0xe8 (Inherited: 0x30)
struct UDeltaFileSubsystem : UEngineSubsystem {
	struct TMap<struct UWorld*, struct FDeltaTrackingHandles> WorldToTrackingHandles; // 0x30(0x50)
	struct TMap<struct FName, struct UObject*> DeltaFiles; // 0x80(0x50)
	struct FSoftClassPath DefaultDeltaFileClass; // 0xd0(0x18)
};

// Class DeltaFileSystem.MapDelta
// Size: 0xf0 (Inherited: 0x28)
struct UMapDelta : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FString PackageToApplyTo; // 0x30(0x10)
	struct TMap<struct FGuid, struct FAddAction> AddActions; // 0x40(0x50)
	struct TArray<struct FUpdateAction> UpdateActions; // 0x90(0x10)
	struct TMap<struct FGuid, struct FDeleteAction> DeleteActions; // 0xa0(0x50)
};

// Class DeltaFileSystem.MapDeltaApplier
// Size: 0xf0 (Inherited: 0x28)
struct UMapDeltaApplier : UObject {
	char pad_28[0xc8]; // 0x28(0xc8)
};

