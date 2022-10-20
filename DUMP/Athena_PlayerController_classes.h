// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// Size: 0x48d8 (Inherited: 0x4810)
struct AAthena_PlayerController_C : AFortPlayerControllerAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4810(0x08)
	struct UUnderwaterAudioComponent_C* UnderwaterAudioComponent; // 0x4818(0x08)
	struct USceneComponent* ListenerOverride; // 0x4820(0x08)
	struct UAudioComponent* VictoryRoyaleAudio; // 0x4828(0x08)
	struct UAudioComponent* VictoryRoyaleMusic1; // 0x4830(0x08)
	struct USoundBase* CurrentMusic; // 0x4838(0x08)
	struct FGameplayTagContainer BladeWielderTag; // 0x4840(0x20)
	enum class EFortItemType InteractingItemType; // 0x4860(0x01)
	char pad_4861[0x7]; // 0x4861(0x07)
	struct FGameplayTagContainer InteractionTags; // 0x4868(0x20)
	struct FMulticastInlineDelegate PawnPossessedDispatcher; // 0x4888(0x10)
	struct FTimerHandle PermissionsRecheckTimerHandle; // 0x4898(0x08)
	struct USoundMix* CamUnderwaterSoundMix; // 0x48a0(0x08)
	struct USoundBase* CamUnderwaterLoopSound; // 0x48a8(0x08)
	struct UAudioComponent* CamUnderwaterAudio; // 0x48b0(0x08)
	struct USoundBase* CamUnderwaterStartSound; // 0x48b8(0x08)
	struct USoundBase* CamUnderwaterStopSound; // 0x48c0(0x08)
	struct UAudioComponent* VictoryRoyaleMusic2; // 0x48c8(0x08)
	double LobbyMusicOnVictoryDelayTime_Default; // 0x48d0(0x08)

	void FadeAudioComponents(struct UAudioComponent* NewMusicComponent, struct UAudioComponent* PreviousMusicComponent, struct USoundBase* Music, double StartTime); // Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool Is Creative Mode(); // Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetupPermissionRecheckTimer(); // Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(struct UObject* Loaded); // Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMusicPackLoaded(struct UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GrantItem(struct TSoftObjectPtr<UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.GrantItem // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RevokeItem(struct TSoftObjectPtr<UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLocalInteraction(struct AActor* ReceivingActor); // Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void RemoveItem(); // Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Start Victory Royale Music(); // Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReactToPawnPossession(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReplicateRotationScaleReset(); // Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnLeaveVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnEnterVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Handle Victory Royale Audio(bool Audio Only); // Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayWinEffects(struct APawn* FinisherPawn, struct UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly); // Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayVictoryStinger(struct USoundCue* VictoryStingerCue); // Function Athena_PlayerController.Athena_PlayerController_C.PlayVictoryStinger // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Athena_PlayerController(int32_t EntryPoint); // Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void PawnPossessedDispatcher__DelegateSignature(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

