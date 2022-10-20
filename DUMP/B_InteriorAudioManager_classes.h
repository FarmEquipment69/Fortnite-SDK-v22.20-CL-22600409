// BlueprintGeneratedClass B_InteriorAudioManager.B_InteriorAudioManager_C
// Size: 0x310 (Inherited: 0x288)
struct AB_InteriorAudioManager_C : AFortInteriorAudioManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UInteriorAudioComponent_Debug_C* InteriorAudioComponent_Debug; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	enum class EInteriorAudioState State; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FGameplayTag RoomSizeTag; // 0x2a4(0x04)
	struct UAmbientAudioDataAsset* AmbientBank; // 0x2a8(0x08)
	int32_t Sum; // 0x2b0(0x04)
	int32_t TotalBuildingCountRequiredForInterior; // 0x2b4(0x04)
	bool bInteriorSoundMixApplied; // 0x2b8(0x01)
	bool bPartialInteriorMixState; // 0x2b9(0x01)
	bool bPartialExteriorMixState; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct FInteriorAudioScanResults CurrentScanResults; // 0x2c0(0x38)
	bool bInsidePlayerBuilt; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct TArray<struct UInteriorAudioComponent_C*> RegisteredComponents; // 0x300(0x10)

	void OnComponentRemoved(struct UInteriorAudioComponent_C* Component); // Function B_InteriorAudioManager.B_InteriorAudioManager_C.OnComponentRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComponentAdded(struct UInteriorAudioComponent_C* Component); // Function B_InteriorAudioManager.B_InteriorAudioManager_C.OnComponentAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateAmbientAudio(struct FInteriorAudioScanResults& ScanResults); // Function B_InteriorAudioManager.B_InteriorAudioManager_C.UpdateAmbientAudio // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_InteriorAudioManager(int32_t EntryPoint); // Function B_InteriorAudioManager.B_InteriorAudioManager_C.ExecuteUbergraph_B_InteriorAudioManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

