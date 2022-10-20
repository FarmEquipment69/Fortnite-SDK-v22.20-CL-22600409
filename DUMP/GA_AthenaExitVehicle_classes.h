// BlueprintGeneratedClass GA_AthenaExitVehicle.GA_AthenaExitVehicle_C
// Size: 0xb50 (Inherited: 0xb20)
struct UGA_AthenaExitVehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag Keep DBNO players in Vehicles; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct FGameplayTagContainer Event Damage Died Tags; // 0xb30(0x20)

	void K2_ActivateAbility(); // Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_AthenaExitVehicle(int32_t EntryPoint); // Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.ExecuteUbergraph_GA_AthenaExitVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

