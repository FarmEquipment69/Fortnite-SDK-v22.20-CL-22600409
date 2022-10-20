// Class NevadaUI.FortNevadaVehicleReticle
// Size: 0x530 (Inherited: 0x488)
struct UFortNevadaVehicleReticle : UFortAthenaVehicleDashboardWidget {
	struct UNevadaTargetIndicator* NevadaTargetIndicatorClass; // 0x488(0x08)
	struct UNevadaTargetIndicator* TargetIndicator; // 0x490(0x08)
	struct AFortNevadaVehicle* OwningNevadaVehicle; // 0x498(0x08)
	char pad_4A0[0x8]; // 0x4a0(0x08)
	struct FUserWidgetPool IndicatorPool; // 0x4a8(0x88)

	void OnVehicleStateChanged(enum class ENevadaFlightStates VehicleState); // Function NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamEnabledChanged(bool bEnabled); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamDetached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamDeactivated(float Cooldown); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamChargeStarted(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamAttached(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamActivated(); // Function NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEnergyCanonFired(float Cooldown); // Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEnergyCannonEnabledChanged(bool bEnabled); // Function NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBatteryChanged(float BatteryLevel); // Function NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class NevadaUI.NevadaTargetIndicator
// Size: 0x3c0 (Inherited: 0x3c0)
struct UNevadaTargetIndicator : UFortActorIndicatorWidget {

	void OnTractorBeamAttached(bool bAttached); // Function NevadaUI.NevadaTargetIndicator.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTractorBeamActivated(bool bActivated); // Function NevadaUI.NevadaTargetIndicator.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

