// WidgetBlueprintGeneratedClass TournamentPayoutModal.TournamentPayoutModal_C
// Size: 0x748 (Inherited: 0x4c8)
struct UTournamentPayoutModal_C : UFortTournamentPayoutModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UWidgetAnimation* Intro; // 0x4d0(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x4d8(0x08)
	struct UCloseButton_C* CloseButton; // 0x4e0(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x4e8(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x4f0(0x08)
	struct UCommonHierarchicalScrollBox* ; // 0x4f8(0x08)
	struct UCommonTextBlock* ; // 0x500(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x508(0x08)
	struct UVerticalBox* Content_LeaderboardEntries; // 0x510(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x518(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x520(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x528(0x08)
	struct UHorizontalBox* ; // 0x530(0x08)
	struct USafeZone* ; // 0x538(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x540(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_LeaderboardEntries; // 0x548(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x550(0x08)
	struct FMulticastInlineDelegate CallEventBack; // 0x558(0x10)
	struct FMulticastInlineDelegate NoPayout; // 0x568(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x578(0x1d0)

	void EmptyFunction(bool& Handled); // Function TournamentPayoutModal.TournamentPayoutModal_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Init(struct FString EventWindowId, struct FString TournamentId); // Function TournamentPayoutModal.TournamentPayoutModal_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventIntro(); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function TournamentPayoutModal.TournamentPayoutModal_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentPayoutModal.TournamentPayoutModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void NotifyNoPayouts(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NotifyNoPayouts // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void InitializeTabButton(struct UCommonButtonLegacy* TabButton, struct FText& TabText); // Function TournamentPayoutModal.TournamentPayoutModal_C.InitializeTabButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnTabVisibilityChange(bool bIsVisible); // Function TournamentPayoutModal.TournamentPayoutModal_C.OnTabVisibilityChange // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentPayoutModal(int32_t EntryPoint); // Function TournamentPayoutModal.TournamentPayoutModal_C.ExecuteUbergraph_TournamentPayoutModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void NoPayout__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.NoPayout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CallEventBack__DelegateSignature(); // Function TournamentPayoutModal.TournamentPayoutModal_C.CallEventBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

