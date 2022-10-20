// BlueprintGeneratedClass BP_FluidSim_01.BP_FluidSim_01_C
// Size: 0x568 (Inherited: 0x288)
struct ABP_FluidSim_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* DebugPlane; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	struct UMaterialInstanceDynamic* RippleSimMID; // 0x2a0(0x08)
	struct UMaterialInstanceDynamic* RenderNormalsMID; // 0x2a8(0x08)
	struct UMaterialInstanceDynamic* DisplayMID; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* DisplayBottomMID; // 0x2b8(0x08)
	struct UMaterialInstanceDynamic* CrossSectionMID; // 0x2c0(0x08)
	struct TArray<struct UTextureRenderTarget2D*> RippleRTs; // 0x2c8(0x10)
	struct UMaterialInterface* Display Material; // 0x2d8(0x08)
	double Virtual FPS; // 0x2e0(0x08)
	int32_t Passes; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	double TimeAccumulator; // 0x2f0(0x08)
	double FixedStep; // 0x2f8(0x08)
	bool Enabled; // 0x300(0x01)
	char pad_301[0x7]; // 0x301(0x07)
	double Fluid Size; // 0x308(0x08)
	int32_t Resolution; // 0x310(0x04)
	enum class FluidBoundary Boundary Condition; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	double Travel Speed; // 0x318(0x08)
	double Damping; // 0x320(0x08)
	struct UTextureRenderTarget2D* NormalRT; // 0x328(0x08)
	struct FVector CutPos; // 0x330(0x18)
	struct FVector PrevLoc; // 0x348(0x18)
	struct FVector PrecLoc2; // 0x360(0x18)
	struct FVector PrevOffset; // 0x378(0x18)
	struct FVector PrevOffset2; // 0x390(0x18)
	struct FVector GridCenter; // 0x3a8(0x18)
	struct UTextureRenderTarget2D* TempRT; // 0x3c0(0x08)
	struct UTextureRenderTarget2D* ForcesRT; // 0x3c8(0x08)
	double ApplyForces; // 0x3d0(0x08)
	struct ALandscapeWaterInfo_C* LandscapeWaterInfo; // 0x3d8(0x08)
	int32_t Renders Per Frame; // 0x3e0(0x04)
	bool Show Cross Section; // 0x3e4(0x01)
	bool Perf Test Mode; // 0x3e5(0x01)
	char pad_3E6[0x2]; // 0x3e6(0x02)
	struct UTextureRenderTarget2D* PerfRT; // 0x3e8(0x08)
	struct TArray<struct FFluidForceImpulsePerInstanceData> ImpulseForces; // 0x3f0(0x10)
	struct TMap<struct UActorComponent*, struct FFluidForceDynamicPerInstanceData> DynamicForces; // 0x400(0x50)
	struct TMap<struct UMaterialInterface*, struct UMaterialInstanceDynamic*> ForceParentAndMIDMap; // 0x450(0x50)
	bool Show Simulation Mesh; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UStaticMeshComponent* Fluid Display Mesh; // 0x4a8(0x08)
	struct UStaticMeshComponent* Cross Section Mesh; // 0x4b0(0x08)
	double FluidSizeSquared; // 0x4b8(0x08)
	bool LocalPawnRef; // 0x4c0(0x01)
	bool Debug Text; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	int32_t Pawn Check Every N Frames; // 0x4c4(0x04)
	struct TMap<struct UActorComponent*, struct FFluidForceDynamicPerInstanceData> ProjectileForces; // 0x4c8(0x50)
	bool Follow Player ; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	int32_t Frames Since Last Active Force; // 0x51c(0x04)
	bool Use Terrain Water System; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UMaterialInstanceDynamic* PhysicsForceMID; // 0x528(0x08)
	bool Add Physics Forces; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UTexture* WaterVelocityTexture; // 0x538(0x08)
	bool UpdateForcesInFixedTimeStep; // 0x540(0x01)
	bool UpdateSimInFixedTimeStep; // 0x541(0x01)
	bool UpdateNormalInFixedTimeStep; // 0x542(0x01)
	bool ShowDebugWaterPlane; // 0x543(0x01)
	char pad_544[0x4]; // 0x544(0x04)
	struct UMaterialInstanceDynamic* DebugWaterPlaneMID; // 0x548(0x08)
	struct UTextureRenderTarget2D* DebugRippleRT1; // 0x550(0x08)
	struct UTextureRenderTarget2D* DebugRippleRT2; // 0x558(0x08)
	struct UTextureRenderTarget2D* DebugRippleRTCurrent; // 0x560(0x08)

	void CycleDebugRenderTargets(); // Function BP_FluidSim_01.BP_FluidSim_01_C.CycleDebugRenderTargets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Frames Since Last Active Forces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Clear Sim from Waterbody MIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Remove Projectile Force(struct UActorComponent* Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Register Projectile Force(struct FFluidForceDynamic Dynamic Fluid Force, struct USceneComponent* Tracked Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetPlayerPawnForces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Validate RTs(bool& RTs All Valid); // Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Waterbody MID Params(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetLocalPawn(struct APawn*& Pawn); // Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Draw Dynamic Force(struct UCanvas*& Canvas, struct FVector2D& Canvas Size, struct FFluidForceDynamicPerInstanceData& Dynamic Force Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Remove Dynamic Force(struct UActorComponent* Component); // Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Register Dynamic Force(struct FFluidForceDynamic Dynamic Fluid Force, struct USceneComponent* Tracked Component, double WaterLevel); // Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Dynamic Forces(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Draw Impulse Force(struct UCanvas* Canvas, struct FVector2D Canvas Size, struct FFluidForceImpulsePerInstanceData Impulse Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Impulse Lifetimes(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Apply Fluid Force Impulse(struct FFluidForceImpulse Impulse Settings); // Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get LandscapeWaterInfo(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Get Force MID(struct UMaterialInterface*& Parent, struct UMaterialInstanceDynamic*& Mid); // Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GridMovement(); // Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupSimMIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupDisplayMIDs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Convert Force Position(struct FVector Force Location, double Sine Bob, struct FVector& UV Location); // Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Cycle Render Targets(struct UTextureRenderTarget2D*& Current Target); // Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Clear RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Allocate RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReCheckScalability(); // Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Release RTs(); // Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FluidGridDebug(); // Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetShowDebugWaterPlane(bool IsVisible); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetShowDebugWaterPlane // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDebugNormalRT(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugNormalRT // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDebugForcesRT(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugForcesRT // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDebugRippleRT1(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDebugRippleRT2(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT2 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDebugRippleRTCurrent(); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRTCurrent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetUpdateForcesInFixedTimeStep(bool bool); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetUpdateForcesInFixedTimeStep // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetNormalInFixedTimeStep(bool bool); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetNormalInFixedTimeStep // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSimInFixedTimeStep(bool bool); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetSimInFixedTimeStep // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetAllSimParamsInFixedTimeStep(bool bool); // Function BP_FluidSim_01.BP_FluidSim_01_C.SetAllSimParamsInFixedTimeStep // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_FluidSim_01(int32_t EntryPoint); // Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

