// BlueprintGeneratedClass GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C
// Size: 0xb40 (Inherited: 0xb20)
struct UGA_Athena_FallDmgImmune_RemoveFX_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)
	struct FGameplayTag Looping GC; // 0xb30(0x04)
	struct FGameplayTag Player Landing GC; // 0xb34(0x04)
	struct FTimerHandle VehicleOnGroundTimer; // 0xb38(0x08)

	void OnChange_FD84FE4040E65CB60551DE8433D51332(enum class EMovementMode NewMovementMode); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.OnChange_FD84FE4040E65CB60551DE8433D51332 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnChange_E07DC5494A7BED888E9B24AA514662A5(enum class EMovementMode NewMovementMode); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.OnChange_E07DC5494A7BED888E9B24AA514662A5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void VehicleLandedCheck(); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.VehicleLandedCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX(int32_t EntryPoint); // Function GA_Athena_FallDmgImmune_RemoveFX.GA_Athena_FallDmgImmune_RemoveFX_C.ExecuteUbergraph_GA_Athena_FallDmgImmune_RemoveFX // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

