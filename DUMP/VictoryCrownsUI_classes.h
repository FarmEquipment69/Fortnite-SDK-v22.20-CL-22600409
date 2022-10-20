// Class VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns
// Size: 0x130 (Inherited: 0xa0)
struct UFortUIManagerComponent_VictoryCrowns : UFortControllerComponent {
	struct UVictoryCrownsIndicator* VictoryCrownsIndicatorClass; // 0xa0(0x08)
	struct FUserWidgetPool IndicatorPool; // 0xa8(0x88)

	void RebuildBearerIndicators(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.RebuildBearerIndicators // (Final|Native|Protected|HasOutParms) // @ game+0x66cfaf8
	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function VictoryCrownsUI.FortUIManagerComponent_VictoryCrowns.HandleGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x66cf87c
};

// Class VictoryCrownsUI.VictoryCrownsBearerInfoBase
// Size: 0x2f0 (Inherited: 0x2e0)
struct UVictoryCrownsBearerInfoBase : UCommonUserWidget {
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> WeakPSA; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_PlayerName; // 0x2e8(0x08)

	void SetPlayerState(struct AFortPlayerStateAthena* InPlayerState); // Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.SetPlayerState // (Final|Native|Public|BlueprintCallable) // @ game+0x66cfc44
	void OnSetPlayerState(struct AFortPlayerStateAthena* PSA); // Function VictoryCrownsUI.VictoryCrownsBearerInfoBase.OnSetPlayerState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class VictoryCrownsUI.VictoryCrownsIndicator
// Size: 0x3e8 (Inherited: 0x3c0)
struct UVictoryCrownsIndicator : UFortActorIndicatorWidget {
	char pad_3C0[0x28]; // 0x3c0(0x28)

	void OnScreenClampChanged(bool bIsClamped); // Function VictoryCrownsUI.VictoryCrownsIndicator.OnScreenClampChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDistanceChanged(int32_t Distance); // Function VictoryCrownsUI.VictoryCrownsIndicator.OnDistanceChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct AFortPlayerStateAthena* GetIndicatedPlayerStateAthena(); // Function VictoryCrownsUI.VictoryCrownsIndicator.GetIndicatedPlayerStateAthena // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x66cf7bc
};

// Class VictoryCrownsUI.VictoryCrownsPlacementOverlay
// Size: 0x340 (Inherited: 0x340)
struct UVictoryCrownsPlacementOverlay : UPostGamePlacementOverlay {
};

// Class VictoryCrownsUI.VictoryCrownsPlayerInfoWidget
// Size: 0x330 (Inherited: 0x320)
struct UVictoryCrownsPlayerInfoWidget : UFortHUDElementWidget {
	char pad_320[0x10]; // 0x320(0x10)

	void OnPlayerVictoryCrownStatusChanged(bool bHasCrown); // Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.OnPlayerVictoryCrownStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleCrownBearerListChanged(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.VictoryCrownsPlayerInfoWidget.HandleCrownBearerListChanged // (Final|Native|Protected|HasOutParms) // @ game+0x66cf7e0
};

// Class VictoryCrownsUI.VictoryCrownsPreGameWidget
// Size: 0x430 (Inherited: 0x3f8)
struct UVictoryCrownsPreGameWidget : UCommonActivatableWidget {
	struct UDynamicEntryBox* EntryBox_BearerList; // 0x3f8(0x08)
	struct UCommonActionWidget* TipActionWidget; // 0x400(0x08)
	struct FDataTableRowHandle CloseObjectInputAction; // 0x408(0x10)
	char pad_418[0x18]; // 0x418(0x18)

	void UnregisterCloseButtonInput(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.UnregisterCloseButtonInput // (Final|Native|Private) // @ game+0x66cfcc4
	void StartFadeOut(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.StartFadeOut // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void RegisterCloseButtonInput(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RegisterCloseButtonInput // (Final|Native|Private) // @ game+0x66cfc30
	void RebuildBearerList(struct TArray<struct AFortPlayerStateAthena*>& CrownBearerList); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.RebuildBearerList // (Final|Native|Private|HasOutParms) // @ game+0x66cfb94
	void OnInputMethodChanged(enum class ECommonInputType CurrentInput); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCloseActionsComplete(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnCloseActionsComplete // (Final|Native|Protected|BlueprintCallable) // @ game+0x66cfac8
	void OnButtonCloseProgress(float Progress); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonCloseProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnButtonClose(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.OnButtonClose // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.HandleGamePhaseStepChanged // (Final|Native|Private|HasOutParms) // @ game+0x66cf9e8
	void FadeOutTimerFinished(); // Function VictoryCrownsUI.VictoryCrownsPreGameWidget.FadeOutTimerFinished // (Final|Native|Private) // @ game+0x66cf7a8
};

