// WidgetBlueprintGeneratedClass TextToggle.TextToggle_C
// Size: 0x340 (Inherited: 0x2e0)
struct UTextToggle_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* ToggleOff; // 0x2e8(0x08)
	struct UWidgetAnimation* ToggleOn; // 0x2f0(0x08)
	struct UCommonTextBlock* CText_Off; // 0x2f8(0x08)
	struct UCommonTextBlock* CText_On; // 0x300(0x08)
	bool IsOn; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FText OffText; // 0x310(0x18)
	struct FText OnText; // 0x328(0x18)

	void Refresh(); // Function TextToggle.TextToggle_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwitchToggle(); // Function TextToggle.TextToggle_C.SwitchToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetToggleState(bool IsOn); // Function TextToggle.TextToggle_C.SetToggleState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TextToggle.TextToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function TextToggle.TextToggle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TextToggle(int32_t EntryPoint); // Function TextToggle.TextToggle_C.ExecuteUbergraph_TextToggle // (Final|UbergraphFunction) // @ game+0xd67374
};

