
#include "../SDK.h"

// Name: Arise, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CanStrikeAttackDown
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::CanStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CanStrikeAttackDown");

	UBP_BUS_GIN_000_C_CanStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CoreMaterialInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::CoreMaterialInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.CoreMaterialInitialize");

	UBP_BUS_GIN_000_C_CoreMaterialInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetInsID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::SetInsID()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetInsID");

	UBP_BUS_GIN_000_C_SetInsID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::UpdateCore(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCore");

	UBP_BUS_GIN_000_C_UpdateCore_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetCoreBreak
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         RecieveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_BUS_GIN_000_C::SetCoreBreak(class USceneComponent* RecieveCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetCoreBreak");

	UBP_BUS_GIN_000_C_SetCoreBreak_Params params;
	params.RecieveCollision = RecieveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnReceiveDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UShapeComponent*         AttackerCollision              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            ArtsData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::OnReceiveDamage(class ABtlCharacterBase* Attacker, class UShapeComponent* AttackerCollision, const struct FBtlArtsData& ArtsData, class UBtlSphereComponent* ReceiveCollision, int Damage, bool IsCoreBreak, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnReceiveDamage");

	UBP_BUS_GIN_000_C_OnReceiveDamage_Params params;
	params.Attacker = Attacker;
	params.AttackerCollision = AttackerCollision;
	params.ArtsData = ArtsData;
	params.ReceiveCollision = ReceiveCollision;
	params.Damage = Damage;
	params.IsCoreBreak = IsCoreBreak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.IsSpecialDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::IsSpecialDown(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.IsSpecialDown");

	UBP_BUS_GIN_000_C_IsSpecialDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enable != nullptr)
		*Enable = params.Enable;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsHum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::ArtsHum()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsHum");

	UBP_BUS_GIN_000_C_ArtsHum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsBladeHit_Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::ArtsBladeHit_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ArtsBladeHit_Initialize");

	UBP_BUS_GIN_000_C_ArtsBladeHit_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCheckSpecialDown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       BtlUnitAttacker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCoreBreak                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBtlArtsData            BtlArtsData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class USceneComponent*         RecieveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsReactionOverride             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::UpdateCheckSpecialDown(class ABtlCharacterBase* BtlUnitAttacker, bool IsCoreBreak, const struct FBtlArtsData& BtlArtsData, class USceneComponent* RecieveCollision, bool* IsReactionOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.UpdateCheckSpecialDown");

	UBP_BUS_GIN_000_C_UpdateCheckSpecialDown_Params params;
	params.BtlUnitAttacker = BtlUnitAttacker;
	params.IsCoreBreak = IsCoreBreak;
	params.BtlArtsData = BtlArtsData;
	params.RecieveCollision = RecieveCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReactionOverride != nullptr)
		*IsReactionOverride = params.IsReactionOverride;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.BtlUnitSetDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlUnitScript*          򠸖񸰄�0                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsForward                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::BtlUnitSetDown(class UBtlUnitScript* 򠸖񸰄�0, bool IsForward, float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.BtlUnitSetDown");

	UBP_BUS_GIN_000_C_BtlUnitSetDown_Params params;
	params.򠸖񸰄�0 = 򠸖񸰄�0;
	params.IsForward = IsForward;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetUniqueDownHpInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::SetUniqueDownHpInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.SetUniqueDownHpInitialize");

	UBP_BUS_GIN_000_C_SetUniqueDownHpInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyBegin
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::OnFlexibleNotifyBegin(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyBegin");

	UBP_BUS_GIN_000_C_OnFlexibleNotifyBegin_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::OnTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnTick");

	UBP_BUS_GIN_000_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDeadCinematicEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::OnDeadCinematicEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDeadCinematicEvent");

	UBP_BUS_GIN_000_C_OnDeadCinematicEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnGiveDamage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UShapeComponent*         AttackCollision                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBtlArtsData            AttackArts                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABtlCharacterBase*       ReceiveUnit                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBtlSphereComponent*     ReceiveCollision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::OnGiveDamage(class UShapeComponent* AttackCollision, const struct FBtlArtsData& AttackArts, class ABtlCharacterBase* ReceiveUnit, class UBtlSphereComponent* ReceiveCollision, int Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnGiveDamage");

	UBP_BUS_GIN_000_C_OnGiveDamage_Params params;
	params.AttackCollision = AttackCollision;
	params.AttackArts = AttackArts;
	params.ReceiveUnit = ReceiveUnit;
	params.ReceiveCollision = ReceiveCollision;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnWaitDeathStrokeBegin
// (Event, Public, BlueprintEvent)

void UBP_BUS_GIN_000_C::OnWaitDeathStrokeBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnWaitDeathStrokeBegin");

	UBP_BUS_GIN_000_C_OnWaitDeathStrokeBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDead
// (Event, Public, BlueprintEvent)

void UBP_BUS_GIN_000_C::OnDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnDead");

	UBP_BUS_GIN_000_C_OnDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BUS_GIN_000_C::OnBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnBeginPlay");

	UBP_BUS_GIN_000_C_OnBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnEndStrikeSmash
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FBtlStrikeSmashEndParam Param                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_BUS_GIN_000_C::OnEndStrikeSmash(const struct FBtlStrikeSmashEndParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnEndStrikeSmash");

	UBP_BUS_GIN_000_C_OnEndStrikeSmash_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyEnd
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int                            UserInteger                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UserFloat                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UserString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FLinearColor            UserColor                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UObject*                 UserObject                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::OnFlexibleNotifyEnd(int UserInteger, float UserFloat, const struct FString& UserString, const struct FLinearColor& UserColor, class UObject* UserObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnFlexibleNotifyEnd");

	UBP_BUS_GIN_000_C_OnFlexibleNotifyEnd_Params params;
	params.UserInteger = UserInteger;
	params.UserFloat = UserFloat;
	params.UserString = UserString;
	params.UserColor = UserColor;
	params.UserObject = UserObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnCoreReborn
// (BlueprintCallable, BlueprintEvent)

void UBP_BUS_GIN_000_C::OnCoreReborn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.OnCoreReborn");

	UBP_BUS_GIN_000_C_OnCoreReborn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ReceiveOnStrikeAttackDown
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlCharacterBase*       Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ArtsLabel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::ReceiveOnStrikeAttackDown(class ABtlCharacterBase* Attacker, const struct FName& ArtsLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ReceiveOnStrikeAttackDown");

	UBP_BUS_GIN_000_C_ReceiveOnStrikeAttackDown_Params params;
	params.Attacker = Attacker;
	params.ArtsLabel = ArtsLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ExecuteUbergraph_BP_BUS_GIN_000
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_BUS_GIN_000_C::ExecuteUbergraph_BP_BUS_GIN_000(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BUS_GIN_000.BP_BUS_GIN_000_C.ExecuteUbergraph_BP_BUS_GIN_000");

	UBP_BUS_GIN_000_C_ExecuteUbergraph_BP_BUS_GIN_000_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
