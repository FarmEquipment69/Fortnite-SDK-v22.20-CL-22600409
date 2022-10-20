// Enum EntityCore.EMovementType
enum class EMovementType : uint8 {
	SweepPhysics = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	EMovementType_MAX = 3
};

// ScriptStruct EntityCore.EntityComponentContainer
// Size: 0x10 (Inherited: 0x00)
struct FEntityComponentContainer {
	struct TArray<struct UEntityComponent*> Array; // 0x00(0x10)
};

// ScriptStruct EntityCore.ComponentData
// Size: 0x01 (Inherited: 0x00)
struct FComponentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EntityCore.EntityPositionComponentData
// Size: 0x18 (Inherited: 0x01)
struct FEntityPositionComponentData : FComponentData {
	struct FVector WorldPosition; // 0x00(0x18)
};

// ScriptStruct EntityCore.EntityRotationComponentData
// Size: 0x18 (Inherited: 0x01)
struct FEntityRotationComponentData : FComponentData {
	struct FRotator WorldRotation; // 0x00(0x18)
};

// ScriptStruct EntityCore.EntityScaleComponentData
// Size: 0x18 (Inherited: 0x01)
struct FEntityScaleComponentData : FComponentData {
	struct FVector WorldScale3D; // 0x00(0x18)
};

// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
// Size: 0x20 (Inherited: 0x01)
struct FEntityCoreSystemRelativePositionComponentData : FComponentData {
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct EntityCore.EntityTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEntityTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

