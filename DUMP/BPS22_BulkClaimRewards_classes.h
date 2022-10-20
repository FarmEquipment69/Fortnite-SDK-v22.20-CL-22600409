// WidgetBlueprintGeneratedClass BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C
// Size: 0x5bc (Inherited: 0x570)
struct UBPS22_BulkClaimRewards_C : UFortBattlePassBulkBuyPageBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UWidgetAnimation* Intro; // 0x578(0x08)
	struct UCommonRichTextBlock* ; // 0x580(0x08)
	struct UCommonTextBlock* Cost; // 0x588(0x08)
	struct UImage* ; // 0x590(0x08)
	struct UImage* ; // 0x598(0x08)
	struct UCommonTextBlock* Text_LevelsAmount; // 0x5a0(0x08)
	struct UCommonTextBlock* Title; // 0x5a8(0x08)
	int32_t First Page to Claim; // 0x5b0(0x04)
	int32_t Last Page to Claim; // 0x5b4(0x04)
	int32_t Add One; // 0x5b8(0x04)

	void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnPageRangeChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRewardCountChanged(int32_t Count); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnRewardCountChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCostChanged(int32_t Cost); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.OnCostChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HoldActionProgress(bool IsHolding); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.HoldActionProgress // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_BulkClaimRewards(int32_t EntryPoint); // Function BPS22_BulkClaimRewards.BPS22_BulkClaimRewards_C.ExecuteUbergraph_BPS22_BulkClaimRewards // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

