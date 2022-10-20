// WidgetBlueprintGeneratedClass AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C
// Size: 0x15b4 (Inherited: 0x1480)
struct UAthenaLeaderboardTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1488(0x08)
	struct UHorizontalBox* ContentHB; // 0x1490(0x08)
	struct UImage* LeftSideImage; // 0x1498(0x08)
	struct FText ButtonText; // 0x14a0(0x18)
	char pad_14B8[0x8]; // 0x14b8(0x08)
	struct FSlateBrush IconBrush; // 0x14c0(0xc0)
	bool UseText; // 0x1580(0x01)
	char pad_1581[0x3]; // 0x1581(0x03)
	struct FLinearColor SelectedIconTint; // 0x1584(0x10)
	struct FLinearColor DeselectedIconTint; // 0x1594(0x10)
	struct FLinearColor HoveredIconTint; // 0x15a4(0x10)

	void ShowText(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Icon(struct FSlateBrush IconBrush); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Text(struct FText ButtonText); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaLeaderboardTabButton(int32_t EntryPoint); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

