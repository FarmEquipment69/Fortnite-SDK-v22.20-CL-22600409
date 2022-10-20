// SolarisGeneratedEnum Verse.named_color
enum class named_color : uint8 {
	AliceBlue = 0,
	AntiqueWhite = 1,
	Aqua = 2,
	Aquamarine = 3,
	Azure = 4,
	Beige = 5,
	Bisque = 6,
	Black = 7,
	BlanchedAlmond = 8,
	Blue = 9,
	BlueViolet = 10,
	Brown = 11,
	Burlywood = 12,
	CadetBlue = 13,
	Chartreuse = 14,
	Chocolate = 15,
	Coral = 16,
	CornflowerBlue = 17,
	Cornsilk = 18,
	Crimson = 19,
	Cyan = 20,
	DarkBlue = 21,
	DarkCyan = 22,
	DarkGoldenrod = 23,
	DarkGray = 24,
	DarkGreen = 25,
	DarkGrey = 26,
	DarkKhaki = 27,
	DarkMagenta = 28,
	DarkOliveGreen = 29,
	DarkOrange = 30,
	DarkOrchid = 31,
	DarkRed = 32,
	DarkSalmon = 33,
	DarkSeaGreen = 34,
	DarkSlateBlue = 35,
	DarkSlateGray = 36,
	DarkSlateGrey = 37,
	DarkTurquoise = 38,
	DarkViolet = 39,
	DeepPink = 40,
	DeepSkyBlue = 41,
	DimGray = 42,
	DimGrey = 43,
	DodgerBlue = 44,
	Firebrick = 45,
	FloralWhite = 46,
	ForestGreen = 47,
	Fuchsia = 48,
	Gainsboro = 49,
	GhostWhite = 50,
	Gold = 51,
	Goldenrod = 52,
	Gray = 53,
	Green = 54,
	GreenYellow = 55,
	Grey = 56,
	HoneyDew = 57,
	Hotpink = 58,
	IndianRed = 59,
	Indigo = 60,
	Ivory = 61,
	Khaki = 62,
	Lavender = 63,
	LavenderBlush = 64,
	LawnGreen = 65,
	LemonChiffon = 66,
	LightBlue = 67,
	LightCoral = 68,
	LightCyan = 69,
	LightGoldenrodYellow = 70,
	LightGray = 71,
	LightGreen = 72,
	LightGrey = 73,
	LightPink = 74,
	LightSalmon = 75,
	LightSeaGreen = 76,
	LightSkyBlue = 77,
	LightSlateGray = 78,
	LightSlateGrey = 79,
	LightSteelBlue = 80,
	LightYellow = 81,
	Lime = 82,
	LimeGreen = 83,
	Linen = 84,
	Magenta = 85,
	Maroon = 86,
	MediumAquamarine = 87,
	MediumBlue = 88,
	MediumOrchid = 89,
	MediumPurple = 90,
	MediumSeaGreen = 91,
	MediumSlateBlue = 92,
	MediumSpringGreen = 93,
	MediumTurquoise = 94,
	MediumVioletRed = 95,
	MidnightBlue = 96,
	MintCream = 97,
	MistyRose = 98,
	Moccasin = 99,
	NavajoWhite = 100,
	Navy = 101,
	OldLace = 102,
	Olive = 103,
	OliveDrab = 104,
	Orange = 105,
	OrangeRed = 106,
	Orchid = 107,
	PaleGoldenrod = 108,
	PaleGreen = 109,
	PaleTurquoise = 110,
	PaleVioletred = 111,
	PapayaWhip = 112,
	PeachPuff = 113,
	Peru = 114,
	Pink = 115,
	Plum = 116,
	PowderBlue = 117,
	Purple = 118,
	Red = 119,
	RosyBrown = 120,
	RoyalBlue = 121,
	SaddleBrown = 122,
	Salmon = 123,
	SandyBrown = 124,
	SeaGreen = 125,
	SeaShell = 126,
	Sienna = 127,
	Silver = 128,
	SkyBlue = 129,
	SlateBlue = 130,
	SlateGray = 131,
	SlateGrey = 132,
	Snow = 133,
	SpringGreen = 134,
	SteelBlue = 135,
	tan = 136,
	Teal = 137,
	Thistle = 138,
	Tomato = 139,
	Turquoise = 140,
	Violet = 141,
	Wheat = 142,
	White = 143,
	WhiteSmoke = 144,
	Yellow = 145,
	YellowGreen = 146
};

