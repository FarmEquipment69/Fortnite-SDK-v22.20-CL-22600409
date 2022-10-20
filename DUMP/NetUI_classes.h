// Class NetUI.BadNetworkIndicator
// Size: 0x350 (Inherited: 0x320)
struct UBadNetworkIndicator : UFortHUDElementWidget {
	bool bEnabled; // 0x320(0x01)
	char pad_321[0x3]; // 0x321(0x03)
	float MinimumDisplayTime; // 0x324(0x04)
	float UpdateTime; // 0x328(0x04)
	float InitialDelay; // 0x32c(0x04)
	char pad_330[0x20]; // 0x330(0x20)

	void UpdateDisplay(); // Function NetUI.BadNetworkIndicator.UpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	bool ShouldDisplay(); // Function NetUI.BadNetworkIndicator.ShouldDisplay // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3db98
	bool HasSeverePing(); // Function NetUI.BadNetworkIndicator.HasSeverePing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3db74
	bool HasSeverePacketLoss(); // Function NetUI.BadNetworkIndicator.HasSeverePacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3db50
	bool HasBadPing(); // Function NetUI.BadNetworkIndicator.HasBadPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3db2c
	bool HasBadPacketLoss(); // Function NetUI.BadNetworkIndicator.HasBadPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3db08
	float GetPing(); // Function NetUI.BadNetworkIndicator.GetPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3dae0
	float GetPacketLoss(); // Function NetUI.BadNetworkIndicator.GetPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6f3dab8
};

// Class NetUI.NetDebugWidget
// Size: 0x3a0 (Inherited: 0x2b8)
struct UNetDebugWidget : UUserWidget {
	struct UCommonTextBlock* PingUI; // 0x2b8(0x08)
	struct UCommonTextBlock* PacketInRateUI; // 0x2c0(0x08)
	struct UCommonTextBlock* PacketOutRateUI; // 0x2c8(0x08)
	struct UCommonTextBlock* PacketInLossUI; // 0x2d0(0x08)
	struct UCommonTextBlock* PacketOutLossUI; // 0x2d8(0x08)
	struct UCommonTextBlock* UpBandwidthUI; // 0x2e0(0x08)
	struct UCommonTextBlock* DownBandwidthUI; // 0x2e8(0x08)
	char pad_2F0[0xb0]; // 0x2f0(0xb0)

	void StopTimer(); // Function NetUI.NetDebugWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x29527c8
	void StartTimer(); // Function NetUI.NetDebugWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x6f3dbbc
};

// Class NetUI.NetGraph
// Size: 0x2f0 (Inherited: 0x2b8)
struct UNetGraph : UUserWidget {
	struct FColor BackgroundColor; // 0x2b8(0x04)
	struct FColor PingLineColor; // 0x2bc(0x04)
	struct FColor QueuedBunchesLineColor; // 0x2c0(0x04)
	struct FColor PacketLossLineColor; // 0x2c4(0x04)
	struct FVector2D DesiredSize; // 0x2c8(0x10)
	float MaxPingToGraph; // 0x2d8(0x04)
	char pad_2DC[0x14]; // 0x2dc(0x14)
};

