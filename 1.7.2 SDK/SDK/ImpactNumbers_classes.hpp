#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5E0 - 0x560)
// BlueprintGeneratedClass ImpactNumbers.ImpactNumbers_C
class AImpactNumbers_C : public AFortDamageNumbersActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x568(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Spacing_percentage_for_1s;                         // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FontYSize_0;                                       // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FontXSize_0;                                       // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FontSizeScaleMaxPerc;                              // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Standard_Hit_Color;                                // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Wall_Hit_Color;                           // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Player_Damage_Color;                               // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Number_Spacing_Multiplier;                         // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Number_of_number_rotations;                        // 0x5B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Critical_Hit_Multiplier;                           // 0x5B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance_from_Camera_Before_Doubling_Size;         // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Critical_Enemy_Hit_Color;                          // 0x5C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Number_offset_per;                                 // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AImpactNumbers_C* GetDefaultObj();

	void Set_Material_Pararmeters(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, const struct FTransform& CameraTransform, const struct FVector& NumberLocation, float OffsetAccumulatedValue, float RealGameTime, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, float CallFunc_VSize_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue3, float CallFunc_FClamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FClamp_ReturnValue2, int32 CallFunc_Array_LastIndex_ReturnValue4, int32 CallFunc_Array_LastIndex_ReturnValue5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue2, float CallFunc_SelectFloat_ReturnValue2, float CallFunc_Lerp_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Multiply_FloatFloat_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue7, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FLinearColor& CallFunc_SelectColor_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_SelectColor_ReturnValue3, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item2, int32 CallFunc_Clamp_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item3, int32 CallFunc_Clamp_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue2, int32 CallFunc_Array_Get_Item4, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_SelectFloat_ReturnValue3, bool CallFunc_EqualEqual_IntInt_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue8, float CallFunc_Conv_BoolToFloat_ReturnValue3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue9, const struct FVector& CallFunc_TransformDirection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue10, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_SignOfFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, const struct FLinearColor& K2Node_MakeStruct_LinearColor2, int32 Temp_int_Variable2, float CallFunc_GetScalarParameterValue_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_LessEqual_IntInt_ReturnValue2, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item5, float CallFunc_Multiply_FloatFloat_ReturnValue11, int32 Temp_int_Loop_Counter_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, TArray<class FName>& K2Node_MakeArray_Array2, TArray<class FName>& K2Node_MakeArray_Array3, class FName CallFunc_Array_Get_Item6, class FName CallFunc_Array_Get_Item7);
	void Init_a_new_number_set(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation, const struct FVector& NumberLocation, const struct FVector& LocationOffset, const struct FTransform& CameraTransform, float Temp_float_Variable, enum class EFortDamageNumberType Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable, enum class EFortDamageNumberType Temp_byte_Variable2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue2, float CallFunc_MakeLiteralFloat_ReturnValue2, const struct FVector2D& K2Node_Select_Default, float K2Node_Select2_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, const struct FVector& K2Node_Select3_Default, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue3, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue3);
	void UserConstructionScript();
	void OnNewDamageNumber(struct FFortDamageNumberInfo& NewDamageNumberInfo);
	void ExecuteUbergraph_ImpactNumbers(int32 EntryPoint, const struct FFortDamageNumberInfo& K2Node_Event_NewDamageNumberInfo, const struct FTransform& CallFunc_init_a_new_number_set_OutCameraTransform, const struct FVector& CallFunc_init_a_new_number_set_OutNumberLocation);
};

}


