// BlueprintGeneratedClass GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C
// Size: 0xc70 (Inherited: 0xb20)
struct UGA_DefaultPlayer_InteractLockonConsumable_Weed_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	double MoveTimerLength; // 0xb30(0x08)
	struct FVector StartPos; // 0xb38(0x18)
	double LerpAlpha; // 0xb50(0x08)
	double LerpSpeedMult; // 0xb58(0x08)
	struct FTimerHandle TimerForPawnAndControllerLerp; // 0xb60(0x08)
	bool bFirstUpdate; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	double StartingYaw; // 0xb70(0x08)
	double PrevYawDiffRemaining; // 0xb78(0x08)
	struct AFortPlayerController* FortPlayerController; // 0xb80(0x08)
	bool bIsInitialized; // 0xb88(0x01)
	char pad_B89[0x7]; // 0xb89(0x07)
	struct ABuildingGameplayActorBlade* TargetBladeActor; // 0xb90(0x08)
	struct FFortGameplayAbilityMontageInfo MontagePullInfo; // 0xb98(0x58)
	double DesiredDistanceFromInteractiveItem; // 0xbf0(0x08)
	struct FVector CurrentPosition; // 0xbf8(0x18)
	struct FVector DestinationPosition; // 0xc10(0x18)
	double TargetYaw; // 0xc28(0x08)
	double YawDiffRemaining; // 0xc30(0x08)
	struct ULegacyCameraShake* CameraShake; // 0xc38(0x08)
	struct FActiveGameplayEffectHandle GE_PullGCL; // 0xc40(0x08)
	struct FVector ScaleForVFXToHideRotationPop; // 0xc48(0x18)
	bool bNeedToUnHolster; // 0xc60(0x01)
	char pad_C61[0x3]; // 0xc61(0x03)
	struct FGameplayTag DisableCrouch; // 0xc64(0x04)
	double StartSwordPullTime; // 0xc68(0x08)

	void StopCameraShakes(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.StopCameraShakes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializePawnAndControllerRot(struct AFortPlayerPawn* PawnAthena, bool& bInitialized); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.InitializePawnAndControllerRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartPullAnimation(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.StartPullAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndInteractSearch(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.EndInteractSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartInteractSearch(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.StartInteractSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.K2_OnEndAbility // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_4F3832D64EA7D0E39D93D9BDA1E5030E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.Completed_4F3832D64EA7D0E39D93D9BDA1E5030E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_4F3832D64EA7D0E39D93D9BDA1E5030E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.Cancelled_4F3832D64EA7D0E39D93D9BDA1E5030E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_4F3832D64EA7D0E39D93D9BDA1E5030E(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.Triggered_4F3832D64EA7D0E39D93D9BDA1E5030E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InterpolateToPosition(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.InterpolateToPosition // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void StartCameraTransition(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.StartCameraTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TimeoutAndDie(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.TimeoutAndDie // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ForceNetUpdate(); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.ForceNetUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable_Weed(int32_t EntryPoint); // Function GA_DefaultPlayer_InteractLockonConsumable_Weed.GA_DefaultPlayer_InteractLockonConsumable_Weed_C.ExecuteUbergraph_GA_DefaultPlayer_InteractLockonConsumable_Weed // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

