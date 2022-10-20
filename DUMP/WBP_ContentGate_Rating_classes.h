// WidgetBlueprintGeneratedClass WBP_ContentGate_Rating.WBP_ContentGate_Rating_C
// Size: 0x338 (Inherited: 0x2b8)
struct UWBP_ContentGate_Rating_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonBorder* Border_Backing; // 0x2c0(0x08)
	struct UImage* EndSkew; // 0x2c8(0x08)
	struct UCommonTextBlock* RatingNumber; // 0x2d0(0x08)
	struct UCommonTextBlock* RatingText; // 0x2d8(0x08)
	struct UWBP_ContentGate_LockIcon_C* WBP_ContentGate_LockIcon; // 0x2e0(0x08)
	struct FLinearColor Text Color; // 0x2e8(0x10)
	bool Enable Backing; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FVector2D Lock Icon Size; // 0x300(0x10)
	struct FVector2D Lock Skew Size; // 0x310(0x10)
	bool Is Lock Skew Visible; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	int32_t Font Size; // 0x324(0x04)
	bool Is BG Skewed; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	double Padding Scale; // 0x330(0x08)

	void SetParentVisuals(struct FLinearColor TextColor, int32_t TextSize, struct FVector2D LockIconSize, struct FVector2D LockSkewSize, bool isLockSkewVisible, bool HasBacking, bool IsSkewed, double Padding Scale); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetParentVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDetails(bool isDetailsVisible, struct FText Rating Text); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetRatingNumber(struct FText Rating Number); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetRatingNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetLockStatus(bool IsLocked); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetLockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetIconVisibility(bool isIconVisible); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBacking(bool HasBacking, bool IsSkewed); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetBacking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetVisuals(bool IsVisible, bool IsLocked, bool isDetailsVisible, struct FText Rating Number, struct FText Rating Text); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WBP_ContentGate_Rating(int32_t EntryPoint); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.ExecuteUbergraph_WBP_ContentGate_Rating // (Final|UbergraphFunction) // @ game+0xd67374
};

