// Enum SmartObjectsModule.ESmartObjectSlotState
enum class ESmartObjectSlotState : uint8 {
	Invalid = 0,
	Free = 1,
	Claimed = 2,
	Occupied = 3,
	Disabled = 4,
	ESmartObjectSlotState_MAX = 5
};

// Enum SmartObjectsModule.ESmartObjectCollectionRegistrationResult
enum class ESmartObjectCollectionRegistrationResult : uint8 {
	Failed_InvalidCollection = 0,
	Failed_AlreadyRegistered = 1,
	Failed_NotFromPersistentLevel = 2,
	Succeeded = 3,
	ESmartObjectCollectionRegistrationResult_MAX = 4
};

// Enum SmartObjectsModule.ESmartObjectUnregistrationMode
enum class ESmartObjectUnregistrationMode : uint8 {
	KeepRuntimeInstanceActive = 0,
	DestroyRuntimeInstance = 1,
	ESmartObjectUnregistrationMode_MAX = 2
};

// Enum SmartObjectsModule.ESmartObjectTagMergingPolicy
enum class ESmartObjectTagMergingPolicy : uint8 {
	Combine = 0,
	Override = 1,
	ESmartObjectTagMergingPolicy_MAX = 2
};

// Enum SmartObjectsModule.ESmartObjectTagFilteringPolicy
enum class ESmartObjectTagFilteringPolicy : uint8 {
	NoFilter = 0,
	Combine = 1,
	Override = 2,
	ESmartObjectTagFilteringPolicy_MAX = 3
};

// ScriptStruct SmartObjectsModule.SmartObjectClaimHandle
// Size: 0x10 (Inherited: 0x00)
struct FSmartObjectClaimHandle {
	struct FSmartObjectHandle SmartObjectHandle; // 0x00(0x04)
	struct FSmartObjectSlotHandle SlotHandle; // 0x04(0x08)
	struct FSmartObjectUserHandle UserHandle; // 0x0c(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectUserHandle
// Size: 0x04 (Inherited: 0x00)
struct FSmartObjectUserHandle {
	uint32_t ID; // 0x00(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotHandle
// Size: 0x08 (Inherited: 0x00)
struct FSmartObjectSlotHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectHandle
// Size: 0x04 (Inherited: 0x00)
struct FSmartObjectHandle {
	uint32_t ID; // 0x00(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectCollectionEntry
// Size: 0xe0 (Inherited: 0x00)
struct FSmartObjectCollectionEntry {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct FSoftObjectPath Path; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform Transform; // 0x40(0x60)
	struct FBox Bounds; // 0xa0(0x38)
	struct FSmartObjectHandle Handle; // 0xd8(0x04)
	uint32_t DefinitionIdx; // 0xdc(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectComponentInstanceData
// Size: 0x70 (Inherited: 0x68)
struct FSmartObjectComponentInstanceData : FActorComponentInstanceData {
	struct USmartObjectDefinition* DefinitionAsset; // 0x68(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinition
// Size: 0xb8 (Inherited: 0x00)
struct FSmartObjectSlotDefinition {
	struct FGameplayTagQuery UserTagFilter; // 0x00(0x48)
	struct FGameplayTagContainer ActivityTags; // 0x48(0x20)
	struct FVector Offset; // 0x68(0x18)
	struct FRotator Rotation; // 0x80(0x18)
	struct TArray<struct FInstancedStruct> Data; // 0x98(0x10)
	struct TArray<struct USmartObjectBehaviorDefinition*> BehaviorDefinitions; // 0xa8(0x10)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotIndex
// Size: 0x04 (Inherited: 0x00)
struct FSmartObjectSlotIndex {
	int32_t Index; // 0x00(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinitionFragment
// Size: 0x10 (Inherited: 0x01)
struct FSmartObjectSlotDefinitionFragment : FMassSharedFragment {
	struct USmartObjectDefinition* SmartObjectDefinition; // 0x00(0x08)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct SmartObjectsModule.SmartObjectSpatialEntryData
// Size: 0x01 (Inherited: 0x00)
struct FSmartObjectSpatialEntryData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct SmartObjectsModule.SmartObjectHashGridEntryData
// Size: 0x0c (Inherited: 0x01)
struct FSmartObjectHashGridEntryData : FSmartObjectSpatialEntryData {
	char pad_1[0xb]; // 0x01(0x0b)
};

// ScriptStruct SmartObjectsModule.SmartObjectOctreeEntryData
// Size: 0x10 (Inherited: 0x01)
struct FSmartObjectOctreeEntryData : FSmartObjectSpatialEntryData {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotStateData
// Size: 0x01 (Inherited: 0x01)
struct FSmartObjectSlotStateData : FMassFragment {
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotTransform
// Size: 0x60 (Inherited: 0x01)
struct FSmartObjectSlotTransform : FSmartObjectSlotStateData {
	struct FTransform Transform; // 0x00(0x60)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotClaimState
// Size: 0x20 (Inherited: 0x00)
struct FSmartObjectSlotClaimState {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SmartObjectsModule.SmartObjectRuntime
// Size: 0xd0 (Inherited: 0x00)
struct FSmartObjectRuntime {
	char pad_0[0x10]; // 0x00(0x10)
	struct USmartObjectDefinition* Definition; // 0x10(0x08)
	char pad_18[0xa0]; // 0x18(0xa0)
	struct FInstancedStruct SpatialEntryData; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotView
// Size: 0x20 (Inherited: 0x00)
struct FSmartObjectSlotView {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct SmartObjectsModule.SmartObjectRequestFilter
// Size: 0xc0 (Inherited: 0x00)
struct FSmartObjectRequestFilter {
	struct FGameplayTagContainer UserTags; // 0x00(0x20)
	struct FGameplayTagQuery ActivityRequirements; // 0x20(0x48)
	struct USmartObjectBehaviorDefinition* BehaviorDefinitionClass; // 0x68(0x08)
	struct TArray<struct USmartObjectBehaviorDefinition*> BehaviorDefinitionClasses; // 0x70(0x10)
	char pad_80[0x40]; // 0x80(0x40)
};

// ScriptStruct SmartObjectsModule.SmartObjectRequest
// Size: 0x100 (Inherited: 0x00)
struct FSmartObjectRequest {
	struct FBox QueryBox; // 0x00(0x38)
	char pad_38[0x8]; // 0x38(0x08)
	struct FSmartObjectRequestFilter Filter; // 0x40(0xc0)
};

// ScriptStruct SmartObjectsModule.SmartObjectRequestResult
// Size: 0x0c (Inherited: 0x00)
struct FSmartObjectRequestResult {
	struct FSmartObjectHandle SmartObjectHandle; // 0x00(0x04)
	struct FSmartObjectSlotHandle SlotHandle; // 0x04(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlotDefinitionData
// Size: 0x01 (Inherited: 0x00)
struct FSmartObjectSlotDefinitionData {
	char pad_0[0x1]; // 0x00(0x01)
};

