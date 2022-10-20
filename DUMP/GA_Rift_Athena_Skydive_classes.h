// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// Size: 0xc18 (Inherited: 0xb20)
struct UGA_Rift_Athena_Skydive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAnimMontage* FallingAnimation; // 0xb28(0x08)
	double Hangtimee; // 0xb30(0x08)
	struct USkeletalMeshComponent* VehicleSkelMesh; // 0xb38(0x08)
	struct FScalableFloat HangTime; // 0xb40(0x28)
	struct FGameplayTag EventTag; // 0xb68(0x04)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	struct FScalableFloat KickFromVehicle?; // 0xb70(0x28)
	struct USoundBase* LocalPlayerSound; // 0xb98(0x08)
	struct UGameplayEffect* GameplayCueGE; // 0xba0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xba8(0x08)
	bool bHolstered; // 0xbb0(0x01)
	char pad_BB1[0x3]; // 0xbb1(0x03)
	struct FName RiftSkydiveHolster; // 0xbb4(0x04)
	struct FVector ImpulseStrength; // 0xbb8(0x18)
	bool bNeedsInputEnable; // 0xbd0(0x01)
	char pad_BD1[0x7]; // 0xbd1(0x07)
	struct FTimerHandle SafetyTimer; // 0xbd8(0x08)
	struct FVector ; // 0xbe0(0x18)
	struct FGameplayTagContainer UnblockTagsIfPassenger; // 0xbf8(0x20)

	void RemoveSkydivingGameplayEffect(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.RemoveSkydivingGameplayEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_C39EFBAB480B446A6927009E5953EC41(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.Added_C39EFBAB480B446A6927009E5953EC41 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetPlayerToSkydive(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct AActor* DestroyedActor); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnEnteredWater(struct AFortPlayerPawn* FortPlayerPawn); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnLanded(struct FHitResult& Hit); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleForceEnd(); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.HandleForceEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int32_t EntryPoint); // Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

