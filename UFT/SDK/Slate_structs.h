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

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView                       = 0,
	TopOrLeft                      = 1,
	Center                         = 2,
	MAX                            = 3,

};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	MAX                            = 7,

};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	MAX                            = 3,

};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	MAX                            = 2,

};

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	MAX                            = 3,

};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None                           = 0,
	Visible                        = 1,
	Hidden                         = 2,
	MAX                            = 3,

};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	NumChords                      = 2,
	MAX                            = 3,

};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None                           = 0,
	Button                         = 1,
	ToggleButton                   = 2,
	RadioButton                    = 3,
	Check                          = 4,
	CollapsedButton                = 5,
	MAX                            = 6,

};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss            = 0,
	TextCommitOnAccept             = 1,
	TextCommitOnDismiss            = 2,
	MAX                            = 3,

};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	MAX                            = 3,

};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	MAX                            = 4,

};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None                           = 0,
	ButtonRow                      = 1,
	EditableText                   = 2,
	Heading                        = 3,
	MenuEntry                      = 4,
	MenuSeparator                  = 5,
	ToolBarButton                  = 6,
	ToolBarComboButton             = 7,
	ToolBarSeparator               = 8,
	Widget                         = 9,
	MAX                            = 10,

};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar                        = 0,
	ToolBar                        = 1,
	VerticalToolBar                = 2,
	Menu                           = 3,
	ButtonRow                      = 4,
	ToolMenuBar                    = 5,
	MAX                            = 6,

};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	MAX                            = 5,

};

// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	MAX                            = 8,

};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	MAX                            = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.InputChord
// 0x0020
struct FInputChord
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018) (Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShift : 1;                                                // 0x0018(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCtrl : 1;                                                 // 0x0018(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAlt : 1;                                                  // 0x0018(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCmd : 1;                                                  // 0x0018(0x0001) BIT_FIELD  (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZHS[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct Slate.VirtualKeyboardOptions
// 0x0001
struct FVirtualKeyboardOptions
{
	bool                                               bEnableAutocorrect;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Slate.CustomizedToolMenu
// 0x0108
struct FCustomizedToolMenu
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;                                                   // 0x0008(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuSection> Sections;                                                  // 0x0058(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                                // 0x00A8(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SectionOrder;                                              // 0x00F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct Slate.Anchors
// 0x0010
struct FAnchors
{
	struct FVector2D                                   Minimum;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Maximum;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x0004
struct FCustomizedToolMenuEntry
{
	ECustomizedToolMenuVisibility                      Visibility;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2L2R[0x3];                                     // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct Slate.CustomizedToolMenuSection
// 0x0004
struct FCustomizedToolMenuSection
{
	ECustomizedToolMenuVisibility                      Visibility;                                                // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTAM[0x3];                                     // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

};
// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x0010
struct FCustomizedToolMenuNameArray
{
	TArray<struct FName>                               Names;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
