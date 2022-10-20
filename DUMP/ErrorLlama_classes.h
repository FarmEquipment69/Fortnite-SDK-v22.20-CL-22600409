// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
// Size: 0x300 (Inherited: 0x2b8)
struct UErrorLlama_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* ; // 0x2c0(0x08)
	struct UMaterialInstanceDynamic* MID_Llama; // 0x2c8(0x08)
	bool bFlippedTexture; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FVector2D CurLookAt2D; // 0x2d8(0x10)
	enum class ECommonInputType CurInputType; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	double EyeInterpSpeed; // 0x2f0(0x08)
	double MaterialInputScale; // 0x2f8(0x08)

	void HandleInputTypeChanged(enum class ECommonInputType NewInputType); // Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ErrorLlama.ErrorLlama_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ErrorLlama.ErrorLlama_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void RandomizeColor(); // Function ErrorLlama.ErrorLlama_C.RandomizeColor // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleNormalizedInputDirection(struct FVector2D 2DInputVec); // Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ErrorLlama(int32_t EntryPoint); // Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

