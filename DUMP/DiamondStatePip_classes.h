// WidgetBlueprintGeneratedClass DiamondStatePip.DiamondStatePip_C
// Size: 0x302 (Inherited: 0x2e0)
struct UDiamondStatePip_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Selection; // 0x2e8(0x08)
	struct UImage* PIP; // 0x2f0(0x08)
	struct UImage* Pip_Outline; // 0x2f8(0x08)
	bool Is Hovered; // 0x300(0x01)
	bool Is Selected; // 0x301(0x01)

	void ResetState(); // Function DiamondStatePip.DiamondStatePip_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function DiamondStatePip.DiamondStatePip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetSelectedState(bool IsSelected); // Function DiamondStatePip.DiamondStatePip_C.SetSelectedState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetHoverState(bool IsHovered); // Function DiamondStatePip.DiamondStatePip_C.SetHoverState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DiamondStatePip(int32_t EntryPoint); // Function DiamondStatePip.DiamondStatePip_C.ExecuteUbergraph_DiamondStatePip // (Final|UbergraphFunction) // @ game+0xd67374
};

