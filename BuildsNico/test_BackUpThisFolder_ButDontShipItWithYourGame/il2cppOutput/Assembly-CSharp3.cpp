#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32>
struct Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>
struct Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.HashSet`1<UnityEngine.Mesh>
struct HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4;
// System.Collections.Generic.IEqualityComparer`1<nico.Articulo>
struct IEqualityComparer_1_tF616D0AF0DE5DDA0BB910F8BC00B945692646BFE;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<nico.Articulo,System.Int32>
struct KeyCollection_t11FFB7AEEB9D8163E89B25582811F580080C66ED;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4;
// System.Collections.Generic.List`1<QuickOutline/ListVector3>
struct List_1_t7FBFBBC361950D968531133B5E2BA4F9341E4F1A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<nico.Articulo,System.Int32>
struct ValueCollection_t9973BB25C565C0F3BDC108C2F2751DEED354A45B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<nico.Articulo,System.Int32>[]
struct EntryU5BU5D_tDFE3AB0A145D7CED017BEB16E9EA2963D706E85F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// nico.Articulo[]
struct ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// nico.InteractiveParent[]
struct InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// nico.BagInteractive
struct BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D;
// nico.BasketInteractive
struct BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC;
// nico.Baskets
struct Baskets_t7479E4E7C0C7705094252B762B61136D1EC917F1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// nico.Billete
struct Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52;
// nico.CirculoRojo
struct CirculoRojo_t11DF39ED6406D5A43A538CB6B8B872189B2337A8;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// nico.InteractiveParent
struct InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// nico.Metricas
struct Metricas_t6E4628848B60262750160839A49946CD4675C5D1;
// nico.MinimarketPuerta
struct MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// nico.Mostrador
struct Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB;
// nico.MostradorMovements
struct MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352;
// nico.MostradorPersona
struct MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// nico.ObjetosConstants
struct ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158;
// nico.PlayerActions
struct PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497;
// nico.PlayerBasket
struct PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D;
// nico.PlayerMovement
struct PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC;
// nico.PlayerMovementVR
struct PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1;
// nico.PlayerMovement_old
struct PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1;
// QuickOutline
struct QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// nico.Seleccionable
struct Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047;
// nico.SeleccionableBasket
struct SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC;
// Semaforo
struct Semaforo_t8BCB57A0638D63653443F58CFF0B2747E8C68AB6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// nico.TestManager
struct TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// nico.TutorialManager
struct TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// routeMarker
struct routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280;
// nico.MinimarketPuerta/End
struct End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B;
// routeMarker/EndSim
struct EndSim_t8DC6D6F02C993F75FE662D6F22EF7FB48A2368E6;

IL2CPP_EXTERN_C RuntimeClass* ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____F8DE7997E8AC90D3C2663774A9EA0E4C0064759737D3BF6342AB231751827327_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05B6E1B06FD4F804AABCF39A3DBC3C98ACA3BF71;
IL2CPP_EXTERN_C String_t* _stringLiteral0C99292C35F69BEF80CC4F3BE0D5664F2050F8D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A;
IL2CPP_EXTERN_C String_t* _stringLiteral43F60B7F51FCF02D53C154B8C764B88199A097CF;
IL2CPP_EXTERN_C String_t* _stringLiteral46AF9FBD36A3A65B9685474AEA7793508C600B6A;
IL2CPP_EXTERN_C String_t* _stringLiteral5282B2FB98742A47A86B5B4959E175B64702C55B;
IL2CPP_EXTERN_C String_t* _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D5ED969308836FAB01283C399918C21E06FD20;
IL2CPP_EXTERN_C String_t* _stringLiteralB1F996542C7088B15FDEEBD9BB62235DF3955CC5;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6BCC5CFB3FCF10B20D29D6217D0706DFBA5A23;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m8C3F6DCB864AE97F68252302E6AD57336E86105A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m52B4D489BCC9873046E7B0C631AF2BE36551C613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5B4AB9234E9B5AA8776F5A5E98BD96AADD36A445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA7AE8CA2DBFC2E8DAACD0B277E4B8BC724B05DC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m72D248ECAF2B0AF8EE7F3E4586BBB0CEF6CDF682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEEE30D933563208EBCF7F651BDC442631A5C6D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCB84750BAFE59C7D53C86B28A910BBE68DDE5D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m58E48C7A4B001DD9CC590DEF18D64A3D9E5E6F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756_m9283B997A10A36A25EF72B4E7EB72D424022A15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32>
struct Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDFE3AB0A145D7CED017BEB16E9EA2963D706E85F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t11FFB7AEEB9D8163E89B25582811F580080C66ED* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9973BB25C565C0F3BDC108C2F2751DEED354A45B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// nico.Metricas
struct Metricas_t6E4628848B60262750160839A49946CD4675C5D1  : public RuntimeObject
{
	// System.Single nico.Metricas::tiempo_total
	float ___tiempo_total_0;
	// System.Single nico.Metricas::tiempo_total_ida
	float ___tiempo_total_ida_1;
	// System.Single nico.Metricas::tiempo_total_vuelta
	float ___tiempo_total_vuelta_2;
	// System.Single nico.Metricas::tiempo_total_kiosko
	float ___tiempo_total_kiosko_3;
	// System.Single nico.Metricas::tiempo_total_canasto
	float ___tiempo_total_canasto_4;
	// System.Single nico.Metricas::tiempo_total_articulos
	float ___tiempo_total_articulos_5;
	// System.Single nico.Metricas::tiempo_total_caja
	float ___tiempo_total_caja_6;
	// System.Single nico.Metricas::tiempo_total_irse
	float ___tiempo_total_irse_7;
	// System.Single nico.Metricas::segundos_mirando_objetos_invalido
	float ___segundos_mirando_objetos_invalido_8;
	// System.Single nico.Metricas::segundos_mirando_objetos_lleno
	float ___segundos_mirando_objetos_lleno_9;
	// System.Int32 nico.Metricas::veces_recogido_objeto
	int32_t ___veces_recogido_objeto_10;
	// System.Int32 nico.Metricas::veces_devuelto_objeto
	int32_t ___veces_devuelto_objeto_11;
	// System.Int32 nico.Metricas::veces_marcado_billete
	int32_t ___veces_marcado_billete_12;
	// System.Int32 nico.Metricas::veces_devuelto_billete
	int32_t ___veces_devuelto_billete_13;
	// System.Single nico.Metricas::segundos_esperando_bolsa
	float ___segundos_esperando_bolsa_14;
	// System.Int32 nico.Metricas::vuelto_final
	int32_t ___vuelto_final_15;
	// System.Int32 nico.Metricas::veces_objeto_innecesario_recojido
	int32_t ___veces_objeto_innecesario_recojido_16;
	// System.Int32 nico.Metricas::veces_objeto_necesario_devuelto
	int32_t ___veces_objeto_necesario_devuelto_17;
	// System.Boolean nico.Metricas::irse_sin_bolsa
	bool ___irse_sin_bolsa_18;
	// System.Int32 nico.Metricas::numero_billetes_innecesarios
	int32_t ___numero_billetes_innecesarios_19;
	// System.Int32 nico.Metricas::articulos_validos
	int32_t ___articulos_validos_20;
	// System.Int32 nico.Metricas::contador_cruces_invalidos
	int32_t ___contador_cruces_invalidos_21;
	// System.Int32 nico.Metricas::contador_cruces_validos
	int32_t ___contador_cruces_validos_22;
	// System.Int32 nico.Metricas::contador_transita_calle
	int32_t ___contador_transita_calle_23;
	// System.Int32 nico.Metricas::cantidad_segmentos_ruta
	int32_t ___cantidad_segmentos_ruta_24;
	// System.Int32 nico.Metricas::cantidad_segmentos_ruta_transitados
	int32_t ___cantidad_segmentos_ruta_transitados_25;
	// System.Int32 nico.Metricas::cantidad_segmentos_no_ruta
	int32_t ___cantidad_segmentos_no_ruta_26;
	// System.Int32 nico.Metricas::cantidad_minima_billetes
	int32_t ___cantidad_minima_billetes_27;
	// nico.Articulo[] nico.Metricas::objetos
	ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* ___objetos_28;
};

// nico.ObjetosConstants
struct ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158  : public RuntimeObject
{
};

struct ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields
{
	// System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32> nico.ObjetosConstants::precios_articulos
	Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* ___precios_articulos_0;
	// System.Int32[] nico.ObjetosConstants::coins
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___coins_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792__padding[36];
	};
};
#pragma pack(pop, tp)

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
struct Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::F8DE7997E8AC90D3C2663774A9EA0E4C0064759737D3BF6342AB231751827327
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 ___F8DE7997E8AC90D3C2663774A9EA0E4C0064759737D3BF6342AB231751827327_0;
};

// nico.Articulo
struct Articulo_tA2E2C5A5D64C92CF1B693E434174496EC081D19F 
{
	// System.Int32 nico.Articulo::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// nico.MinimarketPuerta/End
struct End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// nico.InteractiveParent
struct InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QuickOutline nico.InteractiveParent::outline
	QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* ___outline_4;
	// System.Boolean nico.InteractiveParent::isCurrentlySelected
	bool ___isCurrentlySelected_5;
	// System.Single nico.InteractiveParent::selectCounter
	float ___selectCounter_6;
	// System.Single nico.InteractiveParent::selectTime
	float ___selectTime_7;
};

// nico.MinimarketPuerta
struct MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean nico.MinimarketPuerta::Eseldelinicio
	bool ___Eseldelinicio_4;
	// routeMarker nico.MinimarketPuerta::rm
	routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280* ___rm_5;
};

struct MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields
{
	// nico.MinimarketPuerta/End nico.MinimarketPuerta::endEvent
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* ___endEvent_6;
};

// nico.MostradorMovements
struct MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform nico.MostradorMovements::basketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___basketTransform_6;
	// UnityEngine.Transform nico.MostradorMovements::targetBasketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetBasketTransform_7;
	// UnityEngine.Transform nico.MostradorMovements::targetPlayerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetPlayerTransform_8;
	// System.Boolean nico.MostradorMovements::basketToBack
	bool ___basketToBack_9;
	// System.Boolean nico.MostradorMovements::basketToPreMostradorFlag
	bool ___basketToPreMostradorFlag_10;
	// System.Boolean nico.MostradorMovements::basketToMostradorFlag
	bool ___basketToMostradorFlag_11;
	// System.Boolean nico.MostradorMovements::basketToMostradorEndFlag
	bool ___basketToMostradorEndFlag_12;
	// System.Boolean nico.MostradorMovements::basketToPriceFlag
	bool ___basketToPriceFlag_13;
	// System.Boolean nico.MostradorMovements::basketToHideFlag
	bool ___basketToHideFlag_14;
	// System.Boolean nico.MostradorMovements::bagToMostradorFlag
	bool ___bagToMostradorFlag_15;
	// System.Boolean nico.MostradorMovements::bagToPlayerFlag
	bool ___bagToPlayerFlag_16;
	// System.Boolean nico.MostradorMovements::bagToShowFlag
	bool ___bagToShowFlag_17;
	// UnityEngine.Vector3 nico.MostradorMovements::ogBasketLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ogBasketLocalPos_18;
	// UnityEngine.Vector3 nico.MostradorMovements::basketHidePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketHidePos_19;
	// UnityEngine.Vector3 nico.MostradorMovements::basketPricePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketPricePos_20;
	// UnityEngine.Vector3 nico.MostradorMovements::bagPickupPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bagPickupPos_21;
	// UnityEngine.Quaternion nico.MostradorMovements::ogBasketLocalRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___ogBasketLocalRot_22;
};

struct MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields
{
	// nico.MostradorMovements nico.MostradorMovements::Instance
	MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352* ___Instance_4;
	// System.Single nico.MostradorMovements::scalar
	float ___scalar_5;
};

// nico.PlayerActions
struct PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single nico.PlayerActions::grabRange
	float ___grabRange_5;
	// nico.InteractiveParent[] nico.PlayerActions::interactiveHits
	InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* ___interactiveHits_7;
	// System.String[] nico.PlayerActions::layers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layers_8;
	// UnityEngine.Transform nico.PlayerActions::mainCameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCameraTransform_9;
};

struct PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields
{
	// nico.PlayerActions nico.PlayerActions::Instance
	PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497* ___Instance_4;
	// System.Single nico.PlayerActions::grabTime
	float ___grabTime_6;
};

// nico.PlayerBasket
struct PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 nico.PlayerBasket::maxArticulos
	int32_t ___maxArticulos_5;
	// UnityEngine.Transform nico.PlayerBasket::objectsTransformsParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectsTransformsParent_6;
	// UnityEngine.Transform[] nico.PlayerBasket::objectsTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___objectsTransforms_7;
	// nico.Articulo[] nico.PlayerBasket::objetos
	ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* ___objetos_8;
	// UnityEngine.Transform nico.PlayerBasket::basketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___basketTransform_9;
	// System.Boolean nico.PlayerBasket::hasBasket
	bool ___hasBasket_10;
};

struct PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields
{
	// nico.PlayerBasket nico.PlayerBasket::Instance
	PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* ___Instance_4;
};

// nico.PlayerMovement
struct PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean nico.PlayerMovement::vr
	bool ___vr_4;
	// System.Single nico.PlayerMovement::speed
	float ___speed_6;
	// System.Single nico.PlayerMovement::friccion
	float ___friccion_7;
	// System.Single nico.PlayerMovement::sensibility
	float ___sensibility_8;
	// UnityEngine.Vector3 nico.PlayerMovement::cameraLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraLookDirection_11;
	// UnityEngine.Vector3 nico.PlayerMovement::realLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___realLookDirection_12;
	// UnityEngine.Rigidbody nico.PlayerMovement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_13;
	// UnityEngine.Transform nico.PlayerMovement::cameraParentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraParentTransform_14;
	// UnityEngine.Transform nico.PlayerMovement::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_15;
	// UnityEngine.Transform nico.PlayerMovement::mainCameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCameraTransform_16;
	// UnityEngine.Transform nico.PlayerMovement::basketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___basketTransform_17;
	// UnityEngine.Vector3 nico.PlayerMovement::mostradorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mostradorPosition_20;
	// UnityEngine.Vector3 nico.PlayerMovement::ogBasketAnchorLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ogBasketAnchorLocalPos_21;
	// UnityEngine.Quaternion nico.PlayerMovement::ogBasketAnchorLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___ogBasketAnchorLocalRotation_22;
	// nico.BasketInteractive nico.PlayerMovement::basketInteractive
	BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* ___basketInteractive_23;
};

struct PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields
{
	// nico.PlayerMovement nico.PlayerMovement::Instance
	PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* ___Instance_5;
	// System.Boolean nico.PlayerMovement::isMoving
	bool ___isMoving_9;
	// System.Single nico.PlayerMovement::movementCooldown
	float ___movementCooldown_10;
	// System.Boolean nico.PlayerMovement::mostradorFlag
	bool ___mostradorFlag_18;
	// System.Boolean nico.PlayerMovement::isLocked
	bool ___isLocked_19;
};

// nico.PlayerMovementVR
struct PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean nico.PlayerMovementVR::vr
	bool ___vr_4;
	// System.Single nico.PlayerMovementVR::speed
	float ___speed_6;
	// System.Single nico.PlayerMovementVR::friccion
	float ___friccion_7;
	// System.Single nico.PlayerMovementVR::sensibility
	float ___sensibility_8;
	// UnityEngine.Vector3 nico.PlayerMovementVR::cameraLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraLookDirection_11;
	// UnityEngine.Vector3 nico.PlayerMovementVR::realLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___realLookDirection_12;
	// UnityEngine.Rigidbody nico.PlayerMovementVR::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_13;
	// UnityEngine.Transform nico.PlayerMovementVR::cameraParentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraParentTransform_14;
	// UnityEngine.Transform nico.PlayerMovementVR::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_15;
	// UnityEngine.Transform nico.PlayerMovementVR::mainCameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCameraTransform_16;
	// UnityEngine.Transform nico.PlayerMovementVR::basketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___basketTransform_17;
	// UnityEngine.Vector3 nico.PlayerMovementVR::mostradorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mostradorPosition_20;
	// UnityEngine.Vector3 nico.PlayerMovementVR::ogBasketAnchorLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ogBasketAnchorLocalPos_21;
	// UnityEngine.Quaternion nico.PlayerMovementVR::ogBasketAnchorLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___ogBasketAnchorLocalRotation_22;
	// nico.BasketInteractive nico.PlayerMovementVR::basketInteractive
	BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* ___basketInteractive_23;
};

struct PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields
{
	// nico.PlayerMovementVR nico.PlayerMovementVR::Instance
	PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* ___Instance_5;
	// System.Boolean nico.PlayerMovementVR::isMoving
	bool ___isMoving_9;
	// System.Single nico.PlayerMovementVR::movementCooldown
	float ___movementCooldown_10;
	// System.Boolean nico.PlayerMovementVR::mostradorFlag
	bool ___mostradorFlag_18;
	// System.Boolean nico.PlayerMovementVR::isLocked
	bool ___isLocked_19;
};

