#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1;
// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<Gpm.Communicator.Internal.GameObjectManager/GameObjectType>
struct IEqualityComparer_1_tD7C861D9F34315F67CE988897947FEE7737C706B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct KeyCollection_tF39392F091B891737246134C6854323A625A8664;
// System.Collections.Generic.Dictionary`2/KeyCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct KeyCollection_tF97E324E1B0E5A68483ABDFB915B73171B103E20;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct ValueCollection_t447A1BD7371214C12EC07AA16EE2F31391A31E18;
// System.Collections.Generic.Dictionary`2/ValueCollection<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct ValueCollection_tCB178C356B3FDF06A94523AEFA4B56778CA9E10D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>[]
struct EntryU5BU5D_t198667EE988245A23513437512CD031FA0D75ED6;
// System.Collections.Generic.Dictionary`2/Entry<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>[]
struct EntryU5BU5D_tB5E8E826C684AA9FEE2CDA023CE6F77DB93C1D18;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Gpm.Communicator.Internal.Communicator
struct Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785;
// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C;
// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t7AAF36BC180A77906A5ACB8AE85EB70EAF06DEF8;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9;
// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t9164501A17422AD7DB494B8AA7F4233D8120583E;
// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tC7B97EEC15ADE6F1282D73CDE5422527A05070F6;
// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t0BF4D0FAAA134E3AFDCA86B5E36819BCAB95F294;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Gpm.Communicator.Internal.INativeMessageSender
struct INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A;
// Gpm.Communicator.Internal.Ios.IosMessageSender
struct IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64;
// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern
struct IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391;
// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079;
// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701;

IL2CPP_EXTERN_C RuntimeClass* CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
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
IL2CPP_EXTERN_C const RuntimeMethod* ComponentManager_AddComponent_TisCommunicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_m0ADE5B215DEA3164215DE2F65245FDD1CCD9D297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m09B7126C8885E544F1AC6BC0300FBEE3DBB5A1B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6A24B398EDBCB13FAE5B9FA1B0322639C6002578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4DFEDB0403A539FD2DDE8EF25D0CE94296CB6548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC94FB4AE565370EB84BE21A00C29E523546496CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m879B0773910BA47EE2A3FC149A18D5535CE06DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t815E1F0D50FFAF9A5F784F6EE67B68D91D1947AE 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>
struct Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t198667EE988245A23513437512CD031FA0D75ED6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF39392F091B891737246134C6854323A625A8664 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t447A1BD7371214C12EC07AA16EE2F31391A31E18 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___entries_1)); }
	inline EntryU5BU5D_t198667EE988245A23513437512CD031FA0D75ED6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t198667EE988245A23513437512CD031FA0D75ED6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t198667EE988245A23513437512CD031FA0D75ED6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___keys_7)); }
	inline KeyCollection_tF39392F091B891737246134C6854323A625A8664 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF39392F091B891737246134C6854323A625A8664 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF39392F091B891737246134C6854323A625A8664 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ___values_8)); }
	inline ValueCollection_t447A1BD7371214C12EC07AA16EE2F31391A31E18 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t447A1BD7371214C12EC07AA16EE2F31391A31E18 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t447A1BD7371214C12EC07AA16EE2F31391A31E18 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>
struct Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB5E8E826C684AA9FEE2CDA023CE6F77DB93C1D18* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF97E324E1B0E5A68483ABDFB915B73171B103E20 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCB178C356B3FDF06A94523AEFA4B56778CA9E10D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___entries_1)); }
	inline EntryU5BU5D_tB5E8E826C684AA9FEE2CDA023CE6F77DB93C1D18* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB5E8E826C684AA9FEE2CDA023CE6F77DB93C1D18** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB5E8E826C684AA9FEE2CDA023CE6F77DB93C1D18* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___keys_7)); }
	inline KeyCollection_tF97E324E1B0E5A68483ABDFB915B73171B103E20 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF97E324E1B0E5A68483ABDFB915B73171B103E20 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF97E324E1B0E5A68483ABDFB915B73171B103E20 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ___values_8)); }
	inline ValueCollection_tCB178C356B3FDF06A94523AEFA4B56778CA9E10D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCB178C356B3FDF06A94523AEFA4B56778CA9E10D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCB178C356B3FDF06A94523AEFA4B56778CA9E10D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Gpm.Communicator.Internal.CommunicatorImplementation
struct CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C  : public RuntimeObject
{
public:
	// Gpm.Communicator.Internal.Communicator Gpm.Communicator.Internal.CommunicatorImplementation::communicator
	Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * ___communicator_1;

public:
	inline static int32_t get_offset_of_communicator_1() { return static_cast<int32_t>(offsetof(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C, ___communicator_1)); }
	inline Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * get_communicator_1() const { return ___communicator_1; }
	inline Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 ** get_address_of_communicator_1() { return &___communicator_1; }
	inline void set_communicator_1(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * value)
	{
		___communicator_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___communicator_1), (void*)value);
	}
};

struct CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_StaticFields
{
public:
	// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::instance
	CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_StaticFields, ___instance_0)); }
	inline CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * get_instance_0() const { return ___instance_0; }
	inline CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Gpm.Communicator.Internal.Log.CommunicatorLogger
struct CommunicatorLogger_tDC570D01583F97A5B532B0BB23AAFAC88690FE58  : public RuntimeObject
{
public:

public:
};


// Gpm.Communicator.Internal.ComponentManager
struct ComponentManager_t7AAF36BC180A77906A5ACB8AE85EB70EAF06DEF8  : public RuntimeObject
{
public:

public:
};


// Gpm.Communicator.Internal.GameObjectManager
struct GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9  : public RuntimeObject
{
public:

public:
};

struct GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject> Gpm.Communicator.Internal.GameObjectManager::gameObjectDictionary
	Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * ___gameObjectDictionary_0;

public:
	inline static int32_t get_offset_of_gameObjectDictionary_0() { return static_cast<int32_t>(offsetof(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields, ___gameObjectDictionary_0)); }
	inline Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * get_gameObjectDictionary_0() const { return ___gameObjectDictionary_0; }
	inline Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B ** get_address_of_gameObjectDictionary_0() { return &___gameObjectDictionary_0; }
	inline void set_gameObjectDictionary_0(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * value)
	{
		___gameObjectDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObjectDictionary_0), (void*)value);
	}
};


