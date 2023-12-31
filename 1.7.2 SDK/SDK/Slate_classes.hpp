#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A8 (0x2D8 - 0x30)
// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x30(0x2A8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UButtonWidgetStyle* GetDefaultObj();

};

// 0x5E0 (0x610 - 0x30)
// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x30(0x5E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCheckBoxWidgetStyle* GetDefaultObj();

};

// 0x428 (0x458 - 0x30)
// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x30(0x428)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboBoxWidgetStyle* GetDefaultObj();

};

// 0x3E0 (0x410 - 0x30)
// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x30(0x3E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboButtonWidgetStyle* GetDefaultObj();

};

// 0x870 (0x8A0 - 0x30)
// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x30(0x870)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextBoxWidgetStyle* GetDefaultObj();

};

// 0x248 (0x278 - 0x30)
// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x30(0x248)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextWidgetStyle* GetDefaultObj();

};

// 0x1B8 (0x1E8 - 0x30)
// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                     ProgressBarStyle;                                  // 0x30(0x1B8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProgressWidgetStyle* GetDefaultObj();

};

// 0x518 (0x548 - 0x30)
// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x30(0x518)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBarWidgetStyle* GetDefaultObj();

};

// 0x248 (0x278 - 0x30)
// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                       ScrollBoxStyle;                                    // 0x30(0x248)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBoxWidgetStyle* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Slate.SlateSettings
class USlateSettings : public UObject
{
public:
	bool                                         bExplicitCanvasChildZOrder;                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1722[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateSettings* GetDefaultObj();

};

// 0x310 (0x340 - 0x30)
// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                         SpinBoxStyle;                                      // 0x30(0x310)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpinBoxWidgetStyle* GetDefaultObj();

};

// 0x208 (0x238 - 0x30)
// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                       TextBlockStyle;                                    // 0x30(0x208)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTextBlockWidgetStyle* GetDefaultObj();

};

}


