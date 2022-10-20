// SolarisGeneratedEnum VerseGameplayTags.tag_search_sort_type
enum class tag_search_sort_type : uint8 {
	Unsorted = 0,
	Sorted = 1
};

// VerseStruct VerseGameplayTags.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseGameplayTags.tuple_Ltag__container_Mtag__container_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Ltag__container_Mtag__container_R {
	struct Utag_container* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Utag_container* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseGameplayTags.tuple_Ltag_Mtag_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Ltag_Mtag_R {
	struct Utag* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Utag* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

