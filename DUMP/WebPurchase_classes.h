// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// Size: 0x568 (Inherited: 0x548)
struct UWebPurchase_C : UFortWebPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UCircularThrobber* Throbber; // 0x550(0x08)
	struct FDataTableRowHandle BackAction; // 0x558(0x10)

	void HandleBack(bool& bPassThrough); // Function WebPurchase.WebPurchase_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindDelegates(); // Function WebPurchase.WebPurchase_C.BindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function WebPurchase.WebPurchase_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WebPurchase(int32_t EntryPoint); // Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase // (Final|UbergraphFunction) // @ game+0xd67374
};

