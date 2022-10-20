// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// Size: 0xb78 (Inherited: 0xb20)
struct UGAB_Emote_Generic_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	double PostTriggerCancelDelay; // 0xb30(0x08)
	bool HideReticle; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0xb40(0x20)
	struct FName MontageOverrideSection; // 0xb60(0x04)
	bool bAbilityStopped; // 0xb64(0x01)
	char pad_B65[0x3]; // 0xb65(0x03)
	struct FName EmoteHolsterId; // 0xb68(0x04)
	bool bHolstered; // 0xb6c(0x01)
	char pad_B6D[0x3]; // 0xb6d(0x03)
	struct FName HUDElementVisibilityReasonName; // 0xb70(0x04)
	int32_t WaitForLoadedCount; // 0xb74(0x04)

	bool ShouldPlayFailedMontage(struct FGameplayTagContainer& FailedReason); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ShouldPlayFailedMontage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void IsMontagePlaying(struct UAnimMontage* Montage, bool& Result); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.IsMontagePlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ForceStopMontage(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetReticleVisibility(bool ShouldHide); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct TSoftObjectPtr<UAnimMontage> GetMontageToPlay(struct UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetBodyTypeAndGender(enum class EFortCustomBodyType& BodyType, enum class EFortCustomGender& Gender); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(struct UObject* Loaded); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(struct UObject* Loaded); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMontageStartedPlaying(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayInitialEmoteMontage(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NonMontageAsyncAssetsReady(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.NonMontageAsyncAssetsReady // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_Emote_Generic(int32_t EntryPoint); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

