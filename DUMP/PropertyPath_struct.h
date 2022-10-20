// ScriptStruct PropertyPath.CachedPropertyPath
// Size: 0x28 (Inherited: 0x00)
struct FCachedPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UFunction* CachedFunction; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size: 0x20 (Inherited: 0x00)
struct FPropertyPathSegment {
	struct FName Name; // 0x00(0x04)
	int32_t ArrayIndex; // 0x04(0x04)
	struct UStruct* Struct; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

