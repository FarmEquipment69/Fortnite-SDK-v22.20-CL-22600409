// Class EntityFortnite.EntityFortniteInterface
// Size: 0x28 (Inherited: 0x28)
struct UEntityFortniteInterface : UInterface {
};

// Class EntityFortnite.EntityFortnitePlayerComponent
// Size: 0xe8 (Inherited: 0xe8)
struct UEntityFortnitePlayerComponent : UEntityActorPlayerComponent {
};

// Class EntityFortnite.EntityFortniteStormControllerComponent
// Size: 0x70 (Inherited: 0x60)
struct UEntityFortniteStormControllerComponent : UEntityComponent {
	struct AEntityFortniteStormSpawner* StormSpawnerClass; // 0x60(0x08)
	struct AEntityFortniteStormSpawner* StormSpawner; // 0x68(0x08)
};

// Class EntityFortnite.EntityFortniteStormSpawner
// Size: 0x290 (Inherited: 0x288)
struct AEntityFortniteStormSpawner : AActor {
	struct USceneComponent* SceneComponent; // 0x288(0x08)

	void Stop(); // Function EntityFortnite.EntityFortniteStormSpawner.Stop // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Start(float StartRadius, float BoundsRadius, struct TArray<struct FEntityFortniteStormPhase>& Phases); // Function EntityFortnite.EntityFortniteStormSpawner.Start // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Pause(); // Function EntityFortnite.EntityFortniteStormSpawner.Pause // (Event|Public|BlueprintEvent) // @ game+0xd67374
	bool Exists(); // Function EntityFortnite.EntityFortniteStormSpawner.Exists // (Event|Public|BlueprintEvent|Const) // @ game+0xd67374
};

