// BlueprintGeneratedClass GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C
// Size: 0xbc0 (Inherited: 0xb20)
struct UGA_Player_Irwin_Nug_Float_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FName FloatTask; // 0xb28(0x04)
	struct FGameplayTag FloatStart; // 0xb2c(0x04)
	struct FGameplayTag FloatEnd; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct AActor* NugRef; // 0xb38(0x08)
	struct AFortPlayerPawn* Owning Player Pawn; // 0xb40(0x08)
	struct FActiveGameplayEffectHandle GE_Handle_Quest; // 0xb48(0x08)
	struct UGameplayEffect* GE_Land_Tag_GCN; // 0xb50(0x08)
	struct UGameplayEffect* GE_PlayerGlide; // 0xb58(0x08)
	struct FActiveGameplayEffectHandle GE_Handle_Glide; // 0xb60(0x08)
	bool CanGlide; // 0xb68(0x01)
	char pad_B69[0x7]; // 0xb69(0x07)
	struct FScalableFloat Float_LaunchXY; // 0xb70(0x28)
	struct FScalableFloat Float_LaunchZ; // 0xb98(0x28)

	void Set Refs(); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.Set Refs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSync_AA9C58E84960A4F80E0BF99666A4FA98(); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.OnSync_AA9C58E84960A4F80E0BF99666A4FA98 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnChange_6109C9314D7ACBDCDB7F008F1748AF26(enum class EMovementMode NewMovementMode); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.OnChange_6109C9314D7ACBDCDB7F008F1748AF26 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Land(); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.On Land // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Player_Irwin_Nug_Float(int32_t EntryPoint); // Function GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.ExecuteUbergraph_GA_Player_Irwin_Nug_Float // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

