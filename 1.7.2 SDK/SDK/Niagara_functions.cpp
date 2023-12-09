#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Niagara.NiagaraActor
// (Actor)

class UClass* ANiagaraActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraActor");

	return Clss;
}


// NiagaraActor Niagara.Default__NiagaraActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ANiagaraActor* ANiagaraActor::GetDefaultObj()
{
	static class ANiagaraActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ANiagaraActor*>(ANiagaraActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UNiagaraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraComponent");

	return Clss;
}


// NiagaraComponent Niagara.Default__NiagaraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraComponent* UNiagaraComponent::GetDefaultObj()
{
	static class UNiagaraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraComponent*>(UNiagaraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterface
// (None)

class UClass* UNiagaraDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterface");

	return Clss;
}


// NiagaraDataInterface Niagara.Default__NiagaraDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterface* UNiagaraDataInterface::GetDefaultObj()
{
	static class UNiagaraDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterface*>(UNiagaraDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceCurve
// (None)

class UClass* UNiagaraDataInterfaceCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");

	return Clss;
}


// NiagaraDataInterfaceCurve Niagara.Default__NiagaraDataInterfaceCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceCurve* UNiagaraDataInterfaceCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceCurve*>(UNiagaraDataInterfaceCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceVectorCurve
// (None)

class UClass* UNiagaraDataInterfaceVectorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");

	return Clss;
}


// NiagaraDataInterfaceVectorCurve Niagara.Default__NiagaraDataInterfaceVectorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceVectorCurve* UNiagaraDataInterfaceVectorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceVectorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceVectorCurve*>(UNiagaraDataInterfaceVectorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraDataInterfaceColorCurve
// (None)

class UClass* UNiagaraDataInterfaceColorCurve::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");

	return Clss;
}


// NiagaraDataInterfaceColorCurve Niagara.Default__NiagaraDataInterfaceColorCurve
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraDataInterfaceColorCurve* UNiagaraDataInterfaceColorCurve::GetDefaultObj()
{
	static class UNiagaraDataInterfaceColorCurve* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraDataInterfaceColorCurve*>(UNiagaraDataInterfaceColorCurve::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEffect
// (None)

class UClass* UNiagaraEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEffect");

	return Clss;
}


// NiagaraEffect Niagara.Default__NiagaraEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEffect* UNiagaraEffect::GetDefaultObj()
{
	static class UNiagaraEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEffect*>(UNiagaraEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEffectRendererProperties
// (None)

class UClass* UNiagaraEffectRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEffectRendererProperties");

	return Clss;
}


// NiagaraEffectRendererProperties Niagara.Default__NiagaraEffectRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEffectRendererProperties* UNiagaraEffectRendererProperties::GetDefaultObj()
{
	static class UNiagaraEffectRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEffectRendererProperties*>(UNiagaraEffectRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraMeshRendererProperties
// (None)

class UClass* UNiagaraMeshRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");

	return Clss;
}


// NiagaraMeshRendererProperties Niagara.Default__NiagaraMeshRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraMeshRendererProperties* UNiagaraMeshRendererProperties::GetDefaultObj()
{
	static class UNiagaraMeshRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraMeshRendererProperties*>(UNiagaraMeshRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraRibbonRendererProperties
// (None)

class UClass* UNiagaraRibbonRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");

	return Clss;
}


// NiagaraRibbonRendererProperties Niagara.Default__NiagaraRibbonRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraRibbonRendererProperties* UNiagaraRibbonRendererProperties::GetDefaultObj()
{
	static class UNiagaraRibbonRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraRibbonRendererProperties*>(UNiagaraRibbonRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSpriteRendererProperties
// (None)

class UClass* UNiagaraSpriteRendererProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");

	return Clss;
}


// NiagaraSpriteRendererProperties Niagara.Default__NiagaraSpriteRendererProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSpriteRendererProperties* UNiagaraSpriteRendererProperties::GetDefaultObj()
{
	static class UNiagaraSpriteRendererProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSpriteRendererProperties*>(UNiagaraSpriteRendererProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraScript
// (None)

class UClass* UNiagaraScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScript");

	return Clss;
}


// NiagaraScript Niagara.Default__NiagaraScript
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScript* UNiagaraScript::GetDefaultObj()
{
	static class UNiagaraScript* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScript*>(UNiagaraScript::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction
// (None)

class UClass* UNiagaraEventReceiverEmitterAction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");

	return Clss;
}


// NiagaraEventReceiverEmitterAction Niagara.Default__NiagaraEventReceiverEmitterAction
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction* UNiagaraEventReceiverEmitterAction::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction*>(UNiagaraEventReceiverEmitterAction::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// (None)

class UClass* UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");

	return Clss;
}


// NiagaraEventReceiverEmitterAction_SpawnParticles Niagara.Default__NiagaraEventReceiverEmitterAction_SpawnParticles
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEventReceiverEmitterAction_SpawnParticles* UNiagaraEventReceiverEmitterAction_SpawnParticles::GetDefaultObj()
{
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEventReceiverEmitterAction_SpawnParticles*>(UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraEmitterProperties
// (None)

class UClass* UNiagaraEmitterProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraEmitterProperties");

	return Clss;
}


// NiagaraEmitterProperties Niagara.Default__NiagaraEmitterProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraEmitterProperties* UNiagaraEmitterProperties::GetDefaultObj()
{
	static class UNiagaraEmitterProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraEmitterProperties*>(UNiagaraEmitterProperties::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraFunctionLibrary
// (None)

class UClass* UNiagaraFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraFunctionLibrary");

	return Clss;
}


// NiagaraFunctionLibrary Niagara.Default__NiagaraFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraFunctionLibrary* UNiagaraFunctionLibrary::GetDefaultObj()
{
	static class UNiagaraFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraFunctionLibrary*>(UNiagaraFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraEffect*              EffectTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnEffectAttached");

	Params::UNiagaraFunctionLibrary_SpawnEffectAttached_Params Parms{};

	Parms.EffectTemplate = EffectTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraEffect*              EffectTemplate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnEffectAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EffectTemplate = EffectTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bAutoDestroy = bAutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Niagara.NiagaraScriptSourceBase
// (None)

class UClass* UNiagaraScriptSourceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraScriptSourceBase");

	return Clss;
}


// NiagaraScriptSourceBase Niagara.Default__NiagaraScriptSourceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraScriptSourceBase* UNiagaraScriptSourceBase::GetDefaultObj()
{
	static class UNiagaraScriptSourceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraScriptSourceBase*>(UNiagaraScriptSourceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSequence
// (None)

class UClass* UNiagaraSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSequence");

	return Clss;
}


// NiagaraSequence Niagara.Default__NiagaraSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSequence* UNiagaraSequence::GetDefaultObj()
{
	static class UNiagaraSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSequence*>(UNiagaraSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class Niagara.NiagaraSettings
// (None)

class UClass* UNiagaraSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NiagaraSettings");

	return Clss;
}


// NiagaraSettings Niagara.Default__NiagaraSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNiagaraSettings* UNiagaraSettings::GetDefaultObj()
{
	static class UNiagaraSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNiagaraSettings*>(UNiagaraSettings::StaticClass()->DefaultObject);

	return Default;
}

}


