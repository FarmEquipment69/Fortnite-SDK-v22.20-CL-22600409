// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// Size: 0x3c0 (Inherited: 0x300)
struct AWeakSpot_C : ABuildingWeakSpot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UStaticMeshComponent* ConnectTheDotsComponent; // 0x308(0x08)
	struct UParticleSystemComponent* ParticleComponent; // 0x310(0x08)
	struct UCapsuleComponent* CollisionComponent; // 0x318(0x08)
	float ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x320(0x04)
	enum class ETimelineDirection ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* ScaleDownParticleTL; // 0x328(0x08)
	struct USoundBase* SpawnSound; // 0x330(0x08)
	struct FVector Particle Location; // 0x338(0x18)
	struct TArray<struct USoundBase*> Crack sounds; // 0x350(0x10)
	double ConnectTheDotsWidth; // 0x360(0x08)
	double ConnectTheDotsDuration; // 0x368(0x08)
	double ConnectTheDotsTimeoutFromPreviousHit; // 0x370(0x08)
	double ConnectTheDotsDurationScale; // 0x378(0x08)
	double ConnectTheDotsMaxDuration; // 0x380(0x08)
	double ConnectTheDotsTileScale; // 0x388(0x08)
	double ConnectTheDotsMinLength; // 0x390(0x08)
	double ConnectTheDotsMaxLength; // 0x398(0x08)
	struct UParticleSystem* DamageTemplate; // 0x3a0(0x08)
	struct UParticleSystem* IdleTemplate; // 0x3a8(0x08)
	struct UMaterialInstanceDynamic* ConnectMID; // 0x3b0(0x08)
	struct FTimerHandle HideMeshTimer; // 0x3b8(0x08)

	void UserConstructionScript(); // Function WeakSpot.WeakSpot_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScaleDownParticleTL__FinishedFunc(); // Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ScaleDownParticleTL__UpdateFunc(); // Function WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnFadeOut(); // Function WeakSpot.WeakSpot_C.OnFadeOut // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnStartDirectionEffect(); // Function WeakSpot.WeakSpot_C.OnStartDirectionEffect // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnHit(); // Function WeakSpot.WeakSpot_C.OnHit // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HideMesh(); // Function WeakSpot.WeakSpot_C.HideMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WeakSpot(int32_t EntryPoint); // Function WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

