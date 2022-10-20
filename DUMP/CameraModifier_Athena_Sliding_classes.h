// BlueprintGeneratedClass CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
// Size: 0x120 (Inherited: 0x48)
struct UCameraModifier_Athena_Sliding_C : UCameraModifier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x48(0x08)
	double RightOffset; // 0x50(0x08)
	double HeightOffset; // 0x58(0x08)
	double Interp Speed; // 0x60(0x08)
	double CameraOffsetBlendInSeconds; // 0x68(0x08)
	double CameraOffsetAlpha; // 0x70(0x08)
	bool BlendIn; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	double MinAdditionalFOV; // 0x80(0x08)
	double MaxAdditionalFOV; // 0x88(0x08)
	struct FScalableFloat MaxSlideSpeed; // 0x90(0x28)
	struct FScalableFloat MinSlideSpeed; // 0xb8(0x28)
	double CameraOffsetBlendOutSeconds; // 0xe0(0x08)
	double FovOffsetAlpha; // 0xe8(0x08)
	double FovOffsetBlendOutSeconds; // 0xf0(0x08)
	double FovOffsetBlendInSeconds; // 0xf8(0x08)
	double ForwardOffset; // 0x100(0x08)
	double TargetingAlpha; // 0x108(0x08)
	double TargetingBlendInSeconds; // 0x110(0x08)
	double TargetingBlendOutSeconds; // 0x118(0x08)

	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlueprintModifyCamera // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BlendOut(); // Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlendOut // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CameraModifier_Athena_Sliding(int32_t EntryPoint); // Function CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.ExecuteUbergraph_CameraModifier_Athena_Sliding // (Final|UbergraphFunction) // @ game+0xd67374
};

