// Class ChromeSharedRuntime.ApplyChromeComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UApplyChromeComponent : UActorComponent {
	struct TArray<struct UActorComponent*> NativePredefinedMeshComponents; // 0xa0(0x10)
};

// Class ChromeSharedRuntime.ChromeBlobAnimInstance
// Size: 0x750 (Inherited: 0x6f0)
struct UChromeBlobAnimInstance : UCustomCharacterPartAnimInstance {
	struct FFortAnimInput_Zipline ZiplineInput; // 0x6f0(0x38)
	float LocalVelocityAngle; // 0x728(0x04)
	float LeanAngle; // 0x72c(0x04)
	float LeanAngleMultiplier; // 0x730(0x04)
	float LeanInterpolationSpeed; // 0x734(0x04)
	struct FRotator ActorRotationLastTick; // 0x738(0x18)
};

// Class ChromeSharedRuntime.ChromeGameFeatureData
// Size: 0x530 (Inherited: 0x520)
struct UChromeGameFeatureData : UFortGameFeatureData {
	struct TArray<struct FFortChromeComponentData> ChromeComponents; // 0x520(0x10)
};

// Class ChromeSharedRuntime.ChromeSoundComponentBase
// Size: 0xa0 (Inherited: 0xa0)
struct UChromeSoundComponentBase : UActorComponent {

