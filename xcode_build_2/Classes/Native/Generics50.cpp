﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkStealingQueue_LocalPush_m21A75830BF02EE497FA709E0A39B7EE096F7EEED_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE 
{
public:
	// T1 System.ValueTuple`6::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`6::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`6::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`6::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`6::Item5
	RuntimeObject * ___Item5_4;
	// T6 System.ValueTuple`6::Item6
	RuntimeObject * ___Item6_5;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}

	inline static int32_t get_offset_of_Item6_5() { return static_cast<int32_t>(offsetof(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE, ___Item6_5)); }
	inline RuntimeObject * get_Item6_5() const { return ___Item6_5; }
	inline RuntimeObject ** get_address_of_Item6_5() { return &___Item6_5; }
	inline void set_Item6_5(RuntimeObject * value)
	{
		___Item6_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item6_5), (void*)value);
	}
};


// System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 
{
public:
	// T1 System.ValueTuple`7::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`7::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`7::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`7::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`7::Item5
	RuntimeObject * ___Item5_4;
	// T6 System.ValueTuple`7::Item6
	RuntimeObject * ___Item6_5;
	// T7 System.ValueTuple`7::Item7
	RuntimeObject * ___Item7_6;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}

	inline static int32_t get_offset_of_Item6_5() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item6_5)); }
	inline RuntimeObject * get_Item6_5() const { return ___Item6_5; }
	inline RuntimeObject ** get_address_of_Item6_5() { return &___Item6_5; }
	inline void set_Item6_5(RuntimeObject * value)
	{
		___Item6_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item6_5), (void*)value);
	}

	inline static int32_t get_offset_of_Item7_6() { return static_cast<int32_t>(offsetof(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17, ___Item7_6)); }
	inline RuntimeObject * get_Item7_6() const { return ___Item7_6; }
	inline RuntimeObject ** get_address_of_Item7_6() { return &___Item7_6; }
	inline void set_Item7_6(RuntimeObject * value)
	{
		___Item7_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item7_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_headIndex
	int32_t ____headIndex_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_tailIndex
	int32_t ____tailIndex_1;
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_mask
	int32_t ____mask_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_addTakeCount
	int32_t ____addTakeCount_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_stealCount
	int32_t ____stealCount_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_currentOp
	int32_t ____currentOp_6;
	// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_frozen
	bool ____frozen_7;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_nextQueue
	WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * ____nextQueue_8;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_ownerThreadId
	int32_t ____ownerThreadId_9;

public:
	inline static int32_t get_offset_of__headIndex_0() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____headIndex_0)); }
	inline int32_t get__headIndex_0() const { return ____headIndex_0; }
	inline int32_t* get_address_of__headIndex_0() { return &____headIndex_0; }
	inline void set__headIndex_0(int32_t value)
	{
		____headIndex_0 = value;
	}

	inline static int32_t get_offset_of__tailIndex_1() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____tailIndex_1)); }
	inline int32_t get__tailIndex_1() const { return ____tailIndex_1; }
	inline int32_t* get_address_of__tailIndex_1() { return &____tailIndex_1; }
	inline void set__tailIndex_1(int32_t value)
	{
		____tailIndex_1 = value;
	}

	inline static int32_t get_offset_of__array_2() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____array_2)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_2() const { return ____array_2; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_2() { return &____array_2; }
	inline void set__array_2(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_2), (void*)value);
	}

	inline static int32_t get_offset_of__mask_3() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____mask_3)); }
	inline int32_t get__mask_3() const { return ____mask_3; }
	inline int32_t* get_address_of__mask_3() { return &____mask_3; }
	inline void set__mask_3(int32_t value)
	{
		____mask_3 = value;
	}

	inline static int32_t get_offset_of__addTakeCount_4() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____addTakeCount_4)); }
	inline int32_t get__addTakeCount_4() const { return ____addTakeCount_4; }
	inline int32_t* get_address_of__addTakeCount_4() { return &____addTakeCount_4; }
	inline void set__addTakeCount_4(int32_t value)
	{
		____addTakeCount_4 = value;
	}

	inline static int32_t get_offset_of__stealCount_5() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____stealCount_5)); }
	inline int32_t get__stealCount_5() const { return ____stealCount_5; }
	inline int32_t* get_address_of__stealCount_5() { return &____stealCount_5; }
	inline void set__stealCount_5(int32_t value)
	{
		____stealCount_5 = value;
	}

	inline static int32_t get_offset_of__currentOp_6() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____currentOp_6)); }
	inline int32_t get__currentOp_6() const { return ____currentOp_6; }
	inline int32_t* get_address_of__currentOp_6() { return &____currentOp_6; }
	inline void set__currentOp_6(int32_t value)
	{
		____currentOp_6 = value;
	}

	inline static int32_t get_offset_of__frozen_7() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____frozen_7)); }
	inline bool get__frozen_7() const { return ____frozen_7; }
	inline bool* get_address_of__frozen_7() { return &____frozen_7; }
	inline void set__frozen_7(bool value)
	{
		____frozen_7 = value;
	}

	inline static int32_t get_offset_of__nextQueue_8() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____nextQueue_8)); }
	inline WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * get__nextQueue_8() const { return ____nextQueue_8; }
	inline WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 ** get_address_of__nextQueue_8() { return &____nextQueue_8; }
	inline void set__nextQueue_8(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * value)
	{
		____nextQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nextQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of__ownerThreadId_9() { return static_cast<int32_t>(offsetof(WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7, ____ownerThreadId_9)); }
	inline int32_t get__ownerThreadId_9() const { return ____ownerThreadId_9; }
	inline int32_t* get_address_of__ownerThreadId_9() { return &____ownerThreadId_9; }
	inline void set__ownerThreadId_9(int32_t value)
	{
		____ownerThreadId_9 = value;
	}
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method);
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, RuntimeObject * ___item76, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method);
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0_gshared)(__this, ___comparer0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared)(__this, method);
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
inline String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
inline int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04_gshared)(__this, method);
}
// System.Void System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6)
inline void ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, method);
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
inline bool ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE , const RuntimeMethod*))ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject *, const RuntimeMethod*))ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
inline int32_t ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE , const RuntimeMethod*))ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject *, const RuntimeMethod*))ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m3CFD1A4B325E1FC95902BEDC4F2734255F99BEBF (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, int32_t ___h65, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, const RuntimeMethod*))ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject*, const RuntimeMethod*))ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject*, const RuntimeMethod*))ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, RuntimeObject*, const RuntimeMethod*))ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, const RuntimeMethod*))ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87_gshared)(__this, method);
}
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
inline String_t* ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, const RuntimeMethod*))ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
inline int32_t ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81 (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *, const RuntimeMethod*))ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81_gshared)(__this, method);
}
// System.Void System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6,T7)
inline void ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, RuntimeObject * ___item76, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, ___item76, method);
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
inline bool ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 , const RuntimeMethod*))ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
inline int32_t ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 , const RuntimeMethod*))ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m9D6360B77C5C220E1DA759D7C90B386DF36AFCA1 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, int32_t ___h65, int32_t ___h76, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, const RuntimeMethod*))ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, const RuntimeMethod*))ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851_gshared)(__this, method);
}
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
inline String_t* ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, const RuntimeMethod*))ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
inline int32_t ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969 (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *, const RuntimeMethod*))ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794 (int32_t* ___location10, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		return (bool)L_27;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		return (int32_t)L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, /*hidden argument*/NULL);
		return (int32_t)L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_GetHashCode_m029CDDA3C6AAFEE8B39128178901CDF915A1EFD0(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		G_B1_0 = L_2;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_4 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_5)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003e;
	}