// nico.PlayerMovement_old
struct PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single nico.PlayerMovement_old::speed
	float ___speed_5;
	// System.Single nico.PlayerMovement_old::friccion
	float ___friccion_6;
	// System.Single nico.PlayerMovement_old::sensibility
	float ___sensibility_7;
	// UnityEngine.Vector3 nico.PlayerMovement_old::cameraLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraLookDirection_10;
	// UnityEngine.Vector3 nico.PlayerMovement_old::realLookDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___realLookDirection_11;
	// UnityEngine.Rigidbody nico.PlayerMovement_old::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_12;
	// UnityEngine.Transform nico.PlayerMovement_old::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_13;
	// UnityEngine.Transform nico.PlayerMovement_old::basketTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___basketTransform_14;
	// UnityEngine.Vector3 nico.PlayerMovement_old::mostradorPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mostradorPosition_17;
	// UnityEngine.Vector3 nico.PlayerMovement_old::ogBasketAnchorLocalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ogBasketAnchorLocalPos_18;
	// UnityEngine.Quaternion nico.PlayerMovement_old::ogBasketAnchorLocalRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___ogBasketAnchorLocalRotation_19;
	// nico.BasketInteractive nico.PlayerMovement_old::basketInteractive
	BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* ___basketInteractive_20;
};

struct PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields
{
	// nico.PlayerMovement_old nico.PlayerMovement_old::Instance
	PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* ___Instance_4;
	// System.Boolean nico.PlayerMovement_old::isMoving
	bool ___isMoving_8;
	// System.Single nico.PlayerMovement_old::movementCooldown
	float ___movementCooldown_9;
	// System.Boolean nico.PlayerMovement_old::mostradorFlag
	bool ___mostradorFlag_15;
	// System.Boolean nico.PlayerMovement_old::isLocked
	bool ___isLocked_16;
};

// QuickOutline
struct QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QuickOutline/Mode QuickOutline::outlineMode
	int32_t ___outlineMode_5;
	// UnityEngine.Color QuickOutline::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_6;
	// System.Single QuickOutline::outlineWidth
	float ___outlineWidth_7;
	// System.Boolean QuickOutline::precomputeOutline
	bool ___precomputeOutline_8;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> QuickOutline::bakeKeys
	List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___bakeKeys_9;
	// System.Collections.Generic.List`1<QuickOutline/ListVector3> QuickOutline::bakeValues
	List_1_t7FBFBBC361950D968531133B5E2BA4F9341E4F1A* ___bakeValues_10;
	// UnityEngine.Renderer[] QuickOutline::renderers
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers_11;
	// UnityEngine.Material QuickOutline::outlineMaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___outlineMaskMaterial_12;
	// UnityEngine.Material QuickOutline::outlineFillMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___outlineFillMaterial_13;
	// System.Boolean QuickOutline::needsUpdate
	bool ___needsUpdate_14;
};

struct QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.Mesh> QuickOutline::registeredMeshes
	HashSet_1_t8D851F00ECF2687086FCCC18EDD968A2DAEBDDB4* ___registeredMeshes_4;
};

// nico.TestManager
struct TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields
{
	// nico.TestManager nico.TestManager::Instance
	TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE* ___Instance_4;
	// nico.Metricas nico.TestManager::metricas
	Metricas_t6E4628848B60262750160839A49946CD4675C5D1* ___metricas_5;
	// System.Boolean nico.TestManager::enTest
	bool ___enTest_6;
	// System.Boolean nico.TestManager::enIda
	bool ___enIda_7;
	// System.Boolean nico.TestManager::enVuelta
	bool ___enVuelta_8;
	// System.Boolean nico.TestManager::enKiosko
	bool ___enKiosko_9;
	// System.Boolean nico.TestManager::enCanasto
	bool ___enCanasto_10;
	// System.Boolean nico.TestManager::enArticulos
	bool ___enArticulos_11;
	// System.Boolean nico.TestManager::enCaja
	bool ___enCaja_12;
	// System.Boolean nico.TestManager::enIrse
	bool ___enIrse_13;
};

// nico.TutorialManager
struct TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject nico.TutorialManager::circulo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___circulo_6;
	// UnityEngine.GameObject nico.TutorialManager::letrero
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___letrero_7;
	// UnityEngine.GameObject nico.TutorialManager::cruce
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cruce_8;
	// UnityEngine.GameObject nico.TutorialManager::cruce2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cruce2_9;
	// UnityEngine.GameObject nico.TutorialManager::semaforo_go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___semaforo_go_10;
	// UnityEngine.GameObject nico.TutorialManager::flecha
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___flecha_11;
	// UnityEngine.GameObject nico.TutorialManager::canastos
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canastos_12;
	// UnityEngine.GameObject nico.TutorialManager::caja
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___caja_13;
	// UnityEngine.GameObject nico.TutorialManager::bolsa
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bolsa_14;
	// TMPro.TextMeshProUGUI nico.TutorialManager::staticText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___staticText_15;
	// nico.TutorialState nico.TutorialManager::tutorialState
	int32_t ___tutorialState_16;
	// System.Single nico.TutorialManager::counter
	float ___counter_17;
	// Semaforo nico.TutorialManager::semaforo
	Semaforo_t8BCB57A0638D63653443F58CFF0B2747E8C68AB6* ___semaforo_18;
};

struct TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields
{
	// nico.TutorialManager nico.TutorialManager::Instance
	TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* ___Instance_4;
	// System.Boolean nico.TutorialManager::lastTestWasTutorial
	bool ___lastTestWasTutorial_5;
};

// routeMarker
struct routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 routeMarker::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_4;
	// UnityEngine.GameObject routeMarker::arrow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrow_5;
	// UnityEngine.Vector3 routeMarker::lookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAt_6;
	// UnityEngine.Transform routeMarker::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_7;
	// System.Single routeMarker::arrowSpeed
	float ___arrowSpeed_8;
	// UnityEngine.Vector3 routeMarker::targetVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetVector_9;
	// System.Boolean routeMarker::back
	bool ___back_10;
};

struct routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280_StaticFields
{
	// routeMarker/EndSim routeMarker::endSimEvent
	EndSim_t8DC6D6F02C993F75FE662D6F22EF7FB48A2368E6* ___endSimEvent_11;
};

// nico.BagInteractive
struct BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// System.Boolean nico.BagInteractive::pickedUp
	bool ___pickedUp_8;
};

// nico.BasketInteractive
struct BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// System.Int32 nico.BasketInteractive::selectedState
	int32_t ___selectedState_8;
};

// nico.Baskets
struct Baskets_t7479E4E7C0C7705094252B762B61136D1EC917F1  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// UnityEngine.GameObject nico.Baskets::topBasket
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___topBasket_8;
};

// nico.Billete
struct Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// UnityEngine.GameObject nico.Billete::outline_go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___outline_go_8;
	// System.Int32 nico.Billete::tipo
	int32_t ___tipo_9;
	// System.Boolean nico.Billete::isPermanentlySelected
	bool ___isPermanentlySelected_10;
	// UnityEngine.SpriteRenderer nico.Billete::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_11;
	// UnityEngine.SpriteRenderer nico.Billete::outlineRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___outlineRenderer_12;
	// UnityEngine.Sprite[] nico.Billete::sprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___sprites_13;
	// UnityEngine.Vector3 nico.Billete::ogPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ogPos_14;
	// UnityEngine.Vector3 nico.Billete::playerPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerPos_15;
	// UnityEngine.Vector3 nico.Billete::pagaPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pagaPos_16;
	// System.Boolean nico.Billete::inMostradorFlag
	bool ___inMostradorFlag_17;
	// System.Boolean nico.Billete::hideFlag
	bool ___hideFlag_18;
};

struct Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_StaticFields
{
	// System.Boolean nico.Billete::isLocked
	bool ___isLocked_19;
};

// nico.CirculoRojo
struct CirculoRojo_t11DF39ED6406D5A43A538CB6B8B872189B2337A8  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// System.Single nico.CirculoRojo::selectedTime
	float ___selectedTime_8;
};

// nico.Mostrador
struct Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// System.Int32 nico.Mostrador::precioReal
	int32_t ___precioReal_9;
	// System.Int32 nico.Mostrador::precioRestante
	int32_t ___precioRestante_10;
	// System.Int32 nico.Mostrador::pagaUsuario
	int32_t ___pagaUsuario_11;
	// System.Boolean nico.Mostrador::initFlag
	bool ___initFlag_12;
	// TMPro.TextMeshProUGUI nico.Mostrador::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_13;
	// UnityEngine.Transform nico.Mostrador::billetesTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___billetesTransform_14;
};

struct Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields
{
	// nico.Mostrador nico.Mostrador::Instance
	Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* ___Instance_8;
};

// nico.MostradorPersona
struct MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// UnityEngine.GameObject nico.MostradorPersona::confirmar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___confirmar_9;
};

struct MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_StaticFields
{
	// nico.MostradorPersona nico.MostradorPersona::Instance
	MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* ___Instance_8;
};

// nico.Seleccionable
struct Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// nico.Articulo nico.Seleccionable::tipo
	int32_t ___tipo_8;
	// System.Int32 nico.Seleccionable::index
	int32_t ___index_9;
};

struct Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_StaticFields
{
	// System.Boolean nico.Seleccionable::isBasketFull
	bool ___isBasketFull_10;
};

// nico.SeleccionableBasket
struct SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC  : public InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756
{
	// nico.Articulo nico.SeleccionableBasket::tipo
	int32_t ___tipo_8;
	// System.Int32 nico.SeleccionableBasket::index
	int32_t ___index_9;
	// System.Int32 nico.SeleccionableBasket::basketIndex
	int32_t ___basketIndex_10;
	// nico.Seleccionable nico.SeleccionableBasket::seleccionable
	Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* ___seleccionable_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// nico.InteractiveParent[]
struct InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3  : public RuntimeArray
{
	ALIGN_FIELD (8) InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* m_Items[1];

	inline InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// nico.Articulo[]
struct ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF Dictionary_2_GetEnumerator_mC54C8649C774363946FC6B7F1562CDE5D2550063_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB9BB64C4AD7D16F4B6EEE81234821DCB79906129_gshared (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Enumerator_get_Current_mBE91823E27777785B42DB31E7A8E63EB596453D1_gshared_inline (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB7721D033ED3618FA663F4132B88BEAEA808B285_gshared (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E03E419C7EAE999D440A625A0C6110AF2EB0F86_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF15B35814458562DB2AD3BC4ACC3EEBE3B35E8C4_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Int32>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m978CAD767E166B6BD2E111732F513A1398B0B974_gshared (Dictionary_2_tFCDE91BDD0207A67521C455FD60B9EAA6E0E6B62* __this, int32_t ___key0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void nico.InteractiveParent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void nico.Billete::IsHidding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_IsHidding_m0631F39E8156BEB8B5BA23DEFB7D1DEA88A42FDB (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void nico.Billete::SwitchSelectedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_SwitchSelectedState_mB950DE41AF76C975DDDC3D19DB1571D37CAD3AD9 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) ;
// System.Int32 nico.Billete::ObtenerValorDeBilllete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Billete_ObtenerValorDeBilllete_mDEF359347D0B2BE497DBC1F940F66E61753F7FCB (int32_t ___tipo0, const RuntimeMethod* method) ;
// System.Void nico.Mostrador::ActualizarPaga(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mostrador_ActualizarPaga_m2B71072BA1A5913C577C8DA6A847ABC4AA22340C (Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* __this, int32_t ___valor0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddVesMarcadoBillete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddVesMarcadoBillete_mB189918CB9ACEE3C647FDBF8ED98C85D13F792E0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void nico.TutorialManager::ChangeTutorialState(nico.TutorialState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69 (TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* __this, int32_t ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddVesDevueltoBillete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddVesDevueltoBillete_mD249E4EB72156DD934313EAEE8174F4D249ED32D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddSecondsSeleccionableLleno(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddSecondsSeleccionableLleno_mC9CAF00EA886FB3A4C01BBE254CF79D025554CF6 (float ___t0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddSecondsSeleccionableInvalido(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddSecondsSeleccionableInvalido_mEEF8394D19019F23872C99AFAF7A8B6375626C9F (float ___t0, const RuntimeMethod* method) ;
// System.Int32 nico.PlayerBasket::AddObject(nico.Articulo,System.Int32,nico.Seleccionable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerBasket_AddObject_m643775AD5B2780C7095CBCF6C45D0EEDC5389E14 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, int32_t ___newArticulo0, int32_t ___index1, Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* ___seleccionable2, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddVesRecojida(nico.Articulo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddVesRecojida_m15F0D44E127D674E8C4663495FDF5C681EACD6B0 (int32_t ___tipo0, const RuntimeMethod* method) ;
// System.Void nico.PlayerBasket::RemoveObject(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_RemoveObject_mA08F2D6BB5D4B6DD52309658D57D3A79C0E7840E (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, int32_t ___index0, int32_t ___basketIndex1, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddVesDevuelto(nico.Articulo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddVesDevuelto_m0F5A0A2367574766511BF18A8C9F8AFC410BE72D (int32_t ___tipo0, const RuntimeMethod* method) ;
// System.Void nico.Seleccionable::Reponer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seleccionable_Reponer_mAECE23E5FF4886E7236EE6293F0E8DD77D1C42F6 (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) ;
// System.Void nico.TestManager::AddSecondsBagPickup(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_AddSecondsBagPickup_m4D20702B6FD3504102ABC2EA1873FD7C5A52CA0C (float ___t0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetBagPicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_SetBagPicked_m9F3FBBB6C8D885C55360F96D8EC64C7C3EB7374E (const RuntimeMethod* method) ;
// System.Void nico.MostradorMovements::StartMovingBagToPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MostradorMovements_StartMovingBagToPlayer_m72D97DDF1165BA7C2DC75DC851184BCBFEAD7B48 (MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352* __this, const RuntimeMethod* method) ;
// System.Int32 nico.PlayerBasket::GetNumArticulos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerBasket::PickupBasket(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_PickupBasket_m1FBBA75A4F4BF60854B6770199A4ED0070202817 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ogBasket0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<QuickOutline>()
inline QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* Component_GetComponent_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m52B4D489BCC9873046E7B0C631AF2BE36551C613 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<QuickOutline>()
inline QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* Component_GetComponentInChildren_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m8C3F6DCB864AE97F68252302E6AD57336E86105A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void nico.InteractiveParent::SwitchMaterialState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_SwitchMaterialState_m9DC225A2D2D351E17AC2E228F482A60DEEEC2B41 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovement::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_ButtonWasPressed_mAE6CB1A42030386D409E8D430A2E9298BD1332B3 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetIdaFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetIdaFlag_m933F285E5120CBF0340F6CC440C055C73EDCFA83_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetKioskoFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetKioskoFlag_mEDDEEDC6F0633FE7C8322BABEF3776279D8E6C80_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetRecojerCanastoFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetRecojerCanastoFlag_mE6479CD2BB288F6AE5B6D2DE1AD82A4E6EFB219E_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetIrseFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetIrseFlag_m0BE626854C3056281DF67463FDCA88E40CCAD3A3_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetVueltaFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetVueltaFlag_m3619D260952451B54EE29AF6B9CB9634972BEFAC_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetTestFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetTestFlag_m8B9C3038E56F8D8230656B0CBB938FFE5136CA10_inline (bool ___state0, const RuntimeMethod* method) ;
// System.Void nico.MinimarketPuerta/End::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_inline (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method) ;
// System.Void nico.TestManager::StartTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestManager_StartTest_mAF1315E130916D711E5E390C9159AF69F4A9C2C2 (TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<nico.InteractiveParent>()
inline InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* GameObject_GetComponent_TisInteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756_m9283B997A10A36A25EF72B4E7EB72D424022A15A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<nico.SeleccionableBasket>()
inline SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void nico.SeleccionableBasket::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeleccionableBasket_SetState_m10C5FD4CDBACA5616A18A9A74452E395E84BDA55 (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Boolean nico.PlayerBasket::IsBasketFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBasket_IsBasketFull_mB9C26E76A954BE23BBDCBE426F945593E08FC19C (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) ;
// System.Void nico.Mostrador::ComputeTotalValue(nico.Articulo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mostrador_ComputeTotalValue_m10350971BB6F4BE34A00CC05A6AA42164B5D0768 (Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* __this, ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* ___articulos0, const RuntimeMethod* method) ;
// System.Void nico.TestManager::SetArticulosFlag(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetArticulosFlag_m121BD7CE50E7570F964A45FF7AB540023E1B2313_inline (bool ___state0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement_old::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_ObtainOffsetDirection_m4DC459F125E312123A03D7B747C50B68C9E3D0DD (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement_old::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_UpdateMovementState_m50A14EE4A74040607808F15B4621741A6286D457 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement_old::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_IsOnMostrador_mD0E03FECF51F955AAC78C0626EA9E7A9CFF6AD63 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement_old::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_MoveBasket_m679C488E646A526F05C387B85DA656C1FD7363D2 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovement_old::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_old_ButtonWasPressed_mA6F3C4ABF47B032151926ACCC7CEA4A7036E4BBE (const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovement_old::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_old_ButtonIsHeld_m88AA347861AFAB40711AE196382C351630FB1419 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
inline Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA Dictionary_2_GetEnumerator_m5B4AB9234E9B5AA8776F5A5E98BD96AADD36A445 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC54C8649C774363946FC6B7F1562CDE5D2550063_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::Dispose()
inline void Enumerator_Dispose_mEEE30D933563208EBCF7F651BDC442631A5C6D0B (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA*, const RuntimeMethod*))Enumerator_Dispose_mB9BB64C4AD7D16F4B6EEE81234821DCB79906129_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::get_Current()
inline KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 Enumerator_get_Current_m58E48C7A4B001DD9CC590DEF18D64A3D9E5E6F7B_inline (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 (*) (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA*, const RuntimeMethod*))Enumerator_get_Current_mBE91823E27777785B42DB31E7A8E63EB596453D1_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_inline (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078*, const RuntimeMethod*))KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078*, const RuntimeMethod*))KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_mCB84750BAFE59C7D53C86B28A910BBE68DDE5D33 (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA*, const RuntimeMethod*))Enumerator_MoveNext_mB7721D033ED3618FA663F4132B88BEAEA808B285_gshared)(__this, method);
}
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m54E891D837D238AD3700E7554AA565E69A7BC983 (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA7AE8CA2DBFC2E8DAACD0B277E4B8BC724B05DC1 (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4*, const RuntimeMethod*))Dictionary_2__ctor_m2E03E419C7EAE999D440A625A0C6110AF2EB0F86_gshared)(__this, method);
}
// System.Int32 nico.ObjetosConstants::GetPrecioPorMonedas(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706 (int32_t ___X0, int32_t ___L1, int32_t ___C2, int32_t ___D3, int32_t ___M4, int32_t ___MM5, int32_t ___V6, int32_t ___x7, int32_t ___xx8, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37 (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mF15B35814458562DB2AD3BC4ACC3EEBE3B35E8C4_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<nico.Articulo,System.Int32>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m72D248ECAF2B0AF8EE7F3E4586BBB0CEF6CDF682 (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m978CAD767E166B6BD2E111732F513A1398B0B974_gshared)(__this, ___key0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_UpdateMovementState_m2513976D7F6D0A336F3B1D2A963A555CD6D69723 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_ObtainOffsetDirection_mF36024A4EBAFAF2886E26B35BF8108B16ECB648A (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_IsOnMostrador_mECC79EE37BA568AF1078A0A40F9F86DFDFCC741C (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovement::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_MoveBasket_mA7D7B35CEC2621A9308CB4912250353219352DE3 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovement::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_ButtonIsHeld_m5F8A7AC4744BACD07223248376A98DA16B2981D7 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_m6FF00BB4F01FA996E2FB3F3727EBC414C8EB2CEB (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71 (const RuntimeMethod* method) ;
// System.Void nico.PlayerMovementVR::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_UpdateMovementState_m96FFE4ABBE8098BCA9F86446A8D70C8811304D57 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovementVR::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_ObtainOffsetDirection_mB5301FBB8DB66E3ED4F8FB60C971CB38D16A4756 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovementVR::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_IsOnMostrador_m743F3C5A04B1EE4832D5B526ADE5646B3242FC2B (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) ;
// System.Void nico.PlayerMovementVR::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_MoveBasket_mBDF34A7B52182C1C175313CF9A60896BF0BA1990 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovementVR::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovementVR_ButtonWasPressed_m1BB5965DE055C67FF35EBD6D685A407EE2AAEDEA (const RuntimeMethod* method) ;
// System.Boolean nico.PlayerMovementVR::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovementVR_ButtonIsHeld_m9BBC9DBD076085D69DC7CC32BEF9900F6A6AD332 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.MostradorPersona::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MostradorPersona_Awake_mD052FEF88413E2296AA5402CE7FD20298C40B225 (MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_StaticFields*)il2cpp_codegen_static_fields_for(MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var))->___Instance_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_StaticFields*)il2cpp_codegen_static_fields_for(MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var))->___Instance_8), (void*)__this);
		// }
		return;
	}
}
// System.Boolean nico.MostradorPersona::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MostradorPersona_SelectionConditionFunction_m26ECDFC6D5F4B37AC5D56312752A0B485B9C14B9 (MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TestManager.enCaja && !confirmar.activeSelf;
		bool L_0 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enCaja_12;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___confirmar_9;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Void nico.MostradorPersona::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MostradorPersona_SelectionFunction_m4161252BCCAE468D1DBCEB55257210ADCCD27AA3 (MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* __this, const RuntimeMethod* method) 
{
	{
		// confirmar.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___confirmar_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void nico.MostradorPersona::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MostradorPersona__ctor_mA313F5032CA30EF11B44BD18D55A0CACA9B232BC (MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.Billete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_Start_m21B1A86CFA241FCEC6FFCC440E3E8B3FAD2EFD22 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectTime = PlayerActions.grabTime;
		il2cpp_codegen_runtime_class_init_inline(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		float L_0 = ((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___grabTime_6;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___selectTime_7 = L_0;
		// ogPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->___ogPos_14 = L_2;
		// playerPos = MostradorMovements.Instance.targetPlayerTransform.position + (Mostrador.Instance.transform.up * 1f) * MostradorMovements.scalar;
		il2cpp_codegen_runtime_class_init_inline(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352* L_3 = ((MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields*)il2cpp_codegen_static_fields_for(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___targetPlayerTransform_8;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_6 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, (1.0f), NULL);
		float L_10 = ((MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields*)il2cpp_codegen_static_fields_for(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var))->___scalar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_11, NULL);
		__this->___playerPos_15 = L_12;
		// pagaPos = Mostrador.Instance.transform.position + (Mostrador.Instance.transform.right - Mostrador.Instance.transform.forward + 0.75f * Mostrador.Instance.transform.up) * MostradorMovements.scalar;
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_13 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_16 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_17, NULL);
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_19 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_18, L_21, NULL);
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_23 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.75f), L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_26, NULL);
		float L_28 = ((MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields*)il2cpp_codegen_static_fields_for(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var))->___scalar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_29, NULL);
		__this->___pagaPos_16 = L_30;
		// transform.position = playerPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___playerPos_15;
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// if (tipo < 4)
		int32_t L_33 = __this->___tipo_9;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_00ee;
		}
	}
	{
		// outlineRenderer.sprite = sprites[9];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_34 = __this->___outlineRenderer_12;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_35 = __this->___sprites_13;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_34);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_34, L_37, NULL);
		goto IL_0102;
	}

