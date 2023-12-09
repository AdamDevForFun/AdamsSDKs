#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Landscape.ControlPointMeshComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UControlPointMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlPointMeshComponent");

	return Clss;
}


// ControlPointMeshComponent Landscape.Default__ControlPointMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControlPointMeshComponent* UControlPointMeshComponent::GetDefaultObj()
{
	static class UControlPointMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlPointMeshComponent*>(UControlPointMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeComponent");

	return Clss;
}


// LandscapeComponent Landscape.Default__LandscapeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeComponent* ULandscapeComponent::GetDefaultObj()
{
	static class ULandscapeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeComponent*>(ULandscapeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGizmoActor
// (Actor)

class UClass* ALandscapeGizmoActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoActor");

	return Clss;
}


// LandscapeGizmoActor Landscape.Default__LandscapeGizmoActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeGizmoActor* ALandscapeGizmoActor::GetDefaultObj()
{
	static class ALandscapeGizmoActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeGizmoActor*>(ALandscapeGizmoActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGizmoActiveActor
// (Actor)

class UClass* ALandscapeGizmoActiveActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoActiveActor");

	return Clss;
}


// LandscapeGizmoActiveActor Landscape.Default__LandscapeGizmoActiveActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeGizmoActiveActor* ALandscapeGizmoActiveActor::GetDefaultObj()
{
	static class ALandscapeGizmoActiveActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeGizmoActiveActor*>(ALandscapeGizmoActiveActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGizmoRenderComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeGizmoRenderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGizmoRenderComponent");

	return Clss;
}


// LandscapeGizmoRenderComponent Landscape.Default__LandscapeGizmoRenderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeGizmoRenderComponent* ULandscapeGizmoRenderComponent::GetDefaultObj()
{
	static class ULandscapeGizmoRenderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeGizmoRenderComponent*>(ULandscapeGizmoRenderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeGrassType
// (None)

class UClass* ULandscapeGrassType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeGrassType");

	return Clss;
}


// LandscapeGrassType Landscape.Default__LandscapeGrassType
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeGrassType* ULandscapeGrassType::GetDefaultObj()
{
	static class ULandscapeGrassType* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeGrassType*>(ULandscapeGrassType::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeHeightfieldCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeHeightfieldCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeHeightfieldCollisionComponent");

	return Clss;
}


// LandscapeHeightfieldCollisionComponent Landscape.Default__LandscapeHeightfieldCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeHeightfieldCollisionComponent* ULandscapeHeightfieldCollisionComponent::GetDefaultObj()
{
	static class ULandscapeHeightfieldCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeHeightfieldCollisionComponent*>(ULandscapeHeightfieldCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshCollisionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeMeshCollisionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshCollisionComponent");

	return Clss;
}


// LandscapeMeshCollisionComponent Landscape.Default__LandscapeMeshCollisionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMeshCollisionComponent* ULandscapeMeshCollisionComponent::GetDefaultObj()
{
	static class ULandscapeMeshCollisionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMeshCollisionComponent*>(ULandscapeMeshCollisionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeInfo
// (None)

class UClass* ULandscapeInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeInfo");

	return Clss;
}


// LandscapeInfo Landscape.Default__LandscapeInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeInfo* ULandscapeInfo::GetDefaultObj()
{
	static class ULandscapeInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeInfo*>(ULandscapeInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeInfoMap
// (None)

class UClass* ULandscapeInfoMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeInfoMap");

	return Clss;
}


// LandscapeInfoMap Landscape.Default__LandscapeInfoMap
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeInfoMap* ULandscapeInfoMap::GetDefaultObj()
{
	static class ULandscapeInfoMap* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeInfoMap*>(ULandscapeInfoMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeLayerInfoObject
// (None)

class UClass* ULandscapeLayerInfoObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeLayerInfoObject");

	return Clss;
}


// LandscapeLayerInfoObject Landscape.Default__LandscapeLayerInfoObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeLayerInfoObject* ULandscapeLayerInfoObject::GetDefaultObj()
{
	static class ULandscapeLayerInfoObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeLayerInfoObject*>(ULandscapeLayerInfoObject::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMaterialInstanceConstant
// (None)

class UClass* ULandscapeMaterialInstanceConstant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMaterialInstanceConstant");

	return Clss;
}


// LandscapeMaterialInstanceConstant Landscape.Default__LandscapeMaterialInstanceConstant
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMaterialInstanceConstant* ULandscapeMaterialInstanceConstant::GetDefaultObj()
{
	static class ULandscapeMaterialInstanceConstant* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMaterialInstanceConstant*>(ULandscapeMaterialInstanceConstant::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshProxyActor
// (Actor)

class UClass* ALandscapeMeshProxyActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshProxyActor");

	return Clss;
}


// LandscapeMeshProxyActor Landscape.Default__LandscapeMeshProxyActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeMeshProxyActor* ALandscapeMeshProxyActor::GetDefaultObj()
{
	static class ALandscapeMeshProxyActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeMeshProxyActor*>(ALandscapeMeshProxyActor::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeMeshProxyComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* ULandscapeMeshProxyComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeMeshProxyComponent");

	return Clss;
}


// LandscapeMeshProxyComponent Landscape.Default__LandscapeMeshProxyComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeMeshProxyComponent* ULandscapeMeshProxyComponent::GetDefaultObj()
{
	static class ULandscapeMeshProxyComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeMeshProxyComponent*>(ULandscapeMeshProxyComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeProxy
// (Actor)

class UClass* ALandscapeProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeProxy");

	return Clss;
}


// LandscapeProxy Landscape.Default__LandscapeProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeProxy* ALandscapeProxy::GetDefaultObj()
{
	static class ALandscapeProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeProxy*>(ALandscapeProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*            InSplineComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartSideFalloff                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndSideFalloff                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartRoll                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndRoll                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumSubdivisions                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRaiseHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLowerHeights                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULandscapeLayerInfoObject*   PaintLayer                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "EditorApplySpline");

	Params::ALandscapeProxy_EditorApplySpline_Params Parms{};

	Parms.InSplineComponent = InSplineComponent;
	Parms.StartWidth = StartWidth;
	Parms.EndWidth = EndWidth;
	Parms.StartSideFalloff = StartSideFalloff;
	Parms.EndSideFalloff = EndSideFalloff;
	Parms.StartRoll = StartRoll;
	Parms.EndRoll = EndRoll;
	Parms.NumSubdivisions = NumSubdivisions;
	Parms.bRaiseHeights = bRaiseHeights;
	Parms.bLowerHeights = bLowerHeights;
	Parms.PaintLayer = PaintLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InLODDistanceFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LandscapeProxy", "ChangeLODDistanceFactor");

	Params::ALandscapeProxy_ChangeLODDistanceFactor_Params Parms{};

	Parms.InLODDistanceFactor = InLODDistanceFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Landscape.Landscape
// (Actor)

class UClass* ALandscape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Landscape");

	return Clss;
}


// Landscape Landscape.Default__Landscape
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscape* ALandscape::GetDefaultObj()
{
	static class ALandscape* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscape*>(ALandscape::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeStreamingProxy
// (Actor)

class UClass* ALandscapeStreamingProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeStreamingProxy");

	return Clss;
}


// LandscapeStreamingProxy Landscape.Default__LandscapeStreamingProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class ALandscapeStreamingProxy* ALandscapeStreamingProxy::GetDefaultObj()
{
	static class ALandscapeStreamingProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ALandscapeStreamingProxy*>(ALandscapeStreamingProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplinesComponent
// (SceneComponent, PrimitiveComponent)

class UClass* ULandscapeSplinesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplinesComponent");

	return Clss;
}


// LandscapeSplinesComponent Landscape.Default__LandscapeSplinesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplinesComponent* ULandscapeSplinesComponent::GetDefaultObj()
{
	static class ULandscapeSplinesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplinesComponent*>(ULandscapeSplinesComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineSegment
// (None)

class UClass* ULandscapeSplineSegment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineSegment");

	return Clss;
}


// LandscapeSplineSegment Landscape.Default__LandscapeSplineSegment
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplineSegment* ULandscapeSplineSegment::GetDefaultObj()
{
	static class ULandscapeSplineSegment* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplineSegment*>(ULandscapeSplineSegment::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.LandscapeSplineControlPoint
// (None)

class UClass* ULandscapeSplineControlPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandscapeSplineControlPoint");

	return Clss;
}


// LandscapeSplineControlPoint Landscape.Default__LandscapeSplineControlPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class ULandscapeSplineControlPoint* ULandscapeSplineControlPoint::GetDefaultObj()
{
	static class ULandscapeSplineControlPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandscapeSplineControlPoint*>(ULandscapeSplineControlPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// (None)

class UClass* UMaterialExpressionLandscapeGrassOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeGrassOutput");

	return Clss;
}


// MaterialExpressionLandscapeGrassOutput Landscape.Default__MaterialExpressionLandscapeGrassOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeGrassOutput* UMaterialExpressionLandscapeGrassOutput::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeGrassOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeGrassOutput*>(UMaterialExpressionLandscapeGrassOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// (None)

class UClass* UMaterialExpressionLandscapeLayerBlend::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerBlend");

	return Clss;
}


// MaterialExpressionLandscapeLayerBlend Landscape.Default__MaterialExpressionLandscapeLayerBlend
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerBlend* UMaterialExpressionLandscapeLayerBlend::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerBlend* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerBlend*>(UMaterialExpressionLandscapeLayerBlend::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// (None)

class UClass* UMaterialExpressionLandscapeLayerCoords::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerCoords");

	return Clss;
}


// MaterialExpressionLandscapeLayerCoords Landscape.Default__MaterialExpressionLandscapeLayerCoords
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerCoords* UMaterialExpressionLandscapeLayerCoords::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerCoords* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerCoords*>(UMaterialExpressionLandscapeLayerCoords::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerSample
// (None)

class UClass* UMaterialExpressionLandscapeLayerSample::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSample");

	return Clss;
}


// MaterialExpressionLandscapeLayerSample Landscape.Default__MaterialExpressionLandscapeLayerSample
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerSample* UMaterialExpressionLandscapeLayerSample::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerSample* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerSample*>(UMaterialExpressionLandscapeLayerSample::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// (None)

class UClass* UMaterialExpressionLandscapeLayerSwitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerSwitch");

	return Clss;
}


// MaterialExpressionLandscapeLayerSwitch Landscape.Default__MaterialExpressionLandscapeLayerSwitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerSwitch* UMaterialExpressionLandscapeLayerSwitch::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerSwitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerSwitch*>(UMaterialExpressionLandscapeLayerSwitch::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// (None)

class UClass* UMaterialExpressionLandscapeLayerWeight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeLayerWeight");

	return Clss;
}


// MaterialExpressionLandscapeLayerWeight Landscape.Default__MaterialExpressionLandscapeLayerWeight
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeLayerWeight* UMaterialExpressionLandscapeLayerWeight::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeLayerWeight* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeLayerWeight*>(UMaterialExpressionLandscapeLayerWeight::StaticClass()->DefaultObject);

	return Default;
}


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// (None)

class UClass* UMaterialExpressionLandscapeVisibilityMask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MaterialExpressionLandscapeVisibilityMask");

	return Clss;
}


// MaterialExpressionLandscapeVisibilityMask Landscape.Default__MaterialExpressionLandscapeVisibilityMask
// (Public, ClassDefaultObject, ArchetypeObject)

class UMaterialExpressionLandscapeVisibilityMask* UMaterialExpressionLandscapeVisibilityMask::GetDefaultObj()
{
	static class UMaterialExpressionLandscapeVisibilityMask* Default = nullptr;

	if (!Default)
		Default = static_cast<UMaterialExpressionLandscapeVisibilityMask*>(UMaterialExpressionLandscapeVisibilityMask::StaticClass()->DefaultObject);

	return Default;
}

}


