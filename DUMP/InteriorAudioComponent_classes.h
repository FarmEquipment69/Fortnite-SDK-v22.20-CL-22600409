// BlueprintGeneratedClass InteriorAudioComponent.InteriorAudioComponent_C
// Size: 0xb0 (Inherited: 0xa0)
struct UInteriorAudioComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct AB_InteriorAudioManager_C* Manager; // 0xa8(0x08)

	void Update(struct FInteriorAudioScanResults& ScanResults); // Function InteriorAudioComponent.InteriorAudioComponent_C.Update // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function InteriorAudioComponent.InteriorAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function InteriorAudioComponent.InteriorAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_InteriorAudioComponent(int32_t EntryPoint); // Function InteriorAudioComponent.InteriorAudioComponent_C.ExecuteUbergraph_InteriorAudioComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

