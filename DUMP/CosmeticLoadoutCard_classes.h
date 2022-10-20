// WidgetBlueprintGeneratedClass CosmeticLoadoutCard.CosmeticLoadoutCard_C
// Size: 0x512 (Inherited: 0x498)
struct UCosmeticLoadoutCard_C : UFortCosmeticLoadoutCard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* OnRefreshCard; // 0x4a0(0x08)
	struct UWidgetAnimation* OnSelected; // 0x4a8(0x08)
	struct UWidgetAnimation* OnHover; // 0x4b0(0x08)
	struct UFortLazyImage* Image_Card; // 0x4b8(0x08)
	struct UCommonTextBlock* PresetName; // 0x4c0(0x08)
	struct UImage* RefreshBacking; // 0x4c8(0x08)
	struct USizeBox* SizeBox_Header; // 0x4d0(0x08)
	struct USizeBox* UnsavedBang; // 0x4d8(0x08)
	struct UVerticalBox* VBMainCard; // 0x4e0(0x08)
	struct UObject* CharacterAsset; // 0x4e8(0x08)
	struct UObject* BackblingAsset; // 0x4f0(0x08)
	struct UObject* PickaxeAsset; // 0x4f8(0x08)
	struct UObject* GliderAsset; // 0x500(0x08)
	struct UObject* WrapAsset; // 0x508(0x08)
	bool IsLargeTile; // 0x510(0x01)
	bool Selected; // 0x511(0x01)

	void IsBlank(bool& Blank); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.IsBlank // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Get First Item(struct TArray<struct UFortItemDefinition*>& inArray, struct UFortItemDefinition*& Result); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.Get First Item // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySelectedReverse(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.PlaySelectedReverse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySelectedForward(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.PlaySelectedForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayHoverReverse(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.PlayHoverReverse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayHoverForward(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.PlayHoverForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateLoadoutSlotVisuals(struct FName PreviewImageTextureParameterName, struct FName DefaultSwitchScalarName, struct UObject* Object, struct UTexture2D* DefaultTexture); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.UpdateLoadoutSlotVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_C53A1CD444E6E41E6696819693452D69(struct UObject* Loaded); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnLoaded_C53A1CD444E6E41E6696819693452D69 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_720B049647023D90A92C789B29FB1060(struct UObject* Loaded); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnLoaded_720B049647023D90A92C789B29FB1060 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_9C1753664F831A575C95389EB3050D6D(struct UObject* Loaded); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnLoaded_9C1753664F831A575C95389EB3050D6D // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55(struct UObject* Loaded); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_1E2615E24358EA93BCC3BBB4925113EE(struct UObject* Loaded); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnLoaded_1E2615E24358EA93BCC3BBB4925113EE // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnUpdateCard(); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.OnUpdateCard // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CosmeticLoadoutCard(int32_t EntryPoint); // Function CosmeticLoadoutCard.CosmeticLoadoutCard_C.ExecuteUbergraph_CosmeticLoadoutCard // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

