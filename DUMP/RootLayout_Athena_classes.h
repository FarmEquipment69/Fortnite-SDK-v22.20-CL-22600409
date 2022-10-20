// WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C
// Size: 0x470 (Inherited: 0x420)
struct URootLayout_Athena_C : UFortRootViewportLayout_Athena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UConfirmationWindow_C* ConfirmationWindow; // 0x428(0x08)
	struct UProgressModalWidget_C* ControllerDisconnectedModal; // 0x430(0x08)
	bool bClosingErrorDialog; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct FText QuitTitle; // 0x440(0x18)
	struct FText QuitMessage; // 0x458(0x18)

	bool IsConsole(); // Function RootLayout_Athena.RootLayout_Athena_C.IsConsole // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void DialogResult_0099D78247C40A9775C753A2024EA419(enum class EFortDialogResult Result, struct FName ResultName); // Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function RootLayout_Athena.RootLayout_Athena_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnGameWindowCloseButtonClicked(); // Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function RootLayout_Athena.RootLayout_Athena_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RootLayout_Athena(int32_t EntryPoint); // Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena // (Final|UbergraphFunction) // @ game+0xd67374
};

