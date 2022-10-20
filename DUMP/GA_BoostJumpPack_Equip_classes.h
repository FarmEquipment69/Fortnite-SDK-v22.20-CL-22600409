// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
// Size: 0xb30 (Inherited: 0xb20)
struct UGA_BoostJumpPack_Equip_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xb28(0x08)

	struct UFortItem* GetGadgetItem(struct AFortPlayerPawn* Pawn); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void GetPlayerController(struct AFortPlayerPawn* Pawn, struct AFortPlayerControllerZone*& AsFort Player Controller Zone); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void IsAuthority(bool& bAuthority); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer& RelevantTags); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32_t EntryPoint); // Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip // (Final|UbergraphFunction) // @ game+0xd67374
};

