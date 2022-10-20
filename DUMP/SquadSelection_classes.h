// WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C
// Size: 0x490 (Inherited: 0x478)
struct USquadSelection_C : UFortSquadSelectionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UCloseButton_C* Mobile_CloseButton; // 0x480(0x08)
	struct USafeZone* ; // 0x488(0x08)

	void OnLocalPlayerParticipationChanged(bool bIsParticipating); // Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SquadSelection.SquadSelection_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SquadSelection(int32_t EntryPoint); // Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

