// BlueprintGeneratedClass GA_DudeBro_Vent.GA_DudeBro_Vent_C
// Size: 0xb64 (Inherited: 0xb20)
struct UGA_DudeBro_Vent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct USkeletalMeshComponent* VehicleSkelMesh; // 0xb28(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb30(0x08)
	double GravFloorAltitude; // 0xb38(0x08)
	double UpwardLaunchVelocity; // 0xb40(0x08)
	struct TArray<struct AActor*> VentsHitBeforeLanding; // 0xb48(0x10)
	int32_t NumVentsToHitForQuest; // 0xb58(0x04)
	struct FGameplayTag Tag to Check; // 0xb5c(0x04)
	struct FGameplayTag VentBlocked; // 0xb60(0x04)

	void ActuallyCleanPlayerUp(); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ActuallyCleanPlayerUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_4065C3B14D35BDC4C0608DB5BD4A1EBA(); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.Added_4065C3B14D35BDC4C0608DB5BD4A1EBA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayerCapsuleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.PlayerCapsuleHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void (struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_DudeBro_Vent(int32_t EntryPoint); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ExecuteUbergraph_GA_DudeBro_Vent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

