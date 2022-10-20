// Class AudioMotorSim.AudioMotorModelComponent
// Size: 0x100 (Inherited: 0xa0)
struct UAudioMotorModelComponent : UActorComponent {
	struct TArray<struct FMotorSimEntry> SimComponents; // 0xa0(0x10)
	struct TArray<struct TScriptInterface<IAudioMotorSimOutput>> AudioComponents; // 0xb0(0x10)
	char pad_C0[0x40]; // 0xc0(0x40)

	void Update(struct FAudioMotorSimInputContext Input); // Function AudioMotorSim.AudioMotorModelComponent.Update // (Native|Public|BlueprintCallable) // @ game+0x68b81bc
	void StopOutput(); // Function AudioMotorSim.AudioMotorModelComponent.StopOutput // (Native|Public|BlueprintCallable) // @ game+0x145216c
	void StartOutput(); // Function AudioMotorSim.AudioMotorModelComponent.StartOutput // (Native|Public|BlueprintCallable) // @ game+0x68b81a4
	void Reset(); // Function AudioMotorSim.AudioMotorModelComponent.Reset // (Native|Public|BlueprintCallable) // @ game+0x13743d0
	void RemoveMotorSimComponent(struct TScriptInterface<IAudioMotorSim> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorSimComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x68b8114
	void RemoveMotorAudioComponent(struct TScriptInterface<IAudioMotorSimOutput> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.RemoveMotorAudioComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x68b806c
	struct FAudioMotorSimRuntimeContext GetRuntimeInfo(); // Function AudioMotorSim.AudioMotorModelComponent.GetRuntimeInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b8048
	float GetRpm(); // Function AudioMotorSim.AudioMotorModelComponent.GetRpm // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b8030
	int32_t GetGear(); // Function AudioMotorSim.AudioMotorModelComponent.GetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28069d4
	struct FAudioMotorSimInputContext GetCachedInputData(); // Function AudioMotorSim.AudioMotorModelComponent.GetCachedInputData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b7ff0
	void AddMotorSimComponent(struct TScriptInterface<IAudioMotorSim> InComponent, int32_t SortOrder); // Function AudioMotorSim.AudioMotorModelComponent.AddMotorSimComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x68b7f1c
	void AddMotorAudioComponent(struct TScriptInterface<IAudioMotorSimOutput> InComponent); // Function AudioMotorSim.AudioMotorModelComponent.AddMotorAudioComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x68b7e60
};

// Class AudioMotorSim.AudioMotorSim
// Size: 0x28 (Inherited: 0x28)
struct UAudioMotorSim : UInterface {
};

// Class AudioMotorSim.AudioMotorSimComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UAudioMotorSimComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class AudioMotorSim.AudioMotorSimOutput
// Size: 0x28 (Inherited: 0x28)
struct UAudioMotorSimOutput : UInterface {
};

