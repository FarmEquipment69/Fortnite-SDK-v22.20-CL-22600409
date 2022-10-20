// BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
// Size: 0x119 (Inherited: 0xa0)
struct UBP_SurfaceTypeSoundComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	enum class EPhysicalSurface SurfaceType; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TMap<enum class EPhysicalSurface, struct USoundBase*> SoundMap; // 0xb0(0x50)
	struct FVector Location; // 0x100(0x18)
	bool IsSurfaceTypeSet; // 0x118(0x01)

	void ActuallyPlaySound(); // Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType, struct AActor* Actor); // Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySound(struct FVector Location); // Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Test Delay(); // Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32_t EntryPoint); // Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