IL_0033:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003e:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		RuntimeObject ** L_9 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_1;
		G_B5_0 = L_9;
		G_B5_1 = 2;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
		if (L_10)
		{
			G_B7_0 = L_9;
			G_B7_1 = 2;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_11 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_11;
		RuntimeObject * L_12 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_12)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0073;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007e;
	}

IL_0073:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007e:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_14;
		RuntimeObject ** L_16 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_2;
		G_B9_0 = L_16;
		G_B9_1 = 4;
		G_B9_2 = L_15;
		G_B9_3 = L_15;
		if (L_17)
		{
			G_B11_0 = L_16;
			G_B11_1 = 4;
			G_B11_2 = L_15;
			G_B11_3 = L_15;
			goto IL_00b3;
		}
	}
	{
		RuntimeObject * L_18 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_18;
		RuntimeObject * L_19 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_19)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b3;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00be;
	}

IL_00b3:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_20;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00be:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_21;
		RuntimeObject ** L_23 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_24 = V_3;
		G_B13_0 = L_23;
		G_B13_1 = 6;
		G_B13_2 = L_22;
		G_B13_3 = L_22;
		if (L_24)
		{
			G_B15_0 = L_23;
			G_B15_1 = 6;
			G_B15_2 = L_22;
			G_B15_3 = L_22;
			goto IL_00f3;
		}
	}
	{
		RuntimeObject * L_25 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_25;
		RuntimeObject * L_26 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_26)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00f3;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fe;
	}

IL_00f3:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_27;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fe:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28;
		RuntimeObject ** L_30 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_31 = V_4;
		G_B17_0 = L_30;
		G_B17_1 = 8;
		G_B17_2 = L_29;
		G_B17_3 = L_29;
		if (L_31)
		{
			G_B19_0 = L_30;
			G_B19_1 = 8;
			G_B19_2 = L_29;
			G_B19_3 = L_29;
			goto IL_0136;
		}
	}
	{
		RuntimeObject * L_32 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_32;
		RuntimeObject * L_33 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_33)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0136;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_0141;
	}

