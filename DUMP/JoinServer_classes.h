// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// Size: 0x5d0 (Inherited: 0x5c0)
struct UJoinServer_C : UFortUIStateWidget_JoinServer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c0(0x08)
	struct UBuildWatermark_C* BuildWatermark; // 0x5c8(0x08)

	void OnEnterState(enum class EFortUIState PreviousUIState); // Function JoinServer.JoinServer_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnShowTutorialDialog(); // Function JoinServer.JoinServer_C.OnShowTutorialDialog // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_JoinServer(int32_t EntryPoint); // Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer // (Final|UbergraphFunction) // @ game+0xd67374
};

