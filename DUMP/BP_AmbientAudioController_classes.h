// BlueprintGeneratedClass BP_AmbientAudioController.BP_AmbientAudioController_C
// Size: 0x1f8 (Inherited: 0xc8)
struct UBP_AmbientAudioController_C : UFortAmbientAudioController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	double CheckFrequency; // 0xd0(0x08)
	bool bInSnowCurrent; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UAmbientAudioDataAsset* WinterAudioBank; // 0xe0(0x08)
	bool bSnowEnabled; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UAmbientAudioDataAsset* StormAudioBank; // 0xf0(0x08)
	struct FGameplayTag AmbientAudioInsideTag; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UAmbientAudioDataAsset* CurieAudioBank; // 0x100(0x08)
	struct FVector SnowOriginWorldLoc; // 0x108(0x18)
	double SnowRadius; // 0x120(0x08)
	struct TArray<struct FGameplayTag> SnowTagsToApply; // 0x128(0x10)
	struct FName SnowEntryName; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	double IndoorInterpTime; // 0x140(0x08)
	double IndoorStateChangedTime; // 0x148(0x08)
	bool bIsIndoors; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	double IsPlayerIndoorsInterp; // 0x158(0x08)
	struct AActor* CurrViewTarget; // 0x160(0x08)
	struct TArray<struct FGameplayTag> GenericTagsToApply; // 0x168(0x10)
	bool bTagApplicationEnabled; // 0x178(0x01)
	enum class EInteriorAudioState Current State; // 0x179(0x01)
	char pad_17A[0x2]; // 0x17a(0x02)
	struct FGameplayTag Current Room Size Tag; // 0x17c(0x04)
	struct TMap<struct FGameplayTag, struct UReverbEffect*> Reverbs; // 0x180(0x50)
	struct UFortGameStateComponent_SurfaceOverride* SnowCoverageComponent; // 0x1d0(0x08)
	struct TArray<struct FString> SupportedTagLevels; // 0x1d8(0x10)
	double SpecialSurfacePadding; // 0x1e8(0x08)
	struct USoundMix* AmbientAudioSoundMix; // 0x1f0(0x08)

	void InitSnowCoverageComponent(struct AGameStateBase* Game State); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.InitSnowCoverageComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnViewTargetChanged(struct AActor* New Target, struct AActor* Prev Target); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnViewTargetChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CacheViewTarget(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.CacheViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemovePlayerTags(struct AActor* Player, struct TArray<struct FGameplayTag>& Array); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.RemovePlayerTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyPlayerTags(struct AActor* Player, struct TArray<struct FGameplayTag>& Tag Array); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ApplyPlayerTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSnowSetupBP(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.UpdateSnowSetupBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnReady_C8AC4F724844E04160BE56BEAB4A2614(struct AGameStateBase* GameState); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.OnReady_C8AC4F724844E04160BE56BEAB4A2614 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Update(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InteriorStateChanged(enum class EInteriorAudioState PreviousState, enum class EInteriorAudioState CurrentState); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.InteriorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void On Room Size Changed(struct FGameplayTag Curr, struct FGameplayTag Prev); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room Size Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Room State Changed(enum class EInteriorAudioState Curr, enum class EInteriorAudioState Prev); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.On Room State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Interior Audio Verb(); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.Update Interior Audio Verb // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_AmbientAudioController(int32_t EntryPoint); // Function BP_AmbientAudioController.BP_AmbientAudioController_C.ExecuteUbergraph_BP_AmbientAudioController // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

