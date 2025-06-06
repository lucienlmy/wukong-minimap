#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_OP_Check

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_UI_OP_Check.BP_UI_OP_Check_C.OnChildCheckStateChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_OP_Check_C_OnChildCheckStateChanged final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
//static_assert(alignof(BP_UI_OP_Check_C_OnChildCheckStateChanged) == 0x000001, "Wrong alignment on BP_UI_OP_Check_C_OnChildCheckStateChanged");
//static_assert(sizeof(BP_UI_OP_Check_C_OnChildCheckStateChanged) == 0x000001, "Wrong size on BP_UI_OP_Check_C_OnChildCheckStateChanged");
//static_assert(offsetof(BP_UI_OP_Check_C_OnChildCheckStateChanged, bIsChecked) == 0x000000, "Member 'BP_UI_OP_Check_C_OnChildCheckStateChanged::bIsChecked' has a wrong offset!");

// Function BP_UI_OP_Check.BP_UI_OP_Check_C.ExecuteUbergraph_BP_UI_OP_Check
// 0x0018 (0x0018 - 0x0000)
struct BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bIsChecked;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsChecked)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
};
//static_assert(alignof(BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check) == 0x000004, "Wrong alignment on BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check");
//static_assert(sizeof(BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check) == 0x000018, "Wrong size on BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check");
//static_assert(offsetof(BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check, EntryPoint) == 0x000000, "Member 'BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check::EntryPoint' has a wrong offset!");
//static_assert(offsetof(BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check, K2Node_CustomEvent_bIsChecked) == 0x000004, "Member 'BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check::K2Node_CustomEvent_bIsChecked' has a wrong offset!");
//static_assert(offsetof(BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_UI_OP_Check_C_ExecuteUbergraph_BP_UI_OP_Check::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

