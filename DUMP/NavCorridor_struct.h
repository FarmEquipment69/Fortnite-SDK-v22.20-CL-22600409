// ScriptStruct NavCorridor.NavCorridorParams
// Size: 0x18 (Inherited: 0x00)
struct FNavCorridorParams {
	float Width; // 0x00(0x04)
	float ObstacleTaperAngle; // 0x04(0x04)
	float SmallSectorThreshold; // 0x08(0x04)
	float LargeSectorThreshold; // 0x0c(0x04)
	float SimplifyEdgeThreshold; // 0x10(0x04)
	bool bSimplifyFlipPortals; // 0x14(0x01)
	bool bSimplifyConvexPortals; // 0x15(0x01)
	bool bSimplifyConcavePortals; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

