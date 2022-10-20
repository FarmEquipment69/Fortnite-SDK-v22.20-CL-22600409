// Class VKEditUI.VKConnectionIndicator
// Size: 0x4f8 (Inherited: 0x3f8)
struct UVKConnectionIndicator : UCommonActivatableWidget {
	bool bHasActiveConnection; // 0x3f8(0x01)
	enum class EVkEditStatus VkEditStatus; // 0x3f9(0x01)
	char pad_3FA[0x6]; // 0x3fa(0x06)
	struct TMap<enum class EVkEditStatus, struct FText> EditStatusLocalizedText; // 0x400(0x50)
	struct UWidgetSwitcher* ConnectedSwitcher; // 0x450(0x08)
	struct UImage* IndicatorImageNotConnected; // 0x458(0x08)
	struct UImage* IndicatorImageConnected; // 0x460(0x08)
	struct UOverlay* IndicatorPreparing; // 0x468(0x08)
	struct UImage* IndicatorImageDownloading; // 0x470(0x08)
	struct UImage* IndicatorImageStarting; // 0x478(0x08)
	struct UImage* IndicatorImageUpToDate; // 0x480(0x08)
	struct UImage* IndicatorImageRefreshRequired; // 0x488(0x08)
	struct UImage* IndicatorImageError; // 0x490(0x08)
	struct UWidget* MessageContainer; // 0x498(0x08)
	struct UCommonTextBlock* MessageText; // 0x4a0(0x08)
	struct UWidgetSwitcher* AdditionalInfoSwitcher; // 0x4a8(0x08)
	struct UWidget* DownloadContainer; // 0x4b0(0x08)
	struct UFortSimpleMaterialProgressBar* DownloadProgressBar; // 0x4b8(0x08)
	struct UCommonTextBlock* DownloadProgressText; // 0x4c0(0x08)
	struct UWidget* OpenLogContainer; // 0x4c8(0x08)
	struct UCommonActionWidget* OpenLogActionWidget; // 0x4d0(0x08)
	struct FDataTableRowHandle OpenLogInputAction; // 0x4d8(0x10)
	struct UWidget* SquadListContainer; // 0x4e8(0x08)
	char pad_4F0[0x8]; // 0x4f0(0x08)
};

// Class VKEditUI.VKDebugMessagesBase
// Size: 0x320 (Inherited: 0x320)
struct UVKDebugMessagesBase : UFortHUDElementWidget {

	void HandleGameStateInitialized(struct AFortGameState* GameState); // Function VKEditUI.VKDebugMessagesBase.HandleGameStateInitialized // (Final|Native|Protected) // @ game+0x6ae34e8
	void BP_OnGameStateInitialized(struct AFortGameState* GameState); // Function VKEditUI.VKDebugMessagesBase.BP_OnGameStateInitialized // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class VKEditUI.VkEditDynamicUIDirector
// Size: 0x2a8 (Inherited: 0x2a8)
struct AVkEditDynamicUIDirector : ADynamicUIDirectorBase {
};

// Class VKEditUI.VkEditLogTab
// Size: 0x4e0 (Inherited: 0x3f8)
struct UVkEditLogTab : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x400(0xe0)
};