IL_0136:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_34;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_0141:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_36;
		L_36 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_35, /*hidden argument*/NULL);
		return (String_t*)L_36;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_System_IValueTupleInternal_ToStringEnd_mB561FBC72F4E322EBB9151C1E416D235C681563B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)5;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Runtime_CompilerServices_ITuple_get_Length_mE3C56C96C547CAF204B5DB2FCD68A9BAB85C1B04(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		RuntimeObject * L_5 = ___item65;
		__this->set_Item6_5(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	ValueTuple_6__ctor_m21BD05A73D34DCD43CF22BA0AC4D62F51D315833(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, method);
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this, (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )((*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_6_Equals_m35EE2E90698DF9AAA527DBE02F76693071CE4149(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		if (!L_24)
		{
			goto IL_008f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_25;
		L_25 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_26 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_27 = ___other0;
		RuntimeObject * L_28 = (RuntimeObject *)L_27.get_Item6_5();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_25);
		bool L_29;
		L_29 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_25, (RuntimeObject *)L_26, (RuntimeObject *)L_28);
		return (bool)L_29;
	}

IL_008f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9_AdjustorThunk (RuntimeObject * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_6_Equals_m03597CF83D499702053BC500C9B316BF148219E9(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )((*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		if (!L_27)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_28 = ___comparer1;
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_30 = V_0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item6_5();
		NullCheck((RuntimeObject*)L_28);
		bool L_32;
		L_32 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (bool)L_32;
	}

IL_00ca:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_6_System_Collections_IStructuralEquatable_Equals_m586BDB5B13F7955450647E97025F1B92BFF5D5B2(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_2 = (*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this);
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_3 = (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this, (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )((*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_System_IComparable_CompareTo_mC977C4C5E53E992D3F2A1149672E3327A2531291(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`6<T1,T2,T3,T4,T5,T6>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 30)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 33));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 36));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 39)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 39));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		V_0 = (int32_t)L_32;
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_34 = V_0;
		return (int32_t)L_34;
	}

IL_008c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_35;
		L_35 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 42)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 42));
		RuntimeObject * L_36 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_37 = ___other0;
		RuntimeObject * L_38 = (RuntimeObject *)L_37.get_Item6_5();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_35);
		int32_t L_39;
		L_39 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_35, (RuntimeObject *)L_36, (RuntimeObject *)L_38);
		return (int32_t)L_39;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C_AdjustorThunk (RuntimeObject * __this, ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_CompareTo_m7BA633D43F97186C0D55BCE33804848E08ED0C0C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_2 = (*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this);
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_3 = (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE )((*(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		V_1 = (int32_t)L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_44 = V_1;
		return (int32_t)L_44;
	}

IL_00e8:
	{
		RuntimeObject* L_45 = ___comparer1;
		RuntimeObject * L_46 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE  L_47 = V_0;
		RuntimeObject * L_48 = (RuntimeObject *)L_47.get_Item6_5();
		NullCheck((RuntimeObject*)L_45);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_45, (RuntimeObject *)L_46, (RuntimeObject *)L_48);
		return (int32_t)L_49;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_System_Collections_IStructuralComparable_CompareTo_m9D41DE589689A8CF4E3FF6B5B5ECD3CA1346A0C6(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	int32_t G_B23_5 = 0;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t G_B21_4 = 0;
	int32_t G_B21_5 = 0;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	int32_t G_B22_4 = 0;
	int32_t G_B22_5 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	int32_t G_B24_5 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		RuntimeObject ** L_25 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_26 = V_5;
		G_B21_0 = L_25;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
		if (L_26)
		{
			G_B23_0 = L_25;
			G_B23_1 = G_B20_0;
			G_B23_2 = G_B20_1;
			G_B23_3 = G_B20_2;
			G_B23_4 = G_B20_3;
			G_B23_5 = G_B20_4;
			goto IL_0139;
		}
	}
	{
		RuntimeObject * L_27 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_27;
		RuntimeObject * L_28 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		G_B22_4 = G_B21_4;
		G_B22_5 = G_B21_5;
		if (L_28)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			G_B23_4 = G_B21_4;
			G_B23_5 = G_B21_5;
			goto IL_0139;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		G_B24_4 = G_B22_4;
		G_B24_5 = G_B22_5;
		goto IL_0144;
	}

IL_0139:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_29;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
		G_B24_4 = G_B23_4;
		G_B24_5 = G_B23_5;
	}

IL_0144:
	{
		int32_t L_30;
		L_30 = ValueTuple_CombineHashCodes_m3CFD1A4B325E1FC95902BEDC4F2734255F99BEBF((int32_t)G_B24_5, (int32_t)G_B24_4, (int32_t)G_B24_3, (int32_t)G_B24_2, (int32_t)G_B24_1, (int32_t)G_B24_0, /*hidden argument*/NULL);
		return (int32_t)L_30;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_GetHashCode_mC5C94712FF7C8106502F7D12F782D2009E3EBD37(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_System_Collections_IStructuralEquatable_GetHashCode_m2855E4B0AB2ABAEB020A80F268B23BCAF30C2CEB(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		RuntimeObject* L_15 = ___comparer0;
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item6_5();
		NullCheck((RuntimeObject*)L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_15, (RuntimeObject *)L_16);
		int32_t L_18;
		L_18 = ValueTuple_CombineHashCodes_m3CFD1A4B325E1FC95902BEDC4F2734255F99BEBF((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, (int32_t)L_17, /*hidden argument*/NULL);
		return (int32_t)L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_6_GetHashCodeCore_m8E4BF7C1296C435C3BB17831563FF24E2E61A746((ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)(ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 45));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_System_IValueTupleInternal_GetHashCode_mE4EA72465ED1F21B551057DCF153D63407CEA103(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36;
		RuntimeObject ** L_38 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_39 = V_5;
		G_B21_0 = L_38;
		G_B21_1 = ((int32_t)11);
		G_B21_2 = L_37;
		G_B21_3 = L_37;
		if (L_39)
		{
			G_B23_0 = L_38;
			G_B23_1 = ((int32_t)11);
			G_B23_2 = L_37;
			G_B23_3 = L_37;
			goto IL_0184;
		}
	}
	{
		RuntimeObject * L_40 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_40;
		RuntimeObject * L_41 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (L_41)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_0184;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_018f;
	}

IL_0184:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_42;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
	}

IL_018f:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B24_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_44;
		L_44 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_43, /*hidden argument*/NULL);
		return (String_t*)L_44;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_6_ToString_m3AE3BD24CC66F031D9B41131F9FB0ADA1A3D2B87(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		G_B1_0 = L_2;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_4 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_5)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003e;
	}

IL_0033:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003e:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		RuntimeObject ** L_9 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_1;
		G_B5_0 = L_9;
		G_B5_1 = 2;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
		if (L_10)
		{
			G_B7_0 = L_9;
			G_B7_1 = 2;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_11 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_11;
		RuntimeObject * L_12 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_12)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0073;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007e;
	}

IL_0073:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007e:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_14;
		RuntimeObject ** L_16 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_2;
		G_B9_0 = L_16;
		G_B9_1 = 4;
		G_B9_2 = L_15;
		G_B9_3 = L_15;
		if (L_17)
		{
			G_B11_0 = L_16;
			G_B11_1 = 4;
			G_B11_2 = L_15;
			G_B11_3 = L_15;
			goto IL_00b3;
		}
	}
	{
		RuntimeObject * L_18 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_18;
		RuntimeObject * L_19 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_19)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b3;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00be;
	}

IL_00b3:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_20;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00be:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_21;
		RuntimeObject ** L_23 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_24 = V_3;
		G_B13_0 = L_23;
		G_B13_1 = 6;
		G_B13_2 = L_22;
		G_B13_3 = L_22;
		if (L_24)
		{
			G_B15_0 = L_23;
			G_B15_1 = 6;
			G_B15_2 = L_22;
			G_B15_3 = L_22;
			goto IL_00f3;
		}
	}
	{
		RuntimeObject * L_25 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_25;
		RuntimeObject * L_26 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_26)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00f3;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fe;
	}

IL_00f3:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_27;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fe:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28;
		RuntimeObject ** L_30 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_31 = V_4;
		G_B17_0 = L_30;
		G_B17_1 = 8;
		G_B17_2 = L_29;
		G_B17_3 = L_29;
		if (L_31)
		{
			G_B19_0 = L_30;
			G_B19_1 = 8;
			G_B19_2 = L_29;
			G_B19_3 = L_29;
			goto IL_0136;
		}
	}
	{
		RuntimeObject * L_32 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_32;
		RuntimeObject * L_33 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_33)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0136;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_0141;
	}

IL_0136:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_34;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_0141:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_35;
		RuntimeObject ** L_37 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_38 = V_5;
		G_B21_0 = L_37;
		G_B21_1 = ((int32_t)10);
		G_B21_2 = L_36;
		G_B21_3 = L_36;
		if (L_38)
		{
			G_B23_0 = L_37;
			G_B23_1 = ((int32_t)10);
			G_B23_2 = L_36;
			G_B23_3 = L_36;
			goto IL_017b;
		}
	}
	{
		RuntimeObject * L_39 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_39;
		RuntimeObject * L_40 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (L_40)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_017b;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_0186;
	}

IL_017b:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_41;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
	}

IL_0186:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B24_3;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_43;
		L_43 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_42, /*hidden argument*/NULL);
		return (String_t*)L_43;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_6_System_IValueTupleInternal_ToStringEnd_mCF6FE46AD0968871FF928107143CAC36E37284D0(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81_gshared (ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)6;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE * _thisAdjusted = reinterpret_cast<ValueTuple_6_t80BD621B328098E93C7CB318D78A0F0AE20D91AE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_6_System_Runtime_CompilerServices_ITuple_get_Length_m5D148A0B9FE298C766EFD6E8DCDA7760D3EF1E81(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, RuntimeObject * ___item76, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		RuntimeObject * L_5 = ___item65;
		__this->set_Item6_5(L_5);
		RuntimeObject * L_6 = ___item76;
		__this->set_Item7_6(L_6);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, RuntimeObject * ___item65, RuntimeObject * ___item76, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	ValueTuple_7__ctor_mEE35DC54C19AE4FD3DC4EA031A029AAB1C81791C(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, ___item65, ___item76, method);
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this, (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )((*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_7_Equals_m3E412D793326014641C5C9500FCC99C4E375D4F3(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		if (!L_24)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_25;
		L_25 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_26 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_27 = ___other0;
		RuntimeObject * L_28 = (RuntimeObject *)L_27.get_Item6_5();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_25);
		bool L_29;
		L_29 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_25, (RuntimeObject *)L_26, (RuntimeObject *)L_28);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_30;
		L_30 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		RuntimeObject * L_31 = (RuntimeObject *)__this->get_Item7_6();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_32 = ___other0;
		RuntimeObject * L_33 = (RuntimeObject *)L_32.get_Item7_6();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_30);
		bool L_34;
		L_34 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_30, (RuntimeObject *)L_31, (RuntimeObject *)L_33);
		return (bool)L_34;
	}

IL_00aa:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206_AdjustorThunk (RuntimeObject * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_7_Equals_m56CBA6CFCA71B6832AC8CA56D4DC6D5F28185206(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )((*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		if (!L_27)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_28 = ___comparer1;
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_30 = V_0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item6_5();
		NullCheck((RuntimeObject*)L_28);
		bool L_32;
		L_32 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		if (!L_32)
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_33 = ___comparer1;
		RuntimeObject * L_34 = (RuntimeObject *)__this->get_Item7_6();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_35 = V_0;
		RuntimeObject * L_36 = (RuntimeObject *)L_35.get_Item7_6();
		NullCheck((RuntimeObject*)L_33);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_33, (RuntimeObject *)L_34, (RuntimeObject *)L_36);
		return (bool)L_37;
	}

IL_00eb:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_7_System_Collections_IStructuralEquatable_Equals_mEC3A94BC46EE54249FABCE0329FC774D38F9758D(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_2 = (*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this);
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_3 = (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this, (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )((*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 30));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_System_IComparable_CompareTo_m6B17465766945D71F4D8B2283F9128309D663374(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 31)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 34));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 37));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 40)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 40));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 43)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		V_0 = (int32_t)L_32;
		int32_t L_33 = V_0;
		if (!L_33)
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_34 = V_0;
		return (int32_t)L_34;
	}

IL_008c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_35;
		L_35 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 46)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 46));
		RuntimeObject * L_36 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_37 = ___other0;
		RuntimeObject * L_38 = (RuntimeObject *)L_37.get_Item6_5();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_35);
		int32_t L_39;
		L_39 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_35, (RuntimeObject *)L_36, (RuntimeObject *)L_38);
		V_0 = (int32_t)L_39;
		int32_t L_40 = V_0;
		if (!L_40)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_41 = V_0;
		return (int32_t)L_41;
	}

IL_00a8:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_42;
		L_42 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 49)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 49));
		RuntimeObject * L_43 = (RuntimeObject *)__this->get_Item7_6();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_44 = ___other0;
		RuntimeObject * L_45 = (RuntimeObject *)L_44.get_Item7_6();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_42);
		int32_t L_46;
		L_46 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_42, (RuntimeObject *)L_43, (RuntimeObject *)L_45);
		return (int32_t)L_46;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841_AdjustorThunk (RuntimeObject * __this, ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_CompareTo_m4ABB14A2415CAD94613B154098E3BE18E1C8B841(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_2 = (*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this);
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_3 = (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 )((*(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		V_1 = (int32_t)L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_44 = V_1;
		return (int32_t)L_44;
	}

IL_00e8:
	{
		RuntimeObject* L_45 = ___comparer1;
		RuntimeObject * L_46 = (RuntimeObject *)__this->get_Item6_5();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_47 = V_0;
		RuntimeObject * L_48 = (RuntimeObject *)L_47.get_Item6_5();
		NullCheck((RuntimeObject*)L_45);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_45, (RuntimeObject *)L_46, (RuntimeObject *)L_48);
		V_1 = (int32_t)L_49;
		int32_t L_50 = V_1;
		if (!L_50)
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_51 = V_1;
		return (int32_t)L_51;
	}

IL_010a:
	{
		RuntimeObject* L_52 = ___comparer1;
		RuntimeObject * L_53 = (RuntimeObject *)__this->get_Item7_6();
		ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17  L_54 = V_0;
		RuntimeObject * L_55 = (RuntimeObject *)L_54.get_Item7_6();
		NullCheck((RuntimeObject*)L_52);
		int32_t L_56;
		L_56 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_52, (RuntimeObject *)L_53, (RuntimeObject *)L_55);
		return (int32_t)L_56;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_System_Collections_IStructuralComparable_CompareTo_m60E13098C9CD04419899E512F6F3E5881B5EBBBE(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	int32_t G_B23_5 = 0;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	int32_t G_B21_4 = 0;
	int32_t G_B21_5 = 0;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	int32_t G_B22_4 = 0;
	int32_t G_B22_5 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B24_2 = 0;
	int32_t G_B24_3 = 0;
	int32_t G_B24_4 = 0;
	int32_t G_B24_5 = 0;
	RuntimeObject ** G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	int32_t G_B27_2 = 0;
	int32_t G_B27_3 = 0;
	int32_t G_B27_4 = 0;
	int32_t G_B27_5 = 0;
	int32_t G_B27_6 = 0;
	RuntimeObject ** G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	int32_t G_B25_2 = 0;
	int32_t G_B25_3 = 0;
	int32_t G_B25_4 = 0;
	int32_t G_B25_5 = 0;
	int32_t G_B25_6 = 0;
	RuntimeObject ** G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	int32_t G_B26_2 = 0;
	int32_t G_B26_3 = 0;
	int32_t G_B26_4 = 0;
	int32_t G_B26_5 = 0;
	int32_t G_B26_6 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	int32_t G_B28_2 = 0;
	int32_t G_B28_3 = 0;
	int32_t G_B28_4 = 0;
	int32_t G_B28_5 = 0;
	int32_t G_B28_6 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		RuntimeObject ** L_25 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_26 = V_5;
		G_B21_0 = L_25;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
		if (L_26)
		{
			G_B23_0 = L_25;
			G_B23_1 = G_B20_0;
			G_B23_2 = G_B20_1;
			G_B23_3 = G_B20_2;
			G_B23_4 = G_B20_3;
			G_B23_5 = G_B20_4;
			goto IL_0139;
		}
	}
	{
		RuntimeObject * L_27 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_27;
		RuntimeObject * L_28 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		G_B22_4 = G_B21_4;
		G_B22_5 = G_B21_5;
		if (L_28)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			G_B23_4 = G_B21_4;
			G_B23_5 = G_B21_5;
			goto IL_0139;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		G_B24_4 = G_B22_4;
		G_B24_5 = G_B22_5;
		goto IL_0144;
	}

IL_0139:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_29;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
		G_B24_4 = G_B23_4;
		G_B24_5 = G_B23_5;
	}

IL_0144:
	{
		RuntimeObject ** L_30 = (RuntimeObject **)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_31 = V_6;
		G_B25_0 = L_30;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
		G_B25_4 = G_B24_3;
		G_B25_5 = G_B24_4;
		G_B25_6 = G_B24_5;
		if (L_31)
		{
			G_B27_0 = L_30;
			G_B27_1 = G_B24_0;
			G_B27_2 = G_B24_1;
			G_B27_3 = G_B24_2;
			G_B27_4 = G_B24_3;
			G_B27_5 = G_B24_4;
			G_B27_6 = G_B24_5;
			goto IL_0171;
		}
	}
	{
		RuntimeObject * L_32 = (*(RuntimeObject **)G_B25_0);
		V_6 = (RuntimeObject *)L_32;
		RuntimeObject * L_33 = V_6;
		G_B26_0 = (&V_6);
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		G_B26_4 = G_B25_4;
		G_B26_5 = G_B25_5;
		G_B26_6 = G_B25_6;
		if (L_33)
		{
			G_B27_0 = (&V_6);
			G_B27_1 = G_B25_1;
			G_B27_2 = G_B25_2;
			G_B27_3 = G_B25_3;
			G_B27_4 = G_B25_4;
			G_B27_5 = G_B25_5;
			G_B27_6 = G_B25_6;
			goto IL_0171;
		}
	}
	{
		G_B28_0 = 0;
		G_B28_1 = G_B26_1;
		G_B28_2 = G_B26_2;
		G_B28_3 = G_B26_3;
		G_B28_4 = G_B26_4;
		G_B28_5 = G_B26_5;
		G_B28_6 = G_B26_6;
		goto IL_017c;
	}

IL_0171:
	{
		NullCheck((RuntimeObject *)(*G_B27_0));
		int32_t L_34;
		L_34 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B27_0));
		G_B28_0 = L_34;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
		G_B28_3 = G_B27_3;
		G_B28_4 = G_B27_4;
		G_B28_5 = G_B27_5;
		G_B28_6 = G_B27_6;
	}

IL_017c:
	{
		int32_t L_35;
		L_35 = ValueTuple_CombineHashCodes_m9D6360B77C5C220E1DA759D7C90B386DF36AFCA1((int32_t)G_B28_6, (int32_t)G_B28_5, (int32_t)G_B28_4, (int32_t)G_B28_3, (int32_t)G_B28_2, (int32_t)G_B28_1, (int32_t)G_B28_0, /*hidden argument*/NULL);
		return (int32_t)L_35;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_GetHashCode_m51F2C431861BB65EE23DC9CD6BEF126568D79A55(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_System_Collections_IStructuralEquatable_GetHashCode_mA1B3A7385E36C01B0F723DB59AA524BFD3F85BA2(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		RuntimeObject* L_15 = ___comparer0;
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item6_5();
		NullCheck((RuntimeObject*)L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_15, (RuntimeObject *)L_16);
		RuntimeObject* L_18 = ___comparer0;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item7_6();
		NullCheck((RuntimeObject*)L_18);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19);
		int32_t L_21;
		L_21 = ValueTuple_CombineHashCodes_m9D6360B77C5C220E1DA759D7C90B386DF36AFCA1((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, (int32_t)L_17, (int32_t)L_20, /*hidden argument*/NULL);
		return (int32_t)L_21;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_7_GetHashCodeCore_m02830375078664EB125E3860D8EE44DC4E0D0135((ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)(ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 52));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_System_IValueTupleInternal_GetHashCode_m7A482B8E335879AF8674F77B80DD16A8951650F8(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	RuntimeObject ** G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_3 = NULL;
	RuntimeObject ** G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_3 = NULL;
	RuntimeObject ** G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_3 = NULL;
	String_t* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36;
		RuntimeObject ** L_38 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_39 = V_5;
		G_B21_0 = L_38;
		G_B21_1 = ((int32_t)11);
		G_B21_2 = L_37;
		G_B21_3 = L_37;
		if (L_39)
		{
			G_B23_0 = L_38;
			G_B23_1 = ((int32_t)11);
			G_B23_2 = L_37;
			G_B23_3 = L_37;
			goto IL_0184;
		}
	}
	{
		RuntimeObject * L_40 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_40;
		RuntimeObject * L_41 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (L_41)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_0184;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_018f;
	}

IL_0184:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_42;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
	}

IL_018f:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B24_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_43;
		RuntimeObject ** L_45 = (RuntimeObject **)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_46 = V_6;
		G_B25_0 = L_45;
		G_B25_1 = ((int32_t)13);
		G_B25_2 = L_44;
		G_B25_3 = L_44;
		if (L_46)
		{
			G_B27_0 = L_45;
			G_B27_1 = ((int32_t)13);
			G_B27_2 = L_44;
			G_B27_3 = L_44;
			goto IL_01c9;
		}
	}
	{
		RuntimeObject * L_47 = (*(RuntimeObject **)G_B25_0);
		V_6 = (RuntimeObject *)L_47;
		RuntimeObject * L_48 = V_6;
		G_B26_0 = (&V_6);
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		if (L_48)
		{
			G_B27_0 = (&V_6);
			G_B27_1 = G_B25_1;
			G_B27_2 = G_B25_2;
			G_B27_3 = G_B25_3;
			goto IL_01c9;
		}
	}
	{
		G_B28_0 = ((String_t*)(NULL));
		G_B28_1 = G_B26_1;
		G_B28_2 = G_B26_2;
		G_B28_3 = G_B26_3;
		goto IL_01d4;
	}

IL_01c9:
	{
		NullCheck((RuntimeObject *)(*G_B27_0));
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B27_0));
		G_B28_0 = L_49;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
		G_B28_3 = G_B27_3;
	}

IL_01d4:
	{
		NullCheck(G_B28_2);
		ArrayElementTypeCheck (G_B28_2, G_B28_0);
		(G_B28_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_1), (String_t*)G_B28_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B28_3;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_51;
		L_51 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_50, /*hidden argument*/NULL);
		return (String_t*)L_51;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_7_ToString_m8C20204A3B153B5C3037607B57A1B6E51E936851(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.IValueTupleInternal.ToStringEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	RuntimeObject ** G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B23_3 = NULL;
	RuntimeObject ** G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_3 = NULL;
	RuntimeObject ** G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B24_3 = NULL;
	RuntimeObject ** G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B27_3 = NULL;
	RuntimeObject ** G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B25_3 = NULL;
	RuntimeObject ** G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B26_3 = NULL;
	String_t* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B28_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		RuntimeObject ** L_2 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_3 = V_0;
		G_B1_0 = L_2;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = 0;
			G_B3_2 = L_1;
			G_B3_3 = L_1;
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_4 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_5)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_003e;
	}

IL_0033:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_003e:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_7;
		RuntimeObject ** L_9 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_10 = V_1;
		G_B5_0 = L_9;
		G_B5_1 = 2;
		G_B5_2 = L_8;
		G_B5_3 = L_8;
		if (L_10)
		{
			G_B7_0 = L_9;
			G_B7_1 = 2;
			G_B7_2 = L_8;
			G_B7_3 = L_8;
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_11 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_11;
		RuntimeObject * L_12 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_12)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_0073;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_007e;
	}

IL_0073:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_13;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_007e:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_14;
		RuntimeObject ** L_16 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_17 = V_2;
		G_B9_0 = L_16;
		G_B9_1 = 4;
		G_B9_2 = L_15;
		G_B9_3 = L_15;
		if (L_17)
		{
			G_B11_0 = L_16;
			G_B11_1 = 4;
			G_B11_2 = L_15;
			G_B11_3 = L_15;
			goto IL_00b3;
		}
	}
	{
		RuntimeObject * L_18 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_18;
		RuntimeObject * L_19 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_19)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00b3;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00be;
	}

IL_00b3:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_20;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00be:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_21;
		RuntimeObject ** L_23 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_24 = V_3;
		G_B13_0 = L_23;
		G_B13_1 = 6;
		G_B13_2 = L_22;
		G_B13_3 = L_22;
		if (L_24)
		{
			G_B15_0 = L_23;
			G_B15_1 = 6;
			G_B15_2 = L_22;
			G_B15_3 = L_22;
			goto IL_00f3;
		}
	}
	{
		RuntimeObject * L_25 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_25;
		RuntimeObject * L_26 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_26)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00f3;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00fe;
	}

IL_00f3:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_27;
		L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_27;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00fe:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_28;
		RuntimeObject ** L_30 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_31 = V_4;
		G_B17_0 = L_30;
		G_B17_1 = 8;
		G_B17_2 = L_29;
		G_B17_3 = L_29;
		if (L_31)
		{
			G_B19_0 = L_30;
			G_B19_1 = 8;
			G_B19_2 = L_29;
			G_B19_3 = L_29;
			goto IL_0136;
		}
	}
	{
		RuntimeObject * L_32 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_32;
		RuntimeObject * L_33 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_33)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0136;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_0141;
	}

IL_0136:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_34;
		L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_34;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_0141:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_35;
		RuntimeObject ** L_37 = (RuntimeObject **)__this->get_address_of_Item6_5();
		il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject *));
		RuntimeObject * L_38 = V_5;
		G_B21_0 = L_37;
		G_B21_1 = ((int32_t)10);
		G_B21_2 = L_36;
		G_B21_3 = L_36;
		if (L_38)
		{
			G_B23_0 = L_37;
			G_B23_1 = ((int32_t)10);
			G_B23_2 = L_36;
			G_B23_3 = L_36;
			goto IL_017b;
		}
	}
	{
		RuntimeObject * L_39 = (*(RuntimeObject **)G_B21_0);
		V_5 = (RuntimeObject *)L_39;
		RuntimeObject * L_40 = V_5;
		G_B22_0 = (&V_5);
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (L_40)
		{
			G_B23_0 = (&V_5);
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_017b;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		G_B24_2 = G_B22_2;
		G_B24_3 = G_B22_3;
		goto IL_0186;
	}

IL_017b:
	{
		NullCheck((RuntimeObject *)(*G_B23_0));
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B23_0));
		G_B24_0 = L_41;
		G_B24_1 = G_B23_1;
		G_B24_2 = G_B23_2;
		G_B24_3 = G_B23_3;
	}

IL_0186:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B24_3;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_42;
		RuntimeObject ** L_44 = (RuntimeObject **)__this->get_address_of_Item7_6();
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject *));
		RuntimeObject * L_45 = V_6;
		G_B25_0 = L_44;
		G_B25_1 = ((int32_t)12);
		G_B25_2 = L_43;
		G_B25_3 = L_43;
		if (L_45)
		{
			G_B27_0 = L_44;
			G_B27_1 = ((int32_t)12);
			G_B27_2 = L_43;
			G_B27_3 = L_43;
			goto IL_01c0;
		}
	}
	{
		RuntimeObject * L_46 = (*(RuntimeObject **)G_B25_0);
		V_6 = (RuntimeObject *)L_46;
		RuntimeObject * L_47 = V_6;
		G_B26_0 = (&V_6);
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		if (L_47)
		{
			G_B27_0 = (&V_6);
			G_B27_1 = G_B25_1;
			G_B27_2 = G_B25_2;
			G_B27_3 = G_B25_3;
			goto IL_01c0;
		}
	}
	{
		G_B28_0 = ((String_t*)(NULL));
		G_B28_1 = G_B26_1;
		G_B28_2 = G_B26_2;
		G_B28_3 = G_B26_3;
		goto IL_01cb;
	}

IL_01c0:
	{
		NullCheck((RuntimeObject *)(*G_B27_0));
		String_t* L_48;
		L_48 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B27_0));
		G_B28_0 = L_48;
		G_B28_1 = G_B27_1;
		G_B28_2 = G_B27_2;
		G_B28_3 = G_B27_3;
	}

IL_01cb:
	{
		NullCheck(G_B28_2);
		ArrayElementTypeCheck (G_B28_2, G_B28_0);
		(G_B28_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_1), (String_t*)G_B28_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B28_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_50;
		L_50 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_49, /*hidden argument*/NULL);
		return (String_t*)L_50;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_7_System_IValueTupleInternal_ToStringEnd_m007AF3F0261F508D70FEDE75BA58388CFBEDC7CF(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::System.Runtime.CompilerServices.ITuple.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969_gshared (ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)7;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 * _thisAdjusted = reinterpret_cast<ValueTuple_7_tA4E93385CD238F39126AB2A52A6101D5611F0C17 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_7_System_Runtime_CompilerServices_ITuple_get_Length_m7EABD7373D445B0CE280F46E8AB3C0CC007E4969(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::.ctor(System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m8192E8504B24B43C58401B29C010BFB42DB9241D_gshared (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * __this, WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * ___nextQueue0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->set__array_2(L_0);
		il2cpp_codegen_memory_barrier();
		__this->set__mask_3(((int32_t)31));
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set__ownerThreadId_9(L_1);
		WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * L_2 = ___nextQueue0;
		__this->set__nextQueue_8(L_2);
		return;
	}
}
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::LocalPush(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m21A75830BF02EE497FA709E0A39B7EE096F7EEED_gshared (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkStealingQueue_LocalPush_m21A75830BF02EE497FA709E0A39B7EE096F7EEED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_6 = NULL;
	int32_t V_7 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = (bool)0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			int32_t* L_0 = (int32_t*)__this->get_address_of__currentOp_6();
			il2cpp_codegen_memory_barrier();
			int32_t L_1;
			L_1 = Interlocked_Exchange_mCB69CAC317F723A1CB6B52194C5917B49C456794((int32_t*)(int32_t*)L_0, (int32_t)1, /*hidden argument*/NULL);
			int32_t L_2 = (int32_t)__this->get__tailIndex_1();
			il2cpp_codegen_memory_barrier();
			V_1 = (int32_t)L_2;
			int32_t L_3 = V_1;
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)2147483647LL)))))
			{
				goto IL_007e;
			}
		}

IL_0020:
		{
			il2cpp_codegen_memory_barrier();
			__this->set__currentOp_6(0);
			V_2 = (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 *)__this;
			V_3 = (bool)0;
		}

IL_002d:
		try
		{ // begin try (depth: 2)
			WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * L_4 = V_2;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_4, (bool*)(bool*)(&V_3), /*hidden argument*/NULL);
			int32_t L_5 = (int32_t)__this->get__headIndex_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_6 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set__headIndex_0(((int32_t)((int32_t)L_5&(int32_t)L_6)));
			int32_t L_7 = (int32_t)__this->get__tailIndex_1();
			il2cpp_codegen_memory_barrier();
			int32_t L_8 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			int32_t L_9 = (int32_t)((int32_t)((int32_t)L_7&(int32_t)L_8));
			V_1 = (int32_t)L_9;
			il2cpp_codegen_memory_barrier();
			__this->set__tailIndex_1(L_9);
			il2cpp_codegen_memory_barrier();
			__this->set__currentOp_6(1);
			IL2CPP_LEAVE(0x7E, FINALLY_0074);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0074;
		}

FINALLY_0074:
		{ // begin finally (depth: 2)
			{
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_007d;
				}
			}

IL_0077:
			{
				WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * L_11 = V_2;
				Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_11, /*hidden argument*/NULL);
			}

IL_007d:
			{
				IL2CPP_END_FINALLY(116)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(116)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x7E, IL_007e)
		}

IL_007e:
		{
			bool L_12 = (bool)__this->get__frozen_7();
			if (L_12)
			{
				goto IL_00c2;
			}
		}

IL_0086:
		{
			int32_t L_13 = V_1;
			int32_t L_14 = (int32_t)__this->get__headIndex_0();
			il2cpp_codegen_memory_barrier();
			int32_t L_15 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_13) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)))))
			{
				goto IL_00c2;
			}
		}

IL_009a:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_17 = V_1;
			int32_t L_18 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			RuntimeObject * L_19 = ___item0;
			NullCheck(L_16);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_17&(int32_t)L_18))), (RuntimeObject *)L_19);
			int32_t L_20 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->set__tailIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
			goto IL_01ee;
		}

IL_00c2:
		{
			il2cpp_codegen_memory_barrier();
			__this->set__currentOp_6(0);
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)__this, (bool*)(bool*)(&V_0), /*hidden argument*/NULL);
			int32_t L_21 = (int32_t)__this->get__headIndex_0();
			il2cpp_codegen_memory_barrier();
			V_4 = (int32_t)L_21;
			int32_t L_22 = (int32_t)__this->get__tailIndex_1();
			il2cpp_codegen_memory_barrier();
			int32_t L_23 = (int32_t)__this->get__headIndex_0();
			il2cpp_codegen_memory_barrier();
			V_5 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23));
			int32_t L_24 = V_5;
			int32_t L_25 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			if ((((int32_t)L_24) < ((int32_t)L_25)))
			{
				goto IL_01b1;
			}
		}

IL_00ff:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_26);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))<<(int32_t)1)));
			V_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_27;
			int32_t L_28 = V_4;
			int32_t L_29 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			V_7 = (int32_t)((int32_t)((int32_t)L_28&(int32_t)L_29));
			int32_t L_30 = V_7;
			if (L_30)
			{
				goto IL_0140;
			}
		}

IL_0123:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_31 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = V_6;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_33 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_33);
			Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_31, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_32, (int32_t)0, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), /*hidden argument*/NULL);
			goto IL_017e;
		}

IL_0140:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_35 = V_7;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = V_6;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_37);
			int32_t L_38 = V_7;
			Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_34, (int32_t)L_35, (RuntimeArray *)(RuntimeArray *)L_36, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))), (int32_t)L_38)), /*hidden argument*/NULL);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_39 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_40 = V_6;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_41);
			int32_t L_42 = V_7;
			int32_t L_43 = V_7;
			Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_39, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_40, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))), (int32_t)L_42)), (int32_t)L_43, /*hidden argument*/NULL);
		}

IL_017e:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = V_6;
			il2cpp_codegen_memory_barrier();
			__this->set__array_2(L_44);
			il2cpp_codegen_memory_barrier();
			__this->set__headIndex_0(0);
			int32_t L_45 = V_5;
			int32_t L_46 = (int32_t)L_45;
			V_1 = (int32_t)L_46;
			il2cpp_codegen_memory_barrier();
			__this->set__tailIndex_1(L_46);
			int32_t L_47 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			il2cpp_codegen_memory_barrier();
			__this->set__mask_3(((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)1))|(int32_t)1)));
		}

IL_01b1:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_48 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
			il2cpp_codegen_memory_barrier();
			int32_t L_49 = V_1;
			int32_t L_50 = (int32_t)__this->get__mask_3();
			il2cpp_codegen_memory_barrier();
			RuntimeObject * L_51 = ___item0;
			NullCheck(L_48);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_49&(int32_t)L_50))), (RuntimeObject *)L_51);
			int32_t L_52 = V_1;
			il2cpp_codegen_memory_barrier();
			__this->set__tailIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
			int32_t L_53 = (int32_t)__this->get__addTakeCount_4();
			int32_t L_54 = (int32_t)__this->get__stealCount_5();
			__this->set__addTakeCount_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_53, (int32_t)L_54)));
			__this->set__stealCount_5(0);
		}

IL_01ee:
		{
			int32_t L_55 = (int32_t)__this->get__addTakeCount_4();
			if (((int64_t)L_55 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_55 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WorkStealingQueue_LocalPush_m21A75830BF02EE497FA709E0A39B7EE096F7EEED_RuntimeMethod_var);
			__this->set__addTakeCount_4(((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1)));
			IL2CPP_LEAVE(0x211, FINALLY_01fe);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01fe;
	}

FINALLY_01fe:
	{ // begin finally (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set__currentOp_6(0);
			bool L_56 = V_0;
			if (!L_56)
			{
				goto IL_0210;
			}
		}

IL_020a:
		{
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)__this, /*hidden argument*/NULL);
		}

IL_0210:
		{
			IL2CPP_END_FINALLY(510)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(510)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x211, IL_0211)
	}

IL_0211:
	{
		return;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::DangerousCopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m14FDBCB9C9328303C9DF8727461C8A0607B6BC7C_gshared (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (int32_t)__this->get__headIndex_0();
		il2cpp_codegen_memory_barrier();
		V_0 = (int32_t)L_0;
		NullCheck((WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 *)__this);
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_1 = (int32_t)L_1;
		int32_t L_2 = ___arrayIndex1;
		int32_t L_3 = V_1;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), (int32_t)1));
		goto IL_003e;
	}

IL_0018:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___array0;
		int32_t L_5 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__array_2();
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = (int32_t)L_7;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		int32_t L_9 = (int32_t)__this->get__mask_3();
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)((int32_t)L_8&(int32_t)L_9));
		RuntimeObject * L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_11);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___arrayIndex1;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return (int32_t)L_15;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::get_DangerousCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m7B7173F3AB4C7B59B72DB25546FDF944300604E7_gshared (WorkStealingQueue_t46BF20180E5A47304513625C3E005065BA4B93D7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__addTakeCount_4();
		int32_t L_1 = (int32_t)__this->get__stealCount_5();
		return (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
