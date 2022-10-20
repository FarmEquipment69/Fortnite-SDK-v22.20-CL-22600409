// BlueprintGeneratedClass QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C
// Size: 0x250 (Inherited: 0x231)
struct UQuartzMusicTrackComponent_SpicySake_C : UQuartzMusicTrackComponent_DataTracker_C {
	char pad_231[0x7]; // 0x231(0x07)
	double InterpFloat_Circling; // 0x238(0x08)
	double InterpFloat_Attacking; // 0x240(0x08)
	struct FGameplayTag EventTag_Circling; // 0x248(0x04)
	struct FGameplayTag EventTag_Attacking; // 0x24c(0x04)

	void HandleMixState(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.HandleMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	double UpdateInterpValue(double InterpValue, struct FGameplayTag& EventTag, double Attack Speed, double Release Speed); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.UpdateInterpValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

