// WidgetBlueprintGeneratedClass AthenaMOTDWidget.AthenaMOTDWidget_C
// Size: 0x608 (Inherited: 0x570)
struct UAthenaMOTDWidget_C : UFortAthenaMOTDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x578(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x580(0x08)
	struct UWidgetAnimation* OnNewSelect; // 0x588(0x08)
	struct UBorder* Border_Mobile; // 0x590(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Left; // 0x598(0x08)
	struct UCircleArrowButton_C* CircleArrowButton_Right; // 0x5a0(0x08)
	struct UCommonTextBlock* CommonText_NewsHeader; // 0x5a8(0x08)
	struct UImage* ; // 0x5b0(0x08)
	struct UImage* Image_TextFloater; // 0x5b8(0x08)
	struct USafeZone* ; // 0x5c0(0x08)
	struct USafeZone* ; // 0x5c8(0x08)
	struct USafeZone* ; // 0x5d0(0x08)
	struct UImage* SaveSpinner_NormalAction; // 0x5d8(0x08)
	struct UImage* SaveSpinner_SecondaryNormalAction; // 0x5e0(0x08)
	struct UImage* SaveSpinner_SecondarySpecialAction; // 0x5e8(0x08)
	struct UImage* SaveSpinner_SpecialAction; // 0x5f0(0x08)
	struct FMulticastInlineDelegate UpdateStyle; // 0x5f8(0x10)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateCustomColorStyle(bool bHasCustomColor, struct FColor CustomDarkColor, struct FColor CustomLightColor); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.UpdateCustomColorStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_B7839D98483DEF9593D448BA28AE74F7(enum class EFortDialogResult Result, struct FName ResultName); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.DialogResult_B7839D98483DEF9593D448BA28AE74F7 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void StartSTWUpsell(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.StartSTWUpsell // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetSpecialButtonText(struct FText& InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetSpecialButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SetNormalButtonText(struct FText& InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetNormalButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PlayIntroAnimation(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.PlayIntroAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetSecondarySpecialButtonText(struct FText& InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetSecondarySpecialButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SetSecondaryNormalButtonText(struct FText& InText); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.SetSecondaryNormalButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSelectedNews(struct FAthenaMOTDBase& NewsEntry); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnSelectedNews // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnIsActivityLoadingChanged(bool bIsLoading); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnIsActivityLoadingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMOTDWidget(int32_t EntryPoint); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.ExecuteUbergraph_AthenaMOTDWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle); // Function AthenaMOTDWidget.AthenaMOTDWidget_C.UpdateStyle__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

