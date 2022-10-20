// BlueprintGeneratedClass Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
// Size: 0xd0 (Inherited: 0xa0)
struct UValet_GasPumpIndicatorManagerV2_C : UFortGameStateComponent {
	struct AActor* FuelIndicatorClass; // 0xa0(0x08)
	struct TArray<struct UB_GasPump_Valet_Component_C*> GasPumpList; // 0xa8(0x10)
	struct TArray<struct AFuelIndicator_C*> FuelIndicatorList; // 0xb8(0x10)
	double FuelIndicatorRangeSquared; // 0xc8(0x08)

	void RemoveGasPump(struct UB_GasPump_Valet_Component_C* Gas Pump); // Function Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.RemoveGasPump // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddGasPump(struct UB_GasPump_Valet_Component_C* Gas Pump); // Function Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.AddGasPump // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

