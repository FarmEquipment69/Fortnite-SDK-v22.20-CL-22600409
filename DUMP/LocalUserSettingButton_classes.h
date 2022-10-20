// WidgetBlueprintGeneratedClass LocalUserSettingButton.LocalUserSettingButton_C
// Size: 0x14c0 (Inherited: 0x14a0)
struct ULocalUserSettingButton_C : UFortLocalUserSettingButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14a0(0x08)
	struct UWidgetAnimation* OnHover; // 0x14a8(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x14b0(0x08)
	struct UImage* Image_AnimatedArrow; // 0x14b8(0x08)

	void BP_OnHovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LocalUserSettingButton(int32_t EntryPoint); // Function LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton // (Final|UbergraphFunction) // @ game+0xd67374
};

