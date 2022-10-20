// WidgetBlueprintGeneratedClass AthenaBoundActionButton.AthenaBoundActionButton_C
// Size: 0x1488 (Inherited: 0x1470)
struct UAthenaBoundActionButton_C : UFortBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1470(0x08)
	struct UBorder* ContentBorder; // 0x1478(0x08)
	struct UScaleBox* InputActionIconScale; // 0x1480(0x08)

	void UpdateInputActionIconSize(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateInputAction(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaBoundActionButton(int32_t EntryPoint); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.ExecuteUbergraph_AthenaBoundActionButton // (Final|UbergraphFunction) // @ game+0xd67374
};

