// WidgetBlueprintGeneratedClass PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
// Size: 0x488 (Inherited: 0x448)
struct UPlayerSurveySingleChoiceResponse_C : UFortPlayerSurveySingleChoiceResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UOverlay* Overlay_OrthogonalIndicator; // 0x450(0x08)
	struct UOverlay* Overlay_VerticalIndicator; // 0x458(0x08)
	struct UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x460(0x08)
	struct UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x468(0x08)
	struct USizeBox* SizeBox_Responses; // 0x470(0x08)
	double BaseColumnWidth; // 0x478(0x08)
	double AdditionalColumnWidth; // 0x480(0x08)

	void SetNumberOfResponses(int32_t NumberOfResponses); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.SetNumberOfResponses // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32_t EntryPoint); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.ExecuteUbergraph_PlayerSurveySingleChoiceResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

