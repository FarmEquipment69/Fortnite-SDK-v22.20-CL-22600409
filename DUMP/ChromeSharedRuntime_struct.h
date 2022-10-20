// Enum ChromeSharedRuntime.ELacklusterActorType
enum class ELacklusterActorType : uint8 {
	Undefined = 0,
	GenericChrome = 1,
	BuildingRoof = 2,
	BuildingWall = 3,
	BuildingPropWall = 4,
	BuildingCorner = 5,
	BuildingFloor = 6,
	BuildingProp = 7,
	BuildingDeco = 8,
	BuildingPillar = 9,
	ParentTreeApollo = 10,
	ParentTreeApolloTrunk = 11,
	StaticMeshActor = 12,
	ArtemisHedgeParent = 13,
	ArtemisHedgeParentMasked = 14,
	PropPlantShrubParent = 15,
	TieredChestAthena = 16,
	TieredAmmoAthena = 17,
	FenceChainlinkParent = 18,
	BigBush = 19,
	AI = 20,
	AI_Grandma = 21,
	Cornfield = 22,
	Valet = 23,
	ValetChonkers = 24,
	Vehicle = 25,
	AI_Avian = 26,
	BuildingProp_TwoSided = 27,
	Prop_FortressBaseMaterial = 28,
	BuildingProp_TwoSided_Masked = 29,
	BuildingActor = 30,
	Jungle = 31,
	InteractableProp = 32,
	HeraldsFortress = 33,
	HeraldsFortressCrystals = 34,
	ChromeDirectionalLaunchpad = 35,
	SearchLights = 36,
	AI_Shark = 37,
	Buildable = 38,
	IceCreamTruck = 39,
	ELacklusterActorType_MAX = 40
};

// Enum ChromeSharedRuntime.ELacklusterChromeType
enum class ELacklusterChromeType : uint8 {
	Chrome = 0,
	ChromePhaseable = 1,
	ChromePhaseableMasked = 2,
	ChromeGeneric = 3,
	ChromePetrified = 4,
	ELacklusterChromeType_MAX = 5
};

// Enum ChromeSharedRuntime.ELacklusterTextureGroup
enum class ELacklusterTextureGroup : uint8 {
	Normals = 0,
	Normals_4layer_2nd = 1,
	Normals_4layer_3rd = 2,
	Normals_4layer_4th = 3,
	Diffuse = 4,
	Diffuse_4layer_2nd = 5,
	Diffuse_4layer_3rd = 6,
	Diffuse_4Layer_4th = 7,
	OpacityMask = 8,
	Emissive = 9,
	Specular = 10,
	GmapOrEmissiveOrLights = 11,
	VertexPaint_Color = 12,
	VertexPaint_RGBMask = 13,
	VertexPaint_Normal = 14,
	ELacklusterTextureGroup_MAX = 15
};

// ScriptStruct ChromeSharedRuntime.FortChromeComponentData
// Size: 0x70 (Inherited: 0x00)
struct FFortChromeComponentData {
	struct TSoftClassPtr<UObject> ChromeComponent; // 0x00(0x28)
	struct FGameplayTagQuery ChromeTagQuery; // 0x28(0x48)
};

// ScriptStruct ChromeSharedRuntime.LacklusterMaterialData
// Size: 0x68 (Inherited: 0x00)
struct FLacklusterMaterialData {
	struct UMeshComponent* MeshComponent; // 0x00(0x08)
	struct TMap<struct FName, struct UTexture*> SetTexture; // 0x08(0x50)
	int32_t MaterialIndex; // 0x58(0x04)
	bool bIsMaskedMaterial; // 0x5c(0x01)
	bool bIsChonkers; // 0x5d(0x01)
	enum class ELacklusterActorType ActorType; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	struct AActor* Actor; // 0x60(0x08)
};

// ScriptStruct ChromeSharedRuntime.LacklusterOriginalMaterialData
// Size: 0x20 (Inherited: 0x00)
struct FLacklusterOriginalMaterialData {
	struct UMeshComponent* MeshComponent; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	int32_t MaterialIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct AActor* Actor; // 0x18(0x08)
};

