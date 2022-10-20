// BlueprintGeneratedClass GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C
// Size: 0xb58 (Inherited: 0xb20)
struct UGA_Ostrich_LoadSingleRocket_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UParticleSystem* P_BoostFin; // 0xb28(0x08)
	struct UParticleSystem* P_Boost_Aftermath_LeftLeg; // 0xb30(0x08)
	struct UParticleSystem* P_Boost_Aftermath_RightLeg; // 0xb38(0x08)
	struct UParticleSystem* P_Boost_Aftermath_LeftFoot; // 0xb40(0x08)
	struct UParticleSystem* P_Boost_Aftermath_RightFoot; // 0xb48(0x08)
	struct UParticleSystem* P_Boost_Eye; // 0xb50(0x08)

	void SpawnFX(struct AFortCharacterVehicle* Vehicle); // Function GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C.SpawnFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Ostrich_LoadSingleRocket(int32_t EntryPoint); // Function GA_Ostrich_LoadSingleRocket.GA_Ostrich_LoadSingleRocket_C.ExecuteUbergraph_GA_Ostrich_LoadSingleRocket // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

