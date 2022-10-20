// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// Size: 0x14d8 (Inherited: 0x14a0)
struct UEventPlayerStatProfileSelectorEntry_C : UFortEventPlayerStatProfileSelectorEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* Selected; // 0x14a8(0x08)
	struct UImage* Image_SelectedBG; // 0x14b0(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x14b8(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x14c8(0x10)

	void BP_OnHovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32_t EntryPoint); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry // (Final|UbergraphFunction) // @ game+0xd67374
	void Unhovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Hovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

