// WidgetBlueprintGeneratedClass TeamMicStack.TeamMicStack_C
// Size: 0x348 (Inherited: 0x320)
struct UTeamMicStack_C : UFortHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UVerticalBox* [Vertical Box] Team Members; // 0x328(0x08)
	struct UCommonBorder* BorderFrame; // 0x330(0x08)
	struct TArray<struct UCinematic-TeamMics_C*> TeamMembers; // 0x338(0x10)

	void ClearContents(); // Function TeamMicStack.TeamMicStack_C.ClearContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo); // Function TeamMicStack.TeamMicStack_C.AppendTeamMember // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTeamMemberChanged(struct FFortTeamMemberInfo Member Info); // Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTeamMemberRemoved(int32_t Member Index); // Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function TeamMicStack.TeamMicStack_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandlePartyLeft(); // Function TeamMicStack.TeamMicStack_C.HandlePartyLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMicStack(int32_t EntryPoint); // Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

