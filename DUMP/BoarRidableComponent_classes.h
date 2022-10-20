// BlueprintGeneratedClass BoarRidableComponent.BoarRidableComponent_C
// Size: 0xb5c (Inherited: 0xb10)
struct UBoarRidableComponent_C : UCreatureBaseRidableComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb10(0x08)
	struct USoundBase* BurtChargeStartSound; // 0xb18(0x08)
	struct UAudioComponent* ChargeSoundComp; // 0xb20(0x08)
	struct ANPC_Pawn_Irwin_Prey_Burt_C* BurtPawnRef; // 0xb28(0x08)
	double SprintCooldDownTime; // 0xb30(0x08)
	struct UGameplayEffect* GESprintImpactPawn; // 0xb38(0x08)
	struct FGameplayTag SprintImpactGameplayCueTag; // 0xb40(0x04)
	char pad_B44[0x4]; // 0xb44(0x04)
	struct UGameplayEffect* GESprintImpactVehicle; // 0xb48(0x08)
	struct FGameplayTag SprintChargeImpact_Default_CueTag; // 0xb50(0x04)
	struct FGameplayTag SprintChargeImpact_Pawn_CueTag; // 0xb54(0x04)
	struct FGameplayTag SprintChargeImpact_DestroyBuild_CueTag; // 0xb58(0x04)

	void OnReaction(struct UObject* Object, struct FHitResult HitResult); // Function BoarRidableComponent.BoarRidableComponent_C.OnReaction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleRiderStoppedRiding(struct URiderComponent* Rider); // Function BoarRidableComponent.BoarRidableComponent_C.HandleRiderStoppedRiding // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleRiderStartedRiding(struct URiderComponent* Rider); // Function BoarRidableComponent.BoarRidableComponent_C.HandleRiderStartedRiding // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleAbilityStarted(); // Function BoarRidableComponent.BoarRidableComponent_C.HandleAbilityStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BoarRidableComponent.BoarRidableComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnReactionEvent(struct AActor* HitActor, bool bFromAsyncSweepBox, enum class FCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, struct FHitResult& HitResult); // Function BoarRidableComponent.BoarRidableComponent_C.OnReactionEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BoarRidableComponent.BoarRidableComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BoarRidableComponent(int32_t EntryPoint); // Function BoarRidableComponent.BoarRidableComponent_C.ExecuteUbergraph_BoarRidableComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

