// Enum CraftingRuntime.ECraftingObjectState
enum class ECraftingObjectState : uint8 {
	Invalid = 0,
	Idle = 1,
	Crafting = 2,
	Ready = 3,
	OverCrafting = 4,
	Resetting = 5,
	TotalStates = 6,
	ECraftingObjectState_MAX = 7
};

// Enum CraftingRuntime.ECraftingIngredientReqError
enum class ECraftingIngredientReqError : uint8 {
	None = 0,
	NoItem = 1,
	NotEnough = 2,
	ECraftingIngredientReqError_MAX = 3
};

// ScriptStruct CraftingRuntime.CraftingObjectRepStateData
// Size: 0x08 (Inherited: 0x00)
struct FCraftingObjectRepStateData {
	enum class ECraftingObjectState CraftingObjectState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StateChangeServerTime; // 0x04(0x04)
};

// ScriptStruct CraftingRuntime.CraftingIngredientRequirement
// Size: 0x28 (Inherited: 0x00)
struct FCraftingIngredientRequirement {
	struct FGameplayTagContainer IngredientTags; // 0x00(0x20)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CraftingRuntime.CraftingUpgradeRule
// Size: 0x88 (Inherited: 0x00)
struct FCraftingUpgradeRule {
	struct FGameplayTagRequirements SourceItemTags; // 0x00(0x40)
	struct FGameplayTagRequirements TargetItemTags; // 0x40(0x40)
	char UpgradeFlags; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct CraftingRuntime.CraftingFormula
// Size: 0x80 (Inherited: 0x08)
struct FCraftingFormula : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	char bEnabled : 1; // 0x20(0x01)
	char bAlwaysKnownFormula : 1; // 0x20(0x01)
	char bInstantlyConsumeIngredients : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FGameplayTag SourceObjectTag; // 0x24(0x04)
	struct FGameplayTag CategoryTag; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FCraftingIngredientRequirement> RequiredIngredients; // 0x30(0x10)
	struct FName ResultLootTierKey; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TSoftClassPtr<UObject> WhileCraftingAbility; // 0x48(0x28)
	struct TArray<struct FCraftingUpgradeRule> UpgradeRules; // 0x70(0x10)
};

// ScriptStruct CraftingRuntime.CraftingResult
// Size: 0x18 (Inherited: 0x00)
struct FCraftingResult {
	struct FName ResultLootTierKey; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FItemAndCount> Results; // 0x08(0x10)
};

// ScriptStruct CraftingRuntime.CraftingIngredientUIData
// Size: 0x48 (Inherited: 0x08)
struct FCraftingIngredientUIData : FTableRowBase {
	struct FGameplayTagContainer IngredientTags; // 0x08(0x20)
	struct TArray<struct TSoftObjectPtr<UFortItemDefinition>> ItemDefs; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> Icons; // 0x38(0x10)
};

// ScriptStruct CraftingRuntime.CraftingIngredientQueryState
// Size: 0x30 (Inherited: 0x00)
struct FCraftingIngredientQueryState {
	struct FCraftingIngredientRequirement Requirement; // 0x00(0x28)
	int32_t Owned; // 0x28(0x04)
	int32_t Missing; // 0x2c(0x04)
};

// ScriptStruct CraftingRuntime.CraftingMessage
// Size: 0x08 (Inherited: 0x00)
struct FCraftingMessage {
	struct AActor* CraftingObject; // 0x00(0x08)
};

