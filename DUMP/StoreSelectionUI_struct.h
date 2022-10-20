// Enum StoreSelectionUI.EOptionalLabel
enum class EOptionalLabel : uint8 {
	Label_DS = 0,
	Label_NM = 1,
	Max = 2
};

// ScriptStruct StoreSelectionUI.ItemData
// Size: 0x48 (Inherited: 0x00)
struct FItemData {
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x00(0x28)
	struct FText Name; // 0x28(0x18)
	char pad_40[0x8]; // 0x40(0x08)
};

