// WidgetBlueprintGeneratedClass SocialScreen.SocialScreen_C
// Size: 0x581 (Inherited: 0x538)
struct USocialScreen_C : UAthenaSocialScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* RiftFadeIn; // 0x540(0x08)
	struct USizeBox* BottomButtonsSB; // 0x548(0x08)
	struct UImage* Image_DefaultBackground; // 0x550(0x08)
	struct USafeZone* ; // 0x558(0x08)
	struct USafeZone* ; // 0x560(0x08)
	struct USizeBox* SizeBox_ViewCareer; // 0x568(0x08)
	struct FDataTableRowHandle Input_ShowCareerScreen; // 0x570(0x10)
	bool AutoPlayVideo; // 0x580(0x01)

	void Show Career Screen Event(bool& bPassThrough); // Function SocialScreen.SocialScreen_C.Show Career Screen Event // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SocialScreen.SocialScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function SocialScreen.SocialScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialScreen(int32_t EntryPoint); // Function SocialScreen.SocialScreen_C.ExecuteUbergraph_SocialScreen // (Final|UbergraphFunction) // @ game+0xd67374
};

