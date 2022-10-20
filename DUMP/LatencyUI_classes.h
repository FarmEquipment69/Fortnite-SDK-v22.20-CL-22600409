// Class LatencyUI.LatencyGraph
// Size: 0x300 (Inherited: 0x2b8)
struct ULatencyGraph : UUserWidget {
	struct FColor TotalLatencyLineColor; // 0x2b8(0x04)
	struct FColor GameLatencyLineColor; // 0x2bc(0x04)
	struct FColor RenderLatencyLineColor; // 0x2c0(0x04)
	struct FColor DriverLatencyLineColor; // 0x2c4(0x04)
	struct FColor OSWorkQueueLatencyLineColor; // 0x2c8(0x04)
	struct FColor GPURenderLatencyLineColor; // 0x2cc(0x04)
	struct FColor BackgroundColor; // 0x2d0(0x04)
	float MaxLatencyToGraph; // 0x2d4(0x04)
	struct FVector2D DesiredSize; // 0x2d8(0x10)
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class LatencyUI.LatencyWidget
// Size: 0x3b0 (Inherited: 0x2b8)
struct ULatencyWidget : UUserWidget {
	char pad_2B8[0x8]; // 0x2b8(0x08)
	struct UCommonTextBlock* TotalLatencyUI; // 0x2c0(0x08)
	struct UCommonTextBlock* GameLatencyUI; // 0x2c8(0x08)
	struct UCommonTextBlock* RenderLatencyUI; // 0x2d0(0x08)
	struct UCommonTextBlock* OSWorkLatencyUI; // 0x2d8(0x08)
	struct UCommonTextBlock* DriverLatencyUI; // 0x2e0(0x08)
	struct UCommonTextBlock* GPURenderLatencyUI; // 0x2e8(0x08)
	struct UCommonTextBlock* TweakLatencyUI; // 0x2f0(0x08)
	char pad_2F8[0xb8]; // 0x2f8(0xb8)

	void StopTimer(); // Function LatencyUI.LatencyWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x715a7bc
	void StartTimer(); // Function LatencyUI.LatencyWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x715a7a4
};

