// SolarisGeneratedEnum VerseExperimental.day_of_week
enum class day_of_week : uint8 {
	Monday = 0,
	Tuesday = 1,
	Wednesday = 2,
	Thursday = 3,
	Friday = 4,
	Saturday = 5,
	Sunday = 6
};

// SolarisGeneratedEnum VerseExperimental.month_of_year
enum class month_of_year : uint8 {
	January = 0,
	February = 1,
	March = 2,
	April = 3,
	May = 4,
	June = 5,
	July = 6,
	August = 7,
	September = 8,
	October = 9,
	November = 10,
	December = 11
};

// VerseStruct VerseExperimental.date_parts
// Size: 0x18 (Inherited: 0x00)
struct Fdate_parts {
	int64_t __verse_0xC55E1F94_Year; // 0x00(0x08)
	int64_t __verse_0x1B283C2C_Month; // 0x08(0x08)
	int64_t __verse_0xD305C642_Day; // 0x10(0x08)
};

// VerseStruct VerseExperimental.date_time
// Size: 0x08 (Inherited: 0x00)
struct Fdate_time {
	int64_t __verse_0xD9F5FBDB_Ticks; // 0x00(0x08)
};

// VerseStruct VerseExperimental.time_of_day_parts
// Size: 0x30 (Inherited: 0x00)
struct Ftime_of_day_parts {
	int64_t __verse_0xEF684B3B_Hours; // 0x00(0x08)
	int64_t __verse_0x2D42EE39_Minutes; // 0x08(0x08)
	int64_t __verse_0xA650E91F_Seconds; // 0x10(0x08)
	int64_t __verse_0x59EF8267_Milliseconds; // 0x18(0x08)
	int64_t __verse_0x40AEA2F6_Microseconds; // 0x20(0x08)
	int64_t __verse_0x0E58C5A9_Nanoseconds; // 0x28(0x08)
};

// VerseStruct VerseExperimental.time_span
// Size: 0x10 (Inherited: 0x00)
struct Ftime_span {
	int64_t __verse_0xD9F5FBDB_Ticks; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// VerseStruct VerseExperimental.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseExperimental.tuple_Ldate__time_Mdate__time_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Ldate__time_Mdate__time_R {
	struct Fdate_time __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fdate_time __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseExperimental.tuple_Ldate__time_Mtime__span_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Ldate__time_Mtime__span_R {
	struct Fdate_time __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftime_span __verse_0x7D844C3C_Elem1; // 0x08(0x10)
};

// VerseStruct VerseExperimental.tuple_Lfloat_Mtime__span_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Lfloat_Mtime__span_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Ftime_span __verse_0x7D844C3C_Elem1; // 0x08(0x10)
};

// VerseStruct VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R
// Size: 0x38 (Inherited: 0x00)
struct Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
	int64_t __verse_0xF64C4596_Elem3; // 0x18(0x08)
	int64_t __verse_0x4F74920B_Elem4; // 0x20(0x08)
	int64_t __verse_0x2A132EB3_Elem5; // 0x28(0x08)
	int64_t __verse_0xC4BC9BA1_Elem6; // 0x30(0x08)
};

// VerseStruct VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_R
// Size: 0x28 (Inherited: 0x00)
struct Ftuple_Lint_Mint_Mint_Mint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
	int64_t __verse_0x932BF92E_Elem2; // 0x10(0x08)
	int64_t __verse_0xF64C4596_Elem3; // 0x18(0x08)
	int64_t __verse_0x4F74920B_Elem4; // 0x20(0x08)
};

// VerseStruct VerseExperimental.tuple_Lint_Mint_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lint_Mint_R {
	int64_t __verse_0x18E3F084_Elem0; // 0x00(0x08)
	int64_t __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseExperimental.tuple_Ltime__span_Mfloat_R
// Size: 0x18 (Inherited: 0x00)
struct Ftuple_Ltime__span_Mfloat_R {
	struct Ftime_span __verse_0x18E3F084_Elem0; // 0x00(0x10)
	double __verse_0x7D844C3C_Elem1; // 0x10(0x08)
};

// VerseStruct VerseExperimental.tuple_Ltime__span_Mtime__span_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Ltime__span_Mtime__span_R {
	struct Ftime_span __verse_0x18E3F084_Elem0; // 0x00(0x10)
	struct Ftime_span __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