// VerseStruct Verse.Color
// Size: 0x20 (Inherited: 0x00)
struct FColor {
	double __verse_0x44E0EC02_A; // 0x00(0x08)
	double __verse_0x35184040_R; // 0x08(0x08)
	double __verse_0x98BF8727_G; // 0x10(0x08)
	double __verse_0xAA4F5910_B; // 0x18(0x08)
};

// VerseStruct Verse.locale
// Size: 0x01 (Inherited: 0x00)
struct Flocale {
	char pad_0[0x1]; // 0x00(0x01)
};

// VerseStruct Verse.tuple_L_K_Kchar_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_K_Kchar_M_Kchar_R {
	struct TArray<VerseStringProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct Verse.tuple_L_Kany_Many_Many_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_L_Kany_Many_Many_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseDynamicProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	VerseDynamicProperty __verse_0x932BF92E_Elem2; // 0x20(0x10)
};

// VerseStruct Verse.tuple_L_Kany_Many_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kany_Many_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseDynamicProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct Verse.tuple_L_Kany_Mint_M_Kany_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_L_Kany_Mint_M_Kany_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	int64_t __verse_0x7D844C3C_Elem1; // 0x10(0x08)
	struct TArray<VerseDynamicProperty> __verse_0x932BF92E_Elem2; // 0x18(0x10)
};

// VerseStruct Verse.tuple_L_Kany_Mint_Many_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_L_Kany_Mint_Many_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	int64_t __verse_0x7D844C3C_Elem1; // 0x10(0x08)
	VerseDynamicProperty __verse_0x932BF92E_Elem2; // 0x18(0x10)
};

// VerseStruct Verse.tuple_L_Kany_Mint_Mint_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kany_Mint_Mint_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	int64_t __verse_0x7D844C3C_Elem1; // 0x10(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x18(0x08)
};

// VerseStruct Verse.tuple_L_Kany_Mint_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_L_Kany_Mint_R {
	struct TArray<VerseDynamicProperty> __verse_0x18E3F084_Elem0; // 0x00(0x10)
	int64_t __verse_0x7D844C3C_Elem1; // 0x10(0x08)
};

// VerseStruct Verse.tuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
// Size: 0x70 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TMap<VerseStringProperty, struct UObject*> __verse_0x932BF92E_Elem2; // 0x20(0x50)
};

// VerseStruct Verse.tuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R
// Size: 0x31 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Ktuple_L_Kchar_M_Kchar_R_Mlocale_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	struct TArray<struct Ftuple_L_Kchar_M_Kchar_R> __verse_0x932BF92E_Elem2; // 0x20(0x10)
	struct Flocale __verse_0xF64C4596_Elem3; // 0x30(0x01)
};

// VerseStruct Verse.tuple_L_Kchar_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct Verse.tuple_L_Kchar_M_QWhere_Nlocale_R
// Size: 0x12 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QWhere_Nlocale_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
};

// VerseStruct Verse.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct Verse.tuple_Lcolor_Mfloat_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lcolor_Mfloat_R {
	struct FColor __verse_0x18E3F084_Elem0; // 0x00(0x20)
	double __verse_0x7D844C3C_Elem1; // 0x20(0x08)
};

// VerseStruct Verse.tuple_Lfloat_M_QWhere_Nlocale_R
// Size: 0x0a (Inherited: 0x00)
struct Ftuple_Lfloat_M_QWhere_Nlocale_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x02)
};

// VerseStruct Verse.tuple_Lfloat_Mfloat_Mfloat_Mfloat_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_Mfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	double __verse_0x932BF92E_Elem2; // 0x10(0x08)
	double __verse_0xF64C4596_Elem3; // 0x18(0x08)
};

// VerseStruct Verse.tuple_Lfloat_Mfloat_Mfloat_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	double __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct Verse.tuple_Lfloat_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct Verse.tuple_Lint_M_QWhere_Nlocale_R
// Size: 0x0a (Inherited: 0x00)
struct Ftuple_Lint_M_QWhere_Nlocale_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x02)
};

// VerseStruct Verse.tuple_Lint_Mint_Mint_Mint_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lint_Mint_Mint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
	int64_t __verse_0xF64C4596_Elem3; // 0x18(0x08)
};

// VerseStruct Verse.tuple_Lint_Mint_Mint_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lint_Mint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
};

// VerseStruct Verse.tuple_Lint_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

