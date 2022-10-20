// WidgetBlueprintGeneratedClass ErrorInfoFlag.ErrorInfoFlag_C
// Size: 0x300 (Inherited: 0x2b8)
struct UErrorInfoFlag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* Image_ErrorBG; // 0x2c0(0x08)
	struct UImage* Image_ErrorBG_Accent; // 0x2c8(0x08)
	struct UImage* OptionalIcon; // 0x2d0(0x08)
	struct URichTextBlock* RichText_UserInformation; // 0x2d8(0x08)
	struct UScaleBox* ScaleBox_Mobile; // 0x2e0(0x08)
	struct FLinearColor AccentColor; // 0x2e8(0x10)
	struct UMaterialInterface* IconMaterial; // 0x2f8(0x08)

	void UpdateIconMaterial(struct UMaterialInterface* Material); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateIconMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateAccentColor(struct FLinearColor Color); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateAccentColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(struct FText Text); // Function ErrorInfoFlag.ErrorInfoFlag_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ErrorInfoFlag.ErrorInfoFlag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ErrorInfoFlag.ErrorInfoFlag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ErrorInfoFlag(int32_t EntryPoint); // Function ErrorInfoFlag.ErrorInfoFlag_C.ExecuteUbergraph_ErrorInfoFlag // (Final|UbergraphFunction) // @ game+0xd67374
};

