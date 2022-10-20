// BlueprintGeneratedClass GA_Athena_Tethered.GA_Athena_Tethered_C
// Size: 0xbac (Inherited: 0xb20)
struct UGA_Athena_Tethered_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FActiveGameplayEffectHandle GE_TetheredHandle; // 0xb28(0x08)
	struct AFortPlayerPawn* OwningFortPlayerPawn; // 0xb30(0x08)
	double maxSpeedToPlayGCN; // 0xb38(0x08)
	struct FGameplayTag GCTagPlayerLand; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct UGameplayEffect* StructureDamageGE; // 0xb48(0x08)
	struct FGameplayTag SmashGC; // 0xb50(0x04)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct FScalableFloat BreakStructuresOnTetherEnabled; // 0xb58(0x28)
	struct FScalableFloat BreakStructuresOnTetherRange; // 0xb80(0x28)
	struct FGameplayTag Event_FishingForceEnd; // 0xba8(0x04)

	void BreakNearbyStructures(struct FVector ForwardVector, double OffsetForward); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_Athena_Tethered.GA_Athena_Tethered_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BreakBuildingsAtPlayerInDirectionOfTether(); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Tethered(int32_t EntryPoint); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

