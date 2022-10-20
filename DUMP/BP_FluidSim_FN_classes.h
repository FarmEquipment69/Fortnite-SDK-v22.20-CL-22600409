// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
// Size: 0x728 (Inherited: 0x568)
struct ABP_FluidSim_FN_C : ABP_FluidSim_01_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct FFluidForceDynamic BoatForceSettings; // 0x570(0x70)
	struct FFluidForceDynamic PlayerForceSettings; // 0x5e0(0x70)
	struct FFluidForceDynamic MechForceSettings; // 0x650(0x70)
	struct TArray<struct AFortPawn*> RelevantFortPawns; // 0x6c0(0x10)
	bool Use FN Pawn Forces; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct TMap<struct FGameplayTag, struct FFluidForceDynamic> VehicleTypeMap; // 0x6d8(0x50)

	void GetFortnitePawnForces(); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetLocalPawn(struct APawn*& Pawn); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetPlayerPawnForces(); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_FluidSim_FN(int32_t EntryPoint); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN // (Final|UbergraphFunction) // @ game+0xd67374
};

