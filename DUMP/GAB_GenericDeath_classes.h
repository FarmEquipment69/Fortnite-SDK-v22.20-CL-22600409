// BlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// Size: 0xcf4 (Inherited: 0xb20)
struct UGAB_GenericDeath_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct UAnimMontage* DeathMontage; // 0xb28(0x08)
	struct FName DeathMontageSectionName; // 0xb30(0x04)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct FVector DeathHitDirection; // 0xb38(0x18)
	struct FHitResult DeathHitResult; // 0xb50(0xe0)
	struct FGameplayTagContainer DamageTags; // 0xc30(0x20)
	struct FGameplayTagContainer SpawnDroneTags; // 0xc50(0x20)
	struct UAnimMontage* Front; // 0xc70(0x08)
	struct UAnimMontage* Left; // 0xc78(0x08)
	struct UAnimMontage* Right; // 0xc80(0x08)
	struct UAnimMontage* Back; // 0xc88(0x08)
	struct UAnimMontage* Head_Front; // 0xc90(0x08)
	struct UAnimMontage* Head_Left; // 0xc98(0x08)
	struct UAnimMontage* Head_Right; // 0xca0(0x08)
	struct UAnimMontage* Head_Back; // 0xca8(0x08)
	int32_t FrontSectionNameCount; // 0xcb0(0x04)
	int32_t LeftSectionNameCount; // 0xcb4(0x04)
	int32_t RightSectionNameCount; // 0xcb8(0x04)
	int32_t BackSectionNameCount; // 0xcbc(0x04)
	int32_t Head_FrontSectionNameCount; // 0xcc0(0x04)
	int32_t Head_LeftSectionNameCount; // 0xcc4(0x04)
	int32_t Head_RightSectionNameCount; // 0xcc8(0x04)
	int32_t Head_BackSectionNameCount; // 0xccc(0x04)
	struct FName FrontMontageSectionPrefix; // 0xcd0(0x04)
	struct FName BackMontageSectionPrefix; // 0xcd4(0x04)
	struct FName LeftMontageSectionPrefix; // 0xcd8(0x04)
	struct FName RightMontageSectionPrefix; // 0xcdc(0x04)
	struct FName HeadFrontMontageSectionPrefix; // 0xce0(0x04)
	struct FName HeadBackMontageSectionPrefix; // 0xce4(0x04)
	struct FName HeadLeftMontageSectionPrefix; // 0xce8(0x04)
	struct FName HeadRightMontageSectionPrefix; // 0xcec(0x04)
	struct FGameplayTag TeleportOutCue; // 0xcf0(0x04)

	void GetRandomSectionName(int32_t MaxNumberOfSections, struct FName OriginalSectionName, struct FName& SectionName); // Function GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData); // Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4(); // Function GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PickDeathMontageSection(); // Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GAB_GenericDeath(int32_t EntryPoint); // Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

