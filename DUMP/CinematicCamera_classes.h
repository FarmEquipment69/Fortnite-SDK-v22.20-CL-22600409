// Class CinematicCamera.CineCameraActor
// Size: 0xa00 (Inherited: 0x980)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x980(0x68)
	char pad_9E8[0x18]; // 0x9e8(0x18)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a076c
};

// Class CinematicCamera.CineCameraComponent
// Size: 0xb30 (Inherited: 0xa20)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0xa20(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0xa2c(0x0c)
	struct FCameraLensSettings LensSettings; // 0xa38(0x18)
	struct FCameraFocusSettings FocusSettings; // 0xa50(0x60)
	float CurrentFocalLength; // 0xab0(0x04)
	float CurrentAperture; // 0xab4(0x04)
	float CurrentFocusDistance; // 0xab8(0x04)
	char bOverride_CustomNearClippingPlane : 1; // 0xabc(0x01)
	char pad_ABC_1 : 7; // 0xabc(0x01)
	char pad_ABD[0x3]; // 0xabd(0x03)
	float CustomNearClippingPlane; // 0xac0(0x04)
	char pad_AC4[0xc]; // 0xac4(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0xad0(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0xae0(0x10)
	struct FString DefaultFilmbackPresetName; // 0xaf0(0x10)
	struct FString DefaultFilmbackPreset; // 0xb00(0x10)
	struct FString DefaultLensPresetName; // 0xb10(0x10)
	float DefaultLensFocalLength; // 0xb20(0x04)
	float DefaultLensFStop; // 0xb24(0x04)
	char pad_B28[0x8]; // 0xb28(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x91a0d74
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x91a0c20
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x91a0b94
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a0b6c
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91a0aa8
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a0a34
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a0a0c
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91a0948
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a08d4
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a0784
};

// Class CinematicCamera.CameraRig_Crane
// Size: 0x2b8 (Inherited: 0x288)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x288(0x04)
	float CraneYaw; // 0x28c(0x04)
	float CraneArmLength; // 0x290(0x04)
	bool bLockMountPitch; // 0x294(0x01)
	bool bLockMountYaw; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)
	struct USceneComponent* TransformComponent; // 0x298(0x08)
	struct USceneComponent* CraneYawControl; // 0x2a0(0x08)
	struct USceneComponent* CranePitchControl; // 0x2a8(0x08)
	struct USceneComponent* CraneCameraMount; // 0x2b0(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x2a8 (Inherited: 0x288)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x288(0x04)
	bool bLockOrientationToRail; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct USceneComponent* TransformComponent; // 0x290(0x08)
	struct USplineComponent* RailSplineComponent; // 0x298(0x08)
	struct USceneComponent* RailCameraMount; // 0x2a0(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7561fd0
};

