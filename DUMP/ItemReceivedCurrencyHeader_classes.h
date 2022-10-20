// WidgetBlueprintGeneratedClass ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
// Size: 0x361 (Inherited: 0x301)
struct UItemReceivedCurrencyHeader_C : UItemReceivedHeaderSubWidgetBase_C {
	char pad_301[0x7]; // 0x301(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UCommonTextBlock* BattlepassTier; // 0x310(0x08)
	struct UCommonTextBlock* BattlepassUpgraded; // 0x318(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Icon; // 0x320(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Title; // 0x328(0x08)
	struct UCurrencyListView_C* ; // 0x330(0x08)
	struct UImage* ImageBattlePassIconGold; // 0x338(0x08)
	struct UImage* ImageBattlePassIconSilver; // 0x340(0x08)
	struct UItemReceivedAccountWidget_C* ItemReceivedAccountWidget; // 0x348(0x08)
	struct FMulticastInlineDelegate ActivateWidgetFromPresentationScreen; // 0x350(0x10)
	bool AlreadyActivated; // 0x360(0x01)

	void ActiveFromPresentation(struct FCurrencyDataWithGiftBox CurrencyDataArray); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemReceivedCurrencyHeader(int32_t EntryPoint); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void ActivateWidgetFromPresentationScreen__DelegateSignature(struct UFortGiftBoxItem* GiftBox, struct TArray<struct FCurrencyData>& CurrencyArray); // Function ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

