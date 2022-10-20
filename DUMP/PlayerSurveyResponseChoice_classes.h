// WidgetBlueprintGeneratedClass PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
// Size: 0x1761 (Inherited: 0x1440)
struct UPlayerSurveyResponseChoice_C : UFortPlayerSurveyResponseChoiceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UBorder* Border_InputActionCircle; // 0x1448(0x08)
	struct UImage* Image_Checkbox; // 0x1450(0x08)
	struct UCommonActionWidget* InputActionWidget_Select; // 0x1458(0x08)
	struct FSlateBrush Brush_RadioUnchecked; // 0x1460(0xc0)
	struct FSlateBrush Brush_RadioChecked; // 0x1520(0xc0)
	struct FSlateBrush Brush_CheckboxUnchecked; // 0x15e0(0xc0)
	struct FSlateBrush Brush_CheckboxChecked; // 0x16a0(0xc0)
	enum class EFortPlayerSurveyResponseChoiceType ChoiceType; // 0x1760(0x01)

	void Update Text Scale(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCurrentButtonBrush(struct FSlateBrush& CurrentBrush); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UpdateChoiceImage(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateInputActionRenderOpacity(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateButtonColor(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetChoiceType(enum class EFortPlayerSurveyResponseChoiceType Type); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnSurveyResetChoice(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurrentTextStyleChanged(); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerSurveyResponseChoice(int32_t EntryPoint); // Function PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice // (Final|UbergraphFunction) // @ game+0xd67374
};

