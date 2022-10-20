// WidgetBlueprintGeneratedClass PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
// Size: 0x450 (Inherited: 0x440)
struct UPlayerSurveyRatingResponse_C : UFortPlayerSurveyRatingResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UPlayerSurveyHorizontalIndicator_C* PlayerSurveyHorizontalIndicator; // 0x448(0x08)

	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnResponsesSet_BP(); // Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnResponsesSet_BP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerSurveyRatingResponse(int32_t EntryPoint); // Function PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.ExecuteUbergraph_PlayerSurveyRatingResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

