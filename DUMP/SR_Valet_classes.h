// BlueprintGeneratedClass SR_Valet.SR_Valet_C
// Size: 0x440 (Inherited: 0x438)
struct USR_Valet_C : UStreamingRadioPlayerComponent_Valet {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)

	void ReceiveBeginPlay(); // Function SR_Valet.SR_Valet_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SR_Valet.SR_Valet_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void On Source Played(struct UStreamingRadioPlayerComponent* Component, struct FAthenaRadioStation AffectedSource); // Function SR_Valet.SR_Valet_C.On Source Played // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Source Stopped(struct UStreamingRadioPlayerComponent* Component, struct FAthenaRadioStation AffectedSource); // Function SR_Valet.SR_Valet_C.On Source Stopped // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SR_Valet(int32_t EntryPoint); // Function SR_Valet.SR_Valet_C.ExecuteUbergraph_SR_Valet // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

