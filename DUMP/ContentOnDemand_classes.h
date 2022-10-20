// WidgetBlueprintGeneratedClass ContentOnDemand.ContentOnDemand_C
// Size: 0x3e0 (Inherited: 0x3a8)
struct UContentOnDemand_C : UFortContentOnDemand {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* Intro; // 0x3b0(0x08)
	struct UWidgetAnimation* Outro; // 0x3b8(0x08)
	struct UImage* Check; // 0x3c0(0x08)
	struct UCommonTextBlock* Text_Downloaded; // 0x3c8(0x08)
	struct UCommonTextBlock* Text_Downloading; // 0x3d0(0x08)
	int32_t LastNotifiedNumDownload; // 0x3d8(0x04)
	int32_t LastDisplayedNumDownload; // 0x3dc(0x04)

	void OnUpdatedState(int32_t NumActiveDownloads, int32_t NumErrors); // Function ContentOnDemand.ContentOnDemand_C.OnUpdatedState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ContentOnDemand.ContentOnDemand_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ContentOnDemand(int32_t EntryPoint); // Function ContentOnDemand.ContentOnDemand_C.ExecuteUbergraph_ContentOnDemand // (Final|UbergraphFunction) // @ game+0xd67374
};

