// WidgetBlueprintGeneratedClass DivisionDetailsScreen.DivisionDetailsScreen_C
// Size: 0x5e0 (Inherited: 0x588)
struct UDivisionDetailsScreen_C : UFortDivisionDetailsScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x588(0x08)
	struct UWidgetAnimation* Intro; // 0x590(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x598(0x08)
	struct UVerticalBox* GeneralDivisionInfo; // 0x5a0(0x08)
	struct UImage* ; // 0x5a8(0x08)
	struct UImage* Image_PanelBG; // 0x5b0(0x08)
	struct UImage* Image_PanelBorder; // 0x5b8(0x08)
	struct UEventsSimpleButton_C* NextButton; // 0x5c0(0x08)
	struct USafeZone* ; // 0x5c8(0x08)
	struct UVerticalBox* ScoringPayoutInfo; // 0x5d0(0x08)
	struct USizeBox* SizeBox_TopContainer; // 0x5d8(0x08)

	void RightShoulderButton(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.RightShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LeftShoulderButton(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.LeftShoulderButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EmptyFunction(bool& Handled); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.EmptyFunction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DivisionDetailsScreen(int32_t EntryPoint); // Function DivisionDetailsScreen.DivisionDetailsScreen_C.ExecuteUbergraph_DivisionDetailsScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

