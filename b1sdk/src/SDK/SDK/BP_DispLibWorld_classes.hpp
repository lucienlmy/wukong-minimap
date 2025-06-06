#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DispLibWorld

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DispLibWorld.BP_DispLibWorld_C
// 0x0008 (0x02E0 - 0x02D8)
class ABP_DispLibWorld_C final : public ADispLibDispWorld
{
public:
	class USceneComponent*                        Scene;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DispLibWorld_C">();
	}
	static class ABP_DispLibWorld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DispLibWorld_C>();
	}
};
//static_assert(alignof(ABP_DispLibWorld_C) == 0x000008, "Wrong alignment on ABP_DispLibWorld_C");
//static_assert(sizeof(ABP_DispLibWorld_C) == 0x0002E0, "Wrong size on ABP_DispLibWorld_C");
//static_assert(offsetof(ABP_DispLibWorld_C, Scene) == 0x0002D8, "Member 'ABP_DispLibWorld_C::Scene' has a wrong offset!");

}

