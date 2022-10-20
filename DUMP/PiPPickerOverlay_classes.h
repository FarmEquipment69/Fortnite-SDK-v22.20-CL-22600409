// WidgetBlueprintGeneratedClass PiPPickerOverlay.PiPPickerOverlay_C
// Size: 0x520 (Inherited: 0x4e8)
struct UPiPPickerOverlay_C : UFortPickerOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* Intro; // 0x4f0(0x08)
	struct UWidgetAnimation* SelectionSet; // 0x4f8(0x08)
	struct UImage* AlignmentDesignViewOnlyu; // 0x500(0x08)
	struct UImage* Backplate_Shadow; // 0x508(0x08)
	struct UPictureInPictureClient* PictureInPictureClient; // 0x510(0x08)
	struct UPictureInPictureMediaController* PiPMediaController; // 0x518(0x08)

	void BP_OnItemChosen(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnItemChosen // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlaySelectionAnimation(); // Function PiPPickerOverlay.PiPPickerOverlay_C.PlaySelectionAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PiPPickerOverlay.PiPPickerOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function PiPPickerOverlay.PiPPickerOverlay_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PiPPickerOverlay(int32_t EntryPoint); // Function PiPPickerOverlay.PiPPickerOverlay_C.ExecuteUbergraph_PiPPickerOverlay // (Final|UbergraphFunction) // @ game+0xd67374
};

