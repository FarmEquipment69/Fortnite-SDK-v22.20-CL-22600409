// BlueprintGeneratedClass GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C
// Size: 0xb30 (Inherited: 0x960)
struct AGCN_Loop_Shadow_Bomb_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	float Timeline_0_Visbility_E1DFEC9547FE3FAED2AFF3B0D8598182; // 0x968(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E1DFEC9547FE3FAED2AFF3B0D8598182; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UTimelineComponent* ; // 0x970(0x08)
	struct AFortPlayerPawn* TargetPlayer; // 0x978(0x08)
	double ExpirationSoundPeriod; // 0x980(0x08)
	double VelocityInterp; // 0x988(0x08)
	struct TArray<struct UParticleSystemComponent*> AttachedFX; // 0x990(0x10)
	struct TArray<struct USkeletalMeshComponent*> PlayerSkeletalMeshes; // 0x9a0(0x10)
	bool FriendlyPlayer; // 0x9b0(0x01)
	char pad_9B1[0x7]; // 0x9b1(0x07)
	struct FTimerHandle ExpireTellDelayTimer; // 0x9b8(0x08)
	struct FTimerHandle ExpirationSoundTimer; // 0x9c0(0x08)
	double VisbilityLevel; // 0x9c8(0x08)
	double WalkVisMultiplier; // 0x9d0(0x08)
	double SprintVisMultiplier; // 0x9d8(0x08)
	double MinFriendlyOpacity; // 0x9e0(0x08)
	double InteractVisibility; // 0x9e8(0x08)
	struct FScalableFloat DataDuration; // 0x9f0(0x28)
	struct FScalableFloat DataTellDuration; // 0xa18(0x28)
	struct FScalableFloat DataWalkVisMult; // 0xa40(0x28)
	struct FScalableFloat DataSprintVisMult; // 0xa68(0x28)
	struct FScalableFloat DataFriendlyVisMult; // 0xa90(0x28)
	struct FScalableFloat DataShadowPlaneOpacity; // 0xab8(0x28)
	struct UTimelineComponent* FadeInOut; // 0xae0(0x08)
	bool TickENabled; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FScalableFloat SmokeBombDuration; // 0xaf0(0x28)
	double TellDuration; // 0xb18(0x08)
	double ExpireTellOpacity; // 0xb20(0x08)
	double SmokeBombDurationUserSpecified; // 0xb28(0x08)

	void UnbindEquippedWeapon(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.UnbindEquippedWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetSkeletalMeshes(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.GetSkeletalMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BeginExpireTell(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.BeginExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearExpireTell(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExpireWarningTick(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExpireWarningTick // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTeamVisbility(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.UpdateTeamVisbility // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Audio Tick(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Audio Tick // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartedInteract(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.StartedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EndedInteract(); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.EndedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinishedCharacterCustomization_Bind(struct AFortPlayerPawn* Pawn); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnFinishedCharacterCustomization_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Loop_Shadow_Bomb(int32_t EntryPoint); // Function GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExecuteUbergraph_GCN_Loop_Shadow_Bomb // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

