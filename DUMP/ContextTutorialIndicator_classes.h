// WidgetBlueprintGeneratedClass ContextTutorialIndicator.ContextTutorialIndicator_C
// Size: 0x761 (Inherited: 0x650)
struct UContextTutorialIndicator_C : UAthenaContextTutorialIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UWidgetAnimation* ST_in_bounce; // 0x658(0x08)
	struct UWidgetAnimation* ST_Text_Out_Fast; // 0x660(0x08)
	struct UWidgetAnimation* ST_Marker_Out02; // 0x668(0x08)
	struct UWidgetAnimation* ST_Marker_Out01; // 0x670(0x08)
	struct UWidgetAnimation* ST_Text_Out; // 0x678(0x08)
	struct UWidgetAnimation* ST_Text_in; // 0x680(0x08)
	struct UWidgetAnimation* ST_Arrow_Disappear; // 0x688(0x08)
	struct UWidgetAnimation* ST_Arrow_Bounce; // 0x690(0x08)
	struct UWidgetAnimation* ST_Arrow_Transition; // 0x698(0x08)
	struct UWidgetAnimation* ST_Out_Arrow_Marker; // 0x6a0(0x08)
	struct UWidgetAnimation* ST_Marker_FadeIN; // 0x6a8(0x08)
	struct UWidgetAnimation* ST_Arrow_Fade; // 0x6b0(0x08)
	struct UWidgetAnimation* ST_in_Spin_Arrow_Marker; // 0x6b8(0x08)
	struct UWidgetAnimation* ST_DiamondBox_Fade; // 0x6c0(0x08)
	struct UWidgetAnimation* ST_Diamond_Disappear; // 0x6c8(0x08)
	struct UWidgetAnimation* ST_Marker_MoveReaction; // 0x6d0(0x08)
	struct UWidgetAnimation* ST_in_DiamondBox_Spin; // 0x6d8(0x08)
	struct UWidgetAnimation* ST_Marker_Idle; // 0x6e0(0x08)
	struct UWidgetAnimation* ST_in_Diamond_Spin; // 0x6e8(0x08)
	struct UWidgetAnimation* ST_border; // 0x6f0(0x08)
	struct UWidgetAnimation* ST_in; // 0x6f8(0x08)
	struct UImage* Circle; // 0x700(0x08)
	struct UImage* ; // 0x708(0x08)
	struct UCommonTextBlock* Description; // 0x710(0x08)
	struct UEditableTextBox* DescriptionOLD; // 0x718(0x08)
	struct UImage* Icon; // 0x720(0x08)
	struct UImage* ; // 0x728(0x08)
	struct UImage* Image_SmallIndicator; // 0x730(0x08)
	struct UImage* Image_SmallIndicator_Child; // 0x738(0x08)
	struct UImage* Sign; // 0x740(0x08)
	struct UImage* ; // 0x748(0x08)
	struct UImage* White_Box_Child; // 0x750(0x08)
	struct UImage* White_Box_Solo; // 0x758(0x08)
	bool bIntroAnimationDone; // 0x760(0x01)

	void Finished_FBBD6B5248E73C61005758B21F90D160(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_FBBD6B5248E73C61005758B21F90D160 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_191D6D204EA6EF5125923CB749C84A4A(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_191D6D204EA6EF5125923CB749C84A4A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_5FDAD1724A4ABC34EC3B7F9D90839344(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_5FDAD1724A4ABC34EC3B7F9D90839344 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_6F1BBAF94537A4D7945ED5A452FC1188(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_6F1BBAF94537A4D7945ED5A452FC1188 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutAnimation(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayOutAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetIndicatorText(struct FText& Text); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.SetIndicatorText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PlayBounceAnimation(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayBounceAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayInAnimation(); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.PlayInAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ContextTutorialIndicator(int32_t EntryPoint); // Function ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

