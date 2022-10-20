// WidgetBlueprintGeneratedClass ItemReceivedAccountWidget.ItemReceivedAccountWidget_C
// Size: 0x328 (Inherited: 0x318)
struct UItemReceivedAccountWidget_C : UFortAccountWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCommonTextBlock* CommonTextBlock_UserMessage; // 0x320(0x08)

	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ItemReceivedAccountWidget(int32_t EntryPoint); // Function ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

