// BlueprintGeneratedClass FN_RadialForce.FN_RadialForce_C
// Size: 0x350 (Inherited: 0x290)
struct AFN_RadialForce_C : AFieldSystemActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UOperatorField* DistanceFadMult; // 0x298(0x08)
	struct URadialFalloff* DistanceFalloff; // 0x2a0(0x08)
	struct UWaveScalar* DecayScalar; // 0x2a8(0x08)
	struct UOperatorField* DecayMult; // 0x2b0(0x08)
	struct UWaveScalar* RadialFalloffWave; // 0x2b8(0x08)
	struct UOperatorField* RadialVecMultiplyRadialFallOff; // 0x2c0(0x08)
	struct URadialVector* RadialVector; // 0x2c8(0x08)
	float Timeline_0_Radius_CD3BE591473F9A800DF08A8AC8690190; // 0x2d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CD3BE591473F9A800DF08A8AC8690190; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UTimelineComponent* ; // 0x2d8(0x08)
	double Wave Period; // 0x2e0(0x08)
	double Force Duration; // 0x2e8(0x08)
	double Radius; // 0x2f0(0x08)
	double Magnitude; // 0x2f8(0x08)
	double PlayRate; // 0x300(0x08)
	double Scale; // 0x308(0x08)
	double Impact Time; // 0x310(0x08)
	double Period; // 0x318(0x08)
	double WaveLength; // 0x320(0x08)
	double Time Decay; // 0x328(0x08)
	enum class EFieldFalloffType Falloff Type; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	double Expansion; // 0x338(0x08)
	double Impact Radius; // 0x340(0x08)
	double Strength; // 0x348(0x08)

	struct FTransform (double Roll, double Scale); // Function FN_RadialForce.FN_RadialForce_C. // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Timeline_0__FinishedFunc(); // Function FN_RadialForce.FN_RadialForce_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Timeline_0__UpdateFunc(); // Function FN_RadialForce.FN_RadialForce_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FN_RadialForce(int32_t EntryPoint); // Function FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce // (Final|UbergraphFunction) // @ game+0xd67374
};