IL_00ee:
	{
		// outlineRenderer.sprite = sprites[10];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_38 = __this->___outlineRenderer_12;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_39 = __this->___sprites_13;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)10);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_38);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_38, L_41, NULL);
	}

IL_0102:
	{
		// spriteRenderer.sprite = sprites[tipo];
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___spriteRenderer_11;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_43 = __this->___sprites_13;
		int32_t L_44 = __this->___tipo_9;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_42, L_46, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void nico.Billete::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_Update_m31EAF4FCB03F9CE6DBCD7FE19FE05661B4CB8047 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isLocked)
		bool L_0 = ((Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_StaticFields*)il2cpp_codegen_static_fields_for(Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_il2cpp_TypeInfo_var))->___isLocked_19;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// IsHidding();
		Billete_IsHidding_m0631F39E8156BEB8B5BA23DEFB7D1DEA88A42FDB(__this, NULL);
	}

IL_000d:
	{
		// if (isCurrentlySelected || isPermanentlySelected)
		bool L_1 = ((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___isCurrentlySelected_5;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = __this->___isPermanentlySelected_10;
		if (!L_2)
		{
			goto IL_002b;
		}
	}

IL_001d:
	{
		// outline_go.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___outline_go_8;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		goto IL_0042;
	}

IL_002b:
	{
		// selectCounter = 0;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___selectCounter_6 = (0.0f);
		// outline_go.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___outline_go_8;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0042:
	{
		// isCurrentlySelected = false;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___isCurrentlySelected_5 = (bool)0;
		// if (inMostradorFlag)
		bool L_5 = __this->___inMostradorFlag_17;
		if (!L_5)
		{
			goto IL_00cf;
		}
	}
	{
		// if (isPermanentlySelected)
		bool L_6 = __this->___isPermanentlySelected_10;
		if (!L_6)
		{
			goto IL_00a2;
		}
	}
	{
		// Vector3 selectedPos = ogPos + transform.right * MostradorMovements.scalar;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___ogPos_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		float L_10 = ((MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields*)il2cpp_codegen_static_fields_for(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var))->___scalar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_11, NULL);
		V_0 = L_12;
		// transform.position = Vector3.Lerp(transform.position, selectedPos, Time.deltaTime * 2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, (2.0f))), NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_18, NULL);
		return;
	}

IL_00a2:
	{
		// transform.position = Vector3.Lerp(transform.position, ogPos, Time.deltaTime * 2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___ogPos_14;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_21, L_22, ((float)il2cpp_codegen_multiply(L_23, (2.0f))), NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_24, NULL);
		return;
	}

IL_00cf:
	{
		// else if (hideFlag)
		bool L_25 = __this->___hideFlag_18;
		if (!L_25)
		{
			goto IL_0138;
		}
	}
	{
		// if (isPermanentlySelected)
		bool L_26 = __this->___isPermanentlySelected_10;
		if (!L_26)
		{
			goto IL_010c;
		}
	}
	{
		// transform.position = Vector3.Lerp(transform.position, pagaPos, Time.deltaTime * 2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___pagaPos_16;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_29, L_30, ((float)il2cpp_codegen_multiply(L_31, (2.0f))), NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_32, NULL);
		return;
	}

IL_010c:
	{
		// transform.position = Vector3.Lerp(transform.position, playerPos, Time.deltaTime * 2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___playerPos_15;
		float L_37;
		L_37 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_35, L_36, ((float)il2cpp_codegen_multiply(L_37, (2.0f))), NULL);
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_38, NULL);
	}

IL_0138:
	{
		// }
		return;
	}
}
// System.Boolean nico.Billete::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Billete_SelectionConditionFunction_m6A42014D2F373DFB4817A97DA373D03DC34CC28B (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !isLocked;
		bool L_0 = ((Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_StaticFields*)il2cpp_codegen_static_fields_for(Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52_il2cpp_TypeInfo_var))->___isLocked_19;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void nico.Billete::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_SelectionFunction_mDC771216A0CAE7E4B14CC5B149011B7245838ED9 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	{
		// SwitchSelectedState();
		Billete_SwitchSelectedState_mB950DE41AF76C975DDDC3D19DB1571D37CAD3AD9(__this, NULL);
		// }
		return;
	}
}
// System.Void nico.Billete::SwitchSelectedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_SwitchSelectedState_mB950DE41AF76C975DDDC3D19DB1571D37CAD3AD9 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MostradorPersona.Instance.confirmar.SetActive(false);
		MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41* L_0 = ((MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_StaticFields*)il2cpp_codegen_static_fields_for(MostradorPersona_tDC749AF08B66508540B6719C11D7CD3183945F41_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___confirmar_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// isPermanentlySelected = !isPermanentlySelected;
		bool L_2 = __this->___isPermanentlySelected_10;
		__this->___isPermanentlySelected_10 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// if (isPermanentlySelected)
		bool L_3 = __this->___isPermanentlySelected_10;
		if (!L_3)
		{
			goto IL_0087;
		}
	}
	{
		// Mostrador.Instance.ActualizarPaga(Billete.ObtenerValorDeBilllete(tipo));
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_4 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		int32_t L_5 = __this->___tipo_9;
		int32_t L_6;
		L_6 = Billete_ObtenerValorDeBilllete_mDEF359347D0B2BE497DBC1F940F66E61753F7FCB(L_5, NULL);
		NullCheck(L_4);
		Mostrador_ActualizarPaga_m2B71072BA1A5913C577C8DA6A847ABC4AA22340C(L_4, L_6, NULL);
		// outlineRenderer.transform.localScale = Vector3.one * 1.2f;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___outlineRenderer_12;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, (1.20000005f), NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_10, NULL);
		// TestManager.AddVesMarcadoBillete();
		TestManager_AddVesMarcadoBillete_mB189918CB9ACEE3C647FDBF8ED98C85D13F792E0(NULL);
		// if (TutorialManager.Instance && TutorialManager.Instance.tutorialState == TutorialState.Pagar1)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_11 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_13 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_13);
		int32_t L_14 = L_13->___tutorialState_16;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_00c1;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.Pagar2);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_15 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_15);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_15, ((int32_t)16), NULL);
		return;
	}

IL_0087:
	{
		// Mostrador.Instance.ActualizarPaga(-Billete.ObtenerValorDeBilllete(tipo));
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_16 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		int32_t L_17 = __this->___tipo_9;
		int32_t L_18;
		L_18 = Billete_ObtenerValorDeBilllete_mDEF359347D0B2BE497DBC1F940F66E61753F7FCB(L_17, NULL);
		NullCheck(L_16);
		Mostrador_ActualizarPaga_m2B71072BA1A5913C577C8DA6A847ABC4AA22340C(L_16, ((-L_18)), NULL);
		// outlineRenderer.transform.localScale = Vector3.one * 1.0795f;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___outlineRenderer_12;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (1.07949996f), NULL);
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_22, NULL);
		// TestManager.AddVesDevueltoBillete();
		TestManager_AddVesDevueltoBillete_mD249E4EB72156DD934313EAEE8174F4D249ED32D(NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void nico.Billete::IsHidding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete_IsHidding_m0631F39E8156BEB8B5BA23DEFB7D1DEA88A42FDB (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inMostradorFlag = false;
		__this->___inMostradorFlag_17 = (bool)0;
		// hideFlag = true;
		__this->___hideFlag_18 = (bool)1;
		// if (Vector3.Distance(playerPos, transform.position) < 0.1f || Vector3.Distance(pagaPos, transform.position) < 0.1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___playerPos_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3;
		L_3 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_0, L_2, NULL);
		if ((((float)L_3) < ((float)(0.100000001f))))
		{
			goto IL_0048;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___pagaPos_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_6, NULL);
		if ((!(((float)L_7) < ((float)(0.100000001f)))))
		{
			goto IL_0053;
		}
	}

IL_0048:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Int32 nico.Billete::ObtenerValorDeBilllete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Billete_ObtenerValorDeBilllete_mDEF359347D0B2BE497DBC1F940F66E61753F7FCB (int32_t ___tipo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B6E1B06FD4F804AABCF39A3DBC3C98ACA3BF71);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___tipo0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0032;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_003b;
			}
			case 5:
			{
				goto IL_0041;
			}
			case 6:
			{
				goto IL_0047;
			}
			case 7:
			{
				goto IL_004d;
			}
			case 8:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_002c:
	{
		// case 0: return 10;
		return ((int32_t)10);
	}

IL_002f:
	{
		// case 1: return 50;
		return ((int32_t)50);
	}

IL_0032:
	{
		// case 2: return 100;
		return ((int32_t)100);
	}

IL_0035:
	{
		// case 3: return 500;
		return ((int32_t)500);
	}

IL_003b:
	{
		// case 4: return 1000;
		return ((int32_t)1000);
	}

IL_0041:
	{
		// case 5: return 2000;
		return ((int32_t)2000);
	}

IL_0047:
	{
		// case 6: return 5000;
		return ((int32_t)5000);
	}

IL_004d:
	{
		// case 7: return 10000;
		return ((int32_t)10000);
	}

IL_0053:
	{
		// case 8: return 20000;
		return ((int32_t)20000);
	}

