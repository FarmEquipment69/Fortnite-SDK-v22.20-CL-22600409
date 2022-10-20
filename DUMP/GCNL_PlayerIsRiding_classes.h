// BlueprintGeneratedClass GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
// Size: 0xa48 (Inherited: 0x960)
struct AGCNL_PlayerIsRiding_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct USoundBase* RidingSoundLoop; // 0x968(0x08)
	struct UAudioComponent* RidingSoundLoopComp; // 0x970(0x08)
	struct FTimerHandle VelocityTimerHandle; // 0x978(0x08)
	struct AActor* Player; // 0x980(0x08)
	double Speed; // 0x988(0x08)
	enum class EFortTeamAffiliation TeamAffiliation; // 0x990(0x01)
	char pad_991[0x7]; // 0x991(0x07)
	struct FVector Previous; // 0x998(0x18)
	struct USoundBase* Enemy_RidingSoundLoop; // 0x9b0(0x08)
	struct AFortPlayerPawnAthena* As Fort Player Pawn Athena; // 0x9b8(0x08)
	double JumpParamTarget; // 0x9c0(0x08)
	double JumpValue; // 0x9c8(0x08)
	bool bIsFalling; // 0x9d0(0x01)
	bool bCanResetJump; // 0x9d1(0x01)
	char pad_9D2[0x6]; // 0x9d2(0x06)
	struct UCreatureBaseRidableComponent_C* CreatureRidableComponent; // 0x9d8(0x08)
	struct UPawnMovementComponent* CreatureMovementComponent; // 0x9e0(0x08)
	struct FTimerHandle JumpResetTimerHandle; // 0x9e8(0x08)
	double JumpPitchInterpSpeed; // 0x9f0(0x08)
	struct FCurveTableRowHandle RidingCurveTable; // 0x9f8(0x10)
	double BoarSprintSpeed; // 0xa08(0x08)
	double CurrentVelocity; // 0xa10(0x08)
	double MaxNormalRunSpeed; // 0xa18(0x08)
	bool bSprinting; // 0xa20(0x01)
	char pad_A21[0x7]; // 0xa21(0x07)
	struct UBoarRidableComponent_C* BoarRidableComp; // 0xa28(0x08)
	double MaxSpeed; // 0xa30(0x08)
	double MaxSpeedClamped; // 0xa38(0x08)
	struct UControllableRidableComponent* CreatureRidableComp; // 0xa40(0x08)

	void CalculateVelocityParam(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.CalculateVelocityParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayerRidingDCNLEnded(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingDCNLEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUpRidableAudioEvents(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.SetUpRidableAudioEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayerRidingGCNLStarted(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingGCNLStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ResetJumpParam(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ResetJumpParam // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void StartLoopingAudio(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.StartLoopingAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnJumpApex(); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnJumpApex // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AudioOnJump(double AudioPitchInterpSpeed); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.AudioOnJump // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_PlayerIsRiding(int32_t EntryPoint); // Function GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ExecuteUbergraph_GCNL_PlayerIsRiding // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

