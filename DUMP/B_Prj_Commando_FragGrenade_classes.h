// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// Size: 0xd14 (Inherited: 0xa20)
struct AB_Prj_Commando_FragGrenade_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa28(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0xa30(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa38(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0xa40(0x08)
	struct UParticleSystemComponent* Effect_Distance; // 0xa48(0x08)
	struct UParticleSystem* P_Explosion; // 0xa50(0x08)
	struct USoundBase* Cue_DistantSound; // 0xa58(0x08)
	struct USoundBase* Cue_CloseSound; // 0xa60(0x08)
	double ExplosionRadius; // 0xa68(0x08)
	int32_t NumberOfBouncesTillExplode; // 0xa70(0x04)
	int32_t CurrentNumberOfBounces; // 0xa74(0x04)
	struct USoundBase* Cue_GrenadeFuseSound; // 0xa78(0x08)
	double BouncePawnAgainstPawnGravityScale; // 0xa80(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xa88(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xa90(0x08)
	int32_t MaxClusterGrenades; // 0xa98(0x04)
	struct FGameplayTag EC_ClusterExplosion; // 0xa9c(0x04)
	bool bHasCluster; // 0xaa0(0x01)
	char pad_AA1[0x7]; // 0xaa1(0x07)
	struct AFortProjectileBase* Prj_Cluster; // 0xaa8(0x08)
	struct FFortGameplayEffectContainerSpec ClusterContainerSpec; // 0xab0(0xb8)
	bool bHasKeepOut; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	struct FFortGameplayEffectContainerSpec KeepOutContainerSpec; // 0xb70(0xb8)
	struct AFortAreaOfEffectCloud* AOE_KeepOut; // 0xc28(0x08)
	bool bHasClusterTactical; // 0xc30(0x01)
	char pad_C31[0x7]; // 0xc31(0x07)
	struct FFortGameplayEffectContainerSpec Cluster_Tactical_Container_Spec; // 0xc38(0xb8)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0xcf0(0x20)
	struct FGameplayTag T_Event_GrenadeExploded; // 0xd10(0x04)

	void SpawnKeepOut(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnClusters(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	double CalcGrenadeSpeed(double Angle); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnRep_StoredHit(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Stop_Rotation(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void On Destroy Grenade(struct AActor* DestroyedActor); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Bind Destroy Grenade(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Force On Exploded Effects(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Unbind Destroy Grenade(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TriggerDoExplsoion(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void CheckKeepOutAndCluster(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SendExplodedEvent(); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SendExplodedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32_t EntryPoint); // Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

