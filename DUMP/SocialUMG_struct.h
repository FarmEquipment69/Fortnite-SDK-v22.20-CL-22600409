// ScriptStruct SocialUMG.SocialChatMessageEntryTextStyle
// Size: 0x68 (Inherited: 0x00)
struct FSocialChatMessageEntryTextStyle {
	struct FSlateFontInfo FontInfo; // 0x00(0x58)
	struct FLinearColor ColorAndOpacity; // 0x58(0x10)
};

// ScriptStruct SocialUMG.SocialChatMessageEntryStyle
// Size: 0x138 (Inherited: 0x00)
struct FSocialChatMessageEntryStyle {
	struct FSocialChatMessageEntryTextStyle SenderNameStyle; // 0x00(0x68)
	struct FSocialChatMessageEntryTextStyle ChannelNameStyle; // 0x68(0x68)
	struct FSocialChatMessageEntryTextStyle MessageTextStyle; // 0xd0(0x68)
};