	void SetupChromeAudio(struct AActor* Actor, bool bAdd, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.ChromeSoundComponentBase.SetupChromeAudio // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class ChromeSharedRuntime.FortChromeSubsystem
// Size: 0x418 (Inherited: 0x30)
struct UFortChromeSubsystem : UWorldSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct ABuildingFoundation*> StreamedInBuildingFoundations; // 0x38(0x10)
	struct TArray<struct ABuildingFoundation*> FullyChromedPreviewFoundations; // 0x48(0x10)
	struct FName ChromeTagName; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FGameplayTagQuery ApplyChromeMaterialsTagQuery; // 0x60(0x48)
	struct TArray<struct FFortChromeComponentData> ChromeComponents; // 0xa8(0x10)
	struct FLacklusterData LacklusterData; // 0xb8(0x2d8)
	struct TArray<struct AActor*> ActorsWaitingForChromeSetup; // 0x390(0x10)
	struct TMap<struct ABuildingFoundation*, bool> FoundationsWithChromeActors; // 0x3a0(0x50)
	char pad_3F0[0x28]; // 0x3f0(0x28)

	bool ShouldDelayASCCreation(); // Function ChromeSharedRuntime.FortChromeSubsystem.ShouldDelayASCCreation // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6726904
	void SetupChromeOnActor(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.SetupChromeOnActor // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RestoreActorOriginalMaterials(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.RestoreActorOriginalMaterials // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PawnHitActor(struct AFortPlayerPawn* Pawn, struct FHitResult& HitResult, struct AActor* HitActor); // Function ChromeSharedRuntime.FortChromeSubsystem.PawnHitActor // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x67267cc
	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function ChromeSharedRuntime.FortChromeSubsystem.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x2b53640
	void InitLacklusterFunctionLibrary(); // Function ChromeSharedRuntime.FortChromeSubsystem.InitLacklusterFunctionLibrary // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void GetOverlappingActorsOfClass(struct AActor* Actor, struct AActor* Class, struct TArray<struct AActor*>& OutOverlappingActors); // Function ChromeSharedRuntime.FortChromeSubsystem.GetOverlappingActorsOfClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6724b98
	void ApplyChromeToActor(struct AActor* Actor); // Function ChromeSharedRuntime.FortChromeSubsystem.ApplyChromeToActor // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class ChromeSharedRuntime.FortGameFeatureAction_AddChromeSubsystem
// Size: 0x50 (Inherited: 0x50)
struct UFortGameFeatureAction_AddChromeSubsystem : UFortGameFeatureAction_AddWorldSubsystem {
};

// Class ChromeSharedRuntime.LacklusterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULacklusterFunctionLibrary : UBlueprintFunctionLibrary {

	bool UseNativeFunctions(); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.UseNativeFunctions // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x254d664
	void NativeStopBuildingAudio(struct ABuildingActor* BuildingActor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeStopBuildingAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67266c0
	bool NativeShouldIgnoreMaterial(struct UMaterialInterface* Material); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeShouldIgnoreMaterial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67265a0
	void NativeSetChromeMaterials(struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeSetChromeMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67264c8
	void NativeSetChromeAudio(struct AActor* Actor, bool bAdd, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeSetChromeAudio // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x23d5108
	void NativeRestoreOriginalMaterials(struct AActor* Actor, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialDataArray); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeRestoreOriginalMaterials // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6726378
	bool NativeIsMaskedBlendMode(struct UMaterialInterface* MaterialInterface); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeIsMaskedBlendMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67262e8
	enum class ELacklusterActorType NativeHandleActorTypeSpecialCases(enum class ELacklusterActorType ActorType, bool bIsMaskedMaterial, bool bIsChonkers); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeHandleActorTypeSpecialCases // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67261a8
	struct UApplyChromeComponent* NativeGetChromeVisualComponent(struct AActor* Actor, bool bCreateComponentIfNotFound); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeVisualComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6726048
	struct UMaterialInstance* NativeGetChromeTieredChestMaterial(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeTieredChestMaterial // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6725fc8
	struct UChromeSoundComponentBase* NativeGetChromeSoundComponent(struct AActor* Actor, bool bCreateComponentIfNotFound); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeSoundComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6725e78
	struct UMaterialInterface* NativeGetChromeMaterialOverride(bool bIsMaskedMaterial, bool bIsChonkers, enum class ELacklusterActorType ActorType, struct AActor* Actor, enum class ELacklusterChromeType ChromeType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeMaterialOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6725ce8
	bool NativeGetChromeChonkerTires(struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeChonkerTires // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6725ba8
	void NativeGetChromeActorType(struct AActor* Actor, enum class ELacklusterChromeType& ChromeTypeOut, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeGetChromeActorType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x258b790
	void NativeFindTexturesFromComponents(enum class ELacklusterActorType ActorType, struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindTexturesFromComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67258a0
	struct FName NativeFindSetParameterName(enum class ELacklusterTextureGroup TextureGroup); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindSetParameterName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x672581c
	struct TArray<struct FLacklusterTextureSet> NativeFindGetSetParameters(bool bIsMaskedMaterial, bool bIsChonkers, enum class ELacklusterActorType ActorType, struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeFindGetSetParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67256cc
	bool NativeExcludeFromChroming(struct USceneComponent* Component); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeExcludeFromChroming // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x672564c
	bool NativeDoesActorSupportChromeSoundComponent(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeDoesActorSupportChromeSoundComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x2831644
	bool NativeCastToSpecificClasses(struct AActor* Actor, enum class ELacklusterChromeType ChromeTypeIn, enum class ELacklusterChromeType& ChromeTypeOut, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeCastToSpecificClasses // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67252c0
	bool NativeCastToParentClasses(struct AActor* Actor, enum class ELacklusterActorType& ActorTypeOut); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeCastToParentClasses // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6725198
	bool NativeAreWeOverridingAudio(struct AActor* Actor); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeAreWeOverridingAudio // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x67250d8
	void NativeApplyChromeMaterial(struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs, enum class ELacklusterChromeType ChromeType, enum class ELacklusterActorType OverrideActorType); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeApplyChromeMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x19bd510
	void NativeAddTextureData(enum class ELacklusterActorType ActorType, struct AActor* Actor, struct TArray<struct FLacklusterMaterialData>& ChromeMaterialStructs, struct TArray<struct FLacklusterOriginalMaterialData>& OriginalMaterialStructs, int32_t MaterialIndex, struct UMaterialInterface* Material, struct UMeshComponent* MeshComponent); // Function ChromeSharedRuntime.LacklusterFunctionLibrary.NativeAddTextureData // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6724e84
};

