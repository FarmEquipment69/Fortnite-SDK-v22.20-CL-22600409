// BlueprintGeneratedClass GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
// Size: 0xc68 (Inherited: 0xb50)
struct UGAB_InterrogatePlayer_Search_C : UFortGameplayAbility_CarryPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb58(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xb60(0x08)
	struct AFortPlayerPawn* InterrogatedPlayer; // 0xb68(0x08)
	struct UAnimMontage* Anim_Search; // 0xb70(0x08)
	struct FName InterrogateHolster; // 0xb78(0x04)
	struct FName LootTierGroupName; // 0xb7c(0x04)
	struct UFortWorldItemDefinition* ItemDefinition; // 0xb80(0x08)
	int32_t NumberToSpawn; // 0xb88(0x04)
	char pad_B8C[0x4]; // 0xb8c(0x04)
	struct FVector LootSpawnOffset; // 0xb90(0x18)
	struct FScalableFloat MaxDropsInstance; // 0xba8(0x28)
	int32_t NumDropsInstance; // 0xbd0(0x04)
	char pad_BD4[0x4]; // 0xbd4(0x04)
	struct FScalableFloat KeycardDropBias; // 0xbd8(0x28)
	struct TArray<struct UFortWorldItemDefinition*> KeycardItemDefinitions; // 0xc00(0x10)
	struct FGameplayTag T_Keycard_Yacht; // 0xc10(0x04)
	struct FGameplayTag T_Keycard_OilRig; // 0xc14(0x04)
	struct FGameplayTag T_Keycard_SharkIsland; // 0xc18(0x04)
	struct FGameplayTag T_Keycard_HQ; // 0xc1c(0x04)
	struct FGameplayTag T_Keycard_MountainBase; // 0xc20(0x04)
	char pad_C24[0x4]; // 0xc24(0x04)
	struct FTimerHandle Timer_Interrogation; // 0xc28(0x08)
	struct FGameplayTagContainer T_ReticleHUD; // 0xc30(0x20)
	struct FGameplayTag T_NPC; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct UGameplayEffect* GE_Cooldown; // 0xc58(0x08)
	struct UGameplayEffect* GE_PickedUp; // 0xc60(0x08)

	void ApplyGameplayEffectToNPC(struct UGameplayEffect* GameplayEffect); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DropKeycard(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetKeycardToDrop(bool& HasKeycard, struct UFortWorldItemDefinition*& Output); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void DropLoot(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleReticleVisibility(bool Hide); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndAbilityCleanup(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitAbility(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_9291D75D4A0949E1C5B7E49C1FD11F8B(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnPress_2000C5AE43E9D757FF188B85CF911E39 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32_t EntryPoint); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

