// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// Size: 0x2ba (Inherited: 0x288)
struct AFort_Entry_Music_Controller_BP_C : AFortEntryMusicController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* SceneComponent; // 0x290(0x08)
	double FadeOutTime; // 0x298(0x08)
	struct USoundBase* CurrentMusic; // 0x2a0(0x08)
	bool Is Music Activate Override; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UAthenaMusicPackItemDefinition* MusicPackToPlayLater; // 0x2b0(0x08)
	bool bCanRetriggerNextMusicPack; // 0x2b8(0x01)
	bool bRegisteredForAnalysis; // 0x2b9(0x01)

	void Change Music(struct USoundBase* New Music, double StartTime, struct FGameplayTag Event Tag); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ListenToMusicPacks(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMusicPackChanged(struct UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Lobby Music Override(bool Lobby Music Activate, struct USoundBase* New Music); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayEquippedMusicPack(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartMusic(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

