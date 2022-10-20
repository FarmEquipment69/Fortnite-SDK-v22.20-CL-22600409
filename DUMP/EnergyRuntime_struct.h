// ScriptStruct EnergyRuntime.EnergyChannelingData
// Size: 0x18 (Inherited: 0x00)
struct FEnergyChannelingData {
	float EnergyPerSecond; // 0x00(0x04)
	struct FGameplayTag EnergyChannelingPurposeIdentifier; // 0x04(0x04)
	struct UObject* OptionalEnergyChannelingSource; // 0x08(0x08)
	bool bShouldStopApplyingNextTick; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct EnergyRuntime.EnergyRegenOverrideData
// Size: 0x10 (Inherited: 0x00)
struct FEnergyRegenOverrideData {
	struct FGameplayTag EnergyRegenIdentifier; // 0x00(0x04)
	float RechargeAmountPerSecond; // 0x04(0x04)
	float RechargeDelayInSeconds; // 0x08(0x04)
	float RechargePercentageLimit; // 0x0c(0x04)
};

