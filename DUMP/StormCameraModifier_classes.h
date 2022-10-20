// BlueprintGeneratedClass StormCameraModifier.StormCameraModifier_C
// Size: 0x90 (Inherited: 0x48)
struct UStormCameraModifier_C : UStormCameraModifier {
	char pad_48[0x8]; // 0x48(0x08)
	struct FVector4 Saturation; // 0x50(0x20)
	struct FVector4 Contrast; // 0x70(0x20)

	void BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, struct FPostProcessSettings& PostProcessSettings); // Function StormCameraModifier.StormCameraModifier_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

