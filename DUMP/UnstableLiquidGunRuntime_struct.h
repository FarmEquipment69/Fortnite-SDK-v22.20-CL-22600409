// Enum UnstableLiquidGunRuntime.ELiquidRibbonDetachmentReason
enum class ELiquidRibbonDetachmentReason : uint8 {
	NotDetached = 0,
	ByDistance = 1,
	ByAngle = 2,
	ELiquidRibbonDetachmentReason_MAX = 3
};

// ScriptStruct UnstableLiquidGunRuntime.LiquidRibbonSplineSegment
// Size: 0x78 (Inherited: 0x00)
struct FLiquidRibbonSplineSegment {
	struct FVector A; // 0x00(0x18)
	struct FVector B; // 0x18(0x18)
	struct FVector C; // 0x30(0x18)
	struct FVector D; // 0x48(0x18)
	float DirectLength; // 0x60(0x04)
	bool bHasDetachment; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FVector> PointPositions; // 0x68(0x10)
};

// ScriptStruct UnstableLiquidGunRuntime.LiquidRibbonSplineDetachment
// Size: 0xb8 (Inherited: 0x00)
struct FLiquidRibbonSplineDetachment {
	int32_t FirstRibbonID; // 0x00(0x04)
	int32_t SecondRibbonID; // 0x04(0x04)
	float TimeDetached; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FLiquidRibbonSplineSegment Segment; // 0x10(0x78)
	struct FVector SegmentStartPoint; // 0x88(0x18)
	struct FVector SegmentEndPoint; // 0xa0(0x18)
};

