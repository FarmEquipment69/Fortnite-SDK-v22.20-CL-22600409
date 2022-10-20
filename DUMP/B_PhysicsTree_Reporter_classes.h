// BlueprintGeneratedClass B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C
// Size: 0x2a8 (Inherited: 0x288)
struct AB_PhysicsTree_Reporter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct TArray<struct FPhysicsLogAnalyticsStruct> PhysicsLogData; // 0x298(0x10)

	void WrapString(struct FString Prepend, struct FString String, struct FString Append, struct FString& Result); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.WrapString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ReportTreeAnalytics(); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportTreeAnalytics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetLogDataByInstanceName(struct FString InstanceName, struct FPhysicsLogAnalyticsStruct& Data, int32_t& Index, bool& Success); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.GetLogDataByInstanceName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ReportDamageInflicted(struct FString InstanceName, enum class PhysicsLogAnalytics_DamageCategory DamageCategory, double Amount); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportDamageInflicted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReportLogDestroyed(struct FString Instance Name, struct FVector Location); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReportLogFelled(struct FString Instance Name, struct FString Felled By, struct FVector Location); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReportLogFelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_FFF47C8E40A1C412A19C8B8828BD5787(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.OnReady_FFF47C8E40A1C412A19C8B8828BD5787 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EndMatchReport(); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.EndMatchReport // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PhaseChanged(enum class EAthenaGamePhase GamePhase); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.PhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_PhysicsTree_Reporter(int32_t EntryPoint); // Function B_PhysicsTree_Reporter.B_PhysicsTree_Reporter_C.ExecuteUbergraph_B_PhysicsTree_Reporter // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

