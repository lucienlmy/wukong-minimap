#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_wukong_bajiaoshan_tornado_bullet_big

#include "Basic.hpp"

#include "b1MinusManaged_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_wukong_bajiaoshan_tornado_bullet_big.BP_wukong_bajiaoshan_tornado_bullet_big_C
// 0x0010 (0x0348 - 0x0338)
class ABP_wukong_bajiaoshan_tornado_bullet_big_C final : public ABGUBulletBaseManaged
{
public:
	class UCapsuleComponent*                      CheckComp_Capsule;                                 // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_wukong_bajiaoshan_tornado_bullet_big_C">();
	}
	static class ABP_wukong_bajiaoshan_tornado_bullet_big_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_wukong_bajiaoshan_tornado_bullet_big_C>();
	}
};
//static_assert(alignof(ABP_wukong_bajiaoshan_tornado_bullet_big_C) == 0x000008, "Wrong alignment on ABP_wukong_bajiaoshan_tornado_bullet_big_C");
//static_assert(sizeof(ABP_wukong_bajiaoshan_tornado_bullet_big_C) == 0x000348, "Wrong size on ABP_wukong_bajiaoshan_tornado_bullet_big_C");
//static_assert(offsetof(ABP_wukong_bajiaoshan_tornado_bullet_big_C, CheckComp_Capsule) == 0x000338, "Member 'ABP_wukong_bajiaoshan_tornado_bullet_big_C::CheckComp_Capsule' has a wrong offset!");
//static_assert(offsetof(ABP_wukong_bajiaoshan_tornado_bullet_big_C, Niagara) == 0x000340, "Member 'ABP_wukong_bajiaoshan_tornado_bullet_big_C::Niagara' has a wrong offset!");

}

