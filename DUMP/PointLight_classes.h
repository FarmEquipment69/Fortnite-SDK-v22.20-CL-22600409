// Class PointLight.PointLightNativeComponent
// Size: 0x170 (Inherited: 0xa0)
struct UPointLightNativeComponent : UActorComponent {
	char pad_A0[0x90]; // 0xa0(0x90)
	struct UTimelineComponent* ShortCircuitTimelineComponent; // 0x130(0x08)
	char pad_138[0x18]; // 0x138(0x18)
	struct FLinearColor FlickerColor; // 0x150(0x10)
	float ShortCircuitMinDelay; // 0x160(0x04)
	float ShortCircuitMaxDelay; // 0x164(0x04)
	char pad_168[0x8]; // 0x168(0x08)

	void UpdateShortCircuit(); // Function PointLight.PointLightNativeComponent.UpdateShortCircuit // (Final|Native|Private) // @ game+0x67bc6e0
	void UpdateDeviceSettings(struct FPointLightRhythmParameters& RhythmParameters); // Function PointLight.PointLightNativeComponent.UpdateDeviceSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67bc630
	void StopShortCircuitUpdate(); // Function PointLight.PointLightNativeComponent.StopShortCircuitUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x67bc61c
	void StartShortCircuitUpdate(struct UTimelineComponent* ShortCircuitTimeline); // Function PointLight.PointLightNativeComponent.StartShortCircuitUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0x67bc348
	void StartRhythmUpdate(struct FTimerHandle& TimerHandle, float Rate); // Function PointLight.PointLightNativeComponent.StartRhythmUpdate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67bc274
};

