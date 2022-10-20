// BlueprintGeneratedClass GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C
// Size: 0xa58 (Inherited: 0x9f0)
struct AGCNL_Athena_Player_Sliding_Player_C : AFortGameplayCueNotifyLoop_Sliding {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0x9f8(0x08)
	bool bUpdateAudioParams; // 0xa00(0x01)
	char pad_A01[0x7]; // 0xa01(0x07)
	double VelocityLengthAudioParam; // 0xa08(0x08)
	double ZVelocityAudioParam; // 0xa10(0x08)
	struct USoundBase* StopSlideSound; // 0xa18(0x08)
	struct UAudioComponent* Stop Slide Audio; // 0xa20(0x08)
	struct FTimerHandle SlidingFailsafeTimerHandle; // 0xa28(0x08)
	struct USoundBase* StartSlideSound; // 0xa30(0x08)
	struct UFortMovementComp_Character* Cached_Movement_ComponentRef; // 0xa38(0x08)
	struct UFXSystemComponent* Dust_FX; // 0xa40(0x08)
	bool bIsGraceFalling; // 0xa48(0x01)
	char pad_A49[0x7]; // 0xa49(0x07)
	struct FTimerHandle SpeedLineTimerHandle; // 0xa50(0x08)

	void ToggleLoopingSoundIndicator(bool bEnableSoundIndicator); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ToggleLoopingSoundIndicator // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Target Pawn Actor Hit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.On Target Pawn Actor Hit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSoundComponentParameters(struct AFortPlayerPawn* PlayerPawn, struct UAudioComponent* AudioComponent); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSoundComponentParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SlideStopAudio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.SlideStopAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Initiate Start Audio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Initiate Start Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSlideAudio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSlideAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartSlideAudio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.StartSlideAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetAudioData(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResetAudioData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Sliding Failsafe Check(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Sliding Failsafe Check // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Stop Sliding Audio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Stop Sliding Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ResumeSlidingAudio(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResumeSlidingAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Speed Line(); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Update Speed Line // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player(int32_t EntryPoint); // Function GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

