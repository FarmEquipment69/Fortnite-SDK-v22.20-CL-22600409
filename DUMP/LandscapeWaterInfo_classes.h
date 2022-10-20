// BlueprintGeneratedClass LandscapeWaterInfo.LandscapeWaterInfo_C
// Size: 0x338 (Inherited: 0x288)
struct ALandscapeWaterInfo_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	double Flood Water Level; // 0x298(0x08)
	struct UTexture2D* Game Texture- Water Velocity and Height; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct FTransform LS Transform; // 0x2b0(0x60)
	struct FIntPoint LS RT Res; // 0x310(0x08)
	struct FVector2D Quad Size; // 0x318(0x10)
	bool Use Terrain Velocity and Height Texture; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct UMaterialInstanceDynamic* External Water MID To Update; // 0x330(0x08)

	void ReceiveBeginPlay(); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Set Flood Water Level(); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LandscapeWaterInfo(int32_t EntryPoint); // Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo // (Final|UbergraphFunction) // @ game+0xd67374
};

