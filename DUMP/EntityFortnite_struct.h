// ScriptStruct EntityFortnite.EntityFortniteStormPhase
// Size: 0x50 (Inherited: 0x00)
struct FEntityFortniteStormPhase {
	float WaitTime; // 0x00(0x04)
	float ShrinkTime; // 0x04(0x04)
	float EndRadius; // 0x08(0x04)
	float EndRadiusPercentage; // 0x0c(0x04)
	int32_t DamageIndex; // 0x10(0x04)
	bool bMoves; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinMovementDistance; // 0x18(0x04)
	float MaxMovementDistance; // 0x1c(0x04)
	float MinMovementDistancePercentage; // 0x20(0x04)
	float MaxMovementDistancePercentage; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4 EndLocation; // 0x30(0x20)
};