IL_0059:
	{
		// Debug.LogError("Tipo de billete no existente");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral05B6E1B06FD4F804AABCF39A3DBC3C98ACA3BF71, NULL);
		// return -1;
		return (-1);
	}
}
// System.Void nico.Billete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billete__ctor_m0F4F8A0D726CE16C6141B5AD32190EBC53DFC3B7 (Billete_t546C38C29C37736AC3C75D4EEF671375492A5B52* __this, const RuntimeMethod* method) 
{
	{
		// public int tipo = -1;
		__this->___tipo_9 = (-1);
		// bool inMostradorFlag = true;
		__this->___inMostradorFlag_17 = (bool)1;
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.Seleccionable::Start_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seleccionable_Start__mF66D2EA26A504272C59523DBFC945645176D7114 (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectTime = PlayerActions.grabTime;
		il2cpp_codegen_runtime_class_init_inline(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		float L_0 = ((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___grabTime_6;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___selectTime_7 = L_0;
		// }
		return;
	}
}
// System.Boolean nico.Seleccionable::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Seleccionable_SelectionConditionFunction_m35D2F9C55C7409725D4E73FF9E0B2E117D49655B (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerBasket.Instance.hasBasket)
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___hasBasket_10;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// if (!isBasketFull)
		bool L_2 = ((Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_StaticFields*)il2cpp_codegen_static_fields_for(Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var))->___isBasketFull_10;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// isCurrentlySelected = true;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___isCurrentlySelected_5 = (bool)1;
		goto IL_0034;
	}

IL_001c:
	{
		// TestManager.AddSecondsSeleccionableLleno(Time.deltaTime);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		TestManager_AddSecondsSeleccionableLleno_mC9CAF00EA886FB3A4C01BBE254CF79D025554CF6(L_3, NULL);
		// return false;
		return (bool)0;
	}

IL_0028:
	{
		// TestManager.AddSecondsSeleccionableInvalido(Time.deltaTime);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		TestManager_AddSecondsSeleccionableInvalido_mEEF8394D19019F23872C99AFAF7A8B6375626C9F(L_4, NULL);
		// return false;
		return (bool)0;
	}

IL_0034:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void nico.Seleccionable::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seleccionable_SelectionFunction_mA63736DAEE954F029DD1A67C3A937F60D13196D2 (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int remaning = PlayerBasket.Instance.AddObject(tipo, index, this);
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_1 = __this->___tipo_8;
		int32_t L_2 = __this->___index_9;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = PlayerBasket_AddObject_m643775AD5B2780C7095CBCF6C45D0EEDC5389E14(L_0, L_1, L_2, __this, NULL);
		// TestManager.AddVesRecojida(tipo);
		int32_t L_4 = __this->___tipo_8;
		TestManager_AddVesRecojida_m15F0D44E127D674E8C4663495FDF5C681EACD6B0(L_4, NULL);
		// if (remaning <= 0)
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// isBasketFull = true;
		((Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_StaticFields*)il2cpp_codegen_static_fields_for(Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var))->___isBasketFull_10 = (bool)1;
	}

IL_002b:
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void nico.Seleccionable::Reponer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seleccionable_Reponer_mAECE23E5FF4886E7236EE6293F0E8DD77D1C42F6 (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isBasketFull = false;
		((Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_StaticFields*)il2cpp_codegen_static_fields_for(Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047_il2cpp_TypeInfo_var))->___isBasketFull_10 = (bool)0;
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void nico.Seleccionable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seleccionable__ctor_mD17FA55B743A9160598DAD5224C2712C176A54D5 (Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.SeleccionableBasket::Start_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeleccionableBasket_Start__m1DAA31876EDDACDC027E2EF6991C910F3157C343 (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectTime = PlayerActions.grabTime;
		il2cpp_codegen_runtime_class_init_inline(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		float L_0 = ((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___grabTime_6;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___selectTime_7 = L_0;
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean nico.SeleccionableBasket::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SeleccionableBasket_SelectionConditionFunction_m28E449A4E0EE2891ED5094999F15BB4EFD7DB9D8 (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !TestManager.enCaja;
		bool L_0 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enCaja_12;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void nico.SeleccionableBasket::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeleccionableBasket_SelectionFunction_mD1DAB9CD7BEC0AD5800EE652C9B8A1D2B16ABCC9 (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerBasket.Instance.RemoveObject(index, basketIndex);
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		int32_t L_1 = __this->___index_9;
		int32_t L_2 = __this->___basketIndex_10;
		NullCheck(L_0);
		PlayerBasket_RemoveObject_mA08F2D6BB5D4B6DD52309658D57D3A79C0E7840E(L_0, L_1, L_2, NULL);
		// TestManager.AddVesDevuelto(tipo);
		int32_t L_3 = __this->___tipo_8;
		TestManager_AddVesDevuelto_m0F5A0A2367574766511BF18A8C9F8AFC410BE72D(L_3, NULL);
		// if (seleccionable)
		Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* L_4 = __this->___seleccionable_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// seleccionable.Reponer();
		Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* L_6 = __this->___seleccionable_11;
		NullCheck(L_6);
		Seleccionable_Reponer_mAECE23E5FF4886E7236EE6293F0E8DD77D1C42F6(L_6, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void nico.SeleccionableBasket::SetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeleccionableBasket_SetState_m10C5FD4CDBACA5616A18A9A74452E395E84BDA55 (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, bool ___state0, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(state);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___state0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void nico.SeleccionableBasket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SeleccionableBasket__ctor_mDBF1AA834DD1400AD579A3B4216428DD6616923A (SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.BagInteractive::Start_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BagInteractive_Start__mC48CE93E7D30C4BEAB0090B4E815FD5A31C83A7B (BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D* __this, const RuntimeMethod* method) 
{
	{
		// selectTime = 1;
		((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___selectTime_7 = (1.0f);
		// }
		return;
	}
}
// System.Void nico.BagInteractive::Update_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BagInteractive_Update__m45A3A1DF94F01452E858EC97789E6B1129610AEF (BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D* __this, const RuntimeMethod* method) 
{
	{
		// if (!pickedUp)
		bool L_0 = __this->___pickedUp_8;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// TestManager.AddSecondsBagPickup(Time.deltaTime);
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		TestManager_AddSecondsBagPickup_m4D20702B6FD3504102ABC2EA1873FD7C5A52CA0C(L_1, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Boolean nico.BagInteractive::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BagInteractive_SelectionConditionFunction_m751A1A4F6088E2FDEB0A36DB25B27C4111BA0C65 (BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D* __this, const RuntimeMethod* method) 
{
	{
		// return !pickedUp;
		bool L_0 = __this->___pickedUp_8;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void nico.BagInteractive::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BagInteractive_SelectionFunction_m996124F4F62288BBFC36659628302E2AC4B2FC6B (BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pickedUp = true;
		__this->___pickedUp_8 = (bool)1;
		// TestManager.SetBagPicked();
		TestManager_SetBagPicked_m9F3FBBB6C8D885C55360F96D8EC64C7C3EB7374E(NULL);
		// MostradorMovements.Instance.StartMovingBagToPlayer();
		il2cpp_codegen_runtime_class_init_inline(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var);
		MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352* L_0 = ((MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_StaticFields*)il2cpp_codegen_static_fields_for(MostradorMovements_t75AEECE9786D3A08DAD2ADA8DC93AF6A2A109352_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		MostradorMovements_StartMovingBagToPlayer_m72D97DDF1165BA7C2DC75DC851184BCBFEAD7B48(L_0, NULL);
		// }
		return;
	}
}
// System.Void nico.BagInteractive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BagInteractive__ctor_mEC6D0D3FB61FB7EB4428B72C9E5773D2D498C02D (BagInteractive_t76FE7256FFB8EC15686E190AF47AE6E80A58257D* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.BasketInteractive::Update_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketInteractive_Update__m3B6229D8D0D5C3EFD252FA44CF3A7B1AB8CAF197 (BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* __this, const RuntimeMethod* method) 
{
	{
		// selectedState--;
		int32_t L_0 = __this->___selectedState_8;
		__this->___selectedState_8 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void nico.BasketInteractive::CurrentlySelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketInteractive_CurrentlySelected_mB07B7F48E9A5ECBFA15CED386AE3D4146BF0D854 (BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerBasket.Instance.GetNumArticulos() > 0)
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// selectedState = 2;
		__this->___selectedState_8 = 2;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void nico.BasketInteractive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasketInteractive__ctor_m7A5B1F8D0A4A65748398F7F4DE4E67077CD23AAF (BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean nico.Baskets::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Baskets_SelectionConditionFunction_m1E98735E32D4B1EF142AB3A8A3EF91F67B0BE2B2 (Baskets_t7479E4E7C0C7705094252B762B61136D1EC917F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !PlayerBasket.Instance.hasBasket;
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___hasBasket_10;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void nico.Baskets::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Baskets_SelectionFunction_m5444C42E0C24EFCB1D9B59F50E57F23457E034F6 (Baskets_t7479E4E7C0C7705094252B762B61136D1EC917F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PlayerBasket.Instance.hasBasket)
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_0 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___hasBasket_10;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// PlayerBasket.Instance.PickupBasket(topBasket);
		PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* L_2 = ((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___topBasket_8;
		NullCheck(L_2);
		PlayerBasket_PickupBasket_m1FBBA75A4F4BF60854B6770199A4ED0070202817(L_2, L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void nico.Baskets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Baskets__ctor_m44039078386E2279CC2F27D657A973CEB209C2C1 (Baskets_t7479E4E7C0C7705094252B762B61136D1EC917F1* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.InteractiveParent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_Start_m76232D0F648DBD8D98A995E7DC41B09231C2F624 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m8C3F6DCB864AE97F68252302E6AD57336E86105A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m52B4D489BCC9873046E7B0C631AF2BE36551C613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// outline = GetComponent<QuickOutline>();
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_0;
		L_0 = Component_GetComponent_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m52B4D489BCC9873046E7B0C631AF2BE36551C613(__this, Component_GetComponent_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m52B4D489BCC9873046E7B0C631AF2BE36551C613_RuntimeMethod_var);
		__this->___outline_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outline_4), (void*)L_0);
		// if (outline == null)
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_1 = __this->___outline_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// outline = GetComponentInChildren<QuickOutline>();
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_3;
		L_3 = Component_GetComponentInChildren_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m8C3F6DCB864AE97F68252302E6AD57336E86105A(__this, Component_GetComponentInChildren_TisQuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB_m8C3F6DCB864AE97F68252302E6AD57336E86105A_RuntimeMethod_var);
		__this->___outline_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outline_4), (void*)L_3);
	}

IL_0026:
	{
		// Start_();
		VirtualActionInvoker0::Invoke(4 /* System.Void nico.InteractiveParent::Start_() */, __this);
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::Start_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_Start__m9B48A387780322A3FAA104462D7DE30FF4B61221 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_Update_m8444B140A3A4130AF9F6E24BE1D5DB6A24B1775C (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// Update_();
		VirtualActionInvoker0::Invoke(5 /* System.Void nico.InteractiveParent::Update_() */, __this);
		// if (isCurrentlySelected)
		bool L_0 = __this->___isCurrentlySelected_5;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// SwitchMaterialState(true);
		InteractiveParent_SwitchMaterialState_m9DC225A2D2D351E17AC2E228F482A60DEEEC2B41(__this, (bool)1, NULL);
		goto IL_0029;
	}

IL_0017:
	{
		// selectCounter = 0;
		__this->___selectCounter_6 = (0.0f);
		// SwitchMaterialState(false);
		InteractiveParent_SwitchMaterialState_m9DC225A2D2D351E17AC2E228F482A60DEEEC2B41(__this, (bool)0, NULL);
	}

IL_0029:
	{
		// isCurrentlySelected = false;
		__this->___isCurrentlySelected_5 = (bool)0;
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::Update_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_Update__mF897A5B453128050CFCA596B13F186936F842B1F (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::CurrentlySelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_CurrentlySelected_m359C1207C4407A80341718025E4280FBD05D25B7 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SelectionConditionFunction())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean nico.InteractiveParent::SelectionConditionFunction() */, __this);
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// isCurrentlySelected = true;
		__this->___isCurrentlySelected_5 = (bool)1;
		// if (!PlayerMovement.isMoving && PlayerMovement.Instance.ButtonWasPressed())
		bool L_1 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___isMoving_9;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* L_2 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = PlayerMovement_ButtonWasPressed_mAE6CB1A42030386D409E8D430A2E9298BD1332B3(L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// PlayerMovement.movementCooldown += 0.5f;
		float L_4 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10;
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10 = ((float)il2cpp_codegen_add(L_4, (0.5f)));
		// SelectionFunction();
		VirtualActionInvoker0::Invoke(7 /* System.Void nico.InteractiveParent::SelectionFunction() */, __this);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::SwitchMaterialState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_SwitchMaterialState_m9DC225A2D2D351E17AC2E228F482A60DEEEC2B41 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (outline)
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_0 = __this->___outline_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// if (state)
		bool L_2 = ___state0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// outline.enabled = true;
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_3 = __this->___outline_4;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		return;
	}

IL_001d:
	{
		// outline.enabled = false;
		QuickOutline_tB08B2CAE08DB69A1B03441A1004A1D12648C37BB* L_4 = __this->___outline_4;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void nico.InteractiveParent::SelectionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent_SelectionFunction_m6DE5E1D679ACE213A49A12EDFE30B2CE616435CC (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean nico.InteractiveParent::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractiveParent_SelectionConditionFunction_mC9B9E7391E08C258B7D1FFC151E4AA7EBF17D1CE (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void nico.InteractiveParent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7 (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* __this, const RuntimeMethod* method) 
{
	{
		// protected float selectTime = 1;
		__this->___selectTime_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.MinimarketPuerta::add_endEvent(nico.MinimarketPuerta/End)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimarketPuerta_add_endEvent_mCB39B5A60CD4837F1176E54D8A9BDCBFEDC6DCE3 (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_0 = NULL;
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_1 = NULL;
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_2 = NULL;
	{
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_0 = ((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6;
		V_0 = L_0;
	}

IL_0006:
	{
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_1 = V_0;
		V_1 = L_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_2 = V_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)CastclassSealed((RuntimeObject*)L_4, End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B_il2cpp_TypeInfo_var));
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_5 = V_2;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_6 = V_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_7;
		L_7 = InterlockedCompareExchangeImpl<End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*>((&((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6), L_5, L_6);
		V_0 = L_7;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_8 = V_0;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_9 = V_1;
		if ((!(((RuntimeObject*)(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)L_8) == ((RuntimeObject*)(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void nico.MinimarketPuerta::remove_endEvent(nico.MinimarketPuerta/End)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimarketPuerta_remove_endEvent_m6C847A68BF37956E3DA9F372215F0FEC24828CA3 (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_0 = NULL;
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_1 = NULL;
	End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* V_2 = NULL;
	{
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_0 = ((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6;
		V_0 = L_0;
	}

IL_0006:
	{
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_1 = V_0;
		V_1 = L_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_2 = V_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)CastclassSealed((RuntimeObject*)L_4, End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B_il2cpp_TypeInfo_var));
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_5 = V_2;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_6 = V_1;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_7;
		L_7 = InterlockedCompareExchangeImpl<End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*>((&((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6), L_5, L_6);
		V_0 = L_7;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_8 = V_0;
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_9 = V_1;
		if ((!(((RuntimeObject*)(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)L_8) == ((RuntimeObject*)(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void nico.MinimarketPuerta::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimarketPuerta_OnTriggerEnter_mA682DB4309100CC807C522188826AC740341C77A (MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6BCC5CFB3FCF10B20D29D6217D0706DFBA5A23);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_00f2;
		}
	}
	{
		// if (!Eseldelinicio)
		bool L_2 = __this->___Eseldelinicio_4;
		if (L_2)
		{
			goto IL_00a3;
		}
	}
	{
		// if (TestManager.enIda)
		bool L_3 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enIda_7;
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// TestManager.SetIdaFlag(false);
		TestManager_SetIdaFlag_m933F285E5120CBF0340F6CC440C055C73EDCFA83_inline((bool)0, NULL);
		// TestManager.SetKioskoFlag(true);
		TestManager_SetKioskoFlag_mEDDEEDC6F0633FE7C8322BABEF3776279D8E6C80_inline((bool)1, NULL);
		// TestManager.SetRecojerCanastoFlag(true);
		TestManager_SetRecojerCanastoFlag_mE6479CD2BB288F6AE5B6D2DE1AD82A4E6EFB219E_inline((bool)1, NULL);
		// if (TutorialManager.Instance)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_4 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		if (!L_5)
		{
			goto IL_00f2;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.RecojerCanasta);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_6 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_6, ((int32_t)9), NULL);
		return;
	}

IL_0050:
	{
		// else if (TestManager.enIrse && rm.back)
		bool L_7 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enIrse_13;
		if (!L_7)
		{
			goto IL_00f2;
		}
	}
	{
		routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280* L_8 = __this->___rm_5;
		NullCheck(L_8);
		bool L_9 = L_8->___back_10;
		if (!L_9)
		{
			goto IL_00f2;
		}
	}
	{
		// TestManager.SetIrseFlag(false);
		TestManager_SetIrseFlag_m0BE626854C3056281DF67463FDCA88E40CCAD3A3_inline((bool)0, NULL);
		// TestManager.SetKioskoFlag(false);
		TestManager_SetKioskoFlag_mEDDEEDC6F0633FE7C8322BABEF3776279D8E6C80_inline((bool)0, NULL);
		// TestManager.SetVueltaFlag(true);
		TestManager_SetVueltaFlag_m3619D260952451B54EE29AF6B9CB9634972BEFAC_inline((bool)1, NULL);
		// if (TutorialManager.Instance && TutorialManager.Instance.tutorialState == TutorialState.Irse)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_10 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_00f2;
		}
	}
	{
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_12 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___tutorialState_16;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_00f2;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.EMPTY);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_14 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_14);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_14, ((int32_t)21), NULL);
		return;
	}

IL_00a3:
	{
		// if (Eseldelinicio)
		bool L_15 = __this->___Eseldelinicio_4;
		if (!L_15)
		{
			goto IL_00f2;
		}
	}
	{
		// if (rm.back && TestManager.enVuelta)
		routeMarker_t3C13551D8FA88777F87707B35EADBF8472295280* L_16 = __this->___rm_5;
		NullCheck(L_16);
		bool L_17 = L_16->___back_10;
		if (!L_17)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_18 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enVuelta_8;
		if (!L_18)
		{
			goto IL_00d7;
		}
	}
	{
		// TestManager.SetTestFlag(false);
		TestManager_SetTestFlag_m8B9C3038E56F8D8230656B0CBB938FFE5136CA10_inline((bool)0, NULL);
		// if (endEvent != null)
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_19 = ((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6;
		if (!L_19)
		{
			goto IL_00f2;
		}
	}
	{
		// endEvent();
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* L_20 = ((MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_StaticFields*)il2cpp_codegen_static_fields_for(MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88_il2cpp_TypeInfo_var))->___endEvent_6;
		NullCheck(L_20);
		End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_inline(L_20, NULL);
		return;
	}

IL_00d7:
	{
		// else if (!TestManager.enTest) {
		bool L_21 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enTest_6;
		if (L_21)
		{
			goto IL_00f2;
		}
	}
	{
		// TestManager.Instance.StartTest();
		TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE* L_22 = ((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_22);
		TestManager_StartTest_mAF1315E130916D711E5E390C9159AF69F4A9C2C2(L_22, NULL);
		// print("test iniciado");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralCB6BCC5CFB3FCF10B20D29D6217D0706DFBA5A23, NULL);
	}

IL_00f2:
	{
		// }
		return;
	}
}
// System.Void nico.MinimarketPuerta::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinimarketPuerta__ctor_m9A8F129502CE3F2307EE525F465F29E6399DDB08 (MinimarketPuerta_t9FC1CD3A001ACB85CB87A64ED29D582F839D9C88* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_Multicast(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* currentDelegate = reinterpret_cast<End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_OpenInst(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_OpenStatic(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_OpenStaticInvoker(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_ClosedStaticInvoker(End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void nico.MinimarketPuerta/End::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End__ctor_m596CB32F4FFAB3CBD57F64A1F1FBF499CD3EF032 (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_Multicast;
}
// System.Void nico.MinimarketPuerta/End::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult nico.MinimarketPuerta/End::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* End_BeginInvoke_mB9952D4925FBE0001C0431F9F8AB07D15C6B6293 (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void nico.MinimarketPuerta/End::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_EndInvoke_mCB6042F621AA6937DD86D2EA572BAB8C41EE8C37 (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.PlayerActions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Awake_m22EC8B09FA87AE14738FA14FF79C774B2B576DE8 (PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		il2cpp_codegen_runtime_class_init_inline(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void nico.PlayerActions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Update_m89C965F23C5051064E6BA37B1579AB51080378F4 (PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756_m9283B997A10A36A25EF72B4E7EB72D424022A15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	{
		// Vector3 raycastOrigin = mainCameraTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mainCameraTransform_9;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// Vector3 raycastDirection = mainCameraTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___mainCameraTransform_9;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		V_1 = L_3;
		// for (int i = 0; i < 3; i++)
		V_3 = 0;
		goto IL_00ad;
	}

IL_001f:
	{
		// int layerMask = 1 << LayerMask.NameToLayer(layers[i]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___layers_8;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8;
		L_8 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(L_7, NULL);
		V_4 = ((int32_t)(1<<((int32_t)(L_8&((int32_t)31)))));
		// float grabrange = grabRange;
		float L_9 = __this->___grabRange_5;
		V_5 = L_9;
		// if (!layers[i].Equals("Interactive"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___layers_8;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_13, _stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A, NULL);
		if (L_14)
		{
			goto IL_0056;
		}
	}
	{
		// grabrange = 3;
		V_5 = (3.0f);
	}

IL_0056:
	{
		// if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabrange, layerMask))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		float L_17 = V_5;
		int32_t L_18 = V_4;
		bool L_19;
		L_19 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_15, L_16, (&V_2), L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		// GameObject hitObject = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_2), NULL);
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		V_6 = L_21;
		// interactiveHits[i] = hitObject.GetComponent<InteractiveParent>();
		InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* L_22 = __this->___interactiveHits_7;
		int32_t L_23 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_6;
		NullCheck(L_24);
		InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* L_25;
		L_25 = GameObject_GetComponent_TisInteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756_m9283B997A10A36A25EF72B4E7EB72D424022A15A(L_24, GameObject_GetComponent_TisInteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756_m9283B997A10A36A25EF72B4E7EB72D424022A15A_RuntimeMethod_var);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)L_25);
		goto IL_008d;
	}

IL_0084:
	{
		// interactiveHits[i] = null;
		InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* L_26 = __this->___interactiveHits_7;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, NULL);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)NULL);
	}

IL_008d:
	{
		// if (interactiveHits[i])
		InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* L_28 = __this->___interactiveHits_7;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		if (!L_32)
		{
			goto IL_00a9;
		}
	}
	{
		// interactiveHits[i].CurrentlySelected();
		InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* L_33 = __this->___interactiveHits_7;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		VirtualActionInvoker0::Invoke(6 /* System.Void nico.InteractiveParent::CurrentlySelected() */, L_36);
	}

IL_00a9:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00ad:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_38 = V_3;
		if ((((int32_t)L_38) < ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		// Debug.DrawRay(raycastOrigin, raycastDirection * grabRange, Color.red, 0.1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_1;
		float L_41 = __this->___grabRange_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_40, L_41, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		L_43 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m138E5FEDB690CF8433B7B7B3446B841DEAE76370(L_39, L_42, L_43, (0.100000001f), NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_m00B9207DD75A1071B870A0AA62DB6CA09C9DD2D6 (PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43F60B7F51FCF02D53C154B8C764B88199A097CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float grabRange = 3;
		__this->___grabRange_5 = (3.0f);
		// InteractiveParent[] interactiveHits = new InteractiveParent[3];
		InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3* L_0 = (InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3*)(InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3*)SZArrayNew(InteractiveParentU5BU5D_tE3214755D5B4C38044EB30798736FF2FEB47BFD3_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___interactiveHits_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactiveHits_7), (void*)L_0);
		// string[] layers = new string[] { "Interactive", "Basket", "BasketInteractive"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3CC9FCD3E8581D5C50FDDA4BA49BA38CCAD9127A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral95EFF4CF655F88AA71DBFD7A49371F196C6537B8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral43F60B7F51FCF02D53C154B8C764B88199A097CF);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral43F60B7F51FCF02D53C154B8C764B88199A097CF);
		__this->___layers_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layers_8), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void nico.PlayerActions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__cctor_mA19EDF08DB231E5A2EC2F26FFFE9ACCFFF5C38D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float grabTime = 2;
		((PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_StaticFields*)il2cpp_codegen_static_fields_for(PlayerActions_tB528110025954EDA3C3B98A029146C30F540F497_il2cpp_TypeInfo_var))->___grabTime_6 = (2.0f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.PlayerBasket::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_Awake_mAE81D45ABD5FA3F4E1D6CADA8FD5ECAA4BF6F9EC (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_StaticFields*)il2cpp_codegen_static_fields_for(PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void nico.PlayerBasket::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_Start_m48D4B33C27DC62AE83BFDE5E0AADD58404E1B68B (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TestManager.SetRecojerCanastoFlag(true);
		TestManager_SetRecojerCanastoFlag_mE6479CD2BB288F6AE5B6D2DE1AD82A4E6EFB219E_inline((bool)1, NULL);
		// for (int i = 0; i < 6; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000a:
	{
		// objectsTransforms[i] = objectsTransformsParent.GetChild(i);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___objectsTransforms_7;
		int32_t L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___objectsTransformsParent_6;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_4);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_4);
		// for (int i = 0; i < 6; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)6)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 nico.PlayerBasket::AddObject(nico.Articulo,System.Int32,nico.Seleccionable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerBasket_AddObject_m643775AD5B2780C7095CBCF6C45D0EEDC5389E14 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, int32_t ___newArticulo0, int32_t ___index1, Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* ___seleccionable2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int i = 0;
		V_0 = 0;
		// foreach (Articulo articulo in objetos)
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_0 = __this->___objetos_8;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0045;
	}

IL_000d:
	{
		// foreach (Articulo articulo in objetos)
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (articulo == Articulo.EMPTY)
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		// SeleccionableBasket seleccionableBasket = objectsTransforms[i].GetChild(index).GetComponent<SeleccionableBasket>();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___objectsTransforms_7;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___index1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, L_9, NULL);
		NullCheck(L_10);
		SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* L_11;
		L_11 = Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A(L_10, Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A_RuntimeMethod_var);
		// seleccionableBasket.seleccionable = seleccionable;
		SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* L_12 = L_11;
		Seleccionable_tD356F2E0DE63F65B1840476FFEC2D448098D6047* L_13 = ___seleccionable2;
		NullCheck(L_12);
		L_12->___seleccionable_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___seleccionable_11), (void*)L_13);
		// seleccionableBasket.SetState(true);
		NullCheck(L_12);
		SeleccionableBasket_SetState_m10C5FD4CDBACA5616A18A9A74452E395E84BDA55(L_12, (bool)1, NULL);
		// objetos[i] = newArticulo;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_14 = __this->___objetos_8;
		int32_t L_15 = V_0;
		int32_t L_16 = ___newArticulo0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_16);
		// break;
		goto IL_004b;
	}

IL_003d:
	{
		// i++;
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0045:
	{
		// foreach (Articulo articulo in objetos)
		int32_t L_19 = V_2;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000d;
		}
	}

IL_004b:
	{
		// if (IsBasketFull())
		bool L_21;
		L_21 = PlayerBasket_IsBasketFull_mB9C26E76A954BE23BBDCBE426F945593E08FC19C(__this, NULL);
		if (!L_21)
		{
			goto IL_007b;
		}
	}
	{
		// Mostrador.Instance.ComputeTotalValue(objetos);
		Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB* L_22 = ((Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_StaticFields*)il2cpp_codegen_static_fields_for(Mostrador_t262A0C4E6DC9BDC8372C5A41B71EAAFF4AEB77EB_il2cpp_TypeInfo_var))->___Instance_8;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_23 = __this->___objetos_8;
		NullCheck(L_22);
		Mostrador_ComputeTotalValue_m10350971BB6F4BE34A00CC05A6AA42164B5D0768(L_22, L_23, NULL);
		// if (TutorialManager.Instance)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_24 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_007b;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.IrCaja);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_26 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_26);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_26, ((int32_t)13), NULL);
	}

IL_007b:
	{
		// if (TutorialManager.Instance)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_27 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_27, NULL);
		if (!L_28)
		{
			goto IL_00aa;
		}
	}
	{
		// if (GetNumArticulos() >= 3 && TutorialManager.Instance.tutorialState == TutorialState.RecojerObjetos)
		int32_t L_29;
		L_29 = PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4(__this, NULL);
		if ((((int32_t)L_29) < ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_30 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_30);
		int32_t L_31 = L_30->___tutorialState_16;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00aa;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.DevolerObjetos);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_32 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_32);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_32, ((int32_t)11), NULL);
	}

IL_00aa:
	{
		// return maxArticulos - GetNumArticulos();
		int32_t L_33 = __this->___maxArticulos_5;
		int32_t L_34;
		L_34 = PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_33, L_34));
	}
}
// System.Void nico.PlayerBasket::RemoveObject(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_RemoveObject_mA08F2D6BB5D4B6DD52309658D57D3A79C0E7840E (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, int32_t ___index0, int32_t ___basketIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SeleccionableBasket seleccionableBasket = objectsTransforms[basketIndex].GetChild(index).GetComponent<SeleccionableBasket>();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___objectsTransforms_7;
		int32_t L_1 = ___basketIndex1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, L_4, NULL);
		NullCheck(L_5);
		SeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC* L_6;
		L_6 = Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A(L_5, Component_GetComponent_TisSeleccionableBasket_tF00AA7726E4A6BF66D7DF747E6016A4B39D209DC_mF82ACBA3F1A0E5B234EC30B4C0DCB1D8E891D42A_RuntimeMethod_var);
		// seleccionableBasket.SetState(false);
		NullCheck(L_6);
		SeleccionableBasket_SetState_m10C5FD4CDBACA5616A18A9A74452E395E84BDA55(L_6, (bool)0, NULL);
		// objetos[basketIndex] = Articulo.EMPTY;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_7 = __this->___objetos_8;
		int32_t L_8 = ___basketIndex1;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)0);
		// if (TutorialManager.Instance)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_9 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		// if (TutorialManager.Instance.tutorialState == TutorialState.DevolerObjetos)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_11 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_11);
		int32_t L_12 = L_11->___tutorialState_16;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0048;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.LlenarObjetos);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_13 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_13);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_13, ((int32_t)12), NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerBasket::PickupBasket(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket_PickupBasket_m1FBBA75A4F4BF60854B6770199A4ED0070202817 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ogBasket0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TestManager.SetRecojerCanastoFlag(false);
		TestManager_SetRecojerCanastoFlag_mE6479CD2BB288F6AE5B6D2DE1AD82A4E6EFB219E_inline((bool)0, NULL);
		// TestManager.SetArticulosFlag(true);
		TestManager_SetArticulosFlag_m121BD7CE50E7570F964A45FF7AB540023E1B2313_inline((bool)1, NULL);
		// hasBasket = true;
		__this->___hasBasket_10 = (bool)1;
		// basketTransform.GetChild(0).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___basketTransform_9;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// basketTransform.position = ogBasket.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___basketTransform_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___ogBasket0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_6, NULL);
		// basketTransform.rotation = ogBasket.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___basketTransform_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___ogBasket0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_10, NULL);
		// ogBasket.transform.position = Vector3.down * 500;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = ___ogBasket0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (500.0f), NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_14, NULL);
		// if (TutorialManager.Instance)
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_15 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0088;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.RecojerObjetos);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_17 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_17);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_17, ((int32_t)10), NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Int32 nico.PlayerBasket::GetNumArticulos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4 (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int total = 0;
		V_0 = 0;
		// foreach (Articulo articulo in objetos)
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_0 = __this->___objetos_8;
		V_1 = L_0;
		V_2 = 0;
		goto IL_001a;
	}

IL_000d:
	{
		// foreach (Articulo articulo in objetos)
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (int32_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (articulo != Articulo.EMPTY)
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		// total++;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0016:
	{
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001a:
	{
		// foreach (Articulo articulo in objetos)
		int32_t L_7 = V_2;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// return total;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean nico.PlayerBasket::IsBasketFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerBasket_IsBasketFull_mB9C26E76A954BE23BBDCBE426F945593E08FC19C (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) 
{
	{
		// return GetNumArticulos() == maxArticulos;
		int32_t L_0;
		L_0 = PlayerBasket_GetNumArticulos_m2F6A3EA1F73BC3655CA47DE41D5499EFF82D63B4(__this, NULL);
		int32_t L_1 = __this->___maxArticulos_5;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Void nico.PlayerBasket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBasket__ctor_m33211B750E787A410A82F8F9A01D68436CC3803F (PlayerBasket_t93143FE920CB21365CD5B050DA05131CB4AAE75D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int maxArticulos = 6;
		__this->___maxArticulos_5 = 6;
		// Transform[] objectsTransforms = new Transform[6];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___objectsTransforms_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectsTransforms_7), (void*)L_0);
		// public Articulo[] objetos = new Articulo[6];
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_1 = (ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33*)(ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33*)SZArrayNew(ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___objetos_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objetos_8), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.PlayerMovement_old::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_Awake_m37FFB6C698D102FEEC59AE0DA71086B3EECF83AE (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_Start_m3F6D3A0C623409E1DE78F2B7DA1C3D73199E8A9C (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_12), (void*)L_0);
		// ogBasketAnchorLocalPos = basketTransform.GetChild(0).localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___basketTransform_14;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___ogBasketAnchorLocalPos_18 = L_3;
		// ogBasketAnchorLocalRotation = basketTransform.GetChild(0).localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___basketTransform_14;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		__this->___ogBasketAnchorLocalRotation_19 = L_6;
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_Update_mDAA9CBCF5FBE639818A365734B959652256CB049 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ObtainOffsetDirection();
		PlayerMovement_old_ObtainOffsetDirection_m4DC459F125E312123A03D7B747C50B68C9E3D0DD(__this, NULL);
		// UpdateMovementState();
		PlayerMovement_old_UpdateMovementState_m50A14EE4A74040607808F15B4621741A6286D457(__this, NULL);
		// if (!isLocked)
		bool L_0 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___isLocked_16;
		if (L_0)
		{
			goto IL_0099;
		}
	}
	{
		// if (isMoving)//Muevete
		bool L_1 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___isMoving_8;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 moveDirection = cameraLookDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___cameraLookDirection_10;
		V_0 = L_2;
		// moveDirection.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___rb_12;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10 = __this->___friccion_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_5, L_8, ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_9, L_10)))), NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_11, NULL);
		goto IL_00a6;
	}

IL_006b:
	{
		// rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rb_12;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_16;
		L_16 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_17 = __this->___friccion_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_14, L_15, ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		NullCheck(L_12);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_18, NULL);
		goto IL_00a6;
	}

IL_0099:
	{
		// else if (mostradorFlag)//Si esta en el mostrador
		bool L_19 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___mostradorFlag_15;
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		// IsOnMostrador();
		PlayerMovement_old_IsOnMostrador_mD0E03FECF51F955AAC78C0626EA9E7A9CFF6AD63(__this, NULL);
	}

IL_00a6:
	{
		// cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime * sensibility);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___cameraLookDirection_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___realLookDirection_11;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_23 = __this->___sensibility_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_20, L_21, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		__this->___cameraLookDirection_10 = L_24;
		// cameraTransform.rotation = Quaternion.LookRotation(cameraLookDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___cameraTransform_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___cameraLookDirection_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_26, NULL);
		NullCheck(L_25);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_25, L_27, NULL);
		// MoveBasket(cameraLookDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___cameraLookDirection_10;
		PlayerMovement_old_MoveBasket_m679C488E646A526F05C387B85DA656C1FD7363D2(__this, L_28, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_MoveBasket_m679C488E646A526F05C387B85DA656C1FD7363D2 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) 
{
	{
		// if (basketInteractive.selectedState <= 0)
		BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* L_0 = __this->___basketInteractive_20;
		NullCheck(L_0);
		int32_t L_1 = L_0->___selectedState_8;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketLookDirection.y = 0;
		(&___basketLookDirection0)->___y_3 = (0.0f);
		// basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.LookRotation(basketLookDirection), Time.deltaTime * 2); // Que el giro no sea instantanea, para que pueda ser mirado
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___basketTransform_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___basketTransform_14;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___basketLookDirection0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_4, L_6, ((float)il2cpp_codegen_multiply(L_7, (2.0f))), NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_8, NULL);
		// if (basketTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___basketTransform_14;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketTransform.GetChild(0).localPosition = Vector3.Lerp(basketTransform.GetChild(0).localPosition, ogBasketAnchorLocalPos, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___basketTransform_14;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_11, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___basketTransform_14;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 0, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___ogBasketAnchorLocalPos_18;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, (3.0f))), NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_18, NULL);
		// basketTransform.GetChild(0).localRotation = Quaternion.Lerp(basketTransform.GetChild(0).localRotation, ogBasketAnchorLocalRotation, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___basketTransform_14;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___basketTransform_14;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 0, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___ogBasketAnchorLocalRotation_19;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_23, L_24, ((float)il2cpp_codegen_multiply(L_25, (3.0f))), NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_26, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_ObtainOffsetDirection_m4DC459F125E312123A03D7B747C50B68C9E3D0DD (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float rotacionHorizontal = 0;
		V_0 = (0.0f);
		// float rotacionVertical = 0;
		V_1 = (0.0f);
		// float force = 0.5f;
		V_2 = (0.5f);
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// rotacionVertical += force;
		float L_1 = V_1;
		float L_2 = V_2;
		V_1 = ((float)il2cpp_codegen_add(L_1, L_2));
	}

IL_001f:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// rotacionVertical -= force;
		float L_4 = V_1;
		float L_5 = V_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_4, L_5));
	}

IL_002c:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_6;
		L_6 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// rotacionHorizontal -= force;
		float L_7 = V_0;
		float L_8 = V_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_0039:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_9;
		L_9 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// rotacionHorizontal += force;
		float L_10 = V_0;
		float L_11 = V_2;
		V_0 = ((float)il2cpp_codegen_add(L_10, L_11));
	}

IL_0046:
	{
		// if (rotacionHorizontal != 0)
		float L_12 = V_0;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0079;
		}
	}
	{
		// realLookDirection = Quaternion.Euler(0, rotacionHorizontal, 0) * realLookDirection * 0.75f;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_13, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___realLookDirection_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (0.75f), NULL);
		__this->___realLookDirection_11 = L_17;
	}

IL_0079:
	{
		// if (rotacionVertical != 0)
		float L_18 = V_1;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_00b1;
		}
	}
	{
		// realLookDirection += rotacionVertical * Vector3.up * Time.deltaTime * 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___realLookDirection_11;
		float L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_20, L_21, NULL);
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_25, NULL);
		__this->___realLookDirection_11 = L_26;
	}

IL_00b1:
	{
		// realLookDirection.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (&__this->___realLookDirection_11);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_27, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::CollidedWithMostrador(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_CollidedWithMostrador_mFD16F52B7F7C0C12CEA64C6665FE81428DEF0C5D (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mostradorFlag)
		bool L_0 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___mostradorFlag_15;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// mostradorFlag = true;
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___mostradorFlag_15 = (bool)1;
		// isLocked = true;
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___isLocked_16 = (bool)1;
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// mostradorPosition = targetPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPos0;
		__this->___mostradorPosition_17 = L_3;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_IsOnMostrador_mD0E03FECF51F955AAC78C0626EA9E7A9CFF6AD63 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetPos = mostradorPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___mostradorPosition_17;
		V_0 = L_0;
		// float distance = Vector3.Distance(transform.position, targetPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		// if (distance < 0.01f)
		if ((!(((float)L_4) < ((float)(0.00999999978f)))))
		{
			goto IL_002c;
		}
	}
	{
		// transform.position = targetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		return;
	}

IL_002c:
	{
		// transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_13, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement_old::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old_UpdateMovementState_m50A14EE4A74040607808F15B4621741A6286D457 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		// if (ButtonWasPressed()) //Que se empieze a mover 0.01 segundos despues de pulsar, para que se pueda detectar cuando esta quieto
		bool L_0;
		L_0 = PlayerMovement_old_ButtonWasPressed_mA6F3C4ABF47B032151926ACCC7CEA4A7036E4BBE(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// movementCooldown = 0.01f;
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___movementCooldown_9 = (0.00999999978f);
	}

IL_0011:
	{
		// isMoving = movementCooldown <= 0 && ButtonIsHeld();
		float L_1 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___movementCooldown_9;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = PlayerMovement_old_ButtonIsHeld_m88AA347861AFAB40711AE196382C351630FB1419(NULL);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___isMoving_8 = (bool)G_B5_0;
		// movementCooldown -= Time.deltaTime;
		float L_3 = ((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___movementCooldown_9;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1_il2cpp_TypeInfo_var))->___movementCooldown_9 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// }
		return;
	}
}
// System.Single nico.PlayerMovement_old::GetCurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerMovement_old_GetCurrentSpeed_m1982742BA6C0C43C3940803CF2F2FD2CC68484B7 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return rb.velocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_12;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean nico.PlayerMovement_old::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_old_ButtonIsHeld_m88AA347861AFAB40711AE196382C351630FB1419 (const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean nico.PlayerMovement_old::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_old_ButtonWasPressed_mA6F3C4ABF47B032151926ACCC7CEA4A7036E4BBE (const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void nico.PlayerMovement_old::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_old__ctor_m296F39618FCC687F9621901A042CF4757FBB4379 (PlayerMovement_old_t026885CE4E8851EC53600BF7796F68E11E1A80A1* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1f;
		__this->___speed_5 = (1.0f);
		// public float friccion = 1f;
		__this->___friccion_6 = (1.0f);
		// public float sensibility = 1f;
		__this->___sensibility_7 = (1.0f);
		// public Vector3 cameraLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___cameraLookDirection_10 = L_0;
		// Vector3 realLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___realLookDirection_11 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.Metricas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Metricas__ctor_m244A619424F5144E1AD237A2B617642ED2117D0E (Metricas_t6E4628848B60262750160839A49946CD4675C5D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool irse_sin_bolsa = true; // Si se fue sin la bolsa de productos
		__this->___irse_sin_bolsa_18 = (bool)1;
		// public Articulo[] objetos = new Articulo[6]; // Lista de objetos que se pide
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_0 = (ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33*)(ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33*)SZArrayNew(ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___objetos_28 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objetos_28), (void*)L_0);
		// public Metricas()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// nico.Articulo[] nico.Metricas::registrarLista(System.Collections.Generic.Dictionary`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* Metricas_registrarLista_mFFA80DA305E584B5DA0B10B6681A68E622E580C3 (Metricas_t6E4628848B60262750160839A49946CD4675C5D1* __this, Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___lista0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5B4AB9234E9B5AA8776F5A5E98BD96AADD36A445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEEE30D933563208EBCF7F651BDC442631A5C6D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCB84750BAFE59C7D53C86B28A910BBE68DDE5D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m58E48C7A4B001DD9CC590DEF18D64A3D9E5E6F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C99292C35F69BEF80CC4F3BE0D5664F2050F8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AF9FBD36A3A65B9685474AEA7793508C600B6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5282B2FB98742A47A86B5B4959E175B64702C55B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D5ED969308836FAB01283C399918C21E06FD20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1F996542C7088B15FDEEBD9BB62235DF3955CC5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int k = 0;
		V_0 = 0;
		// foreach( KeyValuePair<string, int> kvp in lista ) {
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = ___lista0;
		NullCheck(L_0);
		Enumerator_tA2BDFFCCD73E0822BD39B8A162012DCD95F9FDCA L_1;
		L_1 = Dictionary_2_GetEnumerator_m5B4AB9234E9B5AA8776F5A5E98BD96AADD36A445(L_0, Dictionary_2_GetEnumerator_m5B4AB9234E9B5AA8776F5A5E98BD96AADD36A445_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0132:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEEE30D933563208EBCF7F651BDC442631A5C6D0B((&V_1), Enumerator_Dispose_mEEE30D933563208EBCF7F651BDC442631A5C6D0B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0124_1;
			}

IL_000e_1:
			{
				// foreach( KeyValuePair<string, int> kvp in lista ) {
				KeyValuePair_2_t203D89707A14A98B3FB295DFFAC0F4D3CF2B1078 L_2;
				L_2 = Enumerator_get_Current_m58E48C7A4B001DD9CC590DEF18D64A3D9E5E6F7B_inline((&V_1), Enumerator_get_Current_m58E48C7A4B001DD9CC590DEF18D64A3D9E5E6F7B_RuntimeMethod_var);
				V_2 = L_2;
				// switch (kvp.Key){
				String_t* L_3;
				L_3 = KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_inline((&V_2), KeyValuePair_2_get_Key_mC9FB52D78F362AE8CD0466E65D0CAFB23CD1C25D_RuntimeMethod_var);
				V_3 = L_3;
				String_t* L_4 = V_3;
				bool L_5;
				L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralB1F996542C7088B15FDEEBD9BB62235DF3955CC5, NULL);
				if (L_5)
				{
					goto IL_006a_1;
				}
			}
			{
				String_t* L_6 = V_3;
				bool L_7;
				L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral0C99292C35F69BEF80CC4F3BE0D5664F2050F8D3, NULL);
				if (L_7)
				{
					goto IL_0092_1;
				}
			}
			{
				String_t* L_8 = V_3;
				bool L_9;
				L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral46AF9FBD36A3A65B9685474AEA7793508C600B6A, NULL);
				if (L_9)
				{
					goto IL_00b7_1;
				}
			}
			{
				String_t* L_10 = V_3;
				bool L_11;
				L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralA9D5ED969308836FAB01283C399918C21E06FD20, NULL);
				if (L_11)
				{
					goto IL_00dc_1;
				}
			}
			{
				String_t* L_12 = V_3;
				bool L_13;
				L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral5282B2FB98742A47A86B5B4959E175B64702C55B, NULL);
				if (L_13)
				{
					goto IL_0101_1;
				}
			}
			{
				goto IL_0124_1;
			}

IL_006a_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				V_4 = 0;
				goto IL_0082_1;
			}

IL_006f_1:
			{
				// objetos[k] = Articulo.Bebida;
				ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_14 = __this->___objetos_28;
				int32_t L_15 = V_0;
				NullCheck(L_14);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)4);
				// k++;
				int32_t L_16 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0082_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_18 = V_4;
				int32_t L_19;
				L_19 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_2), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
				if ((((int32_t)L_18) < ((int32_t)L_19)))
				{
					goto IL_006f_1;
				}
			}
			{
				// break;
				goto IL_0124_1;
			}

IL_0092_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				V_5 = 0;
				goto IL_00aa_1;
			}

IL_0097_1:
			{
				// objetos[k] = Articulo.Chorizo;
				ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_20 = __this->___objetos_28;
				int32_t L_21 = V_0;
				NullCheck(L_20);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (int32_t)3);
				// k++;
				int32_t L_22 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_23 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
			}

IL_00aa_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_24 = V_5;
				int32_t L_25;
				L_25 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_2), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
				if ((((int32_t)L_24) < ((int32_t)L_25)))
				{
					goto IL_0097_1;
				}
			}
			{
				// break;
				goto IL_0124_1;
			}

IL_00b7_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				V_6 = 0;
				goto IL_00cf_1;
			}

IL_00bc_1:
			{
				// objetos[k] = Articulo.Cordero;
				ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_26 = __this->___objetos_28;
				int32_t L_27 = V_0;
				NullCheck(L_26);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (int32_t)5);
				// k++;
				int32_t L_28 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_29 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
			}

IL_00cf_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_30 = V_6;
				int32_t L_31;
				L_31 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_2), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_00bc_1;
				}
			}
			{
				// break;
				goto IL_0124_1;
			}

IL_00dc_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				V_7 = 0;
				goto IL_00f4_1;
			}

IL_00e1_1:
			{
				// objetos[k] = Articulo.Galleta;
				ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_32 = __this->___objetos_28;
				int32_t L_33 = V_0;
				NullCheck(L_32);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (int32_t)1);
				// k++;
				int32_t L_34 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_35 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			}

IL_00f4_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_36 = V_7;
				int32_t L_37;
				L_37 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_2), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
				if ((((int32_t)L_36) < ((int32_t)L_37)))
				{
					goto IL_00e1_1;
				}
			}
			{
				// break;
				goto IL_0124_1;
			}

IL_0101_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				V_8 = 0;
				goto IL_0119_1;
			}

