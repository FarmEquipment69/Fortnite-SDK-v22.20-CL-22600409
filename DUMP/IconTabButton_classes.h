// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// Size: 0x15f0 (Inherited: 0x1480)
struct UIconTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UNormalBangWrapper_C* BangWrapper; // 0x1488(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1490(0x08)
	struct UHorizontalBox* ContentHB; // 0x1498(0x08)
	struct UImage* LeftSideImage; // 0x14a0(0x08)
	struct USizeBox* SizeBoxShell; // 0x14a8(0x08)
	struct FText ButtonText; // 0x14b0(0x18)
	char pad_14C8[0x8]; // 0x14c8(0x08)
	struct FSlateBrush IconBrush; // 0x14d0(0xc0)
	bool UseText; // 0x1590(0x01)
	char pad_1591[0x3]; // 0x1591(0x03)
	struct FLinearColor SelectedIconTint; // 0x1594(0x10)
	struct FLinearColor DeselectedIconTint; // 0x15a4(0x10)
	struct FLinearColor HoveredIconTint; // 0x15b4(0x10)
	bool bBangEnabled; // 0x15c4(0x01)
	bool ChangeIconColorWhenSelected; // 0x15c5(0x01)
	char pad_15C6[0x2]; // 0x15c6(0x02)
	struct FSlateColor SelectedIconColor; // 0x15c8(0x14)
	struct FSlateColor UnSelectedIconColor; // 0x15dc(0x14)

	void Play Hover Sound(); // Function IconTabButton.IconTabButton_C.Play Hover Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, struct FSlateColor SelectedColor, struct FSlateColor UnselectedColor); // Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Bang State(bool bBangEnabled, int32_t Count); // Function IconTabButton.IconTabButton_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowText(); // Function IconTabButton.IconTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTabButton.IconTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function IconTabButton.IconTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function IconTabButton.IconTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTabButton.IconTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function IconTabButton.IconTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function IconTabButton.IconTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function IconTabButton.IconTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function IconTabButton.IconTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function IconTabButton.IconTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function IconTabButton.IconTabButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function IconTabButton.IconTabButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_IconTabButton(int32_t EntryPoint); // Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

