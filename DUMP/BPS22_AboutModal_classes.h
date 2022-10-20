// WidgetBlueprintGeneratedClass BPS22_AboutModal.BPS22_AboutModal_C
// Size: 0x728 (Inherited: 0x520)
struct UBPS22_AboutModal_C : UAthenaAboutModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWidgetAnimation* ShowToonaFish; // 0x528(0x08)
	struct UWidgetAnimation* ShowBattlePass; // 0x530(0x08)
	struct UWidgetAnimation* ShowAccolades; // 0x538(0x08)
	struct UWidgetAnimation* ShowButton; // 0x540(0x08)
	struct UWidgetAnimation* ShowBuyLevels; // 0x548(0x08)
	struct UWidgetAnimation* ShowUp; // 0x550(0x08)
	struct UBPS22_AboutModal_Pip_C* ; // 0x558(0x08)
	struct UBPS22_AboutModal_Pip_C* ; // 0x560(0x08)
	struct UBPS22_AboutModal_Pip_C* ; // 0x568(0x08)
	struct UBPS22_AboutModal_Pip_C* ; // 0x570(0x08)
	struct UHorizontalBox* BattleStars; // 0x578(0x08)
	struct UBPS22_HoldableCloseButton_C* Button_HoldCloseClick; // 0x580(0x08)
	struct UIconTextButton_C* Button_HoldCloseController; // 0x588(0x08)
	struct USpatial_Specialbutton_C* Button_Next; // 0x590(0x08)
	struct UImage* DividerLine; // 0x598(0x08)
	struct UHorizontalBox* GoldBars; // 0x5a0(0x08)
	struct UHorizontalBox* HBox_Pips; // 0x5a8(0x08)
	struct UBorder* HeaderColor; // 0x5b0(0x08)
	struct UImage* HeaderIcon; // 0x5b8(0x08)
	struct UCommonTextBlock* HeaderMainText; // 0x5c0(0x08)
	struct UImage* Image; // 0x5c8(0x08)
	struct UImage* ; // 0x5d0(0x08)
	struct UImage* ; // 0x5d8(0x08)
	struct UImage* Image_Bar; // 0x5e0(0x08)
	struct UImage* Image_bigstar; // 0x5e8(0x08)
	struct UImage* Image_bodyBackground; // 0x5f0(0x08)
	struct UImage* Image_bottomLine; // 0x5f8(0x08)
	struct UImage* Image_MediumStar; // 0x600(0x08)
	struct UImage* Image_SmallStar; // 0x608(0x08)
	struct UHorizontalBox* ModalHeader; // 0x610(0x08)
	struct URichTextBlock* RichTextBlock; // 0x618(0x08)
	struct URichTextBlock* ; // 0x620(0x08)
	struct USafeZone* SafeZone_BigButtonBotton; // 0x628(0x08)
	struct USafeZone* SafeZone_Body; // 0x630(0x08)
	struct USafeZone* SafeZone_Header; // 0x638(0x08)
	struct USafeZone* SafeZone_Legl; // 0x640(0x08)
	struct USafeZone* SafeZone_MobileClose; // 0x648(0x08)
	struct USafeZone* SafeZone_SmallButtonBotton; // 0x650(0x08)
	struct USizeBox* SizeBox_Body; // 0x658(0x08)
	struct UCommonTextBlock* SubHeaderText; // 0x660(0x08)
	struct UBorder* SubtextColor; // 0x668(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Button; // 0x670(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Content; // 0x678(0x08)
	struct FMulticastInlineDelegate closeAbout; // 0x680(0x10)
	bool GoldNblack; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	double Height Override; // 0x698(0x08)
	struct FText Header; // 0x6a0(0x18)
	struct FText SubHeader; // 0x6b8(0x18)
	struct FLinearColor Header_Color; // 0x6d0(0x10)
	struct FLinearColor Subheader_Color; // 0x6e0(0x10)
	struct FLinearColor Divider_Color; // 0x6f0(0x10)
	struct UMaterialInterface* Header_Icon; // 0x700(0x08)
	bool ShowHeaderIcon; // 0x708(0x01)
	bool ShowDividerLine; // 0x709(0x01)
	bool ShowHeader; // 0x70a(0x01)
	bool show Header; // 0x70b(0x01)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct UAudioComponent* AboutModalAudio; // 0x710(0x08)
	struct FMulticastInlineDelegate Show trailer; // 0x718(0x10)

	void Set to Page 4(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set to Page 4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set randomizer(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set randomizer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set to Page 3(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set to Page 3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set to Page 2(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set to Page 2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set to page 1(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set to page 1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set pips(bool Pip 1 focused, bool Pip 2 Focused, bool Pip 3 Focused, bool Pip 4 Focused); // Function BPS22_AboutModal.BPS22_AboutModal_C.Set pips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Intro Animation Sound(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Play Intro Animation Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS17_AboutModal_Pip_1_K2Node_ComponentBoundEvent_6_ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__BPS17_AboutModal_Pip_1_K2Node_ComponentBoundEvent_6_ClickedOnPip__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS17_AboutModal_Pip_2_K2Node_ComponentBoundEvent_7_ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__BPS17_AboutModal_Pip_2_K2Node_ComponentBoundEvent_7_ClickedOnPip__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS17_AboutModal_Pip_3_K2Node_ComponentBoundEvent_8_ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__BPS17_AboutModal_Pip_3_K2Node_ComponentBoundEvent_8_ClickedOnPip__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__HoldableCloseButton_K2Node_ComponentBoundEvent_10_Hold Completed__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__HoldableCloseButton_K2Node_ComponentBoundEvent_10_Hold Completed__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function BPS22_AboutModal.BPS22_AboutModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void UpdateInput(enum class ECommonInputType Input); // Function BPS22_AboutModal.BPS22_AboutModal_C.UpdateInput // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play open anim(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Play open anim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS17_AboutModal_Pip_4_K2Node_ComponentBoundEvent_5_ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BndEvt__BPS17_AboutModal_Pip_4_K2Node_ComponentBoundEvent_5_ClickedOnPip__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BPS22_AboutModal.BPS22_AboutModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_AboutModal(int32_t EntryPoint); // Function BPS22_AboutModal.BPS22_AboutModal_C.ExecuteUbergraph_BPS22_AboutModal // (Final|UbergraphFunction) // @ game+0xd67374
	void Show trailer__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.Show trailer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void closeAbout__DelegateSignature(); // Function BPS22_AboutModal.BPS22_AboutModal_C.closeAbout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

