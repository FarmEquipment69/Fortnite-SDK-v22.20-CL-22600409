// Class UnstableLiquidGunRuntime.FortLiquidGunProjectile
// Size: 0xb70 (Inherited: 0xa20)
struct AFortLiquidGunProjectile : AFortProjectileBase {
	struct USceneComponent* AttachComponent; // 0xa20(0x08)
	struct FVector AttachOffset; // 0xa28(0x18)
	int32_t ProjectileIndex; // 0xa40(0x04)
	char pad_A44[0x4]; // 0xa44(0x04)
	struct FVector StopNormal; // 0xa48(0x18)
	struct ALiquidRibbonManager* RibbonManager; // 0xa60(0x08)
	struct FScalableFloat MinDistBetweenProjectilesForSplineCollisionTest; // 0xa68(0x28)
	struct FScalableFloat MinDistBetweenInLineProjectilesForSplineCollisionTest; // 0xa90(0x28)
	struct FScalableFloat MinProjectileVelocityAngleToBeInLine; // 0xab8(0x28)
	enum class ECollisionChannel BroadSphereOverlapTraceChannel; // 0xae0(0x01)
	char pad_AE1[0x3]; // 0xae1(0x03)
	struct FName CapsuleTraceProfileName; // 0xae4(0x04)
	bool bCapsuleTraceComplex; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FVector_NetQuantize RandomDetachmentAngleFirstHalf; // 0xaf0(0x18)
	struct FVector_NetQuantize RandomDetachmentAngleSecondHalf; // 0xb08(0x18)
	bool bDrawDebugCollision; // 0xb20(0x01)
	bool bDrawDebugCollisionOnlyCapsuleTraceHits; // 0xb21(0x01)
	enum class ELiquidRibbonDetachmentReason DetachmentReason; // 0xb22(0x01)
	char pad_B23[0x4d]; // 0xb23(0x4d)

	void SetDetachmentReason(enum class ELiquidRibbonDetachmentReason InDetachmentReason); // Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.SetDetachmentReason // (Final|Native|Public|BlueprintCallable) // @ game+0x6863ad8
	void HandleSplineHit(struct FHitResult& Hit); // Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.HandleSplineHit // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	enum class ELiquidRibbonDetachmentReason GetDetachmentReason(); // Function UnstableLiquidGunRuntime.FortLiquidGunProjectile.GetDetachmentReason // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6863830
};

// Class UnstableLiquidGunRuntime.LiquidRibbonManager
// Size: 0x440 (Inherited: 0x288)
struct ALiquidRibbonManager : AActor {
	int32_t PointsPerSegment; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FScalableFloat MaxSegmentLengthBeforeBreak; // 0x290(0x28)
	float SplineCurveTension; // 0x2b8(0x04)
	float MinPointSize; // 0x2bc(0x04)
	float MaxPointSize; // 0x2c0(0x04)
	int32_t NumPointsAtMinPointSize; // 0x2c4(0x04)
	int32_t NumPointsAtMaxPointSize; // 0x2c8(0x04)
	float SplineLengthForSizeCalculation; // 0x2cc(0x04)
	int32_t NumPointsToTaperDownSplineEndSize; // 0x2d0(0x04)
	float MinSplineEndTaperSize; // 0x2d4(0x04)
	float TaperSizeAtDetachment_RemapClosenessToBreakageOldMin; // 0x2d8(0x04)
	float TaperSizeAtDetachment_RemapClosenessToBreakageOldMax; // 0x2dc(0x04)
	float MinPointSizePercentForFlashIntensity; // 0x2e0(0x04)
	float MaxPointSizePercentForFlashIntensity; // 0x2e4(0x04)
	struct FName PositionsNiagaraParamName; // 0x2e8(0x04)
	struct FName RibbonIDsNiagaraParamName; // 0x2ec(0x04)
	struct FName RibbonVisibilitiesNiagaraParamName; // 0x2f0(0x04)
	struct FName FlashIntensitiesNiagaraParamName; // 0x2f4(0x04)
	struct FName RibbonSizesNiagaraParamName; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FScalableFloat CalculateBaseCurlOffset_MaxSegmentLength; // 0x300(0x28)
	struct FScalableFloat CalculateBaseCurlOffset_MaxTimeSinceDetachment; // 0x328(0x28)
	struct FScalableFloat CalculateBaseCurlOffset_TowardPerpendicularMult; // 0x350(0x28)
	struct FScalableFloat CalculateBaseCurlOffset_TowardEndMult; // 0x378(0x28)
	struct FScalableFloat CalculateBaseCurlOffset_TowardRandomMult; // 0x3a0(0x28)
	struct UCurveFloat* TimeSinceDetachmentCurlCurve; // 0x3c8(0x08)
	struct FScalableFloat TimeSinceDetachmentCurlCurve_MaxTime; // 0x3d0(0x28)
	float CurlingMaxClosenessToBreakage; // 0x3f8(0x04)
	char pad_3FC[0x4]; // 0x3fc(0x04)
	struct TArray<float> SegmentLengths; // 0x400(0x10)
	struct TArray<struct FLiquidRibbonSplineDetachment> Detachments; // 0x410(0x10)
	struct TArray<struct FLiquidRibbonSplineSegment> SplineSegments; // 0x420(0x10)
	struct TArray<struct AFortLiquidGunProjectile*> Projectiles_Native; // 0x430(0x10)

	void SetNiagaraData(struct UNiagaraComponent* NiagaraComponent, struct TArray<struct FVector>& Positions, struct TArray<int32_t>& RibbonIDs, struct TArray<bool>& RibbonVisibilities, struct TArray<float>& FlashIntensities, struct TArray<int32_t>& RibbonSizes); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.SetNiagaraData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x6863b54
	void RunSplineCollisionTestOnProjectiles(); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.RunSplineCollisionTestOnProjectiles // (Final|Native|Public|BlueprintCallable) // @ game+0x6863a8c
	struct FVector GetPointOnSegment(float T, struct FLiquidRibbonSplineSegment& Segment); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetPointOnSegment // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x6863974
	struct FLiquidRibbonSplineDetachment GetOrAddDetachment(int32_t RibbonID, struct FLiquidRibbonSplineSegment& Segment); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetOrAddDetachment // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6863870
	int32_t GetFirstVisiblePointIndex(); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.GetFirstVisiblePointIndex // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6863848
	void CalculateSplinePointsAndSetNiagaraData(struct TArray<struct AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, struct UNiagaraComponent* NiagaraComponent, struct TArray<struct FVector>& OutAllPositions, struct TArray<int32_t>& OutRibbonIDs, struct TArray<bool>& OutRibbonVisibilities, struct TArray<float>& OutFlashIntensities, struct TArray<int32_t>& OutRibbonSizes); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSplinePointsAndSetNiagaraData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x114aed4
	struct TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(struct TArray<struct FVector>& Points, float Tension); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculateSegments // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6863720
	float CalculatePointSize(int32_t SegmentIndex, int32_t PointIndex); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6863664
	float CalculatePointFlashIntensity(int32_t PointSize); // Function UnstableLiquidGunRuntime.LiquidRibbonManager.CalculatePointFlashIntensity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68635d4
};