IL_0106_1:
			{
				// objetos[k] = Articulo.Tomate;
				ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_38 = __this->___objetos_28;
				int32_t L_39 = V_0;
				NullCheck(L_38);
				(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (int32_t)2);
				// k++;
				int32_t L_40 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_41 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_0119_1:
			{
				// for(int i = 0; i < kvp.Value; i++){
				int32_t L_42 = V_8;
				int32_t L_43;
				L_43 = KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_inline((&V_2), KeyValuePair_2_get_Value_m49EC6C1CD52DC0ED12D5C9116368BB112EA11917_RuntimeMethod_var);
				if ((((int32_t)L_42) < ((int32_t)L_43)))
				{
					goto IL_0106_1;
				}
			}

IL_0124_1:
			{
				// foreach( KeyValuePair<string, int> kvp in lista ) {
				bool L_44;
				L_44 = Enumerator_MoveNext_mCB84750BAFE59C7D53C86B28A910BBE68DDE5D33((&V_1), Enumerator_MoveNext_mCB84750BAFE59C7D53C86B28A910BBE68DDE5D33_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0140;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0140:
	{
		// return objetos;
		ArticuloU5BU5D_t3E3B3415E0A1CB394610B131E3B5AD8F533FCB33* L_45 = __this->___objetos_28;
		return L_45;
	}
}
// System.Single nico.Metricas::ComputeGeneralScore(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Metricas_ComputeGeneralScore_m80B78341941BD735D55F079FFB7DA1A4B0B282EF (Metricas_t6E4628848B60262750160839A49946CD4675C5D1* __this, float ___peso_interacciones0, float ___peso_billetes1, float ___peso_correctos2, float ___peso_pago3, float ___peso_viaje4, float ___peso_bolsa5, float ___peso_compra6, float ___peso_ruta7, float ___peso_cruces8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// float interaccion_score = 6f / veces_recogido_objeto;
		int32_t L_0 = __this->___veces_recogido_objeto_10;
		// float billetes_score = cantidad_minima_billetes / (veces_marcado_billete + veces_devuelto_billete);
		int32_t L_1 = __this->___cantidad_minima_billetes_27;
		int32_t L_2 = __this->___veces_marcado_billete_12;
		int32_t L_3 = __this->___veces_devuelto_billete_13;
		V_0 = ((float)((int32_t)(L_1/((int32_t)il2cpp_codegen_add(L_2, L_3)))));
		// float correctos_score = articulos_validos / 6f;
		int32_t L_4 = __this->___articulos_validos_20;
		V_1 = ((float)(((float)L_4)/(6.0f)));
		// float pago_score = 1-Math.Abs(vuelto_final)/1000;
		int32_t L_5 = __this->___vuelto_final_15;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = il2cpp_codegen_abs(L_5);
		V_2 = ((float)((int32_t)il2cpp_codegen_subtract(1, ((int32_t)(L_6/((int32_t)1000))))));
		// float idavueltatiempo_score = 1 - Math.Max(tiempo_total_ida / tiempo_total_vuelta, tiempo_total_vuelta / tiempo_total_ida);
		float L_7 = __this->___tiempo_total_ida_1;
		float L_8 = __this->___tiempo_total_vuelta_2;
		float L_9 = __this->___tiempo_total_vuelta_2;
		float L_10 = __this->___tiempo_total_ida_1;
		float L_11;
		L_11 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(((float)(L_7/L_8)), ((float)(L_9/L_10)), NULL);
		V_3 = ((float)il2cpp_codegen_subtract((1.0f), L_11));
		// float bolsa_score = Convert.ToInt32(irse_sin_bolsa);
		bool L_12 = __this->___irse_sin_bolsa_18;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Convert_ToInt32_m54E891D837D238AD3700E7554AA565E69A7BC983(L_12, NULL);
		V_4 = ((float)L_13);
		// float compratiempo_score = 1 - Math.Max(tiempo_total_articulos / tiempo_total_caja, tiempo_total_caja / tiempo_total_articulos); // no se
		float L_14 = __this->___tiempo_total_articulos_5;
		float L_15 = __this->___tiempo_total_caja_6;
		float L_16 = __this->___tiempo_total_caja_6;
		float L_17 = __this->___tiempo_total_articulos_5;
		float L_18;
		L_18 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(((float)(L_14/L_15)), ((float)(L_16/L_17)), NULL);
		V_5 = ((float)il2cpp_codegen_subtract((1.0f), L_18));
		// float ruta_score = cantidad_segmentos_ruta_transitados / cantidad_segmentos_ruta;
		int32_t L_19 = __this->___cantidad_segmentos_ruta_transitados_25;
		int32_t L_20 = __this->___cantidad_segmentos_ruta_24;
		V_6 = ((float)((int32_t)(L_19/L_20)));
		// float cruces_score = 1-contador_cruces_invalidos / (contador_cruces_validos + contador_cruces_invalidos);
		int32_t L_21 = __this->___contador_cruces_invalidos_21;
		int32_t L_22 = __this->___contador_cruces_validos_22;
		int32_t L_23 = __this->___contador_cruces_invalidos_21;
		V_7 = ((float)((int32_t)il2cpp_codegen_subtract(1, ((int32_t)(L_21/((int32_t)il2cpp_codegen_add(L_22, L_23)))))));
		// float score = interaccion_score * peso_interacciones + billetes_score * peso_billetes + correctos_score * peso_correctos + pago_score * peso_pago + idavueltatiempo_score * peso_viaje + bolsa_score * peso_bolsa + compratiempo_score * peso_compra + ruta_score * peso_ruta + cruces_score * peso_cruces;
		float L_24 = ___peso_interacciones0;
		float L_25 = V_0;
		float L_26 = ___peso_billetes1;
		float L_27 = V_1;
		float L_28 = ___peso_correctos2;
		float L_29 = V_2;
		float L_30 = ___peso_pago3;
		float L_31 = V_3;
		float L_32 = ___peso_viaje4;
		float L_33 = V_4;
		float L_34 = ___peso_bolsa5;
		float L_35 = V_5;
		float L_36 = ___peso_compra6;
		float L_37 = V_6;
		float L_38 = ___peso_ruta7;
		float L_39 = V_7;
		float L_40 = ___peso_cruces8;
		// return score;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)((6.0f)/((float)L_0))), L_24)), ((float)il2cpp_codegen_multiply(L_25, L_26)))), ((float)il2cpp_codegen_multiply(L_27, L_28)))), ((float)il2cpp_codegen_multiply(L_29, L_30)))), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_33, L_34)))), ((float)il2cpp_codegen_multiply(L_35, L_36)))), ((float)il2cpp_codegen_multiply(L_37, L_38)))), ((float)il2cpp_codegen_multiply(L_39, L_40))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 nico.ObjetosConstants::GetPrecioArticulo(nico.Articulo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjetosConstants_GetPrecioArticulo_m45E5487719E2DBB2ED6825FA221292D8857C1EBE (int32_t ___articulo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA7AE8CA2DBFC2E8DAACD0B277E4B8BC724B05DC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m72D248ECAF2B0AF8EE7F3E4586BBB0CEF6CDF682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (precios_articulos == null)
		il2cpp_codegen_runtime_class_init_inline(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var);
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_0 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		if (L_0)
		{
			goto IL_0091;
		}
	}
	{
		// precios_articulos = new Dictionary<Articulo, int>();
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_1 = (Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4*)il2cpp_codegen_object_new(Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA7AE8CA2DBFC2E8DAACD0B277E4B8BC724B05DC1(L_1, Dictionary_2__ctor_mA7AE8CA2DBFC2E8DAACD0B277E4B8BC724B05DC1_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var);
		((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0), (void*)L_1);
		// precios_articulos[Articulo.Bebida] = GetPrecioPorMonedas(0, 0, 0, 0, 0, 1, 0, 0, 0);//2000
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_2 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_3;
		L_3 = ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706(0, 0, 0, 0, 0, 1, 0, 0, 0, NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37(L_2, 4, L_3, Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
		// precios_articulos[Articulo.Chorizo] = GetPrecioPorMonedas(0, 1, 2, 1, 0, 0, 0, 0, 0);//750
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_4 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_5;
		L_5 = ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706(0, 1, 2, 1, 0, 0, 0, 0, 0, NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37(L_4, 3, L_5, Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
		// precios_articulos[Articulo.Cordero] = GetPrecioPorMonedas(0, 0, 1, 1, 0, 1, 1, 0, 0);//7600
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_6 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_7;
		L_7 = ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706(0, 0, 1, 1, 0, 1, 1, 0, 0, NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37(L_6, 5, L_7, Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
		// precios_articulos[Articulo.Galleta] = GetPrecioPorMonedas(0, 0, 0, 0, 1, 0, 0, 0, 0);//1000
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_8 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_9;
		L_9 = ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706(0, 0, 0, 0, 1, 0, 0, 0, 0, NULL);
		NullCheck(L_8);
		Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37(L_8, 1, L_9, Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
		// precios_articulos[Articulo.Tomate] = GetPrecioPorMonedas(2, 1, 3, 0, 0, 0, 0, 0, 0);//370
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_10 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_11;
		L_11 = ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706(2, 1, 3, 0, 0, 0, 0, 0, 0, NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37(L_10, 2, L_11, Dictionary_2_set_Item_mE7B9D32B31CEA4396253CF6897C3743AA091DB37_RuntimeMethod_var);
	}

IL_0091:
	{
		// return precios_articulos[articulo];
		il2cpp_codegen_runtime_class_init_inline(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var);
		Dictionary_2_t0934F907AE815FAA79AE841EBB7032A627E853F4* L_12 = ((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___precios_articulos_0;
		int32_t L_13 = ___articulo0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = Dictionary_2_get_Item_m72D248ECAF2B0AF8EE7F3E4586BBB0CEF6CDF682(L_12, L_13, Dictionary_2_get_Item_m72D248ECAF2B0AF8EE7F3E4586BBB0CEF6CDF682_RuntimeMethod_var);
		return L_14;
	}
}
// System.Int32 nico.ObjetosConstants::GetPrecioPorMonedas(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjetosConstants_GetPrecioPorMonedas_m9F4A553FC9571300FD24E8EE7B6E533DFC3C2706 (int32_t ___X0, int32_t ___L1, int32_t ___C2, int32_t ___D3, int32_t ___M4, int32_t ___MM5, int32_t ___V6, int32_t ___x7, int32_t ___xx8, const RuntimeMethod* method) 
{
	{
		// int valor = X * 10 + L * 50 + C * 100 + D * 500 + M * 1000 + MM * 2000 + V * 5000 + x * 10000 + xx * 20000;
		int32_t L_0 = ___X0;
		int32_t L_1 = ___L1;
		int32_t L_2 = ___C2;
		int32_t L_3 = ___D3;
		int32_t L_4 = ___M4;
		int32_t L_5 = ___MM5;
		int32_t L_6 = ___V6;
		int32_t L_7 = ___x7;
		int32_t L_8 = ___xx8;
		// return valor;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)10))), ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)50))))), ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)500))))), ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)1000))))), ((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)2000))))), ((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)5000))))), ((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)10000))))), ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)20000)))));
	}
}
// System.Int32[] nico.ObjetosConstants::GetBilletesPorPrecio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ObjetosConstants_GetBilletesPorPrecio_mD0BA2ABB5E791D243CF2E6F4C8D7A0134E164841 (int32_t ___precio0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int xx = precio / 20000;
		int32_t L_0 = ___precio0;
		V_0 = ((int32_t)(L_0/((int32_t)20000)));
		// precio -= xx * 20000;
		int32_t L_1 = ___precio0;
		int32_t L_2 = V_0;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)20000)))));
		// int x = precio / 10000;
		int32_t L_3 = ___precio0;
		V_1 = ((int32_t)(L_3/((int32_t)10000)));
		// precio -= x * 10000;
		int32_t L_4 = ___precio0;
		int32_t L_5 = V_1;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)10000)))));
		// int V = precio / 5000;
		int32_t L_6 = ___precio0;
		V_2 = ((int32_t)(L_6/((int32_t)5000)));
		// precio -= V * 5000;
		int32_t L_7 = ___precio0;
		int32_t L_8 = V_2;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)5000)))));
		// int MM = precio / 2000;
		int32_t L_9 = ___precio0;
		V_3 = ((int32_t)(L_9/((int32_t)2000)));
		// precio -= MM * 2000;
		int32_t L_10 = ___precio0;
		int32_t L_11 = V_3;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)2000)))));
		// int M = precio / 1000;
		int32_t L_12 = ___precio0;
		V_4 = ((int32_t)(L_12/((int32_t)1000)));
		// precio -= M * 1000;
		int32_t L_13 = ___precio0;
		int32_t L_14 = V_4;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)1000)))));
		// int D = precio / 500;
		int32_t L_15 = ___precio0;
		V_5 = ((int32_t)(L_15/((int32_t)500)));
		// precio -= D * 500;
		int32_t L_16 = ___precio0;
		int32_t L_17 = V_5;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)500)))));
		// int C = precio / 100;
		int32_t L_18 = ___precio0;
		V_6 = ((int32_t)(L_18/((int32_t)100)));
		// precio -= C * 100;
		int32_t L_19 = ___precio0;
		int32_t L_20 = V_6;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)100)))));
		// int L = precio / 50;
		int32_t L_21 = ___precio0;
		V_7 = ((int32_t)(L_21/((int32_t)50)));
		// precio -= L * 50;
		int32_t L_22 = ___precio0;
		int32_t L_23 = V_7;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_22, ((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)50)))));
		// int X = precio / 10;
		int32_t L_24 = ___precio0;
		V_8 = ((int32_t)(L_24/((int32_t)10)));
		// precio -= X * 10;
		int32_t L_25 = ___precio0;
		int32_t L_26 = V_8;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_25, ((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)10)))));
		goto IL_00b1;
	}

