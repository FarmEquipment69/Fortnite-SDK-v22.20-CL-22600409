// WidgetBlueprintGeneratedClass SplashScreenWidget.SplashScreenWidget_C
// Size: 0x5a0 (Inherited: 0x540)
struct USplashScreenWidget_C : UFortSplashScreenWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* InputPromptIdle; // 0x548(0x08)
	struct UCommonActionWidget* GamepadActionWidget; // 0x550(0x08)
	struct UHorizontalBox* GamepadInputHbox; // 0x558(0x08)
	struct UCommonTextBlock* GamepadInputText; // 0x560(0x08)
	struct UCommonLazyImage* I_Fortnite; // 0x568(0x08)
	struct UImage* ImageFakeButtonBackground; // 0x570(0x08)
	struct UHorizontalBox* MobileInputHbox; // 0x578(0x08)
	struct UCommonTextBlock* MobileInputText; // 0x580(0x08)
	struct UHorizontalBox* MouseInputHBox; // 0x588(0x08)
	struct UCommonTextBlock* MouseInputText; // 0x590(0x08)
	struct UWidgetSwitcher* Switcher_Input; // 0x598(0x08)

	void BP_OnActivated(); // Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SplashScreenWidget(int32_t EntryPoint); // Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

