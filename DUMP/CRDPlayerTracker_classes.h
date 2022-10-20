// Class CRDPlayerTracker.CRDPlayerTrackerComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UCRDPlayerTrackerComponent : UActorComponent {
};

// Class CRDPlayerTracker.CRDPlayerTrackerMarker
// Size: 0x298 (Inherited: 0x288)
struct ACRDPlayerTrackerMarker : AActor {
	struct UUserWidget* WidgetClass; // 0x288(0x08)
	struct UActorComponent* PlayerTrackerUIActorComponent; // 0x290(0x08)

	bool DestroyPlayerTrackerWidget(struct AFortPlayerControllerGameplay* InFortPlayerControllerGameplay); // Function CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x67bb130
	struct UUserWidget* CreatePlayerTrackerWidget(struct AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, struct AFortPlayerStateAthena* AssociatedPSA); // Function CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x67baf60
};