IL_00a5:
	{
		// X++;
		int32_t L_27 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// precio -= 10;
		int32_t L_28 = ___precio0;
		___precio0 = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)10)));
	}

IL_00b1:
	{
		// while (precio > 0)
		int32_t L_29 = ___precio0;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		// return new int[] {X, L, C, D, M, MM, V, x, xx, precio};
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30;
		int32_t L_32 = V_8;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_32);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = L_31;
		int32_t L_34 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_33;
		int32_t L_36 = V_6;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_35;
		int32_t L_38 = V_5;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_38);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_37;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_40);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_39;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_42);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_41;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_43;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_46);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = L_45;
		int32_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_48);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_47;
		int32_t L_50 = ___precio0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_50);
		return L_49;
	}
}
// System.Void nico.ObjetosConstants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetosConstants__ctor_m41C9F38969E36F2DF8A2A425D4D08478FBE24470 (ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void nico.ObjetosConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjetosConstants__cctor_mCA28FC562165D32174399E5538C86B8CA92D4C07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____F8DE7997E8AC90D3C2663774A9EA0E4C0064759737D3BF6342AB231751827327_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int[] coins = new int[] { 10, 50, 100, 500, 1000, 2000, 5000, 10000, 20000 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____F8DE7997E8AC90D3C2663774A9EA0E4C0064759737D3BF6342AB231751827327_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___coins_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_StaticFields*)il2cpp_codegen_static_fields_for(ObjetosConstants_tEE531A4F074BA0F53B5183D1643BB9B993CDF158_il2cpp_TypeInfo_var))->___coins_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.CirculoRojo::Update_()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CirculoRojo_Update__mE298AE7ADD9B7C8A231FEDCE9EB0C9635B1C0F00 (CirculoRojo_t11DF39ED6406D5A43A538CB6B8B872189B2337A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCurrentlySelected)
		bool L_0 = ((InteractiveParent_t3EE294ABBDD0B7E4356F11110F85AB8EADB59756*)__this)->___isCurrentlySelected_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.MantenerCamara);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_1 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_1);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_1, 1, NULL);
		goto IL_0020;
	}