// Gpm.Communicator.GpmCommunicator
struct GpmCommunicator_t9164501A17422AD7DB494B8AA7F4233D8120583E  : public RuntimeObject
{
public:

public:
};


// Gpm.Communicator.GpmCommunicatorCallback
struct GpmCommunicatorCallback_tC7B97EEC15ADE6F1282D73CDE5422527A05070F6  : public RuntimeObject
{
public:

public:
};


// Gpm.Communicator.GpmCommunicatorVO
struct GpmCommunicatorVO_t0BF4D0FAAA134E3AFDCA86B5E36819BCAB95F294  : public RuntimeObject
{
public:

public:
};


// Gpm.Communicator.Internal.Ios.IosMessageSender
struct IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64  : public RuntimeObject
{
public:
	// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern Gpm.Communicator.Internal.Ios.IosMessageSender::iosMessageSenderExtern
	IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * ___iosMessageSenderExtern_1;

public:
	inline static int32_t get_offset_of_iosMessageSenderExtern_1() { return static_cast<int32_t>(offsetof(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64, ___iosMessageSenderExtern_1)); }
	inline IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * get_iosMessageSenderExtern_1() const { return ___iosMessageSenderExtern_1; }
	inline IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 ** get_address_of_iosMessageSenderExtern_1() { return &___iosMessageSenderExtern_1; }
	inline void set_iosMessageSenderExtern_1(IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * value)
	{
		___iosMessageSenderExtern_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iosMessageSenderExtern_1), (void*)value);
	}
};

struct IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_StaticFields
{
public:
	// Gpm.Communicator.Internal.Ios.IosMessageSender Gpm.Communicator.Internal.Ios.IosMessageSender::instance
	IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_StaticFields, ___instance_0)); }
	inline IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * get_instance_0() const { return ___instance_0; }
	inline IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// Gpm.Communicator.Internal.Ios.IosMessageSenderExtern
struct IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Gpm.Communicator.GpmCommunicatorVO/Configuration
struct Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079  : public RuntimeObject
{
public:
	// System.String Gpm.Communicator.GpmCommunicatorVO/Configuration::className
	String_t* ___className_0;

public:
	inline static int32_t get_offset_of_className_0() { return static_cast<int32_t>(offsetof(Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079, ___className_0)); }
	inline String_t* get_className_0() const { return ___className_0; }
	inline String_t** get_address_of_className_0() { return &___className_0; }
	inline void set_className_0(String_t* value)
	{
		___className_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___className_0), (void*)value);
	}
};


// Gpm.Communicator.GpmCommunicatorVO/Message
struct Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701  : public RuntimeObject
{
public:
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::domain
	String_t* ___domain_0;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::data
	String_t* ___data_1;
	// System.String Gpm.Communicator.GpmCommunicatorVO/Message::extra
	String_t* ___extra_2;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701, ___domain_0)); }
	inline String_t* get_domain_0() const { return ___domain_0; }
	inline String_t** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(String_t* value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domain_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701, ___data_1)); }
	inline String_t* get_data_1() const { return ___data_1; }
	inline String_t** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(String_t* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_extra_2() { return static_cast<int32_t>(offsetof(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701, ___extra_2)); }
	inline String_t* get_extra_2() const { return ___extra_2; }
	inline String_t** get_address_of_extra_2() { return &___extra_2; }
	inline void set_extra_2(String_t* value)
	{
		___extra_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extra_2), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Gpm.Communicator.Internal.GameObjectManager/GameObjectType
struct GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3 
{
public:
	// System.Int32 Gpm.Communicator.Internal.GameObjectManager/GameObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback
struct CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Gpm.Communicator.Internal.Communicator
struct Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Gpm.Communicator.Internal.INativeMessageSender Gpm.Communicator.Internal.Communicator::messageSender
	RuntimeObject* ___messageSender_4;
	// System.String Gpm.Communicator.Internal.Communicator::methodName
	String_t* ___methodName_5;

public:
	inline static int32_t get_offset_of_messageSender_4() { return static_cast<int32_t>(offsetof(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785, ___messageSender_4)); }
	inline RuntimeObject* get_messageSender_4() const { return ___messageSender_4; }
	inline RuntimeObject** get_address_of_messageSender_4() { return &___messageSender_4; }
	inline void set_messageSender_4(RuntimeObject* value)
	{
		___messageSender_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageSender_4), (void*)value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodName_5), (void*)value);
	}
};

struct Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback> Gpm.Communicator.Internal.Communicator::receiverDictionary
	Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * ___receiverDictionary_7;

