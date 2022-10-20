// WidgetBlueprintGeneratedClass SocialBanModal.SocialBanModal_C
// Size: 0x5c8 (Inherited: 0x540)
struct USocialBanModal_C : UFortSocialBanModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCommonTextBlock* disclaimer; // 0x548(0x08)
	struct UCommonTextBlock* ; // 0x550(0x08)
	struct UCommonTextBlock* ; // 0x558(0x08)
	struct UImage* Image_Severe; // 0x560(0x08)
	struct ULightbox_C* ; // 0x568(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Message; // 0x570(0x08)
	struct UCommonTextBlock* Title; // 0x578(0x08)
	struct UCommonTextBlock* ; // 0x580(0x08)
	struct UImage* ; // 0x588(0x08)
	struct UImage* ; // 0x590(0x08)
	struct UImage* ; // 0x598(0x08)
	struct UVerticalBox* VBox_Banned; // 0x5a0(0x08)
	struct UVerticalBox* VBox_Warned; // 0x5a8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SeverityImage; // 0x5b0(0x08)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x5b8(0x10)

	void OnDisplayModeSet(bool bIsBanned); // Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialBanModal(int32_t EntryPoint); // Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal // (Final|UbergraphFunction) // @ game+0xd67374
	void OnCloseSucceeded__DelegateSignature(); // Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

