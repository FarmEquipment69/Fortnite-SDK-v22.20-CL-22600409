// Class ImagePlate.ImagePlate
// Size: 0x290 (Inherited: 0x288)
struct AImagePlate : AActor {
	struct UImagePlateComponent* ImagePlate; // 0x288(0x08)
};

// Class ImagePlate.ImagePlateComponent
// Size: 0x680 (Inherited: 0x530)
struct UImagePlateComponent : UPrimitiveComponent {
	struct FImagePlateParameters Plate; // 0x530(0x40)
	char pad_570[0x110]; // 0x570(0x110)

	void SetImagePlate(struct FImagePlateParameters Plate); // Function ImagePlate.ImagePlateComponent.SetImagePlate // (Final|Native|Public|BlueprintCallable) // @ game+0x6e46cf8
	void OnRenderTextureChanged(); // Function ImagePlate.ImagePlateComponent.OnRenderTextureChanged // (Final|Native|Public) // @ game+0x6e46ce4
	struct FImagePlateParameters GetPlate(); // Function ImagePlate.ImagePlateComponent.GetPlate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6e46ca4
};

// Class ImagePlate.ImagePlateSettings
// Size: 0x38 (Inherited: 0x28)
struct UImagePlateSettings : UObject {
	struct FString ProxyName; // 0x28(0x10)
};

// Class ImagePlate.ImagePlateFileSequence
// Size: 0x50 (Inherited: 0x28)
struct UImagePlateFileSequence : UObject {
	struct FDirectoryPath SequencePath; // 0x28(0x10)
	struct FString FileWildcard; // 0x38(0x10)
	float FrameRate; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class ImagePlate.ImagePlateFrustumComponent
// Size: 0x530 (Inherited: 0x530)
struct UImagePlateFrustumComponent : UPrimitiveComponent {
};

