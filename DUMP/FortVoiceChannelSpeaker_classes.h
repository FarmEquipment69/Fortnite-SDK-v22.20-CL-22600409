// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// Size: 0x388 (Inherited: 0x368)
struct UFortVoiceChannelSpeaker_C : UFortVoiceChannelSpeakerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* AnimateVoice; // 0x370(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x378(0x08)
	struct UHorizontalBox* Content; // 0x380(0x08)

	void OnStyleAssigned(enum class EChannelSpeakerStyle NewStyle); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnAnimateTalkingChanged(bool bIsNowTalking); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32_t EntryPoint); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker // (Final|UbergraphFunction) // @ game+0xd67374
};

