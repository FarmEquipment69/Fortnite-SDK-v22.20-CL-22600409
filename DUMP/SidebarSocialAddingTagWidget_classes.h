// WidgetBlueprintGeneratedClass SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
// Size: 0x328 (Inherited: 0x2e0)
struct USidebarSocialAddingTagWidget_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* AddingTag; // 0x2e8(0x08)
	struct UBorder* Border_AddingTagBorder; // 0x2f0(0x08)
	struct UImage* Image_AddingTagArrow; // 0x2f8(0x08)
	struct UOverlay* Overlay_AddingTag; // 0x300(0x08)
	struct UCommonTextBlock* Text_AddingTagName; // 0x308(0x08)
	struct FString TagCategory_AddTag; // 0x310(0x10)
	struct FName Name_InnerColor; // 0x320(0x04)
	struct FName OuterColor; // 0x324(0x04)

	void EventSetTag(); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarSocialAddingTagWidget(int32_t EntryPoint); // Function SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

