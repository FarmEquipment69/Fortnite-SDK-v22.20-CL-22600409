// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
// Size: 0xbe4 (Inherited: 0xbb8)
struct AB_Prj_Athena_FragGrenade_C : AB_Prj_Athena_Grenade_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbb8(0x08)
	struct UNiagaraComponent* NS_Object_FloatingInWater; // 0xbc0(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0xbc8(0x08)
	float PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD; // 0xbd0(0x04)
	enum class ETimelineDirection PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD; // 0xbd4(0x01)
	char pad_BD5[0x3]; // 0xbd5(0x03)
	struct UTimelineComponent* PreExploWarning; // 0xbd8(0x08)
	struct FGameplayTag FeedbackCue; // 0xbe0(0x04)

	void PreExploWarning__FinishedFunc(); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void PreExploWarning__UpdateFunc(); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void FuseEnded(); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Pre Explo Audio Tell(); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32_t EntryPoint); // Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

