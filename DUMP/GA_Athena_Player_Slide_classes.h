// BlueprintGeneratedClass GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
// Size: 0x1738 (Inherited: 0xb20)
struct UGA_Athena_Player_Slide_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UCameraShakeBase* CameraShake; // 0xb28(0x08)
	struct UFortCameraMode* Camera Mode Class; // 0xb30(0x08)
	struct FGameplayTag CameraShakeGCNL; // 0xb38(0x04)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct UCameraModifier* CameraModifier; // 0xb40(0x08)
	double MinAngleForMomentum; // 0xb48(0x08)
	struct FGameplayTag SpeedlinesCue; // 0xb50(0x04)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct UCameraShakeBase* StartSlideCameraShake; // 0xb58(0x08)
	double AdditionalLaunchVelocityOffRamp; // 0xb60(0x08)
	struct FSlidingControlParams DefaultSlidingParams; // 0xb68(0x578)
	struct FSlidingControlParams PostDashGroundSlidingParams; // 0x10e0(0x578)
	double LevelGroundSlideDuration; // 0x1658(0x08)
	struct FTimerHandle EndLevelGroundSlideTimerHandle; // 0x1660(0x08)
	struct FScalableFloat DashDuration; // 0x1668(0x28)
	struct FTimerHandle CameraFXDelay; // 0x1690(0x08)
	struct FGameplayTag PlayerGameplayCue; // 0x1698(0x04)
	char pad_169C[0x4]; // 0x169c(0x04)
	double CameraShakeDelay; // 0x16a0(0x08)
	struct FScalableFloat MinAdditionalMomentum; // 0x16a8(0x28)
	struct FScalableFloat MaxAdditionalMomentum; // 0x16d0(0x28)
	struct FScalableFloat MinAngleForAdditionalMomentum; // 0x16f8(0x28)
	bool Prev_FallingGracePeriodState; // 0x1720(0x01)
	char pad_1721[0x7]; // 0x1721(0x07)
	struct UCameraModifier* SlideCameraModifier; // 0x1728(0x08)
	struct FTimerHandle AddMomentumTimerHandle; // 0x1730(0x08)

	void EndAbilityServerSide(); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityServerSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAbilityClientSide(); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityClientSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int32_t& InOutPriority); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.BuildDataRegistryResolverScope // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void AddMomentum(); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.AddMomentum // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndLevelGroundSlide(); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndLevelGroundSlide // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CameraFX(); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.CameraFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct AFortPlayerPawn* Pawn); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Player_Slide(int32_t EntryPoint); // Function GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ExecuteUbergraph_GA_Athena_Player_Slide // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

