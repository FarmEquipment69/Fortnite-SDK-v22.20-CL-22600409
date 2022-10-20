// BlueprintGeneratedClass B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
// Size: 0x1118 (Inherited: 0xf98)
struct AB_Athena_Zipline_Ascender_C : AFortAscenderZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf98(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xfa0(0x08)
	struct UCapsuleComponent* Capsule; // 0xfa8(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xfb0(0x08)
	struct UStaticMeshComponent* Ascender_End_Cap; // 0xfb8(0x08)
	struct UAudioComponent* PoleMotorSFX; // 0xfc0(0x08)
	struct UNiagaraComponent* HandleVFX; // 0xfc8(0x08)
	struct UNiagaraComponent* PoleMotorVFX; // 0xfd0(0x08)
	struct UAudioComponent* HandleAscendingSFX; // 0xfd8(0x08)
	struct UAudioComponent* HandleDescendingSFX; // 0xfe0(0x08)
	struct USphereComponent* HandleInteractVolume; // 0xfe8(0x08)
	struct UStaticMeshComponent* Handle; // 0xff0(0x08)
	struct UStaticMeshComponent* Top; // 0xff8(0x08)
	struct FScalableFloat Hotfix; // 0x1000(0x28)
	struct USoundBase* StartHandleSound; // 0x1028(0x08)
	struct USoundBase* StopHandleSound; // 0x1030(0x08)
	struct USoundBase* StopPoleMotorSoundSkid; // 0x1038(0x08)
	struct UMaterialInterface* SplineMeshMaterialOverride; // 0x1040(0x08)
	struct UNiagaraSystem* AscendingHandleVFX; // 0x1048(0x08)
	struct UNiagaraSystem* DescendingHandleVFX; // 0x1050(0x08)
	struct UMaterialInterface* SplineThickenMeshMaterialOverride; // 0x1058(0x08)
	double MaxWobbleAnimationLength; // 0x1060(0x08)
	double LastWobbleActivationTime; // 0x1068(0x08)
	double TilingDivisor; // 0x1070(0x08)
	struct FVector HandleAnimOffset; // 0x1078(0x18)
	struct FVector SlideAnimOffset; // 0x1090(0x18)
	struct USoundBase* PlayerGrabBeginDecentSound; // 0x10a8(0x08)
	struct UAudioComponent* HandleStart; // 0x10b0(0x08)
	struct FVector EndCapRelativeScale; // 0x10b8(0x18)
	struct UGameplayEffect* StructureDamageGE; // 0x10d0(0x08)
	struct FTimerHandle AudioVisualizerHandle; // 0x10d8(0x08)
	struct TArray<struct AFortPlayerPawn*> PlayersOnAscender; // 0x10e0(0x10)
	struct USoundBase* TravelSound; // 0x10f0(0x08)
	bool ShouldPlayWhoosh; // 0x10f8(0x01)
	char pad_10F9[0x7]; // 0x10f9(0x07)
	struct USoundBase* AscendWhooshSound; // 0x1100(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x1108(0x08)
	struct FTimerHandle WhooshHandle; // 0x1110(0x08)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	bool CanBeginZiplining(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void LocalOnFailedInteract(struct AFortPlayerPawn* InteractingPawn); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void GetBoundsComponents(struct AActor* SelfActor, struct TArray<struct USceneComponent*>& OutComponents); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void ApplyStructureDamage(struct ABuildingSMActor* BuildingActor, struct AActor* DamageSource); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void AttachCapToEndOfSplineMesh(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool AttemptOverrideZiplineSocketOffset(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent, struct FVector& BaseSocketOffset, struct FVector& OutSocketOffset); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void CalculateLaunchVelocity(struct AActor* PlayerPawn, struct FVector& LaunchVelocity); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetCableTilingBySplineLength(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeactivateCableWobble(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ActivateCableWobble(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HotfixEnabled(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UPrimitiveComponent* GetTopComponent(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	struct UPrimitiveComponent* GetHandleComponent(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	struct UPrimitiveComponent* GetInteractComponentOverride(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool PawnIsInHandleRange(struct AFortPawn* Pawn); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	int32_t GetLastSplinePointIndex(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_93837FC44A18F6AE57D3478CC43A98AB(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_HandlePlayerStartedUsingHandle(struct AFortPlayerPawn* Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandlePlayerStoppedUsingHandle(struct AFortPlayerPawn* Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStartedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStartedLoweringHandle(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStoppedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_HandleStoppedLoweringHandle(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnZipliningStarted(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayerDescendingStarted(struct AFortPlayerPawn* Sliding Player); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_HandleUpdatedLoweringCable(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnZipliningStopped(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ShouldPlayWhooshTimer(); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__B_Athena_Zipline_Ascender_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BndEvt__B_Athena_Zipline_Ascender_FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Athena_Zipline_Ascender(int32_t EntryPoint); // Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

