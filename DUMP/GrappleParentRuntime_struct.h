// ScriptStruct GrappleParentRuntime.SpeedScaledAxisOffsetData
// Size: 0x60 (Inherited: 0x00)
struct FSpeedScaledAxisOffsetData {
	struct FScalableFloat OffsetModifier; // 0x00(0x28)
	float BaseOffset; // 0x28(0x04)
	float SpeedScaledOffset; // 0x2c(0x04)
	struct FVector2D SpeedBounds; // 0x30(0x10)
	struct FVector2D SpeedMultiplierBounds; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

