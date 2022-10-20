// WidgetBlueprintGeneratedClass ProgressiveTagsBase.ProgressiveTagsBase_C
// Size: 0x340 (Inherited: 0x2b8)
struct UProgressiveTagsBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBorder* Tag_Background; // 0x2c0(0x08)
	struct UImage* Tag_Image; // 0x2c8(0x08)
	struct UCommonTextBlock* Tag_Text; // 0x2d0(0x08)
	struct FLinearColor Background Color; // 0x2d8(0x10)
	struct FSlateColor Text Color; // 0x2e8(0x14)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FText Text; // 0x300(0x18)
	struct UTexture2D* Image Texture; // 0x318(0x08)
	double Image Rotation; // 0x320(0x08)
	struct FLinearColor Image Color; // 0x328(0x10)
	struct UMaterialInterface* Image Material; // 0x338(0x08)

	void Update Image(struct UTexture2D* Texture, struct UMaterialInterface* Material, struct FLinearColor Color, double Angle); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.Update Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateColor(struct FLinearColor Background Color, struct FSlateColor Text Color); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateText(struct FText Text); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveTagsBase(int32_t EntryPoint); // Function ProgressiveTagsBase.ProgressiveTagsBase_C.ExecuteUbergraph_ProgressiveTagsBase // (Final|UbergraphFunction) // @ game+0xd67374
};

