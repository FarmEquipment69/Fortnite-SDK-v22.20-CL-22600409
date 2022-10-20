// WidgetBlueprintGeneratedClass PartySuggestionButton.PartySuggestionButton_C
// Size: 0x15e3 (Inherited: 0x14c0)
struct UPartySuggestionButton_C : UFortPartySuggestionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c0(0x08)
	struct UWidgetAnimation* RequestAccepted; // 0x14c8(0x08)
	struct UWidgetAnimation* MouseHovered; // 0x14d0(0x08)
	struct UWidgetAnimation* Outro; // 0x14d8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14e0(0x08)
	struct UWidgetAnimation* Intro; // 0x14e8(0x08)
	struct UBorder* ; // 0x14f0(0x08)
	struct UBorder* BorderOfDarkenedText; // 0x14f8(0x08)
	struct UHorizontalBox* HB_ActionPrompt; // 0x1500(0x08)
	struct UImage* I_SquiglyTail; // 0x1508(0x08)
	struct UImage* SparklyTraingles; // 0x1510(0x08)
	struct UMaterialInstanceDynamic* MID_MainBorder_Normal; // 0x1518(0x08)
	struct UMaterialInstanceDynamic* MID_MainBorder_Normal_Tail; // 0x1520(0x08)
	struct FFloatSpringState SpringState_ShapeChange; // 0x1528(0x0c)
	char pad_1534[0x4]; // 0x1534(0x04)
	double SS_0_Stiffness; // 0x1538(0x08)
	double SS_0_Damping; // 0x1540(0x08)
	double SS_0_Mass; // 0x1548(0x08)
	double Spring_ShapeChange_NewVal; // 0x1550(0x08)
	double Spring_ShapeChange_Target; // 0x1558(0x08)
	struct FName MID_ShapeParam; // 0x1560(0x04)
	char pad_1564[0x4]; // 0x1564(0x04)
	struct UMaterialInterface* M_MainBorder_Normal; // 0x1568(0x08)
	struct UMaterialInterface* M_MainBorder_Normal_Tail; // 0x1570(0x08)
	struct UMaterialInterface* M_MainBorder_Highlight; // 0x1578(0x08)
	struct UMaterialInterface* M_MainBorder_Highlight_Tail; // 0x1580(0x08)
	struct UMaterialInstanceDynamic* MID_HighlightBorder; // 0x1588(0x08)
	struct UMaterialInstanceDynamic* MID_HighlightBorder_Tail; // 0x1590(0x08)
	struct UMaterialInstanceDynamic* MID_Cur_Border; // 0x1598(0x08)
	struct UMaterialInstanceDynamic* MID_Cur_Tail; // 0x15a0(0x08)
	struct UMaterialInstanceDynamic* MID_SparkleTraingles; // 0x15a8(0x08)
	struct UMaterialInterface* M_SparkleTriangles; // 0x15b0(0x08)
	struct FName MID_Color_R_Param; // 0x15b8(0x04)
	struct FName MID_Sparkles_InnerColorParam; // 0x15bc(0x04)
	struct FName MID_Sparkles_OuterColorParam; // 0x15c0(0x04)
	struct FName MID_Color_L_Param; // 0x15c4(0x04)
	struct FName MID_Sparkles_TriangleColor_A; // 0x15c8(0x04)
	struct FFloatSpringState SpringState_Scale; // 0x15cc(0x0c)
	double Spring_Scale_Target; // 0x15d8(0x08)
	bool bUseSpringInterpAnims; // 0x15e0(0x01)
	bool IsInvited; // 0x15e1(0x01)
	bool bNewSuggestionInQueue; // 0x15e2(0x01)

	void SetupMIDReferences(); // Function PartySuggestionButton.PartySuggestionButton_C.SetupMIDReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMainMIDs(struct UMaterialInstanceDynamic* BorderMID, struct UMaterialInstanceDynamic* TailMID, struct UMaterialInstanceDynamic* SparklesMID); // Function PartySuggestionButton.PartySuggestionButton_C.SetMainMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitPhysAnim(); // Function PartySuggestionButton.PartySuggestionButton_C.InitPhysAnim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitMIDs(); // Function PartySuggestionButton.PartySuggestionButton_C.InitMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOutroAnimationFinished(); // Function PartySuggestionButton.PartySuggestionButton_C.HandleOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PartySuggestionButton.PartySuggestionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PartySuggestionButton.PartySuggestionButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayIntro(); // Function PartySuggestionButton.PartySuggestionButton_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PartySuggestionButton.PartySuggestionButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PartySuggestionButton.PartySuggestionButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDisplayInfoUpdated(bool bIsInvited, bool bIsPlaying); // Function PartySuggestionButton.PartySuggestionButton_C.OnDisplayInfoUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSuggestionAccepted(); // Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionAccepted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDismissSuggestion(); // Function PartySuggestionButton.PartySuggestionButton_C.OnDismissSuggestion // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNewSuggestionAdded(); // Function PartySuggestionButton.PartySuggestionButton_C.OnNewSuggestionAdded // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function PartySuggestionButton.PartySuggestionButton_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function PartySuggestionButton.PartySuggestionButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSuggestionChanged(); // Function PartySuggestionButton.PartySuggestionButton_C.OnSuggestionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PartySuggestionButton(int32_t EntryPoint); // Function PartySuggestionButton.PartySuggestionButton_C.ExecuteUbergraph_PartySuggestionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

