// Class SrirachaRanch.StreamingRadioPlayerComponent
// Size: 0x438 (Inherited: 0xa0)
struct UStreamingRadioPlayerComponent : UFortPawnComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
	struct TMap<struct FName, struct FSrirachaInputMappingData> InputMappingData; // 0xb0(0x50)
	struct FMulticastInlineDelegate OnSourceLoading; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSourcePlayed; // 0x110(0x10)
	struct FMulticastInlineDelegate OnSourceStopped; // 0x120(0x10)
	struct FMulticastInlineDelegate OnSourceFailed; // 0x130(0x10)
	struct FMulticastInlineDelegate OnRadioExplicitStop; // 0x140(0x10)
	float PercentAutostartRadio; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct TArray<struct FName> DisabledVehicleList; // 0x158(0x10)
	struct TMap<struct FName, float> ExteriorVolumeMultiplierMap; // 0x168(0x50)
	struct TMap<struct FName, float> InteriorVolumeMultiplierMap; // 0x1b8(0x50)
	bool bMinimalStateOnPlatform; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct TArray<struct FString> DisabledStationList; // 0x210(0x10)
	bool bAutostartOnEntry; // 0x220(0x01)
	bool bDisabledForCurrentPlayerState; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct FStreamingRadioSourceData ReplicatedRadioSourceData; // 0x228(0x48)
	struct UMediaSoundComponent* SoundComponent; // 0x270(0x08)
	struct UStreamingRadioAudioShapeComponent* AudioShape; // 0x278(0x08)
	struct USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource; // 0x280(0x08)
	struct FAthenaRadioStation LastSource; // 0x288(0x38)
	struct TArray<struct URadioContentSourceItemDefinition*> Sources; // 0x2c0(0x10)
	struct FAthenaRadioStation FallbackSource; // 0x2d0(0x38)
	struct TMap<struct FName, struct FSrirachaPerClassSpecialSeats> SpecialSeatList; // 0x308(0x50)
	struct UMediaPlayer* MediaPlayer; // 0x358(0x08)
	struct UMediaPlayer* MediaPlayerInstance; // 0x360(0x08)
	struct UFortMediaPlayerCtrl* MediaController; // 0x368(0x08)
	struct USoundSubmixBase* DefaultSoundSubmix; // 0x370(0x08)
	struct USoundSubmixBase* LicensedSoundSubmix; // 0x378(0x08)
	struct UFortStreamMediaSource* LastMediaSource; // 0x380(0x08)
	struct UFortStreamMediaSource* IncomingMediaSource; // 0x388(0x08)
	enum class ERadioSource CurrentMode; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	int32_t MaximumRetries; // 0x394(0x04)
	int32_t FadeoutWhenUnpoweredInMS; // 0x398(0x04)
	int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x39c(0x04)
	int32_t MaxFadeoutTimeMS; // 0x3a0(0x04)
	int32_t DefaultPlayingIndex; // 0x3a4(0x04)
	struct USoundMix* SoundMixInside; // 0x3a8(0x08)
	struct USoundMix* SoundMixOutside; // 0x3b0(0x08)
	char pad_3B8[0x4]; // 0x3b8(0x04)
	float ActivationRadius; // 0x3bc(0x04)
	struct FName ComponentToAttachTo; // 0x3c0(0x04)
	struct FName ComponentSocketAttachTo; // 0x3c4(0x04)
	struct UFortStreamMediaSource* MediaSource; // 0x3c8(0x08)
	struct TArray<struct FAthenaRadioStation> RadioStationList; // 0x3d0(0x10)
	struct UObject* DelegateContextObject; // 0x3e0(0x08)
	float MediaStartTimeFromInit; // 0x3e8(0x04)
	char pad_3EC[0x4c]; // 0x3ec(0x4c)

	void ToggleRadioActive(); // Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive // (Final|Native|Public|BlueprintCallable) // @ game+0x68bc7b4
	void StopRadioWithFadeout(int32_t Milliseconds); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bc734
	void StopRadio(); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bc720
	void StopIfNoDriver(struct TScriptInterface<IFortVehicleInterface>& Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver // (Final|Native|Protected|HasOutParms) // @ game+0x68bc690
	void StartRadio(int32_t IdxToPlay, bool bFallbackOverride); // Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bc5cc
	void SoundMixUpdateWeaponState(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState // (Final|Native|Private) // @ game+0x68bc3cc
	void SoundMixUpdateTargetingState(bool bNewIsTargeting); // Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState // (Final|Native|Private) // @ game+0x68bc344
	void SetInteriorVolume(struct TScriptInterface<IFortVehicleInterface>& Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume // (Final|Native|Protected|HasOutParms) // @ game+0x68bc2b4
	void SetExteriorVolume(struct TScriptInterface<IFortVehicleInterface>& Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume // (Final|Native|Protected|HasOutParms) // @ game+0x68bc224
	void SetActivationRadius(float InRadius); // Function SrirachaRanch.StreamingRadioPlayerComponent.SetActivationRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x68bc194
	void ServerStopRadio(); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerStopRadio // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bc17c
	void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSetDisabledForCurrentPlayerState // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bc0f8
	void ServerSaveFadeOutTime(float InFadeOutSeconds); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveFadeOutTime // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bbfdc
	void ServerSavedSource(struct FAthenaRadioStation InSource); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSavedSource // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bc064
	void ServerSaveAutoStart(bool bInAutoStart); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerSaveAutoStart // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bbf58
	void ServerPlayIndex(int32_t InIndex, enum class EStreamingRadioSourceState InState); // Function SrirachaRanch.StreamingRadioPlayerComponent.ServerPlayIndex // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x68bbe90
	void PlayPrevIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bbe7c
	void PlayNextIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bbe68
	void PlayDefaultIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x68bbe4c
	void OnSuccessfulURL(struct FString URL); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL // (Final|Native|Protected) // @ game+0x68bbcec
	void OnRep_RadioSourceData(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData // (Final|Native|Protected) // @ game+0x20ff2b4
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged // (Final|Native|Protected) // @ game+0x68bbc6c
	void OnPawnExitVehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPawnExitSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPawnEnterVehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPawnEnterSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnOwningVehicleDied(struct AFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer& InTags, struct AController* EventInstigator, struct AActor* DamageCauser); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied // (Final|Native|Protected|HasOutParms) // @ game+0x68bbae4
	void OnOwnerUnpowered(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered // (Final|Native|Protected) // @ game+0x68bbacc
	void OnOwnerReFueled(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled // (Final|Native|Protected) // @ game+0x249187c
	void OnOwnerOutOfFuel(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel // (Final|Native|Protected) // @ game+0x68bbaac
	void OnOwnerExploded(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded // (Final|Native|Protected) // @ game+0x68bba94
	void OnLicensedAudioSettingChanged(struct UFortClientSettingsRecord* Settings); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged // (Final|Native|Protected) // @ game+0x68bba14
	void OnFailedURL(struct FString URL); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL // (Final|Native|Protected) // @ game+0x68bb8b4
	void NativeOnVehicleOwnerChanged(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AActor* NewOwner, struct AActor* PrevOwner); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnVehicleOwnerChanged // (Final|Native|Protected|HasOutParms) // @ game+0x68bb79c
	void NativeOnPawnExitVehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x20ff46c
	void NativeOnPawnExitSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat // (Final|Native|Protected|HasOutParms) // @ game+0x20ff620
	void NativeOnPawnEnterVehicle(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x20ff790
	void NativeOnPawnEnterSeat(struct TScriptInterface<IFortVehicleInterface>& Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat // (Final|Native|Protected|HasOutParms) // @ game+0x20ff938
	void MediaReady(struct FString String); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady // (Final|Native|Protected) // @ game+0x68bb63c
	void MediaPlayed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed // (Final|Native|Protected) // @ game+0x68bb628
	void MediaLoad(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad // (Final|Native|Protected) // @ game+0x68bb614
	void MediaFinishedOrClosed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed // (Final|Native|Protected) // @ game+0x68bb600
	void MediaFailedToOpen(struct FString String); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen // (Final|Native|Protected) // @ game+0x68bb4a0
	void MediaExplicitClose(bool bReallyExplicit); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose // (Final|Native|Protected) // @ game+0x68bb420
	bool IsPlayingLiveFeed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bb3f8
	bool IsExternalSeat(int32_t SeatIdx); // Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bb36c
	struct FAthenaRadioStation GetOptionAt(int32_t idx); // Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68bb2c4
};

// Class SrirachaRanch.RadioContentSourceItemDefinition
// Size: 0x430 (Inherited: 0x418)
struct URadioContentSourceItemDefinition : UFortAccountItemDefinition {
	struct FString ResourceID; // 0x418(0x10)
	struct UFortStreamMediaSource* MediaSource; // 0x428(0x08)
};

// Class SrirachaRanch.StreamingRadioAudioShapeComponent
// Size: 0x178 (Inherited: 0x120)
struct UStreamingRadioAudioShapeComponent : UFortAudioShapeComponent {
	float Radius; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UStreamingRadioPlayerComponent* RadioPlayer; // 0x128(0x08)
	char pad_130[0x48]; // 0x130(0x48)
};

// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
// Size: 0x38 (Inherited: 0x30)
struct USrirachaRanchComponentTemplateWrapper : UDataAsset {
	struct UMediaSoundComponent* MediaSoundPlayerTemplate; // 0x30(0x08)
};

