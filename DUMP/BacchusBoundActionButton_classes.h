// WidgetBlueprintGeneratedClass BacchusBoundActionButton.BacchusBoundActionButton_C
// Size: 0x14b0 (Inherited: 0x1490)
struct UBacchusBoundActionButton_C : UBacchusBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UBorder* ContentBorder; // 0x1498(0x08)
	struct UFortMobileImage* FortMobileImageInputAction; // 0x14a0(0x08)
	struct UScaleBox* InputActionIconScale; // 0x14a8(0x08)

	void UpdateInputActionIconSize(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnUpdateInputAction(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BacchusBoundActionButton(int32_t EntryPoint); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.ExecuteUbergraph_BacchusBoundActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

