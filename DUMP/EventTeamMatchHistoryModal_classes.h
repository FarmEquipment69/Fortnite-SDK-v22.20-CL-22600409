// WidgetBlueprintGeneratedClass EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C
// Size: 0x5f0 (Inherited: 0x590)
struct UEventTeamMatchHistoryModal_C : UFortEventTeamMatchHistoryModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UWidgetAnimation* Intro; // 0x598(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x5a0(0x08)
	struct UCommonBorder* ; // 0x5a8(0x08)
	struct UEventMatchHistoryTournamentInfo_C* EventMatchHistoryTournamentInfo; // 0x5b0(0x08)
	struct UImage* Image_Background; // 0x5b8(0x08)
	struct USafeZone* ; // 0x5c0(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x5c8(0x08)
	struct UCommonTextBlock* Text_EventLabel; // 0x5d0(0x08)
	struct UCommonTextBlock* Text_TeamLabel; // 0x5d8(0x08)
	struct UCommonTextBlock* Text_WindowTittle; // 0x5e0(0x08)
	struct UVerticalBox* ; // 0x5e8(0x08)

	void Set Up Match History Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.Set Up Match History Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetupMatchHistory(struct FString TournamentId, struct FString EventWindowId); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventTeamMatchHistoryModal(int32_t EntryPoint); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal // (Final|UbergraphFunction) // @ game+0xd67374
};

