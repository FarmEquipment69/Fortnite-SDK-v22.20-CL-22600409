// BlueprintGeneratedClass PartyDisplayManagerBP.PartyDisplayManagerBP_C
// Size: 0x724 (Inherited: 0x548)
struct APartyDisplayManagerBP_C : APartyDisplayManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UChildActorComponent* PrefabActorComp; // 0x550(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x558(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x560(0x08)
	struct UStaticMeshComponent* ScalePivot; // 0x568(0x08)
	struct UStaticMeshComponent* PivotHolder; // 0x570(0x08)
	struct UParticleSystemComponent* CelebratoryFX; // 0x578(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x580(0x08)
	float HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x588(0x04)
	enum class ETimelineDirection HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct UTimelineComponent* HoloMatColorPulse; // 0x590(0x08)
	float ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x598(0x04)
	enum class ETimelineDirection ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	struct UTimelineComponent* ScaleAnimEvolve; // 0x5a0(0x08)
	float ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43; // 0x5a8(0x04)
	enum class ETimelineDirection ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43; // 0x5ac(0x01)
	char pad_5AD[0x3]; // 0x5ad(0x03)
	struct UTimelineComponent* ScaleAnimLevel; // 0x5b0(0x08)
	struct FTimerHandle TimerHandle; // 0x5b8(0x08)
	double Rotation; // 0x5c0(0x08)
	struct UFortItem* ItemToRepresent; // 0x5c8(0x08)
	bool PreviewRotation; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct UCurveFloat* RotationAnimation; // 0x5d8(0x08)
	struct UParticleSystem* LevelUpFX; // 0x5e0(0x08)
	struct UParticleSystem* EvolveUpFX; // 0x5e8(0x08)
	struct FVector FXTargetLocation; // 0x5f0(0x18)
	bool IsCharacter; // 0x608(0x01)
	bool IsEvolve; // 0x609(0x01)
	char pad_60A[0x6]; // 0x60a(0x06)
	struct UParticleSystem* CharLevelUpFX; // 0x610(0x08)
	struct UParticleSystem* CharEvolveUpFX; // 0x618(0x08)
	struct UMaterialInstanceDynamic* UIoverrideMID; // 0x620(0x08)
	bool HasResetVisuals; // 0x628(0x01)
	char pad_629[0x7]; // 0x629(0x07)
	struct UParticleSystemComponent* ParticleSystem1; // 0x630(0x08)
	struct UParticleSystemComponent* ParticleSystem2; // 0x638(0x08)
	struct UParticleSystem* CharSwapTransitionFX; // 0x640(0x08)
	bool IsCharacterVisible; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct AFortPlayerPawn* HeroPawn; // 0x650(0x08)
	bool SanityChecker; // 0x658(0x01)
	char pad_659[0x7]; // 0x659(0x07)
	struct UMaterialInstanceDynamic* MID_HoloMaterial; // 0x660(0x08)
	struct FName ; // 0x668(0x04)
	struct FName VertexRange; // 0x66c(0x04)
	struct FName ; // 0x670(0x04)
	struct FName ; // 0x674(0x04)
	struct FName ; // 0x678(0x04)
	struct FName ; // 0x67c(0x04)
	struct FName ; // 0x680(0x04)
	struct FName ; // 0x684(0x04)
	struct FName ; // 0x688(0x04)
	struct FName ; // 0x68c(0x04)
	struct FName ; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct FVector ScalePivotPreScaleLocation; // 0x698(0x18)
	struct FVector StaticMeshPreScaleLocation; // 0x6b0(0x18)
	struct FVector SkelMeshPreScaleLocation; // 0x6c8(0x18)
	struct FVector PrefabPreScaleLocation; // 0x6e0(0x18)
	struct UParticleSystemComponent* GhostPistolVFX; // 0x6f8(0x08)
	struct UParticleSystemComponent* Ghost Sword VFX; // 0x700(0x08)
	struct UStaticMeshComponent* Ghost Sword Mesh; // 0x708(0x08)
	struct UParticleSystemComponent* TransitionFXComponent; // 0x710(0x08)
	struct UParticleSystem* CharSwapTransitionFXLoop; // 0x718(0x08)
	struct FName HideElementsOnlyConsidersRedChannel; // 0x720(0x04)

	void ResetPreScaleLocations(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetPreScaleLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RestoreTeleportMIDsInProgress(struct AFortPlayerPawn* Pawn); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandlePartyMemberInProgressDisplayChanges(struct AFortPlayerPawn* Pawn); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PartyMemberInProgressCheck(struct AFortPlayerPawn* Pawn); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct AActor* GetPrefabActorForCurrentDisplayedItem(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void PostSetupPrefabVisuals(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetMeshForCurrentDisplayedItem(struct UMeshComponent*& OutDisplayedMesh); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetItemDefinitionToShow(struct UFortItemDefinition*& ItemDefinition); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetUIOverrideVisuals(struct UTexture2D* Large Texture, struct UFortItemDefinition* Item, enum class EFortRarity Rarity); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FTransform GetWeaponPlacementTransform(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdatePreviewMeshTransforms(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FTransform GetItemPreviewOffset(struct UFortItemDefinition* ItemDefinition); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FTransform GetPreviewMeshWorldTransform(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetupStaticMeshVisuals(struct UStaticMesh* NewMesh); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupSkeletalMeshVisuals(struct USkeletalMesh* NewMesh); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetVisuals(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScaleAnimLevel__FinishedFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ScaleAnimLevel__UpdateFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ScaleAnimEvolve__FinishedFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ScaleAnimEvolve__UpdateFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void HoloMatColorPulse__FinishedFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void HoloMatColorPulse__UpdateFunc(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Completed_01D864884864692DBB7035B0996A5437(struct UFortItem* Item, struct FGuid RequestId); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowItem(struct UFortItem* ItemToView, struct FGuid& RequestId); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PlayLevelUpEffect(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayEvolutionEffect(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void CelebrateWithFX(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PerformScaleMeshFX(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleLoadingAssetsForItemCompleted(struct UFortItem* ItemWhoseAssetsWereLoaded, struct TArray<struct UObject*>& LoadedAssets, struct FGuid& RequestId); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Set Character Parts Visibility(bool NewVisible); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CharacterCustomizationFinished(struct AFortPlayerPawn* Pawn); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayerPawnAddedToLobby(struct AFortPlayerPawn* Pawn); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ResOutPawnFromLobby(struct AFortPlayerPawn* Pawn, int32_t PartyIndex); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetupPrefabVisuals(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnEmoteSetupFinished(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnEmoteSetupFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMeshLODStreamingFinished(); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnMeshLODStreamingFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PartyDisplayManagerBP(int32_t EntryPoint); // Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

