// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
// Size: 0xef0 (Inherited: 0xee0)
struct ACinematicSequenceDeviceBase : ABuildingProp {
	struct ULevelSequence* Sequence; // 0xee0(0x08)
	struct ALevelSequenceActor* LevelSequenceActor; // 0xee8(0x08)

	void Play(); // Function CRD_CinematicSequence.CinematicSequenceDeviceBase.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x6763454
};

