// BlueprintGeneratedClass Frontend.Frontend_C
// Size: 0x2b8 (Inherited: 0x2a0)
struct AFrontend_C : AFortLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	bool NewLobby; // 0x2a8(0x01)
	bool ; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct AHBOnboardingFlow_C* HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x2b0(0x08)

	void PlaySpeech(struct FString Filename, int32_t SampleRate, struct USoundWave* AssetFile); // Function Frontend.Frontend_C.PlaySpeech // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMatchStarted(); // Function Frontend.Frontend_C.OnMatchStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EnableTutorial(); // Function Frontend.Frontend_C.EnableTutorial // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Frontend(int32_t EntryPoint); // Function Frontend.Frontend_C.ExecuteUbergraph_Frontend // (Final|UbergraphFunction) // @ game+0xd67374
};