// ScriptStruct ChromeSharedRuntime.LacklusterTextureSet
// Size: 0x08 (Inherited: 0x00)
struct FLacklusterTextureSet {
	struct FName GetParameter; // 0x00(0x04)
	enum class ELacklusterTextureGroup TextureGroup; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ChromeSharedRuntime.ClassToActorType
// Size: 0x10 (Inherited: 0x00)
struct FClassToActorType {
	struct UObject* Class; // 0x00(0x08)
	enum class ELacklusterActorType ActorType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ChromeSharedRuntime.TagQueryToChromeTypeOverride
// Size: 0x50 (Inherited: 0x00)
struct FTagQueryToChromeTypeOverride {
	struct FGameplayTagQuery TagQuery; // 0x00(0x48)
	enum class ELacklusterChromeType ChromeType; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ChromeSharedRuntime.ChromeTypeToMaterial
// Size: 0x58 (Inherited: 0x00)
struct FChromeTypeToMaterial {
	struct UMaterialInterface* MaterialForAllTypes; // 0x00(0x08)
	struct TMap<enum class ELacklusterChromeType, struct UMaterialInterface*> ChromeTypeToMaterial; // 0x08(0x50)
};

// ScriptStruct ChromeSharedRuntime.ChromeTextureSetArray
// Size: 0x10 (Inherited: 0x00)
struct FChromeTextureSetArray {
	struct TArray<struct FLacklusterTextureSet> TextureSets; // 0x00(0x10)
};

// ScriptStruct ChromeSharedRuntime.LacklusterData
// Size: 0x2d8 (Inherited: 0x00)
struct FLacklusterData {
	struct TSoftClassPtr<UObject> ApplyChromeClassPath; // 0x00(0x28)
	struct TSoftClassPtr<UObject> ChromeAudioClassPath; // 0x28(0x28)
	struct TArray<struct FString> MaterialsToIgnore; // 0x50(0x10)
	struct TMap<enum class ELacklusterTextureGroup, struct FName> SetParameterNames; // 0x60(0x50)
	struct TArray<struct FClassToActorType> ClassesToActorTypes; // 0xb0(0x10)
	struct TMap<enum class ELacklusterActorType, struct FChromeTypeToMaterial> ChromeMaterialOverrides; // 0xc0(0x50)
	struct TMap<enum class ELacklusterActorType, struct FChromeTextureSetArray> ActorToTextures; // 0x110(0x50)
	struct TArray<struct FTagQueryToChromeTypeOverride> TagQueryToChromeTypeOverrides; // 0x160(0x10)
	struct TMap<struct FName, enum class ELacklusterActorType> TagToActorTypes; // 0x170(0x50)
	struct UMaterialInstance* GenericChromeMaterial; // 0x1c0(0x08)
	struct FGameplayTagContainer NoAnimChestMaterialTags; // 0x1c8(0x20)
	struct UMaterialInstance* ChromeAnimChestMaterial; // 0x1e8(0x08)
	struct UMaterialInstance* ChromeNoAnimChestMaterial; // 0x1f0(0x08)
	struct TMap<struct AActor*, bool> BuildingChromeApplied; // 0x1f8(0x50)
	struct USoundBase* BuildingSMActorHitSound; // 0x248(0x08)
	struct USoundBase* BuildingSMActorPropDeathSound; // 0x250(0x08)
	struct USoundBase* BuildingSMActorNonPropDeathSound; // 0x258(0x08)
	struct USoundBase* BuildingSMActorPropChromedSound; // 0x260(0x08)
	struct USoundBase* BuildingSMActorNonPropChromedSound; // 0x268(0x08)
	ClassPtrProperty TieredChestClass; // 0x270(0x08)
	ClassPtrProperty TieredChestParentClass; // 0x278(0x08)
	struct TMap<struct AActor*, struct UActorComponent*> ChromeSoundComponents; // 0x280(0x50)
	bool bIsInitialized; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
};

