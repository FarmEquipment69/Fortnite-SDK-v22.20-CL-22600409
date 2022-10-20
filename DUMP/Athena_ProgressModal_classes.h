// WidgetBlueprintGeneratedClass Athena_ProgressModal.Athena_ProgressModal_C
// Size: 0x440 (Inherited: 0x408)
struct UAthena_ProgressModal_C : UAthenaProgressModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Intro; // 0x410(0x08)
	struct UImage* ; // 0x418(0x08)
	struct UImage* Image_Separator_Down; // 0x420(0x08)
	struct UImage* Image_Separator_Up; // 0x428(0x08)
	struct ULightbox_C* Lightbox; // 0x430(0x08)
	struct UImage* ProgressSpinner; // 0x438(0x08)

	void BP_OnActivated(); // Function Athena_ProgressModal.Athena_ProgressModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Athena_ProgressModal(int32_t EntryPoint); // Function Athena_ProgressModal.Athena_ProgressModal_C.ExecuteUbergraph_Athena_ProgressModal // (Final|UbergraphFunction) // @ game+0xd67374
};

