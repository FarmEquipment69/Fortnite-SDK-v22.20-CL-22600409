// BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// Size: 0x49 (Inherited: 0x38)
struct UBP_AnimNotify_CameraShake_C : UAnimNotify {
	struct ULegacyCameraShake* Shake BP; // 0x38(0x08)
	double Shake Scale; // 0x40(0x08)
	enum class ECameraShakePlaySpace Shake Space; // 0x48(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference); // Function BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
};

