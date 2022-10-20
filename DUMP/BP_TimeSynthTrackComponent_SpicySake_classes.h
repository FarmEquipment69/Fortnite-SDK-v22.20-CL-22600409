// BlueprintGeneratedClass BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C
// Size: 0x24c (Inherited: 0x228)
struct UBP_TimeSynthTrackComponent_SpicySake_C : UBP_TimeSynthTrackComponent_DataTracker_C {
	double InterpFloat_Circling; // 0x228(0x08)
	double InterpFloat_Attacking; // 0x230(0x08)
	struct FGameplayTag EventTag_Circling; // 0x238(0x04)
	struct FGameplayTag EventTag_Attacking; // 0x23c(0x04)
	int32_t CirclingID; // 0x240(0x04)
	int32_t AttackID; // 0x244(0x04)
	int32_t Attack_FacingID; // 0x248(0x04)

	void OnDataTrackerStart(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleMixState(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.HandleMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetRemainingEventCooldown(double& Cooldown); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.GetRemainingEventCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnDataTrackerUpdate(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

