// BlueprintGeneratedClass AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C
// Size: 0x34 (Inherited: 0x30)
struct UAnimNotifyState_TriggerAnimInputEvent_C : UAnimNotifyState {
	struct FName EventName; // 0x30(0x04)

	struct FString GetNotifyName(); // Function AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference); // Function AnimNotifyState_TriggerAnimInputEvent.AnimNotifyState_TriggerAnimInputEvent_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

