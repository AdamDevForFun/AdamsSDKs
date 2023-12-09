#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C
// (None)

class UClass* UHighTower_Wasabi_LayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HighTower_Wasabi_LayerAnimBP_C");

	return Clss;
}


// HighTower_Wasabi_LayerAnimBP_C HighTower_Wasabi_LayerAnimBP.Default__HighTower_Wasabi_LayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHighTower_Wasabi_LayerAnimBP_C* UHighTower_Wasabi_LayerAnimBP_C::GetDefaultObj()
{
	static class UHighTower_Wasabi_LayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHighTower_Wasabi_LayerAnimBP_C*>(UHighTower_Wasabi_LayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemPreIK
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_PreIK                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemPreIK                                                        (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemPreIK(const struct FPoseLink& InPose_PreIK, struct FPoseLink* ItemPreIK)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemPreIK");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemPreIK_Params Parms{};

	Parms.InPose_PreIK = InPose_PreIK;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemPreIK != nullptr)
		*ItemPreIK = std::move(Parms.ItemPreIK);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodyOverride                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFullBodyOverride(const struct FPoseLink& InPoseFullBody, struct FPoseLink* ItemFullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFullBodyOverride");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFullBodyOverride_Params Parms{};

	Parms.InPoseFullBody = InPoseFullBody;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodyOverride != nullptr)
		*ItemFullBodyOverride = std::move(Parms.ItemFullBodyOverride);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemAimOffset
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemAimOffset");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemAimOffset_Params Parms{};

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = std::move(Parms.ItemAimOffset);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSkeletalControl");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSkeletalControl_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = std::move(Parms.ItemSkeletalControl);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemUpperBody");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemUpperBody_Params Parms{};

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = std::move(Parms.ItemUpperBody);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFullBodySprint");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFullBodySprint_Params Parms{};

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = std::move(Parms.ItemFullBodySprint);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemIdleAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemIdleAdditive_Params Parms{};

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = std::move(Parms.ItemIdleAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemCrouchTurningAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = std::move(Parms.ItemCrouchTurningAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSlopeSliding");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSlopeSliding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = std::move(Parms.ItemSlopeSliding);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJumpUpAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJumpUpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = std::move(Parms.ItemJumpUpAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJumpLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = std::move(Parms.ItemJumpLoopAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFallAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFallAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = std::move(Parms.ItemFallAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFallLandAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFallLandAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = std::move(Parms.ItemFallLandAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJetPackStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = std::move(Parms.ItemJetPackStartAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJetPackJumpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = std::move(Parms.ItemJetPackJumpAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemZipLineStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = std::move(Parms.ItemZipLineStartAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFlyModeStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = std::move(Parms.ItemFlyModeStartAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemFlyModeLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = std::move(Parms.ItemFlyModeLoopAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJogStartAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJogStartAdditive_Params Parms{};

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = std::move(Parms.ItemJogStartAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJogStopAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJogStopAdditive_Params Parms{};

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = std::move(Parms.ItemJogStopAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJogPrePivotAdditive_Params Parms{};

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = std::move(Parms.ItemJogPrePivotAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemJogPostPivotAdditive_Params Parms{};

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = std::move(Parms.ItemJogPostPivotAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyMovement");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyMovement_Params Parms{};

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = std::move(Parms.ItemLowerBodyMovement);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyLeanAdditive_Params Parms{};

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = std::move(Parms.ItemLowerBodyLeanAdditive);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyJogStart_Params Parms{};

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = std::move(Parms.ItemLowerBodyJogStart);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyJogStop_Params Parms{};

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = std::move(Parms.ItemLowerBodyJogStop);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyJogPrePivot_Params Parms{};

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = std::move(Parms.ItemLowerBodyJogPrePivot);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemLowerBodyJogPostPivot_Params Parms{};

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = std::move(Parms.ItemLowerBodyJogPostPivot);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemRelaxedEntry");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemRelaxedEntry_Params Parms{};

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = std::move(Parms.ItemRelaxedEntry);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSwimJumpStart");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSwimJumpStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = std::move(Parms.ItemSwimJumpStart);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSwimJumpStartLoop");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSwimJumpStartLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = std::move(Parms.ItemSwimJumpStartLoop);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSwimJumpFallLoop");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSwimJumpFallLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = std::move(Parms.ItemSwimJumpFallLoop);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = std::move(Parms.ItemSwimJumpSurfaceLoop);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = std::move(Parms.ItemSwimJumpSurfaceEnd);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UHighTower_Wasabi_LayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "AnimGraph");

	Params::UHighTower_Wasabi_LayerAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function HighTower_Wasabi_LayerAnimBP.HighTower_Wasabi_LayerAnimBP_C.ExecuteUbergraph_HighTower_Wasabi_LayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHighTower_Wasabi_LayerAnimBP_C::ExecuteUbergraph_HighTower_Wasabi_LayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HighTower_Wasabi_LayerAnimBP_C", "ExecuteUbergraph_HighTower_Wasabi_LayerAnimBP");

	Params::UHighTower_Wasabi_LayerAnimBP_C_ExecuteUbergraph_HighTower_Wasabi_LayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


