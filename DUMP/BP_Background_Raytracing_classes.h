// BlueprintGeneratedClass BP_Background_Raytracing.BP_Background_Raytracing_C
// Size: 0x2c8 (Inherited: 0x288)
struct ABP_Background_Raytracing_C : AActor {
	struct UStaticMeshComponent* SM_InvertedSphere_BackPlate_Half; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	bool FullSphere; // 0x298(0x01)
	bool UseCubemap; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	double Brightness; // 0x2a0(0x08)
	struct UTexture* 2dTexture; // 0x2a8(0x08)
	struct UTexture* Cubemap; // 0x2b0(0x08)
	struct FLinearColor FadeColor; // 0x2b8(0x10)

	void UserConstructionScript(); // Function BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

