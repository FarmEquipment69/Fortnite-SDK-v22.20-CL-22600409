// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C
// Size: 0x5c0 (Inherited: 0x580)
struct UEventPlayerStatProfileSelector_C : UFortEventPlayerStatProfileSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* Intro; // 0x588(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x590(0x08)
	struct UCommonBorder* ; // 0x598(0x08)
	struct UImage* Image_Background; // 0x5a0(0x08)
	struct USafeZone* ; // 0x5a8(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x5b0(0x08)
	struct UCommonTextBlock* Text_WindowTitle; // 0x5b8(0x08)

	void Set Up Profile Selector Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.Set Up Profile Selector Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventPlayerStatProfileSelector(int32_t EntryPoint); // Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.ExecuteUbergraph_EventPlayerStatProfileSelector // (Final|UbergraphFunction) // @ game+0xd67374
};

