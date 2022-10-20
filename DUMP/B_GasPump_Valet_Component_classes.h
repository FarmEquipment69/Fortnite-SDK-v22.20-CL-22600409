// BlueprintGeneratedClass B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
// Size: 0xc0 (Inherited: 0xa0)
struct UB_GasPump_Valet_Component_C : UGameFrameworkComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FName Gas Pump Icon Enabled; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UFortGameStateComponent* Gas Pump IndicatorManager Class; // 0xb0(0x08)
	struct UValet_GasPumpIndicatorManagerV2_C* Gas Pump IndicatorManager; // 0xb8(0x08)

	void ReceiveBeginPlay(); // Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_GasPump_Valet_Component(int32_t EntryPoint); // Function B_GasPump_Valet_Component.B_GasPump_Valet_Component_C.ExecuteUbergraph_B_GasPump_Valet_Component // (Final|UbergraphFunction) // @ game+0xd67374
};

