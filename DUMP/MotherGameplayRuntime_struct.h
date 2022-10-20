// ScriptStruct MotherGameplayRuntime.GoopAudioMapRangeClamped
// Size: 0x20 (Inherited: 0x00)
struct FGoopAudioMapRangeClamped {
	struct FVector2D InRange; // 0x00(0x10)
	struct FVector2D OutRange; // 0x10(0x10)
};

// ScriptStruct MotherGameplayRuntime.PaddleGingerPropData
// Size: 0x30 (Inherited: 0x00)
struct FPaddleGingerPropData {
	struct FText CategoryLabelText; // 0x00(0x18)
	int32_t PropIndex; // 0x18(0x04)
	int32_t MaxPropCount; // 0x1c(0x04)
	int32_t CategoryIndex; // 0x20(0x04)
	int32_t MaxCategoryCount; // 0x24(0x04)
	struct TWeakObjectPtr<struct APlayerState> Sender; // 0x28(0x08)
};

// ScriptStruct MotherGameplayRuntime.PaddleGingerPropActivatedData
// Size: 0x10 (Inherited: 0x00)
struct FPaddleGingerPropActivatedData {
	bool bActivated; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct APlayerState* Sender; // 0x08(0x08)
};

