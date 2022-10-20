// ScriptStruct RealitySeedGameplayRuntime.OwnedRealitySaplingData
// Size: 0x50 (Inherited: 0x00)
struct FOwnedRealitySaplingData {
	struct ABuildingRealitySapling* Sapling; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	bool bHasSaplingOnAuthority; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct TArray<char> FruitStates; // 0x30(0x10)
	char NurturingLevel; // 0x40(0x01)
	bool bNeedsWeeding; // 0x41(0x01)
	bool bInGhostState; // 0x42(0x01)
	bool bEnemyAttacking; // 0x43(0x01)
	bool bEnemyLooting; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FDateTime NextWeedingTime; // 0x48(0x08)
};

// ScriptStruct RealitySeedGameplayRuntime.RealitySaplingEnvQueryParam
// Size: 0x38 (Inherited: 0x00)
struct FRealitySaplingEnvQueryParam {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FScalableFloat Value; // 0x08(0x28)
	enum class EAIParamType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct RealitySeedGameplayRuntime.RealitySaplingPersistentData
// Size: 0x60 (Inherited: 0x00)
struct FRealitySaplingPersistentData {
	struct AFortPlayerController* OwningPlayerController; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	struct FRotator Rotation; // 0x20(0x18)
	int32_t NurturingLevel; // 0x38(0x04)
	int32_t MaturityLevel; // 0x3c(0x04)
	struct FDateTime PlantingTime; // 0x40(0x08)
	struct FDateTime LastWeedingTime; // 0x48(0x08)
	struct TArray<int32_t> FruitStates; // 0x50(0x10)
};

