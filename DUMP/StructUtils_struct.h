// Enum StructUtils.EPropertyBagPropertyType
enum class EPropertyBagPropertyType : uint8 {
	None = 0,
	Bool = 1,
	Byte = 2,
	Int32 = 3,
	Int64 = 4,
	Float = 5,
	Double = 6,
	Name = 7,
	String = 8,
	Text = 9,
	Enum = 10,
	Struct = 11,
	Object = 12,
	SoftObject = 13,
	Class = 14,
	SoftClass = 15,
	EPropertyBagPropertyType_MAX = 16
};

// Enum StructUtils.EPropertyBagContainerType
enum class EPropertyBagContainerType : uint8 {
	None = 0,
	Array = 1,
	EPropertyBagContainerType_MAX = 2
};

// Enum StructUtils.EPropertyBagResult
enum class EPropertyBagResult : uint8 {
	Success = 0,
	TypeMismatch = 1,
	OutOfBounds = 2,
	PropertyNotFound = 3,
	EPropertyBagResult_MAX = 4
};

// Enum StructUtils.EPropertyBagMissingEnum
enum class EPropertyBagMissingEnum : uint8 {
	Missing = 0,
	EPropertyBagMissingEnum_MAX = 1
};

// Enum StructUtils.EStructUtilsResult
enum class EStructUtilsResult : uint8 {
	Valid = 0,
	NotValid = 1,
	EStructUtilsResult_MAX = 2
};

// ScriptStruct StructUtils.InstancedStruct
// Size: 0x10 (Inherited: 0x00)
struct FInstancedStruct {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.ChunkedStructBuffer
// Size: 0x20 (Inherited: 0x00)
struct FChunkedStructBuffer {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct StructUtils.InstancedStructArray
// Size: 0x10 (Inherited: 0x00)
struct FInstancedStructArray {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.InstancedStructStream
// Size: 0x20 (Inherited: 0x00)
struct FInstancedStructStream {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
// Size: 0x18 (Inherited: 0x00)
struct FPropertyBagPropertyDescMetaData {
	struct FName Key; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct StructUtils.PropertyBagPropertyDesc
// Size: 0x28 (Inherited: 0x00)
struct FPropertyBagPropertyDesc {
	struct UObject* ValueTypeObject; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct FName Name; // 0x18(0x04)
	enum class EPropertyBagPropertyType ValueType; // 0x1c(0x01)
	enum class EPropertyBagContainerType ContainerType; // 0x1d(0x01)
	char pad_1E[0xa]; // 0x1e(0x0a)
};

// ScriptStruct StructUtils.InstancedPropertyBag
// Size: 0x10 (Inherited: 0x00)
struct FInstancedPropertyBag {
	struct FInstancedStruct Value; // 0x00(0x10)
};

// ScriptStruct StructUtils.PropertyBagMissingStruct
// Size: 0x01 (Inherited: 0x00)
struct FPropertyBagMissingStruct {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct StructUtils.ConstSharedStruct
// Size: 0x10 (Inherited: 0x00)
struct FConstSharedStruct {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct StructUtils.SharedStruct
// Size: 0x10 (Inherited: 0x10)
struct FSharedStruct : FConstSharedStruct {
};

