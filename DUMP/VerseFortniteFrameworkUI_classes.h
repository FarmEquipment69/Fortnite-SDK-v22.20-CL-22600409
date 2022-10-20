// Class VerseFortniteFrameworkUI.HUDControlsWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct UHUDControlsWidgetBase : UFortHUDElementWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct UDynamicEntryBox* EntryBox_Mappings; // 0x328(0x08)
};

// Class VerseFortniteFrameworkUI.VerseFortniteHUDWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct UVerseFortniteHUDWidgetBase : UFortHUDElementWidget {
	char pad_320[0x10]; // 0x320(0x10)

	void OnUpdateVisibleState(bool bEnabled); // Function VerseFortniteFrameworkUI.VerseFortniteHUDWidgetBase.OnUpdateVisibleState // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class VerseFortniteFrameworkUI.HUDCountDownWidget
// Size: 0x330 (Inherited: 0x330)
struct UHUDCountDownWidget : UVerseFortniteHUDWidgetBase {

	void OnStartCountDown(float SecondsRemaining, int32_t CurrentRound); // Function VerseFortniteFrameworkUI.HUDCountDownWidget.OnStartCountDown // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class VerseFortniteFrameworkUI.VerseFortniteActivatableWidgetBase
// Size: 0x408 (Inherited: 0x3f8)
struct UVerseFortniteActivatableWidgetBase : UCommonActivatableWidget {
	char pad_3F8[0x10]; // 0x3f8(0x10)

	void OnEnabledChanged(bool bEnabled); // Function VerseFortniteFrameworkUI.VerseFortniteActivatableWidgetBase.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class VerseFortniteFrameworkUI.HUDGameOverWidgetBase
// Size: 0x410 (Inherited: 0x408)
struct UHUDGameOverWidgetBase : UVerseFortniteActivatableWidgetBase {
	char pad_408[0x8]; // 0x408(0x08)

	void HandleGameOverStateChanged(struct UHUDGameOverComponentBase* GameOverComponent); // Function VerseFortniteFrameworkUI.HUDGameOverWidgetBase.HandleGameOverStateChanged // (Final|Native|Private) // @ game+0x6340db0
	enum class EGameOverMessageType GetGameOverType(); // Function VerseFortniteFrameworkUI.HUDGameOverWidgetBase.GetGameOverType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6340d98
};

// Class VerseFortniteFrameworkUI.HUDMapWidgetBase
// Size: 0x330 (Inherited: 0x330)
struct UHUDMapWidgetBase : UVerseFortniteHUDWidgetBase {
};

// Class VerseFortniteFrameworkUI.HUDScoreboardEntryWidgetBase
// Size: 0x300 (Inherited: 0x2e0)
struct UHUDScoreboardEntryWidgetBase : UCommonUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct FMulticastInlineDelegate OnScoreDataChanged; // 0x2e8(0x10)
	struct UHUDScoreboardEntryData* ScoreData; // 0x2f8(0x08)
};

// Class VerseFortniteFrameworkUI.HUDScoreboardWidgetBase
// Size: 0x358 (Inherited: 0x330)
struct UHUDScoreboardWidgetBase : UVerseFortniteHUDWidgetBase {
	struct TArray<struct UHUDScoreboardEntryData*> ScoreboardData; // 0x330(0x10)
	struct UCommonListView* ScoreboardListView; // 0x340(0x08)
	struct UCommonTextBlock* Text_CurrentRound; // 0x348(0x08)
	struct UCommonTextBlock* Text_NumberOfRounds; // 0x350(0x08)

	void OnUpdateScores(); // Function VerseFortniteFrameworkUI.HUDScoreboardWidgetBase.OnUpdateScores // (Final|Native|Protected) // @ game+0x6340ef0
	void OnUpdateRounds(uint32_t CurrentRound, uint32_t NumberOfRounds); // Function VerseFortniteFrameworkUI.HUDScoreboardWidgetBase.OnUpdateRounds // (Final|Native|Protected) // @ game+0x6340e30
};

// Class VerseFortniteFrameworkUI.HUDSimpleMessageWidget
// Size: 0x330 (Inherited: 0x330)
struct UHUDSimpleMessageWidget : UVerseFortniteHUDWidgetBase {

	void OnUpdateMessage(struct FString NewMessage); // Function VerseFortniteFrameworkUI.HUDSimpleMessageWidget.OnUpdateMessage // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class VerseFortniteFrameworkUI.VerseFortniteButton
// Size: 0x1440 (Inherited: 0x1430)
struct UVerseFortniteButton : UCommonButtonBase {
	struct FName ButtonActionName; // 0x1430(0x04)
	char pad_1434[0xc]; // 0x1434(0x0c)
};

