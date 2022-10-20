// BlueprintGeneratedClass AnimNotify_Irwin_FootTurns.AnimNotify_Irwin_FootTurns_C
// Size: 0xdc (Inherited: 0xd5)
struct UAnimNotify_Irwin_FootTurns_C : UFN_NiagaraNotify_C {
	bool is Running ?; // 0xd5(0x01)
	bool Left Foot; // 0xd6(0x01)
	bool is Front Leg; // 0xd7(0x01)
	struct FGameplayTag Tag to Check; // 0xd8(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotify_Irwin_FootTurns.AnimNotify_Irwin_FootTurns_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

