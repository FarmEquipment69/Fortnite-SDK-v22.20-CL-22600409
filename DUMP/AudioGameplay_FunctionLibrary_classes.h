// BlueprintGeneratedClass AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UAudioGameplay_FunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetAudioForPlayerEvent(struct AActor* Target, struct USoundBase* 1P Sound, struct USoundBase* 3P Sound, struct UObject* __WorldContext, struct USoundBase*& AudioAsset); // Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.GetAudioForPlayerEvent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	bool IsActorLocal(struct AActor* Actor, struct UObject* __WorldContext); // Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.IsActorLocal // (Static|Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetAudioForDamageEvent(struct AActor* Receiver, struct AActor* Instigator, struct USoundBase* ReceiverSound, struct USoundBase* InstigatorSound, struct USoundBase* ObserverSound, struct UObject* __WorldContext, struct USoundBase*& AudioAsset); // Function AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C.GetAudioForDamageEvent // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
};

