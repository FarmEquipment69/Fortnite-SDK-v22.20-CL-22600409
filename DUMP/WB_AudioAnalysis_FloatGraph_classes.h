// WidgetBlueprintGeneratedClass WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
// Size: 0x338 (Inherited: 0x2b8)
struct UWB_AudioAnalysis_FloatGraph_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCanvasPanel* ; // 0x2c0(0x08)
	struct UTextBlock* Label_; // 0x2c8(0x08)
	struct UProgressBar* ProgressBar; // 0x2d0(0x08)
	struct UTextBlock* Value; // 0x2d8(0x08)
	struct FVector2D Position; // 0x2e0(0x10)
	struct FVector2D Size; // 0x2f0(0x10)
	bool calculated; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	struct FName Parameter; // 0x304(0x04)
	struct TArray<struct FVector2D> Points; // 0x308(0x10)
	int32_t numPoints; // 0x318(0x04)
	struct FLinearColor Color; // 0x31c(0x10)
	int32_t VectorIndex; // 0x32c(0x04)
	struct UMaterialParameterCollection* Collection; // 0x330(0x08)

	void OnPaint(struct FPaintContext& Context); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void calcWidgetSize(struct FGeometry geom); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Value(double Value); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Initialize MPC(struct FName Parameter, struct UMaterialParameterCollection* Collection, int32_t VectorIndex); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

