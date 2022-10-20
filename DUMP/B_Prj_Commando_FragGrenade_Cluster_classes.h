// BlueprintGeneratedClass B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
// Size: 0xa78 (Inherited: 0xa20)
struct AB_Prj_Commando_FragGrenade_Cluster_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0xa28(0x08)
	struct UAudioComponent* Audio1; // 0xa30(0x08)
	struct USoundBase* BounceSound; // 0xa38(0x08)
	struct UParticleSystem* P_Explosion; // 0xa40(0x08)
	struct USoundBase* ExplosionSound; // 0xa48(0x08)
	struct FVector ExplosionLocation; // 0xa50(0x18)
	double MinExplosionDelay; // 0xa68(0x08)
	double MaxExplosionDelay; // 0xa70(0x08)

	void OnStop(struct FHitResult& Hit); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32_t EntryPoint); // Function B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

