// BlueprintGeneratedClass GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C
// Size: 0x1618 (Inherited: 0xb20)
struct UGA_SurfaceChange_Ice_Sliding_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FSlidingControlParams DefaultSlidingParams; // 0xb28(0x578)
	struct FSlidingControlParams IceSlidingParams; // 0x10a0(0x578)

	void K2_ActivateAbility(); // Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding(int32_t EntryPoint); // Function GA_SurfaceChange_Ice_Sliding.GA_SurfaceChange_Ice_Sliding_C.ExecuteUbergraph_GA_SurfaceChange_Ice_Sliding // (Final|UbergraphFunction) // @ game+0xd67374
};