IL_0015:
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.MoverCamara);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_2 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_2, 0, NULL);
	}

IL_0020:
	{
		// if (Vector3.Distance(PlayerMovement.Instance.transform.position, transform.position) > 15)
		PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* L_3 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___Instance_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_5, L_7, NULL);
		if ((!(((float)L_8) > ((float)(15.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.Moverse);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_9 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_9);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_9, 2, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean nico.CirculoRojo::SelectionConditionFunction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CirculoRojo_SelectionConditionFunction_mB52CE10082669AA7A6B132F5BA728C7852FF6D32 (CirculoRojo_t11DF39ED6406D5A43A538CB6B8B872189B2337A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedTime += Time.deltaTime;
		float L_0 = __this->___selectedTime_8;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___selectedTime_8 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (selectedTime > 3)
		float L_2 = __this->___selectedTime_8;
		if ((!(((float)L_2) > ((float)(3.0f)))))
		{
			goto IL_0036;
		}
	}
	{
		// TutorialManager.Instance.ChangeTutorialState(TutorialState.Moverse);
		TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A* L_3 = ((TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialManager_t79676A2BE7BDFFD064FD91C1E7678E2A8B6E119A_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		TutorialManager_ChangeTutorialState_m7E170BEA6515ED12A94E117DB6AC7AA2656BDC69(L_3, 2, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_0036:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void nico.CirculoRojo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CirculoRojo__ctor_m794BED3823F81E475FBD63755AF6A79FA9325C17 (CirculoRojo_t11DF39ED6406D5A43A538CB6B8B872189B2337A8* __this, const RuntimeMethod* method) 
{
	{
		InteractiveParent__ctor_mAE6C3B204B7F01508AEA788C48CF4EB9E2DD4DA7(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_mC4913D12326A8D034F4742FC836A3D1F1A96B1C4 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mEBB310EDFD0A4E9B210F213A15E787ED346FEE92 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_13), (void*)L_0);
		// ogBasketAnchorLocalPos = basketTransform.GetChild(0).localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___basketTransform_17;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___ogBasketAnchorLocalPos_21 = L_3;
		// ogBasketAnchorLocalRotation = basketTransform.GetChild(0).localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___basketTransform_17;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		__this->___ogBasketAnchorLocalRotation_22 = L_6;
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_m3E2327701A8B8907BF15184A833DF2800D1ABDC9 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateMovementState();
		PlayerMovement_UpdateMovementState_m2513976D7F6D0A336F3B1D2A963A555CD6D69723(__this, NULL);
		// ObtainOffsetDirection();
		PlayerMovement_ObtainOffsetDirection_mF36024A4EBAFAF2886E26B35BF8108B16ECB648A(__this, NULL);
		// if(vr){
		bool L_0 = __this->___vr_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// realLookDirection = mainCameraTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___mainCameraTransform_16;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		__this->___realLookDirection_12 = L_2;
	}

IL_0025:
	{
		// if (!isLocked)
		bool L_3 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___isLocked_19;
		if (L_3)
		{
			goto IL_00b2;
		}
	}
	{
		// if (isMoving)//Muevete
		bool L_4 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___isMoving_9;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		// Vector3 moveDirection = cameraLookDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___cameraLookDirection_11;
		V_0 = L_5;
		// moveDirection.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_13;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_13 = __this->___friccion_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_12, L_13)))), NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_14, NULL);
		goto IL_00bf;
	}

IL_0084:
	{
		// rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_13;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_20 = __this->___friccion_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		NullCheck(L_15);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_15, L_21, NULL);
		goto IL_00bf;
	}

IL_00b2:
	{
		// else if (mostradorFlag)//Si esta en el mostrador
		bool L_22 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___mostradorFlag_18;
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		// IsOnMostrador();
		PlayerMovement_IsOnMostrador_mECC79EE37BA568AF1078A0A40F9F86DFDFCC741C(__this, NULL);
	}

IL_00bf:
	{
		// cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime * sensibility);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___cameraLookDirection_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___realLookDirection_12;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_26 = __this->___sensibility_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_24, ((float)il2cpp_codegen_multiply(L_25, L_26)), NULL);
		__this->___cameraLookDirection_11 = L_27;
		// if(!vr){
		bool L_28 = __this->___vr_4;
		if (L_28)
		{
			goto IL_0102;
		}
	}
	{
		// cameraParentTransform.rotation = Quaternion.LookRotation(cameraLookDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___cameraParentTransform_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___cameraLookDirection_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_30, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_31, NULL);
		goto IL_012e;
	}

IL_0102:
	{
		// cameraTransform.rotation = mainCameraTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___cameraTransform_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___mainCameraTransform_16;
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_34, NULL);
		// cameraTransform.position = mainCameraTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___cameraTransform_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___mainCameraTransform_16;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_37, NULL);
	}

IL_012e:
	{
		// MoveBasket(cameraLookDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___cameraLookDirection_11;
		PlayerMovement_MoveBasket_mA7D7B35CEC2621A9308CB4912250353219352DE3(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_MoveBasket_mA7D7B35CEC2621A9308CB4912250353219352DE3 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) 
{
	{
		// if (basketInteractive.selectedState <= 0)
		BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* L_0 = __this->___basketInteractive_23;
		NullCheck(L_0);
		int32_t L_1 = L_0->___selectedState_8;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketLookDirection.y = 0;
		(&___basketLookDirection0)->___y_3 = (0.0f);
		// basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.LookRotation(basketLookDirection), Time.deltaTime * 2); // Que el giro no sea instantanea, para que pueda ser mirado
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___basketTransform_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___basketTransform_17;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___basketLookDirection0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_4, L_6, ((float)il2cpp_codegen_multiply(L_7, (2.0f))), NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_8, NULL);
		// if (basketTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___basketTransform_17;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketTransform.GetChild(0).localPosition = Vector3.Lerp(basketTransform.GetChild(0).localPosition, ogBasketAnchorLocalPos, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___basketTransform_17;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_11, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___basketTransform_17;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 0, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___ogBasketAnchorLocalPos_21;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, (3.0f))), NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_18, NULL);
		// basketTransform.GetChild(0).localRotation = Quaternion.Lerp(basketTransform.GetChild(0).localRotation, ogBasketAnchorLocalRotation, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___basketTransform_17;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___basketTransform_17;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 0, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___ogBasketAnchorLocalRotation_22;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_23, L_24, ((float)il2cpp_codegen_multiply(L_25, (3.0f))), NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_26, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_ObtainOffsetDirection_mF36024A4EBAFAF2886E26B35BF8108B16ECB648A (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float rotacionHorizontal = 0;
		V_0 = (0.0f);
		// float rotacionVertical = 0;
		V_1 = (0.0f);
		// float force = 0.5f;
		V_2 = (0.5f);
		// if(!vr){
		bool L_0 = __this->___vr_4;
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// rotacionVertical += force;
		float L_2 = V_1;
		float L_3 = V_2;
		V_1 = ((float)il2cpp_codegen_add(L_2, L_3));
	}

IL_0027:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// rotacionVertical -= force;
		float L_5 = V_1;
		float L_6 = V_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0034:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// rotacionHorizontal -= force;
		float L_8 = V_0;
		float L_9 = V_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0041:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// rotacionHorizontal += force;
		float L_11 = V_0;
		float L_12 = V_2;
		V_0 = ((float)il2cpp_codegen_add(L_11, L_12));
	}

IL_004e:
	{
		// if (rotacionHorizontal != 0)
		float L_13 = V_0;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_0081;
		}
	}
	{
		// realLookDirection = Quaternion.Euler(0, rotacionHorizontal, 0) * realLookDirection * 0.75f;
		float L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_14, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___realLookDirection_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (0.75f), NULL);
		__this->___realLookDirection_12 = L_18;
	}

IL_0081:
	{
		// if (rotacionVertical != 0)
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00b9;
		}
	}
	{
		// realLookDirection += rotacionVertical * Vector3.up * Time.deltaTime * 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___realLookDirection_12;
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_26, NULL);
		__this->___realLookDirection_12 = L_27;
	}

IL_00b9:
	{
		// realLookDirection.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___realLookDirection_12);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_28, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::CollidedWithMostrador(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_CollidedWithMostrador_m22B19F87BD06CF31FDF806EE7BA0830B174D9DE4 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mostradorFlag)
		bool L_0 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___mostradorFlag_18;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// mostradorFlag = true;
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___mostradorFlag_18 = (bool)1;
		// isLocked = true;
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___isLocked_19 = (bool)1;
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// mostradorPosition = targetPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPos0;
		__this->___mostradorPosition_20 = L_3;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_IsOnMostrador_mECC79EE37BA568AF1078A0A40F9F86DFDFCC741C (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetPos = mostradorPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___mostradorPosition_20;
		V_0 = L_0;
		// float distance = Vector3.Distance(transform.position, targetPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		// if (distance < 0.01f)
		if ((!(((float)L_4) < ((float)(0.00999999978f)))))
		{
			goto IL_002c;
		}
	}
	{
		// transform.position = targetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		return;
	}

IL_002c:
	{
		// transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_13, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovement::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_UpdateMovementState_m2513976D7F6D0A336F3B1D2A963A555CD6D69723 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		// if (ButtonWasPressed()) //Que se empieze a mover 0.01 segundos despues de pulsar, para que se pueda detectar cuando esta quieto
		bool L_0;
		L_0 = PlayerMovement_ButtonWasPressed_mAE6CB1A42030386D409E8D430A2E9298BD1332B3(__this, NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// movementCooldown += 0.01f;
		float L_1 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10;
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10 = ((float)il2cpp_codegen_add(L_1, (0.00999999978f)));
	}

IL_0018:
	{
		// isMoving = movementCooldown <= 0 && ButtonIsHeld();
		float L_2 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		bool L_3;
		L_3 = PlayerMovement_ButtonIsHeld_m5F8A7AC4744BACD07223248376A98DA16B2981D7(__this, NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___isMoving_9 = (bool)G_B5_0;
		// movementCooldown = Mathf.Max(0, movementCooldown - Time.deltaTime);
		float L_4 = ((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		((PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC_il2cpp_TypeInfo_var))->___movementCooldown_10 = L_6;
		// }
		return;
	}
}
// System.Single nico.PlayerMovement::GetCurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerMovement_GetCurrentSpeed_m9B4F62773044817B74E637F9E4BFB4E68CF288C5 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return rb.velocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean nico.PlayerMovement::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_ButtonIsHeld_m5F8A7AC4744BACD07223248376A98DA16B2981D7 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	{
		// if(!vr){
		bool L_0 = __this->___vr_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space))
		bool L_1;
		L_1 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// if(Input.anyKey){
		bool L_3;
		L_3 = Input_get_anyKey_m6FF00BB4F01FA996E2FB3F3727EBC414C8EB2CEB(NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean nico.PlayerMovement::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovement_ButtonWasPressed_mAE6CB1A42030386D409E8D430A2E9298BD1332B3 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	{
		// if(!vr){
		bool L_0 = __this->___vr_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}

IL_0019:
	{
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// if(Input.anyKeyDown){
		bool L_3;
		L_3 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0026:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void nico.PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_m88FD2DD0569E802601258C3314A5196B91AD57B8 (PlayerMovement_t380C5628C27D56B2C5F718C1B2CD6040CA8793EC* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1f;
		__this->___speed_6 = (1.0f);
		// public float friccion = 1f;
		__this->___friccion_7 = (1.0f);
		// public float sensibility = 1f;
		__this->___sensibility_8 = (1.0f);
		// public Vector3 cameraLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___cameraLookDirection_11 = L_0;
		// Vector3 realLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___realLookDirection_12 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void nico.PlayerMovementVR::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_Awake_m138CD30D95502BCB63A418CCA86B0E1BCA6E7A29 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___Instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___Instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_Start_m32092E291CA7A0A9D07A84AD4DAE572DA8BD6FC6 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_13), (void*)L_0);
		// ogBasketAnchorLocalPos = basketTransform.GetChild(0).localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___basketTransform_17;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->___ogBasketAnchorLocalPos_21 = L_3;
		// ogBasketAnchorLocalRotation = basketTransform.GetChild(0).localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___basketTransform_17;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_5, NULL);
		__this->___ogBasketAnchorLocalRotation_22 = L_6;
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_Update_m7F9BE9CDE6954C2B37A901BA7CB95268431CF3A2 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdateMovementState();
		PlayerMovementVR_UpdateMovementState_m96FFE4ABBE8098BCA9F86446A8D70C8811304D57(__this, NULL);
		// ObtainOffsetDirection();
		PlayerMovementVR_ObtainOffsetDirection_mB5301FBB8DB66E3ED4F8FB60C971CB38D16A4756(__this, NULL);
		// if(vr){
		bool L_0 = __this->___vr_4;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// realLookDirection = mainCameraTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___mainCameraTransform_16;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_1, NULL);
		__this->___realLookDirection_12 = L_2;
	}

IL_0025:
	{
		// if (!isLocked)
		bool L_3 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___isLocked_19;
		if (L_3)
		{
			goto IL_00b2;
		}
	}
	{
		// if (isMoving)//Muevete
		bool L_4 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___isMoving_9;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		// Vector3 moveDirection = cameraLookDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___cameraLookDirection_11;
		V_0 = L_5;
		// moveDirection.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___rb_13;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_13 = __this->___friccion_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_11, ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_12, L_13)))), NULL);
		NullCheck(L_6);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_6, L_14, NULL);
		goto IL_00bf;
	}

IL_0084:
	{
		// rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15 = __this->___rb_13;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rb_13;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_20 = __this->___friccion_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_17, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		NullCheck(L_15);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_15, L_21, NULL);
		goto IL_00bf;
	}

IL_00b2:
	{
		// else if (mostradorFlag)//Si esta en el mostrador
		bool L_22 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___mostradorFlag_18;
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		// IsOnMostrador();
		PlayerMovementVR_IsOnMostrador_m743F3C5A04B1EE4832D5B526ADE5646B3242FC2B(__this, NULL);
	}

IL_00bf:
	{
		// cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime * sensibility);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___cameraLookDirection_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___realLookDirection_12;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_26 = __this->___sensibility_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_23, L_24, ((float)il2cpp_codegen_multiply(L_25, L_26)), NULL);
		__this->___cameraLookDirection_11 = L_27;
		// if(!vr){
		bool L_28 = __this->___vr_4;
		if (L_28)
		{
			goto IL_0102;
		}
	}
	{
		// cameraParentTransform.rotation = Quaternion.LookRotation(cameraLookDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___cameraParentTransform_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___cameraLookDirection_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_30, NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_31, NULL);
		goto IL_012e;
	}

IL_0102:
	{
		// cameraTransform.rotation = mainCameraTransform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___cameraTransform_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___mainCameraTransform_16;
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		NullCheck(L_32);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_32, L_34, NULL);
		// cameraTransform.position = mainCameraTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___cameraTransform_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___mainCameraTransform_16;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_37, NULL);
	}

IL_012e:
	{
		// MoveBasket(cameraLookDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___cameraLookDirection_11;
		PlayerMovementVR_MoveBasket_mBDF34A7B52182C1C175313CF9A60896BF0BA1990(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::MoveBasket(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_MoveBasket_mBDF34A7B52182C1C175313CF9A60896BF0BA1990 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___basketLookDirection0, const RuntimeMethod* method) 
{
	{
		// if (basketInteractive.selectedState <= 0)
		BasketInteractive_tEFCDBA448A379DF1CB237F39964A29722ABF8CEC* L_0 = __this->___basketInteractive_23;
		NullCheck(L_0);
		int32_t L_1 = L_0->___selectedState_8;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketLookDirection.y = 0;
		(&___basketLookDirection0)->___y_3 = (0.0f);
		// basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.LookRotation(basketLookDirection), Time.deltaTime * 2); // Que el giro no sea instantanea, para que pueda ser mirado
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___basketTransform_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___basketTransform_17;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___basketLookDirection0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_4, L_6, ((float)il2cpp_codegen_multiply(L_7, (2.0f))), NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_8, NULL);
		// if (basketTransform.childCount > 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___basketTransform_17;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		// basketTransform.GetChild(0).localPosition = Vector3.Lerp(basketTransform.GetChild(0).localPosition, ogBasketAnchorLocalPos, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___basketTransform_17;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_11, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___basketTransform_17;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_13, 0, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___ogBasketAnchorLocalPos_21;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_15, L_16, ((float)il2cpp_codegen_multiply(L_17, (3.0f))), NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_18, NULL);
		// basketTransform.GetChild(0).localRotation = Quaternion.Lerp(basketTransform.GetChild(0).localRotation, ogBasketAnchorLocalRotation, Time.deltaTime * 3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___basketTransform_17;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_19, 0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___basketTransform_17;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_21, 0, NULL);
		NullCheck(L_22);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___ogBasketAnchorLocalRotation_22;
		float L_25;
		L_25 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_23, L_24, ((float)il2cpp_codegen_multiply(L_25, (3.0f))), NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_26, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::ObtainOffsetDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_ObtainOffsetDirection_mB5301FBB8DB66E3ED4F8FB60C971CB38D16A4756 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float rotacionHorizontal = 0;
		V_0 = (0.0f);
		// float rotacionVertical = 0;
		V_1 = (0.0f);
		// float force = 0.5f;
		V_2 = (0.5f);
		// if(!vr){
		bool L_0 = __this->___vr_4;
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// rotacionVertical += force;
		float L_2 = V_1;
		float L_3 = V_2;
		V_1 = ((float)il2cpp_codegen_add(L_2, L_3));
	}

IL_0027:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// rotacionVertical -= force;
		float L_5 = V_1;
		float L_6 = V_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0034:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_7;
		L_7 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// rotacionHorizontal -= force;
		float L_8 = V_0;
		float L_9 = V_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0041:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_10;
		L_10 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// rotacionHorizontal += force;
		float L_11 = V_0;
		float L_12 = V_2;
		V_0 = ((float)il2cpp_codegen_add(L_11, L_12));
	}

IL_004e:
	{
		// if (rotacionHorizontal != 0)
		float L_13 = V_0;
		if ((((float)L_13) == ((float)(0.0f))))
		{
			goto IL_0081;
		}
	}
	{
		// realLookDirection = Quaternion.Euler(0, rotacionHorizontal, 0) * realLookDirection * 0.75f;
		float L_14 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_14, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___realLookDirection_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (0.75f), NULL);
		__this->___realLookDirection_12 = L_18;
	}

IL_0081:
	{
		// if (rotacionVertical != 0)
		float L_19 = V_1;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00b9;
		}
	}
	{
		// realLookDirection += rotacionVertical * Vector3.up * Time.deltaTime * 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___realLookDirection_12;
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_21, L_22, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_26, NULL);
		__this->___realLookDirection_12 = L_27;
	}

IL_00b9:
	{
		// realLookDirection.Normalize();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___realLookDirection_12);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_28, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::CollidedWithMostrador(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_CollidedWithMostrador_m5E2477AFAAD29033E0D93F1F8FA21E89CC241A18 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mostradorFlag)
		bool L_0 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___mostradorFlag_18;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// mostradorFlag = true;
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___mostradorFlag_18 = (bool)1;
		// isLocked = true;
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___isLocked_19 = (bool)1;
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_1);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_1, L_2, NULL);
		// mostradorPosition = targetPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___targetPos0;
		__this->___mostradorPosition_20 = L_3;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::IsOnMostrador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_IsOnMostrador_m743F3C5A04B1EE4832D5B526ADE5646B3242FC2B (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 targetPos = mostradorPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___mostradorPosition_20;
		V_0 = L_0;
		// float distance = Vector3.Distance(transform.position, targetPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_3, NULL);
		// if (distance < 0.01f)
		if ((!(((float)L_4) < ((float)(0.00999999978f)))))
		{
			goto IL_002c;
		}
	}
	{
		// transform.position = targetPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_6, NULL);
		return;
	}

IL_002c:
	{
		// transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_9, L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_13, NULL);
		// }
		return;
	}
}
// System.Void nico.PlayerMovementVR::UpdateMovementState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR_UpdateMovementState_m96FFE4ABBE8098BCA9F86446A8D70C8811304D57 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		// if (ButtonWasPressed()) //Que se empieze a mover 0.01 segundos despues de pulsar, para que se pueda detectar cuando esta quieto
		bool L_0;
		L_0 = PlayerMovementVR_ButtonWasPressed_m1BB5965DE055C67FF35EBD6D685A407EE2AAEDEA(NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// movementCooldown = 0.01f;
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___movementCooldown_10 = (0.00999999978f);
	}

