#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_RoleLevel

#include "Basic.hpp"

#include "BI_RoleLevel_classes.hpp"
#include "BI_RoleLevel_parameters.hpp"


namespace SDK
{

// Function BI_RoleLevel.BI_RoleLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_RoleLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_RoleLevel_C", "PreConstruct");

	Params::BI_RoleLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_RoleLevel.BI_RoleLevel_C.ExecuteUbergraph_BI_RoleLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_RoleLevel_C::ExecuteUbergraph_BI_RoleLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_RoleLevel_C", "ExecuteUbergraph_BI_RoleLevel");

	Params::BI_RoleLevel_C_ExecuteUbergraph_BI_RoleLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

