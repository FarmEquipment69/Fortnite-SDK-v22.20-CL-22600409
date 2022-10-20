// BlueprintGeneratedClass B_HidingProp.B_HidingProp_C
// Size: 0x1360 (Inherited: 0xee0)
struct AB_HidingProp_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xee0(0x08)
	struct USceneComponent* ProjectileLocation_ForwardVector; // 0xee8(0x08)
	struct UStaticMeshComponent* LandedOnCollisionMesh; // 0xef0(0x08)
	struct USphereComponent* Sphere; // 0xef8(0x08)
	struct USceneComponent* HideLocation_ForwardVector; // 0xf00(0x08)
	float Loot_MovementTimeline_Forward_0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf08(0x04)
	float Loot_MovementTimeline_Z_0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf0c(0x04)
	enum class ETimelineDirection Loot_MovementTimeline__Direction_0FC694AE4A45D691CB6BD5A8CD00E521; // 0xf10(0x01)
	char pad_F11[0x7]; // 0xf11(0x07)
	struct UTimelineComponent* Loot_MovementTimeline; // 0xf18(0x08)
	struct FScalableFloat Enabled; // 0xf20(0x28)
	struct FScalableFloat HidingEnabled; // 0xf48(0x28)
	struct FScalableFloat PlayerLimit; // 0xf70(0x28)
	struct FScalableFloat TeleportEnabled; // 0xf98(0x28)
	struct FScalableFloat CanTeleport; // 0xfc0(0x28)
	struct TArray<struct AFortPawn*> HidingPlayers; // 0xfe8(0x10)
	struct FGameplayTag EnterGameplayCue; // 0xff8(0x04)
	struct FGameplayTag ExitGameplayCue; // 0xffc(0x04)
	struct FGameplayTag LandedOnGameplayCue; // 0x1000(0x04)
	char pad_1004[0x4]; // 0x1004(0x04)
	struct UMaterialInstanceDynamic* Mid; // 0x1008(0x08)
	struct FGameplayTag RustleGameplayCue; // 0x1010(0x04)
	struct FGameplayTag ExitGameplayCue_Player; // 0x1014(0x04)
	struct FGameplayTag WhileEnteringGameplayCue; // 0x1018(0x04)
	char pad_101C[0x4]; // 0x101c(0x04)
	double ObstructionTraceLength; // 0x1020(0x08)
	struct TArray<enum class EObjectTypeQuery> DestroyObjectTypes; // 0x1028(0x10)
	struct TArray<struct AFortPawn*> Array; // 0x1038(0x10)
	int32_t Int; // 0x1048(0x04)
	char pad_104C[0x4]; // 0x104c(0x04)
	struct FVector DeimosPropSpawnerOffset; // 0x1050(0x18)
	bool FixedEntranceDirection; // 0x1068(0x01)
	char pad_1069[0x7]; // 0x1069(0x07)
	double MaxInteractAngle; // 0x1070(0x08)
	struct FVector WobbleLocationOffset; // 0x1078(0x18)
	double InteractBelowPropDistance; // 0x1090(0x08)
	struct TMap<struct AFortPawn*, double> HiddenPlayersAndEnterTimes; // 0x1098(0x50)
	struct AFortPawn* LastPawnToInteract; // 0x10e8(0x08)
	struct AB_HidingProp_C* TargetTeleporter; // 0x10f0(0x08)
	struct FGameplayTag TeleporterEnterGameplayCue; // 0x10f8(0x04)
	struct FGameplayTag TeleporterExitGameplayCue; // 0x10fc(0x04)
	struct FGameplayTag LoopingTeleportingCue; // 0x1100(0x04)
	struct FGameplayTag GC_Wobble; // 0x1104(0x04)
	struct FTimerHandle WobbleTimerHandle; // 0x1108(0x08)
	struct TArray<struct FGameplayTag> BlockEntranceTags; // 0x1110(0x10)
	struct TArray<struct FGameplayTag> BlockExitTags; // 0x1120(0x10)
	struct UAnimMontage* EnterAnimMontage; // 0x1130(0x08)
	struct UAnimMontage* ExitAnimMontage; // 0x1138(0x08)
	struct AFortPawn* LastPawnToHide; // 0x1140(0x08)
	struct FGameplayTag TeleportingStateGC; // 0x1148(0x04)
	bool RandomWobbleNormal; // 0x114c(0x01)
	bool SingleOccupant; // 0x114d(0x01)
	bool Teleporting; // 0x114e(0x01)
	bool JumpOut; // 0x114f(0x01)
	struct UGameplayEffect* GE_OnExitingPropNoJump_BlockActions; // 0x1150(0x08)
	bool DestroyInNonSpyLTM; // 0x1158(0x01)
	bool ActiveInSpyLTM; // 0x1159(0x01)
	char pad_115A[0x6]; // 0x115a(0x06)
	struct TArray<struct FGameplayTag> ForceAllowInteractTags; // 0x1160(0x10)
	struct FGameplayTag IsTeleporter; // 0x1170(0x04)
	struct FGameplayTag ContainsPlayerRepNof; // 0x1174(0x04)
	struct FVector ObstructionTraceExtents; // 0x1178(0x18)
	struct FVector ObstructionTraceStartOffSet; // 0x1190(0x18)
	double ExitLaunchVelocity; // 0x11a8(0x08)
	struct FVector AdditionalLaunchVelocity; // 0x11b0(0x18)
	struct FVector FixedEntraceObstructionTraceEndOffset; // 0x11c8(0x18)
	bool isActiveTeleportExit; // 0x11e0(0x01)
	char pad_11E1[0x7]; // 0x11e1(0x07)
	struct UGameplayEffect* GE_TeleportAbilityGranted; // 0x11e8(0x08)
	bool DisableWhenSubmergedInWater; // 0x11f0(0x01)
	char pad_11F1[0x7]; // 0x11f1(0x07)
	struct FGameplayTagContainer DisableWhenSubmergedExceptionTags; // 0x11f8(0x20)
	struct TArray<struct AFortPawn*> NonCosmeticPawns; // 0x1218(0x10)
	struct UCameraModifier* CameraModifier; // 0x1228(0x08)
	struct FVector ; // 0x1230(0x18)
	struct AActor* Pawn; // 0x1248(0x08)
	struct FVector Loot_CachedActorForward; // 0x1250(0x18)
	struct TArray<struct FVector> Loot_VectorOffsets; // 0x1268(0x10)
	bool SpawnedLoot; // 0x1278(0x01)
	char pad_1279[0x7]; // 0x1279(0x07)
	double Loot_MoveForwardDistance; // 0x1280(0x08)
	double Loot_MoveUpDistance; // 0x1288(0x08)
	double Loot_SpawnRadius; // 0x1290(0x08)
	struct FVector Loot_SpawnOffset; // 0x1298(0x18)
	bool ShouldSpawnLoot; // 0x12b0(0x01)
	char pad_12B1[0x7]; // 0x12b1(0x07)
	struct FString Loot Tier Group; // 0x12b8(0x10)
	bool SetEntranceRotation; // 0x12c8(0x01)
	char pad_12C9[0x7]; // 0x12c9(0x07)
	struct UGameplayEffect* PropSpecificEffectToApplyToHiders; // 0x12d0(0x08)
	struct FScalableFloat RustlesPerWobble; // 0x12d8(0x28)
	struct FScalableFloat RustleWobbleRadius; // 0x1300(0x28)
	struct FScalableFloat EnterWobbleRadius; // 0x1328(0x28)
	double NonJumpExitDistance; // 0x1350(0x08)
	struct UFortCameraMode* Camera Mode; // 0x1358(0x08)

	void LocalOnFailedInteract(struct AFortPlayerPawn* InteractingPawn); // Function B_HidingProp.B_HidingProp_C.LocalOnFailedInteract // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	float GetMinDistanceFromInteraction(); // Function B_HidingProp.B_HidingProp_C.GetMinDistanceFromInteraction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void GetPlayerLimit(int32_t& PlayerLimit); // Function B_HidingProp.B_HidingProp_C.GetPlayerLimit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Allow Cosmetics For Pawn(struct AFortPawn*& Pawn, bool& Allow); // Function B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_ContainsPlayer(); // Function B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_IsTeleporter(); // Function B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool CheckCanUsePassage(struct UObject* Object); // Function B_HidingProp.B_HidingProp_C.CheckCanUsePassage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsInInfiltrationLTM(); // Function B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnRep_Teleporting(); // Function B_HidingProp.B_HidingProp_C.OnRep_Teleporting // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void RemoveHiddenPlayer(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddHiddenPlayer(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.AddHiddenPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_HidingPlayers(); // Function B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float& OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_HidingProp.B_HidingProp_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void Loot_MovementTimeline__FinishedFunc(); // Function B_HidingProp.B_HidingProp_C.Loot_MovementTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Loot_MovementTimeline__UpdateFunc(); // Function B_HidingProp.B_HidingProp_C.Loot_MovementTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnReady_64CBF02E419FF250B433D5B2A6E5D744(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141(); // Function B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_HidingProp.B_HidingProp_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void LandedOnHayStack(struct AFortPlayerPawn* PlayerPawn, double Z Velocity Mag); // Function B_HidingProp.B_HidingProp_C.LandedOnHayStack // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LaunchPlayersOffTop(struct AFortPlayerPawn* PlayerPawn); // Function B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void StopHidingLoop(); // Function B_HidingProp.B_HidingProp_C.StopHidingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HidingPlayerCountChanged(); // Function B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InteractEnter(); // Function B_HidingProp.B_HidingProp_C.InteractEnter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndHidingAnalyticSession(struct AFortPawn* FortPawn, enum class EEnvironmentalItemEndReason EndReason); // Function B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void WatchForPlayerDeath(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.WatchForPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Pawn Died(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_HidingProp.B_HidingProp_C.Pawn Died // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp.B_HidingProp_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_HidingProp.B_HidingProp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Teleport(struct AActor* Pawn); // Function B_HidingProp.B_HidingProp_C.Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IgnorePawnCollision(struct AFortPawn* Target, double InIgnoreDuration); // Function B_HidingProp.B_HidingProp_C.IgnorePawnCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleCameraCollisionForClients(); // Function B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartHiding(struct AFortPawn* InteractingPawn); // Function B_HidingProp.B_HidingProp_C.StartHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TurnClientCameraCollisionOn(); // Function B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& CueParameters); // Function B_HidingProp.B_HidingProp_C.AddGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& CueParameters); // Function B_HidingProp.B_HidingProp_C.RemoveGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters& CueParameters); // Function B_HidingProp.B_HidingProp_C.ExecuteGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMatchStarted(); // Function B_HidingProp.B_HidingProp_C.OnMatchStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Launch Pickups(struct TArray<struct AFortPickup*>& Array, struct AActor* Pawn); // Function B_HidingProp.B_HidingProp_C.Launch Pickups // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EntranceBlockedByUndamageable(struct AFortPlayerPawn* PlayerPawn); // Function B_HidingProp.B_HidingProp_C.EntranceBlockedByUndamageable // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IgnorePhysicsCollisionDamage(struct AFortPawn* Target, double Ignore Duration); // Function B_HidingProp.B_HidingProp_C.IgnorePhysicsCollisionDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_HidingProp(int32_t EntryPoint); // Function B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

