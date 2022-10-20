// ScriptStruct KnockbackRuntime.KnockbackMutatorData
// Size: 0x20 (Inherited: 0x0c)
struct FKnockbackMutatorData : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct APawn* Pawn; // 0x10(0x08)
	float KnockbackMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct KnockbackRuntime.KnockbackMutatorDataArray
// Size: 0x120 (Inherited: 0x108)
struct FKnockbackMutatorDataArray : FFastArraySerializer {
	struct TArray<struct FKnockbackMutatorData> Entries; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

