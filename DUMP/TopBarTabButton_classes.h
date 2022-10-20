// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
// Size: 0x15b8 (Inherited: 0x14e0)
struct UTopBarTabButton_C : UFortTopBarTabTextIconButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* Hovered; // 0x14e8(0x08)
	struct UWidgetAnimation* Selected; // 0x14f0(0x08)
	struct USizeBox* ; // 0x14f8(0x08)
	struct USizeBox* ; // 0x1500(0x08)
	struct USizeBox* ; // 0x1508(0x08)
	struct UVerticalBox* ; // 0x1510(0x08)
	struct UMaterialInstanceDynamic* MID_ButtonBorder; // 0x1518(0x08)
	bool PreviewMobileStyle; // 0x1520(0x01)
	char pad_1521[0x3]; // 0x1521(0x03)
	struct FFloatSpringState SpringState_ShapeChange; // 0x1524(0x0c)
	struct FFloatSpringState SpringState_Scale; // 0x1530(0x0c)
	char pad_153C[0x4]; // 0x153c(0x04)
	double Spring_Scale_Target; // 0x1540(0x08)
	double MassMultiply; // 0x1548(0x08)
	double DampenMultiply; // 0x1550(0x08)
	double StiffnessMultiply; // 0x1558(0x08)
	bool VisualSelectionState; // 0x1560(0x01)
	char pad_1561[0x7]; // 0x1561(0x07)
	double RandomFloat_Top; // 0x1568(0x08)
	double RandomFloat_Left; // 0x1570(0x08)
	double RandomFloat_Right; // 0x1578(0x08)
	double RandomFloat_Bottom; // 0x1580(0x08)
	double ShapeChange_New; // 0x1588(0x08)
	double ShapeChange_Target; // 0x1590(0x08)
	bool UpdateSpring; // 0x1598(0x01)
	char pad_1599[0x7]; // 0x1599(0x07)
	struct FText ButtonText; // 0x15a0(0x18)

	void OverrideIcon(bool Show, struct FSlateBrush inSlateBrush); // Function TopBarTabButton.TopBarTabButton_C.OverrideIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetText(struct FText ButtonText); // Function TopBarTabButton.TopBarTabButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateMIDWithRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SeedRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeButtonBorderMID(); // Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSelectionChangedVisuals(bool bIsSelected); // Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function TopBarTabButton.TopBarTabButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TopBarTabButton.TopBarTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function TopBarTabButton.TopBarTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TopBarTabButton(int32_t EntryPoint); // Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

