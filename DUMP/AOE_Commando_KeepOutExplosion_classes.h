// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// Size: 0xa50 (Inherited: 0x668)
struct AAOE_Commando_KeepOutExplosion_C : AFortAreaOfEffectCloud {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x668(0x08)
	struct UAudioComponent* AOE_Audio_Effect; // 0x670(0x08)
	struct UParticleSystemComponent* P_Grenade_Linger; // 0x678(0x08)
	struct USphereComponent* DamageArea; // 0x680(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x688(0x08)
	double Radius; // 0x690(0x08)
	struct FSoundAttenuationSettings AOE_Sound_Attenuation_Based_On_Radius; // 0x698(0x3b8)

	void OnRep_Radius(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Send_Info(double Radius); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32_t EntryPoint); // Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion // (Final|UbergraphFunction) // @ game+0xd67374
};

