// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
// Size: 0x150 (Inherited: 0x30)
struct UChatColorSchemeDataAsset : UDataAsset {
	struct FChatColorScheme ChatColorData; // 0x30(0x120)
};

// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
// Size: 0x3e0 (Inherited: 0x30)
struct USocialActionButtonStyleDataAsset : UDataAsset {
	struct FButtonStyle style; // 0x30(0x3b0)
};

// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
// Size: 0x80 (Inherited: 0x30)
struct USocialChatChromeColorSchemeDataAsset : UDataAsset {
	struct FChatChromeColorScheme style; // 0x30(0x50)
};

// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
// Size: 0x98 (Inherited: 0x30)
struct USocialChatChromeMarginsDataAsset : UDataAsset {
	struct FChatChromeMargins style; // 0x30(0x64)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
// Size: 0xb80 (Inherited: 0x30)
struct USocialChatChromeStyleDataAsset : UDataAsset {
	struct FChatChromeStyle style; // 0x30(0xb50)
};

// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
// Size: 0x8e0 (Inherited: 0x30)
struct USocialChatMarkupStyleDataAsset : UDataAsset {
	struct FChatMarkupStyle style; // 0x30(0x8b0)
};

// Class LauncherSocialDefaults.SocialChatStyleDataAsset
// Size: 0x1ab0 (Inherited: 0x30)
struct USocialChatStyleDataAsset : UDataAsset {
	struct FChatStyle style; // 0x30(0x1a80)
};

// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
// Size: 0xa40 (Inherited: 0x30)
struct USocialCheckBoxStyleDataAsset : UDataAsset {
	struct FCheckBoxStyle style; // 0x30(0xa10)
};

// Class LauncherSocialDefaults.SocialFontStyleDataAsset
// Size: 0x270 (Inherited: 0x30)
struct USocialFontStyleDataAsset : UDataAsset {
	struct FSocialFontStyle style; // 0x30(0x240)
};

// Class LauncherSocialDefaults.SocialListMarginsDataAsset
// Size: 0x240 (Inherited: 0x30)
struct USocialListMarginsDataAsset : UDataAsset {
	struct FSocialListMargins style; // 0x30(0x210)
};

// Class LauncherSocialDefaults.SocialListStyleDataAsset
// Size: 0x37e0 (Inherited: 0x30)
struct USocialListStyleDataAsset : UDataAsset {
	struct FSocialListStyle style; // 0x30(0x37b0)
};

// Class LauncherSocialDefaults.SocialProfanityDataAsset
// Size: 0x40 (Inherited: 0x30)
struct USocialProfanityDataAsset : UDataAsset {
	struct TArray<struct FProfanityData> ProfanityData; // 0x30(0x10)
};

// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
// Size: 0xa40 (Inherited: 0x30)
struct USocialRadioBoxStyleDataAsset : UDataAsset {
	struct FCheckBoxStyle style; // 0x30(0xa10)
};

// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
// Size: 0x710 (Inherited: 0x30)
struct USocialScrollBarStyleDataAsset : UDataAsset {
	struct FScrollBarStyle style; // 0x30(0x6e0)
};

// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
// Size: 0x78 (Inherited: 0x30)
struct USocialSoundSchemaDataAsset : UDataAsset {
	struct FSocialSoundSchema SoundSchema; // 0x30(0x48)
};

// Class LauncherSocialDefaults.SocialStyleDataAsset
// Size: 0x92e0 (Inherited: 0x30)
struct USocialStyleDataAsset : UDataAsset {
	struct USocialFontStyleDataAsset* SmallFontStyle; // 0x30(0x08)
	struct USocialFontStyleDataAsset* NormalFontStyle; // 0x38(0x08)
	struct USocialFontStyleDataAsset* LargeFontStyle; // 0x40(0x08)
	struct USocialFontStyleDataAsset* ChatFontStyle; // 0x48(0x08)
	struct USocialListStyleDataAsset* SocialListStyle; // 0x50(0x08)
	struct USocialListMarginsDataAsset* SocialListMargins; // 0x58(0x08)
	struct USocialChatStyleDataAsset* ChatStyle; // 0x60(0x08)
	struct USocialChatChromeStyleDataAsset* ChatChromeStyle; // 0x68(0x08)
	struct USocialChatChromeMarginsDataAsset* ChatChromeMargins; // 0x70(0x08)
	struct USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme; // 0x78(0x08)
	struct UChatColorSchemeDataAsset* ChatColorScheme; // 0x80(0x08)
	struct USocialSoundSchemaDataAsset* SoundSchema; // 0x88(0x08)
	struct USocialActionButtonStyleDataAsset* ActionButtonStyle; // 0x90(0x08)
	struct USocialCheckBoxStyleDataAsset* CheckBoxStyle; // 0x98(0x08)
	struct USocialRadioBoxStyleDataAsset* RadioBoxStyle; // 0xa0(0x08)
	struct USocialScrollBarStyleDataAsset* ScrollBoxStyle; // 0xa8(0x08)
	struct USocialChatMarkupStyleDataAsset* MarkupStyle; // 0xb0(0x08)
	struct USocialProfanityDataAsset* ProfanityDataAsset; // 0xb8(0x08)
	char pad_C0[0x9220]; // 0xc0(0x9220)
};

