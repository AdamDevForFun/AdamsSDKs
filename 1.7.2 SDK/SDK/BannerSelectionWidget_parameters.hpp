#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9 - 0x0)
// Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction
struct UBannerSelectionWidget_C_HandleNextCategoryAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3342[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction
struct UBannerSelectionWidget_C_HandlePreviousCategoryAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3343[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
struct UBannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature_Params
{
public:
	class FName                                  IconId;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ColorId;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
struct UBannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x141 (0x141 - 0x0)
// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
struct UBannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3344[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3345[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_ComponentBoundEvent_IconId;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_ComponentBoundEvent_ColorId;                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue2;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3346[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3347[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x50(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3348[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Attempt_Leave_Picker_Left;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3349[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue2;                     // 0xA0(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue2;                 // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue2;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue3;             // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller2;      // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller3;      // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue2;      // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue4;             // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue5;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller4;      // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller5;      // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetAtNameHomeBaseScreen_ReturnValue;      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_334E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue2;                  // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


