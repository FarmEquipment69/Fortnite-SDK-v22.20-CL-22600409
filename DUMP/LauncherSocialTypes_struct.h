// ScriptStruct LauncherSocialTypes.ChatChromeColorScheme
// Size: 0x50 (Inherited: 0x00)
struct FChatChromeColorScheme {
	struct FLinearColor ChatEntryBackgroundColor; // 0x00(0x10)
	struct FLinearColor NoneActiveTabColor; // 0x10(0x10)
	struct FLinearColor TabFontColor; // 0x20(0x10)
	struct FLinearColor TabFontColorInverted; // 0x30(0x10)
	struct FLinearColor ChatBackgroundColor; // 0x40(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatChromeMargins
// Size: 0x64 (Inherited: 0x00)
struct FChatChromeMargins {
	float TabWidth; // 0x00(0x04)
	struct FMargin TabPadding; // 0x04(0x10)
	struct FMargin ChatWindowPadding; // 0x14(0x10)
	struct FMargin ChatWindowToEntryMargin; // 0x24(0x10)
	struct FMargin ChatChannelPadding; // 0x34(0x10)
	struct FMargin UserListButtonPadding; // 0x44(0x10)
	struct FMargin UserListIconPadding; // 0x54(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatChromeStyle
// Size: 0xb50 (Inherited: 0x00)
struct FChatChromeStyle {
	struct FSlateBrush UserListBrush; // 0x00(0xc0)
	struct FSlateBrush ChatBackgroundBrush; // 0xc0(0xc0)
	struct FSlateBrush ChatEntryBackgroundBrush; // 0x180(0xc0)
	struct FSlateBrush ChannelBackgroundBrush; // 0x240(0xc0)
	struct FSlateBrush TabBackgroundBrush; // 0x300(0xc0)
	struct FButtonStyle TabSelectorButtonStyle; // 0x3c0(0x3b0)
	struct FMargin TabOptionPadding; // 0x770(0x10)
	struct FMargin TabContentPadding; // 0x780(0x10)
	struct FMargin TabClosePadding; // 0x790(0x10)
	struct FButtonStyle UserListButtonStyle; // 0x7a0(0x3b0)
};

// ScriptStruct LauncherSocialTypes.ChatColorScheme
// Size: 0x120 (Inherited: 0x00)
struct FChatColorScheme {
	struct FLinearColor TimeStampColor; // 0x00(0x10)
	struct FLinearColor DefaultChatColor; // 0x10(0x10)
	struct FLinearColor WhisperChatColor; // 0x20(0x10)
	struct FLinearColor GlobalChatColor; // 0x30(0x10)
	struct FLinearColor FounderChatColor; // 0x40(0x10)
	struct FLinearColor GameChatColor; // 0x50(0x10)
	struct FLinearColor TeamChatColor; // 0x60(0x10)
	struct FLinearColor PartyChatColor; // 0x70(0x10)
	struct FLinearColor AdminChatColor; // 0x80(0x10)
	struct FLinearColor GameAdminChatColor; // 0x90(0x10)
	struct FLinearColor WhisperHyperlinkChatColor; // 0xa0(0x10)
	struct FLinearColor GlobalHyperlinkChatColor; // 0xb0(0x10)
	struct FLinearColor FounderHyperlinkChatColor; // 0xc0(0x10)
	struct FLinearColor GameHyperlinkChatColor; // 0xd0(0x10)
	struct FLinearColor TeamHyperlinkChatColor; // 0xe0(0x10)
	struct FLinearColor PartyHyperlinkChatColor; // 0xf0(0x10)
	struct FLinearColor EnemyColor; // 0x100(0x10)
	struct FLinearColor FriendlyColor; // 0x110(0x10)
};

// ScriptStruct LauncherSocialTypes.ChatMarkupStyle
// Size: 0x8b0 (Inherited: 0x00)
struct FChatMarkupStyle {
	struct FButtonStyle MarkupButtonStyle; // 0x00(0x3b0)
	struct FTextBlockStyle MarkupTextStyle; // 0x3b0(0x310)
	struct FSlateBrush MarkupBackground; // 0x6c0(0xc0)
	struct FSlateColor ButtonColor; // 0x780(0x14)
	struct FSlateColor ButtonHoverColor; // 0x794(0x14)
	struct FSlateColor TipColor; // 0x7a8(0x14)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct FSlateBrush SeperatorBrush; // 0x7c0(0xc0)
	float SeperatorThickness; // 0x880(0x04)
	struct FMargin MarkupPadding; // 0x884(0x10)
	struct FMargin ButtonPadding; // 0x894(0x10)
	char pad_8A4[0xc]; // 0x8a4(0x0c)
};

// ScriptStruct LauncherSocialTypes.ChatStyle
// Size: 0x1a80 (Inherited: 0x00)
struct FChatStyle {
	struct FEditableTextBoxStyle ChatEntryTextStyle; // 0x00(0xad0)
	struct FEditableTextBoxStyle ChatDisplayTextStyle; // 0xad0(0xad0)
	struct FScrollBoxStyle ScrollBorderStyle; // 0x15a0(0x310)
	struct FSlateBrush MessageNotificationBrush; // 0x18b0(0xc0)
	struct FMargin ChatEntryPadding; // 0x1970(0x10)
	float ChatEntryHeight; // 0x1980(0x04)
	char pad_1984[0xc]; // 0x1984(0x0c)
	struct FSlateBrush ChatMenuBackgroundBrush; // 0x1990(0xc0)
	struct FMargin FriendActionPadding; // 0x1a50(0x10)
	struct FMargin FriendActionHeaderPadding; // 0x1a60(0x10)
	struct FMargin FriendActionStatusMargin; // 0x1a70(0x10)
};

// ScriptStruct LauncherSocialTypes.SocialFontStyle
// Size: 0x240 (Inherited: 0x00)
struct FSocialFontStyle {
	struct FSlateFontInfo FontSmall; // 0x00(0x58)
	struct FSlateFontInfo FontSmallBold; // 0x58(0x58)
	struct FSlateFontInfo FontNormal; // 0xb0(0x58)
	struct FSlateFontInfo FontNormalBold; // 0x108(0x58)
	struct FSlateFontInfo FontLarge; // 0x160(0x58)
	struct FSlateFontInfo FontLargeBold; // 0x1b8(0x58)
	struct FLinearColor DefaultFontColor; // 0x210(0x10)
	struct FLinearColor InvertedFontColor; // 0x220(0x10)
	struct FLinearColor DefaultDullFontColor; // 0x230(0x10)
};

// ScriptStruct LauncherSocialTypes.SocialListMargins
// Size: 0x210 (Inherited: 0x00)
struct FSocialListMargins {
	struct FVector2D UserPresenceImageSize; // 0x00(0x10)
	struct FMargin HeaderButtonMargin; // 0x10(0x10)
	struct FMargin FriendsListMargin; // 0x20(0x10)
	struct FMargin FriendsListNoFriendsMargin; // 0x30(0x10)
	struct FMargin FriendsListHeaderMargin; // 0x40(0x10)
	struct FMargin FriendsListHeaderCountMargin; // 0x50(0x10)
	struct FMargin HeaderButtonContentMargin; // 0x60(0x10)
	struct FMargin FriendItemMargin; // 0x70(0x10)
	struct FMargin FriendItemStatusMargin; // 0x80(0x10)
	struct FMargin FriendTipStatusMargin; // 0x90(0x10)
	struct FMargin FriendItemPresenceMargin; // 0xa0(0x10)
	struct FMargin FriendItemPlatformMargin; // 0xb0(0x10)
	struct FMargin FriendItemTextScrollerMargin; // 0xc0(0x10)
	struct FMargin ConfirmationBorderMargin; // 0xd0(0x10)
	struct FMargin ConfirmationButtonMargin; // 0xe0(0x10)
	struct FMargin ConfirmationButtonContentMargin; // 0xf0(0x10)
	struct FMargin NoneFriendContentMargin; // 0x100(0x10)
	float NoneFriendContentHeight; // 0x110(0x04)
	float NoneFriendIconWidth; // 0x114(0x04)
	struct FMargin SubMenuBackIconMargin; // 0x118(0x10)
	struct FMargin SubMenuPageIconMargin; // 0x128(0x10)
	struct FMargin RadioSettingTitleMargin; // 0x138(0x10)
	struct FMargin SubMenuSearchIconMargin; // 0x148(0x10)
	struct FMargin SubMenuSearchTextMargin; // 0x158(0x10)
	struct FMargin SubMenuBackButtonMargin; // 0x168(0x10)
	struct FMargin SubMenuSettingButtonMargin; // 0x178(0x10)
	struct FMargin SubMenuListMargin; // 0x188(0x10)
	float SubMenuSeperatorThickness; // 0x198(0x04)
	float PresenceSeperatorThickness; // 0x19c(0x04)
	struct FMargin FriendTipMargin; // 0x1a0(0x10)
	struct FMargin FriendTipPresenceMargin; // 0x1b0(0x10)
	struct FMargin FriendTipSeperatorMargin; // 0x1c0(0x10)
	struct FMargin ToolTipMargin; // 0x1d0(0x10)
	struct FMargin TipStatusMargin; // 0x1e0(0x10)
	struct FMargin AddButtonMargin; // 0x1f0(0x10)
	struct FVector2D AddButtonSpacing; // 0x200(0x10)
};

// ScriptStruct LauncherSocialTypes.SocialListStyle
// Size: 0x37b0 (Inherited: 0x00)
struct FSocialListStyle {
	struct FButtonStyle GlobalChatButtonStyle; // 0x00(0x3b0)
	struct FSlateBrush GlobalChatIcon; // 0x3b0(0xc0)
	struct FButtonStyle FriendItemButtonStyle; // 0x470(0x3b0)
	struct FButtonStyle ConfirmButtonStyle; // 0x820(0x3b0)
	struct FButtonStyle CancelButtonStyle; // 0xbd0(0x3b0)
	struct FSlateColor ButtonContentColor; // 0xf80(0x14)
	struct FSlateColor ButtonHoverContentColor; // 0xf94(0x14)
	char pad_FA8[0x8]; // 0xfa8(0x08)
	struct FSlateBrush ActionMenuArrowBrush; // 0xfb0(0xc0)
	struct FSlateBrush ActionMenuArrowRightBrush; // 0x1070(0xc0)
	struct FSlateColor ActionMenuBackgroundColor; // 0x1130(0x14)
	char pad_1144[0xc]; // 0x1144(0x0c)
	struct FSlateBrush ToolTipArrowBrush; // 0x1150(0xc0)
	struct FButtonStyle BackButtonStyle; // 0x1210(0x3b0)
	struct FButtonStyle HeaderButtonStyle; // 0x15c0(0x3b0)
	struct FButtonStyle FriendListActionButtonStyle; // 0x1970(0x3b0)
	struct FSlateBrush AddFriendButtonContentBrush; // 0x1d20(0xc0)
	struct FSlateBrush StatusIconBrush; // 0x1de0(0xc0)
	struct FSlateBrush PCIconBrush; // 0x1ea0(0xc0)
	struct FSlateBrush ConsoleIconBrush; // 0x1f60(0xc0)
	struct FSlateBrush MobileIconBrush; // 0x2020(0xc0)
	struct FSlateBrush FacebookIconBrush; // 0x20e0(0xc0)
	struct FSlateBrush EpicIconBrush; // 0x21a0(0xc0)
	struct FSlateBrush FriendImageBrush; // 0x2260(0xc0)
	struct FSlateBrush OfflineBrush; // 0x2320(0xc0)
	struct FSlateBrush OnlineBrush; // 0x23e0(0xc0)
	struct FSlateBrush AwayBrush; // 0x24a0(0xc0)
	struct FSlateBrush SpectateBrush; // 0x2560(0xc0)
	struct FSlateBrush FriendsContainerBackground; // 0x2620(0xc0)
	struct FSlateBrush FriendsListBackground; // 0x26e0(0xc0)
	struct FEditableTextBoxStyle AddFriendEditableTextStyle; // 0x27a0(0xad0)
	struct FSlateBrush BackBrush; // 0x3270(0xc0)
	struct FSlateBrush SelectedOptionBrush; // 0x3330(0xc0)
	struct FSlateBrush SettingsBrush; // 0x33f0(0xc0)
	struct FSlateBrush SeperatorBrush; // 0x34b0(0xc0)
	struct FSlateBrush PresenceSeperatorBrush; // 0x3570(0xc0)
	struct FSlateBrush FontSizeBrush; // 0x3630(0xc0)
	struct FSlateBrush SearchBrush; // 0x36f0(0xc0)
};

// ScriptStruct LauncherSocialTypes.ProfanityData
// Size: 0x38 (Inherited: 0x00)
struct FProfanityData {
	struct FString CountryCode; // 0x00(0x10)
	struct FString ProfanityList; // 0x10(0x10)
	struct FString WhiteList; // 0x20(0x10)
	bool bAutoAdd; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LauncherSocialTypes.SocialSoundSchema
// Size: 0x48 (Inherited: 0x00)
struct FSocialSoundSchema {
	struct FSlateSound MessageReceivedSound; // 0x00(0x18)
	struct FSlateSound PartyInviteReceivedSound; // 0x18(0x18)
	struct FSlateSound FriendInviteReceivedSound; // 0x30(0x18)
};

// ScriptStruct LauncherSocialTypes.SocialStyle
// Size: 0x9220 (Inherited: 0x00)
struct FSocialStyle {
	struct FScrollBarStyle ScrollBarStyle; // 0x00(0x6e0)
	struct FButtonStyle ActionButtonStyle; // 0x6e0(0x3b0)
	struct FSocialFontStyle SmallFontStyle; // 0xa90(0x240)
	struct FSocialFontStyle NormalFontStyle; // 0xcd0(0x240)
	struct FSocialFontStyle LargeFontStyle; // 0xf10(0x240)
	struct FSocialFontStyle ChatFontStyle; // 0x1150(0x240)
	struct FCheckBoxStyle CheckBoxStyle; // 0x1390(0xa10)
	struct FCheckBoxStyle RadioBoxStyle; // 0x1da0(0xa10)
	struct FSocialListStyle SocialListStyle; // 0x27b0(0x37b0)
	struct FSocialListMargins SocialListMargins; // 0x5f60(0x210)
	struct FChatStyle ChatStyle; // 0x6170(0x1a80)
	struct FChatColorScheme ChatColorScheme; // 0x7bf0(0x120)
	struct FChatChromeStyle ChatChromeStyle; // 0x7d10(0xb50)
	struct FChatChromeMargins ChatChromeMargins; // 0x8860(0x64)
	struct FChatChromeColorScheme ChatChromeColorScheme; // 0x88c4(0x50)
	char pad_8914[0xc]; // 0x8914(0x0c)
	struct FChatMarkupStyle ChatMarkupStyle; // 0x8920(0x8b0)
	struct FSocialSoundSchema SoundSchema; // 0x91d0(0x48)
	char pad_9218[0x8]; // 0x9218(0x08)
};

