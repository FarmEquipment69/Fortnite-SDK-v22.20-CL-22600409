// WidgetBlueprintGeneratedClass LetoBorder.LetoBorder_C
// Size: 0x320 (Inherited: 0x2e8)
struct ULetoBorder_C : UFortLetoLayoutBorder {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UBorder* BorderBottom; // 0x2f0(0x08)
	struct UBorder* BorderLeft; // 0x2f8(0x08)
	struct UBorder* BorderNameplate; // 0x300(0x08)
	struct UBorder* BorderRight; // 0x308(0x08)
	struct UBorder* BorderTop; // 0x310(0x08)
	struct USafeZone* ; // 0x318(0x08)

	void UpdateBorderWidth(float HalfBorderWidth); // Function LetoBorder.LetoBorder_C.UpdateBorderWidth // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LetoBorder(int32_t EntryPoint); // Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder // (Final|UbergraphFunction) // @ game+0xd67374
};