IL_0011:
	{
		// isMoving = movementCooldown <= 0 && ButtonIsHeld();
		float L_1 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___movementCooldown_10;
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = PlayerMovementVR_ButtonIsHeld_m9BBC9DBD076085D69DC7CC32BEF9900F6A6AD332(NULL);
		G_B5_0 = ((int32_t)(L_2));
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 0;
	}

IL_0025:
	{
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___isMoving_9 = (bool)G_B5_0;
		// movementCooldown -= Time.deltaTime;
		float L_3 = ((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___movementCooldown_10;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		((PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1_il2cpp_TypeInfo_var))->___movementCooldown_10 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// }
		return;
	}
}
// System.Single nico.PlayerMovementVR::GetCurrentSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerMovementVR_GetCurrentSpeed_mFBF1AB4714F9E1286F1D27E781FB4C8E7F028FC9 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return rb.velocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_13;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean nico.PlayerMovementVR::ButtonIsHeld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovementVR_ButtonIsHeld_m9BBC9DBD076085D69DC7CC32BEF9900F6A6AD332 (const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean nico.PlayerMovementVR::ButtonWasPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMovementVR_ButtonWasPressed_m1BB5965DE055C67FF35EBD6D685A407EE2AAEDEA (const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void nico.PlayerMovementVR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementVR__ctor_m97DC21307FB45A3CF19901FE616005ABB76D8CB5 (PlayerMovementVR_tD1696B6A1D11513B1B89D8B8E7BCE91A71AD6CA1* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1f;
		__this->___speed_6 = (1.0f);
		// public float friccion = 1f;
		__this->___friccion_7 = (1.0f);
		// public float sensibility = 1f;
		__this->___sensibility_8 = (1.0f);
		// public Vector3 cameraLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___cameraLookDirection_11 = L_0;
		// Vector3 realLookDirection = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___realLookDirection_12 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetIdaFlag_m933F285E5120CBF0340F6CC440C055C73EDCFA83_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enIda = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enIda_7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetKioskoFlag_mEDDEEDC6F0633FE7C8322BABEF3776279D8E6C80_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enKiosko = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enKiosko_9 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetRecojerCanastoFlag_mE6479CD2BB288F6AE5B6D2DE1AD82A4E6EFB219E_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enCanasto = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enCanasto_10 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetIrseFlag_m0BE626854C3056281DF67463FDCA88E40CCAD3A3_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enIrse = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enIrse_13 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetVueltaFlag_m3619D260952451B54EE29AF6B9CB9634972BEFAC_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enVuelta = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enVuelta_8 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetTestFlag_m8B9C3038E56F8D8230656B0CBB938FFE5136CA10_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enTest = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enTest_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void End_Invoke_m0F9F838D54448F1201F0C0C9B1B54507FE40B5FB_inline (End_t3AF33FA6A337D33F68693794B40EFD8676CD4B2B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TestManager_SetArticulosFlag_m121BD7CE50E7570F964A45FF7AB540023E1B2313_inline (bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enArticulos = state;
		bool L_0 = ___state0;
		((TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_StaticFields*)il2cpp_codegen_static_fields_for(TestManager_t66CD4ADE01A6422660224F04159B14E4C7F448DE_il2cpp_TypeInfo_var))->___enArticulos_11 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 Enumerator_get_Current_mBE91823E27777785B42DB31E7A8E63EB596453D1_gshared_inline (Enumerator_t2F28D1CFE62CD55B7184C7D9DD43CCC9C03CC5EF* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8 L_0 = (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mADC45FA05C759E6F88D7DADDFE0C0E1ADBB3E501_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m7A836D9634814B22DF33AD801EA10741ABFBDFE2_gshared_inline (KeyValuePair_2_tF11CA6D20F09EC4DAB7CB3C2C394F6F2C394E6B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
