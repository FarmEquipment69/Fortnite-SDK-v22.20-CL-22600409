// BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
// Size: 0xcc8 (Inherited: 0xa58)
struct ABGA_RiftPortal_Item_Athena_C : AFortAthenaRiftPortal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa58(0x08)
	struct UFortSoundIndicatorComponent* SoundIndicator; // 0xa60(0x08)
	struct UPostProcessComponent* RiftPostProcess; // 0xa68(0x08)
	struct USphereComponent* PostProcessRadius; // 0xa70(0x08)
	struct UParticleSystemComponent* P_RiftClosingUp; // 0xa78(0x08)
	struct UParticleSystemComponent* P_Rift_Idle_Loop; // 0xa80(0x08)
	struct UCapsuleComponent* OverlapCapsule; // 0xa88(0x08)
	struct UCapsuleComponent* Capsule; // 0xa90(0x08)
	struct UStaticMeshComponent* SM_Rift; // 0xa98(0x08)
	struct UAudioComponent* Audio_Looping; // 0xaa0(0x08)
	float FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266; // 0xaa8(0x04)
	float FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266; // 0xaac(0x04)
	enum class ETimelineDirection FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266; // 0xab0(0x01)
	char pad_AB1[0x7]; // 0xab1(0x07)
	struct UTimelineComponent* FragmentMovement; // 0xab8(0x08)
	float Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6; // 0xac0(0x04)
	enum class ETimelineDirection Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6; // 0xac4(0x01)
	char pad_AC5[0x3]; // 0xac5(0x03)
	struct UTimelineComponent* Audio RiftDestroyed; // 0xac8(0x08)
	float VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111; // 0xad0(0x04)
	enum class ETimelineDirection VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111; // 0xad4(0x01)
	char pad_AD5[0x3]; // 0xad5(0x03)
	struct UTimelineComponent* VectorScale; // 0xad8(0x08)
	struct UParticleSystem* DeathEffects; // 0xae0(0x08)
	struct USoundBase* EnteredRift; // 0xae8(0x08)
	struct USoundBase* RiftDestroyed; // 0xaf0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaf8(0x08)
	struct FVector TeleportLocation; // 0xb00(0x18)
	struct UParticleSystem* EnterRift; // 0xb18(0x08)
	bool PortalOpen; // 0xb20(0x01)
	char pad_B21[0x7]; // 0xb21(0x07)
	struct UAnimMontage* FallingAnimation; // 0xb28(0x08)
	struct FScalableFloat TeleportHeight; // 0xb30(0x28)
	struct FScalableFloat ActiveDuration; // 0xb58(0x28)
	struct FScalableFloat HangTime; // 0xb80(0x28)
	double TeleportDelay; // 0xba8(0x08)
	struct TArray<struct AFortPlayerPawn*> PassengerArray; // 0xbb0(0x10)
	struct UParticleSystem* CrackExitRift; // 0xbc0(0x08)
	struct USoundBase* PlayerExitSkyCrack; // 0xbc8(0x08)
	struct FVector ActorOriginalLocation; // 0xbd0(0x18)
	int32_t MaxSpawnHeightMultiplier; // 0xbe8(0x04)
	char pad_BEC[0x4]; // 0xbec(0x04)
	struct UFortQuestItemDefinition* QuestItem; // 0xbf0(0x08)
	struct FName ObjectiveBackendName; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct UFortQuestItemDefinition* RiftPortalLocationsQuest; // 0xc00(0x08)
	bool CreativeMode; // 0xc08(0x01)
	char pad_C09[0x7]; // 0xc09(0x07)
	struct AActor* OverlapActor; // 0xc10(0x08)
	int32_t RiftLocationNum; // 0xc18(0x04)
	char pad_C1C[0x4]; // 0xc1c(0x04)
	struct FRotator ActorRotation; // 0xc20(0x18)
	struct TScriptInterface<IFortVehicleInterface> VehicleInterface; // 0xc38(0x10)
	struct FVector Player Location; // 0xc48(0x18)
	struct FVector TeleportLocationOffset; // 0xc60(0x18)
	struct TSet<struct AActor*> BeganOverlapList; // 0xc78(0x50)

	struct TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.GetAffiliationsToShowFor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	bool ShouldShowSoundIndicator(struct AFortPlayerController* PlayerController); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ShouldShowSoundIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void TeleportPlayerAndSendEvent(struct AFortPlayerPawn* PlayerPawn); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TeleportPlayerAndSendEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsPlayerAttachedToAIPawn(struct AFortAIPawn* AIPawn, bool& Result, struct AFortPlayerPawn*& AttachedPlayerPawn); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IsPlayerAttachedToAIPawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void EjectFromTurret(struct AFortPlayerPawn* PlayerPawn); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.EjectFromTurret // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Is Flying(bool& NewParam); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Is Flying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UseRiftQuestUpdate(struct AController* InController); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.UseRiftQuestUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CheckForRiftLocUpdate(struct AController* InController); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.CheckForRiftLocUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_PlayerPawn(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_PlayerPawn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_Vehicle(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_Vehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRep_TeleportLocation(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OnRep_TeleportLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayExpandOrCollapseAudio(bool Expand); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayExpandOrCollapseAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Audio RiftDestroyed__FinishedFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Audio RiftDestroyed__UpdateFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.Audio RiftDestroyed__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void VectorScale__FinishedFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void VectorScale__UpdateFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VectorScale__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void FragmentMovement__FinishedFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FragmentMovement__UpdateFunc(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.FragmentMovement__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void DestroyRift(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.DestroyRift // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayTeleportFX(struct FVector PlayerLocation, struct APlayerState* RequestingPlayerState); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayTeleportFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayCosmeticFX(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlayCosmeticFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OverlappingOnBeginPlay(struct AActor* Actor); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.OverlappingOnBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void VehicleTeleportEvent(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleTeleportEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NotifyTeleportedVehicle(struct AActor* VehicleActor); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.NotifyTeleportedVehicle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.PlaylistLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void VehicleInteractionFailed(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.VehicleInteractionFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TryRiftTeleport(struct AActor* TargetActor); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.TryRiftTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IncrementTeleportLocationOffset(struct FVector IncrementValue); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.IncrementTeleportLocationOffset // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetTeleportLocationOffset(); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ResetTeleportLocationOffset // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32_t EntryPoint); // Function BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C.ExecuteUbergraph_BGA_RiftPortal_Item_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

