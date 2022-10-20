// WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C
// Size: 0x320 (Inherited: 0x2b8)
struct UFortRadioButtonGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct USizeBox* SizeBox_Buttons; // 0x2c0(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0x2c8(0x08)
	struct TArray<struct FFortRadioButtonItemStruct> Buttons; // 0x2d0(0x10)
	struct TArray<struct UIconTextButton_C*> CreatedButtons; // 0x2e0(0x10)
	struct FMulticastInlineDelegate RadioButtonClicked_Event; // 0x2f0(0x10)
	double WidthOverride; // 0x300(0x08)
	struct UCommonButtonGroupLegacy* CreatedButtonsGroup; // 0x308(0x08)
	struct UCommonButtonGroupLegacy* CommonButtonGroup; // 0x310(0x08)
	double HeightOverride; // 0x318(0x08)

	void CenterOnWidget(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnButtonClicked_Bind(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void UpdateButtons(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortRadioButtonGroup(int32_t EntryPoint); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void RadioButtonClicked_Event__DelegateSignature(int32_t SelectedIndex); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

