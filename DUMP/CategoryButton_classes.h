// WidgetBlueprintGeneratedClass CategoryButton.CategoryButton_C
// Size: 0x14d2 (Inherited: 0x1430)
struct UCategoryButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* PulseWarningIcon; // 0x1438(0x08)
	struct UWidgetAnimation* Reset; // 0x1440(0x08)
	struct UWidgetAnimation* Dim; // 0x1448(0x08)
	struct UWidgetAnimation* OnSelect; // 0x1450(0x08)
	struct UWidgetAnimation* OnWarning; // 0x1458(0x08)
	struct UWidgetAnimation* OnHover; // 0x1460(0x08)
	struct UDiamondStatePip_C* DiamondStatePip; // 0x1468(0x08)
	struct USizeBox* DisabledIcon; // 0x1470(0x08)
	struct UImage* Image_Dim; // 0x1478(0x08)
	struct UNamedSlot* NamedSlot_Icon; // 0x1480(0x08)
	struct USafeZone* SafeZone; // 0x1488(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1490(0x08)
	bool IsSelected; // 0x1498(0x01)
	bool Is Hovered; // 0x1499(0x01)
	bool IsWarningOn; // 0x149a(0x01)
	char pad_149B[0x5]; // 0x149b(0x05)
	struct FText Warning Message; // 0x14a0(0x18)
	struct FText TitleText; // 0x14b8(0x18)
	bool Pad Left; // 0x14d0(0x01)
	bool Pad Right; // 0x14d1(0x01)

	void SetSafeZonePadding(bool Pad Left, bool Pad Right); // Function CategoryButton.CategoryButton_C.SetSafeZonePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetState(); // Function CategoryButton.CategoryButton_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWarningStatus(bool WarningOn, struct FText WarningMessage); // Function CategoryButton.CategoryButton_C.SetWarningStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTitleText(struct FText& TitleText); // Function CategoryButton.CategoryButton_C.SetTitleText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function CategoryButton.CategoryButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function CategoryButton.CategoryButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CategoryButton.CategoryButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function CategoryButton.CategoryButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function CategoryButton.CategoryButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetSelected(bool IsSelected); // Function CategoryButton.CategoryButton_C.SetSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHovered(bool IsHovered); // Function CategoryButton.CategoryButton_C.SetHovered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayClickedEvents(); // Function CategoryButton.CategoryButton_C.PlayClickedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function CategoryButton.CategoryButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function CategoryButton.CategoryButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CategoryButton(int32_t EntryPoint); // Function CategoryButton.CategoryButton_C.ExecuteUbergraph_CategoryButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

