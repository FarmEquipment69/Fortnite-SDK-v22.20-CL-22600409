// BlueprintGeneratedClass AudioParameterComponent.AudioParameterComponent_C
// Size: 0xb8 (Inherited: 0xa0)
struct UAudioParameterComponent_C : UActorComponent {
	struct TArray<struct FAudioParameter> Parameters; // 0xa0(0x10)
	struct UAudioParameterComponent_C* RootParameterComponent; // 0xb0(0x08)

	void UpdateRootParameterComponent(); // Function AudioParameterComponent.AudioParameterComponent_C.UpdateRootParameterComponent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetParameters(struct TArray<struct FAudioParameter>& Parameters); // Function AudioParameterComponent.AudioParameterComponent_C.GetParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetIntParameterInternal(struct FName Name, int32_t Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetIntParameterInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBoolParameterInternal(struct FName Name, bool Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetBoolParameterInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetFloatParameterInternal(struct FName Name, double Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetFloatParameterInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetRootParameterComponent(struct UAudioParameterComponent_C*& Component); // Function AudioParameterComponent.AudioParameterComponent_C.GetRootParameterComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void FindOrAddGetIndex(struct FName Name, int32_t& Index); // Function AudioParameterComponent.AudioParameterComponent_C.FindOrAddGetIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetIntParameter(struct FName Name, int32_t Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetIntParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBoolParameter(struct FName Name, bool Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetBoolParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetFloatParameter(struct FName Name, double Value); // Function AudioParameterComponent.AudioParameterComponent_C.SetFloatParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

