// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C
// Size: 0x488 (Inherited: 0x448)
struct UPlayerSurveyMultipleChoiceResponse_C : UFortPlayerSurveyMultipleChoiceResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UOverlay* Overlay_OrthogonalIndicator; // 0x450(0x08)
	struct UOverlay* Overlay_VerticalIndicator; // 0x458(0x08)
	struct UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x460(0x08)
	struct UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x468(0x08)
	struct USizeBox* SizeBox_Responses; // 0x470(0x08)
	double BaseColumnWidth; // 0x478(0x08)
	double AdditionalColumnWidth; // 0x480(0x08)

	void SetNumberOfResponses(int32_t NumberOfResponses); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.SetNumberOfResponses // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse(int32_t EntryPoint); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

