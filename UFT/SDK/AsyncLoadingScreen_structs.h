#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AsyncLoadingScreen.ELoadingWidgetType
enum class ELoadingWidgetType : uint8_t
{
	LWT_Horizontal                 = 0,
	LWT_Vertical                   = 1,
	LWT_MAX                        = 2,

};

// Enum AsyncLoadingScreen.ELoadingIconType
enum class ELoadingIconType : uint8_t
{
	LIT_Throbber                   = 0,
	LIT_CircularThrobber           = 1,
	LIT_ImageSequence              = 2,
	LIT_MAX                        = 3,

};

// Enum AsyncLoadingScreen.EAsyncLoadingScreenLayout
enum class EAsyncLoadingScreenLayout : uint8_t
{
	ALSL_Classic                   = 0,
	ALSL_Center                    = 1,
	ALSL_Letterbox                 = 2,
	ALSL_Sidebar                   = 3,
	ALSL_DualSidebar               = 4,
	ALSL_MAX                       = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AsyncLoadingScreen.BackgroundSettings
// 0x0038
struct FBackgroundSettings
{
	TArray<struct FSoftObjectPath>                     Images;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EStretch>                              ImageStretch;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYQM[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayBackgroundManually;                             // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9SMW[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AsyncLoadingScreen.TextAppearance
// 0x0098
struct FTextAppearance
{
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0000(0x0028) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0028(0x0050) (Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ETextJustify>                          Justification;                                             // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A834[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct AsyncLoadingScreen.TipSettings
// 0x00B0
struct FTipSettings
{
	TArray<struct FText>                               TipText;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTextAppearance                             Appearance;                                                // 0x0010(0x0098) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              TipWrapAt;                                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayTipTextManually;                                // 0x00AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NN1T[0x3];                                     // 0x00AD(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AsyncLoadingScreen.ThrobberSettings
// 0x0090
struct FThrobberSettings
{
	int                                                NumberOfPieces;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WGOP[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Image;                                                     // 0x0008(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.CircularThrobberSettings
// 0x0098
struct FCircularThrobberSettings
{
	int                                                NumberOfPieces;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TS02[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Image;                                                     // 0x0010(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.ImageSequenceSettings
// 0x0020
struct FImageSequenceSettings
{
	TArray<class UTexture2D*>                          Images;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Scale;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Interval;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayReverse;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2Y51[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AsyncLoadingScreen.WidgetAlignment
// 0x0002
struct FWidgetAlignment
{
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.LoadingWidgetSettings
// 0x0228
struct FLoadingWidgetSettings
{
	ELoadingIconType                                   LoadingIconType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELoadingWidgetType                                 LoadingWidgetType;                                         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LUPS[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TransformTranslation;                                      // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformScale;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformPivot;                                            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVOR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LoadingText;                                               // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bLoadingTextRightPosition;                                 // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoadingTextTopPosition;                                   // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SEML[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextAppearance                             Appearance;                                                // 0x0040(0x0098) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FThrobberSettings                           ThrobberSettings;                                          // 0x00D8(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCircularThrobberSettings                   CircularThrobberSettings;                                  // 0x0168(0x0098) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FImageSequenceSettings                      ImageSequenceSettings;                                     // 0x0200(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TextAlignment;                                             // 0x0220(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingIconAlignment;                                      // 0x0222(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Space;                                                     // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.ALoadingScreenSettings
// 0x0330
struct FALoadingScreenSettings
{
	float                                              MinimumLoadingScreenDisplayTime;                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoCompleteWhenLoadingCompletes;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoviesAreSkippable;                                       // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWaitForManualStop;                                        // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EMoviePlaybackType>                    PlaybackType;                                              // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             MoviePaths;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bShuffle;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetDisplayMovieIndexManually;                             // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowWidgetOverlay;                                        // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAsyncLoadingScreenLayout                          Layout;                                                    // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KPJX[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBackgroundSettings                         Background;                                                // 0x0020(0x0038) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTipSettings                                TipWidget;                                                 // 0x0058(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLoadingWidgetSettings                      LoadingWidget;                                             // 0x0108(0x0228) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.CenterLayoutSettings
// 0x00A0
struct FCenterLayoutSettings
{
	bool                                               bIsTipAtBottom;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0001(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  BorderHorizontalAlignment;                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BorderVerticalOffset;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     BorderPadding;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0018(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.LetterboxLayoutSettings
// 0x0138
struct FLetterboxLayoutSettings
{
	bool                                               bIsLoadingWidgetAtTop;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0001(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingWidgetAlignment;                                    // 0x0003(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  TopBorderHorizontalAlignment;                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  BottomBorderHorizontalAlignment;                           // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68PK[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     TopBorderPadding;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     BottomBorderPadding;                                       // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TopBorderBackground;                                       // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomBorderBackground;                                    // 0x00B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.DualSidebarLayoutSettings
// 0x0138
struct FDualSidebarLayoutSettings
{
	bool                                               bIsLoadingWidgetAtRight;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    LeftVerticalAlignment;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    RightVerticalAlignment;                                    // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    LeftBorderVerticalAlignment;                               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    RightBorderVerticalAlignment;                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXEP[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     LeftBorderPadding;                                         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     RightBorderPadding;                                        // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftBorderBackground;                                      // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightBorderBackground;                                     // 0x00B0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.SidebarLayoutSettings
// 0x00B0
struct FSidebarLayoutSettings
{
	bool                                               bIsWidgetAtRight;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLoadingWidgetAtTop;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PU4[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Space;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            LoadingWidgetAlignment;                                    // 0x0009(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x000B(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    BorderVerticalAlignment;                                   // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XY8W[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BorderHorizontalOffset;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     BorderPadding;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J6VG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0028(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
// ScriptStruct AsyncLoadingScreen.ClassicLayoutSettings
// 0x00A8
struct FClassicLayoutSettings
{
	bool                                               bIsWidgetAtBottom;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsLoadingWidgetAtLeft;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F4FW[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Space;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetAlignment                            TipAlignment;                                              // 0x0008(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  BorderHorizontalAlignment;                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J645[0x1];                                     // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     BorderPadding;                                             // 0x000C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5GKS[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 BorderBackground;                                          // 0x0020(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
