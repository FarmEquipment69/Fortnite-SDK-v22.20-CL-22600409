// WidgetBlueprintGeneratedClass PageNavigator.PageNavigator_C
// Size: 0x500 (Inherited: 0x498)
struct UPageNavigator_C : UFortPageNavigator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Intro; // 0x4a0(0x08)
	struct USafeZone* ; // 0x4a8(0x08)
	struct FLinearColor Color1; // 0x4b0(0x10)
	struct FLinearColor Color2; // 0x4c0(0x10)
	struct FLinearColor Color3; // 0x4d0(0x10)
	struct FLinearColor Color4; // 0x4e0(0x10)
	struct FLinearColor Color5; // 0x4f0(0x10)

	void Play intro(); // Function PageNavigator.PageNavigator_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPipButtonCreated(struct UFortTextButton* NewPipButton); // Function PageNavigator.PageNavigator_C.OnPipButtonCreated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PageNavigator.PageNavigator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PageNavigator(int32_t EntryPoint); // Function PageNavigator.PageNavigator_C.ExecuteUbergraph_PageNavigator // (Final|UbergraphFunction) // @ game+0xd67374
};

