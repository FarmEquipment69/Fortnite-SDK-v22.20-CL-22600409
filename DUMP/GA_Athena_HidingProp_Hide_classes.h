// BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
// Size: 0xcb8 (Inherited: 0xb20)
struct UGA_Athena_HidingProp_Hide_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct AB_HidingProp_C* HidingProp; // 0xb30(0x08)
	struct UAnimMontage* Enter Anim Montage; // 0xb38(0x08)
	struct FGameplayTag GC_Wobble; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct FScalableFloat ExitBlockShootDelay; // 0xb48(0x28)
	struct FGameplayTagContainer TC_Quest; // 0xb70(0x20)
	struct FGameplayTagContainer TC_PlayerOwned; // 0xb90(0x20)
	struct FScalableFloat RustleMinDelay; // 0xbb0(0x28)
	struct FScalableFloat RustleMaxDelay; // 0xbd8(0x28)
	struct AFortPlayerController* PlayerController; // 0xc00(0x08)
	struct FMulticastInlineDelegate ; // 0xc08(0x10)
	struct FGameplayTagContainer HidingInPropTag; // 0xc18(0x20)
	struct FGameplayTagContainer GettingInPropTag; // 0xc38(0x20)
	struct FGameplayTag CurieBurningTag; // 0xc58(0x04)
	bool AllowCosmetics; // 0xc5c(0x01)
	char pad_C5D[0x3]; // 0xc5d(0x03)
	struct FGameplayTag DisallowCosmeticsTag; // 0xc60(0x04)
	bool LandedOnProp; // 0xc64(0x01)
	char pad_C65[0x3]; // 0xc65(0x03)
	struct FTimerHandle LockOnTimer; // 0xc68(0x08)
	struct FVector CachedScale; // 0xc70(0x18)
	struct FVector HideLocationForwardVectorWorldPos; // 0xc88(0x18)
	struct FRotator HideLocationForwardVectorWorldRot; // 0xca0(0x18)

	void SetAvatarHiddenInGame(bool New Hidden); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetAvatarHiddenInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetCosmeticsAllowed(bool Allowed); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTimedOut_859E251740F1C46B914344A9FC343B19(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTimedOut_8010F4C64221E8F497C6559558420C32(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_F049BFC743FE176042ECD98641AFE2B9(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_35C56E354FE08855A837E0BDFB150F20(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_CD24BC554E955808A88A5B809807A94E(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_E60D990647FDAB06895E738C7A2BAE7E(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_D329D9924DF9DF1B79D0738C6CB8EBA1(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_1D4A49874AC422976CAC2C9155DDA736(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_8C4C6D7442A0B18F41B269995833ED85(struct FGameplayEventData Payload); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_D54881A34BC79E85BE563BA220DD924D(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D54881A34BC79E85BE563BA220DD924D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void RustleLoop(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void End(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void WobbleHidingProp(double NormalizedMagnitude); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.WobbleHidingProp // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Event_LockOnProp(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Event_LockOnProp // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int32_t EntryPoint); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void NewEventDispatcher_0__DelegateSignature(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

