// Class EntityCore.EntityComponent
// Size: 0x60 (Inherited: 0x28)
struct UEntityComponent : UObject {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class EntityCore.EntityDataBackedComponent
// Size: 0x68 (Inherited: 0x60)
struct UEntityDataBackedComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class EntityCore.EntityEnableableComponent
// Size: 0x80 (Inherited: 0x60)
struct UEntityEnableableComponent : UEntityComponent {
	char IsEnabled : 1; // 0x60(0x01)
	char LastIsEnabled : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x1f]; // 0x61(0x1f)

	void OnRep_Enabled(); // Function EntityCore.EntityEnableableComponent.OnRep_Enabled // (Final|Native|Private) // @ game+0x5c7c40c
};

// Class EntityCore.EntityPositionComponent
// Size: 0x68 (Inherited: 0x68)
struct UEntityPositionComponent : UEntityDataBackedComponent {
};

// Class EntityCore.EntityRotationComponent
// Size: 0x68 (Inherited: 0x68)
struct UEntityRotationComponent : UEntityDataBackedComponent {
};

// Class EntityCore.EntityScaleComponent
// Size: 0x68 (Inherited: 0x68)
struct UEntityScaleComponent : UEntityDataBackedComponent {
};

// Class EntityCore.Entity
// Size: 0x38 (Inherited: 0x28)
struct UEntity : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct ULevel* Level; // 0x30(0x08)
};

// Class EntityCore.EntityCoreSubsystem
// Size: 0x1a0 (Inherited: 0x30)
struct UEntityCoreSubsystem : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
	struct TMap<uint32_t, struct FEntityComponentContainer> ComponentMap; // 0x40(0x50)
	char pad_90[0x58]; // 0x90(0x58)
	struct TArray<struct UEntityComponent*> ComponentArray; // 0xe8(0x10)
	struct TMap<uint32_t, struct UEntity*> Entities; // 0xf8(0x50)
	char pad_148[0x58]; // 0x148(0x58)
};

// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
// Size: 0x68 (Inherited: 0x68)
struct UEntityCoreDataBackedRelativePositionComponent : UEntityDataBackedComponent {
};

// Class EntityCore.EntityTickableComponent
// Size: 0xb8 (Inherited: 0x80)
struct UEntityTickableComponent : UEntityEnableableComponent {
	char pad_80[0x38]; // 0x80(0x38)
};

// Class EntityCore.EntityScriptComponent
// Size: 0xb8 (Inherited: 0xb8)
struct UEntityScriptComponent : UEntityTickableComponent {
};

