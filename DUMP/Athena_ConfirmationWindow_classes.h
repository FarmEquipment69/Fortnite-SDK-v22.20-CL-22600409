// WidgetBlueprintGeneratedClass Athena_ConfirmationWindow.Athena_ConfirmationWindow_C
// Size: 0x498 (Inherited: 0x460)
struct UAthena_ConfirmationWindow_C : UAthenaConfirmationWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* Intro; // 0x468(0x08)
	struct UImage* ; // 0x470(0x08)
	struct UImage* Image_Separator_Down; // 0x478(0x08)
	struct UImage* Image_Separator_Up; // 0x480(0x08)
	struct USafeZone* ; // 0x488(0x08)
	struct UScrollBox* ScrollBox_Description; // 0x490(0x08)

	void OnSetButtonText(struct UCommonButtonBase* Button, struct FText& Text); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.OnSetButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Athena_ConfirmationWindow(int32_t EntryPoint); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.ExecuteUbergraph_Athena_ConfirmationWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

