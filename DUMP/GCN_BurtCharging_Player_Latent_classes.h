// BlueprintGeneratedClass GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C
// Size: 0x558 (Inherited: 0x528)
struct AGCN_BurtCharging_Player_Latent_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct APlayerController* GCPlayerController; // 0x530(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0x538(0x08)
	struct USoundBase* BoostSound; // 0x540(0x08)
	struct UAudioComponent* BoostAudioComponent; // 0x548(0x08)
	struct USoundBase* BoostEndSound; // 0x550(0x08)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteBoostLogic(); // Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BoostEndEvent(); // Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_BurtCharging_Player_Latent(int32_t EntryPoint); // Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

