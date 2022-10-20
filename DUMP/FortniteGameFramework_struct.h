// Enum FortniteGameFramework.ETaskObjectStateChangeType
enum class ETaskObjectStateChangeType : uint8 {
	None = 0,
	BeginState = 1,
	EndState = 2,
	ETaskObjectStateChangeType_MAX = 3
};

// ScriptStruct FortniteGameFramework.ComponentCacheHelper
// Size: 0x58 (Inherited: 0x00)
struct FComponentCacheHelper {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct FortniteGameFramework.ActorOwnedStateTreeConfig
// Size: 0x30 (Inherited: 0x00)
struct FActorOwnedStateTreeConfig {
	struct TSoftObjectPtr<UStateTree> StateTreeAsset; // 0x00(0x28)
	bool bShouldReplicate; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteGameFramework.StateTreeRuntimeData
// Size: 0x88 (Inherited: 0x00)
struct FStateTreeRuntimeData {
	struct FStateTreeExecutionContext StateTreeExecutionContext; // 0x00(0x78)
	char pad_78[0x10]; // 0x78(0x10)
};

// ScriptStruct FortniteGameFramework.StateChangeData
// Size: 0x28 (Inherited: 0x0c)
struct FStateChangeData : FFastArraySerializerItem {
	int32_t StateTreeDataHandle; // 0x0c(0x04)
	int32_t Handle; // 0x10(0x04)
	int32_t StateIdentifier; // 0x14(0x04)
	struct UStateTreeTaskObject* StateObject; // 0x18(0x08)
	enum class ETaskObjectStateChangeType StateChangeType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FortniteGameFramework.StateChangeDataArray
// Size: 0x120 (Inherited: 0x108)
struct FStateChangeDataArray : FFastArraySerializer {
	struct TArray<struct FStateChangeData> StateChangeDataList; // 0x108(0x10)
	struct UStateTreeManagerComponent* StateTreeManagerComponent; // 0x118(0x08)
};

// ScriptStruct FortniteGameFramework.StateTreeClientSimulationData
// Size: 0x28 (Inherited: 0x00)
struct FStateTreeClientSimulationData {
	char pad_0[0x28]; // 0x00(0x28)
};

