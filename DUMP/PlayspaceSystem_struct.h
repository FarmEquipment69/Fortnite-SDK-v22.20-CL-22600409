// Enum PlayspaceSystem.EPlayspaceCreationType
enum class EPlayspaceCreationType : uint8 {
	ChildOfRoot = 0,
	RootDestroy = 1,
	RootInserted = 2,
	EPlayspaceCreationType_MAX = 3
};

// Enum PlayspaceSystem.EPlayspaceComponentCreationType
enum class EPlayspaceComponentCreationType : uint8 {
	Root = 0,
	ByLocation = 1,
	ByTags = 2,
	EPlayspaceComponentCreationType_MAX = 3
};

// ScriptStruct PlayspaceSystem.PlayspaceUser
// Size: 0x58 (Inherited: 0x0c)
struct FPlayspaceUser : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FUniqueNetIdRepl UserId; // 0x10(0x30)
	struct APlayspace* LeafPlayspace; // 0x40(0x08)
	struct APlayerState* PlayerStateCached; // 0x48(0x08)
	struct AController* ControllerCached; // 0x50(0x08)
};

// ScriptStruct PlayspaceSystem.ReplicatedSpawnInfo
// Size: 0x58 (Inherited: 0x00)
struct FReplicatedSpawnInfo {
	struct FVector SpawnLocation; // 0x00(0x18)
	struct FRotator SpawnRotation; // 0x18(0x18)
	float ServerSpawnTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FVector LastLocation; // 0x38(0x18)
	float MinTimeForCameraFadeTransition; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct PlayspaceSystem.PlayspaceComponentConfiguration
// Size: 0x90 (Inherited: 0x00)
struct FPlayspaceComponentConfiguration {
	struct TSoftClassPtr<UObject> PlayspaceComponentClass; // 0x00(0x28)
	enum class EPlayspaceComponentCreationType CreationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FGameplayTagQuery TagQuery; // 0x30(0x48)
	struct FVector Location; // 0x78(0x18)
};

// ScriptStruct PlayspaceSystem.PlayspaceConfiguration
// Size: 0x30 (Inherited: 0x00)
struct FPlayspaceConfiguration {
	struct TSoftClassPtr<UObject> PlayspaceClass; // 0x00(0x28)
	enum class EPlayspaceCreationType CreationType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlayspaceSystem.PlayspaceSpawningInfo
// Size: 0x98 (Inherited: 0x00)
struct FPlayspaceSpawningInfo {
	struct FUniqueNetIdRepl UserId; // 0x00(0x30)
	struct TWeakObjectPtr<struct APlayspace> RequestingPlayspace; // 0x30(0x08)
	struct AActor* SpawnLocationActor; // 0x38(0x08)
	struct FVector SpawnLocation; // 0x40(0x18)
	struct FRotator SpawnRotation; // 0x58(0x18)
	float SpawnTimeServer; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector LastLocation; // 0x78(0x18)
	float MinTimeForCameraFadeTransition; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct PlayspaceSystem.ActorOverlapEvent
// Size: 0x10 (Inherited: 0x00)
struct FActorOverlapEvent {
	struct APlayerState* PlayerState; // 0x00(0x08)
	struct AGameplayVolume* Volume; // 0x08(0x08)
};

// ScriptStruct PlayspaceSystem.PlayspaceUserList
// Size: 0x128 (Inherited: 0x108)
struct FPlayspaceUserList : FFastArraySerializer {
	struct TArray<struct FPlayspaceUser> PlayspaceUsers; // 0x108(0x10)
	bool bIsInitialized; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct APlayspace* Playspace; // 0x120(0x08)
};