public:
	inline static int32_t get_offset_of_receiverDictionary_7() { return static_cast<int32_t>(offsetof(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields, ___receiverDictionary_7)); }
	inline Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * get_receiverDictionary_7() const { return ___receiverDictionary_7; }
	inline Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 ** get_address_of_receiverDictionary_7() { return &___receiverDictionary_7; }
	inline void set_receiverDictionary_7(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * value)
	{
		___receiverDictionary_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiverDictionary_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<System.Object>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ComponentManager_AddComponent_TisRuntimeObject_m84E0529626F97EBF34CDC9D4C7F41826BFEE6506_gshared (int32_t ___gameObjectType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// Gpm.Communicator.Internal.Ios.IosMessageSender Gpm.Communicator.Internal.Ios.IosMessageSender::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * IosMessageSender_get_Instance_m6FDFA08BBC49E4F9684B4AA15879751C09125983_inline (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734 (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::Add(!0,!1)
inline void Dictionary_2_Add_m09B7126C8885E544F1AC6BC0300FBEE3DBB5A1B3 (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * __this, String_t* ___key0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 *, String_t*, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD (String_t* __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.Void Gpm.Communicator.GpmCommunicatorVO/Message::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_m61FEAE4291E9BCC5907398C93430113174534745 (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::get_Item(!0)
inline CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * Dictionary_2_get_Item_m879B0773910BA47EE2A3FC149A18D5535CE06DA6 (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * (*) (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m158B90B072FF6270E0CF8B3814FA07D73C666F95 (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback>::.ctor()
inline void Dictionary_2__ctor_mC94FB4AE565370EB84BE21A00C29E523546496CC (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// T Gpm.Communicator.Internal.ComponentManager::AddComponent<Gpm.Communicator.Internal.Communicator>(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
inline Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * ComponentManager_AddComponent_TisCommunicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_m0ADE5B215DEA3164215DE2F65245FDD1CCD9D297 (int32_t ___gameObjectType0, const RuntimeMethod* method)
{
	return ((  Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * (*) (int32_t, const RuntimeMethod*))ComponentManager_AddComponent_TisRuntimeObject_m84E0529626F97EBF34CDC9D4C7F41826BFEE6506_gshared)(___gameObjectType0, method);
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m0F135EFD1B26B7A95F1F1AC8CAB0A1EA6E395BD8 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9208B889EBCE805A1D10DE68CA80D1540ED2793F (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m94C3F1E79EAFF3C5397033748FE9C55C17592253 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method);
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * Communicator_CallSync_m7A1F488529146318F71404A045B0E8FE3B5195F6 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m1D237F8CDF1EF4FDBCD8480DF00143162688F067 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m2BDEC902C290FA8BCBD5F60822A9EC34DA175FCD (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Gpm.Communicator.Internal.Log.CommunicatorLogger::MakeLog(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_mE2D02F72C7E33A6FA0E262CA76C4DD9BDD3D674A (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583 (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m938188F524CF90F3CD36418ACC53E194A6B0CB5B_gshared)(__this, ___key0, method);
}
// System.Boolean Gpm.Communicator.Internal.GameObjectManager::ContainsGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_mAC9D1966F0CCF636400E77D0EC34D0EB8BFB3F88 (int32_t ___gameObjectType0, const RuntimeMethod* method);
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObjectManager_CreateGameObject_mF5F9FCC8FAA8EA2D78AA7F8B2697C6C5701EEEDD (int32_t ___gameObjectType0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::get_Item(!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m169DFA431C9A313350A4A964D24135EFEE0BDC60_gshared)(__this, ___key0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m6A24B398EDBCB13FAE5B9FA1B0322639C6002578 (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * __this, int32_t ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B *, int32_t, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Gpm.Communicator.Internal.GameObjectManager/GameObjectType,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m4DFEDB0403A539FD2DDE8EF25D0CE94296CB6548 (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// Gpm.Communicator.Internal.CommunicatorImplementation Gpm.Communicator.Internal.CommunicatorImplementation::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline (const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m32BFD33FE71D7581C7816E8977DA82532C3E5F2C (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_m6B2FE54A2DF4A369C3C2691DE5A5F0D4AC454CE5 (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method);
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * CommunicatorImplementation_CallSync_m438CCD8C5BF2651E099B17188197FD3FCC5B1D32 (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m5FBCDC16A9D5995CB7DCB4F1C4697F8DFA9CBF4C (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern__ctor_mFF6E484BE53D5FBF0C6F7A17AC0BC40B0F448AF1 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_Initialize_mE524B0324BC629086F9BB75EE51ECF74779C8051 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_InitializeClass_mB91A6EAB09B3E93075768A10F1951EA26B99A14E (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___className0, const RuntimeMethod* method);
// System.String Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSenderExtern_CallSync_m521C1FC556B9168F73AFA101C2DB6F8091C48F10 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_CallAsync_mA0E718DFB27AB25DC943DB45CCBF4A041BA01EF0 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__ctor_m28BE3890645F4D505146CD4546F1AE12766AFEAB (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeUnityObject(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeUnityObject_m485F3AD95223B267A07ABDE7B03280CFDF39BBE5 (String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeClass_m8372E9B276858651E333E02DCDEEA7EF6E1B1775 (String_t* ___className0, const RuntimeMethod* method);
// System.IntPtr Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosMessageSenderExtern_onRequestSync_m216A23E97CDA7E97EC05D49327FA04BA51E2D6FD (String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_onRequestAsync_mC47BE0D9FBB60BB51CE3BD730AF3A4C866A83163 (String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method);
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
// System.Void Gpm.Communicator.Internal.Communicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__ctor_mB553AAE0D27C124F172E83640FF75CB373CF5D26 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string methodName = "OnAsyncEvent";
		__this->set_methodName_5(_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		// private Communicator()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// messageSender = Ios.IosMessageSender.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * L_0;
		L_0 = IosMessageSender_get_Instance_m6FDFA08BBC49E4F9684B4AA15879751C09125983_inline(/*hidden argument*/NULL);
		__this->set_messageSender_4(L_0);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_Initialize_m0F135EFD1B26B7A95F1F1AC8CAB0A1EA6E395BD8 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->get_messageSender_4();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "Initialize");
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.Initialize(GameObjectManager.GameObjectType.CORE_TYPE.ToString(), methodName);
		RuntimeObject* L_2 = __this->get_messageSender_4();
		V_0 = 0;
		RuntimeObject * L_3 = Box(GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_0 = *(int32_t*)UnBox(L_3);
		String_t* L_5 = __this->get_methodName_5();
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::Initialize(System.String,System.String) */, INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_InitializeClass_m9208B889EBCE805A1D10DE68CA80D1540ED2793F (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->get_messageSender_4();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "InitializeClass");
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralBEA55D8C767C54F8BCDEDDE5558CDB02D77B017F, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.InitializeClass(configuration.className);
		RuntimeObject* L_2 = __this->get_messageSender_4();
		Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * L_3 = ___configuration0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_className_0();
		NullCheck(L_2);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::InitializeClass(System.String) */, INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var, L_2, L_4);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_AddReceiver_m94C3F1E79EAFF3C5397033748FE9C55C17592253 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m09B7126C8885E544F1AC6BC0300FBEE3DBB5A1B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(receiverDictionary.ContainsKey(domain) == true)
		IL2CPP_RUNTIME_CLASS_INIT(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * L_0 = ((Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var))->get_receiverDictionary_7();
		String_t* L_1 = ___domain0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734_RuntimeMethod_var);
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
		String_t* L_3 = ___domain0;
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralCDB1F47BEA49CC803102F157120F3DFD922746AE, L_3, /*hidden argument*/NULL);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC(L_4, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_5, _stringLiteralDC4026E15C50C52F8168F8B09229251B251BDFA3, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_002e:
	{
		// receiverDictionary.Add(domain, callback);
		IL2CPP_RUNTIME_CLASS_INIT(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * L_6 = ((Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var))->get_receiverDictionary_7();
		String_t* L_7 = ___domain0;
		CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * L_8 = ___callback1;
		NullCheck(L_6);
		Dictionary_2_Add_m09B7126C8885E544F1AC6BC0300FBEE3DBB5A1B3(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m09B7126C8885E544F1AC6BC0300FBEE3DBB5A1B3_RuntimeMethod_var);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.Communicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * Communicator_CallSync_m7A1F488529146318F71404A045B0E8FE3B5195F6 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * V_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_2 = NULL;
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->get_messageSender_4();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallSync");
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteralEF03E8F94F773A58D8E3DCDA8CB4A4DA5441F243, /*hidden argument*/NULL);
		// return null;
		return (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)NULL;
	}

IL_0024:
	{
		// string responseString = messageSender.CallSync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->get_messageSender_4();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_domain_0();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5 = ___message0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_7 = ___message0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extra_2();
		NullCheck(L_2);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker3< String_t*, String_t*, String_t*, String_t* >::Invoke(2 /* System.String Gpm.Communicator.Internal.INativeMessageSender::CallSync(System.String,System.String,System.String) */, INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		V_0 = L_9;
		// GpmCommunicatorVO.Message responseMessage = null;
		V_1 = (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)NULL;
		// if(string.IsNullOrEmpty(responseString) == true)
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		// return responseMessage;
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_12 = V_1;
		return L_12;
	}

IL_004e:
	{
		// string[] messageData = responseString.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_13 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16;
		L_16 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_13, L_15, 0, /*hidden argument*/NULL);
		V_2 = L_16;
		// if (messageData == null || messageData.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = V_2;
		if (!L_17)
		{
			goto IL_006b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_2;
		NullCheck(L_18);
		if ((((RuntimeArray*)L_18)->max_length))
		{
			goto IL_006d;
		}
	}

IL_006b:
	{
		// return responseMessage;
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_19 = V_1;
		return L_19;
	}

IL_006d:
	{
		// responseMessage = new GpmCommunicatorVO.Message();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_20 = (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)il2cpp_codegen_object_new(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65(L_20, /*hidden argument*/NULL);
		V_1 = L_20;
		// responseMessage.domain = messageData[0];
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_21 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		L_21->set_domain_0(L_24);
		// responseMessage.data = messageData[1];
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_25 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 1;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_25);
		L_25->set_data_1(L_28);
		// responseMessage.extra = messageData[2];
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_29 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_29);
		L_29->set_extra_2(L_32);
		// return responseMessage;
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_33 = V_1;
		return L_33;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_CallAsync_m1D237F8CDF1EF4FDBCD8480DF00143162688F067 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (messageSender == null)
		RuntimeObject* L_0 = __this->get_messageSender_4();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// CommunicatorLogger.Error("MessageSender is null", "GpmCommunicator", GetType(), "CallAsync");
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC(_stringLiteral8FD77C9E0165D5F624D5FBA76278EFFED428AEE0, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_1, _stringLiteral1D3D0D88B31CC76F25106F91D503BCED6D85B811, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0023:
	{
		// messageSender.CallAsync(message.domain, message.data, message.extra);
		RuntimeObject* L_2 = __this->get_messageSender_4();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_3 = ___message0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_domain_0();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_5 = ___message0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_data_1();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_7 = ___message0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extra_2();
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(3 /* System.Void Gpm.Communicator.Internal.INativeMessageSender::CallAsync(System.String,System.String,System.String) */, INativeMessageSender_tD242AD0AD5F12D24B841323A57E5A672A8A0FB2A_il2cpp_TypeInfo_var, L_2, L_4, L_6, L_8);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::OnAsyncEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator_OnAsyncEvent_mBC6FA4D3F37F73E9DCA12CE66983A627BC66FF96 (Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m879B0773910BA47EE2A3FC149A18D5535CE06DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * G_B7_0 = NULL;
	CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * G_B6_0 = NULL;
	CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * G_B9_0 = NULL;
	CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * G_B8_0 = NULL;
	{
		// string[] messageData = message.Split(new string[] { DELIMITER }, StringSplitOptions.None);
		String_t* L_0 = ___message0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD1BD7E17495D430157DDB96F07AC5B3C1F78B866);
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m465A09CA87BD9357B6C89BF977D582DAB1AAE1FD(L_0, L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		// if(messageData == null || messageData.Length == 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
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
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// string data = string.Empty;
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_2 = L_9;
		// string extra = string.Empty;
		String_t* L_10 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_3 = L_10;
		// if (receiverDictionary.ContainsKey(domain) == false)
		IL2CPP_RUNTIME_CLASS_INIT(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * L_11 = ((Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var))->get_receiverDictionary_7();
		String_t* L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734(L_11, L_12, /*hidden argument*/Dictionary_2_ContainsKey_mAF5CEF1A704B35E1F824FE4183FE2AB5BF616734_RuntimeMethod_var);
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
		L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF1E46BB1D8ED0BEA8E57B7BBE10B9D2F10A79206, L_14, /*hidden argument*/NULL);
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		CommunicatorLogger_Warn_m61FEAE4291E9BCC5907398C93430113174534745(L_15, _stringLiteralF9BC588D99F41D53774034AAB818BC96D8EBA965, L_16, _stringLiteralBD34EAE925763CC05A283CC6F8C3FA52A95768CE, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_005c:
	{
		// GpmCommunicatorCallback.CommunicatorCallback callback = receiverDictionary[domain];
		IL2CPP_RUNTIME_CLASS_INIT(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * L_17 = ((Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var))->get_receiverDictionary_7();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * L_19;
		L_19 = Dictionary_2_get_Item_m879B0773910BA47EE2A3FC149A18D5535CE06DA6(L_17, L_18, /*hidden argument*/Dictionary_2_get_Item_m879B0773910BA47EE2A3FC149A18D5535CE06DA6_RuntimeMethod_var);
		// if(messageData.Length > 1)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_0;
		NullCheck(L_20);
		G_B6_0 = L_19;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))) <= ((int32_t)1)))
		{
			G_B7_0 = L_19;
			goto IL_0071;
		}
	}
	{
		// data = messageData[1];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = 1;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		G_B7_0 = G_B6_0;
	}

IL_0071:
	{
		// if(messageData.Length > 2)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_0;
		NullCheck(L_24);
		G_B8_0 = G_B7_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))) <= ((int32_t)2)))
		{
			G_B9_0 = G_B7_0;
			goto IL_007b;
		}
	}
	{
		// extra = messageData[2];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_0;
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
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_28 = (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *)il2cpp_codegen_object_new(Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701_il2cpp_TypeInfo_var);
		Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65(L_28, /*hidden argument*/NULL);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_29 = L_28;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		L_29->set_domain_0(L_30);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_31 = L_29;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		L_31->set_data_1(L_32);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_33 = L_31;
		String_t* L_34 = V_3;
		NullCheck(L_33);
		L_33->set_extra_2(L_34);
		NullCheck(G_B9_0);
		CommunicatorCallback_Invoke_m158B90B072FF6270E0CF8B3814FA07D73C666F95(G_B9_0, L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Communicator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Communicator__cctor_mB627AE62C71858464EDBA55435DDE834CC9A3EA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC94FB4AE565370EB84BE21A00C29E523546496CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback> receiverDictionary = new Dictionary<string, GpmCommunicatorCallback.CommunicatorCallback>();
		Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 * L_0 = (Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1 *)il2cpp_codegen_object_new(Dictionary_2_t73C5631CEB88FA60B48AD579E8B93C5C6E585CF1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC94FB4AE565370EB84BE21A00C29E523546496CC(L_0, /*hidden argument*/Dictionary_2__ctor_mC94FB4AE565370EB84BE21A00C29E523546496CC_RuntimeMethod_var);
		((Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_StaticFields*)il2cpp_codegen_static_fields_for(Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_il2cpp_TypeInfo_var))->set_receiverDictionary_7(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0 = ((CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__ctor_m2BDEC902C290FA8BCBD5F60822A9EC34DA175FCD (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentManager_AddComponent_TisCommunicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_m0ADE5B215DEA3164215DE2F65245FDD1CCD9D297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CommunicatorImplementation()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// communicator = ComponentManager.AddComponent<Communicator>(GameObjectManager.GameObjectType.CORE_TYPE);
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_0;
		L_0 = ComponentManager_AddComponent_TisCommunicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_m0ADE5B215DEA3164215DE2F65245FDD1CCD9D297(0, /*hidden argument*/ComponentManager_AddComponent_TisCommunicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785_m0ADE5B215DEA3164215DE2F65245FDD1CCD9D297_RuntimeMethod_var);
		__this->set_communicator_1(L_0);
		// communicator.Initialize();
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_1 = __this->get_communicator_1();
		NullCheck(L_1);
		Communicator_Initialize_m0F135EFD1B26B7A95F1F1AC8CAB0A1EA6E395BD8(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_InitializeClass_m32BFD33FE71D7581C7816E8977DA82532C3E5F2C (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method)
{
	{
		// communicator.InitializeClass(configuration);
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_0 = __this->get_communicator_1();
		Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * L_1 = ___configuration0;
		NullCheck(L_0);
		Communicator_InitializeClass_m9208B889EBCE805A1D10DE68CA80D1540ED2793F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_AddReceiver_m6B2FE54A2DF4A369C3C2691DE5A5F0D4AC454CE5 (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method)
{
	{
		// communicator.AddReceiver(domain, callback);
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_0 = __this->get_communicator_1();
		String_t* L_1 = ___domain0;
		CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * L_2 = ___callback1;
		NullCheck(L_0);
		Communicator_AddReceiver_m94C3F1E79EAFF3C5397033748FE9C55C17592253(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.Internal.CommunicatorImplementation::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * CommunicatorImplementation_CallSync_m438CCD8C5BF2651E099B17188197FD3FCC5B1D32 (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	{
		// return communicator.CallSync(message);
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_0 = __this->get_communicator_1();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = ___message0;
		NullCheck(L_0);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_2;
		L_2 = Communicator_CallSync_m7A1F488529146318F71404A045B0E8FE3B5195F6(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation_CallAsync_m5FBCDC16A9D5995CB7DCB4F1C4697F8DFA9CBF4C (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	{
		// communicator.CallAsync(message);
		Communicator_t8E5E8D420C32F7273A6F51EDF52E364FCE215785 * L_0 = __this->get_communicator_1();
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = ___message0;
		NullCheck(L_0);
		Communicator_CallAsync_m1D237F8CDF1EF4FDBCD8480DF00143162688F067(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.CommunicatorImplementation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorImplementation__cctor_mEC23178533629477DA59A63A763053AFB16DBFAB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly CommunicatorImplementation instance = new CommunicatorImplementation();
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0 = (CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C *)il2cpp_codegen_object_new(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation__ctor_m2BDEC902C290FA8BCBD5F60822A9EC34DA175FCD(L_0, /*hidden argument*/NULL);
		((CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommunicatorLogger_MakeLog_mE2D02F72C7E33A6FA0E262CA76C4DD9BDD3D674A (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method)
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
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9305A36F9CF53EDD80D132428999934C68904C77(L_0, _stringLiteralAB6B75E07FB46FB0CBA42492C159D71D911AC863, /*hidden argument*/NULL);
		// log.AppendFormat("[{0}]", serviceName);
		StringBuilder_t * L_1 = L_0;
		String_t* L_2 = ___serviceName1;
		NullCheck(L_1);
		StringBuilder_t * L_3;
		L_3 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_1, _stringLiteralCEE4BEC9969079A1DA2F65E0F044E4FF1AF5EEAE, L_2, /*hidden argument*/NULL);
		// log.AppendFormat("[{0}", classType.Name);
		StringBuilder_t * L_4 = L_1;
		Type_t * L_5 = ___classType2;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(L_4);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_4, _stringLiteral9C13E73639856F799F682DDAB93967312F44069F, L_6, /*hidden argument*/NULL);
		// log.AppendFormat("::{0}]", methodName);
		StringBuilder_t * L_8 = L_4;
		String_t* L_9 = ___methodName3;
		NullCheck(L_8);
		StringBuilder_t * L_10;
		L_10 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_8, _stringLiteralB638B3024E1A57388378E7B56D0B2E12F3770076, L_9, /*hidden argument*/NULL);
		// log.AppendFormat(" {0}", message);
		StringBuilder_t * L_11 = L_8;
		RuntimeObject * L_12 = ___message0;
		NullCheck(L_11);
		StringBuilder_t * L_13;
		L_13 = StringBuilder_AppendFormat_mA3A12EF6C7AC4C5EBC41FCA633F4FC036205669E(L_11, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_12, /*hidden argument*/NULL);
		// return log.ToString();
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Debug(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Debug_m50C51C9405BA268D250753BBEB0BCB5A025BF738 (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject * L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t * L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_mE2D02F72C7E33A6FA0E262CA76C4DD9BDD3D674A(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Warn(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Warn_m61FEAE4291E9BCC5907398C93430113174534745 (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject * L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t * L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_mE2D02F72C7E33A6FA0E262CA76C4DD9BDD3D674A(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Log.CommunicatorLogger::Error(System.Object,System.String,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorLogger_Error_m4D486D7A386988EADBB2DCD106D696C43096F4BC (RuntimeObject * ___message0, String_t* ___serviceName1, Type_t * ___classType2, String_t* ___methodName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(MakeLog(message, serviceName, classType, methodName));
		RuntimeObject * L_0 = ___message0;
		String_t* L_1 = ___serviceName1;
		Type_t * L_2 = ___classType2;
		String_t* L_3 = ___methodName3;
		String_t* L_4;
		L_4 = CommunicatorLogger_MakeLog_mE2D02F72C7E33A6FA0E262CA76C4DD9BDD3D674A(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_4, /*hidden argument*/NULL);
		// }
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentManager__ctor_mD54EDD0E753936CEBED8D3260AFA4097ECFD9C03 (ComponentManager_t7AAF36BC180A77906A5ACB8AE85EB70EAF06DEF8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObjectManager_ContainsGameObject_mAC9D1966F0CCF636400E77D0EC34D0EB8BFB3F88 (int32_t ___gameObjectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return gameObjectDictionary.ContainsKey(gameObjectType);
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_0 = ((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->get_gameObjectDictionary_0();
		int32_t L_1 = ___gameObjectType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::GetGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObjectManager_GetGameObject_mC472A4C83B9B7E0DC16CD6F8389074EAEC2DB276 (int32_t ___gameObjectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (false == ContainsGameObject(gameObjectType))
		int32_t L_0 = ___gameObjectType0;
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GameObjectManager_ContainsGameObject_mAC9D1966F0CCF636400E77D0EC34D0EB8BFB3F88(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return CreateGameObject(gameObjectType);
		int32_t L_2 = ___gameObjectType0;
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObjectManager_CreateGameObject_mF5F9FCC8FAA8EA2D78AA7F8B2697C6C5701EEEDD(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		// return gameObjectDictionary[gameObjectType].gameObject;
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_4 = ((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->get_gameObjectDictionary_0();
		int32_t L_5 = ___gameObjectType0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.GameObject Gpm.Communicator.Internal.GameObjectManager::CreateGameObject(Gpm.Communicator.Internal.GameObjectManager/GameObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObjectManager_CreateGameObject_mF5F9FCC8FAA8EA2D78AA7F8B2697C6C5701EEEDD (int32_t ___gameObjectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6A24B398EDBCB13FAE5B9FA1B0322639C6002578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (true == gameObjectDictionary.ContainsKey(gameObjectType))
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_0 = ((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->get_gameObjectDictionary_0();
		int32_t L_1 = ___gameObjectType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m309CC213480688F43D2EC86564C7BC5985C2D583_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return gameObjectDictionary[gameObjectType];
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_3 = ((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->get_gameObjectDictionary_0();
		int32_t L_4 = ___gameObjectType0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mBC06B309E84E0A69CB304A904267BCAC26C5A0EB_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// GameObject gameObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		// gameObject.name = gameObjectType.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		RuntimeObject * L_8 = Box(GameObjectType_tD950984FA5E2E03EC19D22812B6B10E44B3D08C3_il2cpp_TypeInfo_var, (&___gameObjectType0));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		___gameObjectType0 = *(int32_t*)UnBox(L_8);
		NullCheck(L_7);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_7, L_9, /*hidden argument*/NULL);
		// GameObject.DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_10, /*hidden argument*/NULL);
		// gameObjectDictionary.Add(gameObjectType, gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_11 = ((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->get_gameObjectDictionary_0();
		int32_t L_12 = ___gameObjectType0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		NullCheck(L_11);
		Dictionary_2_Add_m6A24B398EDBCB13FAE5B9FA1B0322639C6002578(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m6A24B398EDBCB13FAE5B9FA1B0322639C6002578_RuntimeMethod_var);
		// return gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		return L_14;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__ctor_mE2EA3CC8C163DA3B0A963FB6F88744993E35F2AF (GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Gpm.Communicator.Internal.GameObjectManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectManager__cctor_m4746F115AF6A0C0C8BAB638F89C35216E58A45FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4DFEDB0403A539FD2DDE8EF25D0CE94296CB6548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private Dictionary<GameObjectType, GameObject> gameObjectDictionary = new Dictionary<GameObjectType, GameObject>();
		Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B * L_0 = (Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B *)il2cpp_codegen_object_new(Dictionary_2_t48DB170A6693B1564858E72A32E38204C3AA1A3B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4DFEDB0403A539FD2DDE8EF25D0CE94296CB6548(L_0, /*hidden argument*/Dictionary_2__ctor_m4DFEDB0403A539FD2DDE8EF25D0CE94296CB6548_RuntimeMethod_var);
		((GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_StaticFields*)il2cpp_codegen_static_fields_for(GameObjectManager_t5FACB9341731AC5A846D269E88D9469CF6EB09C9_il2cpp_TypeInfo_var))->set_gameObjectDictionary_0(L_0);
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
// System.Void Gpm.Communicator.GpmCommunicator::InitializeClass(Gpm.Communicator.GpmCommunicatorVO/Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_InitializeClass_m71183C8079C53E27DD013F66CFE8C86C29D74E6D (Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * ___configuration0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.InitializeClass(configuration);
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0;
		L_0 = CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline(/*hidden argument*/NULL);
		Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * L_1 = ___configuration0;
		NullCheck(L_0);
		CommunicatorImplementation_InitializeClass_m32BFD33FE71D7581C7816E8977DA82532C3E5F2C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::AddReceiver(System.String,Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_AddReceiver_m102FA10ECB9CCC3F66304E654021C7012C7EBFAF (String_t* ___domain0, CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.AddReceiver(domain, callback);
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0;
		L_0 = CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline(/*hidden argument*/NULL);
		String_t* L_1 = ___domain0;
		CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * L_2 = ___callback1;
		NullCheck(L_0);
		CommunicatorImplementation_AddReceiver_m6B2FE54A2DF4A369C3C2691DE5A5F0D4AC454CE5(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Gpm.Communicator.GpmCommunicatorVO/Message Gpm.Communicator.GpmCommunicator::CallSync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * GpmCommunicator_CallSync_m1DEE9E29AE0FF3F030F54EE10E518FA4CD23CDD6 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CommunicatorImplementation.Instance.CallSync(message);
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0;
		L_0 = CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline(/*hidden argument*/NULL);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = ___message0;
		NullCheck(L_0);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_2;
		L_2 = CommunicatorImplementation_CallSync_m438CCD8C5BF2651E099B17188197FD3FCC5B1D32(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::CallAsync(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator_CallAsync_m0324145DE836CF29B71524C546F751ED0DA9D0E0 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CommunicatorImplementation.Instance.CallAsync(message);
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0;
		L_0 = CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline(/*hidden argument*/NULL);
		Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * L_1 = ___message0;
		NullCheck(L_0);
		CommunicatorImplementation_CallAsync_m5FBCDC16A9D5995CB7DCB4F1C4697F8DFA9CBF4C(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.GpmCommunicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicator__ctor_mADD60DEB612463AE55A73AB87DA3D7C3D7E542E5 (GpmCommunicator_t9164501A17422AD7DB494B8AA7F4233D8120583E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorCallback__ctor_m170E393B9489F51271DF362F3731434936854EC1 (GpmCommunicatorCallback_tC7B97EEC15ADE6F1282D73CDE5422527A05070F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorVO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GpmCommunicatorVO__ctor_m053F1334AD11B655C79D108AE7B8417489A44115 (GpmCommunicatorVO_t0BF4D0FAAA134E3AFDCA86B5E36819BCAB95F294 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * IosMessageSender_get_Instance_m6FDFA08BBC49E4F9684B4AA15879751C09125983 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * L_0 = ((IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__ctor_m28BE3890645F4D505146CD4546F1AE12766AFEAB (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IosMessageSenderExtern iosMessageSenderExtern = new IosMessageSenderExtern();
		IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * L_0 = (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 *)il2cpp_codegen_object_new(IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0_il2cpp_TypeInfo_var);
		IosMessageSenderExtern__ctor_mFF6E484BE53D5FBF0C6F7A17AC0BC40B0F448AF1(L_0, /*hidden argument*/NULL);
		__this->set_iosMessageSenderExtern_1(L_0);
		// private IosMessageSender()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_Initialize_m221031F04F722D0014E779416B570994F1CE1329 (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method)
{
	{
		// iosMessageSenderExtern.Initialize(gameObjectName, methodName);
		IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * L_0 = __this->get_iosMessageSenderExtern_1();
		String_t* L_1 = ___gameObjectName0;
		String_t* L_2 = ___methodName1;
		NullCheck(L_0);
		IosMessageSenderExtern_Initialize_mE524B0324BC629086F9BB75EE51ECF74779C8051(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_InitializeClass_m732199CD80DC278D403C1EA86D9FA8ED7C4E8F3A (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, String_t* ___className0, const RuntimeMethod* method)
{
	{
		// iosMessageSenderExtern.InitializeClass(className);
		IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * L_0 = __this->get_iosMessageSenderExtern_1();
		String_t* L_1 = ___className0;
		NullCheck(L_0);
		IosMessageSenderExtern_InitializeClass_mB91A6EAB09B3E93075768A10F1951EA26B99A14E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Gpm.Communicator.Internal.Ios.IosMessageSender::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSender_CallSync_m20B1D9F8EDF9F71B0EE6CF6FC075730953AD2422 (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	{
		// return iosMessageSenderExtern.CallSync(domain, data, extra);
		IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * L_0 = __this->get_iosMessageSenderExtern_1();
		String_t* L_1 = ___domain0;
		String_t* L_2 = ___data1;
		String_t* L_3 = ___extra2;
		NullCheck(L_0);
		String_t* L_4;
		L_4 = IosMessageSenderExtern_CallSync_m521C1FC556B9168F73AFA101C2DB6F8091C48F10(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender_CallAsync_m4DC1C1DEA7C5867CDA87C91407BF373F4A2DB66A (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	{
		// iosMessageSenderExtern.CallAsync(domain, data, extra);
		IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * L_0 = __this->get_iosMessageSenderExtern_1();
		String_t* L_1 = ___domain0;
		String_t* L_2 = ___data1;
		String_t* L_3 = ___extra2;
		NullCheck(L_0);
		IosMessageSenderExtern_CallAsync_mA0E718DFB27AB25DC943DB45CCBF4A041BA01EF0(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSender::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSender__cctor_m4A27BF980B7401ED77A81831AC881A5C36B41D2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IosMessageSender instance = new IosMessageSender();
		IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * L_0 = (IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 *)il2cpp_codegen_object_new(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		IosMessageSender__ctor_m28BE3890645F4D505146CD4546F1AE12766AFEAB(L_0, /*hidden argument*/NULL);
		((IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var))->set_instance_0(L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeUnityObject_m485F3AD95223B267A07ABDE7B03280CFDF39BBE5 (String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___gameObjectName0' to native representation
	char* ____gameObjectName0_marshaled = NULL;
	____gameObjectName0_marshaled = il2cpp_codegen_marshal_string(___gameObjectName0);

	// Marshaling of parameter '___methodName1' to native representation
	char* ____methodName1_marshaled = NULL;
	____methodName1_marshaled = il2cpp_codegen_marshal_string(___methodName1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initializeUnityObject)(____gameObjectName0_marshaled, ____methodName1_marshaled);

	// Marshaling cleanup of parameter '___gameObjectName0' native representation
	il2cpp_codegen_marshal_free(____gameObjectName0_marshaled);
	____gameObjectName0_marshaled = NULL;

	// Marshaling cleanup of parameter '___methodName1' native representation
	il2cpp_codegen_marshal_free(____methodName1_marshaled);
	____methodName1_marshaled = NULL;

}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::initializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_initializeClass_m8372E9B276858651E333E02DCDEEA7EF6E1B1775 (String_t* ___className0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___className0' to native representation
	char* ____className0_marshaled = NULL;
	____className0_marshaled = il2cpp_codegen_marshal_string(___className0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initializeClass)(____className0_marshaled);

	// Marshaling cleanup of parameter '___className0' native representation
	il2cpp_codegen_marshal_free(____className0_marshaled);
	____className0_marshaled = NULL;

}
// System.IntPtr Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IosMessageSenderExtern_onRequestSync_m216A23E97CDA7E97EC05D49327FA04BA51E2D6FD (String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___domain0' to native representation
	char* ____domain0_marshaled = NULL;
	____domain0_marshaled = il2cpp_codegen_marshal_string(___domain0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Marshaling of parameter '___extra2' to native representation
	char* ____extra2_marshaled = NULL;
	____extra2_marshaled = il2cpp_codegen_marshal_string(___extra2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(onRequestSync)(____domain0_marshaled, ____data1_marshaled, ____extra2_marshaled);

	// Marshaling cleanup of parameter '___domain0' native representation
	il2cpp_codegen_marshal_free(____domain0_marshaled);
	____domain0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

	// Marshaling cleanup of parameter '___extra2' native representation
	il2cpp_codegen_marshal_free(____extra2_marshaled);
	____extra2_marshaled = NULL;

	return returnValue;
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::onRequestAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_onRequestAsync_mC47BE0D9FBB60BB51CE3BD730AF3A4C866A83163 (String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___domain0' to native representation
	char* ____domain0_marshaled = NULL;
	____domain0_marshaled = il2cpp_codegen_marshal_string(___domain0);

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Marshaling of parameter '___extra2' to native representation
	char* ____extra2_marshaled = NULL;
	____extra2_marshaled = il2cpp_codegen_marshal_string(___extra2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(onRequestAsync)(____domain0_marshaled, ____data1_marshaled, ____extra2_marshaled);

	// Marshaling cleanup of parameter '___domain0' native representation
	il2cpp_codegen_marshal_free(____domain0_marshaled);
	____domain0_marshaled = NULL;

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

	// Marshaling cleanup of parameter '___extra2' native representation
	il2cpp_codegen_marshal_free(____extra2_marshaled);
	____extra2_marshaled = NULL;

}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::Initialize(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_Initialize_mE524B0324BC629086F9BB75EE51ECF74779C8051 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___gameObjectName0, String_t* ___methodName1, const RuntimeMethod* method)
{
	{
		// initializeUnityObject(gameObjectName, methodName);
		String_t* L_0 = ___gameObjectName0;
		String_t* L_1 = ___methodName1;
		IosMessageSenderExtern_initializeUnityObject_m485F3AD95223B267A07ABDE7B03280CFDF39BBE5(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::InitializeClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_InitializeClass_mB91A6EAB09B3E93075768A10F1951EA26B99A14E (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___className0, const RuntimeMethod* method)
{
	{
		// initializeClass(className);
		String_t* L_0 = ___className0;
		IosMessageSenderExtern_initializeClass_m8372E9B276858651E333E02DCDEEA7EF6E1B1775(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallSync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosMessageSenderExtern_CallSync_m521C1FC556B9168F73AFA101C2DB6F8091C48F10 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string retValue = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		// IntPtr result = onRequestSync(domain, data, extra);
		String_t* L_1 = ___domain0;
		String_t* L_2 = ___data1;
		String_t* L_3 = ___extra2;
		intptr_t L_4;
		L_4 = IosMessageSenderExtern_onRequestSync_m216A23E97CDA7E97EC05D49327FA04BA51E2D6FD(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
		// if (IntPtr.Zero != result)
		intptr_t L_5 = V_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)(0), (intptr_t)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// retValue = Marshal.PtrToStringAnsi(result);
		intptr_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0023:
	{
		// return retValue;
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::CallAsync(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern_CallAsync_mA0E718DFB27AB25DC943DB45CCBF4A041BA01EF0 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, String_t* ___domain0, String_t* ___data1, String_t* ___extra2, const RuntimeMethod* method)
{
	{
		// onRequestAsync(domain, data, extra);
		String_t* L_0 = ___domain0;
		String_t* L_1 = ___data1;
		String_t* L_2 = ___extra2;
		IosMessageSenderExtern_onRequestAsync_mC47BE0D9FBB60BB51CE3BD730AF3A4C866A83163(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gpm.Communicator.Internal.Ios.IosMessageSenderExtern::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosMessageSenderExtern__ctor_mFF6E484BE53D5FBF0C6F7A17AC0BC40B0F448AF1 (IosMessageSenderExtern_t581A105F89117EB043A0C97E43E891A26D7481B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback__ctor_m6ABB3D487F5191C8F62A56AF4FE9F4BF635FE3DD (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::Invoke(Gpm.Communicator.GpmCommunicatorVO/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_Invoke_m158B90B072FF6270E0CF8B3814FA07D73C666F95 (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::BeginInvoke(Gpm.Communicator.GpmCommunicatorVO/Message,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommunicatorCallback_BeginInvoke_mC2977F15C751A5A989E18F6BF89C7EDCCDEF428C (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Gpm.Communicator.GpmCommunicatorCallback/CommunicatorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommunicatorCallback_EndInvoke_mB470E4699090DFACCBA95E9B6F54D7698A43B5CE (CommunicatorCallback_t00B1202EFFD17164FFEFE3AD8C02468ED4C82391 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Gpm.Communicator.GpmCommunicatorVO/Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_m57CB11296A7A6A52C5D63ABB41F68D9D98723DBC (Configuration_tAF8DF53753B7EC302B1FD14BEBAA6E9CBA272079 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Message__ctor_m2F297093425B23BCD6B38A094E078D63DD288F65 (Message_t4FEA7F3A0AA2CF1B4E0B454FDDBE2465CB909701 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * IosMessageSender_get_Instance_m6FDFA08BBC49E4F9684B4AA15879751C09125983_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var);
		IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64 * L_0 = ((IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_StaticFields*)il2cpp_codegen_static_fields_for(IosMessageSender_t92F0EC9C858E40BA278C9692B59CFAEE4DC49B64_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * CommunicatorImplementation_get_Instance_m33333E208355264A4887834E2E584CB100BEF727_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return instance; }
		IL2CPP_RUNTIME_CLASS_INIT(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var);
		CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C * L_0 = ((CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_StaticFields*)il2cpp_codegen_static_fields_for(CommunicatorImplementation_t4A35115C3562C5C77E41E1FDC488F777D09CCA6C_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
