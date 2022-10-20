// BlueprintGeneratedClass AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
// Size: 0x98 (Inherited: 0x30)
struct UAnimNotifyState_AttachAsset_C : UAnimNotifyState {
	struct FAssetAttachment Attachment; // 0x30(0x30)
	struct UAnimSequence* Animation; // 0x60(0x08)
	bool Looping; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	double PlayRate; // 0x70(0x08)
	struct FGameplayTagContainer DoNotAttachTagContainer; // 0x78(0x20)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference); // Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

