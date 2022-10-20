// BlueprintGeneratedClass BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
// Size: 0x2b0 (Inherited: 0x288)
struct ABP_VendAISpawner_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UNiagaraComponent* Niagara; // 0x290(0x08)
	double SpawnDelay; // 0x298(0x08)
	struct FDataTableRowHandle EventRowHandle; // 0x2a0(0x10)

	void ReceiveBeginPlay(); // Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_VendAISpawner_Base(int32_t EntryPoint); // Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

