// Enum MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8 {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_3x3 = 2,
	PCF_5x5 = 3,
	EMobileShadowQuality_MAX = 4
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// Size: 0x08 (Inherited: 0x00)
struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x00(0x01)
	bool bEnableOverride; // 0x01(0x01)
	bool bForceFullyRough; // 0x02(0x01)
	bool bForceNonMetal; // 0x03(0x01)
	bool bForceDisableLMDirectionality; // 0x04(0x01)
	bool bForceDisablePreintegratedGF; // 0x05(0x01)
	bool bDisableMaterialNormalCalculation; // 0x06(0x01)
	enum class EMobileShadowQuality MobileShadowQuality; // 0x07(0x01)
};

