#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RigVM.RigVM
// (None)

class UClass* URigVM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVM");

	return Clss;
}


// RigVM RigVM.Default__RigVM
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVM* URigVM::GetDefaultObj()
{
	static class URigVM* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVM*>(URigVM::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVM.SetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueVector2D(class FName& InParameterName, struct FVector2D& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector2D");

	Params::URigVM_SetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueVector(class FName& InParameterName, struct FVector& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector");

	Params::URigVM_SetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueTransform(class FName& InParameterName, struct FTransform& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueTransform");

	Params::URigVM_SetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueString(class FName& InParameterName, const class FString& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueString");

	Params::URigVM_SetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueQuat(class FName& InParameterName, struct FQuat& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueQuat");

	Params::URigVM_SetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueName(class FName& InParameterName, class FName& InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueName");

	Params::URigVM_SetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueInt(class FName& InParameterName, int32 InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueInt");

	Params::URigVM_SetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueFloat(class FName& InParameterName, float InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueFloat");

	Params::URigVM_SetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.SetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URigVM::SetParameterValueBool(class FName& InParameterName, bool InValue, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueBool");

	Params::URigVM_SetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InValue = InValue;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetRigVMFunctionName
// (Final, Native, Public, Const)
// Parameters:
// int32                              InFunctionIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URigVM::GetRigVMFunctionName(int32 InFunctionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetRigVMFunctionName");

	Params::URigVM_GetRigVMFunctionName_Params Parms{};

	Parms.InFunctionIndex = InFunctionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D URigVM::GetParameterValueVector2D(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector2D");

	Params::URigVM_GetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector URigVM::GetParameterValueVector(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector");

	Params::URigVM_GetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform URigVM::GetParameterValueTransform(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueTransform");

	Params::URigVM_GetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URigVM::GetParameterValueString(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueString");

	Params::URigVM_GetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FQuat URigVM::GetParameterValueQuat(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueQuat");

	Params::URigVM_GetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName URigVM::GetParameterValueName(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueName");

	Params::URigVM_GetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigVM::GetParameterValueInt(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueInt");

	Params::URigVM_GetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float URigVM::GetParameterValueFloat(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueFloat");

	Params::URigVM_GetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InArrayIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigVM::GetParameterValueBool(class FName& InParameterName, int32 InArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueBool");

	Params::URigVM_GetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InArrayIndex = InArrayIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterArraySize
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigVM::GetParameterArraySize(class FName& InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterArraySize");

	Params::URigVM_GetParameterArraySize_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.Execute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URigVM::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "Execute");

	Params::URigVM_Execute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.AddRigVMFunction
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UScriptStruct*               InRigVMStruct                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        InMethodName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 URigVM::AddRigVMFunction(class UScriptStruct* InRigVMStruct, class FName& InMethodName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "AddRigVMFunction");

	Params::URigVM_AddRigVMFunction_Params Parms{};

	Parms.InRigVMStruct = InRigVMStruct;
	Parms.InMethodName = InMethodName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


