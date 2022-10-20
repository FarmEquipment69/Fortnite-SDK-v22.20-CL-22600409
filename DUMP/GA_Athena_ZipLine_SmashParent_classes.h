// BlueprintGeneratedClass GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C
// Size: 0xbe8 (Inherited: 0xb38)
struct UGA_Athena_ZipLine_SmashParent_C : UFortGameplayAbility_ZiplineSmashBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb38(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb40(0x08)
	double UpdateIntervalForSmashVolume; // 0xb48(0x08)
	struct UGameplayEffect* StructureDamageGE; // 0xb50(0x08)
	struct ABP_ZipLine_Athena_Harness_C* ZiplineHarness; // 0xb58(0x08)
	struct AFortAthenaZipline* Zipline; // 0xb60(0x08)
	struct UPrimitiveComponent* ZiplineInteractComponent; // 0xb68(0x08)
	enum class EFortCustomMovement DrivingCustomMovementMode; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	struct FActiveGameplayEffectHandle FallImmunityGEFX; // 0xb74(0x08)
	struct FGameplayTag AttachVFXCue; // 0xb7c(0x04)
	struct FGameplayTag SmashCue; // 0xb80(0x04)
	struct FGameplayTag T_Swimming; // 0xb84(0x04)
	struct FGameplayTag T_Falling; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct FGameplayTagContainer TagsThatBlockFallImmunityRemoval; // 0xb90(0x20)
	struct FTimerHandle TH_DelayFallDamageRemoval; // 0xbb0(0x08)
	struct FTimerHandle SurroundingsCheckTimerHandle; // 0xbb8(0x08)
	struct FGameplayTag ZiplineExitTag; // 0xbc0(0x04)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct FVector Smash Box Extent; // 0xbc8(0x18)
	double SmashBoxPosAdditionalZ; // 0xbe0(0x08)

	void Get Zipline Motor Offset(struct FVector& Offset); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Motor Offset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetZiplineRotationForMotor(struct FRotator& Rotation); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GetZiplineRotationForMotor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Zipline Pole A Socket Loc(struct FVector& PoleBSocketLoc); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole A Socket Loc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Zipline Pole B Socket Loc(struct FVector& PoleBSocketLoc); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Get Zipline Pole B Socket Loc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckForQuestProgress(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckForQuestProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckMotor(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.CheckMotor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Motor(struct AActor* PlayerPawn); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Spawn Motor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BreakNearbyStructures(struct AFortPlayerPawn* PlayerPawn); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BreakNearbyStructures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_5A9C02A9480D39B213A8AC81767C7A76(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Added_5A9C02A9480D39B213A8AC81767C7A76 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Removed_A0F18316443E5C5267615C9692274B36(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Removed_A0F18316443E5C5267615C9692274B36 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurroundingsCheck(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPawnLanded_Bind(struct FHitResult& Hit); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnLanded_Bind // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleZiplineStateChanged(bool bIsZiplining); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleZiplineStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveFallDamageImmunity(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.RemoveFallDamageImmunity // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnterVehicle_Bind(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnterVehicle_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ZipliningComplete(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ZipliningComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnteredAircraft_Bind(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnEnteredAircraft_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginSkydiving_Bind(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnBeginSkydiving_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DelaySpawnMotor(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.DelaySpawnMotor // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindEvent(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.BindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwimmingStarted(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SwimmingStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnterWaterExit(struct AFortPlayerPawn* FortPlayerPawn); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EnterWaterExit // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleClientSplineZiplineStateChanged(bool bIsZiplining); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleClientSplineZiplineStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SplineZiplineMovementModeDelayOver(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SplineZiplineMovementModeDelayOver // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Remove Fall Damage Immunity Delayed(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Remove Fall Damage Immunity Delayed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAsyncBreakNearbyStructuresOverlap(struct TArray<struct AActor*>& OverlapActors); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.EndAsyncBreakNearbyStructuresOverlap // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SurroundingsCheck_SmashObjects(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_SmashObjects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurroundingsCheck_MotorCheck(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurroundingsCheck_MotorCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurruondingsCheck_VehicleCheck(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.SurruondingsCheck_VehicleCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartSurroundingsCheck(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.StartSurroundingsCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.OnPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GameplayTagEvent_ZiplineEnter(struct FGameplayEventData& EventData); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineEnter // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GameplayTagEvent_ZiplineExit(struct FGameplayEventData& EventData); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayTagEvent_ZiplineExit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GameplayEvent_ZiplineEnter_BeginZiplining(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.GameplayEvent_ZiplineEnter_BeginZiplining // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FallingTagRemoved(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.FallingTagRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Pre_BeginZiplinging(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Pre_BeginZiplinging // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Post_BeginZiplining(); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.Post_BeginZiplining // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGameplayEventTag(struct FGameplayEventData& EventData); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.HandleGameplayEventTag // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_ZipLine_SmashParent(int32_t EntryPoint); // Function GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C.ExecuteUbergraph_GA_Athena_ZipLine_SmashParent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

