// BlueprintGeneratedClass NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C
// Size: 0x3ad8 (Inherited: 0x3ac8)
struct ANPC_Pawn_Irwin_Simple_Smackie_C : ANPC_Pawn_Wildlife_Simple_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3ac8(0x08)
	struct USoundBase* SmackieLandSound; // 0x3ad0(0x08)

	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SmackieLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.SmackieLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSmackieLanded(struct FHitResult HitResult); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.OnSmackieLanded // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Simple_Smackie.NPC_Pawn_Irwin_Simple_Smackie_C.ExecuteUbergraph_NPC_Pawn_Irwin_Simple_Smackie // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

