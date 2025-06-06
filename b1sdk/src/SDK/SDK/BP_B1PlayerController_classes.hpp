#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_B1PlayerController

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_B1PlayerController.BP_B1PlayerController_C
// 0x0008 (0x0800 - 0x07F8)
class ABP_B1PlayerController_C final : public ABGP_PlayerControllerB1
{
public:
	class UBGULocalFluid2DComponent*              BGULocalFluid2D;                                   // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_B1PlayerController_C">();
	}
	static class ABP_B1PlayerController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_B1PlayerController_C>();
	}
};
//static_assert(alignof(ABP_B1PlayerController_C) == 0x000008, "Wrong alignment on ABP_B1PlayerController_C");
//static_assert(sizeof(ABP_B1PlayerController_C) == 0x000800, "Wrong size on ABP_B1PlayerController_C");
//static_assert(offsetof(ABP_B1PlayerController_C, BGULocalFluid2D) == 0x0007F8, "Member 'ABP_B1PlayerController_C::BGULocalFluid2D' has a wrong offset!");

}

