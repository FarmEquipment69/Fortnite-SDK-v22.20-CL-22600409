// WidgetBlueprintGeneratedClass WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C
// Size: 0x308 (Inherited: 0x2b8)
struct UWBP_ContentGate_LockIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* LockIcon; // 0x2c0(0x08)
	struct UImage* SkewImage; // 0x2c8(0x08)
	bool Is Background Visible; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FLinearColor Background Color; // 0x2d4(0x10)
	bool Is Skew Visible; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct FVector2D Icon Size; // 0x2e8(0x10)
	struct FVector2D SkewSize; // 0x2f8(0x10)

	void SetSize(struct FVector2D IconSize, struct FVector2D SkewSize); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetLockedBackground(bool isBackgroundVisible, struct FLinearColor BackgroundColor, bool isSkewVisible); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetLockedBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetLockedStatus(bool IsLocked); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetLockedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_ContentGate_LockIcon(int32_t EntryPoint); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.ExecuteUbergraph_WBP_ContentGate_LockIcon // (Final|UbergraphFunction) // @ game+0xd67374
};

