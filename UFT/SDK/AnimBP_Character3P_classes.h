#pragma once

// Name: AimGods, Version: Beta 2


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_Character3P.AnimBP_Character3P_C
// 0x10AD (FullSize[0x1315] - InheritedSize[0x0268])
class UAnimBP_Character3P_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_WY2F[0x8];                                     // 0x0268(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0C0304664E5D637E777F8F82B80BDD47;       // 0x0278(0x0030)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415; // 0x02A8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6; // 0x02D0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FE38FD5849537D563BBC8C949FA5523C; // 0x02F8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B; // 0x0320(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78C3746B4C10022D609AD6A27618D2ED; // 0x0348(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_58EDEBE34160C294191EBFAB9F63A3B7; // 0x0370(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993; // 0x0398(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490; // 0x03C0(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A; // 0x03E8(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_307FC4CC48F85A1320F2F5B9C76A92A8; // 0x0410(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2FA68D046B28AF86B5CBAA099FA056F; // 0x0438(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E; // 0x0460(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5C6D350441E998F44093C798BB4C071C; // 0x0488(0x0028)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3163F8234400D90A8D5A4494801CFE23; // 0x04B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3D2880714B0ADC658ADEEDB224583334; // 0x04D8(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D6C151D6499F347318762592E6493AA7; // 0x0550(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C87207284A14F873B3B0A9870EC61AE6; // 0x0580(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7526BB6B4EE01A9053D7E5A531E00418; // 0x05F8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C6840A414E888EE73F8F539647D22D1E; // 0x0628(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_4664B17F4CB02F4B6A675C8868CAFEA8; // 0x0708(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2D643BA4C3600B1D9D7D8A75F5F8A1F; // 0x0738(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_923A2E92452270AE79162487AF01084E; // 0x07B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C0BEA184A4517BE4A73F6B8B18270A7; // 0x07E0(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EB35F24F40F27C351EA7A7914C563941; // 0x0858(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D8DBE5F9406EA7D3F0C5D8BC456AE6B6; // 0x0888(0x0078)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2CECE82A42D9A4C2879D88A5ECEE39CB; // 0x0900(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1995CFFC4E4C2C5D00C8549266C69DEE; // 0x0930(0x00E0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5925BA954F8CE550AF7F2186CB70990D; // 0x0A10(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD21F2574F606D48D79179B2C8B9494C; // 0x0A40(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EB6B45254644A8897A02D1917D8BC39C; // 0x0AF0(0x00B8)
	unsigned char                                      UnknownData_LH0G[0x8];                                     // 0x0BA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_F263D9D24B8127A43726CDA7E9FCCC23;     // 0x0BB0(0x0190)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3F66AD02436A56A2552255914BC48656; // 0x0D40(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_779027B94FAE5348F3A38C9B284E3042; // 0x0D60(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4E72FF504FFA74DD23C13881F9CDB83F; // 0x0E18(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E71FEB6543525574D8F38FB32055CE2F; // 0x0E38(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3F953753436521F56659AB81DBDEBA9B; // 0x0E60(0x0028)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_94FE38364AAA98F13743108CE6309ED4; // 0x0E88(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A796E4D478AD69E17B384B6670E7395;       // 0x0F48(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A86CBACE4064A0BE474E15AAA061B003; // 0x0F90(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_87EE42194E1242B357B2A8B3DCF57677; // 0x1048(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_133DE9DE4522A4B0C465D6B6B2B3DD51; // 0x1070(0x0188)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24D25C2E4DF69448F986F788E2EAED7C; // 0x11F8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4C44D6404DD0BCFA00778EA0BB10452E;       // 0x1270(0x0048)
	float                                              Speed;                                                     // 0x12B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Direction;                                                 // 0x12BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enable_Jump;                                               // 0x12C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Jumping;                                                   // 0x12C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Crouching;                                                 // 0x12C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ZTP[0x5];                                     // 0x12C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAGWeapon*                                   Weapon;                                                    // 0x12C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AGCharacter_C*                           Character;                                                 // 0x12D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ODXU[0x8];                                     // 0x12D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WeaponGripTransform;                                       // 0x12E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              AimPitch;                                                  // 0x1310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDead;                                                    // 0x1314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Character3P.AnimBP_Character3P_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void Can_Jump(bool Should_Jump, bool* bJumping);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_D25429B644E6C66D625827BA5AE5F04E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_1F0CA7D54F1926766F307EBD0A3AE5E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_315E9BF04EA579C328EB6A866B91C07A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_24E37AE040B13DA63FCEF0AE5F5F1415();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_65693E2D4AACC1AD08E80C8AE9060490();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_4AAD4A594EABD4F92E1D44BBD3F4830B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Character3P_AnimGraphNode_TransitionResult_F13AB6764EBE8335385B039A555B9993();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Get_Weapon_IK_Transform();
	void Get_Aim_Offsets();
	void ExecuteUbergraph_AnimBP_Character3P(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
