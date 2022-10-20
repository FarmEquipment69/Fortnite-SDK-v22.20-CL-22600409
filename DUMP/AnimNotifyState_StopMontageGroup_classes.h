// BlueprintGeneratedClass AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_StopMontageGroup_C : UAnimNotifyState {
	struct FName GroupNameToStop; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	double BlendOutTime; // 0x38(0x08)

	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference); // Function AnimNotifyState_StopMontageGroup.AnimNotifyState_StopMontageGroup_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

