// Enum ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8 {
	FastTetherFastLength = 0,
	AccurateTetherFastLength = 1,
	AccurateTetherAccurateLength = 2,
	MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode_MAX = 4
};

// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8 {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveStiffness = 4,
	AnimDriveDamping = 5,
	TetherStiffness = 6,
	TetherScale = 7,
	Drag = 8,
	Lift = 9,
	EdgeStiffness = 10,
	BendingStiffness = 11,
	AreaStiffness = 12,
	BucklingStiffness = 13,
	Pressure = 14,
	EChaosWeightMapTarget_MAX = 15
};

// ScriptStruct ChaosCloth.ChaosClothWeightedValue
// Size: 0x08 (Inherited: 0x00)
struct FChaosClothWeightedValue {
	float Low; // 0x00(0x04)
	float High; // 0x04(0x04)
};

