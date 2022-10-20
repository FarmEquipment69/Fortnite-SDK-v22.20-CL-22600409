// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// Size: 0x2d8 (Inherited: 0x2b8)
struct UWB_AudioAnalysis_UI_C : UFortAudioAnalysisDebugWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UVerticalBox* GraphBox; // 0x2c0(0x08)
	struct TArray<struct UWB_AudioAnalysis_FloatGraph_C*> Widgets; // 0x2c8(0x10)

	void AddScalarParameter(struct FAudioAnalysisParameterScalar& Param); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void AddVectorParameter(struct FAudioAnalysisParameterVector& Param); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ClearParameters(); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

