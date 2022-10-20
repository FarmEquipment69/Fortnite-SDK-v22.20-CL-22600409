// WidgetBlueprintGeneratedClass AthenaWatcherEye.AthenaWatcherEye_C
// Size: 0x300 (Inherited: 0x2b8)
struct UAthenaWatcherEye_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetAnimation* Mad; // 0x2c0(0x08)
	struct UWidgetAnimation* Blink_New; // 0x2c8(0x08)
	struct UWidgetAnimation* Surprise; // 0x2d0(0x08)
	struct UWidgetAnimation* Blink; // 0x2d8(0x08)
	struct UWidgetAnimation* LookAround; // 0x2e0(0x08)
	struct UWidgetAnimation* Open; // 0x2e8(0x08)
	struct UImage* I_Watcher; // 0x2f0(0x08)
	struct FTimerHandle WatcherFinishedTransitionTimer; // 0x2f8(0x08)

	void SpectatorAdded_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Hide_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Show_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void End_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpectatorRemoved_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Begin_Watcher(bool ManySpectatorsJoining); // Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ManySpectatorsAdded_Watcher(); // Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaWatcherEye(int32_t EntryPoint); // Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

