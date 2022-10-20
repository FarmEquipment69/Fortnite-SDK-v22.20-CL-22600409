// WidgetBlueprintGeneratedClass CrewContentContainer.CrewContentContainer_C
// Size: 0x4b0 (Inherited: 0x498)
struct UCrewContentContainer_C : UCrewSubscriptionContentContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x4a0(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x4a8(0x08)

	void OnTabSelected(int32_t TabIndex); // Function CrewContentContainer.CrewContentContainer_C.OnTabSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function CrewContentContainer.CrewContentContainer_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CrewContentContainer(int32_t EntryPoint); // Function CrewContentContainer.CrewContentContainer_C.ExecuteUbergraph_CrewContentContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

