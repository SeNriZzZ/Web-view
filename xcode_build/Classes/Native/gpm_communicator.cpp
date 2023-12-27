#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE;
// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<Gpm.Communicator.Internal.GameObjectManager/GameObjectType>
struct IEqualityComparer_1_tBAD42D1C2F4AA87FAE995A018B694912553595DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct KeyCollection_t7E99353414E269C3B79559089DE872AADE4CDE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct KeyCollection_tE0A68D53685058162D67ADC1D0E7506FF14D726E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct ValueCollection_tB04B83758270E7547C6D21DAA734966B2579F06A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct ValueCollection_t1E6E697AAA0F202B78C08FE55756A1A31F5CD0AD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>[]
struct EntryU5BU5D_t6B2A9B9E934D2AAAAF17620B955D5AC5BE0F1162;
// System.Collections.Generic.Dictionary`2/Entry<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>[]
struct EntryU5BU5D_tA02BD6EAFC2B596FE58518FF76176F957E8A4CDD;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Gpm.Communicator.Internal.Communicator
struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F;
// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA;
// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9;
// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888;
// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE;
// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Gpm.Communicator.Internal.INativeMessageSender
struct INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B;
// Gpm.Communicator.Internal.Ios.IosMessageSender
struct IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895;
// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern
struct IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A;

IL2CPP_EXTERN_C RuntimeClass* CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0;
IL2CPP_EXTERN_C String_t* _stringLiteral9C13E73639856F799F682DDAB93967312F44069F;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863;
IL2CPP_EXTERN_C String_t* _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076;
IL2CPP_EXTERN_C String_t* _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F;
IL2CPP_EXTERN_C String_t* _stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866;
IL2CPP_EXTERN_C String_t* _stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206;
IL2CPP_EXTERN_C String_t* _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m2BE3E74F0768518342C422ABE744823E259E73E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t60A7A076F87C8A44202D81FB015941BA264BFBF1 
{
};

// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6B2A9B9E934D2AAAAF17620B955D5AC5BE0F1162* ____entries_1;
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
	KeyCollection_t7E99353414E269C3B79559089DE872AADE4CDE08* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB04B83758270E7547C6D21DAA734966B2579F06A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA02BD6EAFC2B596FE58518FF76176F957E8A4CDD* ____entries_1;
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
	KeyCollection_tE0A68D53685058162D67ADC1D0E7506FF14D726E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1E6E697AAA0F202B78C08FE55756A1A31F5CD0AD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA  : public RuntimeObject
{
	// Gpm.Communicator.Internal.Communicator Gpm.Communicator.Internal.CommunicatorImplementation::communicator
	Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* ___communicator_1;
};

// Gpm.Communicator.Internal.Log.CommunicatorLogger
struct CommunicatorLogger_t702F97A81108CDA0E0C12AB0660FA73A2A0C3593  : public RuntimeObject
{
};

// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786  : public RuntimeObject
{
};

// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9  : public RuntimeObject
{
};

// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888  : public RuntimeObject
{
};

// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE  : public RuntimeObject
{
};

// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324  : public RuntimeObject
{
};

// Gpm.Communicator.Internal.Ios.IosMessageSender
struct IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895  : public RuntimeObject
{
	// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern Gpm.Communicator.Internal.Ios.IosMessageSender::iosMessageSenderExtern
	IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* ___iosMessageSenderExtern_1;
};

// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern
struct IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD  : public RuntimeObject
{
	// System.String Gpm.Communicator.GpmCommunicatorVO/Configuration::className
	String_t* ___className_0;
};

// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_tFCC9E5F0F507C157748FA34EED0653C32378756A  : public RuntimeObject
{
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::domain
	String_t* ___domain_0;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::data
	String_t* ___data_1;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::extra
	String_t* ___extra_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Gpm.Communicator.Internal.Communicator
struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Gpm.Communicator.Internal.INativeMessageSender Gpm.Communicator.Internal.Communicator::messageSender
	RuntimeObject* ___messageSender_4;
	// System.String Gpm.Communicator.Internal.Communicator::methodName
	String_t* ___methodName_5;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>

// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>

// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>

// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields
{
	// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::instance
	CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* ___instance_0;
};

// Gpm.Communicator.Internal.CommunicatorImplementation

// Gpm.Communicator.Internal.Log.CommunicatorLogger

// Gpm.Communicator.Internal.Log.CommunicatorLogger

// Gpm.Communicator.Internal.ComponentManager

// Gpm.Communicator.Internal.ComponentManager

// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject> Gpm.Communicator.Internal.GameObjectManager::gameObjectDictionary
	Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* ___gameObjectDictionary_0;
};

// Gpm.Communicator.Internal.GameObjectManager

// Gpm.Communicator.GpmCommunicator

// Gpm.Communicator.GpmCommunicator

