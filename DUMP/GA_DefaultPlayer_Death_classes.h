// BlueprintGeneratedClass GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
// Size: 0xd08 (Inherited: 0xcf4)
struct UGA_DefaultPlayer_Death_C : UGAB_GenericDeath_C {
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcf8(0x08)
	struct FGameplayTag FadeCapsuleStWCue; // 0xd00(0x04)
	struct FGameplayTag FadeCapsuleAthenaCue; // 0xd04(0x04)

	void PickDeathMontageSection(); // Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_DefaultPlayer_Death(int32_t EntryPoint); // Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death // (Final|UbergraphFunction) // @ game+0xd67374
};

