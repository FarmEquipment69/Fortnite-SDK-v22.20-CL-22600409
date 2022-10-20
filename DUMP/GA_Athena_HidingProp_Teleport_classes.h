// BlueprintGeneratedClass GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
// Size: 0xbb0 (Inherited: 0xb20)
struct UGA_Athena_HidingProp_Teleport_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FMulticastInlineDelegate ; // 0xb28(0x10)
	struct AB_HidingProp_C* HidingProp; // 0xb38(0x08)
	struct AB_HidingProp_C* TargetTeleporter; // 0xb40(0x08)
	struct FGameplayTagContainer T_HudElementToHide; // 0xb48(0x20)
	struct FGameplayTag TargetPropTeleportingCue; // 0xb68(0x04)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	struct FTimerHandle WobbleHandle; // 0xb70(0x08)
	struct FGameplayTag WobbleCue; // 0xb78(0x04)
	char pad_B7C[0x4]; // 0xb7c(0x04)
	double ServerWorldTime; // 0xb80(0x08)
	struct FGameplayTag EnterCue; // 0xb88(0x04)
	struct FGameplayTag HidingInPropTag; // 0xb8c(0x04)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xb90(0x20)

	void Added_FD079A2341CDD832DF47CD975DFC3BB3(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_FD079A2341CDD832DF47CD975DFC3BB3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_EE0FA6804073079396C44591432259C0(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnComplete_EE0FA6804073079396C44591432259C0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_67FE14EA4DF2D8C2DB494AA89443681B(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_67FE14EA4DF2D8C2DB494AA89443681B // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_CB8220A04B74338E758C11B7371D4630(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_CB8220A04B74338E758C11B7371D4630 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Added_F96D6DD549939CA425D2D1BE1AD32090(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_F96D6DD549939CA425D2D1BE1AD32090 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void QuestUpdate(struct AFortPawn* Pawn); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.QuestUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Wobble(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Wobble // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GrapplerFailSafe(struct AFortPawn* FortPawn); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.GrapplerFailSafe // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int32_t EntryPoint); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.ExecuteUbergraph_GA_Athena_HidingProp_Teleport // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void NewEventDispatcher_0__DelegateSignature(); // Function GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

