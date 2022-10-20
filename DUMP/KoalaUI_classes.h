// Class KoalaUI.FortGameSettingRegistryExtension_Koala
// Size: 0x68 (Inherited: 0x28)
struct UFortGameSettingRegistryExtension_Koala : UFortGameSettingRegistryExtension {
	char pad_28[0x8]; // 0x28(0x08)
	struct FFortSettingNameExtensions SettingExtensions; // 0x30(0x18)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class KoalaUI.FortSidebarPanelKoala
// Size: 0x430 (Inherited: 0x3f8)
struct UFortSidebarPanelKoala : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct UCommonButtonBase* Button_KoalaDummy; // 0x410(0x08)
	struct UFortLazyImage* QrCodeImage; // 0x418(0x08)
	struct FString QRCodeURL; // 0x420(0x10)

	void OnConnectionChanged(bool bConnected); // Function KoalaUI.FortSidebarPanelKoala.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
// Size: 0x70 (Inherited: 0x30)
struct UFortUIGameFeatureAction_AttemptKoalaModal : UFortUIGameFeatureAction_PostFrontendFlowActions {
	struct TSoftClassPtr<UObject> KoalaGraphicsModalClass; // 0x30(0x28)
	char pad_58[0x18]; // 0x58(0x18)
};

// Class KoalaUI.KoalaGraphicsModal
// Size: 0x420 (Inherited: 0x3f8)
struct UKoalaGraphicsModal : UCommonActivatableWidget {
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct UCommonButtonBase* Button_KeepEnabled; // 0x410(0x08)
	struct UCommonButtonBase* Button_Disable; // 0x418(0x08)
};

// Class KoalaUI.KoalaHUDWidget
// Size: 0x528 (Inherited: 0x3f8)
struct UKoalaHUDWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	float ClipDebounceTime; // 0x400(0x04)
	float PlayerKilledPlayerReminderTime; // 0x404(0x04)
	float MatchEndedReminderTime; // 0x408(0x04)
	float ClipReminderCooldownTime; // 0x40c(0x04)
	struct USoundSubmix* ClipAudioSubmix; // 0x410(0x08)
	struct UCommonActionWidget* ClipActionWidget; // 0x418(0x08)
	struct FDataTableRowHandle ClipObjectInputAction; // 0x420(0x10)
	char pad_430[0x8]; // 0x430(0x08)
	struct TMap<int32_t, struct FKoalaClipInfo> ClipTracker; // 0x438(0x50)
	char pad_488[0x8]; // 0x488(0x08)
	int32_t LastClipID; // 0x490(0x04)
	char pad_494[0xe]; // 0x494(0x0e)
	enum class EKoalaMockClipMode MockClipMode; // 0x4a2(0x01)
	char pad_4A3[0x1]; // 0x4a3(0x01)
	int32_t MockClipUploadShortTime; // 0x4a4(0x04)
	int32_t MockClipUploadLongTime; // 0x4a8(0x04)
	int32_t MockClipCreateShortTime; // 0x4ac(0x04)
	int32_t MockClipCreateLongTime; // 0x4b0(0x04)
	char pad_4B4[0x74]; // 0x4b4(0x74)

	void UnregisterClipButtonInput(); // Function KoalaUI.KoalaHUDWidget.UnregisterClipButtonInput // (Final|Native|Private) // @ game+0x6889330
	void RegisterClipButtonInput(); // Function KoalaUI.KoalaHUDWidget.RegisterClipButtonInput // (Final|Native|Private) // @ game+0x688931c
	void OnTouchAreaMouseDown(); // Function KoalaUI.KoalaHUDWidget.OnTouchAreaMouseDown // (Final|Native|Protected|BlueprintCallable) // @ game+0x6889308
	void OnReminderTimerStarted(float Time); // Function KoalaUI.KoalaHUDWidget.OnReminderTimerStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnReminderEnded(); // Function KoalaUI.KoalaHUDWidget.OnReminderEnded // (Final|Native|Protected|BlueprintCallable) // @ game+0x68892f0
	void OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus); // Function KoalaUI.KoalaHUDWidget.OnRecordingStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputProgress(float Progress); // Function KoalaUI.KoalaHUDWidget.OnInputProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputComplete(); // Function KoalaUI.KoalaHUDWidget.OnInputComplete // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnConnectionChanged(enum class EKoalaConnectionStatus InStatus); // Function KoalaUI.KoalaHUDWidget.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnClipStatusChanged(int32_t InClipID, enum class EKoalaClipStatus InClipStatus, float InUploadProgress); // Function KoalaUI.KoalaHUDWidget.OnClipStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAvailabilityChanged(enum class EKoalaAvailability Availability); // Function KoalaUI.KoalaHUDWidget.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandlePlayerPawnEmoteStopped(struct UFortItemDefinition* MontageItemDef, struct AFortPawn* PawnEmoting); // Function KoalaUI.KoalaHUDWidget.HandlePlayerPawnEmoteStopped // (Final|Native|Private) // @ game+0x6889128
	void HandlePlayerMatchWon(); // Function KoalaUI.KoalaHUDWidget.HandlePlayerMatchWon // (Final|Native|Private) // @ game+0x6889114
	void HandleLocalPlayerKilledPlayer(struct AFortPlayerStateAthena* Player); // Function KoalaUI.KoalaHUDWidget.HandleLocalPlayerKilledPlayer // (Final|Native|Private) // @ game+0x6889094
	void HandleAthenaGamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function KoalaUI.KoalaHUDWidget.HandleAthenaGamePhaseChanged // (Final|Native|Protected) // @ game+0x6888e40
	int32_t GetUploadingClipCount(); // Function KoalaUI.KoalaHUDWidget.GetUploadingClipCount // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6888e1c
	int32_t GetTrackedClipCount(); // Function KoalaUI.KoalaHUDWidget.GetTrackedClipCount // (Final|Native|Protected|BlueprintCallable) // @ game+0x6888dfc
};

// Class KoalaUI.KoalaMainMenuButton
// Size: 0x15c0 (Inherited: 0x15b0)
struct UKoalaMainMenuButton : UFortMainMenuButtonExtension {
	char pad_15B0[0x10]; // 0x15b0(0x10)
};

// Class KoalaUI.KoalaSettingDetailExtension
// Size: 0x2c8 (Inherited: 0x2c0)
struct UKoalaSettingDetailExtension : UFortSettingDetailExtension {
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void OnConnectionChanged(bool bConnected); // Function KoalaUI.KoalaSettingDetailExtension.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAvailabilityChanged(bool bAvailable); // Function KoalaUI.KoalaSettingDetailExtension.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

