// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// Size: 0x14d0 (Inherited: 0x1490)
struct ULiveStreamMenuButtonToggle_C : ULiveStreamMenuToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Hover; // 0x1498(0x08)
	struct UImage* Art; // 0x14a0(0x08)
	struct UImage* ButtonBacking; // 0x14a8(0x08)
	struct UCommonTextBlock* ButtonText; // 0x14b0(0x08)
	struct UOverlay* IconBox; // 0x14b8(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x14c0(0x08)
	struct UImage* ; // 0x14c8(0x08)

	void RefreshButton(bool IsLiveStreamEnabled); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LiveStreamMenuButtonToggle(int32_t EntryPoint); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