// Gpm.Communicator.GpmCommunicatorCallback

// Gpm.Communicator.GpmCommunicatorCallback

// Gpm.Communicator.GpmCommunicatorVO

// Gpm.Communicator.GpmCommunicatorVO

// Gpm.Communicator.Internal.Ios.IosMessageSender
struct IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_StaticFields
{
	// Gpm.Communicator.Internal.Ios.IosMessageSender Gpm.Communicator.Internal.Ios.IosMessageSender::instance
	IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* ___instance_0;
};

// Gpm.Communicator.Internal.Ios.IosMessageSender

// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern

// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Gpm.Communicator.GpmCommunicatorVO/Configuration

// Gpm.Communicator.GpmCommunicatorVO/Configuration

// Gpm.Communicator.GpmCommunicatorVO/Message

// Gpm.Communicator.GpmCommunicatorVO/Message

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.AsyncCallback

// System.AsyncCallback

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback

// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Gpm.Communicator.Internal.Communicator
struct Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback> Gpm.Communicator.Internal.Communicator::receiverDictionary
	Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* ___receiverDictionary_7;
};

// Gpm.Communicator.Internal.Communicator
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<System.Object>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComponentManager_AddComponent_TisRuntimeObject_m5393A462DA322A2A24E7D37C64B1ABA4BCDA493B_gshared (int32_t ___0_gameObjectType, const RuntimeMethod* method) ;

// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline (const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Gpm.Communicator.Internal.Ios.IosMessageSender Gpm.Communicator.Internal.Ios.IosMessageSender::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* IosMessageSender_get_Instance_mD470092DA78B6ECE99B5695C1F97D25DCA1698A6_inline (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::Add(TKey,TValue)
inline void Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84 (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___0_key, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_mEFD44D2DB5FA278BCB4C144EBB87B414E295EFD4 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::get_Item(TKey)
inline CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::.ctor()
inline void Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434 (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503 (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___0_key, method);
}
// System.Boolean Gpm.Communicator.Internal.GameObjectManager::ContainsGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_m51A0C87C535A4371B940F3D798D1F2907C6D350F (int32_t ___0_gameObjectType, const RuntimeMethod* method) ;
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_CreateGameObject_mED806785D844D9F041F926B5FF348C3B56ADB474 (int32_t ___0_gameObjectType, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<Gpm.Communicator.Internal.Communicator>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
inline Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m2BE3E74F0768518342C422ABE744823E259E73E1 (int32_t ___0_gameObjectType, const RuntimeMethod* method)
{
	return ((  Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* (*) (int32_t, const RuntimeMethod*))ComponentManager_AddComponent_TisRuntimeObject_m5393A462DA322A2A24E7D37C64B1ABA4BCDA493B_gshared)(___0_gameObjectType, method);
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) ;
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern__ctor_mC0E6F03FDC2D79F1F79B715EF02770E9FC67E419 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_Initialize_mB05BC4527D3A5ECB757EBBD01755E6A5EC71B829 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_gameObjectName, String_t* ___1_methodName, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_InitializeClass_m7AFB2214F0FFF8D654AD10096399FCE6DAD0E40D (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// System.String Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSenderExtern_CallSync_m0D25E27F0E82A6BFBBAA895EE7DF582AFF92D007 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_CallAsync_mE61CD84DE987225893EB6A51DEEE72AA5DBD29CB (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__ctor_m549D3D45DEF994C8763BED89E5BBB8029ADCFECA (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeUnityObject(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeUnityObject_m8B4E01C01D39B59DBF458AF46BD369BCBB229191 (String_t* ___0_gameObjectName, String_t* ___1_methodName, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeClass_mA587D319E9A252538526906198AA25CCA09531C1 (String_t* ___0_className, const RuntimeMethod* method) ;
// System.IntPtr Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosMessageSenderExtern_onRequestSync_mA0D1A073A72E6D6E28CB6C517973DA035B695FF2 (String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_onRequestAsync_m64D85CCB5DFE608956E934304A2FC2B669C1DCB1 (String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String Gpm.Communicator.Internal.Log.CommunicatorLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_m6CC6AA06F45F19D5E9B8ACA3A3D94D0549EEAAD7 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL initializeUnityObject(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL initializeClass(char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL onRequestSync(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL onRequestAsync(char*, char*, char*);
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
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m2CCFC459C16E0F0E420D7678243B4F35BC7F9420 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.InitializeClass(configuration);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline(NULL);
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = ___0_configuration;
		NullCheck(L_0);
		CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_mC9977EF5D63E724F9AB43BA75AE115E97AFF5A75 (String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.AddReceiver(domain, callback);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline(NULL);
		String_t* L_1 = ___0_domain;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_2 = ___1_callback;
		NullCheck(L_0);
		CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* GpmCommunicator_CallSync_m62FB3C82EBCD86B6B7BA2C567CE262D97DD2E104 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CommunicatorImplementation.Instance.CallSync(message);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline(NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___0_message;
		NullCheck(L_0);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2;
		L_2 = CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_m7233718BD78C361D0EC0CB8495266B8FFE5B0C6A (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.CallAsync(message);
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0;
		L_0 = CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline(NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___0_message;
		NullCheck(L_0);
		CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator__ctor_mDC6FD3B49C23464C7AA1498A510A1C42C7635B63 (GpmCommunicator_t61108A9EB135366BEBE4AE49245FA90D157B6888* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorCallback__ctor_m2F5FB8F89A845814A05C05215CCBC35EBAEB7672 (GpmCommunicatorCallback_tF1655ED6D0CBEC89E31AEA2AABAD3C00EDE91CBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Multicast(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* currentDelegate = reinterpret_cast<CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInst(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	typedef void (*FunctionPointerType) (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStatic(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_message, method);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStaticInvoker(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_message);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_ClosedStaticInvoker(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_message);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenVirtual(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_message);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInterface(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_message);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericVirtual(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	GenericVirtualActionInvoker0::Invoke(method, ___0_message);
}
void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericInterface(CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method)
{
	NullCheck(___0_message);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_message);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m586DBDDB8B64710B46280B17DBBC64340DA49FC3 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_Multicast;
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::BeginInvoke(Gpm.Communicator.GpmCommunicatorVO/Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommunicatorCallback_BeginInvoke_mEDA0E57AA22233A87FFA4083B891C896ECB71F5E (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_message;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_EndInvoke_m90B6BD6FD638C9F00959AE659133EDB428499811 (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gpm.Communicator.GpmCommunicatorVO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorVO__ctor_m8DB2F47C52706D3725080C4D811F14D5A5347EA9 (GpmCommunicatorVO_t19033F0C14E56D06FEF8BC37C4D6A8645652F324* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m443D394EFCF889D9A526B5B9B187879533FFB8B7 (Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864 (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Gpm.Communicator.Internal.Communicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__ctor_mF5873BEA01E89CCC1E9769428199078E8503BCAC (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string methodName = "OnAsyncEvent";
		__this->___methodName_5 = _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodName_5), (void*)_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		// private Communicator()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// messageSender = Ios.IosMessageSender.Instance;
		il2cpp_codegen_runtime_class_init_inline(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* L_0;
		L_0 = IosMessageSender_get_Instance_mD470092DA78B6ECE99B5695C1F97D25DCA1698A6_inline(NULL);
		__this->___messageSender_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageSender_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "Initialize");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.Initialize(GameObjectManager.GameObjectType.CORE_TYPE.ToString(), methodName);
		RuntimeObject* L_2 = __this->___messageSender_4;
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_3(GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5 = __this->___methodName_5;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::Initialize(System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "InitializeClass");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.InitializeClass(configuration.className);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_3 = ___0_configuration;
		NullCheck(L_3);
		String_t* L_4 = L_3->___className_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::InitializeClass(System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(receiverDictionary.ContainsKey(domain) == true)
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_0 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_1 = ___0_domain;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B(L_0, L_1, Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// CommunicatorLogger.Error(
		//     string.Format(
		//         "The receiver is already registered : {0}",
		//         domain),
		//     "GpmCommunicator",
		//     GetType(),
		//     "AddReceiver");
		String_t* L_3 = ___0_domain;
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE, L_3, NULL);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8(L_4, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_5, _stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3, NULL);
		// return;
		return;
	}

IL_002e:
	{
		// receiverDictionary.Add(domain, callback);
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_6 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_7 = ___0_domain;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_8 = ___1_callback;
		NullCheck(L_6);
		Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84(L_6, L_7, L_8, Dictionary_2_Add_m64D06578E9726F53A07278F8C9F40D639C87FD84_RuntimeMethod_var);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586 (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallSync");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, NULL);
		// return null;
		return (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)NULL;
	}

IL_0024:
	{
		// string responseString = messageSender.CallSync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___0_message;
		NullCheck(L_3);
		String_t* L_4 = L_3->___domain_0;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5 = ___0_message;
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_7 = ___0_message;
		NullCheck(L_7);
		String_t* L_8 = L_7->___extra_2;
		NullCheck(L_2);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(2 /* System.String Gpm.Communicator.Internal.INativeMessageSender::CallSync(System.String,System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		V_0 = L_9;
		// GpmCommunicatorVO.Message responseMessage = null;
		V_1 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)NULL;
		// if(string.IsNullOrEmpty(responseString) == true)
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_12 = V_1;
		return L_12;
	}

IL_004e:
	{
		// string[] messageData = responseString.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_13 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_13, L_15, 0, NULL);
		V_2 = L_16;
		// if (messageData == null || messageData.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_2;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_2;
		NullCheck(L_18);
		if ((((RuntimeArray*)L_18)->max_length))
		{
			goto IL_006d;
		}
	}

IL_006b:
	{
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_19 = V_1;
		return L_19;
	}

IL_006d:
	{
		// responseMessage = new GpmCommunicatorVO.Message();
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_20 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_20, NULL);
		V_1 = L_20;
		// responseMessage.domain = messageData[0];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		L_21->___domain_0 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___domain_0), (void*)L_24);
		// responseMessage.data = messageData[1];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_25 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		L_25->___data_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->___data_1), (void*)L_28);
		// responseMessage.extra = messageData[2];
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_29 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		L_29->___extra_2 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___extra_2), (void*)L_32);
		// return responseMessage;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_33 = V_1;
		return L_33;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->___messageSender_4;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallAsync");
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.CallAsync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->___messageSender_4;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_3 = ___0_message;
		NullCheck(L_3);
		String_t* L_4 = L_3->___domain_0;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_5 = ___0_message;
		NullCheck(L_5);
		String_t* L_6 = L_5->___data_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_7 = ___0_message;
		NullCheck(L_7);
		String_t* L_8 = L_7->___extra_2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::CallAsync(System.String,System.String,System.String) */, INativeMessageSender_t7AEB6858C33066A24ECB1286A5FFDAFED576905B_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::OnAsyncEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_OnAsyncEvent_m2D3348E9BCF920763F7444DB0E8B3158D5BA59FC (Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B7_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B6_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B9_0 = NULL;
	CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* G_B8_0 = NULL;
	{
		// string[] messageData = message.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_0 = ___0_message;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_0, L_2, 0, NULL);
		V_0 = L_3;
		// if(messageData == null || messageData.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// string domain = messageData[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// string data = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_2 = L_9;
		// string extra = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_3 = L_10;
		// if (receiverDictionary.ContainsKey(domain) == false)
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_11 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B(L_11, L_12, Dictionary_2_ContainsKey_m4F07F8EFB1D8B02771CE7E82D11511C8C9BD3C2B_RuntimeMethod_var);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		// CommunicatorLogger.Warn(
		//     string.Format(
		//         "There is no registered receiver : {0}",
		//         domain),
		//     "GpmCommunicator",
		//     GetType(),
		//     "OnAsyncEvent");
		String_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206, L_14, NULL);
		Type_t* L_16;
		L_16 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		CommunicatorLogger_Warn_mEFD44D2DB5FA278BCB4C144EBB87B414E295EFD4(L_15, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_16, _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE, NULL);
		// return;
		return;
	}

IL_005c:
	{
		// GpmCommunicatorCallback.CommunicatorCallback callback = receiverDictionary[domain];
		il2cpp_codegen_runtime_class_init_inline(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_17 = ((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7;
		String_t* L_18 = V_1;
		NullCheck(L_17);
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_19;
		L_19 = Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B(L_17, L_18, Dictionary_2_get_Item_mDCF54DB2F41BBEA2E2F1693F8F3F03084AF1CE3B_RuntimeMethod_var);
		// if(messageData.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		NullCheck(L_20);
		G_B6_0 = L_19;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) <= ((int32_t)1)))
		{
			G_B7_0 = L_19;
			goto IL_0071;
		}
	}
	{
		// data = messageData[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		G_B7_0 = G_B6_0;
	}

IL_0071:
	{
		// if(messageData.Length > 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_0;
		NullCheck(L_24);
		G_B8_0 = G_B7_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))) <= ((int32_t)2)))
		{
			G_B9_0 = G_B7_0;
			goto IL_007b;
		}
	}
	{
		// extra = messageData[2];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 2;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		G_B9_0 = G_B8_0;
	}

IL_007b:
	{
		// callback(new GpmCommunicatorVO.Message()
		// {
		//     domain = domain,
		//     data = data,
		//     extra = extra
		// });
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_28 = (Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*)il2cpp_codegen_object_new(Message_tFCC9E5F0F507C157748FA34EED0653C32378756A_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Message__ctor_m2B70B60F0703E1EA68F3C44EBC47CE3F2073F864(L_28, NULL);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_29 = L_28;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		L_29->___domain_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___domain_0), (void*)L_30);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_31 = L_29;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		L_31->___data_1 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___data_1), (void*)L_32);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_33 = L_31;
		String_t* L_34 = V_3;
		NullCheck(L_33);
		L_33->___extra_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___extra_2), (void*)L_34);
		NullCheck(G_B9_0);
		CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline(G_B9_0, L_33, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__cctor_mD1E5C776F96A0FE1D8487C838EA5081CAAA23DFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback> receiverDictionary = new Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback>();
		Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE* L_0 = (Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE*)il2cpp_codegen_object_new(Dictionary_2_tF81923F584B7819693CD3E93A821382D435BF7EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434(L_0, Dictionary_2__ctor_mC2D66E19ACA475429891442505823F03DCC18434_RuntimeMethod_var);
		((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_il2cpp_TypeInfo_var))->___receiverDictionary_7), (void*)L_0);
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
// System.Void Gpm.Communicator.Internal.ComponentManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentManager__ctor_mFDBE15720B15A97EDC7152607DF12A761AC27D17 (ComponentManager_t382B190EE5D4EC248DFBBEE85E7B327615EF3786* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean Gpm.Communicator.Internal.GameObjectManager::ContainsGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_m51A0C87C535A4371B940F3D798D1F2907C6D350F (int32_t ___0_gameObjectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectDictionary.ContainsKey(gameObjectType);
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_1 = ___0_gameObjectType;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503(L_0, L_1, Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::GetGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_GetGameObject_mB10AB3BEFEC8A92E5E5450505EAA2133579D0C97 (int32_t ___0_gameObjectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (false == ContainsGameObject(gameObjectType))
		int32_t L_0 = ___0_gameObjectType;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GameObjectManager_ContainsGameObject_m51A0C87C535A4371B940F3D798D1F2907C6D350F(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return CreateGameObject(gameObjectType);
		int32_t L_2 = ___0_gameObjectType;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObjectManager_CreateGameObject_mED806785D844D9F041F926B5FF348C3B56ADB474(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		// return gameObjectDictionary[gameObjectType].gameObject;
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_4 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_5 = ___0_gameObjectType;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD(L_4, L_5, Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		return L_7;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectManager_CreateGameObject_mED806785D844D9F041F926B5FF348C3B56ADB474 (int32_t ___0_gameObjectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (true == gameObjectDictionary.ContainsKey(gameObjectType))
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_1 = ___0_gameObjectType;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503(L_0, L_1, Dictionary_2_ContainsKey_mC1E90F118E9020F742F0D91A531F7194DB6A3503_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return gameObjectDictionary[gameObjectType];
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_3 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_4 = ___0_gameObjectType;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD(L_3, L_4, Dictionary_2_get_Item_m90E62FF4A7FE90E849ABDF4BEAAEEECE49CDEEDD_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// GameObject gameObject = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_6, NULL);
		V_0 = L_6;
		// gameObject.name = gameObjectType.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		Il2CppFakeBox<int32_t> L_8(GameObjectType_tF6E7E8AA12FA630C008AAC29C274B563EC568911_il2cpp_TypeInfo_var, (&___0_gameObjectType));
		String_t* L_9;
		L_9 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_8), NULL);
		NullCheck(L_7);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_7, L_9, NULL);
		// GameObject.DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_10, NULL);
		// gameObjectDictionary.Add(gameObjectType, gameObject);
		il2cpp_codegen_runtime_class_init_inline(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_11 = ((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0;
		int32_t L_12 = ___0_gameObjectType;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E(L_11, L_12, L_13, Dictionary_2_Add_m1CCA20930A12483BE759A50B0E87281D3C5E072E_RuntimeMethod_var);
		// return gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__ctor_mA30231CBCC9E7E8F3CFF71BBC70CC4DB0DAFA951 (GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__cctor_mC164F3A43CC6761C9F1D509D9F99BA801D3FBA06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private Dictionary<GameObjectType, GameObject> gameObjectDictionary = new Dictionary<GameObjectType, GameObject>();
		Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93* L_0 = (Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93*)il2cpp_codegen_object_new(Dictionary_2_t87CECDB1E5351AEBE5E78300595F19C6B0D64F93_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C(L_0, Dictionary_2__ctor_m1FB9DB648AA7691C4D8A4BAD2BF3F934C7FEC44C_RuntimeMethod_var);
		((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5440B591049099B12D42CDC5B942B7B40774D5F9_il2cpp_TypeInfo_var))->___gameObjectDictionary_0), (void*)L_0);
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
// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = ((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m2BE3E74F0768518342C422ABE744823E259E73E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CommunicatorImplementation()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// communicator = ComponentManager.AddComponent<Communicator>(GameObjectManager.GameObjectType.CORE_TYPE);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0;
		L_0 = ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m2BE3E74F0768518342C422ABE744823E259E73E1(0, ComponentManager_AddComponent_TisCommunicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F_m2BE3E74F0768518342C422ABE744823E259E73E1_RuntimeMethod_var);
		__this->___communicator_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___communicator_1), (void*)L_0);
		// communicator.Initialize();
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_1 = __this->___communicator_1;
		NullCheck(L_1);
		Communicator_Initialize_m3800F5004E8C44AFC058E160E34A0331E7607C80(L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m65C6F3351848048A942B16D1A9FDEE9B483B0A3E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* ___0_configuration, const RuntimeMethod* method) 
{
	{
		// communicator.InitializeClass(configuration);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Configuration_tEEAE0A5D89EB14F9BFA9258745FA65F306DE45DD* L_1 = ___0_configuration;
		NullCheck(L_0);
		Communicator_InitializeClass_m9869EF61BC81AC23F043FCF7461680DC638238D0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_mD8F92F27F64DF7B49E65E26BF82942EB1F0D0205 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, String_t* ___0_domain, CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* ___1_callback, const RuntimeMethod* method) 
{
	{
		// communicator.AddReceiver(domain, callback);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		String_t* L_1 = ___0_domain;
		CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* L_2 = ___1_callback;
		NullCheck(L_0);
		Communicator_AddReceiver_m1D6FA385EB581E08EB155D32AD4223FA743F1877(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* CommunicatorImplementation_CallSync_mF4A7BD9BC15602D6691293F9C6AAAAD85919422E (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	{
		// return communicator.CallSync(message);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___0_message;
		NullCheck(L_0);
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_2;
		L_2 = Communicator_CallSync_m54170A85BE950BEBB0BF7752664F9A239A801586(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m474C7627B61E1BDF5E459FF237523F659E51E161 (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	{
		// communicator.CallAsync(message);
		Communicator_t14086C5F466906B6B167C3807427FAF5D09BDA4F* L_0 = __this->___communicator_1;
		Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* L_1 = ___0_message;
		NullCheck(L_0);
		Communicator_CallAsync_m5713D0626670F63D30A168523832A0CC1F3BB5EF(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__cctor_m9225C9F2AF7B3D55E2C9C614C0FF9BC78EAF4562 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly CommunicatorImplementation instance = new CommunicatorImplementation();
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = (CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA*)il2cpp_codegen_object_new(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommunicatorImplementation__ctor_m3577E6E9320898525D6E8A87600675419A8FB2AF(L_0, NULL);
		((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// Gpm.Communicator.Internal.Ios.IosMessageSender Gpm.Communicator.Internal.Ios.IosMessageSender::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* IosMessageSender_get_Instance_mD470092DA78B6ECE99B5695C1F97D25DCA1698A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* L_0 = ((IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__ctor_m549D3D45DEF994C8763BED89E5BBB8029ADCFECA (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IosMessageSenderExtern iosMessageSenderExtern = new IosMessageSenderExtern();
		IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* L_0 = (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA*)il2cpp_codegen_object_new(IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IosMessageSenderExtern__ctor_mC0E6F03FDC2D79F1F79B715EF02770E9FC67E419(L_0, NULL);
		__this->___iosMessageSenderExtern_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iosMessageSenderExtern_1), (void*)L_0);
		// private IosMessageSender()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_Initialize_m32D61C75B6BFA871B1A9CC01669C7C5A245ABBC8 (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, String_t* ___0_gameObjectName, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	{
		// iosMessageSenderExtern.Initialize(gameObjectName, methodName);
		IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* L_0 = __this->___iosMessageSenderExtern_1;
		String_t* L_1 = ___0_gameObjectName;
		String_t* L_2 = ___1_methodName;
		NullCheck(L_0);
		IosMessageSenderExtern_Initialize_mB05BC4527D3A5ECB757EBBD01755E6A5EC71B829(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_InitializeClass_m218373A49B229B8E36F9C37784CB2F8653CAA4F6 (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	{
		// iosMessageSenderExtern.InitializeClass(className);
		IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* L_0 = __this->___iosMessageSenderExtern_1;
		String_t* L_1 = ___0_className;
		NullCheck(L_0);
		IosMessageSenderExtern_InitializeClass_m7AFB2214F0FFF8D654AD10096399FCE6DAD0E40D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String Gpm.Communicator.Internal.Ios.IosMessageSender::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSender_CallSync_m155049C1FF68B9D51FD34ABAA5EB896B413C4CA8 (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	{
		// return iosMessageSenderExtern.CallSync(domain, data, extra);
		IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* L_0 = __this->___iosMessageSenderExtern_1;
		String_t* L_1 = ___0_domain;
		String_t* L_2 = ___1_data;
		String_t* L_3 = ___2_extra;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = IosMessageSenderExtern_CallSync_m0D25E27F0E82A6BFBBAA895EE7DF582AFF92D007(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_CallAsync_mD08DF3F20B95998F9010088FC37B0FC4FACE02DE (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	{
		// iosMessageSenderExtern.CallAsync(domain, data, extra);
		IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* L_0 = __this->___iosMessageSenderExtern_1;
		String_t* L_1 = ___0_domain;
		String_t* L_2 = ___1_data;
		String_t* L_3 = ___2_extra;
		NullCheck(L_0);
		IosMessageSenderExtern_CallAsync_mE61CD84DE987225893EB6A51DEEE72AA5DBD29CB(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__cctor_m16520D63CAAFE8680B390C0F0980CD5FFFE8A97C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IosMessageSender instance = new IosMessageSender();
		IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* L_0 = (IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895*)il2cpp_codegen_object_new(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IosMessageSender__ctor_m549D3D45DEF994C8763BED89E5BBB8029ADCFECA(L_0, NULL);
		((IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeUnityObject(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeUnityObject_m8B4E01C01D39B59DBF458AF46BD369BCBB229191 (String_t* ___0_gameObjectName, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_gameObjectName' to native representation
	char* ____0_gameObjectName_marshaled = NULL;
	____0_gameObjectName_marshaled = il2cpp_codegen_marshal_string(___0_gameObjectName);

	// Marshaling of parameter '___1_methodName' to native representation
	char* ____1_methodName_marshaled = NULL;
	____1_methodName_marshaled = il2cpp_codegen_marshal_string(___1_methodName);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initializeUnityObject)(____0_gameObjectName_marshaled, ____1_methodName_marshaled);

	// Marshaling cleanup of parameter '___0_gameObjectName' native representation
	il2cpp_codegen_marshal_free(____0_gameObjectName_marshaled);
	____0_gameObjectName_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_methodName' native representation
	il2cpp_codegen_marshal_free(____1_methodName_marshaled);
	____1_methodName_marshaled = NULL;

}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeClass_mA587D319E9A252538526906198AA25CCA09531C1 (String_t* ___0_className, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_className' to native representation
	char* ____0_className_marshaled = NULL;
	____0_className_marshaled = il2cpp_codegen_marshal_string(___0_className);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initializeClass)(____0_className_marshaled);

	// Marshaling cleanup of parameter '___0_className' native representation
	il2cpp_codegen_marshal_free(____0_className_marshaled);
	____0_className_marshaled = NULL;

}
// System.IntPtr Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosMessageSenderExtern_onRequestSync_mA0D1A073A72E6D6E28CB6C517973DA035B695FF2 (String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_domain' to native representation
	char* ____0_domain_marshaled = NULL;
	____0_domain_marshaled = il2cpp_codegen_marshal_string(___0_domain);

	// Marshaling of parameter '___1_data' to native representation
	char* ____1_data_marshaled = NULL;
	____1_data_marshaled = il2cpp_codegen_marshal_string(___1_data);

	// Marshaling of parameter '___2_extra' to native representation
	char* ____2_extra_marshaled = NULL;
	____2_extra_marshaled = il2cpp_codegen_marshal_string(___2_extra);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(onRequestSync)(____0_domain_marshaled, ____1_data_marshaled, ____2_extra_marshaled);

	// Marshaling cleanup of parameter '___0_domain' native representation
	il2cpp_codegen_marshal_free(____0_domain_marshaled);
	____0_domain_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_data' native representation
	il2cpp_codegen_marshal_free(____1_data_marshaled);
	____1_data_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_extra' native representation
	il2cpp_codegen_marshal_free(____2_extra_marshaled);
	____2_extra_marshaled = NULL;

	return returnValue;
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_onRequestAsync_m64D85CCB5DFE608956E934304A2FC2B669C1DCB1 (String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_domain' to native representation
	char* ____0_domain_marshaled = NULL;
	____0_domain_marshaled = il2cpp_codegen_marshal_string(___0_domain);

	// Marshaling of parameter '___1_data' to native representation
	char* ____1_data_marshaled = NULL;
	____1_data_marshaled = il2cpp_codegen_marshal_string(___1_data);

	// Marshaling of parameter '___2_extra' to native representation
	char* ____2_extra_marshaled = NULL;
	____2_extra_marshaled = il2cpp_codegen_marshal_string(___2_extra);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(onRequestAsync)(____0_domain_marshaled, ____1_data_marshaled, ____2_extra_marshaled);

	// Marshaling cleanup of parameter '___0_domain' native representation
	il2cpp_codegen_marshal_free(____0_domain_marshaled);
	____0_domain_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_data' native representation
	il2cpp_codegen_marshal_free(____1_data_marshaled);
	____1_data_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_extra' native representation
	il2cpp_codegen_marshal_free(____2_extra_marshaled);
	____2_extra_marshaled = NULL;

}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_Initialize_mB05BC4527D3A5ECB757EBBD01755E6A5EC71B829 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_gameObjectName, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	{
		// initializeUnityObject(gameObjectName, methodName);
		String_t* L_0 = ___0_gameObjectName;
		String_t* L_1 = ___1_methodName;
		IosMessageSenderExtern_initializeUnityObject_m8B4E01C01D39B59DBF458AF46BD369BCBB229191(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_InitializeClass_m7AFB2214F0FFF8D654AD10096399FCE6DAD0E40D (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_className, const RuntimeMethod* method) 
{
	{
		// initializeClass(className);
		String_t* L_0 = ___0_className;
		IosMessageSenderExtern_initializeClass_mA587D319E9A252538526906198AA25CCA09531C1(L_0, NULL);
		// }
		return;
	}
}
// System.String Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSenderExtern_CallSync_m0D25E27F0E82A6BFBBAA895EE7DF582AFF92D007 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string retValue = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		// IntPtr result = onRequestSync(domain, data, extra);
		String_t* L_1 = ___0_domain;
		String_t* L_2 = ___1_data;
		String_t* L_3 = ___2_extra;
		intptr_t L_4;
		L_4 = IosMessageSenderExtern_onRequestSync_mA0D1A073A72E6D6E28CB6C517973DA035B695FF2(L_1, L_2, L_3, NULL);
		V_1 = L_4;
		// if (IntPtr.Zero != result)
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_6 = V_1;
		bool L_7;
		L_7 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		// retValue = Marshal.PtrToStringAnsi(result);
		intptr_t L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_8, NULL);
		V_0 = L_9;
	}

IL_0023:
	{
		// return retValue;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_CallAsync_mE61CD84DE987225893EB6A51DEEE72AA5DBD29CB (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, String_t* ___0_domain, String_t* ___1_data, String_t* ___2_extra, const RuntimeMethod* method) 
{
	{
		// onRequestAsync(domain, data, extra);
		String_t* L_0 = ___0_domain;
		String_t* L_1 = ___1_data;
		String_t* L_2 = ___2_extra;
		IosMessageSenderExtern_onRequestAsync_m64D85CCB5DFE608956E934304A2FC2B669C1DCB1(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern__ctor_mC0E6F03FDC2D79F1F79B715EF02770E9FC67E419 (IosMessageSenderExtern_tBB20EF47A61D03A0F4C0DFCA97E777323C79FCCA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.String Gpm.Communicator.Internal.Log.CommunicatorLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_m6CC6AA06F45F19D5E9B8ACA3A3D94D0549EEAAD7 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C13E73639856F799F682DDAB93967312F44069F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder log = new StringBuilder("[GPM]");
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863, NULL);
		// log.AppendFormat("[{0}]", serviceName);
		StringBuilder_t* L_1 = L_0;
		String_t* L_2 = ___1_serviceName;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE, L_2, NULL);
		// log.AppendFormat("[{0}", classType.Name);
		StringBuilder_t* L_4 = L_1;
		Type_t* L_5 = ___2_classType;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, _stringLiteral9C13E73639856F799F682DDAB93967312F44069F, L_6, NULL);
		// log.AppendFormat("::{0}]", methodName);
		StringBuilder_t* L_8 = L_4;
		String_t* L_9 = ___3_methodName;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_8, _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076, L_9, NULL);
		// log.AppendFormat(" {0}", message);
		StringBuilder_t* L_11 = L_8;
		RuntimeObject* L_12 = ___0_message;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_12, NULL);
		// return log.ToString();
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Debug(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Debug_m752F794308607570CD4D903C3F3EF34E886A277E (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___0_message;
		String_t* L_1 = ___1_serviceName;
		Type_t* L_2 = ___2_classType;
		String_t* L_3 = ___3_methodName;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6CC6AA06F45F19D5E9B8ACA3A3D94D0549EEAAD7(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_mEFD44D2DB5FA278BCB4C144EBB87B414E295EFD4 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___0_message;
		String_t* L_1 = ___1_serviceName;
		Type_t* L_2 = ___2_classType;
		String_t* L_3 = ___3_methodName;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6CC6AA06F45F19D5E9B8ACA3A3D94D0549EEAAD7(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_m9A78F7BDFBEDCE8F6375356A586F0E94D4073AE8 (RuntimeObject* ___0_message, String_t* ___1_serviceName, Type_t* ___2_classType, String_t* ___3_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject* L_0 = ___0_message;
		String_t* L_1 = ___1_serviceName;
		Type_t* L_2 = ___2_classType;
		String_t* L_3 = ___3_methodName;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_m6CC6AA06F45F19D5E9B8ACA3A3D94D0549EEAAD7(L_0, L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* CommunicatorImplementation_get_Instance_mF6178C81C9FD9BC779E4CB2710B242F5C48A2B6A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var);
		CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA* L_0 = ((CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_tE716340F3F656A92908787947E7F558274D150DA_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* IosMessageSender_get_Instance_mD470092DA78B6ECE99B5695C1F97D25DCA1698A6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		il2cpp_codegen_runtime_class_init_inline(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var);
		IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895* L_0 = ((IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_tD319809080B80F0920F1F69EF2A1A173B3E5C895_il2cpp_TypeInfo_var))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m31E53FEDDF8E469B53D705EB51BA025E1F18B94D_inline (CommunicatorCallback_tBBF9149FBC221129517F55D09F1C001FAE1AC0A9* __this, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A* ___0_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Message_tFCC9E5F0F507C157748FA34EED0653C32378756A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
