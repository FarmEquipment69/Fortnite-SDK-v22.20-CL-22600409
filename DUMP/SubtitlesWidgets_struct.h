// Enum SubtitlesWidgets.ESubtitleDisplayTextSize
enum class ESubtitleDisplayTextSize : uint8 {
	ExtraSmall = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	ExtraLarge = 4,
	ESubtitleDisplayTextSize_MAX = 5
};

// Enum SubtitlesWidgets.ESubtitleDisplayTextColor
enum class ESubtitleDisplayTextColor : uint8 {
	White = 0,
	Yellow = 1,
	ESubtitleDisplayTextColor_MAX = 2
};

// Enum SubtitlesWidgets.ESubtitleDisplayTextBorder
enum class ESubtitleDisplayTextBorder : uint8 {
	None = 0,
	Outline = 1,
	DropShadow = 2,
	ESubtitleDisplayTextBorder_MAX = 3
};

// Enum SubtitlesWidgets.ESubtitleDisplayBackgroundOpacity
enum class ESubtitleDisplayBackgroundOpacity : uint8 {
	Clear = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Solid = 4,
	ESubtitleDisplayBackgroundOpacity_MAX = 5
};

// ScriptStruct SubtitlesWidgets.SubtitleFormat
// Size: 0x04 (Inherited: 0x00)
struct FSubtitleFormat {
	enum class ESubtitleDisplayTextSize SubtitleTextSize; // 0x00(0x01)
	enum class ESubtitleDisplayTextColor SubtitleTextColor; // 0x01(0x01)
	enum class ESubtitleDisplayTextBorder SubtitleTextBorder; // 0x02(0x01)
	enum class ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity; // 0x03(0x01)
};

