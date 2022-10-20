// WidgetBlueprintGeneratedClass SubgameTile.SubgameTile_C
// Size: 0x15e8 (Inherited: 0x15b0)
struct USubgameTile_C : UFortSubgameTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x15b0(0x08)
	struct UWidgetAnimation* RevealCMSKeyArt; // 0x15b8(0x08)
	struct UWidgetAnimation* UnFocused; // 0x15c0(0x08)
	struct UWidgetAnimation* FocusedSecondary; // 0x15c8(0x08)
	struct UWidgetAnimation* Focused; // 0x15d0(0x08)
	struct UImage* FocusPulse; // 0x15d8(0x08)
	struct UMaterialInstanceDynamic* PulseMID; // 0x15e0(0x08)

	void PreConstruct(bool IsDesignTime); // Function SubgameTile.SubgameTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SubgameTile.SubgameTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SubgameTile.SubgameTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SubgameTile.SubgameTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SubgameTile(int32_t EntryPoint); // Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile // (Final|UbergraphFunction) // @ game+0xd67374
};

