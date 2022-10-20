// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
// Size: 0x5a8 (Inherited: 0x568)
struct UHealthWarningScreen_C : UHealthWarningScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UWidgetAnimation* FinishingAnim; // 0x570(0x08)
	struct USafeZone* ; // 0x578(0x08)
	struct FMulticastInlineDelegate HealthWarningCompleted; // 0x580(0x10)
	struct FTimerHandle ShowTimer; // 0x590(0x08)
	struct FMargin IconPadding; // 0x598(0x10)

	void HandleShowTimerComplete(); // Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_HealthWarningScreen(int32_t EntryPoint); // Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen // (Final|UbergraphFunction) // @ game+0xd67374
	void HealthWarningCompleted__DelegateSignature(); // Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

