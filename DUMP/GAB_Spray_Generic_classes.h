// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
// Size: 0xbe8 (Inherited: 0xb78)
struct UGAB_Spray_Generic_C : UGAB_Emote_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb78(0x08)
	double DecalSize; // 0xb80(0x08)
	struct UAthenaSprayItemDefinition* MySpray; // 0xb88(0x08)
	double DecalTraceDistance; // 0xb90(0x08)
	struct TSoftObjectPtr<UAnimMontage> DefaultSprayMontage_M; // 0xb98(0x28)
	struct TSoftObjectPtr<UAnimMontage> DefaultSprayMontage_F; // 0xbc0(0x28)

	struct TSoftObjectPtr<UAnimMontage> GetMontageToPlay(struct UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TargetLineTrace(struct AFortPawn* ActivatingPawn, bool& HitSomething, struct FVector& Location, struct FVector& Normal); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMontageStartedPlaying(); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_Spray_Generic(int32_t EntryPoint); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

