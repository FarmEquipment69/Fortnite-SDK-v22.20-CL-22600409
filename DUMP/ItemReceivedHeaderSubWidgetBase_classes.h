// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// Size: 0x301 (Inherited: 0x2d0)
struct UItemReceivedHeaderSubWidgetBase_C : UItemReceivedHeaderBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UFortGiftBoxItem* GiftBoxItem_BP; // 0x2d8(0x08)
	struct FString FromUserName_BP; // 0x2e0(0x10)
	struct TArray<struct FFortReceivedItemLootInfo> ItemDefs; // 0x2f0(0x10)
	bool bSelfGift; // 0x300(0x01)

	void SetBlueprintGiftBoxItem(struct UFortGiftBoxItem* GiftBox, struct FString FromUser, struct TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift); // Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitFromGiftBoxItem_BP(); // Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32_t EntryPoint); // Function ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase // (Final|UbergraphFunction) // @ game+0xd67374
};

