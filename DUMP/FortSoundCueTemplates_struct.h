// ScriptStruct FortSoundCueTemplates.FortContinuousModulatorConfig
// Size: 0x28 (Inherited: 0x00)
struct FFortContinuousModulatorConfig {
	struct FVector2D VolumeRange; // 0x00(0x10)
	struct FVector2D PitchRange; // 0x10(0x10)
	enum class ModulationParamMode VolumeMode; // 0x20(0x01)
	enum class ModulationParamMode PitchMode; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FortSoundCueTemplates.FortSubmixPair
// Size: 0x10 (Inherited: 0x00)
struct FFortSubmixPair {
	struct USoundSubmixBase* Submix; // 0x00(0x08)
	float SendAmount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortSoundCueTemplates.GliderThrustData
// Size: 0x58 (Inherited: 0x00)
struct FGliderThrustData {
	struct FName ParameterName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D PitchOutput; // 0x08(0x10)
	struct FVector2D VolumeOutput; // 0x18(0x10)
	struct USoundWave* sound; // 0x28(0x08)
	struct FFortContinuousModulatorConfig Settings; // 0x30(0x28)
};

// ScriptStruct FortSoundCueTemplates.PhysicsStateData
// Size: 0x90 (Inherited: 0x00)
struct FPhysicsStateData {
	struct FName ParameterName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D VolumeOutput; // 0x08(0x10)
	struct FVector2D PitchOutput; // 0x18(0x10)
	struct FFortContinuousModulatorConfig Settings; // 0x28(0x28)
	struct FDistanceDatum CrossfadeInputSlow; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct USoundWave* SlowLoop; // 0x68(0x08)
	struct FDistanceDatum CrossfadeInputFast; // 0x70(0x14)
	char pad_84[0x4]; // 0x84(0x04)
	struct USoundWave* FastLoop; // 0x88(0x08)
};

// ScriptStruct FortSoundCueTemplates.PhysicsImpactData
// Size: 0x58 (Inherited: 0x00)
struct FPhysicsImpactData {
	struct FVector2D VolumeOutput; // 0x00(0x10)
	struct FVector2D PitchOutput; // 0x10(0x10)
	struct FFortContinuousModulatorConfig Settings; // 0x20(0x28)
	struct TArray<struct USoundWave*> Variations; // 0x48(0x10)
};

