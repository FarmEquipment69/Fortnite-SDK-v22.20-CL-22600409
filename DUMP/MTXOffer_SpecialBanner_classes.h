// WidgetBlueprintGeneratedClass MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C
// Size: 0x320 (Inherited: 0x2b8)
struct UMTXOffer_SpecialBanner_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonBorder* Border_SaleInfo; // 0x2c0(0x08)
	struct UHorizontalBox* HB_BattlePassStarsSupplemental; // 0x2c8(0x08)
	struct UImage* Image_BattleStarSupplemental; // 0x2d0(0x08)
	struct UCommonTextBlock* T_BattleStarInfoSupplemental; // 0x2d8(0x08)
	struct UCommonTextBlock* T_SaleInfo; // 0x2e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Main; // 0x2e8(0x08)
	bool bShowBanner; // 0x2f0(0x01)
	bool bHasBattlePassStars; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct FText SalesInfoText; // 0x2f8(0x18)
	int32_t NumOfBattlePassStars; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UCatalogMessaging* CatalogMessaging; // 0x318(0x08)

	void SetupSpecialOfferBanner(bool bHasSale, struct FText SaleText, struct FString BannerOverrideTag, bool bHasBattlePassStars, int32_t iNumOfBattlePassStars); // Function MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.SetupSpecialOfferBanner // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MTXOffer_SpecialBanner(int32_t EntryPoint); // Function MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.ExecuteUbergraph_MTXOffer_SpecialBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

