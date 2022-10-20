// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// Size: 0xc48 (Inherited: 0xb20)
struct UGAB_GenericApplyKnockback_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UGameplayEffect* GE_TransferKnockback; // 0xb28(0x08)
	struct UGameplayEffect* GE_KnockbackActive; // 0xb30(0x08)
	double KnockbackPropagationThreshold; // 0xb38(0x08)
	struct UAnimMontage* KnockbackUpMontage; // 0xb40(0x08)
	struct FName KnockbackUpMontageSection; // 0xb48(0x04)
	char pad_B4C[0x4]; // 0xb4c(0x04)
	struct UAnimMontage* KnockbackDownMontage; // 0xb50(0x08)
	struct FName KnockbackDownMontageSection; // 0xb58(0x04)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct UAnimMontage* KnockbackLandMontage; // 0xb60(0x08)
	struct FName KnockbackLandMontageSection; // 0xb68(0x04)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	struct UAnimMontage* KnockbackLandToIdleMontage; // 0xb70(0x08)
	struct FName KnockbackLandToIdleMontageSection; // 0xb78(0x04)
	char pad_B7C[0x4]; // 0xb7c(0x04)
	struct UAnimMontage* KnockbackLandToStunMontage; // 0xb80(0x08)
	struct FName KnockbackLandToStunMontageSection; // 0xb88(0x04)
	bool DebugDraw; // 0xb8c(0x01)
	bool DebugNumbers; // 0xb8d(0x01)
	bool DebugForceKnockbackValues; // 0xb8e(0x01)
	bool bOrientToImpulse; // 0xb8f(0x01)
	struct FActiveGameplayEffectHandle ActiveKnockback; // 0xb90(0x08)
	struct FVector OrientDirection; // 0xb98(0x18)
	struct FVector HitDirection; // 0xbb0(0x18)
	struct FVector ImpulseDirectionVelocityOrRotation; // 0xbc8(0x18)
	struct FVector DebugLastLocation; // 0xbe0(0x18)
	struct FGameplayTag TC_NPCStatusLockedInPlace; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	double LockedInPlaceKnockbackAngle; // 0xc00(0x08)
	double LockedInPlaceKnockbackMagnitude; // 0xc08(0x08)
	struct UGameplayEffect* GE_RestoreControlResistance; // 0xc10(0x08)
	struct UGameplayEffect* GE_ImpactImmunity; // 0xc18(0x08)
	struct FActiveGameplayEffectHandle ActiveImpactImmunity; // 0xc20(0x08)
	bool bHasImpactImmunity; // 0xc28(0x01)
	char pad_C29[0x7]; // 0xc29(0x07)
	double F_OneFrameDelay; // 0xc30(0x08)
	struct FGameplayTag Event_Triggered_Knockback; // 0xc38(0x04)
	bool KnockbackFromFloorTrap; // 0xc3c(0x01)
	bool KnockbackFromFloorTrap PlayUpMontage; // 0xc3d(0x01)
	bool KnockbackFromFloorTrap PlayDownMontage; // 0xc3e(0x01)
	bool KnockbackFromFloorTrap PlayLandMontage; // 0xc3f(0x01)
	struct FGameplayTag Event Control Ended; // 0xc40(0x04)
	struct FGameplayTag GC_TrapKnockback_Tag; // 0xc44(0x04)

	void CheckForPawnDeath(struct AFortPawn* Pawn, bool& IsDead); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CheckForPawnDeath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DoesUseInstagorInsteadOfImpulseDirection(struct FGameplayEffectContextHandle EffectContext, struct UObject* OptionalObject, bool& Value); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetPawnFromInstigator(struct AActor* InActor, struct AFortPlayerPawn*& OutPawn); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FVector CalculateImpulseDirection(struct AFortPlayerPawn* InPawn); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReachedJumpApex(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupMontageSectionsAndOrientDirection(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnLanded(struct FHitResult& Hit); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnHitPawn(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MovementModeChangedDelegate_Event(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.MovementModeChangedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindMovementModeChange(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.BindMovementModeChange // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindMovementModeChange(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.UnbindMovementModeChange // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void DebugLine(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32_t EntryPoint); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

