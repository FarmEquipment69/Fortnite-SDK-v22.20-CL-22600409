// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Size: 0xa0 (Inherited: 0x80)
struct UOodleNetworkTrainerCommandlet : UCommandlet {
	bool bCompressionTest; // 0x80(0x01)
	bool bWriteV5Dictionaries; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	int32_t HashTableSize; // 0x84(0x04)
	int32_t DictionarySize; // 0x88(0x04)
	int32_t DictionaryTrials; // 0x8c(0x04)
	int32_t TrialRandomness; // 0x90(0x04)
	int32_t TrialGenerations; // 0x94(0x04)
	bool bNoTrials; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

