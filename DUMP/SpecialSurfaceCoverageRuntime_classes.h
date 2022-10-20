// Class SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap
// Size: 0x110 (Inherited: 0xa8)
struct UFortGameStateComponent_SurfaceCoverageMap : UFortGameStateComponent_SurfaceOverride {
	char pad_A8[0x68]; // 0xa8(0x68)

	bool UpdateCoverageMap(struct UObject* WorldContextObject, struct UTextureRenderTarget2D* SpecialSurfaceRenderTarget, struct FVector& InTopLeftWorldCoordinate, struct FVector& InBottomRightWorldCoordinate, float CoverageThreshold, float DebugDrawDuration); // Function SpecialSurfaceCoverageRuntime.FortGameStateComponent_SurfaceCoverageMap.UpdateCoverageMap // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x1ce48bc
};

