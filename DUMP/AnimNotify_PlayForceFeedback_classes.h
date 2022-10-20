// BlueprintGeneratedClass AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
// Size: 0x60 (Inherited: 0x38)
struct UAnimNotify_PlayForceFeedback_C : UAnimNotify {
	struct UForceFeedbackEffect* ForceFeedbackTemplate; // 0x38(0x08)
	struct UForceFeedbackEffect* ForceFeedbackFarTemplate; // 0x40(0x08)
	bool bPlayAtWorldLocation; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	double InnerRadius; // 0x50(0x08)
	double OuterRadius; // 0x58(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

