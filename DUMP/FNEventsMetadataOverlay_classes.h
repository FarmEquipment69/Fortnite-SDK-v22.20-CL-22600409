// WidgetBlueprintGeneratedClass FNEventsMetadataOverlay.FNEventsMetadataOverlay_C
// Size: 0x448 (Inherited: 0x3f8)
struct UFNEventsMetadataOverlay_C : UPictureInPictureMetadataOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UWidgetAnimation* Liked_Ani_1to1; // 0x400(0x08)
	struct UWidgetAnimation* FadeInfo_Ani; // 0x408(0x08)
	struct UWidgetAnimation* Liked_Ani; // 0x410(0x08)
	struct UPictureInPictureClient* PictureInPictureClient; // 0x418(0x08)
	struct UPictureInPictureFNEventsController* FNEventsController; // 0x420(0x08)
	struct FMulticastInlineDelegate EventDispatcher_Skip; // 0x428(0x10)
	struct FMulticastInlineDelegate EventDispatcher_Prev; // 0x438(0x10)

	void Construct(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPartnerUpdateComplete(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.OnPartnerUpdateComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FNEventsMetadataOverlay(int32_t EntryPoint); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.ExecuteUbergraph_FNEventsMetadataOverlay // (Final|UbergraphFunction) // @ game+0xd67374
	void EventDispatcher_Prev__DelegateSignature(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.EventDispatcher_Prev__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventDispatcher_Skip__DelegateSignature(); // Function FNEventsMetadataOverlay.FNEventsMetadataOverlay_C.EventDispatcher_Skip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

