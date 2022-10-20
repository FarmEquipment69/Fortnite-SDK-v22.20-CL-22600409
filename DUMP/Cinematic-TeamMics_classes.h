// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// Size: 0x560 (Inherited: 0x2e0)
struct UCinematic-TeamMics_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UMicIndicator_C* MicIndicator; // 0x2e8(0x08)
	struct UCommonWidgetSwitcherLegacy* SwitcherConnectingStranger; // 0x2f0(0x08)
	struct UCommonTextBlock* ; // 0x2f8(0x08)
	struct UCommonTextBlock* TextPlayerName; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct FFortTeamMemberInfo MemberInfo; // 0x310(0x250)

	void Update(struct FFortTeamMemberInfo UpdatedMemberInfo); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Cinematic-TeamMics(int32_t EntryPoint); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics // (Final|UbergraphFunction) // @ game+0xd67374
};

