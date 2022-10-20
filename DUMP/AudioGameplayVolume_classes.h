// Class AudioGameplayVolume.AudioGameplayVolumeMutator
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioGameplayVolumeMutator : UAudioGameplayComponent {
	int32_t Priority; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)

	void SetPriority(int32_t InPriority); // Function AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac5dc
};

// Class AudioGameplayVolume.AttenuationVolumeComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UAttenuationVolumeComponent : UAudioGameplayVolumeMutator {
	float ExteriorVolume; // 0xb0(0x04)
	float ExteriorTime; // 0xb4(0x04)
	float InteriorVolume; // 0xb8(0x04)
	float InteriorTime; // 0xbc(0x04)

	void SetInteriorVolume(float Volume, float InterpolateTime); // Function AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac508
	void SetExteriorVolume(float Volume, float InterpolateTime); // Function AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac434
};

// Class AudioGameplayVolume.AudioGameplayVolume
// Size: 0x2f0 (Inherited: 0x2c0)
struct AAudioGameplayVolume : AVolume {
	struct UAudioGameplayVolumeComponent* AGVComponent; // 0x2c0(0x08)
	bool bEnabled; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastInlineDelegate OnListenerEnterEvent; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnListenerExitEvent; // 0x2e0(0x10)

	void SetEnabled(bool bEnable); // Function AudioGameplayVolume.AudioGameplayVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac39c
	void OnRep_bEnabled(); // Function AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled // (Native|Protected) // @ game+0x6720044
	void OnListenerExit(); // Function AudioGameplayVolume.AudioGameplayVolume.OnListenerExit // (Native|Event|Public|BlueprintEvent) // @ game+0x1b960c0
	void OnListenerEnter(); // Function AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter // (Native|Event|Public|BlueprintEvent) // @ game+0x28a7774
};

// Class AudioGameplayVolume.AudioGameplayVolumeComponent
// Size: 0xd0 (Inherited: 0xa8)
struct UAudioGameplayVolumeComponent : UAudioGameplayComponent {
	struct FMulticastInlineDelegate OnProxyEnter; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnProxyExit; // 0xb8(0x10)
	struct UAudioGameplayVolumeProxy* Proxy; // 0xc8(0x08)
};

// Class AudioGameplayVolume.AudioGameplayVolumeComponentBase
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioGameplayVolumeComponentBase : UAudioGameplayComponent {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class AudioGameplayVolume.AudioGameplayVolumeProxy
// Size: 0x48 (Inherited: 0x28)
struct UAudioGameplayVolumeProxy : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class AudioGameplayVolume.AGVPrimitiveComponentProxy
// Size: 0x50 (Inherited: 0x48)
struct UAGVPrimitiveComponentProxy : UAudioGameplayVolumeProxy {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AudioGameplayVolume.AGVConditionProxy
// Size: 0x50 (Inherited: 0x48)
struct UAGVConditionProxy : UAudioGameplayVolumeProxy {
	char pad_48[0x8]; // 0x48(0x08)
};

// Class AudioGameplayVolume.AudioGameplayVolumeSubsystem
// Size: 0x158 (Inherited: 0x30)
struct UAudioGameplayVolumeSubsystem : UAudioEngineSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TMap<uint32_t, struct UAudioGameplayVolumeComponent*> AGVComponents; // 0x38(0x50)
	char pad_88[0xd0]; // 0x88(0xd0)
};

// Class AudioGameplayVolume.FilterVolumeComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UFilterVolumeComponent : UAudioGameplayVolumeMutator {
	float ExteriorLPF; // 0xb0(0x04)
	float ExteriorLPFTime; // 0xb4(0x04)
	float InteriorLPF; // 0xb8(0x04)
	float InteriorLPFTime; // 0xbc(0x04)

	void SetInteriorLPF(float Volume, float InterpolateTime); // Function AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac508
	void SetExteriorLPF(float Volume, float InterpolateTime); // Function AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF // (Final|Native|Public|BlueprintCallable) // @ game+0x6fac434
};

// Class AudioGameplayVolume.ReverbVolumeComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UReverbVolumeComponent : UAudioGameplayVolumeMutator {
	struct FReverbSettings ReverbSettings; // 0xb0(0x20)

	void SetReverbSettings(struct FReverbSettings& NewReverbSettings); // Function AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fac668
};

// Class AudioGameplayVolume.SubmixOverrideVolumeComponent
// Size: 0xc0 (Inherited: 0xb0)
struct USubmixOverrideVolumeComponent : UAudioGameplayVolumeMutator {
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0xb0(0x10)

	void SetSubmixOverrideSettings(struct TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // Function AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fac72c
};

// Class AudioGameplayVolume.SubmixSendVolumeComponent
// Size: 0xc0 (Inherited: 0xb0)
struct USubmixSendVolumeComponent : UAudioGameplayVolumeMutator {
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0xb0(0x10)

	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // Function AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6fac7d0
};

