// BlueprintGeneratedClass AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C
// Size: 0x3e (Inherited: 0x38)
struct UAnimNotify_Irwin_Footfalls_C : UAnimNotify {
	int32_t FootfallsIndex; // 0x38(0x04)
	bool is Running ?; // 0x3c(0x01)
	bool is Sprinting ?; // 0x3d(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotify_Irwin_Footfalls.AnimNotify_Irwin_Footfalls_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

