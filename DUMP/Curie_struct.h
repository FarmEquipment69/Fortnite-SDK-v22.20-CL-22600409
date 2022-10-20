// Enum Curie.ECurieHandlerBehavior
enum class ECurieHandlerBehavior : uint8 {
	Handler_Add = 0,
	Handler_Replace = 1,
	Handler_MAX = 2
};

// Enum Curie.ECurieHandlerPriority
enum class ECurieHandlerPriority : uint8 {
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	 = 6,
	 = 7,
	 = 8,
	 = 9,
	 = 10,
	Priority_Default = 11,
	Priority_MAX = 12
};

// Enum Curie.ECurieManagerComponentPriority
enum class ECurieManagerComponentPriority : uint8 {
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	 = 6,
	 = 7,
	 = 8,
	 = 9,
	 = 10,
	Priority_Default = 11,
	Priority_MAX = 12
};

// Enum Curie.ECurieEntityType
enum class ECurieEntityType : uint8 {
	Invalid = 0,
	Material = 1,
	Element = 2,
	ECurieEntityType_MAX = 3
};

// ScriptStruct Curie.CurieContainerHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieContainerHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieMaterialDefinitionBase
// Size: 0x88 (Inherited: 0x08)
struct FCurieMaterialDefinitionBase : FTableRowBase {
	struct FGameplayTagContainer ElementalImmunities; // 0x08(0x20)
	struct FGameplayTagContainer ElementAttachmentImmunities; // 0x28(0x20)
	struct FGameplayTagContainer ElementsAllowedWhenCannotBeDamaged; // 0x48(0x20)
	struct FGameplayTagContainer MaterialProperties; // 0x68(0x20)
};

// ScriptStruct Curie.CurieElementDefinitionBase
// Size: 0x80 (Inherited: 0x08)
struct FCurieElementDefinitionBase : FTableRowBase {
	struct UCurieElementAllocationHandler* ElementAllocationHandler; // 0x08(0x08)
	struct TArray<struct UCurieElementAttachHandler*> ElementAttachHandlers; // 0x10(0x10)
	struct UCurieElementAttachConditionHandler* ElementAttachConditionHandler; // 0x20(0x08)
	struct TArray<struct UCurieElementInteractWithElementHandler*> ElementInteractHandlers; // 0x28(0x10)
	struct TArray<struct UCurieElementInteractWithMaterialHandler*> ElementMaterialInteractHandlers; // 0x38(0x10)
	struct TArray<struct UCurieElementInteractWithContainerHandler*> ElementContainerInteractHandlers; // 0x48(0x10)
	struct FGameplayTagContainer ElementalImmunities; // 0x58(0x20)
	char bIsEnabled : 1; // 0x78(0x01)
	char pad_78_1 : 7; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Curie.CurieEntityStateDefinitionBase
// Size: 0x18 (Inherited: 0x08)
struct FCurieEntityStateDefinitionBase : FTableRowBase {
	struct UCurieEntityStateBehavior* StateBehaviorClass; // 0x08(0x08)
	char bIsEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Curie.CurieElementAttachHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementAttachHandlersContainer {
	struct TArray<struct UCurieElementAttachHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementAttachConditionHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementAttachConditionHandlersContainer {
	struct TArray<struct UCurieElementAttachConditionHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementInteractWithElementHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithElementHandlersContainer {
	struct TArray<struct UCurieElementInteractWithElementHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementInteractWithMaterialHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithMaterialHandlersContainer {
	struct TArray<struct UCurieElementInteractWithMaterialHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementInteractWithContainerHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithContainerHandlersContainer {
	struct TArray<struct UCurieElementInteractWithContainerHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieInteractParamsHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurieInteractParamsHandle {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementPairKey
// Size: 0x08 (Inherited: 0x00)
struct FCurieElementPairKey {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Curie.CurieManagerComponentEntry
// Size: 0x20 (Inherited: 0x08)
struct FCurieManagerComponentEntry : FTableRowBase {
	bool bIsActive; // 0x08(0x01)
	enum class ECurieManagerComponentPriority Priority; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurieManagerComponent* ManagerType; // 0x10(0x08)
	struct UCurieManagerComponentConfig* Config; // 0x18(0x08)
};

// ScriptStruct Curie.CurieInteractHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieInteractHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieEffectContainer
// Size: 0x50 (Inherited: 0x00)
struct FCurieEffectContainer {
	struct FGameplayTagQuery TargetFilter; // 0x00(0x48)
	struct UGameplayEffect* GameplayEffect; // 0x48(0x08)
};

// ScriptStruct Curie.CurieStateHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieStateHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieElementHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieElementHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

