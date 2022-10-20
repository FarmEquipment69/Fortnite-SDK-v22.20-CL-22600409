// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
// Size: 0x3b0 (Inherited: 0x380)
struct UFortCosmeticItemCard_C : UFortCosmeticItemCard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* archived; // 0x388(0x08)
	struct UWidgetAnimation* Anim-Hover; // 0x390(0x08)
	struct UMaterialInstanceDynamic* ImageMaterial_NewItemCard; // 0x398(0x08)
	double BaseIconScale; // 0x3a0(0x08)
	double AnimationIconScale; // 0x3a8(0x08)

	void SequenceEvent__ENTRYPOINTFortCosmeticItemCard(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.SequenceEvent__ENTRYPOINTFortCosmeticItemCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ArchiveAnimation(bool IsArchived, bool UseAnimations); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.ArchiveAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleUpdateRarity(struct FFortColorPalette RarityColors); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem, bool ShowAsArchived, bool UseAnimations); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateImageIconScale(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateImageIconScale // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnUpdateEnhanced(bool bEnhanced); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateItemCardMaterial(struct UMaterialInterface* Material); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateItemCardIcon(struct UTexture2D* Icon, float IconScale); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateSeriesOrRarityColors(struct FFortColorPalette& ColorPalette); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSizeChanged(float InCardWidth); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHover(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUnhover(); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem, bool bShowAsArchived, bool bUseAnimations); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortCosmeticItemCard(int32_t EntryPoint); // Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

