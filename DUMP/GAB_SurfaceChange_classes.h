// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// Size: 0xd98 (Inherited: 0xb20)
struct UGAB_SurfaceChange_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	bool Debug; // 0xb28(0x01)
	char pad_B29[0x7]; // 0xb29(0x07)
	struct FScalableFloat RemovalDelay; // 0xb30(0x28)
	struct FScalableFloat IcySurfacesEnabled; // 0xb58(0x28)
	struct FGameplayTagContainer HasIce; // 0xb80(0x20)
	struct UGameplayEffect* GE_SurfaceChange_Ice; // 0xba0(0x08)
	struct UGameplayEffect* GE_SurfaceChange_Snow; // 0xba8(0x08)
	struct UGameplayEffect* GE_SurfaceChange_Lava; // 0xbb0(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xbb8(0x08)
	struct FGameplayTagContainer IceTags; // 0xbc0(0x20)
	struct FGameplayTagContainer LavaTags; // 0xbe0(0x20)
	struct FGameplayTagContainer SnowTags; // 0xc00(0x20)
	struct FGameplayTagContainer SandTags; // 0xc20(0x20)
	struct FGameplayTagContainer ChromeTags; // 0xc40(0x20)
	double LavaBounceMultiplier; // 0xc60(0x08)
	double RandomAngleOffset; // 0xc68(0x08)
	struct FScalableFloat RandomConeAngle; // 0xc70(0x28)
	struct FScalableFloat FacingAngleVelocityComponent; // 0xc98(0x28)
	struct FScalableFloat BaseVerticalBounceVelocity; // 0xcc0(0x28)
	struct FScalableFloat BaseLateralBounceVelocity; // 0xce8(0x28)
	struct FScalableFloat MaxBounceMultiplier; // 0xd10(0x28)
	struct FScalableFloat BounceMultiplierStepAmount; // 0xd38(0x28)
	struct FRandomStream RandomAngleStream; // 0xd60(0x08)
	struct FGameplayTag LavaBounceCue; // 0xd68(0x04)
	struct FGameplayTag EventTag_SandUnburrow; // 0xd6c(0x04)
	struct FScalableFloat IceLingerDuration; // 0xd70(0x28)

	void OnRep_ReplicatedRandomAngle(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurfaceCleanup(bool AddLingeringEffects, enum class EPhysicalSurface SurfaceType); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LavaBounce(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HotfixableGEApplication(struct FScalableFloat& Input, struct UGameplayEffect* GameplayEffectAppliedOnTrue, struct UGameplayEffect* GameplayEffectAppliedOnFalse); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SurfaceCleanupSpecial(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_SurfaceChange(int32_t EntryPoint); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

