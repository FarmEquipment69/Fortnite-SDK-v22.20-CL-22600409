// ScriptStruct LiveEditObject.LiveEditObjectTestStruct
// Size: 0x148 (Inherited: 0x00)
struct FLiveEditObjectTestStruct {
	bool bool; // 0x00(0x01)
	int8_t Int8; // 0x01(0x01)
	int16_t Int16; // 0x02(0x02)
	int32_t int32; // 0x04(0x04)
	int64_t Int64; // 0x08(0x08)
	float float; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	double Double; // 0x18(0x08)
	struct FString String; // 0x20(0x10)
	struct FText Text; // 0x30(0x18)
	struct FName Name; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UObject* RawObjectPtr; // 0x50(0x08)
	struct UObject* ObjectPtr; // 0x58(0x08)
	struct FSoftObjectPath SoftObjectPath; // 0x60(0x18)
	struct FVector2D Struct; // 0x78(0x10)
	int32_t FixedArray[0x4]; // 0x88(0x10)
	struct TArray<int32_t> DynamicArray; // 0x98(0x10)
	struct TSet<int32_t> Set; // 0xa8(0x50)
	struct TMap<int32_t, int32_t> Map; // 0xf8(0x50)
};

